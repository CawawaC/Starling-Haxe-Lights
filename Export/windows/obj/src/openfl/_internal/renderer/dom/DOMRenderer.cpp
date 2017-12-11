// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_DOMRenderContext
#include <lime/graphics/DOMRenderContext.h>
#endif
#ifndef INCLUDED_openfl__Vector_AbstractVector
#include <openfl/_Vector/AbstractVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_dom_DOMMaskManager
#include <openfl/_internal/renderer/dom/DOMMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_dom_DOMRenderer
#include <openfl/_internal/renderer/dom/DOMRenderer.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_21b95e0e91b0df21_34_new,"openfl._internal.renderer.dom.DOMRenderer","new",0x90a7aed0,"openfl._internal.renderer.dom.DOMRenderer.new","openfl/_internal/renderer/dom/DOMRenderer.hx",34,0xc812e2a0)
HX_LOCAL_STACK_FRAME(_hx_pos_21b95e0e91b0df21_157_render,"openfl._internal.renderer.dom.DOMRenderer","render",0x321c32e6,"openfl._internal.renderer.dom.DOMRenderer.render","openfl/_internal/renderer/dom/DOMRenderer.hx",157,0xc812e2a0)
HX_LOCAL_STACK_FRAME(_hx_pos_21b95e0e91b0df21_179_renderStage3D,"openfl._internal.renderer.dom.DOMRenderer","renderStage3D",0xc21c00a9,"openfl._internal.renderer.dom.DOMRenderer.renderStage3D","openfl/_internal/renderer/dom/DOMRenderer.hx",179,0xc812e2a0)
HX_LOCAL_STACK_FRAME(_hx_pos_21b95e0e91b0df21_83_applyStyle,"openfl._internal.renderer.dom.DOMRenderer","applyStyle",0x6484f073,"openfl._internal.renderer.dom.DOMRenderer.applyStyle","openfl/_internal/renderer/dom/DOMRenderer.hx",83,0xc812e2a0)
HX_LOCAL_STACK_FRAME(_hx_pos_21b95e0e91b0df21_188_updateClip,"openfl._internal.renderer.dom.DOMRenderer","updateClip",0x2f8d2909,"openfl._internal.renderer.dom.DOMRenderer.updateClip","openfl/_internal/renderer/dom/DOMRenderer.hx",188,0xc812e2a0)
namespace openfl{
namespace _internal{
namespace renderer{
namespace dom{

void DOMRenderer_obj::__construct( ::openfl::display::Stage stage, ::lime::graphics::DOMRenderContext element){
            	HX_STACKFRAME(&_hx_pos_21b95e0e91b0df21_34_new)
HXDLIN(  34)		super::__construct(stage);
            	}

Dynamic DOMRenderer_obj::__CreateEmpty() { return new DOMRenderer_obj; }

void *DOMRenderer_obj::_hx_vtable = 0;

Dynamic DOMRenderer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DOMRenderer_obj > _hx_result = new DOMRenderer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool DOMRenderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x036a682e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x036a682e;
	} else {
		return inClassId==(int)0x58060c34;
	}
}

void DOMRenderer_obj::render(){
            	HX_STACKFRAME(&_hx_pos_21b95e0e91b0df21_157_render)
HXLINE( 159)		this->renderSession->allowSmoothing = hx::IsNotEq( this->stage->quality,(int)2 );
HXLINE( 161)		if (!(this->stage->_hx___transparent)) {
HXLINE( 163)			this->element->style->__SetField(HX_("background",ee,93,1d,26),this->stage->_hx___colorString,hx::paccDynamic);
            		}
            		else {
HXLINE( 167)			this->element->style->__SetField(HX_("background",ee,93,1d,26),HX_("none",b8,12,0a,49),hx::paccDynamic);
            		}
HXLINE( 171)		this->renderSession->z = (int)1;
HXLINE( 172)		this->stage->_hx___renderDOM(this->renderSession);
            	}


void DOMRenderer_obj::renderStage3D(){
            	HX_STACKFRAME(&_hx_pos_21b95e0e91b0df21_179_renderStage3D)
HXDLIN( 179)		int _g = (int)0;
HXDLIN( 179)		 ::openfl::_Vector::AbstractVector _g1 = this->stage->stage3Ds;
HXDLIN( 179)		while((_g < ::openfl::_Vector::IVector_obj::get_length(_g1->data))){
HXDLIN( 179)			 ::openfl::display::Stage3D stage3D = ( ( ::openfl::display::Stage3D)(::openfl::_Vector::IVector_obj::get(_g1->data,_g)) );
HXDLIN( 179)			_g = (_g + (int)1);
HXLINE( 181)			stage3D->_hx___renderDOM(this->stage,this->renderSession);
            		}
            	}


void DOMRenderer_obj::applyStyle( ::openfl::display::DisplayObject displayObject, ::openfl::_internal::renderer::RenderSession renderSession,bool setTransform,bool setAlpha,bool setClip){
            	HX_STACKFRAME(&_hx_pos_21b95e0e91b0df21_83_applyStyle)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(DOMRenderer_obj,applyStyle,(void))

void DOMRenderer_obj::updateClip( ::openfl::display::DisplayObject displayObject, ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_21b95e0e91b0df21_188_updateClip)
HXLINE( 190)		 ::openfl::_internal::renderer::dom::DOMMaskManager maskManager = ( ( ::openfl::_internal::renderer::dom::DOMMaskManager)(renderSession->maskManager) );
HXLINE( 191)		maskManager->updateClip(displayObject);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMRenderer_obj,updateClip,(void))


hx::ObjectPtr< DOMRenderer_obj > DOMRenderer_obj::__new( ::openfl::display::Stage stage, ::lime::graphics::DOMRenderContext element) {
	hx::ObjectPtr< DOMRenderer_obj > __this = new DOMRenderer_obj();
	__this->__construct(stage,element);
	return __this;
}

hx::ObjectPtr< DOMRenderer_obj > DOMRenderer_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display::Stage stage, ::lime::graphics::DOMRenderContext element) {
	DOMRenderer_obj *__this = (DOMRenderer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DOMRenderer_obj), true, "openfl._internal.renderer.dom.DOMRenderer"));
	*(void **)__this = DOMRenderer_obj::_hx_vtable;
	__this->__construct(stage,element);
	return __this;
}

