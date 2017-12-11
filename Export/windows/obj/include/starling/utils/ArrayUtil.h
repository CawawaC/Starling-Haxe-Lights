// Generated by Haxe 3.4.3
#ifndef INCLUDED_starling_utils_ArrayUtil
#define INCLUDED_starling_utils_ArrayUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(starling,utils,ArrayUtil)

namespace starling{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES ArrayUtil_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ArrayUtil_obj OBJ_;
		ArrayUtil_obj();

	public:
		enum { _hx_ClassId = 0x3e86ea52 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="starling.utils.ArrayUtil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"starling.utils.ArrayUtil"); }

		hx::ObjectPtr< ArrayUtil_obj > __new() {
			hx::ObjectPtr< ArrayUtil_obj > __this = new ArrayUtil_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ArrayUtil_obj > __alloc(hx::Ctx *_hx_ctx) {
			ArrayUtil_obj *__this = (ArrayUtil_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ArrayUtil_obj), false, "starling.utils.ArrayUtil"));
			*(void **)__this = ArrayUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ArrayUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ArrayUtil","\x1b","\x12","\xf3","\x38"); }

		static void resize(::cpp::VirtualArray arr,int newLength, ::Dynamic defaultValue);
		static ::Dynamic resize_dyn();

		static void clear(::cpp::VirtualArray arr);
		static ::Dynamic clear_dyn();

		static void insertAt(::cpp::VirtualArray array,int index, ::Dynamic object);
		static ::Dynamic insertAt_dyn();

		static  ::Dynamic removeAt(::cpp::VirtualArray array,int index);
		static ::Dynamic removeAt_dyn();

};

} // end namespace starling
} // end namespace utils

#endif /* INCLUDED_starling_utils_ArrayUtil */ 
