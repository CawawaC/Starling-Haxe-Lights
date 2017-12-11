// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_82e72dbfef9da50a_39_new,"openfl.geom.ColorTransform","new",0x35d8b8af,"openfl.geom.ColorTransform.new","openfl/geom/ColorTransform.hx",39,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_53_concat,"openfl.geom.ColorTransform","concat",0x6a83fc25,"openfl.geom.ColorTransform.concat","openfl/geom/ColorTransform.hx",53,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_70_toString,"openfl.geom.ColorTransform","toString",0xe65269fd,"openfl.geom.ColorTransform.toString","openfl/geom/ColorTransform.hx",70,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_77___clone,"openfl.geom.ColorTransform","__clone",0x6d82280c,"openfl.geom.ColorTransform.__clone","openfl/geom/ColorTransform.hx",77,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_82___copyFrom,"openfl.geom.ColorTransform","__copyFrom",0x0c92ce70,"openfl.geom.ColorTransform.__copyFrom","openfl/geom/ColorTransform.hx",82,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_97___combine,"openfl.geom.ColorTransform","__combine",0x74bf08ee,"openfl.geom.ColorTransform.__combine","openfl/geom/ColorTransform.hx",97,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_112___identity,"openfl.geom.ColorTransform","__identity",0xfd6107ef,"openfl.geom.ColorTransform.__identity","openfl/geom/ColorTransform.hx",112,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_128___equals,"openfl.geom.ColorTransform","__equals",0x1605f2b0,"openfl.geom.ColorTransform.__equals","openfl/geom/ColorTransform.hx",128,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_135___isDefault,"openfl.geom.ColorTransform","__isDefault",0x071aee26,"openfl.geom.ColorTransform.__isDefault","openfl/geom/ColorTransform.hx",135,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_149_get_color,"openfl.geom.ColorTransform","get_color",0x07485b49,"openfl.geom.ColorTransform.get_color","openfl/geom/ColorTransform.hx",149,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_154_set_color,"openfl.geom.ColorTransform","set_color",0xea994755,"openfl.geom.ColorTransform.set_color","openfl/geom/ColorTransform.hx",154,0x850de941)
HX_LOCAL_STACK_FRAME(_hx_pos_82e72dbfef9da50a_169___toLimeColorMatrix,"openfl.geom.ColorTransform","__toLimeColorMatrix",0x55c98ae3,"openfl.geom.ColorTransform.__toLimeColorMatrix","openfl/geom/ColorTransform.hx",169,0x850de941)
namespace openfl{
namespace geom{

void ColorTransform_obj::__construct(hx::Null< Float >  __o_redMultiplier,hx::Null< Float >  __o_greenMultiplier,hx::Null< Float >  __o_blueMultiplier,hx::Null< Float >  __o_alphaMultiplier,hx::Null< Float >  __o_redOffset,hx::Null< Float >  __o_greenOffset,hx::Null< Float >  __o_blueOffset,hx::Null< Float >  __o_alphaOffset){
Float redMultiplier = __o_redMultiplier.Default(1);
Float greenMultiplier = __o_greenMultiplier.Default(1);
Float blueMultiplier = __o_blueMultiplier.Default(1);
Float alphaMultiplier = __o_alphaMultiplier.Default(1);
Float redOffset = __o_redOffset.Default(0);
Float greenOffset = __o_greenOffset.Default(0);
Float blueOffset = __o_blueOffset.Default(0);
Float alphaOffset = __o_alphaOffset.Default(0);
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_39_new)
HXLINE(  41)		this->redMultiplier = redMultiplier;
HXLINE(  42)		this->greenMultiplier = greenMultiplier;
HXLINE(  43)		this->blueMultiplier = blueMultiplier;
HXLINE(  44)		this->alphaMultiplier = alphaMultiplier;
HXLINE(  45)		this->redOffset = redOffset;
HXLINE(  46)		this->greenOffset = greenOffset;
HXLINE(  47)		this->blueOffset = blueOffset;
HXLINE(  48)		this->alphaOffset = alphaOffset;
            	}

Dynamic ColorTransform_obj::__CreateEmpty() { return new ColorTransform_obj; }

void *ColorTransform_obj::_hx_vtable = 0;

Dynamic ColorTransform_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ColorTransform_obj > _hx_result = new ColorTransform_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool ColorTransform_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2f5ce43d;
}

