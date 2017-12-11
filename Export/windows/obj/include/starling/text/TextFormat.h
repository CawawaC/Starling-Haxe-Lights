// Generated by Haxe 3.4.3
#ifndef INCLUDED_starling_text_TextFormat
#define INCLUDED_starling_text_TextFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_starling_events_EventDispatcher
#include <starling/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(openfl,text,TextFormat)
HX_DECLARE_CLASS2(starling,events,EventDispatcher)
HX_DECLARE_CLASS2(starling,text,TextFormat)

namespace starling{
namespace text{


class HXCPP_CLASS_ATTRIBUTES TextFormat_obj : public  ::starling::events::EventDispatcher_obj
{
	public:
		typedef  ::starling::events::EventDispatcher_obj super;
		typedef TextFormat_obj OBJ_;
		TextFormat_obj();

	public:
		enum { _hx_ClassId = 0x1082a459 };

		void __construct(::String __o_font,hx::Null< Float >  __o_size,hx::Null< int >  __o_color,::String __o_horizontalAlign,::String __o_verticalAlign);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="starling.text.TextFormat")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"starling.text.TextFormat"); }
		static hx::ObjectPtr< TextFormat_obj > __new(::String __o_font,hx::Null< Float >  __o_size,hx::Null< int >  __o_color,::String __o_horizontalAlign,::String __o_verticalAlign);
		static hx::ObjectPtr< TextFormat_obj > __alloc(hx::Ctx *_hx_ctx,::String __o_font,hx::Null< Float >  __o_size,hx::Null< int >  __o_color,::String __o_horizontalAlign,::String __o_verticalAlign);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextFormat_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TextFormat","\xe4","\x13","\x30","\x2b"); }

		::String _hx___font;
		Float _hx___size;
		int _hx___color;
		bool _hx___bold;
		bool _hx___italic;
		bool _hx___underline;
		::String _hx___horizontalAlign;
		::String _hx___verticalAlign;
		bool _hx___kerning;
		Float _hx___leading;
		Float _hx___letterSpacing;
		void copyFrom( ::starling::text::TextFormat format);
		::Dynamic copyFrom_dyn();

		 ::starling::text::TextFormat clone();
		::Dynamic clone_dyn();

		void setTo(::String font,hx::Null< Float >  size,hx::Null< int >  color,::String horizontalAlign,::String verticalAlign);
		::Dynamic setTo_dyn();

		 ::openfl::text::TextFormat toNativeFormat( ::openfl::text::TextFormat out);
		::Dynamic toNativeFormat_dyn();

		::String get_font();
		::Dynamic get_font_dyn();

		::String set_font(::String value);
		::Dynamic set_font_dyn();

		Float get_size();
		::Dynamic get_size_dyn();

		Float set_size(Float value);
		::Dynamic set_size_dyn();

		int get_color();
		::Dynamic get_color_dyn();

		int set_color(int value);
		::Dynamic set_color_dyn();

		bool get_bold();
		::Dynamic get_bold_dyn();

		bool set_bold(bool value);
		::Dynamic set_bold_dyn();

		bool get_italic();
		::Dynamic get_italic_dyn();

		bool set_italic(bool value);
		::Dynamic set_italic_dyn();

		bool get_underline();
		::Dynamic get_underline_dyn();

		bool set_underline(bool value);
		::Dynamic set_underline_dyn();

		::String get_horizontalAlign();
		::Dynamic get_horizontalAlign_dyn();

		::String set_horizontalAlign(::String value);
		::Dynamic set_horizontalAlign_dyn();

		::String get_verticalAlign();
		::Dynamic get_verticalAlign_dyn();

		::String set_verticalAlign(::String value);
		::Dynamic set_verticalAlign_dyn();

		bool get_kerning();
		::Dynamic get_kerning_dyn();

		bool set_kerning(bool value);
		::Dynamic set_kerning_dyn();

		Float get_leading();
		::Dynamic get_leading_dyn();

		Float set_leading(Float value);
		::Dynamic set_leading_dyn();

		Float get_letterSpacing();
		::Dynamic get_letterSpacing_dyn();

		Float set_letterSpacing(Float value);
		::Dynamic set_letterSpacing_dyn();

};

} // end namespace starling
} // end namespace text

#endif /* INCLUDED_starling_text_TextFormat */ 