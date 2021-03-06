// =================================================================================================
//
//	Starling Framework
//	Copyright Gamua. All Rights Reserved.
//
//	This program is free software. You can redistribute and/or modify it
//	in accordance with the terms of the accompanying license agreement.
//
// =================================================================================================

package starling.extensions.lighting;

import flash.display3D.Context3DTextureFormat;
import flash.geom.Point;
import flash.geom.Rectangle;
//import flash.utils.Dictionary;
import openfl.utils.Dictionary;
import starling.core.Starling;
import starling.display.Image;
import starling.display.Sprite3D;
import starling.display.Stage;
import starling.events.Event;
import starling.events.Touch;
import starling.events.TouchEvent;
import starling.events.TouchPhase;
import starling.textures.Texture;

/** A class that describes the light used to illuminate meshes using the 'LightStyle'.
 *
 *  <p>When you apply a 'LightStyle' to a mesh, you need to add light sources to the stage -
 *  otherwise, the mesh will be rendered in pure black. You can add the objects anywhere to
 *  the display list: the style will always find them.</p>
 *  
 *  <p>Beware: the maximum number of active lights is 8: any more will be ignored.
 *  Furthermore, the number of lights is limited by the Context3D profile: e.g.
 *  <code>baselineConstrained</code> can't cope with more than one directional and one
 *  ambient light. Be sure to test your scenes in all the profiles you want to support!</p>
 *
 *  <p>There are three different types of light sources:</p>
 *
 *  <ul>
 *    <li>Point lights emit radial light from a single spot, like a candle or light bulb.</li>
 *    <li>Directional lights emit parallel rays, which is ideal to simulate sunlight.</li>
 *    <li>Ambient lights add a basic illumination to all parts of the mesh. 
 *        Their position and rotation is not relevant to the illumination effect.</li>
 *  </ul>
 *  
 *  <p>The main properties to set up for each light source are its type, color, and brightness.
 *  While the position is technically only required for point lights, it also defines where
 *  the 'lightBulb' representation is rendered (if you activate that property). You can drag
 *  light bulbs around with the mouse or finger; press shift while moving the mouse to change
 *  its rotation and z values.</p>
 *  
 *  <p>A directional light defaults to shining in the direction of the positive x-axis.
 *  You can change the direction by modifying <code>rotationX/Y/Z</code> to your needs.</p>
 */
class LightSource extends Sprite3D
{
    public var color(get, set): Int;
    public var brightness(get, set) : Float;
    public var showLightBulb(get, set) : Bool;
    public var type(get, set) : String;
    public var isActive(get, set) : Bool;

    @:meta(Embed(source="lightbulbs.png"))

    private static var LightBulbAtlas : Class<Dynamic>;
    
    private static var ATLAS_TEXTURE_DATA_NAME : String = 
        "starling.extensions.lighting.LightSource.atlasTexture";
    
    /** Point lights emit radial light from a single spot. */
    public static inline var TYPE_POINT : String = "point";
    
    /** Ambient light adds basic illumination to all parts of the mesh. */
    public static inline var TYPE_AMBIENT : String = "ambient";
    
    /** Directional lights emit parallel rays, which is ideal to simulate sunlight. */
    public static inline var TYPE_DIRECTIONAL : String = "directional";
    
    private var _type : String;
    private var _color : Int;
    private var _active : Bool;
    private var _brightness : Float;
    private var _lightBulb : Image;
    
    // helpers
    private static var sMovement : Point = new Point();
    private static var sInstances = new Dictionary<String, LightSource>();
    private static var sRegion : Rectangle = new Rectangle();
    
    /** Creates a new light source with the given properties. */
    public function new(type : String = "point", color : Int = 0xffffff, brightness : Float = 1.0)
    {
        super();
        _type = type;
        _color = color;
        _active = true;
        _brightness = brightness;
        
        addEventListener(Event.ADDED_TO_STAGE, onAddedToStage);
        addEventListener(Event.REMOVED_FROM_STAGE, onRemovedFromStage);
    }
    
    private function onAddedToStage(event : Event) : Void
    {
        var stage : Stage = this.stage;
        var instances : Array<LightSource> = Reflect.field(sInstances, Std.string(stage));
        
        if (instances == null)
        {
            instances = [this];
            Reflect.setField(sInstances, Std.string(stage), instances);
        }
        else
        {
            if (Lambda.indexOf(instances, this) == -1)
            {
                instances[instances.length] = this;
            }
        }
    }
    
    private function onRemovedFromStage(event : Event) : Void
    {
        var stage : Stage = this.stage;
        var instances : Array<LightSource> = Reflect.field(sInstances, Std.string(stage));
		instances.remove(this);
        /*var index : Int = (instances != null) ? Lambda.indexOf(instances, this) : -1;
        if (index != -1)
        {
            instances.remove(index);
        }*/
    }
    
    private function onTouch(event : TouchEvent) : Void
    {
        var touch : Touch = event.getTouch(this, TouchPhase.MOVED);
        if (touch != null)
        {
            touch.getMovement(parent, sMovement);
            
            if (event.shiftKey)
            {
                this.z += sMovement.y;
                this.rotation += sMovement.x * 0.02;
            }
            else
            {
                this.x += sMovement.x;
                this.y += sMovement.y;
            }
        }
        
        touch = event.getTouch(this, TouchPhase.ENDED);
        if (touch != null && touch.tapCount == 2)
        {
            isActive = !_active;
        }
    }
    