void ColorTransform_obj::concat( ::openfl::geom::ColorTransform second){
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_53_concat)
HXLINE(  55)		 ::openfl::geom::ColorTransform _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  55)		_hx_tmp->redMultiplier = (_hx_tmp->redMultiplier * second->redMultiplier);
HXLINE(  56)		 ::openfl::geom::ColorTransform _hx_tmp1 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  56)		_hx_tmp1->greenMultiplier = (_hx_tmp1->greenMultiplier * second->greenMultiplier);
HXLINE(  57)		 ::openfl::geom::ColorTransform _hx_tmp2 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  57)		_hx_tmp2->blueMultiplier = (_hx_tmp2->blueMultiplier * second->blueMultiplier);
HXLINE(  58)		 ::openfl::geom::ColorTransform _hx_tmp3 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  58)		_hx_tmp3->alphaMultiplier = (_hx_tmp3->alphaMultiplier * second->alphaMultiplier);
HXLINE(  60)		this->redOffset = ((second->redMultiplier * this->redOffset) + second->redOffset);
HXLINE(  61)		this->greenOffset = ((second->greenMultiplier * this->greenOffset) + second->greenOffset);
HXLINE(  62)		this->blueOffset = ((second->blueMultiplier * this->blueOffset) + second->blueOffset);
HXLINE(  63)		this->alphaOffset = ((second->alphaMultiplier * this->alphaOffset) + second->alphaOffset);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,concat,(void))

::String ColorTransform_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_70_toString)
HXDLIN(  70)		return ((((((((((((((((HX_("(redMultiplier=",f3,ad,1c,05) + this->redMultiplier) + HX_(", greenMultiplier=",0d,c2,8d,70)) + this->greenMultiplier) + HX_(", blueMultiplier=",2e,6d,c3,3b)) + this->blueMultiplier) + HX_(", alphaMultiplier=",52,89,82,1f)) + this->alphaMultiplier) + HX_(", redOffset=",6d,d3,86,3f)) + this->redOffset) + HX_(", greenOffset=",3b,d5,ed,53)) + this->greenOffset) + HX_(", blueOffset=",dc,1b,85,47)) + this->blueOffset) + HX_(", alphaOffset=",00,56,b2,98)) + this->alphaOffset) + HX_(")",29,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,toString,return )

 ::openfl::geom::ColorTransform ColorTransform_obj::_hx___clone(){
            	HX_GC_STACKFRAME(&_hx_pos_82e72dbfef9da50a_77___clone)
HXDLIN(  77)		return  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,this->redMultiplier,this->greenMultiplier,this->blueMultiplier,this->alphaMultiplier,this->redOffset,this->greenOffset,this->blueOffset,this->alphaOffset);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,_hx___clone,return )

void ColorTransform_obj::_hx___copyFrom( ::openfl::geom::ColorTransform ct){
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_82___copyFrom)
HXLINE(  84)		this->redMultiplier = ct->redMultiplier;
HXLINE(  85)		this->greenMultiplier = ct->greenMultiplier;
HXLINE(  86)		this->blueMultiplier = ct->blueMultiplier;
HXLINE(  87)		this->alphaMultiplier = ct->alphaMultiplier;
HXLINE(  89)		this->redOffset = ct->redOffset;
HXLINE(  90)		this->greenOffset = ct->greenOffset;
HXLINE(  91)		this->blueOffset = ct->blueOffset;
HXLINE(  92)		this->alphaOffset = ct->alphaOffset;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,_hx___copyFrom,(void))

