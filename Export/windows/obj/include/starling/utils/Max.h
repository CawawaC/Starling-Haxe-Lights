// Generated by Haxe 3.4.3
#ifndef INCLUDED_starling_utils_Max
#define INCLUDED_starling_utils_Max

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(starling,utils,Max)

namespace starling{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES Max_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Max_obj OBJ_;
		Max_obj();

	public:
		enum { _hx_ClassId = 0x50b61c43 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="starling.utils.Max")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"starling.utils.Max"); }

		hx::ObjectPtr< Max_obj > __new() {
			hx::ObjectPtr< Max_obj > __this = new Max_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Max_obj > __alloc(hx::Ctx *_hx_ctx) {
			Max_obj *__this = (Max_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Max_obj), false, "starling.utils.Max"));
			*(void **)__this = Max_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Max_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Max","\x84","\xc2","\x3a","\x00"); }

		static void __boot();
		static Float MAX_VALUE;
		static Float MIN_VALUE;
		static int INT_MAX_VALUE;
		static int INT_MIN_VALUE;
		static int UINT_MAX_VALUE;
};

} // end namespace starling
} // end namespace utils

#endif /* INCLUDED_starling_utils_Max */ 
