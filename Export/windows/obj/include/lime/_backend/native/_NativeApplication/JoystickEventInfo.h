// Generated by Haxe 3.4.3
#ifndef INCLUDED_lime__backend_native__NativeApplication_JoystickEventInfo
#define INCLUDED_lime__backend_native__NativeApplication_JoystickEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_4c8f67ddac45293c_887_new)
HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,JoystickEventInfo)

namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{


class HXCPP_CLASS_ATTRIBUTES JoystickEventInfo_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef JoystickEventInfo_obj OBJ_;
		JoystickEventInfo_obj();

	public:
		enum { _hx_ClassId = 0x651b7071 };

		void __construct( ::Dynamic type,hx::Null< int >  __o_id,hx::Null< int >  __o_index,hx::Null< int >  __o_value,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime._backend.native._NativeApplication.JoystickEventInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime._backend.native._NativeApplication.JoystickEventInfo"); }

		hx::ObjectPtr< JoystickEventInfo_obj > __new( ::Dynamic type,hx::Null< int >  __o_id,hx::Null< int >  __o_index,hx::Null< int >  __o_value,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y) {
			hx::ObjectPtr< JoystickEventInfo_obj > __this = new JoystickEventInfo_obj();
			__this->__construct(type,__o_id,__o_index,__o_value,__o_x,__o_y);
			return __this;
		}

		static hx::ObjectPtr< JoystickEventInfo_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic type,hx::Null< int >  __o_id,hx::Null< int >  __o_index,hx::Null< int >  __o_value,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y) {
			JoystickEventInfo_obj *__this = (JoystickEventInfo_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(JoystickEventInfo_obj), false, "lime._backend.native._NativeApplication.JoystickEventInfo"));
			*(void **)__this = JoystickEventInfo_obj::_hx_vtable;
{
int id = __o_id.Default(0);
int index = __o_index.Default(0);
int value = __o_value.Default(0);
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_4c8f67ddac45293c_887_new)
HXLINE( 889)		( ( ::lime::_backend::native::_NativeApplication::JoystickEventInfo)(__this) )->type = type;
HXLINE( 890)		( ( ::lime::_backend::native::_NativeApplication::JoystickEventInfo)(__this) )->id = id;
HXLINE( 891)		( ( ::lime::_backend::native::_NativeApplication::JoystickEventInfo)(__this) )->index = index;
HXLINE( 892)		( ( ::lime::_backend::native::_NativeApplication::JoystickEventInfo)(__this) )->value = value;
HXLINE( 893)		( ( ::lime::_backend::native::_NativeApplication::JoystickEventInfo)(__this) )->x = x;
HXLINE( 894)		( ( ::lime::_backend::native::_NativeApplication::JoystickEventInfo)(__this) )->y = y;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~JoystickEventInfo_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("JoystickEventInfo","\x2c","\x09","\xa3","\x75"); }

		int id;
		int index;
		int type;
		int value;
		Float x;
		Float y;
		 ::lime::_backend::native::_NativeApplication::JoystickEventInfo clone();
		::Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication

#endif /* INCLUDED_lime__backend_native__NativeApplication_JoystickEventInfo */ 
