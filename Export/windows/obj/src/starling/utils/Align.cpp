// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_starling_errors_AbstractClassError
#include <starling/errors/AbstractClassError.h>
#endif
#ifndef INCLUDED_starling_utils_Align
#include <starling/utils/Align.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d6e70741e4fc008e_19_Align,"starling.utils.Align","Align",0x351b9d39,"starling.utils.Align.Align","starling/utils/Align.hx",19,0x0de968be)
HX_LOCAL_STACK_FRAME(_hx_pos_d6e70741e4fc008e_39_isValid,"starling.utils.Align","isValid",0xc06cbc46,"starling.utils.Align.isValid","starling/utils/Align.hx",39,0x0de968be)
HX_LOCAL_STACK_FRAME(_hx_pos_d6e70741e4fc008e_46_isValidHorizontal,"starling.utils.Align","isValidHorizontal",0x9f7610ca,"starling.utils.Align.isValidHorizontal","starling/utils/Align.hx",46,0x0de968be)
HX_LOCAL_STACK_FRAME(_hx_pos_d6e70741e4fc008e_52_isValidVertical,"starling.utils.Align","isValidVertical",0x4752eadc,"starling.utils.Align.isValidVertical","starling/utils/Align.hx",52,0x0de968be)
HX_LOCAL_STACK_FRAME(_hx_pos_d6e70741e4fc008e_22_boot,"starling.utils.Align","boot",0x61d39c1e,"starling.utils.Align.boot","starling/utils/Align.hx",22,0x0de968be)
HX_LOCAL_STACK_FRAME(_hx_pos_d6e70741e4fc008e_25_boot,"starling.utils.Align","boot",0x61d39c1e,"starling.utils.Align.boot","starling/utils/Align.hx",25,0x0de968be)
HX_LOCAL_STACK_FRAME(_hx_pos_d6e70741e4fc008e_28_boot,"starling.utils.Align","boot",0x61d39c1e,"starling.utils.Align.boot","starling/utils/Align.hx",28,0x0de968be)
HX_LOCAL_STACK_FRAME(_hx_pos_d6e70741e4fc008e_31_boot,"starling.utils.Align","boot",0x61d39c1e,"starling.utils.Align.boot","starling/utils/Align.hx",31,0x0de968be)
HX_LOCAL_STACK_FRAME(_hx_pos_d6e70741e4fc008e_34_boot,"starling.utils.Align","boot",0x61d39c1e,"starling.utils.Align.boot","starling/utils/Align.hx",34,0x0de968be)
namespace starling{
namespace utils{

void Align_obj::__construct() { }

Dynamic Align_obj::__CreateEmpty() { return new Align_obj; }

void *Align_obj::_hx_vtable = 0;

Dynamic Align_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Align_obj > _hx_result = new Align_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Align_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7666775c;
}

void Align_obj::Align(){
            	HX_GC_STACKFRAME(&_hx_pos_d6e70741e4fc008e_19_Align)
HXDLIN(  19)		HX_STACK_DO_THROW( ::starling::errors::AbstractClassError_obj::__alloc( HX_CTX ,null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Align_obj,Align,(void))

::String Align_obj::LEFT;

::String Align_obj::RIGHT;

::String Align_obj::TOP;

::String Align_obj::BOTTOM;

::String Align_obj::CENTER;

bool Align_obj::isValid(::String align){
            	HX_STACKFRAME(&_hx_pos_d6e70741e4fc008e_39_isValid)
HXDLIN(  39)		bool _hx_tmp;
HXDLIN(  39)		bool _hx_tmp1;
HXDLIN(  39)		bool _hx_tmp2;
HXDLIN(  39)		if ((align != HX_("left",07,08,b0,47))) {
HXDLIN(  39)			_hx_tmp2 = (align == HX_("right",dc,0b,64,e9));
            		}
            		else {
HXDLIN(  39)			_hx_tmp2 = true;
            		}
HXDLIN(  39)		if (!(_hx_tmp2)) {
HXDLIN(  39)			_hx_tmp1 = (align == HX_("center",d5,25,db,05));
            		}
            		else {
HXDLIN(  39)			_hx_tmp1 = true;
            		}
HXDLIN(  39)		if (!(_hx_tmp1)) {
HXDLIN(  39)			_hx_tmp = (align == HX_("top",95,66,58,00));
            		}
            		else {
HXDLIN(  39)			_hx_tmp = true;
            		}
HXDLIN(  39)		if (!(_hx_tmp)) {
HXLINE(  40)			return (align == HX_("bottom",eb,e6,78,65));
            		}
            		else {
HXDLIN(  39)			return true;
            		}
HXDLIN(  39)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Align_obj,isValid,return )

bool Align_obj::isValidHorizontal(::String align){
            	HX_STACKFRAME(&_hx_pos_d6e70741e4fc008e_46_isValidHorizontal)
HXDLIN(  46)		bool _hx_tmp;
HXDLIN(  46)		if ((align != HX_("left",07,08,b0,47))) {
HXDLIN(  46)			_hx_tmp = (align == HX_("center",d5,25,db,05));
            		}
            		else {
HXDLIN(  46)			_hx_tmp = true;
            		}
HXDLIN(  46)		if (!(_hx_tmp)) {
HXDLIN(  46)			return (align == HX_("right",dc,0b,64,e9));
            		}
            		else {
HXDLIN(  46)			return true;
            		}
HXDLIN(  46)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Align_obj,isValidHorizontal,return )

bool Align_obj::isValidVertical(::String align){
            	HX_STACKFRAME(&_hx_pos_d6e70741e4fc008e_52_isValidVertical)
HXDLIN(  52)		bool _hx_tmp;
HXDLIN(  52)		if ((align != HX_("top",95,66,58,00))) {
HXDLIN(  52)			_hx_tmp = (align == HX_("center",d5,25,db,05));
            		}
            		else {
HXDLIN(  52)			_hx_tmp = true;
            		}
HXDLIN(  52)		if (!(_hx_tmp)) {
HXDLIN(  52)			return (align == HX_("bottom",eb,e6,78,65));
            		}
            		else {
HXDLIN(  52)			return true;
            		}
HXDLIN(  52)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Align_obj,isValidVertical,return )


Align_obj::Align_obj()
{
}

hx::Val Align_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"Align") ) { return hx::Val( Align_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Align_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"isValid") ) { outValue = isValid_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"isValidVertical") ) { outValue = isValidVertical_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"isValidHorizontal") ) { outValue = isValidHorizontal_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Align_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Align_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Align_obj::LEFT,HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")},
	{hx::fsString,(void *) &Align_obj::RIGHT,HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")},
	{hx::fsString,(void *) &Align_obj::TOP,HX_HCSTRING("TOP","\x75","\x02","\x40","\x00")},
	{hx::fsString,(void *) &Align_obj::BOTTOM,HX_HCSTRING("BOTTOM","\xeb","\x92","\xfb","\x17")},
	{hx::fsString,(void *) &Align_obj::CENTER,HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Align_obj_sMemberFields[] = {
	HX_HCSTRING("Align","\xa5","\xc6","\xbe","\xb4"),
	::String(null()) };

static void Align_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Align_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Align_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(Align_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(Align_obj::TOP,"TOP");
	HX_MARK_MEMBER_NAME(Align_obj::BOTTOM,"BOTTOM");
	HX_MARK_MEMBER_NAME(Align_obj::CENTER,"CENTER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Align_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Align_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Align_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(Align_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(Align_obj::TOP,"TOP");
	HX_VISIT_MEMBER_NAME(Align_obj::BOTTOM,"BOTTOM");
	HX_VISIT_MEMBER_NAME(Align_obj::CENTER,"CENTER");
};

#endif

hx::Class Align_obj::__mClass;

static ::String Align_obj_sStaticFields[] = {
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	HX_HCSTRING("TOP","\x75","\x02","\x40","\x00"),
	HX_HCSTRING("BOTTOM","\xeb","\x92","\xfb","\x17"),
	HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8"),
	HX_HCSTRING("isValid","\xb2","\x18","\x3e","\xce"),
	HX_HCSTRING("isValidHorizontal","\x36","\xac","\xe7","\xc8"),
	HX_HCSTRING("isValidVertical","\x48","\x93","\xb8","\xcd"),
	::String(null())
};

void Align_obj::__register()
{
	hx::Object *dummy = new Align_obj;
	Align_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("starling.utils.Align","\x02","\x50","\x6b","\xb1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Align_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Align_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Align_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Align_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Align_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Align_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Align_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Align_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Align_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d6e70741e4fc008e_22_boot)
HXDLIN(  22)		LEFT = HX_("left",07,08,b0,47);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d6e70741e4fc008e_25_boot)
HXDLIN(  25)		RIGHT = HX_("right",dc,0b,64,e9);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d6e70741e4fc008e_28_boot)
HXDLIN(  28)		TOP = HX_("top",95,66,58,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d6e70741e4fc008e_31_boot)
HXDLIN(  31)		BOTTOM = HX_("bottom",eb,e6,78,65);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d6e70741e4fc008e_34_boot)
HXDLIN(  34)		CENTER = HX_("center",d5,25,db,05);
            	}
}

} // end namespace starling
} // end namespace utils