void ColorTransform_obj::_hx___combine( ::openfl::geom::ColorTransform ct){
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_97___combine)
HXLINE(  99)		 ::openfl::geom::ColorTransform _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  99)		_hx_tmp->redMultiplier = (_hx_tmp->redMultiplier * ct->redMultiplier);
HXLINE( 100)		 ::openfl::geom::ColorTransform _hx_tmp1 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 100)		_hx_tmp1->greenMultiplier = (_hx_tmp1->greenMultiplier * ct->greenMultiplier);
HXLINE( 101)		 ::openfl::geom::ColorTransform _hx_tmp2 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 101)		_hx_tmp2->blueMultiplier = (_hx_tmp2->blueMultiplier * ct->blueMultiplier);
HXLINE( 102)		 ::openfl::geom::ColorTransform _hx_tmp3 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 102)		_hx_tmp3->alphaMultiplier = (_hx_tmp3->alphaMultiplier * ct->alphaMultiplier);
HXLINE( 104)		 ::openfl::geom::ColorTransform _hx_tmp4 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 104)		_hx_tmp4->redOffset = (_hx_tmp4->redOffset + ct->redOffset);
HXLINE( 105)		 ::openfl::geom::ColorTransform _hx_tmp5 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 105)		_hx_tmp5->greenOffset = (_hx_tmp5->greenOffset + ct->greenOffset);
HXLINE( 106)		 ::openfl::geom::ColorTransform _hx_tmp6 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 106)		_hx_tmp6->blueOffset = (_hx_tmp6->blueOffset + ct->blueOffset);
HXLINE( 107)		 ::openfl::geom::ColorTransform _hx_tmp7 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 107)		_hx_tmp7->alphaOffset = (_hx_tmp7->alphaOffset + ct->alphaOffset);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,_hx___combine,(void))

void ColorTransform_obj::_hx___identity(){
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_112___identity)
HXLINE( 114)		this->redMultiplier = (int)1;
HXLINE( 115)		this->greenMultiplier = (int)1;
HXLINE( 116)		this->blueMultiplier = (int)1;
HXLINE( 117)		this->alphaMultiplier = (int)1;
HXLINE( 118)		this->redOffset = (int)0;
HXLINE( 119)		this->greenOffset = (int)0;
HXLINE( 120)		this->blueOffset = (int)0;
HXLINE( 121)		this->alphaOffset = (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,_hx___identity,(void))

bool ColorTransform_obj::_hx___equals( ::openfl::geom::ColorTransform ct, ::Dynamic __o_skipAlphaMultiplier){
 ::Dynamic skipAlphaMultiplier = __o_skipAlphaMultiplier.Default(false);
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_128___equals)
HXDLIN( 128)		bool _hx_tmp;
HXDLIN( 128)		bool _hx_tmp1;
HXDLIN( 128)		bool _hx_tmp2;
HXDLIN( 128)		bool _hx_tmp3;
HXDLIN( 128)		bool _hx_tmp4;
HXDLIN( 128)		bool _hx_tmp5;
HXDLIN( 128)		bool _hx_tmp6;
HXDLIN( 128)		if (hx::IsNotNull( ct )) {
HXDLIN( 128)			_hx_tmp6 = (this->redMultiplier == ct->redMultiplier);
            		}
            		else {
HXDLIN( 128)			_hx_tmp6 = false;
            		}
HXDLIN( 128)		if (_hx_tmp6) {
HXDLIN( 128)			_hx_tmp5 = (this->greenMultiplier == ct->greenMultiplier);
            		}
            		else {
HXDLIN( 128)			_hx_tmp5 = false;
            		}
HXDLIN( 128)		if (_hx_tmp5) {
HXDLIN( 128)			_hx_tmp4 = (this->blueMultiplier == ct->blueMultiplier);
            		}
            		else {
HXDLIN( 128)			_hx_tmp4 = false;
            		}
HXDLIN( 128)		if (_hx_tmp4) {
HXDLIN( 128)			if (!(skipAlphaMultiplier)) {
HXDLIN( 128)				_hx_tmp3 = (this->alphaMultiplier == ct->alphaMultiplier);
            			}
            			else {
HXDLIN( 128)				_hx_tmp3 = true;
            			}
            		}
            		else {
HXDLIN( 128)			_hx_tmp3 = false;
            		}
