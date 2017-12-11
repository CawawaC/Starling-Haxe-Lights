// Generated by Haxe 3.4.3
#ifndef INCLUDED_starling_rendering_VertexData
#define INCLUDED_starling_rendering_VertexData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,_Vector,AbstractVector)
HX_DECLARE_CLASS2(openfl,display3D,VertexBuffer3D)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
HX_DECLARE_CLASS2(starling,rendering,VertexData)
HX_DECLARE_CLASS2(starling,rendering,VertexDataAttribute)
HX_DECLARE_CLASS2(starling,rendering,VertexDataFormat)

namespace starling{
namespace rendering{


class HXCPP_CLASS_ATTRIBUTES VertexData_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef VertexData_obj OBJ_;
		VertexData_obj();

	public:
		enum { _hx_ClassId = 0x463e4552 };

		void __construct( ::Dynamic format,hx::Null< int >  __o_initialCapacity);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="starling.rendering.VertexData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"starling.rendering.VertexData"); }
		static hx::ObjectPtr< VertexData_obj > __new( ::Dynamic format,hx::Null< int >  __o_initialCapacity);
		static hx::ObjectPtr< VertexData_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic format,hx::Null< int >  __o_initialCapacity);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VertexData_obj();

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
		::String __ToString() const { return HX_HCSTRING("VertexData","\xce","\xe3","\xd0","\xc9"); }

		static void __boot();
		static  ::openfl::geom::Point sHelperPoint;
		static  ::openfl::geom::Vector3D sHelperPoint3D;
		static  ::openfl::utils::ByteArrayData sBytes;
		static int switchEndian(int value);
		static ::Dynamic switchEndian_dyn();

		static int premultiplyAlpha(int rgba);
		static ::Dynamic premultiplyAlpha_dyn();

		static int unmultiplyAlpha(int rgba);
		static ::Dynamic unmultiplyAlpha_dyn();

		 ::openfl::utils::ByteArrayData _rawData;
		int _numVertices;
		 ::starling::rendering::VertexDataFormat _format;
		 ::openfl::_Vector::AbstractVector _attributes;
		int _numAttributes;
		bool _premultipliedAlpha;
		bool _tinted;
		int _posOffset;
		int _colOffset;
		int _vertexSize;
		void clear();
		::Dynamic clear_dyn();

		 ::starling::rendering::VertexData clone();
		::Dynamic clone_dyn();

		void copyTo( ::starling::rendering::VertexData target,hx::Null< int >  targetVertexID, ::openfl::geom::Matrix matrix,hx::Null< int >  vertexID,hx::Null< int >  numVertices);
		::Dynamic copyTo_dyn();

		void copyAttributeTo( ::starling::rendering::VertexData target,int targetVertexID,::String attrName, ::openfl::geom::Matrix matrix,hx::Null< int >  vertexID,hx::Null< int >  numVertices);
		::Dynamic copyAttributeTo_dyn();

		void copyAttributeTo_internal( ::starling::rendering::VertexData target,int targetVertexID, ::openfl::geom::Matrix matrix, ::starling::rendering::VertexDataAttribute sourceAttribute, ::starling::rendering::VertexDataAttribute targetAttribute,int vertexID,int numVertices);
		::Dynamic copyAttributeTo_internal_dyn();

		void trim();
		::Dynamic trim_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		int getUnsignedInt(int vertexID,::String attrName);
		::Dynamic getUnsignedInt_dyn();

		void setUnsignedInt(int vertexID,::String attrName,int value);
		::Dynamic setUnsignedInt_dyn();

		Float getFloat(int vertexID,::String attrName);
		::Dynamic getFloat_dyn();

		void setFloat(int vertexID,::String attrName,Float value);
		::Dynamic setFloat_dyn();

		 ::openfl::geom::Point getPoint(int vertexID,::String attrName, ::openfl::geom::Point out);
		::Dynamic getPoint_dyn();

		void setPoint(int vertexID,::String attrName,Float x,Float y);
		::Dynamic setPoint_dyn();

		 ::openfl::geom::Vector3D getPoint3D(int vertexID,::String attrName, ::openfl::geom::Vector3D out);
		::Dynamic getPoint3D_dyn();

		void setPoint3D(int vertexID,::String attrName,Float x,Float y,Float z);
		::Dynamic setPoint3D_dyn();

		 ::openfl::geom::Vector3D getPoint4D(int vertexID,::String attrName, ::openfl::geom::Vector3D out);
		::Dynamic getPoint4D_dyn();

