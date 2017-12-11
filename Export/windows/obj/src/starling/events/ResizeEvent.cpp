// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_starling_events_Event
#include <starling/events/Event.h>
#endif
#ifndef INCLUDED_starling_events_ResizeEvent
#include <starling/events/ResizeEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_784f0a97e19bf298_35_new,"starling.events.ResizeEvent","new",0xd6dfc0e9,"starling.events.ResizeEvent.new","starling/events/ResizeEvent.hx",35,0x33cb78c7)
HX_LOCAL_STACK_FRAME(_hx_pos_784f0a97e19bf298_40_get_width,"starling.events.ResizeEvent","get_width",0x3f288fa6,"starling.events.ResizeEvent.get_width","starling/events/ResizeEvent.hx",40,0x33cb78c7)
HX_LOCAL_STACK_FRAME(_hx_pos_784f0a97e19bf298_44_get_height,"starling.events.ResizeEvent","get_height",0xbaa49a47,"starling.events.ResizeEvent.get_height","starling/events/ResizeEvent.hx",44,0x33cb78c7)
HX_LOCAL_STACK_FRAME(_hx_pos_784f0a97e19bf298_30_boot,"starling.events.ResizeEvent","boot",0x25020b89,"starling.events.ResizeEvent.boot","starling/events/ResizeEvent.hx",30,0x33cb78c7)
namespace starling{
namespace events{

void ResizeEvent_obj::__construct(::String type,int width,int height,hx::Null< bool >  __o_bubbles){
bool bubbles = __o_bubbles.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_784f0a97e19bf298_35_new)
HXDLIN(  35)		super::__construct(type,bubbles, ::openfl::geom::Point_obj::__alloc( HX_CTX ,width,height));
            	}

Dynamic ResizeEvent_obj::__CreateEmpty() { return new ResizeEvent_obj; }

void *ResizeEvent_obj::_hx_vtable = 0;

Dynamic ResizeEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ResizeEvent_obj > _hx_result = new ResizeEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool ResizeEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e772cb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e772cb9;
	} else {
		return inClassId==(int)0x25326f65;
	}
}

int ResizeEvent_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_784f0a97e19bf298_40_get_width)
HXDLIN(  40)		return ::Std_obj::_hx_int(hx::TCast<  ::openfl::geom::Point >::cast(this->data)->x);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ResizeEvent_obj,get_width,return )

int ResizeEvent_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_784f0a97e19bf298_44_get_height)
HXDLIN(  44)		return ::Std_obj::_hx_int(hx::TCast<  ::openfl::geom::Point >::cast(this->data)->y);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ResizeEvent_obj,get_height,return )

::String ResizeEvent_obj::RESIZE;


hx::ObjectPtr< ResizeEvent_obj > ResizeEvent_obj::__new(::String type,int width,int height,hx::Null< bool >  __o_bubbles) {
	hx::ObjectPtr< ResizeEvent_obj > __this = new ResizeEvent_obj();
	__this->__construct(type,width,height,__o_bubbles);
	return __this;
}

hx::ObjectPtr< ResizeEvent_obj > ResizeEvent_obj::__alloc(hx::Ctx *_hx_ctx,::String type,int width,int height,hx::Null< bool >  __o_bubbles) {
	ResizeEvent_obj *__this = (ResizeEvent_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ResizeEvent_obj), true, "starling.events.ResizeEvent"));
	*(void **)__this = ResizeEvent_obj::_hx_vtable;
	__this->__construct(type,width,height,__o_bubbles);
	return __this;
}

ResizeEvent_obj::ResizeEvent_obj()
{
}

hx::Val ResizeEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_width() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_height() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return hx::Val( get_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return hx::Val( get_height_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

void ResizeEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ResizeEvent_obj_sMemberStorageInfo = 0;
static hx::StaticInfo ResizeEvent_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &ResizeEvent_obj::RESIZE,HX_HCSTRING("RESIZE","\xf4","\x05","\xfe","\xba")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ResizeEvent_obj_sMemberFields[] = {
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	::String(null()) };

static void ResizeEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ResizeEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ResizeEvent_obj::RESIZE,"RESIZE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ResizeEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ResizeEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ResizeEvent_obj::RESIZE,"RESIZE");
};

#endif

hx::Class ResizeEvent_obj::__mClass;

static ::String ResizeEvent_obj_sStaticFields[] = {
	HX_HCSTRING("RESIZE","\xf4","\x05","\xfe","\xba"),
	::String(null())
};

void ResizeEvent_obj::__register()
{
	hx::Object *dummy = new ResizeEvent_obj;
	ResizeEvent_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("starling.events.ResizeEvent","\x77","\x18","\x09","\xdd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ResizeEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ResizeEvent_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ResizeEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ResizeEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ResizeEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ResizeEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ResizeEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ResizeEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_784f0a97e19bf298_30_boot)
HXDLIN(  30)		RESIZE = HX_("resize",f4,59,7b,08);
            	}
}

} // end namespace starling
} // end namespace events
