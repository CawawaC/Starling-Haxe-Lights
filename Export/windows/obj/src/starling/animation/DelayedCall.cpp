// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_openfl__Vector_AbstractVector
#include <openfl/_Vector/AbstractVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_starling_animation_DelayedCall
#include <starling/animation/DelayedCall.h>
#endif
#ifndef INCLUDED_starling_animation_IAnimatable
#include <starling/animation/IAnimatable.h>
#endif
#ifndef INCLUDED_starling_events_EventDispatcher
#include <starling/events/EventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_482c99ec45249afd_40_new,"starling.animation.DelayedCall","new",0x57a0fca2,"starling.animation.DelayedCall.new","starling/animation/DelayedCall.hx",40,0x9af5c7d0)
HX_LOCAL_STACK_FRAME(_hx_pos_482c99ec45249afd_47_reset,"starling.animation.DelayedCall","reset",0x8cea8a91,"starling.animation.DelayedCall.reset","starling/animation/DelayedCall.hx",47,0x9af5c7d0)
HX_LOCAL_STACK_FRAME(_hx_pos_482c99ec45249afd_59_advanceTime,"starling.animation.DelayedCall","advanceTime",0x7833a7f1,"starling.animation.DelayedCall.advanceTime","starling/animation/DelayedCall.hx",59,0x9af5c7d0)
HX_LOCAL_STACK_FRAME(_hx_pos_482c99ec45249afd_93_complete,"starling.animation.DelayedCall","complete",0xa8c92537,"starling.animation.DelayedCall.complete","starling/animation/DelayedCall.hx",93,0x9af5c7d0)
HX_LOCAL_STACK_FRAME(_hx_pos_482c99ec45249afd_102_get_isComplete,"starling.animation.DelayedCall","get_isComplete",0x4c71320a,"starling.animation.DelayedCall.get_isComplete","starling/animation/DelayedCall.hx",102,0x9af5c7d0)
HX_LOCAL_STACK_FRAME(_hx_pos_482c99ec45249afd_107_get_totalTime,"starling.animation.DelayedCall","get_totalTime",0xf86f248a,"starling.animation.DelayedCall.get_totalTime","starling/animation/DelayedCall.hx",107,0x9af5c7d0)
HX_LOCAL_STACK_FRAME(_hx_pos_482c99ec45249afd_111_get_currentTime,"starling.animation.DelayedCall","get_currentTime",0xee6fe3bf,"starling.animation.DelayedCall.get_currentTime","starling/animation/DelayedCall.hx",111,0x9af5c7d0)
HX_LOCAL_STACK_FRAME(_hx_pos_482c99ec45249afd_116_get_repeatCount,"starling.animation.DelayedCall","get_repeatCount",0x846bd24d,"starling.animation.DelayedCall.get_repeatCount","starling/animation/DelayedCall.hx",116,0x9af5c7d0)
HX_LOCAL_STACK_FRAME(_hx_pos_482c99ec45249afd_117_set_repeatCount,"starling.animation.DelayedCall","set_repeatCount",0x80374f59,"starling.animation.DelayedCall.set_repeatCount","starling/animation/DelayedCall.hx",117,0x9af5c7d0)
HX_LOCAL_STACK_FRAME(_hx_pos_482c99ec45249afd_121_get_callback,"starling.animation.DelayedCall","get_callback",0x6b00894c,"starling.animation.DelayedCall.get_callback","starling/animation/DelayedCall.hx",121,0x9af5c7d0)
HX_LOCAL_STACK_FRAME(_hx_pos_482c99ec45249afd_126_get_arguments,"starling.animation.DelayedCall","get_arguments",0x7d4ee5ef,"starling.animation.DelayedCall.get_arguments","starling/animation/DelayedCall.hx",126,0x9af5c7d0)
HX_LOCAL_STACK_FRAME(_hx_pos_482c99ec45249afd_136_fromPool,"starling.animation.DelayedCall","fromPool",0xd12973e4,"starling.animation.DelayedCall.fromPool","starling/animation/DelayedCall.hx",136,0x9af5c7d0)
HX_LOCAL_STACK_FRAME(_hx_pos_482c99ec45249afd_142_toPool,"starling.animation.DelayedCall","toPool",0x37ec54f5,"starling.animation.DelayedCall.toPool","starling/animation/DelayedCall.hx",142,0x9af5c7d0)
HX_LOCAL_STACK_FRAME(_hx_pos_482c99ec45249afd_130_boot,"starling.animation.DelayedCall","boot",0x4d5511b0,"starling.animation.DelayedCall.boot","starling/animation/DelayedCall.hx",130,0x9af5c7d0)
namespace starling{
namespace animation{

void DelayedCall_obj::__construct( ::Dynamic callback,Float delay,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_482c99ec45249afd_40_new)
HXLINE(  41)		super::__construct();
HXLINE(  42)		this->reset(callback,delay,args);
            	}

Dynamic DelayedCall_obj::__CreateEmpty() { return new DelayedCall_obj; }

void *DelayedCall_obj::_hx_vtable = 0;

Dynamic DelayedCall_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DelayedCall_obj > _hx_result = new DelayedCall_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool DelayedCall_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25137bc0) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x25137bc0;
	} else {
		return inClassId==(int)0x529048b0;
	}
}

