// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Demo
#include <Demo.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_openfl__Vector_AbstractVector
#include <openfl/_Vector/AbstractVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_starling_animation_IAnimatable
#include <starling/animation/IAnimatable.h>
#endif
#ifndef INCLUDED_starling_core_Starling
#include <starling/core/Starling.h>
#endif
#ifndef INCLUDED_starling_display_DisplayObject
#include <starling/display/DisplayObject.h>
#endif
#ifndef INCLUDED_starling_display_DisplayObjectContainer
#include <starling/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_starling_display_Image
#include <starling/display/Image.h>
#endif
#ifndef INCLUDED_starling_display_Mesh
#include <starling/display/Mesh.h>
#endif
#ifndef INCLUDED_starling_display_MovieClip
#include <starling/display/MovieClip.h>
#endif
#ifndef INCLUDED_starling_display_Quad
#include <starling/display/Quad.h>
#endif
#ifndef INCLUDED_starling_display_Sprite
#include <starling/display/Sprite.h>
#endif
#ifndef INCLUDED_starling_display_Sprite3D
#include <starling/display/Sprite3D.h>
#endif
#ifndef INCLUDED_starling_display_Stage
#include <starling/display/Stage.h>
#endif
#ifndef INCLUDED_starling_events_Event
#include <starling/events/Event.h>
#endif
#ifndef INCLUDED_starling_events_EventDispatcher
#include <starling/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_starling_events_Touch
#include <starling/events/Touch.h>
#endif
#ifndef INCLUDED_starling_events_TouchEvent
#include <starling/events/TouchEvent.h>
#endif
#ifndef INCLUDED_starling_extensions_lighting_LightSource
#include <starling/extensions/lighting/LightSource.h>
#endif
#ifndef INCLUDED_starling_extensions_lighting_LightStyle
#include <starling/extensions/lighting/LightStyle.h>
#endif
#ifndef INCLUDED_starling_styles_MeshStyle
#include <starling/styles/MeshStyle.h>
#endif
#ifndef INCLUDED_starling_textures_Texture
#include <starling/textures/Texture.h>
#endif
#ifndef INCLUDED_starling_textures_TextureAtlas
#include <starling/textures/TextureAtlas.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_470c0fab477d4428_47_new,"Demo","new",0x367a83b5,"Demo.new","Demo.hx",47,0x79ee295b)
HX_LOCAL_STACK_FRAME(_hx_pos_470c0fab477d4428_107_addMarchingCharacters,"Demo","addMarchingCharacters",0xe452b49f,"Demo.addMarchingCharacters","Demo.hx",107,0x79ee295b)
HX_LOCAL_STACK_FRAME(_hx_pos_470c0fab477d4428_101_addMarchingCharacters,"Demo","addMarchingCharacters",0xe452b49f,"Demo.addMarchingCharacters","Demo.hx",101,0x79ee295b)
HX_LOCAL_STACK_FRAME(_hx_pos_470c0fab477d4428_153_addStaticCharacter,"Demo","addStaticCharacter",0x3abad045,"Demo.addStaticCharacter","Demo.hx",153,0x79ee295b)
HX_LOCAL_STACK_FRAME(_hx_pos_470c0fab477d4428_135_addStaticCharacter,"Demo","addStaticCharacter",0x3abad045,"Demo.addStaticCharacter","Demo.hx",135,0x79ee295b)
HX_LOCAL_STACK_FRAME(_hx_pos_470c0fab477d4428_187_createCharacter,"Demo","createCharacter",0x7a9773e2,"Demo.createCharacter","Demo.hx",187,0x79ee295b)
HX_LOCAL_STACK_FRAME(_hx_pos_470c0fab477d4428_176_createCharacter,"Demo","createCharacter",0x7a9773e2,"Demo.createCharacter","Demo.hx",176,0x79ee295b)

