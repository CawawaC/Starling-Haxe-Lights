// Generated by Haxe 3.4.3
#ifndef INCLUDED_starling_animation_Transitions
#define INCLUDED_starling_animation_Transitions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(starling,animation,Transitions)

namespace starling{
namespace animation{


class HXCPP_CLASS_ATTRIBUTES Transitions_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Transitions_obj OBJ_;
		Transitions_obj();

	public:
		enum { _hx_ClassId = 0x58d5e8c6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="starling.animation.Transitions")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"starling.animation.Transitions"); }

		hx::ObjectPtr< Transitions_obj > __new() {
			hx::ObjectPtr< Transitions_obj > __this = new Transitions_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Transitions_obj > __alloc(hx::Ctx *_hx_ctx) {
			Transitions_obj *__this = (Transitions_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Transitions_obj), false, "starling.animation.Transitions"));
			*(void **)__this = Transitions_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Transitions_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Transitions","\x1e","\xed","\x1e","\x25"); }

		static void __boot();
		static ::String LINEAR;
		static ::String EASE_IN;
		static ::String EASE_OUT;
		static ::String EASE_IN_OUT;
		static ::String EASE_OUT_IN;
		static ::String EASE_IN_BACK;
		static ::String EASE_OUT_BACK;
		static ::String EASE_IN_OUT_BACK;
		static ::String EASE_OUT_IN_BACK;
		static ::String EASE_IN_ELASTIC;
		static ::String EASE_OUT_ELASTIC;
		static ::String EASE_IN_OUT_ELASTIC;
		static ::String EASE_OUT_IN_ELASTIC;
		static ::String EASE_IN_BOUNCE;
		static ::String EASE_OUT_BOUNCE;
		static ::String EASE_IN_OUT_BOUNCE;
		static ::String EASE_OUT_IN_BOUNCE;
		static  ::haxe::ds::StringMap sTransitions;
		static  ::Dynamic getTransition(::String name);
		static ::Dynamic getTransition_dyn();

		static void _hx_register(::String name, ::Dynamic func);
		static ::Dynamic _hx_register_dyn();

		static void registerDefaults();
		static ::Dynamic registerDefaults_dyn();

		static Float linear(Float ratio);
		static ::Dynamic linear_dyn();

		static Float easeIn(Float ratio);
		static ::Dynamic easeIn_dyn();

		static Float easeOut(Float ratio);
		static ::Dynamic easeOut_dyn();

		static Float easeInOut(Float ratio);
		static ::Dynamic easeInOut_dyn();

		static Float easeOutIn(Float ratio);
		static ::Dynamic easeOutIn_dyn();

		static Float easeInBack(Float ratio);
		static ::Dynamic easeInBack_dyn();

		static Float easeOutBack(Float ratio);
		static ::Dynamic easeOutBack_dyn();

		static Float easeInOutBack(Float ratio);
		static ::Dynamic easeInOutBack_dyn();

		static Float easeOutInBack(Float ratio);
		static ::Dynamic easeOutInBack_dyn();

		static Float easeInElastic(Float ratio);
		static ::Dynamic easeInElastic_dyn();

		static Float easeOutElastic(Float ratio);
		static ::Dynamic easeOutElastic_dyn();

		static Float easeInOutElastic(Float ratio);
		static ::Dynamic easeInOutElastic_dyn();

		static Float easeOutInElastic(Float ratio);
		static ::Dynamic easeOutInElastic_dyn();

		static Float easeInBounce(Float ratio);
		static ::Dynamic easeInBounce_dyn();

		static Float easeOutBounce(Float ratio);
		static ::Dynamic easeOutBounce_dyn();

		static Float easeInOutBounce(Float ratio);
		static ::Dynamic easeInOutBounce_dyn();

		static Float easeOutInBounce(Float ratio);
		static ::Dynamic easeOutInBounce_dyn();

		static Float easeCombined( ::Dynamic startFunc, ::Dynamic endFunc,Float ratio);
		static ::Dynamic easeCombined_dyn();

};

} // end namespace starling
} // end namespace animation

#endif /* INCLUDED_starling_animation_Transitions */ 
