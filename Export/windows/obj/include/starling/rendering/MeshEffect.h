// Generated by Haxe 3.4.3
#ifndef INCLUDED_starling_rendering_MeshEffect
#define INCLUDED_starling_rendering_MeshEffect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_starling_rendering_FilterEffect
#include <starling/rendering/FilterEffect.h>
#endif
HX_DECLARE_CLASS2(openfl,_Vector,AbstractVector)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(starling,rendering,Effect)
HX_DECLARE_CLASS2(starling,rendering,FilterEffect)
HX_DECLARE_CLASS2(starling,rendering,MeshEffect)
HX_DECLARE_CLASS2(starling,rendering,Program)
HX_DECLARE_CLASS2(starling,rendering,VertexDataFormat)

namespace starling{
namespace rendering{


class HXCPP_CLASS_ATTRIBUTES MeshEffect_obj : public  ::starling::rendering::FilterEffect_obj
{
	public:
		typedef  ::starling::rendering::FilterEffect_obj super;
		typedef MeshEffect_obj OBJ_;
		MeshEffect_obj();

	public:
		enum { _hx_ClassId = 0x7fe47262 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="starling.rendering.MeshEffect")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"starling.rendering.MeshEffect"); }
		static hx::ObjectPtr< MeshEffect_obj > __new();
		static hx::ObjectPtr< MeshEffect_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MeshEffect_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("MeshEffect","\x7e","\xcc","\x3d","\x3b"); }

		static void __boot();
		static  ::starling::rendering::VertexDataFormat VERTEX_FORMAT;
		static  ::openfl::_Vector::AbstractVector sRenderAlpha;
		Float _alpha;
		bool _tinted;
		bool _optimizeIfNotTinted;
		virtual int get_programVariantName();

		virtual  ::starling::rendering::Program createProgram();

		virtual void beforeDraw( ::openfl::display3D::Context3D context);

		virtual void afterDraw( ::openfl::display3D::Context3D context);

		virtual  ::starling::rendering::VertexDataFormat get_vertexFormat();

		Float get_alpha();
		::Dynamic get_alpha_dyn();

		Float set_alpha(Float value);
		::Dynamic set_alpha_dyn();

		bool get_tinted();
		::Dynamic get_tinted_dyn();

		bool set_tinted(bool value);
		::Dynamic set_tinted_dyn();

};

} // end namespace starling
} // end namespace rendering

#endif /* INCLUDED_starling_rendering_MeshEffect */ 