// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_lime_app__Event_lime_ui_Touch_Void
#include <lime/app/_Event_lime_ui_Touch_Void.h>
#endif
#ifndef INCLUDED_lime_ui_Touch
#include <lime/ui/Touch.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c51b2e87fb75d55f_29_new,"lime.ui.Touch","new",0xc7f37270,"lime.ui.Touch.new","lime/ui/Touch.hx",29,0xf69781a0)
HX_LOCAL_STACK_FRAME(_hx_pos_c51b2e87fb75d55f_15_boot,"lime.ui.Touch","boot",0x2529b022,"lime.ui.Touch.boot","lime/ui/Touch.hx",15,0xf69781a0)
HX_LOCAL_STACK_FRAME(_hx_pos_c51b2e87fb75d55f_16_boot,"lime.ui.Touch","boot",0x2529b022,"lime.ui.Touch.boot","lime/ui/Touch.hx",16,0xf69781a0)
HX_LOCAL_STACK_FRAME(_hx_pos_c51b2e87fb75d55f_17_boot,"lime.ui.Touch","boot",0x2529b022,"lime.ui.Touch.boot","lime/ui/Touch.hx",17,0xf69781a0)
HX_LOCAL_STACK_FRAME(_hx_pos_c51b2e87fb75d55f_18_boot,"lime.ui.Touch","boot",0x2529b022,"lime.ui.Touch.boot","lime/ui/Touch.hx",18,0xf69781a0)
namespace lime{
namespace ui{

void Touch_obj::__construct(Float x,Float y,int id,Float dx,Float dy,Float pressure,int device){
            	HX_STACKFRAME(&_hx_pos_c51b2e87fb75d55f_29_new)
HXLINE(  31)		this->x = x;
HXLINE(  32)		this->y = y;
HXLINE(  33)		this->id = id;
HXLINE(  34)		this->dx = dx;
HXLINE(  35)		this->dy = dy;
HXLINE(  36)		this->pressure = pressure;
HXLINE(  37)		this->device = device;
            	}

Dynamic Touch_obj::__CreateEmpty() { return new Touch_obj; }

void *Touch_obj::_hx_vtable = 0;

Dynamic Touch_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Touch_obj > _hx_result = new Touch_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool Touch_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3bf3e556;
}

 ::lime::app::_Event_lime_ui_Touch_Void Touch_obj::onCancel;

 ::lime::app::_Event_lime_ui_Touch_Void Touch_obj::onEnd;

 ::lime::app::_Event_lime_ui_Touch_Void Touch_obj::onMove;

 ::lime::app::_Event_lime_ui_Touch_Void Touch_obj::onStart;


Touch_obj::Touch_obj()
{
}

hx::Val Touch_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"dx") ) { return hx::Val( dx ); }
		if (HX_FIELD_EQ(inName,"dy") ) { return hx::Val( dy ); }
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { return hx::Val( device ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pressure") ) { return hx::Val( pressure ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Touch_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"onEnd") ) { outValue = ( onEnd ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onMove") ) { outValue = ( onMove ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onStart") ) { outValue = ( onStart ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onCancel") ) { outValue = ( onCancel ); return true; }
	}
	return false;
}

hx::Val Touch_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"dx") ) { dx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dy") ) { dy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { device=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pressure") ) { pressure=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Touch_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"onEnd") ) { onEnd=ioValue.Cast<  ::lime::app::_Event_lime_ui_Touch_Void >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onMove") ) { onMove=ioValue.Cast<  ::lime::app::_Event_lime_ui_Touch_Void >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onStart") ) { onStart=ioValue.Cast<  ::lime::app::_Event_lime_ui_Touch_Void >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onCancel") ) { onCancel=ioValue.Cast<  ::lime::app::_Event_lime_ui_Touch_Void >(); return true; }
	}
	return false;
}

