// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_starling_animation_IAnimatable
#include <starling/animation/IAnimatable.h>
#endif

namespace starling{
namespace animation{


static ::String IAnimatable_obj_sMemberFields[] = {
	HX_HCSTRING("advanceTime","\xaf","\x69","\x9d","\xab"),
	::String(null()) };

static void IAnimatable_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IAnimatable_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IAnimatable_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IAnimatable_obj::__mClass,"__mClass");
};

#endif

hx::Class IAnimatable_obj::__mClass;

void IAnimatable_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("starling.animation.IAnimatable","\xf7","\xd1","\xe6","\x71");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = IAnimatable_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(IAnimatable_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0x9e9125cb >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IAnimatable_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace starling
} // end namespace animation