static ::starling::animation::IAnimatable_obj _hx_starling_animation_DelayedCall__hx_starling_animation_IAnimatable= {
	( void (hx::Object::*)(Float))&::starling::animation::DelayedCall_obj::advanceTime,
};

void *DelayedCall_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x9e9125cb: return &_hx_starling_animation_DelayedCall__hx_starling_animation_IAnimatable;
	}
	return super::_hx_getInterface(inHash);
}

 ::starling::animation::DelayedCall DelayedCall_obj::reset( ::Dynamic callback,Float delay,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_482c99ec45249afd_47_reset)
HXLINE(  48)		this->_hx___currentTime = (int)0;
HXLINE(  49)		this->_hx___totalTime = ::Math_obj::max(delay,((Float)0.0001));
HXLINE(  50)		this->_hx___callback = callback;
HXLINE(  51)		this->_hx___args = args;
HXLINE(  52)		this->_hx___repeatCount = (int)1;
HXLINE(  54)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(DelayedCall_obj,reset,return )

void DelayedCall_obj::advanceTime(Float time){
            	HX_STACKFRAME(&_hx_pos_482c99ec45249afd_59_advanceTime)
HXLINE(  60)		Float previousTime = this->_hx___currentTime;
HXLINE(  61)		 ::starling::animation::DelayedCall _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  61)		_hx_tmp->_hx___currentTime = (_hx_tmp->_hx___currentTime + time);
HXLINE(  63)		if ((this->_hx___currentTime > this->_hx___totalTime)) {
HXLINE(  64)			this->_hx___currentTime = this->_hx___totalTime;
            		}
HXLINE(  66)		bool _hx_tmp1;
HXDLIN(  66)		if ((previousTime < this->_hx___totalTime)) {
HXLINE(  66)			_hx_tmp1 = (this->_hx___currentTime >= this->_hx___totalTime);
            		}
            		else {
HXLINE(  66)			_hx_tmp1 = false;
            		}