HXDLIN( 128)		if (_hx_tmp3) {
HXDLIN( 128)			_hx_tmp2 = (this->redOffset == ct->redOffset);
            		}
            		else {
HXDLIN( 128)			_hx_tmp2 = false;
            		}
HXDLIN( 128)		if (_hx_tmp2) {
HXDLIN( 128)			_hx_tmp1 = (this->greenOffset == ct->greenOffset);
            		}
            		else {
HXDLIN( 128)			_hx_tmp1 = false;
            		}
HXDLIN( 128)		if (_hx_tmp1) {
HXDLIN( 128)			_hx_tmp = (this->blueOffset == ct->blueOffset);
            		}
            		else {
HXDLIN( 128)			_hx_tmp = false;
            		}
HXDLIN( 128)		if (_hx_tmp) {
HXDLIN( 128)			return (this->alphaOffset == ct->alphaOffset);
            		}
            		else {
HXDLIN( 128)			return false;
            		}
HXDLIN( 128)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ColorTransform_obj,_hx___equals,return )

bool ColorTransform_obj::_hx___isDefault(){
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_135___isDefault)
HXDLIN( 135)		bool _hx_tmp;
HXDLIN( 135)		bool _hx_tmp1;
HXDLIN( 135)		bool _hx_tmp2;
HXDLIN( 135)		bool _hx_tmp3;
HXDLIN( 135)		bool _hx_tmp4;
HXDLIN( 135)		bool _hx_tmp5;
HXDLIN( 135)		if ((this->redMultiplier == (int)1)) {
HXDLIN( 135)			_hx_tmp5 = (this->greenMultiplier == (int)1);
            		}
            		else {
HXDLIN( 135)			_hx_tmp5 = false;
            		}
HXDLIN( 135)		if (_hx_tmp5) {
HXDLIN( 135)			_hx_tmp4 = (this->blueMultiplier == (int)1);
            		}
            		else {
HXDLIN( 135)			_hx_tmp4 = false;
            		}
HXDLIN( 135)		if (_hx_tmp4) {
HXDLIN( 135)			_hx_tmp3 = (this->alphaMultiplier == (int)1);
            		}
            		else {
HXDLIN( 135)			_hx_tmp3 = false;
            		}
HXDLIN( 135)		if (_hx_tmp3) {
HXDLIN( 135)			_hx_tmp2 = (this->redOffset == (int)0);
            		}
            		else {
HXDLIN( 135)			_hx_tmp2 = false;
            		}
HXDLIN( 135)		if (_hx_tmp2) {
HXDLIN( 135)			_hx_tmp1 = (this->greenOffset == (int)0);
            		}
            		else {
HXDLIN( 135)			_hx_tmp1 = false;
            		}
HXDLIN( 135)		if (_hx_tmp1) {
HXDLIN( 135)			_hx_tmp = (this->blueOffset == (int)0);
            		}
            		else {
HXDLIN( 135)			_hx_tmp = false;
            		}
HXDLIN( 135)		if (_hx_tmp) {
HXDLIN( 135)			return (this->alphaOffset == (int)0);
            		}
            		else {
HXDLIN( 135)			return false;
            		}
HXDLIN( 135)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,_hx___isDefault,return )

int ColorTransform_obj::get_color(){
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_149_get_color)
HXDLIN( 149)		int _hx_tmp = ((int)::Std_obj::_hx_int(this->redOffset) << (int)(int)16);
HXDLIN( 149)		int _hx_tmp1 = ((int)_hx_tmp | (int)((int)::Std_obj::_hx_int(this->greenOffset) << (int)(int)8));
HXDLIN( 149)		return ((int)_hx_tmp1 | (int)::Std_obj::_hx_int(this->blueOffset));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,get_color,return )

