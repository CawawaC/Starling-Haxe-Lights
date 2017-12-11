// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_starling_events_Event
#include <starling/events/Event.h>
#endif
#ifndef INCLUDED_starling_events_KeyboardEvent
#include <starling/events/KeyboardEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a25101b6b1c78b1a_43_new,"starling.events.KeyboardEvent","new",0xb3996e16,"starling.events.KeyboardEvent.new","starling/events/KeyboardEvent.hx",43,0xb775183a)
HX_LOCAL_STACK_FRAME(_hx_pos_a25101b6b1c78b1a_59_preventDefault,"starling.events.KeyboardEvent","preventDefault",0x44d29ed3,"starling.events.KeyboardEvent.preventDefault","starling/events/KeyboardEvent.hx",59,0xb775183a)
HX_LOCAL_STACK_FRAME(_hx_pos_a25101b6b1c78b1a_63_isDefaultPrevented,"starling.events.KeyboardEvent","isDefaultPrevented",0xebf76f4a,"starling.events.KeyboardEvent.isDefaultPrevented","starling/events/KeyboardEvent.hx",63,0xb775183a)
HX_LOCAL_STACK_FRAME(_hx_pos_a25101b6b1c78b1a_69_get_charCode,"starling.events.KeyboardEvent","get_charCode",0xedce0eb6,"starling.events.KeyboardEvent.get_charCode","starling/events/KeyboardEvent.hx",69,0xb775183a)
HX_LOCAL_STACK_FRAME(_hx_pos_a25101b6b1c78b1a_73_get_keyCode,"starling.events.KeyboardEvent","get_keyCode",0x26e3c639,"starling.events.KeyboardEvent.get_keyCode","starling/events/KeyboardEvent.hx",73,0xb775183a)
HX_LOCAL_STACK_FRAME(_hx_pos_a25101b6b1c78b1a_78_get_keyLocation,"starling.events.KeyboardEvent","get_keyLocation",0x98e2f941,"starling.events.KeyboardEvent.get_keyLocation","starling/events/KeyboardEvent.hx",78,0xb775183a)
HX_LOCAL_STACK_FRAME(_hx_pos_a25101b6b1c78b1a_83_get_altKey,"starling.events.KeyboardEvent","get_altKey",0x3e873cc9,"starling.events.KeyboardEvent.get_altKey","starling/events/KeyboardEvent.hx",83,0xb775183a)
HX_LOCAL_STACK_FRAME(_hx_pos_a25101b6b1c78b1a_88_get_ctrlKey,"starling.events.KeyboardEvent","get_ctrlKey",0xecc2d981,"starling.events.KeyboardEvent.get_ctrlKey","starling/events/KeyboardEvent.hx",88,0xb775183a)
HX_LOCAL_STACK_FRAME(_hx_pos_a25101b6b1c78b1a_92_get_shiftKey,"starling.events.KeyboardEvent","get_shiftKey",0xeb4941d0,"starling.events.KeyboardEvent.get_shiftKey","starling/events/KeyboardEvent.hx",92,0xb775183a)
HX_LOCAL_STACK_FRAME(_hx_pos_a25101b6b1c78b1a_26_boot,"starling.events.KeyboardEvent","boot",0x6abfe5bc,"starling.events.KeyboardEvent.boot","starling/events/KeyboardEvent.hx",26,0xb775183a)
HX_LOCAL_STACK_FRAME(_hx_pos_a25101b6b1c78b1a_29_boot,"starling.events.KeyboardEvent","boot",0x6abfe5bc,"starling.events.KeyboardEvent.boot","starling/events/KeyboardEvent.hx",29,0xb775183a)
namespace starling{
namespace events{

void KeyboardEvent_obj::__construct(::String type,hx::Null< int >  __o_charCode,hx::Null< int >  __o_keyCode,hx::Null< int >  __o_keyLocation,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_altKey,hx::Null< bool >  __o_shiftKey){
int charCode = __o_charCode.Default(0);
int keyCode = __o_keyCode.Default(0);
int keyLocation = __o_keyLocation.Default(0);
bool ctrlKey = __o_ctrlKey.Default(false);
bool altKey = __o_altKey.Default(false);
bool shiftKey = __o_shiftKey.Default(false);
            	HX_STACKFRAME(&_hx_pos_a25101b6b1c78b1a_43_new)
HXLINE(  44)		super::__construct(type,false,keyCode);
HXLINE(  45)		this->_hx___charCode = charCode;
HXLINE(  46)		this->_hx___keyCode = keyCode;
HXLINE(  47)		this->_hx___keyLocation = keyLocation;
HXLINE(  48)		this->_hx___ctrlKey = ctrlKey;
HXLINE(  49)		this->_hx___altKey = altKey;
HXLINE(  50)		this->_hx___shiftKey = shiftKey;
            	}

Dynamic KeyboardEvent_obj::__CreateEmpty() { return new KeyboardEvent_obj; }

void *KeyboardEvent_obj::_hx_vtable = 0;

Dynamic KeyboardEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< KeyboardEvent_obj > _hx_result = new KeyboardEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool KeyboardEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e772cb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e772cb9;
	} else {
		return inClassId==(int)0x453ed992;
	}
}