		void setPoint4D(int vertexID,::String attrName,Float x,Float y,Float z,hx::Null< Float >  w);
		::Dynamic setPoint4D_dyn();

		int getColor(int vertexID,::String attrName);
		::Dynamic getColor_dyn();

		void setColor(int vertexID,::String attrName,int color);
		::Dynamic setColor_dyn();

		Float getAlpha(int vertexID,::String attrName);
		::Dynamic getAlpha_dyn();

		void setAlpha(int vertexID,::String attrName,Float alpha);
		::Dynamic setAlpha_dyn();

		 ::openfl::geom::Rectangle getBounds(::String attrName, ::openfl::geom::Matrix matrix,hx::Null< int >  vertexID,hx::Null< int >  numVertices, ::openfl::geom::Rectangle out);
		::Dynamic getBounds_dyn();

		 ::openfl::geom::Rectangle getBoundsProjected(::String attrName, ::openfl::geom::Matrix3D matrix, ::openfl::geom::Vector3D camPos,hx::Null< int >  vertexID,hx::Null< int >  numVertices, ::openfl::geom::Rectangle out);
		::Dynamic getBoundsProjected_dyn();

		bool get_premultipliedAlpha();
		::Dynamic get_premultipliedAlpha_dyn();

		bool set_premultipliedAlpha(bool value);
		::Dynamic set_premultipliedAlpha_dyn();

		void setPremultipliedAlpha(bool value,bool updateData);
		::Dynamic setPremultipliedAlpha_dyn();

		bool updateTinted(::String attrName);
		::Dynamic updateTinted_dyn();

		void transformPoints(::String attrName, ::openfl::geom::Matrix matrix,hx::Null< int >  vertexID,hx::Null< int >  numVertices);
		::Dynamic transformPoints_dyn();

		void translatePoints(::String attrName,Float deltaX,Float deltaY,hx::Null< int >  vertexID,hx::Null< int >  numVertices);
		::Dynamic translatePoints_dyn();

		void scaleAlphas(::String attrName,Float factor,hx::Null< int >  vertexID,hx::Null< int >  numVertices);
		::Dynamic scaleAlphas_dyn();

		void colorize(::String attrName,hx::Null< int >  color,hx::Null< Float >  alpha,hx::Null< int >  vertexID,hx::Null< int >  numVertices);
		::Dynamic colorize_dyn();

		::String getFormat(::String attrName);
		::Dynamic getFormat_dyn();

		int getSize(::String attrName);
		::Dynamic getSize_dyn();

		int getSizeIn32Bits(::String attrName);
		::Dynamic getSizeIn32Bits_dyn();

		int getOffset(::String attrName);
		::Dynamic getOffset_dyn();

		int getOffsetIn32Bits(::String attrName);
		::Dynamic getOffsetIn32Bits_dyn();

		bool hasAttribute(::String attrName);
		::Dynamic hasAttribute_dyn();

		 ::openfl::display3D::VertexBuffer3D createVertexBuffer(hx::Null< bool >  upload,::String bufferUsage);
		::Dynamic createVertexBuffer_dyn();

		void uploadToVertexBuffer( ::openfl::display3D::VertexBuffer3D buffer,hx::Null< int >  vertexID,hx::Null< int >  numVertices);
		::Dynamic uploadToVertexBuffer_dyn();

		 ::starling::rendering::VertexDataAttribute getAttribute(::String attrName);
		::Dynamic getAttribute_dyn();

		int get_numVertices();
		::Dynamic get_numVertices_dyn();

		int set_numVertices(int value);
		::Dynamic set_numVertices_dyn();

		 ::openfl::utils::ByteArrayData get_rawData();
		::Dynamic get_rawData_dyn();

		 ::starling::rendering::VertexDataFormat get_format();
		::Dynamic get_format_dyn();

		 ::starling::rendering::VertexDataFormat set_format( ::starling::rendering::VertexDataFormat value);
		::Dynamic set_format_dyn();

		bool get_tinted();
		::Dynamic get_tinted_dyn();

		bool set_tinted(bool value);
		::Dynamic set_tinted_dyn();

		::String get_formatString();
		::Dynamic get_formatString_dyn();

		int get_vertexSize();
		::Dynamic get_vertexSize_dyn();

		int get_vertexSizeIn32Bits();
		::Dynamic get_vertexSizeIn32Bits_dyn();

		int get_size();
		::Dynamic get_size_dyn();

		int get_sizeIn32Bits();
		::Dynamic get_sizeIn32Bits_dyn();

};

} // end namespace starling
} // end namespace rendering

#endif /* INCLUDED_starling_rendering_VertexData */ 
