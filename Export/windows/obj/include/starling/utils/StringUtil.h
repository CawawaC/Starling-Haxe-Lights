// Generated by Haxe 3.4.3
#ifndef INCLUDED_starling_utils_StringUtil
#define INCLUDED_starling_utils_StringUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(starling,utils,StringUtil)

namespace starling{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES StringUtil_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef StringUtil_obj OBJ_;
		StringUtil_obj();

	public:
		enum { _hx_ClassId = 0x41db0f98 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="starling.utils.StringUtil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"starling.utils.StringUtil"); }

		hx::ObjectPtr< StringUtil_obj > __new() {
			hx::ObjectPtr< StringUtil_obj > __this = new StringUtil_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< StringUtil_obj > __alloc(hx::Ctx *_hx_ctx) {
			StringUtil_obj *__this = (StringUtil_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(StringUtil_obj), false, "starling.utils.StringUtil"));
			*(void **)__this = StringUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StringUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("StringUtil","\x93","\xed","\x5b","\xf6"); }

		static ::String format(::String format,::cpp::VirtualArray args);
		static ::Dynamic format_dyn();

		static ::String clean(::String string);
		static ::Dynamic clean_dyn();

		static ::String trimStart(::String string);
		static ::Dynamic trimStart_dyn();

		static ::String trimEnd(::String string);
		static ::Dynamic trimEnd_dyn();

		static ::String trim(::String string);
		static ::Dynamic trim_dyn();

};

} // end namespace starling
} // end namespace utils

#endif /* INCLUDED_starling_utils_StringUtil */ 