HXDLIN(  66)		if (_hx_tmp1) {
HXLINE(  68)			bool _hx_tmp2;
HXDLIN(  68)			if ((this->_hx___repeatCount != (int)0)) {
HXLINE(  68)				_hx_tmp2 = (this->_hx___repeatCount > (int)1);
            			}
            			else {
HXLINE(  68)				_hx_tmp2 = true;
            			}
HXDLIN(  68)			if (_hx_tmp2) {
HXLINE(  70)				::Reflect_obj::callMethod(this->_hx___callback,this->_hx___callback,this->_hx___args);
HXLINE(  72)				if ((this->_hx___repeatCount > (int)0)) {
HXLINE(  72)					 ::starling::animation::DelayedCall _hx_tmp3 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  72)					_hx_tmp3->_hx___repeatCount = (_hx_tmp3->_hx___repeatCount - (int)1);
            				}
HXLINE(  73)				this->_hx___currentTime = (int)0;
HXLINE(  74)				this->advanceTime(((previousTime + time) - this->_hx___totalTime));
            			}
            			else {
HXLINE(  79)				 ::Dynamic call = this->_hx___callback;
HXLINE(  80)				::cpp::VirtualArray args = this->_hx___args;
HXLINE(  84)				this->dispatchEventWith(HX_("removeFro__juggler",4f,62,71,55),null(),null());
HXLINE(  85)				::Reflect_obj::callMethod(call,call,args);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(DelayedCall_obj,advanceTime,(void))

void DelayedCall_obj::complete(){
            	HX_STACKFRAME(&_hx_pos_482c99ec45249afd_93_complete)
HXLINE(  94)		Float restTime = (this->_hx___totalTime - this->_hx___currentTime);
HXLINE(  95)		if ((restTime > (int)0)) {
HXLINE(  95)			this->advanceTime(restTime);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DelayedCall_obj,complete,(void))

bool DelayedCall_obj::get_isComplete(){
            	HX_STACKFRAME(&_hx_pos_482c99ec45249afd_102_get_isComplete)
HXDLIN( 102)		if ((this->_hx___repeatCount == (int)1)) {
HXDLIN( 102)			return (this->_hx___currentTime >= this->_hx___totalTime);
            		}
            		else {
HXDLIN( 102)			return false;
            		}
HXDLIN( 102)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DelayedCall_obj,get_isComplete,return )

Float DelayedCall_obj::get_totalTime(){
            	HX_STACKFRAME(&_hx_pos_482c99ec45249afd_107_get_totalTime)
HXDLIN( 107)		return this->_hx___totalTime;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DelayedCall_obj,get_totalTime,return )

Float DelayedCall_obj::get_currentTime(){
            	HX_STACKFRAME(&_hx_pos_482c99ec45249afd_111_get_currentTime)
HXDLIN( 111)		return this->_hx___currentTime;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DelayedCall_obj,get_currentTime,return )

int DelayedCall_obj::get_repeatCount(){
            	HX_STACKFRAME(&_hx_pos_482c99ec45249afd_116_get_repeatCount)
HXDLIN( 116)		return this->_hx___repeatCount;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DelayedCall_obj,get_repeatCount,return )

int DelayedCall_obj::set_repeatCount(int value){
            	HX_STACKFRAME(&_hx_pos_482c99ec45249afd_117_set_repeatCount)
HXDLIN( 117)		return (this->_hx___repeatCount = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DelayedCall_obj,set_repeatCount,return )

 ::Dynamic DelayedCall_obj::get_callback(){
            	HX_STACKFRAME(&_hx_pos_482c99ec45249afd_121_get_callback)
HXDLIN( 121)		return this->_hx___callback;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DelayedCall_obj,get_callback,return )

::cpp::VirtualArray DelayedCall_obj::get_arguments(){
            	HX_STACKFRAME(&_hx_pos_482c99ec45249afd_126_get_arguments)
HXDLIN( 126)		return this->_hx___args;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DelayedCall_obj,get_arguments,return )

 ::openfl::_Vector::AbstractVector DelayedCall_obj::sPool;

 ::starling::animation::DelayedCall DelayedCall_obj::fromPool( ::Dynamic call,Float delay,::cpp::VirtualArray args){
            	HX_GC_STACKFRAME(&_hx_pos_482c99ec45249afd_136_fromPool)
HXDLIN( 136)		if ((::openfl::_Vector::IVector_obj::get_length(::starling::animation::DelayedCall_obj::sPool->data) != (int)0)) {
HXDLIN( 136)			return ( ( ::starling::animation::DelayedCall)(::openfl::_Vector::IVector_obj::pop(::starling::animation::DelayedCall_obj::sPool->data)) )->reset(call,delay,args);
            		}
            		else {
HXLINE( 137)			return  ::starling::animation::DelayedCall_obj::__alloc( HX_CTX ,call,delay,args);
            		}
HXLINE( 136)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(DelayedCall_obj,fromPool,return )

void DelayedCall_obj::toPool( ::starling::animation::DelayedCall delayedCall){
            	HX_STACKFRAME(&_hx_pos_482c99ec45249afd_142_toPool)
HXLINE( 144)		delayedCall->_hx___callback = null();
HXLINE( 145)		delayedCall->_hx___args = null();
HXLINE( 146)		delayedCall->removeEventListeners(null());
HXLINE( 147)		::openfl::_Vector::IVector_obj::push(::starling::animation::DelayedCall_obj::sPool->data,delayedCall);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DelayedCall_obj,toPool,(void))


hx::ObjectPtr< DelayedCall_obj > DelayedCall_obj::__new( ::Dynamic callback,Float delay,::cpp::VirtualArray args) {
	hx::ObjectPtr< DelayedCall_obj > __this = new DelayedCall_obj();
	__this->__construct(callback,delay,args);
	return __this;
}

hx::ObjectPtr< DelayedCall_obj > DelayedCall_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic callback,Float delay,::cpp::VirtualArray args) {
	DelayedCall_obj *__this = (DelayedCall_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DelayedCall_obj), true, "starling.animation.DelayedCall"));
	*(void **)__this = DelayedCall_obj::_hx_vtable;
	__this->__construct(callback,delay,args);
	return __this;
}

DelayedCall_obj::DelayedCall_obj()
{
}

void DelayedCall_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DelayedCall);
	HX_MARK_MEMBER_NAME(_hx___currentTime,"__currentTime");
	HX_MARK_MEMBER_NAME(_hx___totalTime,"__totalTime");
	HX_MARK_MEMBER_NAME(_hx___callback,"__callback");
	HX_MARK_MEMBER_NAME(_hx___args,"__args");
	HX_MARK_MEMBER_NAME(_hx___repeatCount,"__repeatCount");
	 ::starling::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DelayedCall_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___currentTime,"__currentTime");
	HX_VISIT_MEMBER_NAME(_hx___totalTime,"__totalTime");
	HX_VISIT_MEMBER_NAME(_hx___callback,"__callback");
	HX_VISIT_MEMBER_NAME(_hx___args,"__args");
	HX_VISIT_MEMBER_NAME(_hx___repeatCount,"__repeatCount");
	 ::starling::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

