// Generated by Haxe 3.4.3
#ifndef INCLUDED_lime_text_unifill__Utf8_Utf8Impl
#define INCLUDED_lime_text_unifill__Utf8_Utf8Impl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,text,unifill,_Utf8,Utf8Impl)

namespace lime{
namespace text{
namespace unifill{
namespace _Utf8{


class HXCPP_CLASS_ATTRIBUTES Utf8Impl_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Utf8Impl_obj OBJ_;
		Utf8Impl_obj();

	public:
		enum { _hx_ClassId = 0x1d380bb0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.text.unifill._Utf8.Utf8Impl")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.text.unifill._Utf8.Utf8Impl"); }

		hx::ObjectPtr< Utf8Impl_obj > __new() {
			hx::ObjectPtr< Utf8Impl_obj > __this = new Utf8Impl_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Utf8Impl_obj > __alloc(hx::Ctx *_hx_ctx) {
			Utf8Impl_obj *__this = (Utf8Impl_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Utf8Impl_obj), false, "lime.text.unifill._Utf8.Utf8Impl"));
			*(void **)__this = Utf8Impl_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Utf8Impl_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Utf8Impl","\xd1","\xa8","\xe4","\x0c"); }

		static int code_point_width(int c);
		static ::Dynamic code_point_width_dyn();

		static int find_prev_code_point( ::Dynamic accessor,int index);
		static ::Dynamic find_prev_code_point_dyn();

		static void encode_code_point( ::Dynamic addUnit,int codePoint);
		static ::Dynamic encode_code_point_dyn();

		static int decode_code_point(int len, ::Dynamic accessor,int index);
		static ::Dynamic decode_code_point_dyn();

};

} // end namespace lime
} // end namespace text
} // end namespace unifill
} // end namespace _Utf8

#endif /* INCLUDED_lime_text_unifill__Utf8_Utf8Impl */ 
