// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLContextType
#include <lime/graphics/opengl/GLContextType.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_GLCompressedTextureFormats
#include <openfl/_internal/stage3D/GLCompressedTextureFormats.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_GLUtils
#include <openfl/_internal/stage3D/GLUtils.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_SamplerState
#include <openfl/_internal/stage3D/SamplerState.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_opengl_GLTextureBase
#include <openfl/_internal/stage3D/opengl/GLTextureBase.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_14f63a7ac89c9643_33_create,"openfl._internal.stage3D.opengl.GLTextureBase","create",0x8eccf053,"openfl._internal.stage3D.opengl.GLTextureBase.create","openfl/_internal/stage3D/opengl/GLTextureBase.hx",33,0xb5ae4a05)
HX_LOCAL_STACK_FRAME(_hx_pos_14f63a7ac89c9643_86_dispose,"openfl._internal.stage3D.opengl.GLTextureBase","dispose",0x0e672368,"openfl._internal.stage3D.opengl.GLTextureBase.dispose","openfl/_internal/stage3D/opengl/GLTextureBase.hx",86,0xb5ae4a05)
HX_LOCAL_STACK_FRAME(_hx_pos_14f63a7ac89c9643_135_getImage,"openfl._internal.stage3D.opengl.GLTextureBase","getImage",0x8173fbfc,"openfl._internal.stage3D.opengl.GLTextureBase.getImage","openfl/_internal/stage3D/opengl/GLTextureBase.hx",135,0xb5ae4a05)
HX_LOCAL_STACK_FRAME(_hx_pos_14f63a7ac89c9643_198_setSamplerState,"openfl._internal.stage3D.opengl.GLTextureBase","setSamplerState",0x3b8dca74,"openfl._internal.stage3D.opengl.GLTextureBase.setSamplerState","openfl/_internal/stage3D/opengl/GLTextureBase.hx",198,0xb5ae4a05)
HX_LOCAL_STACK_FRAME(_hx_pos_14f63a7ac89c9643_26_boot,"openfl._internal.stage3D.opengl.GLTextureBase","boot",0x974f39c9,"openfl._internal.stage3D.opengl.GLTextureBase.boot","openfl/_internal/stage3D/opengl/GLTextureBase.hx",26,0xb5ae4a05)
HX_LOCAL_STACK_FRAME(_hx_pos_14f63a7ac89c9643_30_boot,"openfl._internal.stage3D.opengl.GLTextureBase","boot",0x974f39c9,"openfl._internal.stage3D.opengl.GLTextureBase.boot","openfl/_internal/stage3D/opengl/GLTextureBase.hx",30,0xb5ae4a05)
namespace openfl{
namespace _internal{
namespace stage3D{
namespace opengl{

void GLTextureBase_obj::__construct() { }

Dynamic GLTextureBase_obj::__CreateEmpty() { return new GLTextureBase_obj; }

void *GLTextureBase_obj::_hx_vtable = 0;

Dynamic GLTextureBase_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLTextureBase_obj > _hx_result = new GLTextureBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLTextureBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3ab35a71;
}

 ::Dynamic GLTextureBase_obj::_hx___supportsBGRA;

int GLTextureBase_obj::_hx___textureFormat;

int GLTextureBase_obj::_hx___textureInternalFormat;

