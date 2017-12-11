// Generated by Haxe 3.4.3
#ifndef INCLUDED_starling_events_EnterFrameEvent
#define INCLUDED_starling_events_EnterFrameEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_starling_events_Event
#include <starling/events/Event.h>
#endif
HX_DECLARE_CLASS2(starling,events,EnterFrameEvent)
HX_DECLARE_CLASS2(starling,events,Event)

namespace starling{
namespace events{


class HXCPP_CLASS_ATTRIBUTES EnterFrameEvent_obj : public  ::starling::events::Event_obj
{
	public:
		typedef  ::starling::events::Event_obj super;
		typedef EnterFrameEvent_obj OBJ_;
		EnterFrameEvent_obj();

	public:
		enum { _hx_ClassId = 0x16674b7c };

		void __construct(::String type,Float passedTime,hx::Null< bool >  __o_bubbles);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="starling.events.EnterFrameEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"starling.events.EnterFrameEvent"); }
		static hx::ObjectPtr< EnterFrameEvent_obj > __new(::String type,Float passedTime,hx::Null< bool >  __o_bubbles);
		static hx::ObjectPtr< EnterFrameEvent_obj > __alloc(hx::Ctx *_hx_ctx,::String type,Float passedTime,hx::Null< bool >  __o_bubbles);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EnterFrameEvent_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("EnterFrameEvent","\xc5","\xc3","\xb2","\x0c"); }

		static void __boot();
		static ::String ENTER_FRAME;
		Float get_passedTime();
		::Dynamic get_passedTime_dyn();

};

} // end namespace starling
} // end namespace events

#endif /* INCLUDED_starling_events_EnterFrameEvent */ 
