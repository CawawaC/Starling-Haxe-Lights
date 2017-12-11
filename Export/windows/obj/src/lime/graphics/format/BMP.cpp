// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_format_BMP
#include <lime/graphics/format/BMP.h>
#endif
#ifndef INCLUDED_lime_graphics_format_BMPType
#include <lime/graphics/format/BMPType.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ec97b87f3ed1dc6b_17_encode,"lime.graphics.format.BMP","encode",0xdcae556c,"lime.graphics.format.BMP.encode","lime/graphics/format/BMP.hx",17,0xe68a6e47)
namespace lime{
namespace graphics{
namespace format{

void BMP_obj::__construct() { }

Dynamic BMP_obj::__CreateEmpty() { return new BMP_obj; }

void *BMP_obj::_hx_vtable = 0;

Dynamic BMP_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BMP_obj > _hx_result = new BMP_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BMP_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5328312e;
}

 ::haxe::io::Bytes BMP_obj::encode( ::lime::graphics::Image image, ::lime::graphics::format::BMPType type){
            	HX_GC_STACKFRAME(&_hx_pos_ec97b87f3ed1dc6b_17_encode)
HXLINE(  19)		bool _hx_tmp;
HXDLIN(  19)		if (!(image->get_premultiplied())) {
HXLINE(  19)			_hx_tmp = (image->get_format() != (int)0);
            		}
            		else {
HXLINE(  19)			_hx_tmp = true;
            		}
HXDLIN(  19)		if (_hx_tmp) {
HXLINE(  23)			image = image->clone();
HXLINE(  24)			image->set_premultiplied(false);
HXLINE(  25)			image->set_format((int)0);
            		}
HXLINE(  29)		if (hx::IsNull( type )) {
HXLINE(  31)			type = ::lime::graphics::format::BMPType_obj::RGB_dyn();
            		}
HXLINE(  35)		int fileHeaderLength = (int)14;
HXLINE(  36)		int infoHeaderLength = (int)40;
HXLINE(  37)		int pixelValuesLength = ((image->width * image->height) * (int)4);
HXLINE(  39)		if (hx::IsNotNull( type )) {
HXLINE(  39)			switch((int)(_hx_getEnumValueIndex(type))){
            				case (int)0: {
HXLINE(  52)					int pixelValuesLength1 = (image->width * (int)3);
HXDLIN(  52)					int pixelValuesLength2 = (pixelValuesLength1 + hx::Mod((image->width * (int)3),(int)4));
HXDLIN(  52)					int pixelValuesLength3 = (pixelValuesLength2 + (image->height * (int)3));
HXDLIN(  52)					pixelValuesLength = (pixelValuesLength3 + (image->height * (int)3));
            				}
            				break;
            				case (int)1: {
HXLINE(  43)					infoHeaderLength = (int)108;
            				}
            				break;
            				case (int)2: {
HXLINE(  47)					fileHeaderLength = (int)0;
HXLINE(  48)					pixelValuesLength = (pixelValuesLength + (image->width * image->height));
            				}
            				break;
            			}
            		}
HXLINE(  58)		 ::haxe::io::Bytes data = ::haxe::io::Bytes_obj::alloc(((fileHeaderLength + infoHeaderLength) + pixelValuesLength));
HXLINE(  59)		int position = (int)0;
HXLINE(  61)		if ((fileHeaderLength > (int)0)) {
HXLINE(  63)			{
HXLINE(  63)				position = (position + (int)1);
HXDLIN(  63)				data->b[(position - (int)1)] = (int)66;
            			}
HXLINE(  64)			{
HXLINE(  64)				position = (position + (int)1);
HXDLIN(  64)				data->b[(position - (int)1)] = (int)77;
            			}
HXLINE(  65)			{
HXLINE(  65)				int v = data->length;
HXDLIN(  65)				::Array< unsigned char > data1 = data->b;
HXDLIN(  65)				data1[position] = ((int)v & (int)(int)255);
HXDLIN(  65)				::Array< unsigned char > data2 = data->b;
HXDLIN(  65)				data2[(position + (int)1)] = ((int)((int)v >> (int)(int)8) & (int)(int)255);
HXDLIN(  65)				::Array< unsigned char > data3 = data->b;
HXDLIN(  65)				data3[(position + (int)2)] = ((int)((int)v >> (int)(int)16) & (int)(int)255);
HXDLIN(  65)				::Array< unsigned char > data4 = data->b;
HXDLIN(  65)				data4[(position + (int)3)] = ((int)hx::UShr(v,(int)24) & (int)(int)255);
            			}
HXDLIN(  65)			position = (position + (int)4);
HXLINE(  66)			{
HXLINE(  66)				data->b[position] = (int)0;
HXDLIN(  66)				::Array< unsigned char > data5 = data->b;
HXDLIN(  66)				data5[(position + (int)1)] = (int)0;
            			}
HXDLIN(  66)			position = (position + (int)2);
HXLINE(  67)			{
HXLINE(  67)				data->b[position] = (int)0;
HXDLIN(  67)				::Array< unsigned char > data6 = data->b;
HXDLIN(  67)				data6[(position + (int)1)] = (int)0;
            			}
HXDLIN(  67)			position = (position + (int)2);
HXLINE(  68)			{
HXLINE(  68)				int v1 = (fileHeaderLength + infoHeaderLength);
HXDLIN(  68)				::Array< unsigned char > data7 = data->b;
HXDLIN(  68)				data7[position] = ((int)v1 & (int)(int)255);
HXDLIN(  68)				::Array< unsigned char > data8 = data->b;
HXDLIN(  68)				data8[(position + (int)1)] = ((int)((int)v1 >> (int)(int)8) & (int)(int)255);
HXDLIN(  68)				::Array< unsigned char > data9 = data->b;
HXDLIN(  68)				data9[(position + (int)2)] = ((int)((int)v1 >> (int)(int)16) & (int)(int)255);
HXDLIN(  68)				::Array< unsigned char > data10 = data->b;
HXDLIN(  68)				data10[(position + (int)3)] = ((int)hx::UShr(v1,(int)24) & (int)(int)255);
            			}
HXDLIN(  68)			position = (position + (int)4);
            		}
HXLINE(  72)		{
HXLINE(  72)			::Array< unsigned char > data11 = data->b;
HXDLIN(  72)			data11[position] = ((int)infoHeaderLength & (int)(int)255);
HXDLIN(  72)			::Array< unsigned char > data12 = data->b;
HXDLIN(  72)			data12[(position + (int)1)] = ((int)((int)infoHeaderLength >> (int)(int)8) & (int)(int)255);
HXDLIN(  72)			::Array< unsigned char > data13 = data->b;
HXDLIN(  72)			data13[(position + (int)2)] = ((int)((int)infoHeaderLength >> (int)(int)16) & (int)(int)255);
HXDLIN(  72)			::Array< unsigned char > data14 = data->b;
HXDLIN(  72)			data14[(position + (int)3)] = ((int)hx::UShr(infoHeaderLength,(int)24) & (int)(int)255);
            		}
HXDLIN(  72)		position = (position + (int)4);
HXLINE(  73)		{
HXLINE(  73)			int v2 = image->width;
HXDLIN(  73)			::Array< unsigned char > data15 = data->b;
HXDLIN(  73)			data15[position] = ((int)v2 & (int)(int)255);
HXDLIN(  73)			::Array< unsigned char > data16 = data->b;
HXDLIN(  73)			data16[(position + (int)1)] = ((int)((int)v2 >> (int)(int)8) & (int)(int)255);
HXDLIN(  73)			::Array< unsigned char > data17 = data->b;
HXDLIN(  73)			data17[(position + (int)2)] = ((int)((int)v2 >> (int)(int)16) & (int)(int)255);
HXDLIN(  73)			::Array< unsigned char > data18 = data->b;
HXDLIN(  73)			data18[(position + (int)3)] = ((int)hx::UShr(v2,(int)24) & (int)(int)255);
            		}
HXDLIN(  73)		position = (position + (int)4);
HXLINE(  74)		{
HXLINE(  74)			int v3;
HXDLIN(  74)			if (hx::IsEq( type,::lime::graphics::format::BMPType_obj::ICO_dyn() )) {
HXLINE(  74)				v3 = (image->height * (int)2);
            			}
            			else {
HXLINE(  74)				v3 = image->height;
            			}
HXDLIN(  74)			::Array< unsigned char > data19 = data->b;
HXDLIN(  74)			data19[position] = ((int)v3 & (int)(int)255);
HXDLIN(  74)			::Array< unsigned char > data20 = data->b;
HXDLIN(  74)			data20[(position + (int)1)] = ((int)((int)v3 >> (int)(int)8) & (int)(int)255);
HXDLIN(  74)			::Array< unsigned char > data21 = data->b;
HXDLIN(  74)			data21[(position + (int)2)] = ((int)((int)v3 >> (int)(int)16) & (int)(int)255);
HXDLIN(  74)			::Array< unsigned char > data22 = data->b;
HXDLIN(  74)			data22[(position + (int)3)] = ((int)hx::UShr(v3,(int)24) & (int)(int)255);
            		}
HXDLIN(  74)		position = (position + (int)4);
HXLINE(  75)		{
HXLINE(  75)			data->b[position] = (int)1;
HXDLIN(  75)			::Array< unsigned char > data23 = data->b;
HXDLIN(  75)			data23[(position + (int)1)] = (int)0;
            		}
HXDLIN(  75)		position = (position + (int)2);
HXLINE(  76)		{
HXLINE(  76)			int v4;
HXDLIN(  76)			if (hx::IsEq( type,::lime::graphics::format::BMPType_obj::RGB_dyn() )) {
HXLINE(  76)				v4 = (int)24;
            			}
            			else {
HXLINE(  76)				v4 = (int)32;
            			}
HXDLIN(  76)			data->b[position] = v4;
HXDLIN(  76)			::Array< unsigned char > data24 = data->b;
HXDLIN(  76)			data24[(position + (int)1)] = ((int)v4 >> (int)(int)8);
            		}
HXDLIN(  76)		position = (position + (int)2);
HXLINE(  77)		{
HXLINE(  77)			int v5;
HXDLIN(  77)			if (hx::IsEq( type,::lime::graphics::format::BMPType_obj::BITFIELD_dyn() )) {
HXLINE(  77)				v5 = (int)3;
            			}
            			else {
HXLINE(  77)				v5 = (int)0;
            			}
HXDLIN(  77)			::Array< unsigned char > data25 = data->b;
HXDLIN(  77)			data25[position] = ((int)v5 & (int)(int)255);
HXDLIN(  77)			::Array< unsigned char > data26 = data->b;
HXDLIN(  77)			data26[(position + (int)1)] = ((int)((int)v5 >> (int)(int)8) & (int)(int)255);
HXDLIN(  77)			::Array< unsigned char > data27 = data->b;
HXDLIN(  77)			data27[(position + (int)2)] = ((int)((int)v5 >> (int)(int)16) & (int)(int)255);
HXDLIN(  77)			::Array< unsigned char > data28 = data->b;
HXDLIN(  77)			data28[(position + (int)3)] = ((int)hx::UShr(v5,(int)24) & (int)(int)255);
            		}
HXDLIN(  77)		position = (position + (int)4);
HXLINE(  78)		{
HXLINE(  78)			::Array< unsigned char > data29 = data->b;
HXDLIN(  78)			data29[position] = ((int)pixelValuesLength & (int)(int)255);
HXDLIN(  78)			::Array< unsigned char > data30 = data->b;
HXDLIN(  78)			data30[(position + (int)1)] = ((int)((int)pixelValuesLength >> (int)(int)8) & (int)(int)255);
HXDLIN(  78)			::Array< unsigned char > data31 = data->b;
HXDLIN(  78)			data31[(position + (int)2)] = ((int)((int)pixelValuesLength >> (int)(int)16) & (int)(int)255);
HXDLIN(  78)			::Array< unsigned char > data32 = data->b;
HXDLIN(  78)			data32[(position + (int)3)] = ((int)hx::UShr(pixelValuesLength,(int)24) & (int)(int)255);
            		}
HXDLIN(  78)		position = (position + (int)4);
HXLINE(  79)		{
HXLINE(  79)			data->b[position] = (int)48;
HXDLIN(  79)			::Array< unsigned char > data33 = data->b;
HXDLIN(  79)			data33[(position + (int)1)] = (int)46;
HXDLIN(  79)			::Array< unsigned char > data34 = data->b;
HXDLIN(  79)			data34[(position + (int)2)] = (int)0;
HXDLIN(  79)			::Array< unsigned char > data35 = data->b;
HXDLIN(  79)			data35[(position + (int)3)] = (int)0;
            		}
HXDLIN(  79)		position = (position + (int)4);
HXLINE(  80)		{
HXLINE(  80)			data->b[position] = (int)48;
HXDLIN(  80)			::Array< unsigned char > data36 = data->b;
HXDLIN(  80)			data36[(position + (int)1)] = (int)46;
HXDLIN(  80)			::Array< unsigned char > data37 = data->b;
HXDLIN(  80)			data37[(position + (int)2)] = (int)0;
HXDLIN(  80)			::Array< unsigned char > data38 = data->b;
HXDLIN(  80)			data38[(position + (int)3)] = (int)0;
            		}
HXDLIN(  80)		position = (position + (int)4);
HXLINE(  81)		{
HXLINE(  81)			data->b[position] = (int)0;
HXDLIN(  81)			::Array< unsigned char > data39 = data->b;
HXDLIN(  81)			data39[(position + (int)1)] = (int)0;
HXDLIN(  81)			::Array< unsigned char > data40 = data->b;
HXDLIN(  81)			data40[(position + (int)2)] = (int)0;
HXDLIN(  81)			::Array< unsigned char > data41 = data->b;
HXDLIN(  81)			data41[(position + (int)3)] = (int)0;
            		}
HXDLIN(  81)		position = (position + (int)4);
HXLINE(  82)		{
HXLINE(  82)			data->b[position] = (int)0;
HXDLIN(  82)			::Array< unsigned char > data42 = data->b;
HXDLIN(  82)			data42[(position + (int)1)] = (int)0;
HXDLIN(  82)			::Array< unsigned char > data43 = data->b;
HXDLIN(  82)			data43[(position + (int)2)] = (int)0;
HXDLIN(  82)			::Array< unsigned char > data44 = data->b;
HXDLIN(  82)			data44[(position + (int)3)] = (int)0;
            		}
HXDLIN(  82)		position = (position + (int)4);
HXLINE(  84)		if (hx::IsEq( type,::lime::graphics::format::BMPType_obj::BITFIELD_dyn() )) {
HXLINE(  86)			{
HXLINE(  86)				data->b[position] = (int)0;
HXDLIN(  86)				::Array< unsigned char > data45 = data->b;
HXDLIN(  86)				data45[(position + (int)1)] = (int)0;
HXDLIN(  86)				::Array< unsigned char > data46 = data->b;
HXDLIN(  86)				data46[(position + (int)2)] = (int)255;
HXDLIN(  86)				::Array< unsigned char > data47 = data->b;
HXDLIN(  86)				data47[(position + (int)3)] = (int)0;
            			}
HXDLIN(  86)			position = (position + (int)4);
HXLINE(  87)			{
HXLINE(  87)				data->b[position] = (int)0;
HXDLIN(  87)				::Array< unsigned char > data48 = data->b;
HXDLIN(  87)				data48[(position + (int)1)] = (int)255;
HXDLIN(  87)				::Array< unsigned char > data49 = data->b;
HXDLIN(  87)				data49[(position + (int)2)] = (int)0;
HXDLIN(  87)				::Array< unsigned char > data50 = data->b;
HXDLIN(  87)				data50[(position + (int)3)] = (int)0;
            			}
HXDLIN(  87)			position = (position + (int)4);
HXLINE(  88)			{
HXLINE(  88)				data->b[position] = (int)255;
HXDLIN(  88)				::Array< unsigned char > data51 = data->b;
HXDLIN(  88)				data51[(position + (int)1)] = (int)0;
HXDLIN(  88)				::Array< unsigned char > data52 = data->b;
HXDLIN(  88)				data52[(position + (int)2)] = (int)0;
HXDLIN(  88)				::Array< unsigned char > data53 = data->b;
HXDLIN(  88)				data53[(position + (int)3)] = (int)0;
            			}
HXDLIN(  88)			position = (position + (int)4);
HXLINE(  89)			{
HXLINE(  89)				data->b[position] = (int)0;
HXDLIN(  89)				::Array< unsigned char > data54 = data->b;
HXDLIN(  89)				data54[(position + (int)1)] = (int)0;
HXDLIN(  89)				::Array< unsigned char > data55 = data->b;
HXDLIN(  89)				data55[(position + (int)2)] = (int)0;
HXDLIN(  89)				::Array< unsigned char > data56 = data->b;
HXDLIN(  89)				data56[(position + (int)3)] = (int)255;
            			}
HXDLIN(  89)			position = (position + (int)4);
HXLINE(  91)			{
HXLINE(  91)				position = (position + (int)1);
HXDLIN(  91)				data->b[(position - (int)1)] = (int)32;
            			}
HXLINE(  92)			{
HXLINE(  92)				position = (position + (int)1);
HXDLIN(  92)				data->b[(position - (int)1)] = (int)110;
            			}
HXLINE(  93)			{
HXLINE(  93)				position = (position + (int)1);
HXDLIN(  93)				data->b[(position - (int)1)] = (int)105;
            			}
HXLINE(  94)			{
HXLINE(  94)				position = (position + (int)1);
HXDLIN(  94)				data->b[(position - (int)1)] = (int)87;
            			}
HXLINE(  96)			{
HXLINE(  96)				int _g = (int)0;
HXDLIN(  96)				while((_g < (int)48)){
HXLINE(  96)					_g = (_g + (int)1);
HXDLIN(  96)					int i = (_g - (int)1);
HXLINE(  98)					{
HXLINE(  98)						position = (position + (int)1);
HXDLIN(  98)						data->b[(position - (int)1)] = (int)0;
            					}
            				}
            			}
            		}
HXLINE( 104)		 ::haxe::io::Bytes pixels = image->getPixels( ::lime::math::Rectangle_obj::__alloc( HX_CTX ,(int)0,(int)0,image->width,image->height),(int)1);
HXLINE( 105)		int readPosition = (int)0;
HXLINE( 106)		int a;
HXDLIN( 106)		int r;
HXDLIN( 106)		int g;
HXDLIN( 106)		int b;
HXLINE( 108)		if (hx::IsNotNull( type )) {
HXLINE( 108)			switch((int)(_hx_getEnumValueIndex(type))){
            				case (int)0: {
HXLINE( 171)					int _g1 = (int)0;
HXDLIN( 171)					int _g2 = image->height;
HXDLIN( 171)					while((_g1 < _g2)){
HXLINE( 171)						_g1 = (_g1 + (int)1);
HXDLIN( 171)						int y = (_g1 - (int)1);
HXLINE( 173)						readPosition = ((((image->height - (int)1) - y) * (int)4) * image->width);
HXLINE( 175)						{
HXLINE( 175)							int _g3 = (int)0;
HXDLIN( 175)							int _g21 = image->width;
HXDLIN( 175)							while((_g3 < _g21)){
HXLINE( 175)								_g3 = (_g3 + (int)1);
HXDLIN( 175)								int x = (_g3 - (int)1);
HXLINE( 177)								readPosition = (readPosition + (int)1);
HXDLIN( 177)								a = pixels->b->__get((readPosition - (int)1));
HXLINE( 178)								readPosition = (readPosition + (int)1);
HXDLIN( 178)								r = pixels->b->__get((readPosition - (int)1));
HXLINE( 179)								readPosition = (readPosition + (int)1);
HXDLIN( 179)								g = pixels->b->__get((readPosition - (int)1));
HXLINE( 180)								readPosition = (readPosition + (int)1);
HXDLIN( 180)								b = pixels->b->__get((readPosition - (int)1));
HXLINE( 182)								{
HXLINE( 182)									position = (position + (int)1);
HXDLIN( 182)									data->b[(position - (int)1)] = b;
            								}
HXLINE( 183)								{
HXLINE( 183)									position = (position + (int)1);
HXDLIN( 183)									data->b[(position - (int)1)] = g;
            								}
HXLINE( 184)								{
HXLINE( 184)									position = (position + (int)1);
HXDLIN( 184)									data->b[(position - (int)1)] = r;
            								}
            							}
            						}
HXLINE( 188)						{
HXLINE( 188)							int _g31 = (int)0;
HXDLIN( 188)							int _g22 = hx::Mod((image->width * (int)3),(int)4);
HXDLIN( 188)							while((_g31 < _g22)){
HXLINE( 188)								_g31 = (_g31 + (int)1);
HXDLIN( 188)								int i1 = (_g31 - (int)1);
HXLINE( 190)								{
HXLINE( 190)									position = (position + (int)1);
HXDLIN( 190)									data->b[(position - (int)1)] = (int)0;
            								}
            							}
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 112)					int _g11 = (int)0;
HXDLIN( 112)					int _g4 = image->height;
HXDLIN( 112)					while((_g11 < _g4)){
HXLINE( 112)						_g11 = (_g11 + (int)1);
HXDLIN( 112)						int y1 = (_g11 - (int)1);
HXLINE( 114)						readPosition = ((((image->height - (int)1) - y1) * (int)4) * image->width);
HXLINE( 116)						{
HXLINE( 116)							int _g32 = (int)0;
HXDLIN( 116)							int _g23 = image->width;
HXDLIN( 116)							while((_g32 < _g23)){
HXLINE( 116)								_g32 = (_g32 + (int)1);
HXDLIN( 116)								int x1 = (_g32 - (int)1);
HXLINE( 118)								readPosition = (readPosition + (int)1);
HXDLIN( 118)								a = pixels->b->__get((readPosition - (int)1));
HXLINE( 119)								readPosition = (readPosition + (int)1);
HXDLIN( 119)								r = pixels->b->__get((readPosition - (int)1));
HXLINE( 120)								readPosition = (readPosition + (int)1);
HXDLIN( 120)								g = pixels->b->__get((readPosition - (int)1));
HXLINE( 121)								readPosition = (readPosition + (int)1);
HXDLIN( 121)								b = pixels->b->__get((readPosition - (int)1));
HXLINE( 123)								{
HXLINE( 123)									position = (position + (int)1);
HXDLIN( 123)									data->b[(position - (int)1)] = b;
            								}
HXLINE( 124)								{
HXLINE( 124)									position = (position + (int)1);
HXDLIN( 124)									data->b[(position - (int)1)] = g;
            								}
HXLINE( 125)								{
HXLINE( 125)									position = (position + (int)1);
HXDLIN( 125)									data->b[(position - (int)1)] = r;
            								}
HXLINE( 126)								{
HXLINE( 126)									position = (position + (int)1);
HXDLIN( 126)									data->b[(position - (int)1)] = a;
            								}
            							}
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 134)					 ::haxe::io::Bytes andMask = ::haxe::io::Bytes_obj::alloc((image->width * image->height));
HXLINE( 135)					int maskPosition = (int)0;
HXLINE( 137)					{
HXLINE( 137)						int _g12 = (int)0;
HXDLIN( 137)						int _g5 = image->height;
HXDLIN( 137)						while((_g12 < _g5)){
HXLINE( 137)							_g12 = (_g12 + (int)1);
HXDLIN( 137)							int y2 = (_g12 - (int)1);
HXLINE( 139)							readPosition = ((((image->height - (int)1) - y2) * (int)4) * image->width);
HXLINE( 141)							{
HXLINE( 141)								int _g33 = (int)0;
HXDLIN( 141)								int _g24 = image->width;
HXDLIN( 141)								while((_g33 < _g24)){
HXLINE( 141)									_g33 = (_g33 + (int)1);
HXDLIN( 141)									int x2 = (_g33 - (int)1);
HXLINE( 143)									readPosition = (readPosition + (int)1);
HXDLIN( 143)									a = pixels->b->__get((readPosition - (int)1));
HXLINE( 144)									readPosition = (readPosition + (int)1);
HXDLIN( 144)									r = pixels->b->__get((readPosition - (int)1));
HXLINE( 145)									readPosition = (readPosition + (int)1);
HXDLIN( 145)									g = pixels->b->__get((readPosition - (int)1));
HXLINE( 146)									readPosition = (readPosition + (int)1);
HXDLIN( 146)									b = pixels->b->__get((readPosition - (int)1));
HXLINE( 148)									{
HXLINE( 148)										position = (position + (int)1);
HXDLIN( 148)										data->b[(position - (int)1)] = b;
            									}
HXLINE( 149)									{
HXLINE( 149)										position = (position + (int)1);
HXDLIN( 149)										data->b[(position - (int)1)] = g;
            									}
HXLINE( 150)									{
HXLINE( 150)										position = (position + (int)1);
HXDLIN( 150)										data->b[(position - (int)1)] = r;
            									}
HXLINE( 151)									{
HXLINE( 151)										position = (position + (int)1);
HXDLIN( 151)										data->b[(position - (int)1)] = a;
            									}
HXLINE( 159)									{
HXLINE( 159)										maskPosition = (maskPosition + (int)1);
HXDLIN( 159)										andMask->b[(maskPosition - (int)1)] = (int)0;
            									}
            								}
            							}
            						}
            					}
HXLINE( 167)					data->blit(position,andMask,(int)0,(image->width * image->height));
            				}
            				break;
            			}
            		}
HXLINE( 200)		return data;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BMP_obj,encode,return )


BMP_obj::BMP_obj()
{
}

bool BMP_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *BMP_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *BMP_obj_sStaticStorageInfo = 0;
#endif

static void BMP_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BMP_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BMP_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BMP_obj::__mClass,"__mClass");
};

#endif

hx::Class BMP_obj::__mClass;

static ::String BMP_obj_sStaticFields[] = {
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	::String(null())
};

void BMP_obj::__register()
{
	hx::Object *dummy = new BMP_obj;
	BMP_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.format.BMP","\x58","\xee","\xa1","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BMP_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BMP_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(BMP_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< BMP_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BMP_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BMP_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BMP_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace format