 ::openfl::_internal::stage3D::GLCompressedTextureFormats GLTextureBase_obj::_hx___compressedTextureFormats;

void GLTextureBase_obj::create( ::openfl::display3D::textures::TextureBase textureBase, ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_GC_STACKFRAME(&_hx_pos_14f63a7ac89c9643_33_create)
HXLINE(  35)		 ::lime::_backend::native::NativeGLRenderContext gl = renderSession->gl;
HXLINE(  37)		textureBase->_hx___textureID = gl->createTexture();
HXLINE(  38)		textureBase->_hx___textureContext = gl;
HXLINE(  40)		if (hx::IsNull( ::openfl::_internal::stage3D::opengl::GLTextureBase_obj::_hx___supportsBGRA )) {
HXLINE(  42)			::openfl::_internal::stage3D::opengl::GLTextureBase_obj::_hx___textureInternalFormat = gl->RGBA;
HXLINE(  44)			 ::Dynamic bgraExtension = null();
HXLINE(  46)			bgraExtension = gl->getExtension(HX_("EXT_bgra",72,74,1a,40));
HXLINE(  47)			if (hx::IsNull( bgraExtension )) {
HXLINE(  48)				bgraExtension = gl->getExtension(HX_("EXT_texture_format_BGRA8888",5a,d2,bd,b2));
            			}
HXLINE(  49)			if (hx::IsNull( bgraExtension )) {
HXLINE(  50)				bgraExtension = gl->getExtension(HX_("APPLE_texture_format_BGRA8888",13,8a,88,e2));
            			}
HXLINE(  53)			if (hx::IsNotNull( bgraExtension )) {
HXLINE(  55)				::openfl::_internal::stage3D::opengl::GLTextureBase_obj::_hx___supportsBGRA = true;
HXLINE(  56)				::openfl::_internal::stage3D::opengl::GLTextureBase_obj::_hx___textureFormat = ( (int)(bgraExtension->__Field(HX_("BGRA_EXT",36,94,c4,bc),hx::paccDynamic)) );
HXLINE(  59)				if (hx::IsEq( gl->type,::lime::graphics::opengl::GLContextType_obj::GLES_dyn() )) {
HXLINE(  61)					::openfl::_internal::stage3D::opengl::GLTextureBase_obj::_hx___textureInternalFormat = ( (int)(bgraExtension->__Field(HX_("BGRA_EXT",36,94,c4,bc),hx::paccDynamic)) );
            				}
            			}
            			else {
HXLINE(  68)				::openfl::_internal::stage3D::opengl::GLTextureBase_obj::_hx___supportsBGRA = false;
HXLINE(  69)				::openfl::_internal::stage3D::opengl::GLTextureBase_obj::_hx___textureFormat = gl->RGBA;
            			}
            		}
HXLINE(  75)		if (hx::IsNull( ::openfl::_internal::stage3D::opengl::GLTextureBase_obj::_hx___compressedTextureFormats )) {
HXLINE(  77)			::openfl::_internal::stage3D::opengl::GLTextureBase_obj::_hx___compressedTextureFormats =  ::openfl::_internal::stage3D::GLCompressedTextureFormats_obj::__alloc( HX_CTX ,gl);
            		}
HXLINE(  80)		textureBase->_hx___internalFormat = ::openfl::_internal::stage3D::opengl::GLTextureBase_obj::_hx___textureInternalFormat;
HXLINE(  81)		textureBase->_hx___format = ::openfl::_internal::stage3D::opengl::GLTextureBase_obj::_hx___textureFormat;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLTextureBase_obj,create,(void))

void GLTextureBase_obj::dispose( ::openfl::display3D::textures::TextureBase textureBase, ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_14f63a7ac89c9643_86_dispose)
HXLINE(  88)		 ::lime::_backend::native::NativeGLRenderContext gl = renderSession->gl;
HXLINE(  90)		if (hx::IsNotNull( textureBase->_hx___alphaTexture )) {
HXLINE(  92)			textureBase->_hx___alphaTexture->dispose();
            		}
HXLINE(  96)		gl->deleteTexture(textureBase->_hx___textureID);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLTextureBase_obj,dispose,(void))