void Demo_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_470c0fab477d4428_47_new)
HXLINE(  48)		super::__construct();
HXLINE(  49)		this->_stageWidth = ::starling::core::Starling_obj::get_current()->get_stage()->get_stageWidth();
HXLINE(  50)		this->_stageHeight = ::starling::core::Starling_obj::get_current()->get_stage()->get_stageHeight();
HXLINE(  52)		this->_characters =  ::starling::display::Sprite_obj::__alloc( HX_CTX );
HXLINE(  53)		 ::starling::display::Sprite _hx_tmp = this->_characters;
HXDLIN(  53)		_hx_tmp->set_y(((Float)this->_stageHeight / (Float)(int)2));
HXLINE(  54)		this->addChild(this->_characters);
HXLINE(  56)		 ::starling::textures::Texture characterTexture = ::starling::textures::Texture_obj::fromEmbeddedAsset(::Demo_obj::CharacterTexture,null(),null(),null(),null(),null());
HXLINE(  57)		 ::starling::textures::Texture characterNormalTexture = ::starling::textures::Texture_obj::fromEmbeddedAsset(::Demo_obj::CharacterNormalTexture,null(),null(),null(),null(),null());
HXLINE(  58)		 ::Xml characterXml = ::Xml_obj::parse(( (::String)(::Type_obj::createInstance(::Demo_obj::CharacterXml,::cpp::VirtualArray_obj::__new(0))) ));
HXLINE(  60)		 ::starling::textures::TextureAtlas textureAtlas =  ::starling::textures::TextureAtlas_obj::__alloc( HX_CTX ,characterTexture,characterXml);
HXLINE(  61)		 ::starling::textures::TextureAtlas normalTextureAtlas =  ::starling::textures::TextureAtlas_obj::__alloc( HX_CTX ,characterNormalTexture,characterXml);
HXLINE(  62)		 ::openfl::_Vector::AbstractVector textures = textureAtlas->getTextures(null(),null());
HXLINE(  63)		 ::openfl::_Vector::AbstractVector normalTextures = normalTextureAtlas->getTextures(null(),null());
HXLINE(  65)		 ::starling::extensions::lighting::LightSource ambientLight = ::starling::extensions::lighting::LightSource_obj::createAmbientLight(null(),null());
HXLINE(  66)		ambientLight->set_x((this->_stageWidth * ((Float)0.5)));
HXLINE(  67)		ambientLight->set_y((this->_stageHeight * ((Float)0.2)));
HXLINE(  68)		ambientLight->set_z((int)-150);
HXLINE(  69)		ambientLight->set_showLightBulb(true);
HXLINE(  71)		 ::starling::extensions::lighting::LightSource pointLightA = ::starling::extensions::lighting::LightSource_obj::createPointLight((int)65280,null());
HXLINE(  72)		pointLightA->set_x((this->_stageWidth * ((Float)0.25)));
HXLINE(  73)		pointLightA->set_y((this->_stageHeight * ((Float)0.2)));
HXLINE(  74)		pointLightA->set_z((int)-150);
HXLINE(  75)		pointLightA->set_showLightBulb(true);
HXLINE(  77)		 ::starling::extensions::lighting::LightSource pointLightB = ::starling::extensions::lighting::LightSource_obj::createPointLight((int)16711935,null());
HXLINE(  78)		pointLightB->set_x((this->_stageWidth * ((Float)0.75)));
HXLINE(  79)		pointLightB->set_y((this->_stageHeight * ((Float)0.2)));
HXLINE(  80)		pointLightB->set_z((int)-150);
HXLINE(  81)		pointLightB->set_showLightBulb(true);
HXLINE(  83)		 ::starling::extensions::lighting::LightSource directionalLight = ::starling::extensions::lighting::LightSource_obj::createDirectionalLight(null(),null());
HXLINE(  84)		directionalLight->set_x((this->_stageWidth * ((Float)0.6)));
HXLINE(  85)		directionalLight->set_y((this->_stageHeight * ((Float)0.3)));
HXLINE(  86)		directionalLight->set_z((int)-150);
HXLINE(  87)		directionalLight->set_rotationY(((Float)-1.0));
HXLINE(  88)		directionalLight->set_showLightBulb(true);
HXLINE(  90)		this->addMarchingCharacters((int)8,textures,normalTextures);
HXLINE(  93)		this->addChild(ambientLight);
HXLINE(  94)		this->addChild(pointLightA);
HXLINE(  95)		this->addChild(pointLightB);
            	}

Dynamic Demo_obj::__CreateEmpty() { return new Demo_obj; }

void *Demo_obj::_hx_vtable = 0;

