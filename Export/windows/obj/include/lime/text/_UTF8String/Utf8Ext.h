// Generated by Haxe 3.4.3
#ifndef INCLUDED_lime_text__UTF8String_Utf8Ext
#define INCLUDED_lime_text__UTF8String_Utf8Ext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS3(lime,text,_UTF8String,Utf8Ext)

namespace lime{
namespace text{
namespace _UTF8String{


class HXCPP_CLASS_ATTRIBUTES Utf8Ext_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Utf8Ext_obj OBJ_;
		Utf8Ext_obj();

	public:
		enum { _hx_ClassId = 0x347c7351 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.text._UTF8String.Utf8Ext")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.text._UTF8String.Utf8Ext"); }

		hx::ObjectPtr< Utf8Ext_obj > __new() {
			hx::ObjectPtr< Utf8Ext_obj > __this = new Utf8Ext_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Utf8Ext_obj > __alloc(hx::Ctx *_hx_ctx) {
			Utf8Ext_obj *__this = (Utf8Ext_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Utf8Ext_obj), false, "lime.text._UTF8String.Utf8Ext"));
			*(void **)__this = Utf8Ext_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Utf8Ext_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Utf8Ext","\xd0","\x2b","\x1e","\x10"); }

		static void fillUpperToLowerMap( ::haxe::ds::IntMap map);
		static ::Dynamic fillUpperToLowerMap_dyn();

		static void fillLowerToUpperMap( ::haxe::ds::IntMap map);
		static ::Dynamic fillLowerToUpperMap_dyn();

};

} // end namespace lime
} // end namespace text
} // end namespace _UTF8String

#endif /* INCLUDED_lime_text__UTF8String_Utf8Ext */ 