 ::lime::graphics::Image GLTextureBase_obj::getImage( ::openfl::display3D::textures::TextureBase textureBase, ::openfl::_internal::renderer::RenderSession renderSession, ::openfl::display::BitmapData bitmapData){
            	HX_STACKFRAME(&_hx_pos_14f63a7ac89c9643_135_getImage)
HXLINE( 137)		 ::lime::graphics::Image image = bitmapData->image;
HXLINE( 139)		bool _hx_tmp;
HXDLIN( 139)		if (!(!(bitmapData->_hx___isValid))) {
HXLINE( 139)			_hx_tmp = hx::IsNull( image );
            		}
            		else {
HXLINE( 139)			_hx_tmp = true;
            		}
HXDLIN( 139)		if (_hx_tmp) {
HXLINE( 141)			return null();
            		}
HXLINE( 179)		bool _hx_tmp1;
HXDLIN( 179)		if (!(image->get_premultiplied())) {
HXLINE( 179)			_hx_tmp1 = image->get_transparent();
            		}
            		else {
HXLINE( 179)			_hx_tmp1 = false;
            		}
HXDLIN( 179)		if (_hx_tmp1) {
HXLINE( 181)			image = image->clone();
HXLINE( 182)			image->set_premultiplied(true);
            		}
HXLINE( 191)		return image;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLTextureBase_obj,getImage,return )

void GLTextureBase_obj::setSamplerState( ::openfl::display3D::textures::TextureBase textureBase, ::openfl::_internal::renderer::RenderSession renderSession, ::openfl::_internal::stage3D::SamplerState state){
            	HX_STACKFRAME(&_hx_pos_14f63a7ac89c9643_198_setSamplerState)
HXDLIN( 198)		if (!(state->equals(textureBase->_hx___samplerState))) {
HXLINE( 200)			 ::lime::_backend::native::NativeGLRenderContext gl = renderSession->gl;
HXLINE( 202)			gl->bindTexture(textureBase->_hx___textureTarget,textureBase->_hx___textureID);
HXLINE( 203)			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE( 204)			gl->texParameteri(textureBase->_hx___textureTarget,gl->TEXTURE_MIN_FILTER,state->minFilter);
HXLINE( 205)			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE( 206)			gl->texParameteri(textureBase->_hx___textureTarget,gl->TEXTURE_MAG_FILTER,state->magFilter);
HXLINE( 207)			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE( 208)			gl->texParameteri(textureBase->_hx___textureTarget,gl->TEXTURE_WRAP_S,state->wrapModeS);
HXLINE( 209)			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE( 210)			gl->texParameteri(textureBase->_hx___textureTarget,gl->TEXTURE_WRAP_T,state->wrapModeT);
HXLINE( 211)			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE( 213)			bool _hx_tmp = (state->lodBias != ((Float)0.0));
HXLINE( 220)			textureBase->_hx___samplerState = state;
HXLINE( 221)			textureBase->_hx___samplerState->_hx___samplerDirty = false;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLTextureBase_obj,setSamplerState,(void))


GLTextureBase_obj::GLTextureBase_obj()
{
}

bool GLTextureBase_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { outValue = dispose_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getImage") ) { outValue = getImage_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__supportsBGRA") ) { outValue = ( _hx___supportsBGRA ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__textureFormat") ) { outValue = ( _hx___textureFormat ); return true; }
		if (HX_FIELD_EQ(inName,"setSamplerState") ) { outValue = setSamplerState_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__textureInternalFormat") ) { outValue = ( _hx___textureInternalFormat ); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__compressedTextureFormats") ) { outValue = ( _hx___compressedTextureFormats ); return true; }
	}
	return false;
}

bool GLTextureBase_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"__supportsBGRA") ) { _hx___supportsBGRA=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__textureFormat") ) { _hx___textureFormat=ioValue.Cast< int >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__textureInternalFormat") ) { _hx___textureInternalFormat=ioValue.Cast< int >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__compressedTextureFormats") ) { _hx___compressedTextureFormats=ioValue.Cast<  ::openfl::_internal::stage3D::GLCompressedTextureFormats >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GLTextureBase_obj_sMemberStorageInfo = 0;
static hx::StaticInfo GLTextureBase_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &GLTextureBase_obj::_hx___supportsBGRA,HX_HCSTRING("__supportsBGRA","\x58","\x53","\x57","\x0f")},
	{hx::fsInt,(void *) &GLTextureBase_obj::_hx___textureFormat,HX_HCSTRING("__textureFormat","\x52","\x9b","\x58","\x18")},
	{hx::fsInt,(void *) &GLTextureBase_obj::_hx___textureInternalFormat,HX_HCSTRING("__textureInternalFormat","\x6f","\x15","\xaa","\xa7")},
	{hx::fsObject /*::openfl::_internal::stage3D::GLCompressedTextureFormats*/ ,(void *) &GLTextureBase_obj::_hx___compressedTextureFormats,HX_HCSTRING("__compressedTextureFormats","\x42","\xd5","\xe0","\x9b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void GLTextureBase_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLTextureBase_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GLTextureBase_obj::_hx___supportsBGRA,"__supportsBGRA");
	HX_MARK_MEMBER_NAME(GLTextureBase_obj::_hx___textureFormat,"__textureFormat");
	HX_MARK_MEMBER_NAME(GLTextureBase_obj::_hx___textureInternalFormat,"__textureInternalFormat");
	HX_MARK_MEMBER_NAME(GLTextureBase_obj::_hx___compressedTextureFormats,"__compressedTextureFormats");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLTextureBase_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLTextureBase_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GLTextureBase_obj::_hx___supportsBGRA,"__supportsBGRA");
	HX_VISIT_MEMBER_NAME(GLTextureBase_obj::_hx___textureFormat,"__textureFormat");
	HX_VISIT_MEMBER_NAME(GLTextureBase_obj::_hx___textureInternalFormat,"__textureInternalFormat");
	HX_VISIT_MEMBER_NAME(GLTextureBase_obj::_hx___compressedTextureFormats,"__compressedTextureFormats");
};

#endif

hx::Class GLTextureBase_obj::__mClass;

static ::String GLTextureBase_obj_sStaticFields[] = {
	HX_HCSTRING("__supportsBGRA","\x58","\x53","\x57","\x0f"),
	HX_HCSTRING("__textureFormat","\x52","\x9b","\x58","\x18"),
	HX_HCSTRING("__textureInternalFormat","\x6f","\x15","\xaa","\xa7"),
	HX_HCSTRING("__compressedTextureFormats","\x42","\xd5","\xe0","\x9b"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("getImage","\xe5","\x2e","\x40","\x1d"),
	HX_HCSTRING("setSamplerState","\xab","\xb6","\x75","\xda"),
	::String(null())
};

void GLTextureBase_obj::__register()
{
	hx::Object *dummy = new GLTextureBase_obj;
	GLTextureBase_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D.opengl.GLTextureBase","\x37","\x92","\x4a","\xb2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLTextureBase_obj::__GetStatic;
	__mClass->mSetStaticField = &GLTextureBase_obj::__SetStatic;
	__mClass->mMarkFunc = GLTextureBase_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GLTextureBase_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLTextureBase_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLTextureBase_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLTextureBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLTextureBase_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GLTextureBase_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_14f63a7ac89c9643_26_boot)
HXDLIN(  26)		_hx___supportsBGRA = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_14f63a7ac89c9643_30_boot)
HXDLIN(  30)		_hx___compressedTextureFormats = null();
            	}
}

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
} // end namespace opengl