Dynamic Demo_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Demo_obj > _hx_result = new Demo_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Demo_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x31a4bcfa) {
		if (inClassId<=(int)0x2d3f8543) {
			if (inClassId<=(int)0x25137bc0) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x25137bc0;
			} else {
				return inClassId==(int)0x2d3f8543;
			}
		} else {
			return inClassId==(int)0x31a4bcfa;
		}
	} else {
		return inClassId==(int)0x478fd1bb || inClassId==(int)0x6dea180f;
	}
}

void Demo_obj::addMarchingCharacters(int count, ::openfl::_Vector::AbstractVector textures, ::openfl::_Vector::AbstractVector normalTextures){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::Demo,_gthis) HXARGC(2)
            		void _hx_run( ::starling::events::Event event,Float passedTime){
            			HX_STACKFRAME(&_hx_pos_470c0fab477d4428_107_addMarchingCharacters)
HXLINE( 108)			 ::starling::display::MovieClip character;
HXDLIN( 108)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 108)				character = hx::TCast<  ::starling::display::MovieClip >::cast(event->target);
            			}
            			catch( ::Dynamic _hx_e){
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic e = _hx_e;
HXLINE( 108)					character = null();
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE( 109)			character->advanceTime(passedTime);
HXLINE( 110)			{
HXLINE( 110)				 ::starling::display::MovieClip _g = character;
HXDLIN( 110)				Float onEnterFrame1 = _g->get_x();
HXDLIN( 110)				_g->set_x((onEnterFrame1 + ((int)100 * passedTime)));
            			}
HXLINE( 112)			Float onEnterFrame2 = character->get_x();
HXDLIN( 112)			if ((onEnterFrame2 > _gthis->_stageWidth)) {
HXLINE( 114)				Float onEnterFrame3 = -(character->get_width());
HXDLIN( 114)				Float onEnterFrame4 = character->get_x();
HXDLIN( 114)				character->set_x((onEnterFrame3 + (onEnterFrame4 - _gthis->_stageWidth)));
            			}
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_STACKFRAME(&_hx_pos_470c0fab477d4428_101_addMarchingCharacters)
HXLINE(  98)		 ::Demo _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE( 102)		Float characterWidth = ( ( ::starling::textures::Texture)(::openfl::_Vector::IVector_obj::get(textures->data,(int)0)) )->get_frameWidth();
HXLINE( 103)		Float offset = ((Float)(this->_stageWidth + characterWidth) / (Float)count);
HXLINE( 106)		 ::Dynamic onEnterFrame =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE( 118)		{
HXLINE( 118)			int _g1 = (int)0;
HXDLIN( 118)			int _g2 = count;
HXDLIN( 118)			while((_g1 < _g2)){
HXLINE( 118)				_g1 = (_g1 + (int)1);
HXDLIN( 118)				int i = (_g1 - (int)1);
HXLINE( 120)				 ::starling::display::MovieClip movie = this->createCharacter(textures,normalTextures,null());
HXLINE( 121)				Float _hx_tmp = movie->get_totalTime();
HXDLIN( 121)				movie->set_currentTime((_hx_tmp * ::Math_obj::random()));
HXLINE( 122)				movie->set_x((-(characterWidth) + (i * offset)));
HXLINE( 123)				movie->set_y(((Float)movie->get_height() / (Float)(int)-2));
HXLINE( 124)				movie->addEventListener(HX_("enterFrame",f5,03,50,02),onEnterFrame);
HXLINE( 125)				this->addChild(movie);
HXLINE( 126)				this->_characters->addChild(movie);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Demo_obj,addMarchingCharacters,(void))

void Demo_obj::addStaticCharacter( ::starling::textures::Texture texture, ::starling::textures::Texture normalTexture){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0, ::starling::display::DisplayObject,that, ::starling::display::Sprite3D,sprite3D) HXARGC(1)
            		void _hx_run( ::starling::events::TouchEvent event){
            			HX_GC_STACKFRAME(&_hx_pos_470c0fab477d4428_153_addStaticCharacter)
HXLINE( 154)			 ::starling::events::Touch touch = event->getTouch(sprite3D,HX_("moved",33,cc,65,0c),null());
HXLINE( 155)			if (hx::IsNotNull( touch )) {
HXLINE( 157)				 ::openfl::geom::Point movement = touch->getMovement(that,null());
HXLINE( 159)				if (event->get_shiftKey()) {
HXLINE( 161)					{
HXLINE( 161)						 ::starling::display::Sprite3D _g3 = sprite3D;
HXDLIN( 161)						Float _hx_tmp = _g3->get_rotationX();
HXDLIN( 161)						_g3->set_rotationX((_hx_tmp - (movement->y * ((Float)0.01))));
            					}
HXLINE( 162)					{
HXLINE( 162)						 ::starling::display::Sprite3D _g4 = sprite3D;
HXDLIN( 162)						Float _hx_tmp1 = _g4->get_rotationY();
HXDLIN( 162)						_g4->set_rotationY((_hx_tmp1 + (movement->x * ((Float)0.01))));
            					}
            				}
            				else {
HXLINE( 166)					{
HXLINE( 166)						 ::starling::display::Sprite3D _g5 = sprite3D;
HXDLIN( 166)						Float _hx_tmp2 = _g5->get_x();
HXDLIN( 166)						_g5->set_x((_hx_tmp2 + movement->x));
            					}
HXLINE( 167)					{
HXLINE( 167)						 ::starling::display::Sprite3D _g6 = sprite3D;
HXDLIN( 167)						Float _hx_tmp3 = _g6->get_y();
HXDLIN( 167)						_g6->set_y((_hx_tmp3 + movement->y));
            					}
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_470c0fab477d4428_135_addStaticCharacter)
HXLINE( 137)		::Array< ::Dynamic> a = ::Array_obj< ::Dynamic>::__new(1)->init(0,texture);
HXDLIN( 137)		int length = null();
HXDLIN( 137)		bool fixed = null();
HXDLIN( 137)		 ::openfl::_Vector::AbstractVector vector =  ::openfl::_Vector::AbstractVector_obj::__alloc( HX_CTX , ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,null()),null());
HXDLIN( 137)		{
HXLINE( 137)			int _g1 = (int)0;
HXDLIN( 137)			int _g = a->length;
HXDLIN( 137)			while((_g1 < _g)){
HXLINE( 137)				_g1 = (_g1 + (int)1);
HXDLIN( 137)				int i = (_g1 - (int)1);
HXDLIN( 137)				::openfl::_Vector::IVector_obj::set(vector->data,i,a->__get(i).StaticCast<  ::starling::textures::Texture >());
            			}
            		}
HXDLIN( 137)		 ::openfl::_Vector::AbstractVector movie = vector;
HXLINE( 138)		::Array< ::Dynamic> a1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,normalTexture);
HXDLIN( 138)		int length1 = null();
HXDLIN( 138)		bool fixed1 = null();
HXDLIN( 138)		 ::openfl::_Vector::AbstractVector vector1 =  ::openfl::_Vector::AbstractVector_obj::__alloc( HX_CTX , ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length1,fixed1,null()),null());
HXDLIN( 138)		{
HXLINE( 138)			int _g11 = (int)0;
HXDLIN( 138)			int _g2 = a1->length;
HXDLIN( 138)			while((_g11 < _g2)){
HXLINE( 138)				_g11 = (_g11 + (int)1);
HXDLIN( 138)				int i1 = (_g11 - (int)1);
HXDLIN( 138)				::openfl::_Vector::IVector_obj::set(vector1->data,i1,a1->__get(i1).StaticCast<  ::starling::textures::Texture >());
            			}
            		}
HXLINE( 136)		 ::starling::display::MovieClip movie1 = this->createCharacter(movie,vector1,(int)1);
HXLINE( 141)		movie1->alignPivot(null(),null());
HXLINE( 142)		this->_characters->addChild(movie1);
HXLINE( 144)		 ::starling::display::Sprite3D sprite3D =  ::starling::display::Sprite3D_obj::__alloc( HX_CTX );
HXLINE( 145)		sprite3D->addChild(movie1);
HXLINE( 146)		sprite3D->set_x((((Float)this->_stageWidth / (Float)(int)2) + ((Float)0.5)));
HXLINE( 147)		sprite3D->set_y((((Float)this->_stageHeight / (Float)(int)2) + ((Float)0.5)));
HXLINE( 148)		this->addChild(sprite3D);
HXLINE( 150)		 ::starling::display::DisplayObject that = hx::ObjectPtr<OBJ_>(this);
HXLINE( 152)		sprite3D->addEventListener(HX_("touch",bf,17,33,14), ::Dynamic(new _hx_Closure_0(that,sprite3D)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Demo_obj,addStaticCharacter,(void))

 ::starling::display::MovieClip Demo_obj::createCharacter( ::openfl::_Vector::AbstractVector textures, ::openfl::_Vector::AbstractVector normalTextures,hx::Null< int >  __o_fps){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0, ::openfl::_Vector::AbstractVector,normalTextures, ::starling::extensions::lighting::LightStyle,lightStyle) HXARGC(2)
            		void _hx_run( ::starling::display::MovieClip movieClip,int frameID){
            			HX_GC_STACKFRAME(&_hx_pos_470c0fab477d4428_187_createCharacter)
HXLINE( 187)			lightStyle->set_normalTexture(( ( ::starling::textures::Texture)(::openfl::_Vector::IVector_obj::get(normalTextures->data,frameID)) ));
            		}
            		HX_END_LOCAL_FUNC2((void))

int fps = __o_fps.Default(12);
            	HX_GC_STACKFRAME(&_hx_pos_470c0fab477d4428_176_createCharacter)
HXLINE( 177)		 ::starling::display::MovieClip movie =  ::starling::display::MovieClip_obj::__alloc( HX_CTX ,textures,fps);
HXLINE( 178)		 ::starling::extensions::lighting::LightStyle lightStyle =  ::starling::extensions::lighting::LightStyle_obj::__alloc( HX_CTX ,( ( ::starling::textures::Texture)(::openfl::_Vector::IVector_obj::get(normalTextures->data,(int)0)) ));
HXLINE( 179)		lightStyle->set_ambientRatio(((Float)0.3));
HXLINE( 180)		lightStyle->set_diffuseRatio(((Float)0.7));
HXLINE( 181)		lightStyle->set_specularRatio(((Float)0.5));
HXLINE( 182)		lightStyle->set_shininess((int)16);
HXLINE( 183)		movie->set_style(lightStyle);
HXLINE( 185)		 ::Dynamic updateStyle =  ::Dynamic(new _hx_Closure_0(normalTextures,lightStyle));
HXLINE( 190)		{
HXLINE( 190)			int _g1 = (int)0;
HXDLIN( 190)			int _g = movie->get_numFrames();
HXDLIN( 190)			while((_g1 < _g)){
HXLINE( 190)				_g1 = (_g1 + (int)1);
HXDLIN( 190)				int i = (_g1 - (int)1);
HXLINE( 192)				movie->setFrameAction(i,updateStyle);
            			}
            		}
HXLINE( 195)		return movie;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Demo_obj,createCharacter,return )

hx::Class Demo_obj::CharacterTexture;

hx::Class Demo_obj::CharacterNormalTexture;

hx::Class Demo_obj::CharacterXml;


hx::ObjectPtr< Demo_obj > Demo_obj::__new() {
	hx::ObjectPtr< Demo_obj > __this = new Demo_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Demo_obj > Demo_obj::__alloc(hx::Ctx *_hx_ctx) {
	Demo_obj *__this = (Demo_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Demo_obj), true, "Demo"));
	*(void **)__this = Demo_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Demo_obj::Demo_obj()
{
}

void Demo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Demo);
	HX_MARK_MEMBER_NAME(_characters,"_characters");
	HX_MARK_MEMBER_NAME(_stageWidth,"_stageWidth");
	HX_MARK_MEMBER_NAME(_stageHeight,"_stageHeight");
	 ::starling::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Demo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_characters,"_characters");
	HX_VISIT_MEMBER_NAME(_stageWidth,"_stageWidth");
	HX_VISIT_MEMBER_NAME(_stageHeight,"_stageHeight");
	 ::starling::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Demo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_characters") ) { return hx::Val( _characters ); }
		if (HX_FIELD_EQ(inName,"_stageWidth") ) { return hx::Val( _stageWidth ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_stageHeight") ) { return hx::Val( _stageHeight ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createCharacter") ) { return hx::Val( createCharacter_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"addStaticCharacter") ) { return hx::Val( addStaticCharacter_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"addMarchingCharacters") ) { return hx::Val( addMarchingCharacters_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Demo_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"CharacterXml") ) { outValue = ( CharacterXml ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"CharacterTexture") ) { outValue = ( CharacterTexture ); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"CharacterNormalTexture") ) { outValue = ( CharacterNormalTexture ); return true; }
	}
	return false;
}

