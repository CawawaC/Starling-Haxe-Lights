// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_text_unifill__Utf8_StringU8_Impl_
#include <lime/text/unifill/_Utf8/StringU8_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6d43973c6588024c_256_fromString,"lime.text.unifill._Utf8.StringU8_Impl_","fromString",0x60db4c74,"lime.text.unifill._Utf8.StringU8_Impl_.fromString","lime/text/unifill/Utf8.hx",256,0x1a6d2f09)
HX_LOCAL_STACK_FRAME(_hx_pos_6d43973c6588024c_260_ofBytes,"lime.text.unifill._Utf8.StringU8_Impl_","ofBytes",0x76e97b9b,"lime.text.unifill._Utf8.StringU8_Impl_.ofBytes","lime/text/unifill/Utf8.hx",260,0x1a6d2f09)
HX_LOCAL_STACK_FRAME(_hx_pos_6d43973c6588024c_264_fromBytes,"lime.text.unifill._Utf8.StringU8_Impl_","fromBytes",0x2b026a28,"lime.text.unifill._Utf8.StringU8_Impl_.fromBytes","lime/text/unifill/Utf8.hx",264,0x1a6d2f09)
HX_LOCAL_STACK_FRAME(_hx_pos_6d43973c6588024c_270_codeUnitAt,"lime.text.unifill._Utf8.StringU8_Impl_","codeUnitAt",0x37b5903d,"lime.text.unifill._Utf8.StringU8_Impl_.codeUnitAt","lime/text/unifill/Utf8.hx",270,0x1a6d2f09)
HX_LOCAL_STACK_FRAME(_hx_pos_6d43973c6588024c_274_substr,"lime.text.unifill._Utf8.StringU8_Impl_","substr",0xb8468d4a,"lime.text.unifill._Utf8.StringU8_Impl_.substr","lime/text/unifill/Utf8.hx",274,0x1a6d2f09)
HX_LOCAL_STACK_FRAME(_hx_pos_6d43973c6588024c_278_toString,"lime.text.unifill._Utf8.StringU8_Impl_","toString",0x1360e705,"lime.text.unifill._Utf8.StringU8_Impl_.toString","lime/text/unifill/Utf8.hx",278,0x1a6d2f09)
HX_LOCAL_STACK_FRAME(_hx_pos_6d43973c6588024c_282_toBytes,"lime.text.unifill._Utf8.StringU8_Impl_","toBytes",0xe00b0cb7,"lime.text.unifill._Utf8.StringU8_Impl_.toBytes","lime/text/unifill/Utf8.hx",282,0x1a6d2f09)
HX_LOCAL_STACK_FRAME(_hx_pos_6d43973c6588024c_285__new,"lime.text.unifill._Utf8.StringU8_Impl_","_new",0xf59ecb3a,"lime.text.unifill._Utf8.StringU8_Impl_._new","lime/text/unifill/Utf8.hx",285,0x1a6d2f09)
HX_LOCAL_STACK_FRAME(_hx_pos_6d43973c6588024c_290_get_length,"lime.text.unifill._Utf8.StringU8_Impl_","get_length",0x9bf62348,"lime.text.unifill._Utf8.StringU8_Impl_.get_length","lime/text/unifill/Utf8.hx",290,0x1a6d2f09)
namespace lime{
namespace text{
namespace unifill{
namespace _Utf8{

void StringU8_Impl__obj::__construct() { }

Dynamic StringU8_Impl__obj::__CreateEmpty() { return new StringU8_Impl__obj; }

void *StringU8_Impl__obj::_hx_vtable = 0;

Dynamic StringU8_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StringU8_Impl__obj > _hx_result = new StringU8_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StringU8_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0cdcda97;
}

::String StringU8_Impl__obj::fromString(::String s){
            	HX_STACKFRAME(&_hx_pos_6d43973c6588024c_256_fromString)
HXDLIN( 256)		::String this1 = s;
HXDLIN( 256)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringU8_Impl__obj,fromString,return )

::String StringU8_Impl__obj::ofBytes( ::haxe::io::Bytes b){
            	HX_STACKFRAME(&_hx_pos_6d43973c6588024c_260_ofBytes)
HXDLIN( 260)		::String this1 = b->toString();
HXDLIN( 260)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringU8_Impl__obj,ofBytes,return )

::String StringU8_Impl__obj::fromBytes( ::haxe::io::Bytes b){
            	HX_STACKFRAME(&_hx_pos_6d43973c6588024c_264_fromBytes)
HXDLIN( 264)		::String this1 = b->toString();
HXDLIN( 264)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringU8_Impl__obj,fromBytes,return )

int StringU8_Impl__obj::codeUnitAt(::String this1,int index){
            	HX_STACKFRAME(&_hx_pos_6d43973c6588024c_270_codeUnitAt)
HXDLIN( 270)		return this1.cca(index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringU8_Impl__obj,codeUnitAt,return )

::String StringU8_Impl__obj::substr(::String this1,int index, ::Dynamic len){
            	HX_STACKFRAME(&_hx_pos_6d43973c6588024c_274_substr)
HXDLIN( 274)		::String this2 = this1.substr(index,len);
HXDLIN( 274)		return this2;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StringU8_Impl__obj,substr,return )

::String StringU8_Impl__obj::toString(::String this1){
            	HX_STACKFRAME(&_hx_pos_6d43973c6588024c_278_toString)
HXDLIN( 278)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringU8_Impl__obj,toString,return )

 ::haxe::io::Bytes StringU8_Impl__obj::toBytes(::String this1){
            	HX_STACKFRAME(&_hx_pos_6d43973c6588024c_282_toBytes)
HXDLIN( 282)		return ::haxe::io::Bytes_obj::ofString(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringU8_Impl__obj,toBytes,return )

::String StringU8_Impl__obj::_new(::String s){
            	HX_STACKFRAME(&_hx_pos_6d43973c6588024c_285__new)
HXDLIN( 285)		::String this1 = s;
HXDLIN( 285)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringU8_Impl__obj,_new,return )

int StringU8_Impl__obj::get_length(::String this1){
            	HX_STACKFRAME(&_hx_pos_6d43973c6588024c_290_get_length)
HXDLIN( 290)		return this1.length;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringU8_Impl__obj,get_length,return )


StringU8_Impl__obj::StringU8_Impl__obj()
{
}

bool StringU8_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"substr") ) { outValue = substr_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ofBytes") ) { outValue = ofBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toBytes") ) { outValue = toBytes_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"codeUnitAt") ) { outValue = codeUnitAt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *StringU8_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *StringU8_Impl__obj_sStaticStorageInfo = 0;
#endif

static void StringU8_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StringU8_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StringU8_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StringU8_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class StringU8_Impl__obj::__mClass;

static ::String StringU8_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("ofBytes","\xd4","\xc3","\xfa","\x20"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("codeUnitAt","\xa4","\x71","\x4e","\x2b"),
	HX_HCSTRING("substr","\x31","\xef","\x0a","\x9a"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("toBytes","\xf0","\x54","\x1c","\x8a"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	::String(null())
};

void StringU8_Impl__obj::__register()
{
	hx::Object *dummy = new StringU8_Impl__obj;
	StringU8_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.text.unifill._Utf8.StringU8_Impl_","\x35","\x79","\x42","\x36");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StringU8_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = StringU8_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(StringU8_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StringU8_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StringU8_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringU8_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringU8_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace text
} // end namespace unifill
} // end namespace _Utf8