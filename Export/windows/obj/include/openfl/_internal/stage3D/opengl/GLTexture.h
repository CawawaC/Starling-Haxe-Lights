// Generated by Haxe 3.4.3
#ifndef INCLUDED_openfl__internal_stage3D_opengl_GLTexture
#define INCLUDED_openfl__internal_stage3D_opengl_GLTexture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS3(openfl,_internal,stage3D,SamplerState)
HX_DECLARE_CLASS4(openfl,_internal,stage3D,opengl,GLTexture)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,display3D,textures,Texture)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace _internal{
namespace stage3D{
namespace opengl{


class HXCPP_CLASS_ATTRIBUTES GLTexture_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GLTexture_obj OBJ_;
		GLTexture_obj();

	public:
		enum { _hx_ClassId = 0x3a992640 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._internal.stage3D.opengl.GLTexture")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl._internal.stage3D.opengl.GLTexture"); }

		hx::ObjectPtr< GLTexture_obj > __new() {
			hx::ObjectPtr< GLTexture_obj > __this = new GLTexture_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< GLTexture_obj > __alloc(hx::Ctx *_hx_ctx) {
			GLTexture_obj *__this = (GLTexture_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GLTexture_obj), false, "openfl._internal.stage3D.opengl.GLTexture"));
			*(void **)__this = GLTexture_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLTexture_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GLTexture","\x36","\xf1","\x1f","\xe8"); }

		static void create( ::openfl::display3D::textures::Texture texture, ::openfl::_internal::renderer::RenderSession renderSession);
		static ::Dynamic create_dyn();

		static void uploadCompressedTextureFromByteArray( ::openfl::display3D::textures::Texture texture, ::openfl::_internal::renderer::RenderSession renderSession, ::openfl::utils::ByteArrayData data,int byteArrayOffset);
		static ::Dynamic uploadCompressedTextureFromByteArray_dyn();

		static void uploadFromBitmapData( ::openfl::display3D::textures::Texture texture, ::openfl::_internal::renderer::RenderSession renderSession, ::openfl::display::BitmapData source,int miplevel,bool generateMipmap);
		static ::Dynamic uploadFromBitmapData_dyn();

		static void uploadFromByteArray( ::openfl::display3D::textures::Texture texture, ::openfl::_internal::renderer::RenderSession renderSession, ::openfl::utils::ByteArrayData data,int byteArrayOffset,hx::Null< int >  miplevel);
		static ::Dynamic uploadFromByteArray_dyn();

		static void uploadFromTypedArray( ::openfl::display3D::textures::Texture texture, ::openfl::_internal::renderer::RenderSession renderSession, ::lime::utils::ArrayBufferView data,hx::Null< int >  miplevel);
		static ::Dynamic uploadFromTypedArray_dyn();

		static void setSamplerState( ::openfl::display3D::textures::Texture texture, ::openfl::_internal::renderer::RenderSession renderSession, ::openfl::_internal::stage3D::SamplerState state);
		static ::Dynamic setSamplerState_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
} // end namespace opengl

#endif /* INCLUDED_openfl__internal_stage3D_opengl_GLTexture */ 
