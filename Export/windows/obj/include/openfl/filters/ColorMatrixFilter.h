// Generated by Haxe 3.4.3
#ifndef INCLUDED_openfl_filters_ColorMatrixFilter
#define INCLUDED_openfl_filters_ColorMatrixFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,filters,ColorMatrixFilter)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES ColorMatrixFilter_obj : public  ::openfl::filters::BitmapFilter_obj
{
	public:
		typedef  ::openfl::filters::BitmapFilter_obj super;
		typedef ColorMatrixFilter_obj OBJ_;
		ColorMatrixFilter_obj();

	public:
		enum { _hx_ClassId = 0x09ed1ad5 };

		void __construct(::Array< Float > matrix);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.filters.ColorMatrixFilter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.filters.ColorMatrixFilter"); }
		static hx::ObjectPtr< ColorMatrixFilter_obj > __new(::Array< Float > matrix);
		static hx::ObjectPtr< ColorMatrixFilter_obj > __alloc(hx::Ctx *_hx_ctx,::Array< Float > matrix);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ColorMatrixFilter_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ColorMatrixFilter","\xbc","\xf6","\x5b","\x50"); }

		::Array< Float > matrix;
		 ::openfl::filters::BitmapFilter clone();

		 ::openfl::display::BitmapData _hx___applyFilter( ::openfl::display::BitmapData destBitmapData, ::openfl::display::BitmapData sourceBitmapData, ::openfl::geom::Rectangle sourceRect, ::openfl::geom::Point destPoint);

		 ::openfl::display::Shader _hx___initShader( ::openfl::_internal::renderer::RenderSession renderSession,int pass);

		::Array< Float > set_matrix(::Array< Float > value);
		::Dynamic set_matrix_dyn();

};

} // end namespace openfl
} // end namespace filters

#endif /* INCLUDED_openfl_filters_ColorMatrixFilter */ 
