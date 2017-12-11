// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_haxe_crypto_Base64
#include <haxe/crypto/Base64.h>
#endif
#ifndef INCLUDED_haxe_crypto_BaseCode
#include <haxe/crypto/BaseCode.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_62328952372a8ef4_45_decode,"haxe.crypto.Base64","decode",0x319f7f68,"haxe.crypto.Base64.decode","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Base64.hx",45,0x538071b1)
HX_LOCAL_STACK_FRAME(_hx_pos_62328952372a8ef4_29_boot,"haxe.crypto.Base64","boot",0x49b2c3ec,"haxe.crypto.Base64.boot","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Base64.hx",29,0x538071b1)
HX_LOCAL_STACK_FRAME(_hx_pos_62328952372a8ef4_30_boot,"haxe.crypto.Base64","boot",0x49b2c3ec,"haxe.crypto.Base64.boot","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Base64.hx",30,0x538071b1)
namespace haxe{
namespace crypto{

void Base64_obj::__construct() { }

Dynamic Base64_obj::__CreateEmpty() { return new Base64_obj; }

void *Base64_obj::_hx_vtable = 0;

Dynamic Base64_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Base64_obj > _hx_result = new Base64_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Base64_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x65bbd7fa;
}

::String Base64_obj::CHARS;

 ::haxe::io::Bytes Base64_obj::BYTES;

 ::haxe::io::Bytes Base64_obj::decode(::String str,hx::Null< bool >  __o_complement){
bool complement = __o_complement.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_62328952372a8ef4_45_decode)
HXLINE(  46)		if (complement) {
HXLINE(  47)			while(hx::IsEq( str.charCodeAt((str.length - (int)1)),(int)61 )){
HXLINE(  48)				str = str.substr((int)0,(int)-1);
            			}
            		}
HXLINE(  49)		 ::haxe::crypto::BaseCode _hx_tmp =  ::haxe::crypto::BaseCode_obj::__alloc( HX_CTX ,::haxe::crypto::Base64_obj::BYTES);
HXDLIN(  49)		return _hx_tmp->decodeBytes(::haxe::io::Bytes_obj::ofString(str));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Base64_obj,decode,return )


Base64_obj::Base64_obj()
{
}

bool Base64_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"CHARS") ) { outValue = ( CHARS ); return true; }
		if (HX_FIELD_EQ(inName,"BYTES") ) { outValue = ( BYTES ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"decode") ) { outValue = decode_dyn(); return true; }
	}
	return false;
}

bool Base64_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"CHARS") ) { CHARS=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"BYTES") ) { BYTES=ioValue.Cast<  ::haxe::io::Bytes >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Base64_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Base64_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Base64_obj::CHARS,HX_HCSTRING("CHARS","\xbd","\xd4","\xa1","\xc3")},
	{hx::fsObject /*::haxe::io::Bytes*/ ,(void *) &Base64_obj::BYTES,HX_HCSTRING("BYTES","\x4b","\x40","\x86","\x3b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Base64_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Base64_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Base64_obj::CHARS,"CHARS");
	HX_MARK_MEMBER_NAME(Base64_obj::BYTES,"BYTES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Base64_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Base64_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Base64_obj::CHARS,"CHARS");
	HX_VISIT_MEMBER_NAME(Base64_obj::BYTES,"BYTES");
};

#endif

hx::Class Base64_obj::__mClass;

static ::String Base64_obj_sStaticFields[] = {
	HX_HCSTRING("CHARS","\xbd","\xd4","\xa1","\xc3"),
	HX_HCSTRING("BYTES","\x4b","\x40","\x86","\x3b"),
	HX_HCSTRING("decode","\x2e","\x5d","\xed","\x64"),
	::String(null())
};

void Base64_obj::__register()
{
	hx::Object *dummy = new Base64_obj;
	Base64_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.crypto.Base64","\xf4","\x3a","\x39","\xe7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Base64_obj::__GetStatic;
	__mClass->mSetStaticField = &Base64_obj::__SetStatic;
	__mClass->mMarkFunc = Base64_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Base64_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Base64_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Base64_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Base64_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Base64_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Base64_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_62328952372a8ef4_29_boot)
HXDLIN(  29)		CHARS = HX_("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/",03,41,03,7f);
            	}
{
            	HX_STACKFRAME(&_hx_pos_62328952372a8ef4_30_boot)
HXDLIN(  30)		BYTES = ::haxe::io::Bytes_obj::ofString(::haxe::crypto::Base64_obj::CHARS);
            	}
}

} // end namespace haxe
} // end namespace crypto
