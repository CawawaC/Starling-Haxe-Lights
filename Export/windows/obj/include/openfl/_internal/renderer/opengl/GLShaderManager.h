// Generated by Haxe 3.4.3
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLShaderManager
#define INCLUDED_openfl__internal_renderer_opengl_GLShaderManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__internal_renderer_AbstractShaderManager
#include <openfl/_internal/renderer/AbstractShaderManager.h>
#endif
HX_DECLARE_CLASS3(lime,_backend,native,NativeGLRenderContext)
HX_DECLARE_CLASS3(openfl,_internal,renderer,AbstractShaderManager)
HX_DECLARE_CLASS4(openfl,_internal,renderer,opengl,GLShaderManager)
HX_DECLARE_CLASS2(openfl,display,Shader)

namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{


class HXCPP_CLASS_ATTRIBUTES GLShaderManager_obj : public  ::openfl::_internal::renderer::AbstractShaderManager_obj
{
	public:
		typedef  ::openfl::_internal::renderer::AbstractShaderManager_obj super;
		typedef GLShaderManager_obj OBJ_;
		GLShaderManager_obj();

	public:
		enum { _hx_ClassId = 0x0c3eb865 };

		void __construct( ::lime::_backend::native::NativeGLRenderContext gl);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.opengl.GLShaderManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.renderer.opengl.GLShaderManager"); }
		static hx::ObjectPtr< GLShaderManager_obj > __new( ::lime::_backend::native::NativeGLRenderContext gl);
		static hx::ObjectPtr< GLShaderManager_obj > __alloc(hx::Ctx *_hx_ctx, ::lime::_backend::native::NativeGLRenderContext gl);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLShaderManager_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GLShaderManager","\x63","\xb8","\x90","\xf4"); }

		 ::lime::_backend::native::NativeGLRenderContext gl;
		 ::openfl::display::Shader initShader( ::openfl::display::Shader shader);

		void setShader( ::openfl::display::Shader shader);

		void updateShader( ::openfl::display::Shader shader);

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl

#endif /* INCLUDED_openfl__internal_renderer_opengl_GLShaderManager */ 
