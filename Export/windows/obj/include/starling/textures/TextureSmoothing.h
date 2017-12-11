// Generated by Haxe 3.4.3
#ifndef INCLUDED_starling_textures_TextureSmoothing
#define INCLUDED_starling_textures_TextureSmoothing

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(starling,textures,TextureSmoothing)

namespace starling{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES TextureSmoothing_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef TextureSmoothing_obj OBJ_;
		TextureSmoothing_obj();

	public:
		enum { _hx_ClassId = 0x21f838b9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="starling.textures.TextureSmoothing")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"starling.textures.TextureSmoothing"); }

		hx::ObjectPtr< TextureSmoothing_obj > __new() {
			hx::ObjectPtr< TextureSmoothing_obj > __this = new TextureSmoothing_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< TextureSmoothing_obj > __alloc(hx::Ctx *_hx_ctx) {
			TextureSmoothing_obj *__this = (TextureSmoothing_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextureSmoothing_obj), false, "starling.textures.TextureSmoothing"));
			*(void **)__this = TextureSmoothing_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextureSmoothing_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TextureSmoothing","\x39","\x55","\x2a","\x84"); }

		static void __boot();
		static ::String NONE;
		static ::String BILINEAR;
		static ::String TRILINEAR;
		static bool isValid(::String smoothing);
		static ::Dynamic isValid_dyn();

};

} // end namespace starling
} // end namespace textures

#endif /* INCLUDED_starling_textures_TextureSmoothing */ 