int ColorTransform_obj::set_color(int value){
            	HX_STACKFRAME(&_hx_pos_82e72dbfef9da50a_154_set_color)
HXLINE( 156)		this->redOffset = ((int)((int)value >> (int)(int)16) & (int)(int)255);
HXLINE( 157)		this->greenOffset = ((int)((int)value >> (int)(int)8) & (int)(int)255);
HXLINE( 158)		this->blueOffset = ((int)value & (int)(int)255);
HXLINE( 160)		this->redMultiplier = (int)0;
HXLINE( 161)		this->greenMultiplier = (int)0;
HXLINE( 162)		this->blueMultiplier = (int)0;
HXLINE( 164)		return this->get_color();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,set_color,return )

 ::lime::utils::ArrayBufferView ColorTransform_obj::_hx___toLimeColorMatrix(){
            	HX_GC_STACKFRAME(&_hx_pos_82e72dbfef9da50a_169___toLimeColorMatrix)
HXLINE( 171)		if (hx::IsNull( ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix )) {
HXLINE( 173)			 ::lime::utils::ArrayBufferView this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)20,(int)8);
HXDLIN( 173)			::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix = this1;
            		}
HXLINE( 177)		{
HXLINE( 177)			 ::lime::utils::ArrayBufferView this2 = ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
HXDLIN( 177)			Float val = this->redMultiplier;
HXDLIN( 177)			::__hxcpp_memory_set_float(this2->buffer->b,this2->byteOffset,val);
            		}
HXLINE( 178)		{
HXLINE( 178)			 ::lime::utils::ArrayBufferView this3 = ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
HXDLIN( 178)			Float val1 = ((Float)this->redOffset / (Float)(int)255);
HXDLIN( 178)			::__hxcpp_memory_set_float(this3->buffer->b,(this3->byteOffset + (int)16),val1);
            		}
HXLINE( 179)		{
HXLINE( 179)			 ::lime::utils::ArrayBufferView this4 = ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
HXDLIN( 179)			Float val2 = this->greenMultiplier;
HXDLIN( 179)			::__hxcpp_memory_set_float(this4->buffer->b,(this4->byteOffset + (int)24),val2);
            		}
HXLINE( 180)		{
HXLINE( 180)			 ::lime::utils::ArrayBufferView this5 = ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
HXDLIN( 180)			Float val3 = ((Float)this->greenOffset / (Float)(int)255);
HXDLIN( 180)			::__hxcpp_memory_set_float(this5->buffer->b,(this5->byteOffset + (int)36),val3);
            		}
HXLINE( 181)		{
HXLINE( 181)			 ::lime::utils::ArrayBufferView this6 = ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
HXDLIN( 181)			Float val4 = this->blueMultiplier;
HXDLIN( 181)			::__hxcpp_memory_set_float(this6->buffer->b,(this6->byteOffset + (int)48),val4);
            		}
HXLINE( 182)		{
HXLINE( 182)			 ::lime::utils::ArrayBufferView this7 = ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
HXDLIN( 182)			Float val5 = ((Float)this->blueOffset / (Float)(int)255);
HXDLIN( 182)			::__hxcpp_memory_set_float(this7->buffer->b,(this7->byteOffset + (int)56),val5);
            		}
HXLINE( 183)		{
HXLINE( 183)			 ::lime::utils::ArrayBufferView this8 = ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
HXDLIN( 183)			Float val6 = this->alphaMultiplier;
HXDLIN( 183)			::__hxcpp_memory_set_float(this8->buffer->b,(this8->byteOffset + (int)72),val6);
            		}
HXLINE( 184)		{
HXLINE( 184)			 ::lime::utils::ArrayBufferView this9 = ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
HXDLIN( 184)			Float val7 = ((Float)this->alphaOffset / (Float)(int)255);
HXDLIN( 184)			::__hxcpp_memory_set_float(this9->buffer->b,(this9->byteOffset + (int)76),val7);
            		}
HXLINE( 186)		return ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,_hx___toLimeColorMatrix,return )

 ::lime::utils::ArrayBufferView ColorTransform_obj::_hx___limeColorMatrix;


