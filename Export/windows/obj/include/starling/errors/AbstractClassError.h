// Generated by Haxe 3.4.3
#ifndef INCLUDED_starling_errors_AbstractClassError
#define INCLUDED_starling_errors_AbstractClassError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
HX_DECLARE_CLASS2(openfl,errors,Error)
HX_DECLARE_CLASS2(starling,errors,AbstractClassError)

namespace starling{
namespace errors{


class HXCPP_CLASS_ATTRIBUTES AbstractClassError_obj : public  ::openfl::errors::Error_obj
{
	public:
		typedef  ::openfl::errors::Error_obj super;
		typedef AbstractClassError_obj OBJ_;
		AbstractClassError_obj();

	public:
		enum { _hx_ClassId = 0x3498f985 };

		void __construct(::String __o_message,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="starling.errors.AbstractClassError")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"starling.errors.AbstractClassError"); }
		static hx::ObjectPtr< AbstractClassError_obj > __new(::String __o_message,hx::Null< int >  __o_id);
		static hx::ObjectPtr< AbstractClassError_obj > __alloc(hx::Ctx *_hx_ctx,::String __o_message,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AbstractClassError_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("AbstractClassError","\x12","\x90","\x44","\x67"); }

};

} // end namespace starling
} // end namespace errors

#endif /* INCLUDED_starling_errors_AbstractClassError */ 