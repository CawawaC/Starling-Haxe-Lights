// Generated by Haxe 3.4.3
#ifndef INCLUDED_lime__backend_native__NativeApplication_MouseEventInfo
#define INCLUDED_lime__backend_native__NativeApplication_MouseEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_e3566ee739d748b6_972_new)
HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,MouseEventInfo)

namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{


class HXCPP_CLASS_ATTRIBUTES MouseEventInfo_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef MouseEventInfo_obj OBJ_;
		MouseEventInfo_obj();

	public:
		enum { _hx_ClassId = 0x7288b40e };

		void __construct( ::Dynamic type,hx::Null< int >  __o_windowID,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_button,hx::Null< Float >  __o_movementX,hx::Null< Float >  __o_movementY);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime._backend.native._NativeApplication.MouseEventInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime._backend.native._NativeApplication.MouseEventInfo"); }

		hx::ObjectPtr< MouseEventInfo_obj > __new( ::Dynamic type,hx::Null< int >  __o_windowID,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_button,hx::Null< Float >  __o_movementX,hx::Null< Float >  __o_movementY) {
			hx::ObjectPtr< MouseEventInfo_obj > __this = new MouseEventInfo_obj();
			__this->__construct(type,__o_windowID,__o_x,__o_y,__o_button,__o_movementX,__o_movementY);
			return __this;
		}

		static hx::ObjectPtr< MouseEventInfo_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic type,hx::Null< int >  __o_windowID,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_button,hx::Null< Float >  __o_movementX,hx::Null< Float >  __o_movementY) {
			MouseEventInfo_obj *__this = (MouseEventInfo_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MouseEventInfo_obj), false, "lime._backend.native._NativeApplication.MouseEventInfo"));
			*(void **)__this = MouseEventInfo_obj::_hx_vtable;
{
int windowID = __o_windowID.Default(0);
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
int button = __o_button.Default(0);
Float movementX = __o_movementX.Default(0);
Float movementY = __o_movementY.Default(0);
            	HX_STACKFRAME(&_hx_pos_e3566ee739d748b6_972_new)
HXLINE( 974)		( ( ::lime::_backend::native::_NativeApplication::MouseEventInfo)(__this) )->type = type;
HXLINE( 975)		( ( ::lime::_backend::native::_NativeApplication::MouseEventInfo)(__this) )->windowID = (int)0;
HXLINE( 976)		( ( ::lime::_backend::native::_NativeApplication::MouseEventInfo)(__this) )->x = x;
HXLINE( 977)		( ( ::lime::_backend::native::_NativeApplication::MouseEventInfo)(__this) )->y = y;
HXLINE( 978)		( ( ::lime::_backend::native::_NativeApplication::MouseEventInfo)(__this) )->button = button;
HXLINE( 979)		( ( ::lime::_backend::native::_NativeApplication::MouseEventInfo)(__this) )->movementX = movementX;
HXLINE( 980)		( ( ::lime::_backend::native::_NativeApplication::MouseEventInfo)(__this) )->movementY = movementY;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MouseEventInfo_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("MouseEventInfo","\xe3","\x32","\xfc","\x30"); }

		int button;
		Float movementX;
		Float movementY;
		int type;
		int windowID;
		Float x;
		Float y;
		 ::lime::_backend::native::_NativeApplication::MouseEventInfo clone();
		::Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication

#endif /* INCLUDED_lime__backend_native__NativeApplication_MouseEventInfo */ 