hx::Val Demo_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_characters") ) { _characters=inValue.Cast<  ::starling::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_stageWidth") ) { _stageWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_stageHeight") ) { _stageHeight=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Demo_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"CharacterXml") ) { CharacterXml=ioValue.Cast< hx::Class >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"CharacterTexture") ) { CharacterTexture=ioValue.Cast< hx::Class >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"CharacterNormalTexture") ) { CharacterNormalTexture=ioValue.Cast< hx::Class >(); return true; }
	}
	return false;
}

void Demo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_characters","\xc9","\x25","\x58","\x28"));
	outFields->push(HX_HCSTRING("_stageWidth","\x87","\xd7","\x3c","\xf0"));
	outFields->push(HX_HCSTRING("_stageHeight","\x46","\x37","\x4f","\xfb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Demo_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::starling::display::Sprite*/ ,(int)offsetof(Demo_obj,_characters),HX_HCSTRING("_characters","\xc9","\x25","\x58","\x28")},
	{hx::fsFloat,(int)offsetof(Demo_obj,_stageWidth),HX_HCSTRING("_stageWidth","\x87","\xd7","\x3c","\xf0")},
	{hx::fsFloat,(int)offsetof(Demo_obj,_stageHeight),HX_HCSTRING("_stageHeight","\x46","\x37","\x4f","\xfb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Demo_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::hx::Class*/ ,(void *) &Demo_obj::CharacterTexture,HX_HCSTRING("CharacterTexture","\x52","\xa8","\x69","\x7a")},
	{hx::fsObject /*::hx::Class*/ ,(void *) &Demo_obj::CharacterNormalTexture,HX_HCSTRING("CharacterNormalTexture","\x2b","\x74","\xde","\xf0")},
	{hx::fsObject /*::hx::Class*/ ,(void *) &Demo_obj::CharacterXml,HX_HCSTRING("CharacterXml","\xce","\x85","\x93","\xf0")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Demo_obj_sMemberFields[] = {
	HX_HCSTRING("_characters","\xc9","\x25","\x58","\x28"),
	HX_HCSTRING("_stageWidth","\x87","\xd7","\x3c","\xf0"),
	HX_HCSTRING("_stageHeight","\x46","\x37","\x4f","\xfb"),
	HX_HCSTRING("addMarchingCharacters","\x0a","\x88","\x2b","\x5a"),
	HX_HCSTRING("addStaticCharacter","\xfa","\x7b","\x62","\xc6"),
	HX_HCSTRING("createCharacter","\x0d","\x95","\xc6","\xe2"),
	::String(null()) };

static void Demo_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Demo_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Demo_obj::CharacterTexture,"CharacterTexture");
	HX_MARK_MEMBER_NAME(Demo_obj::CharacterNormalTexture,"CharacterNormalTexture");
	HX_MARK_MEMBER_NAME(Demo_obj::CharacterXml,"CharacterXml");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Demo_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Demo_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Demo_obj::CharacterTexture,"CharacterTexture");
	HX_VISIT_MEMBER_NAME(Demo_obj::CharacterNormalTexture,"CharacterNormalTexture");
	HX_VISIT_MEMBER_NAME(Demo_obj::CharacterXml,"CharacterXml");
};

#endif

hx::Class Demo_obj::__mClass;

static ::String Demo_obj_sStaticFields[] = {
	HX_HCSTRING("CharacterTexture","\x52","\xa8","\x69","\x7a"),
	HX_HCSTRING("CharacterNormalTexture","\x2b","\x74","\xde","\xf0"),
	HX_HCSTRING("CharacterXml","\xce","\x85","\x93","\xf0"),
	::String(null())
};

void Demo_obj::__register()
{
	hx::Object *dummy = new Demo_obj;
	Demo_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Demo","\x43","\x85","\x3f","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Demo_obj::__GetStatic;
	__mClass->mSetStaticField = &Demo_obj::__SetStatic;
	__mClass->mMarkFunc = Demo_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Demo_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Demo_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Demo_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Demo_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Demo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Demo_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