void KeyboardEvent_obj::preventDefault(){
            	HX_STACKFRAME(&_hx_pos_a25101b6b1c78b1a_59_preventDefault)
HXDLIN(  59)		this->_hx___isDefaultPrevented = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyboardEvent_obj,preventDefault,(void))

bool KeyboardEvent_obj::isDefaultPrevented(){
            	HX_STACKFRAME(&_hx_pos_a25101b6b1c78b1a_63_isDefaultPrevented)
HXDLIN(  63)		return this->_hx___isDefaultPrevented;
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyboardEvent_obj,isDefaultPrevented,return )

int KeyboardEvent_obj::get_charCode(){
            	HX_STACKFRAME(&_hx_pos_a25101b6b1c78b1a_69_get_charCode)
HXDLIN(  69)		return this->_hx___charCode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyboardEvent_obj,get_charCode,return )

int KeyboardEvent_obj::get_keyCode(){
            	HX_STACKFRAME(&_hx_pos_a25101b6b1c78b1a_73_get_keyCode)
HXDLIN(  73)		return this->_hx___keyCode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyboardEvent_obj,get_keyCode,return )

int KeyboardEvent_obj::get_keyLocation(){
            	HX_STACKFRAME(&_hx_pos_a25101b6b1c78b1a_78_get_keyLocation)
HXDLIN(  78)		return this->_hx___keyLocation;
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyboardEvent_obj,get_keyLocation,return )

bool KeyboardEvent_obj::get_altKey(){
            	HX_STACKFRAME(&_hx_pos_a25101b6b1c78b1a_83_get_altKey)
HXDLIN(  83)		return this->_hx___altKey;
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyboardEvent_obj,get_altKey,return )

bool KeyboardEvent_obj::get_ctrlKey(){
            	HX_STACKFRAME(&_hx_pos_a25101b6b1c78b1a_88_get_ctrlKey)
HXDLIN(  88)		return this->_hx___ctrlKey;
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyboardEvent_obj,get_ctrlKey,return )

bool KeyboardEvent_obj::get_shiftKey(){
            	HX_STACKFRAME(&_hx_pos_a25101b6b1c78b1a_92_get_shiftKey)
HXDLIN(  92)		return this->_hx___shiftKey;
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyboardEvent_obj,get_shiftKey,return )

::String KeyboardEvent_obj::KEY_UP;

::String KeyboardEvent_obj::KEY_DOWN;


hx::ObjectPtr< KeyboardEvent_obj > KeyboardEvent_obj::__new(::String type,hx::Null< int >  __o_charCode,hx::Null< int >  __o_keyCode,hx::Null< int >  __o_keyLocation,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_altKey,hx::Null< bool >  __o_shiftKey) {
	hx::ObjectPtr< KeyboardEvent_obj > __this = new KeyboardEvent_obj();
	__this->__construct(type,__o_charCode,__o_keyCode,__o_keyLocation,__o_ctrlKey,__o_altKey,__o_shiftKey);
	return __this;
}