hx::Val DelayedCall_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__args") ) { return hx::Val( _hx___args ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { return hx::Val( complete_dyn() ); }
		if (HX_FIELD_EQ(inName,"callback") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_callback() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"totalTime") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_totalTime() ); }
		if (HX_FIELD_EQ(inName,"arguments") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_arguments() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__callback") ) { return hx::Val( _hx___callback ); }
		if (HX_FIELD_EQ(inName,"isComplete") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_isComplete() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__totalTime") ) { return hx::Val( _hx___totalTime ); }
		if (HX_FIELD_EQ(inName,"advanceTime") ) { return hx::Val( advanceTime_dyn() ); }
		if (HX_FIELD_EQ(inName,"currentTime") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_currentTime() ); }
		if (HX_FIELD_EQ(inName,"repeatCount") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_repeatCount() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_callback") ) { return hx::Val( get_callback_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__currentTime") ) { return hx::Val( _hx___currentTime ); }
		if (HX_FIELD_EQ(inName,"__repeatCount") ) { return hx::Val( _hx___repeatCount ); }
		if (HX_FIELD_EQ(inName,"get_totalTime") ) { return hx::Val( get_totalTime_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_arguments") ) { return hx::Val( get_arguments_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_isComplete") ) { return hx::Val( get_isComplete_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_currentTime") ) { return hx::Val( get_currentTime_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_repeatCount") ) { return hx::Val( get_repeatCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_repeatCount") ) { return hx::Val( set_repeatCount_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DelayedCall_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"sPool") ) { outValue = ( sPool ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toPool") ) { outValue = toPool_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromPool") ) { outValue = fromPool_dyn(); return true; }
	}
	return false;
}

hx::Val DelayedCall_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__args") ) { _hx___args=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__callback") ) { _hx___callback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__totalTime") ) { _hx___totalTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"repeatCount") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_repeatCount(inValue.Cast< int >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__currentTime") ) { _hx___currentTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__repeatCount") ) { _hx___repeatCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DelayedCall_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"sPool") ) { sPool=ioValue.Cast<  ::openfl::_Vector::AbstractVector >(); return true; }
	}
	return false;
}

