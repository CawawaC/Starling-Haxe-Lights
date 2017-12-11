// Generated by Haxe 3.4.3
#ifndef INCLUDED_lime_system__Locale_Locale_Impl_
#define INCLUDED_lime_system__Locale_Locale_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,_hx_system,_Locale,Locale_Impl_)

namespace lime{
namespace _hx_system{
namespace _Locale{


class HXCPP_CLASS_ATTRIBUTES Locale_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Locale_Impl__obj OBJ_;
		Locale_Impl__obj();

	public:
		enum { _hx_ClassId = 0x77ba43af };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.system._Locale.Locale_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.system._Locale.Locale_Impl_"); }

		hx::ObjectPtr< Locale_Impl__obj > __new() {
			hx::ObjectPtr< Locale_Impl__obj > __this = new Locale_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Locale_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			Locale_Impl__obj *__this = (Locale_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Locale_Impl__obj), false, "lime.system._Locale.Locale_Impl_"));
			*(void **)__this = Locale_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Locale_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Locale_Impl_","\xda","\x6c","\x53","\x85"); }

		static ::String currentLocale;
		static ::String _hx___systemLocale;
		static ::String _new(::String value);
		static ::Dynamic _new_dyn();

		static bool equals(::String a,::String b);
		static ::Dynamic equals_dyn();

		static void _hx___init();
		static ::Dynamic _hx___init_dyn();

		static ::String get_language(::String this1);
		static ::Dynamic get_language_dyn();

		static ::String get_region(::String this1);
		static ::Dynamic get_region_dyn();

		static ::String get_currentLocale();
		static ::Dynamic get_currentLocale_dyn();

		static ::String set_currentLocale(::String value);
		static ::Dynamic set_currentLocale_dyn();

		static ::String get_systemLocale();
		static ::Dynamic get_systemLocale_dyn();

};

} // end namespace lime
} // end namespace system
} // end namespace _Locale

#endif /* INCLUDED_lime_system__Locale_Locale_Impl_ */ 
