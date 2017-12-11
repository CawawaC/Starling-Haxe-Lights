// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_AbstractVector
#include <openfl/_Vector/AbstractVector.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif
#ifndef INCLUDED_starling_display_DisplayObject
#include <starling/display/DisplayObject.h>
#endif
#ifndef INCLUDED_starling_display_DisplayObjectContainer
#include <starling/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_starling_display_Stage
#include <starling/display/Stage.h>
#endif
#ifndef INCLUDED_starling_errors_AbstractClassError
#include <starling/errors/AbstractClassError.h>
#endif
#ifndef INCLUDED_starling_events_EventDispatcher
#include <starling/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_starling_rendering_IndexData
#include <starling/rendering/IndexData.h>
#endif
#ifndef INCLUDED_starling_rendering_VertexData
#include <starling/rendering/VertexData.h>
#endif
#ifndef INCLUDED_starling_utils_MathUtil
#include <starling/utils/MathUtil.h>
#endif
#ifndef INCLUDED_starling_utils_MeshUtil
#include <starling/utils/MeshUtil.h>
#endif
#ifndef INCLUDED_starling_utils_Pool
#include <starling/utils/Pool.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6cca5d42ff1c223e_34_MeshUtil,"starling.utils.MeshUtil","MeshUtil",0x2c9bf12b,"starling.utils.MeshUtil.MeshUtil","starling/utils/MeshUtil.hx",34,0xbd805f0a)
HX_LOCAL_STACK_FRAME(_hx_pos_6cca5d42ff1c223e_40_containsPoint,"starling.utils.MeshUtil","containsPoint",0xe84b8bb5,"starling.utils.MeshUtil.containsPoint","starling/utils/MeshUtil.hx",40,0xbd805f0a)
HX_LOCAL_STACK_FRAME(_hx_pos_6cca5d42ff1c223e_76_calculateBounds,"starling.utils.MeshUtil","calculateBounds",0x65c2fb7f,"starling.utils.MeshUtil.calculateBounds","starling/utils/MeshUtil.hx",76,0xbd805f0a)
HX_LOCAL_STACK_FRAME(_hx_pos_6cca5d42ff1c223e_29_boot,"starling.utils.MeshUtil","boot",0x388e02ae,"starling.utils.MeshUtil.boot","starling/utils/MeshUtil.hx",29,0xbd805f0a)
HX_LOCAL_STACK_FRAME(_hx_pos_6cca5d42ff1c223e_30_boot,"starling.utils.MeshUtil","boot",0x388e02ae,"starling.utils.MeshUtil.boot","starling/utils/MeshUtil.hx",30,0xbd805f0a)
HX_LOCAL_STACK_FRAME(_hx_pos_6cca5d42ff1c223e_31_boot,"starling.utils.MeshUtil","boot",0x388e02ae,"starling.utils.MeshUtil.boot","starling/utils/MeshUtil.hx",31,0xbd805f0a)
namespace starling{
namespace utils{

void MeshUtil_obj::__construct() { }

Dynamic MeshUtil_obj::__CreateEmpty() { return new MeshUtil_obj; }

void *MeshUtil_obj::_hx_vtable = 0;

Dynamic MeshUtil_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MeshUtil_obj > _hx_result = new MeshUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MeshUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x009ee058;
}

void MeshUtil_obj::MeshUtil(){
            	HX_GC_STACKFRAME(&_hx_pos_6cca5d42ff1c223e_34_MeshUtil)
HXDLIN(  34)		HX_STACK_DO_THROW( ::starling::errors::AbstractClassError_obj::__alloc( HX_CTX ,null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeshUtil_obj,MeshUtil,(void))

 ::openfl::geom::Vector3D MeshUtil_obj::sPoint3D;

 ::openfl::geom::Matrix MeshUtil_obj::sMatrix;

 ::openfl::geom::Matrix3D MeshUtil_obj::sMatrix3D;

bool MeshUtil_obj::containsPoint( ::starling::rendering::VertexData vertexData, ::starling::rendering::IndexData indexData, ::openfl::geom::Point point){
            	HX_STACKFRAME(&_hx_pos_6cca5d42ff1c223e_40_containsPoint)
HXLINE(  41)		int i;
HXLINE(  42)		bool result = false;
HXLINE(  43)		int numIndices = indexData->get_numIndices();
HXLINE(  44)		 ::openfl::geom::Point p0 = ::starling::utils::Pool_obj::getPoint(null(),null());
HXLINE(  45)		 ::openfl::geom::Point p1 = ::starling::utils::Pool_obj::getPoint(null(),null());
HXLINE(  46)		 ::openfl::geom::Point p2 = ::starling::utils::Pool_obj::getPoint(null(),null());
HXLINE(  48)		int i1 = (int)0;
HXLINE(  49)		while((i1 < numIndices)){
HXLINE(  51)			vertexData->getPoint(indexData->getIndex(i1),HX_("position",a9,a0,fa,ca),p0);
HXLINE(  52)			vertexData->getPoint(indexData->getIndex((i1 + (int)1)),HX_("position",a9,a0,fa,ca),p1);
HXLINE(  53)			vertexData->getPoint(indexData->getIndex((i1 + (int)2)),HX_("position",a9,a0,fa,ca),p2);
HXLINE(  55)			if (::starling::utils::MathUtil_obj::isPointInTriangle(point,p0,p1,p2)) {
HXLINE(  57)				result = true;
HXLINE(  58)				i1 = numIndices;
HXLINE(  59)				goto _hx_goto_1;
            			}
HXLINE(  62)			i1 = (i1 + (int)3);
            		}
            		_hx_goto_1:;
HXLINE(  64)		::starling::utils::Pool_obj::putPoint(p0);
HXLINE(  65)		::starling::utils::Pool_obj::putPoint(p1);
HXLINE(  66)		::starling::utils::Pool_obj::putPoint(p2);
HXLINE(  68)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(MeshUtil_obj,containsPoint,return )

 ::openfl::geom::Rectangle MeshUtil_obj::calculateBounds( ::starling::rendering::VertexData vertexData, ::starling::display::DisplayObject sourceSpace, ::starling::display::DisplayObject targetSpace, ::openfl::geom::Rectangle out){
            	HX_GC_STACKFRAME(&_hx_pos_6cca5d42ff1c223e_76_calculateBounds)
HXLINE(  77)		if (hx::IsNull( out )) {
HXLINE(  77)			out =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE(  79)		 ::starling::display::Stage stage = sourceSpace->get_stage();
HXLINE(  81)		bool _hx_tmp;
HXDLIN(  81)		if (sourceSpace->get_is3D()) {
HXLINE(  81)			_hx_tmp = hx::IsNotNull( stage );
            		}
            		else {
HXLINE(  81)			_hx_tmp = false;
            		}
HXDLIN(  81)		if (_hx_tmp) {
HXLINE(  83)			stage->getCameraPosition(targetSpace,::starling::utils::MeshUtil_obj::sPoint3D);
HXLINE(  84)			sourceSpace->getTransformationMatrix3D(targetSpace,::starling::utils::MeshUtil_obj::sMatrix3D);
HXLINE(  85)			vertexData->getBoundsProjected(HX_("position",a9,a0,fa,ca),::starling::utils::MeshUtil_obj::sMatrix3D,::starling::utils::MeshUtil_obj::sPoint3D,(int)0,(int)-1,out);
            		}
            		else {
HXLINE(  89)			sourceSpace->getTransformationMatrix(targetSpace,::starling::utils::MeshUtil_obj::sMatrix);
HXLINE(  90)			vertexData->getBounds(HX_("position",a9,a0,fa,ca),::starling::utils::MeshUtil_obj::sMatrix,(int)0,(int)-1,out);
            		}
HXLINE(  93)		return out;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(MeshUtil_obj,calculateBounds,return )


MeshUtil_obj::MeshUtil_obj()
{
}

hx::Val MeshUtil_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"MeshUtil") ) { return hx::Val( MeshUtil_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MeshUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"sMatrix") ) { outValue = ( sMatrix ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sPoint3D") ) { outValue = ( sPoint3D ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sMatrix3D") ) { outValue = ( sMatrix3D ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"containsPoint") ) { outValue = containsPoint_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"calculateBounds") ) { outValue = calculateBounds_dyn(); return true; }
	}
	return false;
}

bool MeshUtil_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"sMatrix") ) { sMatrix=ioValue.Cast<  ::openfl::geom::Matrix >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sPoint3D") ) { sPoint3D=ioValue.Cast<  ::openfl::geom::Vector3D >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sMatrix3D") ) { sMatrix3D=ioValue.Cast<  ::openfl::geom::Matrix3D >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *MeshUtil_obj_sMemberStorageInfo = 0;
static hx::StaticInfo MeshUtil_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::geom::Vector3D*/ ,(void *) &MeshUtil_obj::sPoint3D,HX_HCSTRING("sPoint3D","\xce","\x00","\x1c","\xd0")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(void *) &MeshUtil_obj::sMatrix,HX_HCSTRING("sMatrix","\x14","\x03","\x81","\x9e")},
	{hx::fsObject /*::openfl::geom::Matrix3D*/ ,(void *) &MeshUtil_obj::sMatrix3D,HX_HCSTRING("sMatrix3D","\xc5","\x1c","\x17","\x03")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String MeshUtil_obj_sMemberFields[] = {
	HX_HCSTRING("MeshUtil","\xaf","\x84","\x62","\xb1"),
	::String(null()) };

static void MeshUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MeshUtil_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MeshUtil_obj::sPoint3D,"sPoint3D");
	HX_MARK_MEMBER_NAME(MeshUtil_obj::sMatrix,"sMatrix");
	HX_MARK_MEMBER_NAME(MeshUtil_obj::sMatrix3D,"sMatrix3D");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MeshUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MeshUtil_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MeshUtil_obj::sPoint3D,"sPoint3D");
	HX_VISIT_MEMBER_NAME(MeshUtil_obj::sMatrix,"sMatrix");
	HX_VISIT_MEMBER_NAME(MeshUtil_obj::sMatrix3D,"sMatrix3D");
};

