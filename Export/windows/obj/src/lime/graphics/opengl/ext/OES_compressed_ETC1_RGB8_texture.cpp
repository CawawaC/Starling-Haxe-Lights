// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_compressed_ETC1_RGB8_texture
#include <lime/graphics/opengl/ext/OES_compressed_ETC1_RGB8_texture.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d9cc39cd2e451b00_9_new,"lime.graphics.opengl.ext.OES_compressed_ETC1_RGB8_texture","new",0x4138d4e1,"lime.graphics.opengl.ext.OES_compressed_ETC1_RGB8_texture.new","lime/graphics/opengl/ext/OES_compressed_ETC1_RGB8_texture.hx",9,0xea6c824d)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void OES_compressed_ETC1_RGB8_texture_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d9cc39cd2e451b00_9_new)
HXDLIN(   9)		this->ETC1_RGB8_OES = (int)36196;
            	}

Dynamic OES_compressed_ETC1_RGB8_texture_obj::__CreateEmpty() { return new OES_compressed_ETC1_RGB8_texture_obj; }

void *OES_compressed_ETC1_RGB8_texture_obj::_hx_vtable = 0;

Dynamic OES_compressed_ETC1_RGB8_texture_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< OES_compressed_ETC1_RGB8_texture_obj > _hx_result = new OES_compressed_ETC1_RGB8_texture_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OES_compressed_ETC1_RGB8_texture_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0ef8127f;
}


OES_compressed_ETC1_RGB8_texture_obj::OES_compressed_ETC1_RGB8_texture_obj()
{
}

hx::Val OES_compressed_ETC1_RGB8_texture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"ETC1_RGB8_OES") ) { return hx::Val( ETC1_RGB8_OES ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val OES_compressed_ETC1_RGB8_texture_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"ETC1_RGB8_OES") ) { ETC1_RGB8_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_compressed_ETC1_RGB8_texture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ETC1_RGB8_OES","\xab","\x04","\x61","\xeb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo OES_compressed_ETC1_RGB8_texture_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(OES_compressed_ETC1_RGB8_texture_obj,ETC1_RGB8_OES),HX_HCSTRING("ETC1_RGB8_OES","\xab","\x04","\x61","\xeb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *OES_compressed_ETC1_RGB8_texture_obj_sStaticStorageInfo = 0;
#endif

static ::String OES_compressed_ETC1_RGB8_texture_obj_sMemberFields[] = {
	HX_HCSTRING("ETC1_RGB8_OES","\xab","\x04","\x61","\xeb"),
	::String(null()) };

static void OES_compressed_ETC1_RGB8_texture_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OES_compressed_ETC1_RGB8_texture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OES_compressed_ETC1_RGB8_texture_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OES_compressed_ETC1_RGB8_texture_obj::__mClass,"__mClass");
};

#endif

hx::Class OES_compressed_ETC1_RGB8_texture_obj::__mClass;

void OES_compressed_ETC1_RGB8_texture_obj::__register()
{
	hx::Object *dummy = new OES_compressed_ETC1_RGB8_texture_obj;
	OES_compressed_ETC1_RGB8_texture_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.OES_compressed_ETC1_RGB8_texture","\x6f","\xd0","\x5a","\x2b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = OES_compressed_ETC1_RGB8_texture_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(OES_compressed_ETC1_RGB8_texture_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OES_compressed_ETC1_RGB8_texture_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OES_compressed_ETC1_RGB8_texture_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OES_compressed_ETC1_RGB8_texture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OES_compressed_ETC1_RGB8_texture_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
