// Generated by Haxe 3.4.3
#ifndef INCLUDED_starling_display_Sprite3D
#define INCLUDED_starling_display_Sprite3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_starling_display_DisplayObjectContainer
#include <starling/display/DisplayObjectContainer.h>
#endif
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)
HX_DECLARE_CLASS2(starling,display,DisplayObject)
HX_DECLARE_CLASS2(starling,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(starling,display,Sprite3D)
HX_DECLARE_CLASS2(starling,events,Event)
HX_DECLARE_CLASS2(starling,events,EventDispatcher)
HX_DECLARE_CLASS2(starling,rendering,Painter)

namespace starling{
namespace display{


class HXCPP_CLASS_ATTRIBUTES Sprite3D_obj : public  ::starling::display::DisplayObjectContainer_obj
{
	public:
		typedef  ::starling::display::DisplayObjectContainer_obj super;
		typedef Sprite3D_obj OBJ_;
		Sprite3D_obj();

	public:
		enum { _hx_ClassId = 0x2874232c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="starling.display.Sprite3D")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"starling.display.Sprite3D"); }
		static hx::ObjectPtr< Sprite3D_obj > __new();
		static hx::ObjectPtr< Sprite3D_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sprite3D_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Sprite3D","\x16","\x90","\x7a","\x13"); }

		static void __boot();
		static Float E;
		static  ::openfl::geom::Vector3D sHelperPoint;
		static  ::openfl::geom::Vector3D sHelperPointAlt;
		static  ::openfl::geom::Matrix3D sHelperMatrix;
		Float _hx___rotationX;
		Float _hx___rotationY;
		Float _hx___scaleZ;
		Float _hx___pivotZ;
		Float _hx___z;
		void render( ::starling::rendering::Painter painter);

		 ::starling::display::DisplayObject hitTest( ::openfl::geom::Point localPoint);

		void _hx___onAddedChild( ::starling::events::Event event);
		::Dynamic _hx___onAddedChild_dyn();

		void _hx___onRemovedChild( ::starling::events::Event event);
		::Dynamic _hx___onRemovedChild_dyn();

		void _hx___recursivelySetIs3D( ::starling::display::DisplayObject object,bool value);
		::Dynamic _hx___recursivelySetIs3D_dyn();

		void _hx___updateTransformationMatrices(Float x,Float y,Float pivotX,Float pivotY,Float scaleX,Float scaleY,Float skewX,Float skewY,Float rotation, ::openfl::geom::Matrix out, ::openfl::geom::Matrix3D out3D);

		void _hx___updateTransformationMatrices3D(Float x,Float y,Float z,Float pivotX,Float pivotY,Float pivotZ,Float scaleX,Float scaleY,Float scaleZ,Float rotationX,Float rotationY,Float rotationZ, ::openfl::geom::Matrix out, ::openfl::geom::Matrix3D out3D);
		::Dynamic _hx___updateTransformationMatrices3D_dyn();

		 ::openfl::geom::Matrix set_transformationMatrix( ::openfl::geom::Matrix value);

		Float get_z();
		::Dynamic get_z_dyn();

		Float set_z(Float value);
		::Dynamic set_z_dyn();

		Float get_pivotZ();
		::Dynamic get_pivotZ_dyn();

		Float set_pivotZ(Float value);
		::Dynamic set_pivotZ_dyn();

		Float get_scaleZ();
		::Dynamic get_scaleZ_dyn();

		Float set_scaleZ(Float value);
		::Dynamic set_scaleZ_dyn();

		Float set_scale(Float value);

		Float set_skewX(Float value);

		Float set_skewY(Float value);

		Float get_rotationX();
		::Dynamic get_rotationX_dyn();

		Float set_rotationX(Float value);
		::Dynamic set_rotationX_dyn();

		Float get_rotationY();
		::Dynamic get_rotationY_dyn();

		Float set_rotationY(Float value);
		::Dynamic set_rotationY_dyn();

		Float get_rotationZ();
		::Dynamic get_rotationZ_dyn();

		Float set_rotationZ(Float value);
		::Dynamic set_rotationZ_dyn();

		bool get_isFlat();
		::Dynamic get_isFlat_dyn();

};

} // end namespace starling
} // end namespace display

#endif /* INCLUDED_starling_display_Sprite3D */ 
