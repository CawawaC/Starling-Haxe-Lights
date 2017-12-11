// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_GLContextType
#include <lime/graphics/opengl/GLContextType.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{

::lime::graphics::opengl::GLContextType GLContextType_obj::GLES;

::lime::graphics::opengl::GLContextType GLContextType_obj::OPENGL;

::lime::graphics::opengl::GLContextType GLContextType_obj::WEBGL;

bool GLContextType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("GLES",d3,0d,28,2f)) { outValue = GLContextType_obj::GLES; return true; }
	if (inName==HX_("OPENGL",6f,10,17,d4)) { outValue = GLContextType_obj::OPENGL; return true; }
	if (inName==HX_("WEBGL",99,83,aa,45)) { outValue = GLContextType_obj::WEBGL; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(GLContextType_obj)

int GLContextType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("GLES",d3,0d,28,2f)) return 1;
	if (inName==HX_("OPENGL",6f,10,17,d4)) return 0;
	if (inName==HX_("WEBGL",99,83,aa,45)) return 2;
	return super::__FindIndex(inName);
}

int GLContextType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("GLES",d3,0d,28,2f)) return 0;
	if (inName==HX_("OPENGL",6f,10,17,d4)) return 0;
	if (inName==HX_("WEBGL",99,83,aa,45)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val GLContextType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("GLES",d3,0d,28,2f)) return GLES;
	if (inName==HX_("OPENGL",6f,10,17,d4)) return OPENGL;
	if (inName==HX_("WEBGL",99,83,aa,45)) return WEBGL;
	return super::__Field(inName,inCallProp);
}

static ::String GLContextType_obj_sStaticFields[] = {
	HX_("OPENGL",6f,10,17,d4),
	HX_("GLES",d3,0d,28,2f),
	HX_("WEBGL",99,83,aa,45),
	::String(null())
};

static void GLContextType_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLContextType_obj::GLES,"GLES");
	HX_MARK_MEMBER_NAME(GLContextType_obj::OPENGL,"OPENGL");
	HX_MARK_MEMBER_NAME(GLContextType_obj::WEBGL,"WEBGL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLContextType_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLContextType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GLContextType_obj::GLES,"GLES");
	HX_VISIT_MEMBER_NAME(GLContextType_obj::OPENGL,"OPENGL");
	HX_VISIT_MEMBER_NAME(GLContextType_obj::WEBGL,"WEBGL");
};
#endif

hx::Class GLContextType_obj::__mClass;

Dynamic __Create_GLContextType_obj() { return new GLContextType_obj; }

void GLContextType_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("lime.graphics.opengl.GLContextType","\x4f","\xc5","\x88","\xac"), hx::TCanCast< GLContextType_obj >,GLContextType_obj_sStaticFields,0,
	&__Create_GLContextType_obj, &__Create,
	&super::__SGetClass(), &CreateGLContextType_obj, GLContextType_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , GLContextType_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &GLContextType_obj::__GetStatic;
}

void GLContextType_obj::__boot()
{
GLES = hx::CreateEnum< GLContextType_obj >(HX_HCSTRING("GLES","\xd3","\x0d","\x28","\x2f"),1,0);
OPENGL = hx::CreateEnum< GLContextType_obj >(HX_HCSTRING("OPENGL","\x6f","\x10","\x17","\xd4"),0,0);
WEBGL = hx::CreateEnum< GLContextType_obj >(HX_HCSTRING("WEBGL","\x99","\x83","\xaa","\x45"),2,0);
}


} // end namespace lime
} // end namespace graphics
} // end namespace opengl
