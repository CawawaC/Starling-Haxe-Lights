// Generated by Haxe 3.4.3
#ifndef INCLUDED_starling_text_TextField
#define INCLUDED_starling_text_TextField

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_starling_display_DisplayObjectContainer
#include <starling/display/DisplayObjectContainer.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(starling,display,DisplayObject)
HX_DECLARE_CLASS2(starling,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(starling,display,Mesh)
HX_DECLARE_CLASS2(starling,display,MeshBatch)
HX_DECLARE_CLASS2(starling,events,EventDispatcher)
HX_DECLARE_CLASS2(starling,rendering,Painter)
HX_DECLARE_CLASS2(starling,styles,MeshStyle)
HX_DECLARE_CLASS2(starling,text,BitmapFont)
HX_DECLARE_CLASS2(starling,text,ITextCompositor)
HX_DECLARE_CLASS2(starling,text,TextField)
HX_DECLARE_CLASS2(starling,text,TextFormat)
HX_DECLARE_CLASS2(starling,text,TextOptions)

namespace starling{
namespace text{


class HXCPP_CLASS_ATTRIBUTES TextField_obj : public  ::starling::display::DisplayObjectContainer_obj
{
	public:
		typedef  ::starling::display::DisplayObjectContainer_obj super;
		typedef TextField_obj OBJ_;
		TextField_obj();

	public:
		enum { _hx_ClassId = 0x3577f9d8 };

		void __construct(int width,int height,::String __o_text, ::starling::text::TextFormat format);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="starling.text.TextField")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"starling.text.TextField"); }
		static hx::ObjectPtr< TextField_obj > __new(int width,int height,::String __o_text, ::starling::text::TextFormat format);
		static hx::ObjectPtr< TextField_obj > __alloc(hx::Ctx *_hx_ctx,int width,int height,::String __o_text, ::starling::text::TextFormat format);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextField_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TextField","\xad","\x04","\x54","\x3b"); }

		static void __boot();
		static ::String COMPOSITOR_DATA_NAME;
		static  ::openfl::geom::Matrix sMatrix;
		static ::Dynamic sDefaultCompositor;
		static ::String sDefaultTextureFormat;
		static ::String get_defaultTextureFormat();
		static ::Dynamic get_defaultTextureFormat_dyn();

		static ::String set_defaultTextureFormat(::String value);
		static ::Dynamic set_defaultTextureFormat_dyn();

		static ::Dynamic get_defaultCompositor();
		static ::Dynamic get_defaultCompositor_dyn();

		static ::Dynamic set_defaultCompositor(::Dynamic value);
		static ::Dynamic set_defaultCompositor_dyn();

		static void updateEmbeddedFonts();
		static ::Dynamic updateEmbeddedFonts_dyn();

		static void registerCompositor(::Dynamic compositor,::String name);
		static ::Dynamic registerCompositor_dyn();

		static void unregisterCompositor(::String name,hx::Null< bool >  dispose);
		static ::Dynamic unregisterCompositor_dyn();

		static ::Dynamic getCompositor(::String name);
		static ::Dynamic getCompositor_dyn();

		static ::String registerBitmapFont( ::starling::text::BitmapFont bitmapFont,::String name);
		static ::Dynamic registerBitmapFont_dyn();

		static void unregisterBitmapFont(::String name,hx::Null< bool >  dispose);
		static ::Dynamic unregisterBitmapFont_dyn();

		static  ::starling::text::BitmapFont getBitmapFont(::String name);
		static ::Dynamic getBitmapFont_dyn();

		static  ::haxe::ds::StringMap get_compositors();
		static ::Dynamic get_compositors_dyn();

		static  ::haxe::ds::StringMap sStringCache;
		static ::String convertToLowerCase(::String string);
		static ::Dynamic convertToLowerCase_dyn();

		::String _text;
		 ::starling::text::TextOptions _options;
		 ::starling::text::TextFormat _format;
		 ::openfl::geom::Rectangle _textBounds;
		 ::openfl::geom::Rectangle _hitArea;
		::Dynamic _compositor;
		bool _requiresRecomposition;
		 ::starling::display::DisplayObjectContainer _border;
		 ::starling::display::MeshBatch _meshBatch;
		 ::starling::styles::MeshStyle _style;
		bool _recomposing;
		void dispose();

		void render( ::starling::rendering::Painter painter);

		void recompose();
		::Dynamic recompose_dyn();

		void updateText();
		::Dynamic updateText_dyn();

		void updateBorder();
		::Dynamic updateBorder_dyn();

		void setRequiresRecomposition();
		::Dynamic setRequiresRecomposition_dyn();

		bool get_isHorizontalAutoSize();
		::Dynamic get_isHorizontalAutoSize_dyn();

		bool get_isVerticalAutoSize();
		::Dynamic get_isVerticalAutoSize_dyn();

		 ::openfl::geom::Rectangle get_textBounds();
		::Dynamic get_textBounds_dyn();

		 ::openfl::geom::Rectangle getBounds( ::starling::display::DisplayObject targetSpace, ::openfl::geom::Rectangle out);

		 ::starling::display::DisplayObject hitTest( ::openfl::geom::Point localPoint);

		Float set_width(Float value);

		Float set_height(Float value);

		::String get_text();
		::Dynamic get_text_dyn();

		::String set_text(::String value);
		::Dynamic set_text_dyn();

		 ::starling::text::TextFormat get_format();
		::Dynamic get_format_dyn();

		 ::starling::text::TextFormat set_format( ::starling::text::TextFormat value);
		::Dynamic set_format_dyn();

		 ::starling::text::TextOptions get_options();
		::Dynamic get_options_dyn();

		bool get_border();
		::Dynamic get_border_dyn();

		bool set_border(bool value);
		::Dynamic set_border_dyn();

		bool get_autoScale();
		::Dynamic get_autoScale_dyn();

		bool set_autoScale(bool value);
		::Dynamic set_autoScale_dyn();

		::String get_autoSize();
		::Dynamic get_autoSize_dyn();

		::String set_autoSize(::String value);
		::Dynamic set_autoSize_dyn();

		bool get_wordWrap();
		::Dynamic get_wordWrap_dyn();

		bool set_wordWrap(bool value);
		::Dynamic set_wordWrap_dyn();

		bool get_batchable();
		::Dynamic get_batchable_dyn();

		bool set_batchable(bool value);
		::Dynamic set_batchable_dyn();

		bool get_isHtmlText();
		::Dynamic get_isHtmlText_dyn();

		bool set_isHtmlText(bool value);
		::Dynamic set_isHtmlText_dyn();

		bool get_pixelSnapping();
		::Dynamic get_pixelSnapping_dyn();

		bool set_pixelSnapping(bool value);
		::Dynamic set_pixelSnapping_dyn();

		 ::starling::styles::MeshStyle get_style();
		::Dynamic get_style_dyn();

		 ::starling::styles::MeshStyle set_style( ::starling::styles::MeshStyle value);
		::Dynamic set_style_dyn();

};

} // end namespace starling
} // end namespace text

#endif /* INCLUDED_starling_text_TextField */ 