    private static function getBulbTexture(type : String) : Texture
    {
        //var atlasTexture : Texture = Starling.painter.sharedData[ATLAS_TEXTURE_DATA_NAME];
        var atlasTexture : Texture = null;
        if (atlasTexture == null)
        {
            atlasTexture = Texture.fromEmbeddedAsset(LightBulbAtlas,
                            false, false, 2, Context3DTextureFormat.BGRA_PACKED
                );
            //Starling.painter.sharedData[ATLAS_TEXTURE_DATA_NAME] = atlasTexture;
        }
        
        sRegion.x = sRegion.y = 0;
        sRegion.width = atlasTexture.width / 3;
        sRegion.height = atlasTexture.height;
        
        if (type == TYPE_AMBIENT)
        {
            sRegion.x = sRegion.width;
        }
        else
        {
            if (type == TYPE_DIRECTIONAL)
            {
                sRegion.x = sRegion.width * 2;
            }
        }
        
        return Texture.fromTexture(atlasTexture, sRegion);
    }
    
    /** The color of the light that's emitted by this light source. @default white */
    function get_color() : Int
    {
        return _color;
    }
    function set_color(value : Int) : Int
    {
        if (_color != value)
        {
            _color = value;
            setRequiresRedraw();
            
            if (_lightBulb != null && _brightness > 0)
            {
                _lightBulb.color = _color;
            }
        }
        return value;
    }
    
    /** The brightness of the light source in the range 0-1. @default 1.0 */
    function get_brightness() : Float
    {
        return _brightness;
    }
    function set_brightness(value : Float) : Float
    {
        if (_brightness != value)
        {
            _brightness = value;
            setRequiresRedraw();
            
            if (_lightBulb != null)
            {
                if (value == 0)
                {
                    _lightBulb.color = 0x0;_lightBulb.alpha = 1.0;
                }
                else
                {
                    _lightBulb.color = _color;_lightBulb.alpha = 0.2 + 0.8 * value;
                }
            }
        }
        return value;
    }
    
    /** Indicates if a representational image should be rendered at the position of the light
     *  source, which is useful for debugging. The image can be moved around with the mouse or
     *  finger; use the shift button while dragging to change the 'z' and 'rotation'
     *  properties; double-tap to switch it on or off. @default false */
    private function get_showLightBulb() : Bool
    {
        return (_lightBulb != null) ? _lightBulb.visible : false;
    }
    private function set_showLightBulb(value : Bool) : Bool
    {
        if (value == showLightBulb)
        {
            return value;
        }
        if (_lightBulb == null)
        {
            _lightBulb = new Image(getBulbTexture(_type));
            _lightBulb.alignPivot();
            _lightBulb.color = _color;
            _lightBulb.alpha = _brightness;
            _lightBulb.useHandCursor = true;
            
            addChild(_lightBulb);
            addEventListener(TouchEvent.TOUCH, onTouch);
        }
        _lightBulb.visible = value;
        return value;
    }
    
    /** The type of the light source, which is one of the following:
     *  <code>TYPE_POINT, TYPE_DIRECTIONAL, TYPE_AMBIENT</code>. */
    private function get_type() : String
    {
        return _type;
    }
    private function set_type(value : String) : String
    {
        if (_type != value)
        {
            _type = value;
            if (_lightBulb != null)
            {
                _lightBulb.texture = getBulbTexture(value);
            }
            setRequiresRedraw();
        }
        return value;
    }
    
    /** Indicates if light is emitted at all. @default true */
    private function get_isActive() : Bool
    {
        return _active;
    }
    private function set_isActive(value : Bool) : Bool
    {
        if (_active != value)
        {
            _active = value;
            if (_lightBulb != null)
            {
                _lightBulb.color = (value) ? _color : 0x0;
            }
            setRequiresRedraw();
        }
        return value;
    }
    
    /** @private 
     *  Returns all active (i.e. active is <code>true</code> and brightness > 0)
     *  light sources on the stage. */
    @:allow(starling.extensions.lighting)
    private static function getActiveInstances(
            stage : Stage, out : Array<LightSource> = null) : Array<LightSource>
    {
        if (out == null)
        {
            out = [];
        }
        else
        {
            //as3hx.Compat.setArrayLength(out, 0);
        }
        
        var instances : Array<LightSource> = Reflect.field(sInstances, Std.string(stage));
        if (instances != null)
        {
            for (i in 0...instances.length)
            {
                var light : LightSource = instances[i];
                if (light._brightness > 0 && light._active)
                {
                    out[out.length] = light;
                }
            }
        }
        
        return out;
    }
    
    /** Creates a new point light with the given properties. */
    public static function createPointLight(color : Int = 0xffffff, brightness : Float = 1.0) : LightSource
    {
        return new LightSource(TYPE_POINT, color, brightness);
    }
    
    /** Creates a new ambient light with the given properties. */
    public static function createAmbientLight(color : Int = 0xffffff, brightness : Float = 1.0) : LightSource
    {
        return new LightSource(TYPE_AMBIENT, color, brightness);
    }
    
    /** Creates a new directional light with the given properties. */
    public static function createDirectionalLight(color : Int = 0xffffff, brightness : Float = 1.0) : LightSource
    {
        return new LightSource(TYPE_DIRECTIONAL, color, brightness);
    }
}

