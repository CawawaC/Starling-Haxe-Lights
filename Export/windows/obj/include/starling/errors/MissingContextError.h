// Generated by Haxe 3.4.3
#ifndef INCLUDED_starling_errors_MissingContextError
#define INCLUDED_starling_errors_MissingContextError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
HX_DECLARE_CLASS2(openfl,errors,Error)
HX_DECLARE_CLASS2(starling,errors,MissingContextError)

namespace starling{
namespace errors{


class HXCPP_CLASS_ATTRIBUTES MissingContextError_obj : public  ::openfl::errors::Error_obj
{
	public:
		typedef  ::openfl::errors::Error_obj super;
		typedef MissingContextError_obj OBJ_;
		MissingContextError_obj();

	public:
		enum { _hx_ClassId = 0x6b49a808 };

		void __construct(::String __o_message,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="starling.errors.MissingContextError")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"starling.errors.MissingContextError"); }
		static hx::ObjectPtr< MissingContextError_obj > __new(::String __o_message,hx::Null< int >  __o_id);
		static hx::ObjectPtr< MissingContextError_obj > __alloc(hx::Ctx *_hx_ctx,::String __o_message,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MissingContextError_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("MissingContextError","\xbf","\xc7","\xd7","\xf1"); }

};

} // end namespace starling
} // end namespace errors

#endif /* INCLUDED_starling_errors_MissingContextError */ 