#endif

hx::Class MeshUtil_obj::__mClass;

static ::String MeshUtil_obj_sStaticFields[] = {
	HX_HCSTRING("sPoint3D","\xce","\x00","\x1c","\xd0"),
	HX_HCSTRING("sMatrix","\x14","\x03","\x81","\x9e"),
	HX_HCSTRING("sMatrix3D","\xc5","\x1c","\x17","\x03"),
	HX_HCSTRING("containsPoint","\xb1","\xb9","\xeb","\x92"),
	HX_HCSTRING("calculateBounds","\x7b","\xa0","\x47","\x1b"),
	::String(null())
};

void MeshUtil_obj::__register()
{
	hx::Object *dummy = new MeshUtil_obj;
	MeshUtil_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("starling.utils.MeshUtil","\x72","\x73","\xea","\xb3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MeshUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &MeshUtil_obj::__SetStatic;
	__mClass->mMarkFunc = MeshUtil_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(MeshUtil_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MeshUtil_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MeshUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MeshUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MeshUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MeshUtil_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MeshUtil_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_6cca5d42ff1c223e_29_boot)
HXDLIN(  29)		sPoint3D =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_6cca5d42ff1c223e_30_boot)
HXDLIN(  30)		sMatrix =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_6cca5d42ff1c223e_31_boot)
HXDLIN(  31)		sMatrix3D =  ::openfl::geom::Matrix3D_obj::__alloc( HX_CTX ,null());
            	}
}

} // end namespace starling
} // end namespace utils