void DelayedCall_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__currentTime","\xc6","\xe5","\x06","\xce"));
	outFields->push(HX_HCSTRING("__totalTime","\xd1","\xc6","\xe3","\x97"));
	outFields->push(HX_HCSTRING("__callback","\xe5","\x0c","\x3f","\x22"));
	outFields->push(HX_HCSTRING("__args","\x7d","\xf0","\x6c","\xef"));
	outFields->push(HX_HCSTRING("__repeatCount","\x54","\xd4","\x02","\x64"));
	outFields->push(HX_HCSTRING("isComplete","\xc3","\x12","\x77","\xfa"));
	outFields->push(HX_HCSTRING("totalTime","\xf1","\x7d","\xb7","\x69"));
	outFields->push(HX_HCSTRING("currentTime","\xe6","\xa4","\x8e","\x85"));
	outFields->push(HX_HCSTRING("repeatCount","\x74","\x93","\x8a","\x1b"));
	outFields->push(HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f"));
	outFields->push(HX_HCSTRING("arguments","\x56","\x3f","\x97","\xee"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo DelayedCall_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(DelayedCall_obj,_hx___currentTime),HX_HCSTRING("__currentTime","\xc6","\xe5","\x06","\xce")},
	{hx::fsFloat,(int)offsetof(DelayedCall_obj,_hx___totalTime),HX_HCSTRING("__totalTime","\xd1","\xc6","\xe3","\x97")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DelayedCall_obj,_hx___callback),HX_HCSTRING("__callback","\xe5","\x0c","\x3f","\x22")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(DelayedCall_obj,_hx___args),HX_HCSTRING("__args","\x7d","\xf0","\x6c","\xef")},
	{hx::fsInt,(int)offsetof(DelayedCall_obj,_hx___repeatCount),HX_HCSTRING("__repeatCount","\x54","\xd4","\x02","\x64")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo DelayedCall_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::_Vector::AbstractVector*/ ,(void *) &DelayedCall_obj::sPool,HX_HCSTRING("sPool","\xef","\x62","\x4a","\x6c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String DelayedCall_obj_sMemberFields[] = {
	HX_HCSTRING("__currentTime","\xc6","\xe5","\x06","\xce"),
	HX_HCSTRING("__totalTime","\xd1","\xc6","\xe3","\x97"),
	HX_HCSTRING("__callback","\xe5","\x0c","\x3f","\x22"),
	HX_HCSTRING("__args","\x7d","\xf0","\x6c","\xef"),
	HX_HCSTRING("__repeatCount","\x54","\xd4","\x02","\x64"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("advanceTime","\xaf","\x69","\x9d","\xab"),
	HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),
	HX_HCSTRING("get_isComplete","\x0c","\x9b","\x6c","\x70"),
	HX_HCSTRING("get_totalTime","\xc8","\x51","\x1b","\x2b"),
	HX_HCSTRING("get_currentTime","\x7d","\x5c","\x70","\x46"),
	HX_HCSTRING("get_repeatCount","\x0b","\x4b","\x6c","\xdc"),
	HX_HCSTRING("set_repeatCount","\x17","\xc8","\x37","\xd8"),
	HX_HCSTRING("get_callback","\xce","\x4d","\x20","\x34"),
	HX_HCSTRING("get_arguments","\x2d","\x13","\xfb","\xaf"),
	::String(null()) };

static void DelayedCall_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DelayedCall_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DelayedCall_obj::sPool,"sPool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DelayedCall_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DelayedCall_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DelayedCall_obj::sPool,"sPool");
};

#endif

hx::Class DelayedCall_obj::__mClass;

static ::String DelayedCall_obj_sStaticFields[] = {
	HX_HCSTRING("sPool","\xef","\x62","\x4a","\x6c"),
	HX_HCSTRING("fromPool","\x66","\x4f","\x28","\xa8"),
	HX_HCSTRING("toPool","\xf7","\xeb","\x15","\x80"),
	::String(null())
};

void DelayedCall_obj::__register()
{
	hx::Object *dummy = new DelayedCall_obj;
	DelayedCall_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("starling.animation.DelayedCall","\xb0","\xc3","\xc1","\xca");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DelayedCall_obj::__GetStatic;
	__mClass->mSetStaticField = &DelayedCall_obj::__SetStatic;
	__mClass->mMarkFunc = DelayedCall_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(DelayedCall_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DelayedCall_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DelayedCall_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DelayedCall_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DelayedCall_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DelayedCall_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DelayedCall_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_482c99ec45249afd_130_boot)
HXDLIN( 130)			int length = null();
HXDLIN( 130)			bool fixed = null();
HXDLIN( 130)			return  ::openfl::_Vector::AbstractVector_obj::__alloc( HX_CTX , ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,null()),null());
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_482c99ec45249afd_130_boot)
HXDLIN( 130)		sPool =  ::Dynamic(new _hx_Closure_0())();
            	}
}

} // end namespace starling
} // end namespace animation
