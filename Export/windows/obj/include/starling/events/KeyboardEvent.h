// Generated by Haxe 3.4.3
#ifndef INCLUDED_starling_events_KeyboardEvent
#define INCLUDED_starling_events_KeyboardEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_starling_events_Event
#include <starling/events/Event.h>
#endif
HX_DECLARE_CLASS2(starling,events,Event)
HX_DECLARE_CLASS2(starling,events,KeyboardEvent)

namespace starling{
namespace events{


class HXCPP_CLASS_ATTRIBUTES KeyboardEvent_obj : public  ::starling::events::Event_obj
{
	public:
		typedef  ::starling::events::Event_obj super;
		typedef KeyboardEvent_obj OBJ_;
		KeyboardEvent_obj();

	public:
		enum { _hx_ClassId = 0x453ed992 };

		void __construct(::String type,hx::Null< int >  __o_charCode,hx::Null< int >  __o_keyCode,hx::Null< int >  __o_keyLocation,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_altKey,hx::Null< bool >  __o_shiftKey);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="starling.events.KeyboardEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"starling.events.KeyboardEvent"); }
		static hx::ObjectPtr< KeyboardEvent_obj > __new(::String type,hx::Null< int >  __o_charCode,hx::Null< int >  __o_keyCode,hx::Null< int >  __o_keyLocation,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_altKey,hx::Null< bool >  __o_shiftKey);
		static hx::ObjectPtr< KeyboardEvent_obj > __alloc(hx::Ctx *_hx_ctx,::String type,hx::Null< int >  __o_charCode,hx::Null< int >  __o_keyCode,hx::Null< int >  __o_keyLocation,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_altKey,hx::Null< bool >  __o_shiftKey);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~KeyboardEvent_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("KeyboardEvent","\xd3","\x8d","\x88","\x91"); }

		static void __boot();
		static ::String KEY_UP;
		static ::String KEY_DOWN;
		int _hx___charCode;
		int _hx___keyCode;
		int _hx___keyLocation;
		bool _hx___altKey;
		bool _hx___ctrlKey;
		bool _hx___shiftKey;
		bool _hx___isDefaultPrevented;
		void preventDefault();
		::Dynamic preventDefault_dyn();

		bool isDefaultPrevented();
		::Dynamic isDefaultPrevented_dyn();

		int get_charCode();
		::Dynamic get_charCode_dyn();

		int get_keyCode();
		::Dynamic get_keyCode_dyn();

		int get_keyLocation();
		::Dynamic get_keyLocation_dyn();

		bool get_altKey();
		::Dynamic get_altKey_dyn();

		bool get_ctrlKey();
		::Dynamic get_ctrlKey_dyn();

		bool get_shiftKey();
		::Dynamic get_shiftKey_dyn();

};

} // end namespace starling
} // end namespace events

#endif /* INCLUDED_starling_events_KeyboardEvent */ 