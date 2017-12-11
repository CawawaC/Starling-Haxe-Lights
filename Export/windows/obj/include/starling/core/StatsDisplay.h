// Generated by Haxe 3.4.3
#ifndef INCLUDED_starling_core_StatsDisplay
#define INCLUDED_starling_core_StatsDisplay

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_starling_display_Sprite
#include <starling/display/Sprite.h>
#endif
HX_DECLARE_CLASS2(starling,core,StatsDisplay)
HX_DECLARE_CLASS2(starling,display,DisplayObject)
HX_DECLARE_CLASS2(starling,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(starling,display,Mesh)
HX_DECLARE_CLASS2(starling,display,Quad)
HX_DECLARE_CLASS2(starling,display,Sprite)
HX_DECLARE_CLASS2(starling,events,Event)
HX_DECLARE_CLASS2(starling,events,EventDispatcher)
HX_DECLARE_CLASS2(starling,rendering,Painter)
HX_DECLARE_CLASS2(starling,text,TextField)

namespace starling{
namespace core{


class HXCPP_CLASS_ATTRIBUTES StatsDisplay_obj : public  ::starling::display::Sprite_obj
{
	public:
		typedef  ::starling::display::Sprite_obj super;
		typedef StatsDisplay_obj OBJ_;
		StatsDisplay_obj();

	public:
		enum { _hx_ClassId = 0x4ae232b2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="starling.core.StatsDisplay")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"starling.core.StatsDisplay"); }
		static hx::ObjectPtr< StatsDisplay_obj > __new();
		static hx::ObjectPtr< StatsDisplay_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StatsDisplay_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("StatsDisplay","\x03","\xba","\xb8","\x61"); }

		static void __boot();
		static Float UPDATE_INTERVAL;
		static Float B_TO_MB;
		 ::starling::display::Quad _hx___background;
		 ::starling::text::TextField _hx___labels;
		 ::starling::text::TextField _hx___values;
		int _hx___frameCount;
		Float _hx___totalTime;
		Float _hx___fps;
		Float _hx___memory;
		Float _hx___gpuMemory;
		int _hx___drawCount;
		int _hx___skipCount;
		void onAddedToStage( ::starling::events::Event e);
		::Dynamic onAddedToStage_dyn();

		void onRemovedFromStage( ::starling::events::Event e);
		::Dynamic onRemovedFromStage_dyn();

		void onEnterFrame( ::starling::events::Event e);
		::Dynamic onEnterFrame_dyn();

		void update();
		::Dynamic update_dyn();

		void markFrameAsSkipped();
		::Dynamic markFrameAsSkipped_dyn();

		void render( ::starling::rendering::Painter painter);

		bool get_supportsGpuMem();
		::Dynamic get_supportsGpuMem_dyn();

		int get_drawCount();
		::Dynamic get_drawCount_dyn();

		int set_drawCount(int value);
		::Dynamic set_drawCount_dyn();

		Float get_fps();
		::Dynamic get_fps_dyn();

		Float set_fps(Float value);
		::Dynamic set_fps_dyn();

		Float get_memory();
		::Dynamic get_memory_dyn();

		Float set_memory(Float value);
		::Dynamic set_memory_dyn();

		Float get_gpuMemory();
		::Dynamic get_gpuMemory_dyn();

		Float set_gpuMemory(Float value);
		::Dynamic set_gpuMemory_dyn();

};

} // end namespace starling
} // end namespace core

#endif /* INCLUDED_starling_core_StatsDisplay */ 
