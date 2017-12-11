// =================================================================================================
//
//	Starling Framework
//	Copyright 2011-2015 Gamua. All Rights Reserved.
//
//	This program is free software. You can redistribute and/or modify it
//	in accordance with the terms of the accompanying license agreement.
//
// =================================================================================================

//import CharacterXml;
import flash.geom.Point;
import openfl.Vector;
import starling.core.Starling;
import starling.display.DisplayObject;
import starling.display.MovieClip;
import starling.display.Sprite;
import starling.display.Sprite3D;
import starling.events.Event;
import starling.events.Touch;
import starling.events.TouchEvent;
import starling.events.TouchPhase;
import starling.extensions.lighting.LightSource;
import starling.extensions.lighting.LightStyle;
import starling.textures.Texture;
import starling.textures.TextureAtlas;

class Demo extends Sprite
{
    @:meta(Embed(source="../assets/character.png"))

    private static var CharacterTexture : Class<Dynamic>;
    
    @:meta(Embed(source="../assets/character_n.png"))

    private static var CharacterNormalTexture : Class<Dynamic>;
    
    @:meta(Embed(source="../assets/character.xml",mimeType="application/octet-stream"))

    private static var CharacterXml : Class<Dynamic>;
    
    private var _characters : Sprite;
    private var _stageWidth : Float;
    private var _stageHeight : Float;
    
    public function new()
    {
        super();
        _stageWidth = Starling.current.stage.stageWidth;
        _stageHeight = Starling.current.stage.stageHeight;
        
        _characters = new Sprite();
        _characters.y = _stageHeight / 2;
        addChild(_characters);
        
        var characterTexture : Texture = Texture.fromEmbeddedAsset(CharacterTexture);
        var characterNormalTexture : Texture = Texture.fromEmbeddedAsset(CharacterNormalTexture);
        var characterXml : Xml = Xml.parse(Type.createInstance(CharacterXml, []));
        
        var textureAtlas : TextureAtlas = new TextureAtlas(characterTexture, characterXml);
        var normalTextureAtlas : TextureAtlas = new TextureAtlas(characterNormalTexture, characterXml);
        var textures = textureAtlas.getTextures();
        var normalTextures= normalTextureAtlas.getTextures();
        
        var ambientLight : LightSource = LightSource.createAmbientLight();
        ambientLight.x = _stageWidth * 0.5;
        ambientLight.y = _stageHeight * 0.2;
        ambientLight.z = -150;
        ambientLight.showLightBulb = true;
        
        var pointLightA : LightSource = LightSource.createPointLight(0x00ff00);
        pointLightA.x = _stageWidth * 0.25;
        pointLightA.y = _stageHeight * 0.2;
        pointLightA.z = -150;
        pointLightA.showLightBulb = true;
        
        var pointLightB : LightSource = LightSource.createPointLight(0xff00ff);
        pointLightB.x = _stageWidth * 0.75;
        pointLightB.y = _stageHeight * 0.2;
        pointLightB.z = -150;
        pointLightB.showLightBulb = true;
        
        var directionalLight : LightSource = LightSource.createDirectionalLight();
        directionalLight.x = _stageWidth * 0.6;
        directionalLight.y = _stageHeight * 0.3;
        directionalLight.z = -150;
        directionalLight.rotationY = -1.0;
        directionalLight.showLightBulb = true;
        
        addMarchingCharacters(8, textures, normalTextures);
        // addStaticCharacter(textures[0], normalTextures[0]);
        
        addChild(ambientLight);
        addChild(pointLightA);
        addChild(pointLightB);
    }
    
    private function addMarchingCharacters(count : Int,
            textures : Vector<Texture>,
            normalTextures : Vector<Texture>) : Void
    {
        var characterWidth : Float = textures[0].frameWidth;
        var offset : Float = (_stageWidth + characterWidth) / count;
        
		
		function onEnterFrame(event : Event, passedTime : Float) : Void
        {
            var character : MovieClip = try cast(event.target, MovieClip) catch(e:Dynamic) null;
            character.advanceTime(passedTime);
            character.x += 100 * passedTime;
            
            if (character.x > _stageWidth)
            {
                character.x = -character.width + (character.x - _stageWidth);
            }
        };
		
        for (i in 0...count)
        {
            var movie : MovieClip = createCharacter(textures, normalTextures);
            movie.currentTime = movie.totalTime * Math.random();
            movie.x = -characterWidth + i * offset;
            movie.y = movie.height / -2;
            movie.addEventListener(Event.ENTER_FRAME, onEnterFrame);
            addChild(movie);
            _characters.addChild(movie);
        }
        
        
    }
    
    /** This method is useful during development, to have a simple static image that's easy
     *  to experiment with. */
    private function addStaticCharacter(texture : Texture, normalTexture : Texture) : Void
    {
        var movie : MovieClip = createCharacter(
                Vector.ofArray([texture]),
                Vector.ofArray([normalTexture]), 1
        );
        
        movie.alignPivot();
        _characters.addChild(movie);
        
        var sprite3D : Sprite3D = new Sprite3D();
        sprite3D.addChild(movie);
        sprite3D.x = _stageWidth / 2 + 0.5;
        sprite3D.y = _stageHeight / 2 + 0.5;
        addChild(sprite3D);
        
        var that : DisplayObject = this;
        
        sprite3D.addEventListener(TouchEvent.TOUCH, function(event : TouchEvent) : Void
                {
                    var touch : Touch = event.getTouch(sprite3D, TouchPhase.MOVED);
                    if (touch != null)
                    {
                        var movement : Point = touch.getMovement(that);
                        
                        if (event.shiftKey)
                        {
                            sprite3D.rotationX -= movement.y * 0.01;
                            sprite3D.rotationY += movement.x * 0.01;
                        }
                        else
                        {
                            sprite3D.x += movement.x;
                            sprite3D.y += movement.y;
                        }
                    }
                });
    }
    
    private function createCharacter(textures : Vector<Texture>,
            normalTextures : Vector<Texture>,
            fps : Int = 12) : MovieClip
    {
        var movie : MovieClip = new MovieClip(textures, fps);
        var lightStyle : LightStyle = new LightStyle(normalTextures[0]);
        lightStyle.ambientRatio = 0.3;
        lightStyle.diffuseRatio = 0.7;
        lightStyle.specularRatio = 0.5;
        lightStyle.shininess = 16;
        movie.style = lightStyle;
		
        function updateStyle(movieClip : MovieClip, frameID : Int) : Void
        {
            lightStyle.normalTexture = normalTextures[frameID];
        };
		
        for (i in 0...movie.numFrames)
        {
            movie.setFrameAction(i, updateStyle);
        }
        
        return movie;
        
       
    }
}

