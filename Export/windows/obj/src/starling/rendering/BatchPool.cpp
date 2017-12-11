// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
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
#ifndef INCLUDED_openfl_utils__Dictionary_Dictionary_Impl_
#include <openfl/utils/_Dictionary/Dictionary_Impl_.h>
#endif
#ifndef INCLUDED_openfl_utils__Dictionary_UtilsObjectMap
#include <openfl/utils/_Dictionary/UtilsObjectMap.h>
#endif
#ifndef INCLUDED_starling_display_DisplayObject
#include <starling/display/DisplayObject.h>
#endif
#ifndef INCLUDED_starling_display_Mesh
#include <starling/display/Mesh.h>
#endif
#ifndef INCLUDED_starling_display_MeshBatch
#include <starling/display/MeshBatch.h>
#endif
#ifndef INCLUDED_starling_events_EventDispatcher
#include <starling/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_starling_rendering_BatchPool
#include <starling/rendering/BatchPool.h>
#endif
#ifndef INCLUDED_starling_styles_MeshStyle
#include <starling/styles/MeshStyle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ec3fb8fd74247e9c_177_new,"starling.rendering.BatchPool","new",0xb1b42b40,"starling.rendering.BatchPool.new","starling/rendering/BatchProcessor.hx",177,0x536ffb9c)
HX_LOCAL_STACK_FRAME(_hx_pos_ec3fb8fd74247e9c_182_purge,"starling.rendering.BatchPool","purge",0xd8e29d0b,"starling.rendering.BatchPool.purge","starling/rendering/BatchProcessor.hx",182,0x536ffb9c)
HX_LOCAL_STACK_FRAME(_hx_pos_ec3fb8fd74247e9c_197_get,"starling.rendering.BatchPool","get",0xb1aedb76,"starling.rendering.BatchPool.get","starling/rendering/BatchProcessor.hx",197,0x536ffb9c)
HX_LOCAL_STACK_FRAME(_hx_pos_ec3fb8fd74247e9c_210_put,"starling.rendering.BatchPool","put",0xb1b5bdaf,"starling.rendering.BatchPool.put","starling/rendering/BatchProcessor.hx",210,0x536ffb9c)
namespace starling{
namespace rendering{

void BatchPool_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ec3fb8fd74247e9c_177_new)
HXDLIN( 177)		this->_batchLists = ::openfl::utils::_Dictionary::Dictionary_Impl__obj::toUtilsObjectMap(null(),null());
            	}

Dynamic BatchPool_obj::__CreateEmpty() { return new BatchPool_obj; }

void *BatchPool_obj::_hx_vtable = 0;

Dynamic BatchPool_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BatchPool_obj > _hx_result = new BatchPool_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BatchPool_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x225783f6;
}

