// Generated by Haxe 3.4.3
#ifndef INCLUDED_starling_errors_AbstractMethodError
#define INCLUDED_starling_errors_AbstractMethodError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
HX_DECLARE_CLASS2(openfl,errors,Error)
HX_DECLARE_CLASS2(starling,errors,AbstractMethodError)

namespace starling{
namespace errors{


class HXCPP_CLASS_ATTRIBUTES AbstractMethodError_obj : public  ::openfl::errors::Error_obj
{
	public:
		typedef  ::openfl::errors::Error_obj super;
		typedef AbstractMethodError_obj OBJ_;
		AbstractMethodError_obj();

	public:
		enum { _hx_ClassId = 0x3d46ab8e };

		void __construct(::String __o_message,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="starling.errors.AbstractMethodError")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"starling.errors.AbstractMethodError"); }
		static hx::ObjectPtr< AbstractMethodError_obj > __new(::String __o_message,hx::Null< int >  __o_id);
		static hx::ObjectPtr< AbstractMethodError_obj > __alloc(hx::Ctx *_hx_ctx,::String __o_message,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AbstractMethodError_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("AbstractMethodError","\x45","\xcb","\xd4","\xc3"); }

};

} // end namespace starling
} // end namespace errors

#endif /* INCLUDED_starling_errors_AbstractMethodError */ 
