// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_81bdcfb19984cb04_13_new,"openfl.errors.ArgumentError","new",0x72c6c578,"openfl.errors.ArgumentError.new","openfl/errors/ArgumentError.hx",13,0xb16d4318)
namespace openfl{
namespace errors{

void ArgumentError_obj::__construct(::String __o_message){
::String message = __o_message.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
            	HX_STACKFRAME(&_hx_pos_81bdcfb19984cb04_13_new)
HXLINE(  15)		super::__construct(message,null());
HXLINE(  17)		this->name = HX_("ArgumentError",eb,77,4b,60);
            	}

Dynamic ArgumentError_obj::__CreateEmpty() { return new ArgumentError_obj; }

void *ArgumentError_obj::_hx_vtable = 0;

Dynamic ArgumentError_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ArgumentError_obj > _hx_result = new ArgumentError_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ArgumentError_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x15c6ceac) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x15c6ceac;
	} else {
		return inClassId==(int)0x1fc85c4d;
	}
}


hx::ObjectPtr< ArgumentError_obj > ArgumentError_obj::__new(::String __o_message) {
	hx::ObjectPtr< ArgumentError_obj > __this = new ArgumentError_obj();
	__this->__construct(__o_message);
	return __this;
}

hx::ObjectPtr< ArgumentError_obj > ArgumentError_obj::__alloc(hx::Ctx *_hx_ctx,::String __o_message) {
	ArgumentError_obj *__this = (ArgumentError_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ArgumentError_obj), true, "openfl.errors.ArgumentError"));
	*(void **)__this = ArgumentError_obj::_hx_vtable;
	__this->__construct(__o_message);
	return __this;
}

ArgumentError_obj::ArgumentError_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ArgumentError_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ArgumentError_obj_sStaticStorageInfo = 0;
#endif

static void ArgumentError_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArgumentError_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ArgumentError_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArgumentError_obj::__mClass,"__mClass");
};

#endif

hx::Class ArgumentError_obj::__mClass;

void ArgumentError_obj::__register()
{
	hx::Object *dummy = new ArgumentError_obj;
	ArgumentError_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.errors.ArgumentError","\x86","\xe9","\x30","\x77");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ArgumentError_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ArgumentError_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ArgumentError_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArgumentError_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArgumentError_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace errors
