// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_starling_errors_AbstractMethodError
#include <starling/errors/AbstractMethodError.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_552ee88d1193629a_21_new,"starling.errors.AbstractMethodError","new",0x6fded9da,"starling.errors.AbstractMethodError.new","starling/errors/AbstractMethodError.hx",21,0xbd21a8f6)
namespace starling{
namespace errors{

void AbstractMethodError_obj::__construct(::String __o_message,hx::Null< int >  __o_id){
::String message = __o_message.Default(HX_HCSTRING("Method needs to be implemented in subclass","\x7b","\xc6","\x50","\xbc"));
int id = __o_id.Default(0);
            	HX_STACKFRAME(&_hx_pos_552ee88d1193629a_21_new)
HXDLIN(  21)		super::__construct(message,id);
            	}

Dynamic AbstractMethodError_obj::__CreateEmpty() { return new AbstractMethodError_obj; }

void *AbstractMethodError_obj::_hx_vtable = 0;

Dynamic AbstractMethodError_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AbstractMethodError_obj > _hx_result = new AbstractMethodError_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool AbstractMethodError_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1fc85c4d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1fc85c4d;
	} else {
		return inClassId==(int)0x3d46ab8e;
	}
}


hx::ObjectPtr< AbstractMethodError_obj > AbstractMethodError_obj::__new(::String __o_message,hx::Null< int >  __o_id) {
	hx::ObjectPtr< AbstractMethodError_obj > __this = new AbstractMethodError_obj();
	__this->__construct(__o_message,__o_id);
	return __this;
}

hx::ObjectPtr< AbstractMethodError_obj > AbstractMethodError_obj::__alloc(hx::Ctx *_hx_ctx,::String __o_message,hx::Null< int >  __o_id) {
	AbstractMethodError_obj *__this = (AbstractMethodError_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AbstractMethodError_obj), true, "starling.errors.AbstractMethodError"));
	*(void **)__this = AbstractMethodError_obj::_hx_vtable;
	__this->__construct(__o_message,__o_id);
	return __this;
}

AbstractMethodError_obj::AbstractMethodError_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *AbstractMethodError_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *AbstractMethodError_obj_sStaticStorageInfo = 0;
#endif

static void AbstractMethodError_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AbstractMethodError_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AbstractMethodError_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AbstractMethodError_obj::__mClass,"__mClass");
};

#endif

hx::Class AbstractMethodError_obj::__mClass;

void AbstractMethodError_obj::__register()
{
	hx::Object *dummy = new AbstractMethodError_obj;
	AbstractMethodError_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("starling.errors.AbstractMethodError","\xe8","\xa4","\x0a","\x38");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AbstractMethodError_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AbstractMethodError_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AbstractMethodError_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AbstractMethodError_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AbstractMethodError_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace starling
} // end namespace errors
