// Generated by Haxe 3.4.3
#ifndef INCLUDED_starling_rendering_VertexDataAttribute
#define INCLUDED_starling_rendering_VertexDataAttribute

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(starling,rendering,VertexDataAttribute)

namespace starling{
namespace rendering{


class HXCPP_CLASS_ATTRIBUTES VertexDataAttribute_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef VertexDataAttribute_obj OBJ_;
		VertexDataAttribute_obj();

	public:
		enum { _hx_ClassId = 0x48eed06a };

		void __construct(::String name,::String format,int offset);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="starling.rendering.VertexDataAttribute")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"starling.rendering.VertexDataAttribute"); }
		static hx::ObjectPtr< VertexDataAttribute_obj > __new(::String name,::String format,int offset);
		static hx::ObjectPtr< VertexDataAttribute_obj > __alloc(hx::Ctx *_hx_ctx,::String name,::String format,int offset);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VertexDataAttribute_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("VertexDataAttribute","\x6e","\x82","\x2a","\xdd"); }

		static  ::haxe::ds::StringMap FORMAT_SIZES;
		::String name;
		::String format;
		bool isColor;
		int offset;
		int size;
};

} // end namespace starling
} // end namespace rendering

#endif /* INCLUDED_starling_rendering_VertexDataAttribute */ 