hx::ObjectPtr< ColorTransform_obj > ColorTransform_obj::__new(hx::Null< Float >  __o_redMultiplier,hx::Null< Float >  __o_greenMultiplier,hx::Null< Float >  __o_blueMultiplier,hx::Null< Float >  __o_alphaMultiplier,hx::Null< Float >  __o_redOffset,hx::Null< Float >  __o_greenOffset,hx::Null< Float >  __o_blueOffset,hx::Null< Float >  __o_alphaOffset) {
	hx::ObjectPtr< ColorTransform_obj > __this = new ColorTransform_obj();
	__this->__construct(__o_redMultiplier,__o_greenMultiplier,__o_blueMultiplier,__o_alphaMultiplier,__o_redOffset,__o_greenOffset,__o_blueOffset,__o_alphaOffset);
	return __this;
}

hx::ObjectPtr< ColorTransform_obj > ColorTransform_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_redMultiplier,hx::Null< Float >  __o_greenMultiplier,hx::Null< Float >  __o_blueMultiplier,hx::Null< Float >  __o_alphaMultiplier,hx::Null< Float >  __o_redOffset,hx::Null< Float >  __o_greenOffset,hx::Null< Float >  __o_blueOffset,hx::Null< Float >  __o_alphaOffset) {
	ColorTransform_obj *__this = (ColorTransform_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ColorTransform_obj), false, "openfl.geom.ColorTransform"));
	*(void **)__this = ColorTransform_obj::_hx_vtable;
	__this->__construct(__o_redMultiplier,__o_greenMultiplier,__o_blueMultiplier,__o_alphaMultiplier,__o_redOffset,__o_greenOffset,__o_blueOffset,__o_alphaOffset);
	return __this;
}

ColorTransform_obj::ColorTransform_obj()
{
}

hx::Val ColorTransform_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_color() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return hx::Val( concat_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__clone") ) { return hx::Val( _hx___clone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		if (HX_FIELD_EQ(inName,"__equals") ) { return hx::Val( _hx___equals_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"redOffset") ) { return hx::Val( redOffset ); }
		if (HX_FIELD_EQ(inName,"__combine") ) { return hx::Val( _hx___combine_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return hx::Val( get_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return hx::Val( set_color_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blueOffset") ) { return hx::Val( blueOffset ); }
		if (HX_FIELD_EQ(inName,"__copyFrom") ) { return hx::Val( _hx___copyFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"__identity") ) { return hx::Val( _hx___identity_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alphaOffset") ) { return hx::Val( alphaOffset ); }
		if (HX_FIELD_EQ(inName,"greenOffset") ) { return hx::Val( greenOffset ); }
		if (HX_FIELD_EQ(inName,"__isDefault") ) { return hx::Val( _hx___isDefault_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"redMultiplier") ) { return hx::Val( redMultiplier ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"blueMultiplier") ) { return hx::Val( blueMultiplier ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"alphaMultiplier") ) { return hx::Val( alphaMultiplier ); }
		if (HX_FIELD_EQ(inName,"greenMultiplier") ) { return hx::Val( greenMultiplier ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__toLimeColorMatrix") ) { return hx::Val( _hx___toLimeColorMatrix_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ColorTransform_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"__limeColorMatrix") ) { outValue = ( _hx___limeColorMatrix ); return true; }
	}
	return false;
}

hx::Val ColorTransform_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_color(inValue.Cast< int >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"redOffset") ) { redOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blueOffset") ) { blueOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alphaOffset") ) { alphaOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"greenOffset") ) { greenOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"redMultiplier") ) { redMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"blueMultiplier") ) { blueMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"alphaMultiplier") ) { alphaMultiplier=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"greenMultiplier") ) { greenMultiplier=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ColorTransform_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"__limeColorMatrix") ) { _hx___limeColorMatrix=ioValue.Cast<  ::lime::utils::ArrayBufferView >(); return true; }
	}
	return false;
}

