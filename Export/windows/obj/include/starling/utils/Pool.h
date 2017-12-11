// Generated by Haxe 3.4.3
#ifndef INCLUDED_starling_utils_Pool
#define INCLUDED_starling_utils_Pool

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_1ff1461100cd9d30_39_new)
HX_DECLARE_CLASS2(openfl,_Vector,AbstractVector)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)
HX_DECLARE_CLASS2(starling,utils,Pool)

namespace starling{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES Pool_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Pool_obj OBJ_;
		Pool_obj();

	public:
		enum { _hx_ClassId = 0x50a8da5d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="starling.utils.Pool")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"starling.utils.Pool"); }

		hx::ObjectPtr< Pool_obj > __new() {
			hx::ObjectPtr< Pool_obj > __this = new Pool_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Pool_obj > __alloc(hx::Ctx *_hx_ctx) {
			Pool_obj *__this = (Pool_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Pool_obj), false, "starling.utils.Pool"));
			*(void **)__this = Pool_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_1ff1461100cd9d30_39_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Pool_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Pool","\xfc","\xac","\x35","\x35"); }

		static void __boot();
		static  ::openfl::_Vector::AbstractVector sPoints;
		static  ::openfl::_Vector::AbstractVector sPoints3D;
		static  ::openfl::_Vector::AbstractVector sMatrices;
		static  ::openfl::_Vector::AbstractVector sMatrices3D;
		static  ::openfl::_Vector::AbstractVector sRectangles;
		static  ::openfl::geom::Point getPoint(hx::Null< Float >  x,hx::Null< Float >  y);
		static ::Dynamic getPoint_dyn();

		static void putPoint( ::openfl::geom::Point point);
		static ::Dynamic putPoint_dyn();

		static  ::openfl::geom::Vector3D getPoint3D(hx::Null< Float >  x,hx::Null< Float >  y,hx::Null< Float >  z);
		static ::Dynamic getPoint3D_dyn();

		static void putPoint3D( ::openfl::geom::Vector3D point);
		static ::Dynamic putPoint3D_dyn();

		static  ::openfl::geom::Matrix getMatrix(hx::Null< Float >  a,hx::Null< Float >  b,hx::Null< Float >  c,hx::Null< Float >  d,hx::Null< Float >  tx,hx::Null< Float >  ty);
		static ::Dynamic getMatrix_dyn();

		static void putMatrix( ::openfl::geom::Matrix matrix);
		static ::Dynamic putMatrix_dyn();

		static  ::openfl::geom::Matrix3D getMatrix3D(hx::Null< bool >  identity);
		static ::Dynamic getMatrix3D_dyn();

		static void putMatrix3D( ::openfl::geom::Matrix3D matrix);
		static ::Dynamic putMatrix3D_dyn();

		static  ::openfl::geom::Rectangle getRectangle(hx::Null< Float >  x,hx::Null< Float >  y,hx::Null< Float >  width,hx::Null< Float >  height);
		static ::Dynamic getRectangle_dyn();

		static void putRectangle( ::openfl::geom::Rectangle rectangle);
		static ::Dynamic putRectangle_dyn();

};

} // end namespace starling
} // end namespace utils

#endif /* INCLUDED_starling_utils_Pool */ 
