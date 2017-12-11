// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeApplication
#include <lime/_backend/native/NativeApplication.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app_Preloader
#include <lime/app/Preloader.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl__internal_Lib
#include <openfl/_internal/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Application
#include <openfl/display/Application.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Loader
#include <openfl/display/Loader.h>
#endif
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Window
#include <openfl/display/Window.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_548c78caa19a1a14_21_new,"openfl.display.Application","new",0x436ec718,"openfl.display.Application.new","openfl/display/Application.hx",21,0xe1d30bda)
HX_LOCAL_STACK_FRAME(_hx_pos_548c78caa19a1a14_34_create,"openfl.display.Application","create",0xb9517344,"openfl.display.Application.create","openfl/display/Application.hx",34,0xe1d30bda)
namespace openfl{
namespace display{

void Application_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_548c78caa19a1a14_21_new)
HXLINE(  23)		super::__construct();
HXLINE(  25)		if (hx::IsNull( ::openfl::_internal::Lib_obj::application )) {
HXLINE(  27)			::openfl::_internal::Lib_obj::application = hx::ObjectPtr<OBJ_>(this);
            		}
            	}

Dynamic Application_obj::__CreateEmpty() { return new Application_obj; }

void *Application_obj::_hx_vtable = 0;

Dynamic Application_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Application_obj > _hx_result = new Application_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Application_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4b993f3e) {
		if (inClassId<=(int)0x31cfae44) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x31cfae44;
		} else {
			return inClassId==(int)0x4b993f3e;
		}
	} else {
		return inClassId==(int)0x77491638;
	}
}

void Application_obj::create( ::Dynamic config){
            	HX_GC_STACKFRAME(&_hx_pos_548c78caa19a1a14_34_create)
HXLINE(  36)		this->config = config;
HXLINE(  38)		this->backend->create(config);
HXLINE(  41)		if (hx::IsNull( ::openfl::_internal::Lib_obj::current )) {
HXLINE(  41)			::openfl::_internal::Lib_obj::current =  ::openfl::display::MovieClip_obj::__alloc( HX_CTX );
            		}
HXLINE(  42)		::openfl::_internal::Lib_obj::current->_hx___loaderInfo = ::openfl::display::LoaderInfo_obj::create(null());
HXLINE(  43)		::openfl::_internal::Lib_obj::current->_hx___loaderInfo->content = ::openfl::_internal::Lib_obj::current;
HXLINE(  46)		if (hx::IsNotNull( config )) {
HXLINE(  48)			if (::Reflect_obj::hasField(config,HX_("fps",e9,c7,4d,00))) {
HXLINE(  50)				this->backend->setFrameRate(( (Float)(config->__Field(HX_("fps",e9,c7,4d,00),hx::paccDynamic)) ));
            			}
HXLINE(  54)			if (::Reflect_obj::hasField(config,HX_("windows",83,de,74,e8))) {
HXLINE(  56)				int _g = (int)0;
HXDLIN(  56)				::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(config->__Field(HX_("windows",83,de,74,e8),hx::paccDynamic)) );
HXDLIN(  56)				while((_g < _g1->length)){
HXLINE(  56)					 ::Dynamic windowConfig = _g1->__get(_g);
HXDLIN(  56)					_g = (_g + (int)1);
HXLINE(  58)					 ::openfl::display::Window window =  ::openfl::display::Window_obj::__alloc( HX_CTX ,windowConfig);
HXLINE(  59)					this->createWindow(window);
            				}
            			}
HXLINE(  69)			bool _hx_tmp;
HXDLIN(  69)			if (hx::IsNotNull( this->_hx___preloader )) {
HXLINE(  69)				_hx_tmp = this->_hx___preloader->complete;
            			}
            			else {
HXLINE(  69)				_hx_tmp = true;
            			}
HXDLIN(  69)			if (_hx_tmp) {
HXLINE(  71)				this->onPreloadComplete();
            			}
            		}
            	}



hx::ObjectPtr< Application_obj > Application_obj::__new() {
	hx::ObjectPtr< Application_obj > __this = new Application_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Application_obj > Application_obj::__alloc(hx::Ctx *_hx_ctx) {
	Application_obj *__this = (Application_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Application_obj), true, "openfl.display.Application"));
	*(void **)__this = Application_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Application_obj::Application_obj()
{
}

hx::Val Application_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Application_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Application_obj_sStaticStorageInfo = 0;
#endif

static ::String Application_obj_sMemberFields[] = {
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	::String(null()) };

static void Application_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Application_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Application_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Application_obj::__mClass,"__mClass");
};

#endif

hx::Class Application_obj::__mClass;

void Application_obj::__register()
{
	hx::Object *dummy = new Application_obj;
	Application_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Application","\x26","\x9b","\x0f","\x74");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Application_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Application_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Application_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Application_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Application_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Application_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