hx::ObjectPtr< KeyboardEvent_obj > KeyboardEvent_obj::__alloc(hx::Ctx *_hx_ctx,::String type,hx::Null< int >  __o_charCode,hx::Null< int >  __o_keyCode,hx::Null< int >  __o_keyLocation,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_altKey,hx::Null< bool >  __o_shiftKey) {
	KeyboardEvent_obj *__this = (KeyboardEvent_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(KeyboardEvent_obj), true, "starling.events.KeyboardEvent"));
	*(void **)__this = KeyboardEvent_obj::_hx_vtable;
	__this->__construct(type,__o_charCode,__o_keyCode,__o_keyLocation,__o_ctrlKey,__o_altKey,__o_shiftKey);
	return __this;
}

KeyboardEvent_obj::KeyboardEvent_obj()
{
}

hx::Val KeyboardEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"altKey") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_altKey() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyCode") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_keyCode() ); }
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_ctrlKey() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__altKey") ) { return hx::Val( _hx___altKey ); }
		if (HX_FIELD_EQ(inName,"charCode") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_charCode() ); }
		if (HX_FIELD_EQ(inName,"shiftKey") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_shiftKey() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__keyCode") ) { return hx::Val( _hx___keyCode ); }
		if (HX_FIELD_EQ(inName,"__ctrlKey") ) { return hx::Val( _hx___ctrlKey ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__charCode") ) { return hx::Val( _hx___charCode ); }
		if (HX_FIELD_EQ(inName,"__shiftKey") ) { return hx::Val( _hx___shiftKey ); }
		if (HX_FIELD_EQ(inName,"get_altKey") ) { return hx::Val( get_altKey_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_keyCode") ) { return hx::Val( get_keyCode_dyn() ); }
		if (HX_FIELD_EQ(inName,"keyLocation") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_keyLocation() ); }
		if (HX_FIELD_EQ(inName,"get_ctrlKey") ) { return hx::Val( get_ctrlKey_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_charCode") ) { return hx::Val( get_charCode_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_shiftKey") ) { return hx::Val( get_shiftKey_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__keyLocation") ) { return hx::Val( _hx___keyLocation ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"preventDefault") ) { return hx::Val( preventDefault_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_keyLocation") ) { return hx::Val( get_keyLocation_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"isDefaultPrevented") ) { return hx::Val( isDefaultPrevented_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__isDefaultPrevented") ) { return hx::Val( _hx___isDefaultPrevented ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val KeyboardEvent_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__altKey") ) { _hx___altKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__keyCode") ) { _hx___keyCode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__ctrlKey") ) { _hx___ctrlKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__charCode") ) { _hx___charCode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__shiftKey") ) { _hx___shiftKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__keyLocation") ) { _hx___keyLocation=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__isDefaultPrevented") ) { _hx___isDefaultPrevented=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KeyboardEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__charCode","\x43","\xd2","\x5c","\x3f"));
	outFields->push(HX_HCSTRING("__keyCode","\x4c","\x73","\xec","\x1c"));
	outFields->push(HX_HCSTRING("__keyLocation","\xd4","\x2b","\xe3","\x75"));
	outFields->push(HX_HCSTRING("__altKey","\x16","\x13","\xfa","\xec"));
	outFields->push(HX_HCSTRING("__ctrlKey","\x94","\x86","\xcb","\xe2"));
	outFields->push(HX_HCSTRING("__shiftKey","\x5d","\x05","\xd8","\x3c"));
	outFields->push(HX_HCSTRING("__isDefaultPrevented","\x60","\xcb","\x5a","\xe3"));
	outFields->push(HX_HCSTRING("charCode","\x23","\x5f","\x24","\x9c"));
	outFields->push(HX_HCSTRING("keyCode","\x6c","\x22","\x9e","\x9b"));
	outFields->push(HX_HCSTRING("keyLocation","\xf4","\xea","\x6a","\x2d"));
	outFields->push(HX_HCSTRING("altKey","\xf6","\xa7","\xca","\x44"));
	outFields->push(HX_HCSTRING("ctrlKey","\xb4","\x35","\x7d","\x61"));
	outFields->push(HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo KeyboardEvent_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(KeyboardEvent_obj,_hx___charCode),HX_HCSTRING("__charCode","\x43","\xd2","\x5c","\x3f")},
	{hx::fsInt,(int)offsetof(KeyboardEvent_obj,_hx___keyCode),HX_HCSTRING("__keyCode","\x4c","\x73","\xec","\x1c")},
	{hx::fsInt,(int)offsetof(KeyboardEvent_obj,_hx___keyLocation),HX_HCSTRING("__keyLocation","\xd4","\x2b","\xe3","\x75")},
	{hx::fsBool,(int)offsetof(KeyboardEvent_obj,_hx___altKey),HX_HCSTRING("__altKey","\x16","\x13","\xfa","\xec")},
	{hx::fsBool,(int)offsetof(KeyboardEvent_obj,_hx___ctrlKey),HX_HCSTRING("__ctrlKey","\x94","\x86","\xcb","\xe2")},
	{hx::fsBool,(int)offsetof(KeyboardEvent_obj,_hx___shiftKey),HX_HCSTRING("__shiftKey","\x5d","\x05","\xd8","\x3c")},
	{hx::fsBool,(int)offsetof(KeyboardEvent_obj,_hx___isDefaultPrevented),HX_HCSTRING("__isDefaultPrevented","\x60","\xcb","\x5a","\xe3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo KeyboardEvent_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &KeyboardEvent_obj::KEY_UP,HX_HCSTRING("KEY_UP","\x5b","\x74","\x86","\xf2")},
	{hx::fsString,(void *) &KeyboardEvent_obj::KEY_DOWN,HX_HCSTRING("KEY_DOWN","\x62","\x6a","\x13","\x6d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String KeyboardEvent_obj_sMemberFields[] = {
	HX_HCSTRING("__charCode","\x43","\xd2","\x5c","\x3f"),
	HX_HCSTRING("__keyCode","\x4c","\x73","\xec","\x1c"),
	HX_HCSTRING("__keyLocation","\xd4","\x2b","\xe3","\x75"),
	HX_HCSTRING("__altKey","\x16","\x13","\xfa","\xec"),
	HX_HCSTRING("__ctrlKey","\x94","\x86","\xcb","\xe2"),
	HX_HCSTRING("__shiftKey","\x5d","\x05","\xd8","\x3c"),
	HX_HCSTRING("__isDefaultPrevented","\x60","\xcb","\x5a","\xe3"),
	HX_HCSTRING("preventDefault","\xc9","\x2c","\xa5","\x67"),
	HX_HCSTRING("isDefaultPrevented","\x40","\x30","\x27","\x04"),
	HX_HCSTRING("get_charCode","\x2c","\x13","\x3e","\x51"),
	HX_HCSTRING("get_keyCode","\x83","\x82","\x98","\x21"),
	HX_HCSTRING("get_keyLocation","\x8b","\xa2","\x4c","\xee"),
	HX_HCSTRING("get_altKey","\xbf","\x17","\x52","\x35"),
	HX_HCSTRING("get_ctrlKey","\xcb","\x95","\x77","\xe7"),
	HX_HCSTRING("get_shiftKey","\x46","\x46","\xb9","\x4e"),
	::String(null()) };

static void KeyboardEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KeyboardEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(KeyboardEvent_obj::KEY_UP,"KEY_UP");
	HX_MARK_MEMBER_NAME(KeyboardEvent_obj::KEY_DOWN,"KEY_DOWN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void KeyboardEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KeyboardEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(KeyboardEvent_obj::KEY_UP,"KEY_UP");
	HX_VISIT_MEMBER_NAME(KeyboardEvent_obj::KEY_DOWN,"KEY_DOWN");
};

#endif

hx::Class KeyboardEvent_obj::__mClass;

static ::String KeyboardEvent_obj_sStaticFields[] = {
	HX_HCSTRING("KEY_UP","\x5b","\x74","\x86","\xf2"),
	HX_HCSTRING("KEY_DOWN","\x62","\x6a","\x13","\x6d"),
	::String(null())
};

void KeyboardEvent_obj::__register()
{
	hx::Object *dummy = new KeyboardEvent_obj;
	KeyboardEvent_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("starling.events.KeyboardEvent","\x24","\x6b","\xdf","\x9e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = KeyboardEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(KeyboardEvent_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(KeyboardEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< KeyboardEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = KeyboardEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = KeyboardEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = KeyboardEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void KeyboardEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a25101b6b1c78b1a_26_boot)
HXDLIN(  26)		KEY_UP = HX_("keyUp",da,b9,fe,de);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a25101b6b1c78b1a_29_boot)
HXDLIN(  29)		KEY_DOWN = HX_("keyDown",a1,69,47,9c);
            	}
}

} // end namespace starling
} // end namespace events
