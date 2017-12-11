// Generated by Haxe 3.4.3
#ifndef INCLUDED_starling_textures_Texture
#define INCLUDED_starling_textures_Texture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,IShaderDrawable)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,net,NetStream)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
HX_DECLARE_CLASS2(starling,rendering,VertexData)
HX_DECLARE_CLASS2(starling,textures,ConcreteTexture)
HX_DECLARE_CLASS2(starling,textures,Texture)
HX_DECLARE_CLASS2(starling,textures,TextureOptions)

namespace starling{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES Texture_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Texture_obj OBJ_;
		Texture_obj();

	public:
		enum { _hx_ClassId = 0x0d644757 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="starling.textures.Texture")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"starling.textures.Texture"); }
		static hx::ObjectPtr< Texture_obj > __new();
		static hx::ObjectPtr< Texture_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Texture_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Texture","\xbb","\xf0","\x31","\x6c"); }

		static void __boot();
		static  ::starling::textures::TextureOptions sDefaultOptions;
		static  ::openfl::geom::Rectangle sRectangle;
		static  ::openfl::geom::Matrix sMatrix;
		static  ::openfl::geom::Point sPoint;
		static  ::starling::textures::Texture fromData( ::Dynamic data, ::starling::textures::TextureOptions options);
		static ::Dynamic fromData_dyn();

		static  ::starling::textures::ConcreteTexture fromTextureBase( ::openfl::display3D::textures::TextureBase base,int width,int height, ::starling::textures::TextureOptions options);
		static ::Dynamic fromTextureBase_dyn();

		static  ::starling::textures::Texture fromEmbeddedAsset(hx::Class assetClass,hx::Null< bool >  mipMapping,hx::Null< bool >  optimizeForRenderToTexture,hx::Null< Float >  scale, ::Dynamic format,hx::Null< bool >  forcePotTexture);
		static ::Dynamic fromEmbeddedAsset_dyn();

		static  ::starling::textures::Texture fromBitmap( ::openfl::display::Bitmap bitmap,hx::Null< bool >  generateMipMaps,hx::Null< bool >  optimizeForRenderToTexture,hx::Null< Float >  scale, ::Dynamic format,hx::Null< bool >  forcePotTexture, ::Dynamic async);
		static ::Dynamic fromBitmap_dyn();

		static  ::starling::textures::Texture fromBitmapData( ::openfl::display::BitmapData data,hx::Null< bool >  generateMipMaps,hx::Null< bool >  optimizeForRenderToTexture,hx::Null< Float >  scale, ::Dynamic format,hx::Null< bool >  forcePotTexture, ::Dynamic async);
		static ::Dynamic fromBitmapData_dyn();

		static  ::starling::textures::Texture fromAtfData( ::openfl::utils::ByteArrayData data,hx::Null< Float >  scale,hx::Null< bool >  useMipMaps, ::Dynamic async,hx::Null< bool >  premultipliedAlpha);
		static ::Dynamic fromAtfData_dyn();

		static  ::starling::textures::Texture fromNetStream( ::openfl::net::NetStream stream,hx::Null< Float >  scale, ::Dynamic onComplete);
		static ::Dynamic fromNetStream_dyn();

		static  ::starling::textures::Texture fromVideoAttachment(::String type, ::Dynamic attachment,Float scale, ::Dynamic onComplete);
		static ::Dynamic fromVideoAttachment_dyn();

		static  ::starling::textures::Texture fromColor(Float width,Float height,hx::Null< int >  color,hx::Null< Float >  alpha,hx::Null< bool >  optimizeForRenderToTexture,hx::Null< Float >  scale,::String format,hx::Null< bool >  forcePotTexture);
		static ::Dynamic fromColor_dyn();

		static  ::starling::textures::Texture empty(Float width,Float height,hx::Null< bool >  premultipliedAlpha,hx::Null< bool >  mipMapping,hx::Null< bool >  optimizeForRenderToTexture,hx::Null< Float >  scale,::String format,hx::Null< bool >  forcePotTexture);
		static ::Dynamic empty_dyn();

		static  ::starling::textures::Texture fromTexture( ::starling::textures::Texture texture, ::openfl::geom::Rectangle region, ::openfl::geom::Rectangle frame,hx::Null< bool >  rotated,hx::Null< Float >  scaleModifier);
		static ::Dynamic fromTexture_dyn();

		static int get_maxSize();
		static ::Dynamic get_maxSize_dyn();

		static bool get_asyncBitmapUploadEnabled();
		static ::Dynamic get_asyncBitmapUploadEnabled_dyn();

		static bool set_asyncBitmapUploadEnabled(bool value);
		static ::Dynamic set_asyncBitmapUploadEnabled_dyn();

		virtual void dispose();
		::Dynamic dispose_dyn();

		void setupVertexPositions( ::starling::rendering::VertexData vertexData,hx::Null< int >  vertexID,::String attrName, ::openfl::geom::Rectangle bounds);
		::Dynamic setupVertexPositions_dyn();

		void setupTextureCoordinates( ::starling::rendering::VertexData vertexData,hx::Null< int >  vertexID,::String attrName);
		::Dynamic setupTextureCoordinates_dyn();

		 ::openfl::geom::Point localToGlobal(Float u,Float v, ::openfl::geom::Point out);
		::Dynamic localToGlobal_dyn();

		 ::openfl::geom::Point globalToLocal(Float u,Float v, ::openfl::geom::Point out);
		::Dynamic globalToLocal_dyn();

		void setTexCoords( ::starling::rendering::VertexData vertexData,int vertexID,::String attrName,Float u,Float v);
		::Dynamic setTexCoords_dyn();

		 ::openfl::geom::Point getTexCoords( ::starling::rendering::VertexData vertexData,int vertexID,::String attrName, ::openfl::geom::Point out);
		::Dynamic getTexCoords_dyn();

		virtual  ::openfl::geom::Rectangle get_frame();
		::Dynamic get_frame_dyn();

		Float get_frameWidth();
		::Dynamic get_frameWidth_dyn();

		Float get_frameHeight();
		::Dynamic get_frameHeight_dyn();

		virtual Float get_width();
		::Dynamic get_width_dyn();

		virtual Float get_height();
		::Dynamic get_height_dyn();

		virtual Float get_nativeWidth();
		::Dynamic get_nativeWidth_dyn();

		virtual Float get_nativeHeight();
		::Dynamic get_nativeHeight_dyn();

		virtual Float get_scale();
		::Dynamic get_scale_dyn();

		virtual  ::openfl::display3D::textures::TextureBase get_base();
		::Dynamic get_base_dyn();

		virtual  ::starling::textures::ConcreteTexture get_root();
		::Dynamic get_root_dyn();

		virtual  ::Dynamic get_format();
		::Dynamic get_format_dyn();

		virtual bool get_mipMapping();
		::Dynamic get_mipMapping_dyn();

		virtual bool get_premultipliedAlpha();
		::Dynamic get_premultipliedAlpha_dyn();

		virtual  ::openfl::geom::Matrix get_transformationMatrix();
		::Dynamic get_transformationMatrix_dyn();

		virtual  ::openfl::geom::Matrix get_transformationMatrixToRoot();
		::Dynamic get_transformationMatrixToRoot_dyn();

};

} // end namespace starling
} // end namespace textures

#endif /* INCLUDED_starling_textures_Texture */ 