void BatchPool_obj::purge(){
            	HX_STACKFRAME(&_hx_pos_ec3fb8fd74247e9c_182_purge)
HXDLIN( 182)		 ::Dynamic batchList = this->_batchLists->iterator();
HXDLIN( 182)		while(( (bool)(batchList->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXDLIN( 182)			 ::openfl::_Vector::AbstractVector batchList1 = ( ( ::openfl::_Vector::AbstractVector)(batchList->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 184)			if (hx::IsNotNull( batchList1 )) {
HXLINE( 186)				{
HXLINE( 186)					int _g1 = (int)0;
HXDLIN( 186)					int _g = ::openfl::_Vector::IVector_obj::get_length(batchList1->data);
HXDLIN( 186)					while((_g1 < _g)){
HXLINE( 186)						_g1 = (_g1 + (int)1);
HXDLIN( 186)						int i = (_g1 - (int)1);
HXLINE( 188)						if (hx::IsNotNull( ( ( ::starling::display::MeshBatch)(::openfl::_Vector::IVector_obj::get(batchList1->data,i)) ) )) {
HXLINE( 189)							( ( ::starling::display::MeshBatch)(::openfl::_Vector::IVector_obj::get(batchList1->data,i)) )->dispose();
            						}
            					}
            				}
HXLINE( 191)				::openfl::_Vector::IVector_obj::set_length(batchList1->data,(int)0);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BatchPool_obj,purge,(void))

 ::starling::display::MeshBatch BatchPool_obj::get(hx::Class styleType){
            	HX_GC_STACKFRAME(&_hx_pos_ec3fb8fd74247e9c_197_get)
HXLINE( 198)		 ::openfl::_Vector::AbstractVector batchList = this->_batchLists->get(styleType).StaticCast<  ::openfl::_Vector::AbstractVector >();
HXLINE( 199)		if (hx::IsNull( batchList )) {
HXLINE( 201)			int length = null();
HXDLIN( 201)			bool fixed = null();
HXDLIN( 201)			batchList =  ::openfl::_Vector::AbstractVector_obj::__alloc( HX_CTX , ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,null()),null());
HXLINE( 202)			this->_batchLists->set(styleType,batchList);
            		}
HXLINE( 205)		if ((::openfl::_Vector::IVector_obj::get_length(batchList->data) > (int)0)) {
HXLINE( 205)			return ( ( ::starling::display::MeshBatch)(::openfl::_Vector::IVector_obj::pop(batchList->data)) );
            		}
            		else {
HXLINE( 206)			return  ::starling::display::MeshBatch_obj::__alloc( HX_CTX );
            		}
HXLINE( 205)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(BatchPool_obj,get,return )

void BatchPool_obj::put( ::starling::display::MeshBatch meshBatch){
            	HX_GC_STACKFRAME(&_hx_pos_ec3fb8fd74247e9c_210_put)
HXLINE( 211)		hx::Class styleType = meshBatch->get_style()->get_type();
HXLINE( 212)		 ::openfl::_Vector::AbstractVector batchList = this->_batchLists->get(styleType).StaticCast<  ::openfl::_Vector::AbstractVector >();
HXLINE( 213)		if (hx::IsNull( batchList )) {
HXLINE( 215)			int length = null();
HXDLIN( 215)			bool fixed = null();
HXDLIN( 215)			batchList =  ::openfl::_Vector::AbstractVector_obj::__alloc( HX_CTX , ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,null()),null());
HXLINE( 216)			this->_batchLists->set(styleType,batchList);
            		}
HXLINE( 219)		meshBatch->clear();
HXLINE( 220)		{
HXLINE( 220)			int index = ::openfl::_Vector::IVector_obj::get_length(batchList->data);
HXDLIN( 220)			::openfl::_Vector::IVector_obj::set(batchList->data,index,meshBatch);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BatchPool_obj,put,(void))


hx::ObjectPtr< BatchPool_obj > BatchPool_obj::__new() {
	hx::ObjectPtr< BatchPool_obj > __this = new BatchPool_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< BatchPool_obj > BatchPool_obj::__alloc(hx::Ctx *_hx_ctx) {
	BatchPool_obj *__this = (BatchPool_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BatchPool_obj), true, "starling.rendering.BatchPool"));
	*(void **)__this = BatchPool_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BatchPool_obj::BatchPool_obj()
{
}

void BatchPool_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BatchPool);
	HX_MARK_MEMBER_NAME(_batchLists,"_batchLists");
	HX_MARK_END_CLASS();
}

void BatchPool_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_batchLists,"_batchLists");
}

hx::Val BatchPool_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"put") ) { return hx::Val( put_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"purge") ) { return hx::Val( purge_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_batchLists") ) { return hx::Val( _batchLists ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val BatchPool_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_batchLists") ) { _batchLists=inValue.Cast<  ::openfl::utils::_Dictionary::UtilsObjectMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BatchPool_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_batchLists","\x5a","\xc9","\x7d","\xf9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo BatchPool_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::utils::_Dictionary::UtilsObjectMap*/ ,(int)offsetof(BatchPool_obj,_batchLists),HX_HCSTRING("_batchLists","\x5a","\xc9","\x7d","\xf9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *BatchPool_obj_sStaticStorageInfo = 0;
#endif

static ::String BatchPool_obj_sMemberFields[] = {
	HX_HCSTRING("_batchLists","\x5a","\xc9","\x7d","\xf9"),
	HX_HCSTRING("purge","\x2b","\xca","\x8d","\xca"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("put","\xcf","\x62","\x55","\x00"),
	::String(null()) };

static void BatchPool_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BatchPool_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BatchPool_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BatchPool_obj::__mClass,"__mClass");
};

#endif

hx::Class BatchPool_obj::__mClass;

void BatchPool_obj::__register()
{
	hx::Object *dummy = new BatchPool_obj;
	BatchPool_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("starling.rendering.BatchPool","\x4e","\xcb","\x75","\xf3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BatchPool_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BatchPool_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BatchPool_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BatchPool_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BatchPool_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BatchPool_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace starling
} // end namespace rendering