DOMRenderer_obj::DOMRenderer_obj()
{
}

void DOMRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DOMRenderer);
	HX_MARK_MEMBER_NAME(element,"element");
	 ::openfl::_internal::renderer::AbstractRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DOMRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(element,"element");
	 ::openfl::_internal::renderer::AbstractRenderer_obj::__Visit(HX_VISIT_ARG);
}

hx::Val DOMRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"element") ) { return hx::Val( element ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderStage3D") ) { return hx::Val( renderStage3D_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DOMRenderer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"applyStyle") ) { outValue = applyStyle_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"updateClip") ) { outValue = updateClip_dyn(); return true; }
	}
	return false;
}

hx::Val DOMRenderer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"element") ) { element=inValue.Cast<  ::lime::graphics::DOMRenderContext >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DOMRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("element","\xbc","\xae","\x54","\x06"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo DOMRenderer_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::DOMRenderContext*/ ,(int)offsetof(DOMRenderer_obj,element),HX_HCSTRING("element","\xbc","\xae","\x54","\x06")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *DOMRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String DOMRenderer_obj_sMemberFields[] = {
	HX_HCSTRING("element","\xbc","\xae","\x54","\x06"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderStage3D","\x39","\xb6","\xb7","\x29"),
	::String(null()) };

static void DOMRenderer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DOMRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DOMRenderer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DOMRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class DOMRenderer_obj::__mClass;

static ::String DOMRenderer_obj_sStaticFields[] = {
	HX_HCSTRING("applyStyle","\xe3","\x20","\x6f","\x2f"),
	HX_HCSTRING("updateClip","\x79","\x59","\x77","\xfa"),
	::String(null())
};

void DOMRenderer_obj::__register()
{
	hx::Object *dummy = new DOMRenderer_obj;
	DOMRenderer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.dom.DOMRenderer","\xde","\x46","\x5c","\x34");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DOMRenderer_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DOMRenderer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(DOMRenderer_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DOMRenderer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DOMRenderer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DOMRenderer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DOMRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DOMRenderer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace dom
