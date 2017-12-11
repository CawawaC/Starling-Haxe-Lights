// Generated by Haxe 3.4.3
#ifndef INCLUDED_starling_filters_FilterQuad
#define INCLUDED_starling_filters_FilterQuad

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_starling_display_Mesh
#include <starling/display/Mesh.h>
#endif
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(starling,display,DisplayObject)
HX_DECLARE_CLASS2(starling,display,Mesh)
HX_DECLARE_CLASS2(starling,events,EventDispatcher)
HX_DECLARE_CLASS2(starling,filters,FilterQuad)
HX_DECLARE_CLASS2(starling,textures,Texture)

namespace starling{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES FilterQuad_obj : public  ::starling::display::Mesh_obj
{
	public:
		typedef  ::starling::display::Mesh_obj super;
		typedef FilterQuad_obj OBJ_;
		FilterQuad_obj();

	public:
		enum { _hx_ClassId = 0x6cd18932 };

		void __construct(::String smoothing);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="starling.filters.FilterQuad")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"starling.filters.FilterQuad"); }
		static hx::ObjectPtr< FilterQuad_obj > __new(::String smoothing);
		static hx::ObjectPtr< FilterQuad_obj > __alloc(hx::Ctx *_hx_ctx,::String smoothing);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FilterQuad_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("FilterQuad","\xbf","\xc4","\xff","\x4d"); }

		static void __boot();
		static  ::openfl::geom::Matrix sMatrix;
		void dispose();

		void disposeTexture();
		::Dynamic disposeTexture_dyn();

		void moveVertices( ::starling::display::DisplayObject sourceSpace, ::starling::display::DisplayObject targetSpace);
		::Dynamic moveVertices_dyn();

		void setBounds( ::openfl::geom::Rectangle bounds);
		::Dynamic setBounds_dyn();

		 ::starling::textures::Texture set_texture( ::starling::textures::Texture value);

};

} // end namespace starling
} // end namespace filters

#endif /* INCLUDED_starling_filters_FilterQuad */ 