void Touch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("device","\x96","\xdc","\x77","\x71"));
	outFields->push(HX_HCSTRING("dx","\x94","\x57","\x00","\x00"));
	outFields->push(HX_HCSTRING("dy","\x95","\x57","\x00","\x00"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("pressure","\xc5","\xab","\x1d","\x70"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Touch_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Touch_obj,device),HX_HCSTRING("device","\x96","\xdc","\x77","\x71")},
	{hx::fsFloat,(int)offsetof(Touch_obj,dx),HX_HCSTRING("dx","\x94","\x57","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Touch_obj,dy),HX_HCSTRING("dy","\x95","\x57","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Touch_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Touch_obj,pressure),HX_HCSTRING("pressure","\xc5","\xab","\x1d","\x70")},
	{hx::fsFloat,(int)offsetof(Touch_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Touch_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Touch_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::app::_Event_lime_ui_Touch_Void*/ ,(void *) &Touch_obj::onCancel,HX_HCSTRING("onCancel","\xf9","\xe3","\xe0","\x97")},
	{hx::fsObject /*::lime::app::_Event_lime_ui_Touch_Void*/ ,(void *) &Touch_obj::onEnd,HX_HCSTRING("onEnd","\xfc","\x97","\x64","\x32")},
	{hx::fsObject /*::lime::app::_Event_lime_ui_Touch_Void*/ ,(void *) &Touch_obj::onMove,HX_HCSTRING("onMove","\xd0","\xeb","\xea","\xea")},
	{hx::fsObject /*::lime::app::_Event_lime_ui_Touch_Void*/ ,(void *) &Touch_obj::onStart,HX_HCSTRING("onStart","\xc3","\x12","\x49","\x1a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Touch_obj_sMemberFields[] = {
	HX_HCSTRING("device","\x96","\xdc","\x77","\x71"),
	HX_HCSTRING("dx","\x94","\x57","\x00","\x00"),
	HX_HCSTRING("dy","\x95","\x57","\x00","\x00"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("pressure","\xc5","\xab","\x1d","\x70"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	::String(null()) };

static void Touch_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Touch_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Touch_obj::onCancel,"onCancel");
	HX_MARK_MEMBER_NAME(Touch_obj::onEnd,"onEnd");
	HX_MARK_MEMBER_NAME(Touch_obj::onMove,"onMove");
	HX_MARK_MEMBER_NAME(Touch_obj::onStart,"onStart");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Touch_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Touch_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Touch_obj::onCancel,"onCancel");
	HX_VISIT_MEMBER_NAME(Touch_obj::onEnd,"onEnd");
	HX_VISIT_MEMBER_NAME(Touch_obj::onMove,"onMove");
	HX_VISIT_MEMBER_NAME(Touch_obj::onStart,"onStart");
};

#endif

hx::Class Touch_obj::__mClass;

static ::String Touch_obj_sStaticFields[] = {
	HX_HCSTRING("onCancel","\xf9","\xe3","\xe0","\x97"),
	HX_HCSTRING("onEnd","\xfc","\x97","\x64","\x32"),
	HX_HCSTRING("onMove","\xd0","\xeb","\xea","\xea"),
	HX_HCSTRING("onStart","\xc3","\x12","\x49","\x1a"),
	::String(null())
};

void Touch_obj::__register()
{
	hx::Object *dummy = new Touch_obj;
	Touch_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.ui.Touch","\x7e","\xba","\x55","\x46");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Touch_obj::__GetStatic;
	__mClass->mSetStaticField = &Touch_obj::__SetStatic;
	__mClass->mMarkFunc = Touch_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Touch_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Touch_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Touch_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Touch_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Touch_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Touch_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Touch_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_c51b2e87fb75d55f_15_boot)
HXDLIN(  15)		onCancel =  ::lime::app::_Event_lime_ui_Touch_Void_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_c51b2e87fb75d55f_16_boot)
HXDLIN(  16)		onEnd =  ::lime::app::_Event_lime_ui_Touch_Void_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_c51b2e87fb75d55f_17_boot)
HXDLIN(  17)		onMove =  ::lime::app::_Event_lime_ui_Touch_Void_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_c51b2e87fb75d55f_18_boot)
HXDLIN(  18)		onStart =  ::lime::app::_Event_lime_ui_Touch_Void_obj::__alloc( HX_CTX );
            	}
}

} // end namespace lime
} // end namespace ui
