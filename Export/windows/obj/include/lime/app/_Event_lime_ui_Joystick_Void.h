// Generated by Haxe 3.4.3
#ifndef INCLUDED_lime_app__Event_lime_ui_Joystick_Void
#define INCLUDED_lime_app__Event_lime_ui_Joystick_Void

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,_Event_lime_ui_Joystick_Void)
HX_DECLARE_CLASS2(lime,ui,Joystick)

namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES _Event_lime_ui_Joystick_Void_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef _Event_lime_ui_Joystick_Void_obj OBJ_;
		_Event_lime_ui_Joystick_Void_obj();

	public:
		enum { _hx_ClassId = 0x2d31a596 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.app._Event_lime_ui_Joystick_Void")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime.app._Event_lime_ui_Joystick_Void"); }
		static hx::ObjectPtr< _Event_lime_ui_Joystick_Void_obj > __new();
		static hx::ObjectPtr< _Event_lime_ui_Joystick_Void_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~_Event_lime_ui_Joystick_Void_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("_Event_lime_ui_Joystick_Void","\xf2","\xbe","\x14","\x67"); }

		bool canceled;
		::Array< bool > _hx___repeat;
		::Array< int > _hx___priorities;
		void add( ::Dynamic listener,hx::Null< bool >  once,hx::Null< int >  priority);
		::Dynamic add_dyn();

		void cancel();
		::Dynamic cancel_dyn();

		bool has( ::Dynamic listener);
		::Dynamic has_dyn();

		void remove( ::Dynamic listener);
		::Dynamic remove_dyn();

		::Array< ::Dynamic> _hx___listeners;
		void dispatch( ::lime::ui::Joystick a);
		::Dynamic dispatch_dyn();

};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app__Event_lime_ui_Joystick_Void */ 
