// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_lime_text__Glyph_Glyph_Impl_
#include <lime/text/_Glyph/Glyph_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_183e32c5f5bc8a9f_7__new,"lime.text._Glyph.Glyph_Impl_","_new",0x786a5adc,"lime.text._Glyph.Glyph_Impl_._new","lime/text/Glyph.hx",7,0x27d291da)
namespace lime{
namespace text{
namespace _Glyph{

void Glyph_Impl__obj::__construct() { }

Dynamic Glyph_Impl__obj::__CreateEmpty() { return new Glyph_Impl__obj; }

void *Glyph_Impl__obj::_hx_vtable = 0;

Dynamic Glyph_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Glyph_Impl__obj > _hx_result = new Glyph_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Glyph_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ee339b9;
}

int Glyph_Impl__obj::_new(int i){
            	HX_STACKFRAME(&_hx_pos_183e32c5f5bc8a9f_7__new)
HXDLIN(   7)		int this1 = i;
HXDLIN(   7)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Glyph_Impl__obj,_new,return )


Glyph_Impl__obj::Glyph_Impl__obj()
{
}

bool Glyph_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Glyph_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Glyph_Impl__obj_sStaticStorageInfo = 0;
#endif

static void Glyph_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Glyph_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Glyph_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Glyph_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class Glyph_Impl__obj::__mClass;

static ::String Glyph_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	::String(null())
};

void Glyph_Impl__obj::__register()
{
	hx::Object *dummy = new Glyph_Impl__obj;
	Glyph_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.text._Glyph.Glyph_Impl_","\xd3","\x0c","\xa5","\x32");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Glyph_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Glyph_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Glyph_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Glyph_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Glyph_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Glyph_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Glyph_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace text
} // end namespace _Glyph