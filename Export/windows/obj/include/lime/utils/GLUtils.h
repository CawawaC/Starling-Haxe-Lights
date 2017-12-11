// Generated by Haxe 3.4.3
#ifndef INCLUDED_lime_utils_GLUtils
#define INCLUDED_lime_utils_GLUtils

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS2(lime,utils,GLUtils)

namespace lime{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES GLUtils_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GLUtils_obj OBJ_;
		GLUtils_obj();

	public:
		enum { _hx_ClassId = 0x416d00f4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.utils.GLUtils")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.utils.GLUtils"); }

		hx::ObjectPtr< GLUtils_obj > __new() {
			hx::ObjectPtr< GLUtils_obj > __this = new GLUtils_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< GLUtils_obj > __alloc(hx::Ctx *_hx_ctx) {
			GLUtils_obj *__this = (GLUtils_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GLUtils_obj), false, "lime.utils.GLUtils"));
			*(void **)__this = GLUtils_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLUtils_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GLUtils","\xcc","\x75","\x9f","\x29"); }

		static  ::lime::graphics::opengl::GLObject compileShader(::String source,int type);
		static ::Dynamic compileShader_dyn();

		static  ::lime::graphics::opengl::GLObject createProgram(::String vertexSource,::String fragmentSource);
		static ::Dynamic createProgram_dyn();

};

} // end namespace lime
} // end namespace utils

#endif /* INCLUDED_lime_utils_GLUtils */ 