void ColorTransform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alphaMultiplier","\x7f","\xb4","\x82","\x9a"));
	outFields->push(HX_HCSTRING("alphaOffset","\x91","\x8d","\x43","\xd0"));
	outFields->push(HX_HCSTRING("blueMultiplier","\xbb","\x32","\x96","\xcf"));
	outFields->push(HX_HCSTRING("blueOffset","\xcd","\x3d","\x34","\xbb"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("greenMultiplier","\x24","\x2c","\x40","\x6f"));
	outFields->push(HX_HCSTRING("greenOffset","\xb6","\x0e","\xd9","\xb7"));
	outFields->push(HX_HCSTRING("redMultiplier","\x32","\xf4","\xe9","\x4e"));
	outFields->push(HX_HCSTRING("redOffset","\xc4","\x37","\x9e","\x53"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ColorTransform_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,alphaMultiplier),HX_HCSTRING("alphaMultiplier","\x7f","\xb4","\x82","\x9a")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,alphaOffset),HX_HCSTRING("alphaOffset","\x91","\x8d","\x43","\xd0")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,blueMultiplier),HX_HCSTRING("blueMultiplier","\xbb","\x32","\x96","\xcf")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,blueOffset),HX_HCSTRING("blueOffset","\xcd","\x3d","\x34","\xbb")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,greenMultiplier),HX_HCSTRING("greenMultiplier","\x24","\x2c","\x40","\x6f")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,greenOffset),HX_HCSTRING("greenOffset","\xb6","\x0e","\xd9","\xb7")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,redMultiplier),HX_HCSTRING("redMultiplier","\x32","\xf4","\xe9","\x4e")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,redOffset),HX_HCSTRING("redOffset","\xc4","\x37","\x9e","\x53")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ColorTransform_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(void *) &ColorTransform_obj::_hx___limeColorMatrix,HX_HCSTRING("__limeColorMatrix","\xcf","\xd7","\x37","\x34")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ColorTransform_obj_sMemberFields[] = {
	HX_HCSTRING("alphaMultiplier","\x7f","\xb4","\x82","\x9a"),
	HX_HCSTRING("alphaOffset","\x91","\x8d","\x43","\xd0"),
	HX_HCSTRING("blueMultiplier","\xbb","\x32","\x96","\xcf"),
	HX_HCSTRING("blueOffset","\xcd","\x3d","\x34","\xbb"),
	HX_HCSTRING("greenMultiplier","\x24","\x2c","\x40","\x6f"),
	HX_HCSTRING("greenOffset","\xb6","\x0e","\xd9","\xb7"),
	HX_HCSTRING("redMultiplier","\x32","\xf4","\xe9","\x4e"),
	HX_HCSTRING("redOffset","\xc4","\x37","\x9e","\x53"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("__clone","\x3d","\x6c","\xc1","\xb2"),
	HX_HCSTRING("__copyFrom","\xdf","\x7e","\x99","\x6b"),
	HX_HCSTRING("__combine","\x5f","\x7b","\x7c","\xfb"),
	HX_HCSTRING("__identity","\x5e","\xb8","\x67","\x5c"),
	HX_HCSTRING("__equals","\x5f","\x59","\x22","\x68"),
	HX_HCSTRING("__isDefault","\xd7","\x9e","\xee","\xcd"),
	HX_HCSTRING("get_color","\xba","\xcd","\x05","\x8e"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("__toLimeColorMatrix","\x94","\xd4","\xb6","\x78"),
	::String(null()) };

static void ColorTransform_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorTransform_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ColorTransform_obj::_hx___limeColorMatrix,"__limeColorMatrix");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ColorTransform_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorTransform_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ColorTransform_obj::_hx___limeColorMatrix,"__limeColorMatrix");
};

#endif

hx::Class ColorTransform_obj::__mClass;

static ::String ColorTransform_obj_sStaticFields[] = {
	HX_HCSTRING("__limeColorMatrix","\xcf","\xd7","\x37","\x34"),
	::String(null())
};

void ColorTransform_obj::__register()
{
	hx::Object *dummy = new ColorTransform_obj;
	ColorTransform_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.geom.ColorTransform","\x3d","\x35","\x6d","\x80");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ColorTransform_obj::__GetStatic;
	__mClass->mSetStaticField = &ColorTransform_obj::__SetStatic;
	__mClass->mMarkFunc = ColorTransform_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ColorTransform_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ColorTransform_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColorTransform_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ColorTransform_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ColorTransform_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ColorTransform_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace geom