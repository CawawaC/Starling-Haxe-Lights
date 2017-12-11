// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_AbstractVector
#include <openfl/_Vector/AbstractVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsDataType
#include <openfl/display/GraphicsDataType.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsPath
#include <openfl/display/GraphicsPath.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsPath
#include <openfl/display/IGraphicsPath.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9d2387a0b056a42f_21_new,"openfl.display.GraphicsPath","new",0x778d9d6c,"openfl.display.GraphicsPath.new","openfl/display/GraphicsPath.hx",21,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_31_cubicCurveTo,"openfl.display.GraphicsPath","cubicCurveTo",0x2db23954,"openfl.display.GraphicsPath.cubicCurveTo","openfl/display/GraphicsPath.hx",31,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_47_curveTo,"openfl.display.GraphicsPath","curveTo",0xe3fba316,"openfl.display.GraphicsPath.curveTo","openfl/display/GraphicsPath.hx",47,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_61_lineTo,"openfl.display.GraphicsPath","lineTo",0x87b32903,"openfl.display.GraphicsPath.lineTo","openfl/display/GraphicsPath.hx",61,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_73_moveTo,"openfl.display.GraphicsPath","moveTo",0x67bfb560,"openfl.display.GraphicsPath.moveTo","openfl/display/GraphicsPath.hx",73,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_85_wideLineTo,"openfl.display.GraphicsPath","wideLineTo",0xae2a1f76,"openfl.display.GraphicsPath.wideLineTo","openfl/display/GraphicsPath.hx",85,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_97_wideMoveTo,"openfl.display.GraphicsPath","wideMoveTo",0x8e36abd3,"openfl.display.GraphicsPath.wideMoveTo","openfl/display/GraphicsPath.hx",97,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_111___drawCircle,"openfl.display.GraphicsPath","__drawCircle",0xcf8699c8,"openfl.display.GraphicsPath.__drawCircle","openfl/display/GraphicsPath.hx",111,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_118___drawEllipse,"openfl.display.GraphicsPath","__drawEllipse",0xdc0fda26,"openfl.display.GraphicsPath.__drawEllipse","openfl/display/GraphicsPath.hx",118,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_123___drawRect,"openfl.display.GraphicsPath","__drawRect",0xe8f096dc,"openfl.display.GraphicsPath.__drawRect","openfl/display/GraphicsPath.hx",123,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_134___drawRoundRect,"openfl.display.GraphicsPath","__drawRoundRect",0xbc9c2bda,"openfl.display.GraphicsPath.__drawRoundRect","openfl/display/GraphicsPath.hx",134,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_11_boot,"openfl.display.GraphicsPath","boot",0x1c7521a6,"openfl.display.GraphicsPath.boot","openfl/display/GraphicsPath.hx",11,0x0a58fcc2)
HX_LOCAL_STACK_FRAME(_hx_pos_9d2387a0b056a42f_12_boot,"openfl.display.GraphicsPath","boot",0x1c7521a6,"openfl.display.GraphicsPath.boot","openfl/display/GraphicsPath.hx",12,0x0a58fcc2)
namespace openfl{
namespace display{

void GraphicsPath_obj::__construct( ::openfl::_Vector::AbstractVector commands, ::openfl::_Vector::AbstractVector data, ::Dynamic __o_winding){
 ::Dynamic winding = __o_winding.Default(0);
            	HX_STACKFRAME(&_hx_pos_9d2387a0b056a42f_21_new)
HXLINE(  23)		this->commands = commands;
HXLINE(  24)		this->data = data;
HXLINE(  25)		this->winding = winding;
HXLINE(  26)		this->_hx___graphicsDataType = ::openfl::display::GraphicsDataType_obj::PATH_dyn();
            	}

Dynamic GraphicsPath_obj::__CreateEmpty() { return new GraphicsPath_obj; }

void *GraphicsPath_obj::_hx_vtable = 0;

Dynamic GraphicsPath_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GraphicsPath_obj > _hx_result = new GraphicsPath_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool GraphicsPath_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x572da862;
}

static ::openfl::display::IGraphicsData_obj _hx_openfl_display_GraphicsPath__hx_openfl_display_IGraphicsData= {
};

static ::openfl::display::IGraphicsPath_obj _hx_openfl_display_GraphicsPath__hx_openfl_display_IGraphicsPath= {
};

void *GraphicsPath_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xc177ee0c: return &_hx_openfl_display_GraphicsPath__hx_openfl_display_IGraphicsData;
		case (int)0xc9667d87: return &_hx_openfl_display_GraphicsPath__hx_openfl_display_IGraphicsPath;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void GraphicsPath_obj::cubicCurveTo(Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY){
            	HX_GC_STACKFRAME(&_hx_pos_9d2387a0b056a42f_31_cubicCurveTo)
HXLINE(  33)		if (hx::IsNull( this->commands )) {
HXLINE(  33)			int length = null();
HXDLIN(  33)			bool fixed = null();
HXDLIN(  33)			this->commands =  ::openfl::_Vector::AbstractVector_obj::__alloc( HX_CTX , ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length,fixed,null()),null());
            		}
HXLINE(  34)		if (hx::IsNull( this->data )) {
HXLINE(  34)			int length1 = null();
HXDLIN(  34)			bool fixed1 = null();
HXDLIN(  34)			this->data =  ::openfl::_Vector::AbstractVector_obj::__alloc( HX_CTX , ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length1,fixed1,null()),null());
            		}
HXLINE(  36)		::openfl::_Vector::IVector_obj::push(this->commands->data,(int)6);
HXLINE(  37)		::openfl::_Vector::IVector_obj::push(this->data->data,controlX1);
HXLINE(  38)		::openfl::_Vector::IVector_obj::push(this->data->data,controlY1);
HXLINE(  39)		::openfl::_Vector::IVector_obj::push(this->data->data,controlX2);
HXLINE(  40)		::openfl::_Vector::IVector_obj::push(this->data->data,controlY2);
HXLINE(  41)		::openfl::_Vector::IVector_obj::push(this->data->data,anchorX);
HXLINE(  42)		::openfl::_Vector::IVector_obj::push(this->data->data,anchorY);
            	}


HX_DEFINE_DYNAMIC_FUNC6(GraphicsPath_obj,cubicCurveTo,(void))

void GraphicsPath_obj::curveTo(Float controlX,Float controlY,Float anchorX,Float anchorY){
            	HX_GC_STACKFRAME(&_hx_pos_9d2387a0b056a42f_47_curveTo)
HXLINE(  49)		if (hx::IsNull( this->commands )) {
HXLINE(  49)			int length = null();
HXDLIN(  49)			bool fixed = null();
HXDLIN(  49)			this->commands =  ::openfl::_Vector::AbstractVector_obj::__alloc( HX_CTX , ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length,fixed,null()),null());
            		}
HXLINE(  50)		if (hx::IsNull( this->data )) {
HXLINE(  50)			int length1 = null();
HXDLIN(  50)			bool fixed1 = null();
HXDLIN(  50)			this->data =  ::openfl::_Vector::AbstractVector_obj::__alloc( HX_CTX , ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length1,fixed1,null()),null());
            		}
HXLINE(  52)		::openfl::_Vector::IVector_obj::push(this->commands->data,(int)3);
HXLINE(  53)		::openfl::_Vector::IVector_obj::push(this->data->data,controlX);
HXLINE(  54)		::openfl::_Vector::IVector_obj::push(this->data->data,controlY);
HXLINE(  55)		::openfl::_Vector::IVector_obj::push(this->data->data,anchorX);
HXLINE(  56)		::openfl::_Vector::IVector_obj::push(this->data->data,anchorY);
            	}


HX_DEFINE_DYNAMIC_FUNC4(GraphicsPath_obj,curveTo,(void))

void GraphicsPath_obj::lineTo(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_9d2387a0b056a42f_61_lineTo)
HXLINE(  63)		if (hx::IsNull( this->commands )) {
HXLINE(  63)			int length = null();
HXDLIN(  63)			bool fixed = null();
HXDLIN(  63)			this->commands =  ::openfl::_Vector::AbstractVector_obj::__alloc( HX_CTX , ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length,fixed,null()),null());
            		}
HXLINE(  64)		if (hx::IsNull( this->data )) {
HXLINE(  64)			int length1 = null();
HXDLIN(  64)			bool fixed1 = null();
HXDLIN(  64)			this->data =  ::openfl::_Vector::AbstractVector_obj::__alloc( HX_CTX , ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length1,fixed1,null()),null());
            		}
HXLINE(  66)		::openfl::_Vector::IVector_obj::push(this->commands->data,(int)2);
HXLINE(  67)		::openfl::_Vector::IVector_obj::push(this->data->data,x);
HXLINE(  68)		::openfl::_Vector::IVector_obj::push(this->data->data,y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(GraphicsPath_obj,lineTo,(void))

void GraphicsPath_obj::moveTo(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_9d2387a0b056a42f_73_moveTo)
HXLINE(  75)		if (hx::IsNull( this->commands )) {
HXLINE(  75)			int length = null();
HXDLIN(  75)			bool fixed = null();
HXDLIN(  75)			this->commands =  ::openfl::_Vector::AbstractVector_obj::__alloc( HX_CTX , ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length,fixed,null()),null());
            		}
HXLINE(  76)		if (hx::IsNull( this->data )) {
HXLINE(  76)			int length1 = null();
HXDLIN(  76)			bool fixed1 = null();
HXDLIN(  76)			this->data =  ::openfl::_Vector::AbstractVector_obj::__alloc( HX_CTX , ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length1,fixed1,null()),null());
            		}
HXLINE(  78)		::openfl::_Vector::IVector_obj::push(this->commands->data,(int)1);
HXLINE(  79)		::openfl::_Vector::IVector_obj::push(this->data->data,x);
HXLINE(  80)		::openfl::_Vector::IVector_obj::push(this->data->data,y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(GraphicsPath_obj,moveTo,(void))

void GraphicsPath_obj::wideLineTo(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_9d2387a0b056a42f_85_wideLineTo)
HXLINE(  87)		if (hx::IsNull( this->commands )) {
HXLINE(  87)			int length = null();
HXDLIN(  87)			bool fixed = null();
HXDLIN(  87)			this->commands =  ::openfl::_Vector::AbstractVector_obj::__alloc( HX_CTX , ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length,fixed,null()),null());
            		}
HXLINE(  88)		if (hx::IsNull( this->data )) {
HXLINE(  88)			int length1 = null();
HXDLIN(  88)			bool fixed1 = null();
HXDLIN(  88)			this->data =  ::openfl::_Vector::AbstractVector_obj::__alloc( HX_CTX , ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length1,fixed1,null()),null());
            		}
HXLINE(  90)		::openfl::_Vector::IVector_obj::push(this->commands->data,(int)2);
HXLINE(  91)		::openfl::_Vector::IVector_obj::push(this->data->data,x);
HXLINE(  92)		::openfl::_Vector::IVector_obj::push(this->data->data,y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(GraphicsPath_obj,wideLineTo,(void))

void GraphicsPath_obj::wideMoveTo(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_9d2387a0b056a42f_97_wideMoveTo)
HXLINE(  99)		if (hx::IsNull( this->commands )) {
HXLINE(  99)			int length = null();
HXDLIN(  99)			bool fixed = null();
HXDLIN(  99)			this->commands =  ::openfl::_Vector::AbstractVector_obj::__alloc( HX_CTX , ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length,fixed,null()),null());
            		}
HXLINE( 100)		if (hx::IsNull( this->data )) {
HXLINE( 100)			int length1 = null();
HXDLIN( 100)			bool fixed1 = null();
HXDLIN( 100)			this->data =  ::openfl::_Vector::AbstractVector_obj::__alloc( HX_CTX , ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length1,fixed1,null()),null());
            		}
HXLINE( 102)		::openfl::_Vector::IVector_obj::push(this->commands->data,(int)1);
HXLINE( 103)		::openfl::_Vector::IVector_obj::push(this->data->data,x);
HXLINE( 104)		::openfl::_Vector::IVector_obj::push(this->data->data,y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(GraphicsPath_obj,wideMoveTo,(void))

void GraphicsPath_obj::_hx___drawCircle(Float x,Float y,Float radius){
            	HX_STACKFRAME(&_hx_pos_9d2387a0b056a42f_111___drawCircle)
HXDLIN( 111)		this->_hx___drawRoundRect((x - radius),(y - radius),(radius * (int)2),(radius * (int)2),(radius * (int)2),(radius * (int)2));
            	}


HX_DEFINE_DYNAMIC_FUNC3(GraphicsPath_obj,_hx___drawCircle,(void))

void GraphicsPath_obj::_hx___drawEllipse(Float x,Float y,Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_9d2387a0b056a42f_118___drawEllipse)
HXDLIN( 118)		this->_hx___drawRoundRect(x,y,width,height,width,height);
            	}


HX_DEFINE_DYNAMIC_FUNC4(GraphicsPath_obj,_hx___drawEllipse,(void))

void GraphicsPath_obj::_hx___drawRect(Float x,Float y,Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_9d2387a0b056a42f_123___drawRect)
HXLINE( 125)		this->moveTo(x,y);
HXLINE( 126)		this->lineTo((x + width),y);
HXLINE( 127)		this->lineTo((x + width),(y + height));
HXLINE( 128)		this->lineTo(x,(y + height));
HXLINE( 129)		this->lineTo(x,y);
            	}


HX_DEFINE_DYNAMIC_FUNC4(GraphicsPath_obj,_hx___drawRect,(void))

void GraphicsPath_obj::_hx___drawRoundRect(Float x,Float y,Float width,Float height,Float ellipseWidth,Float ellipseHeight){
            	HX_STACKFRAME(&_hx_pos_9d2387a0b056a42f_134___drawRoundRect)
HXLINE( 136)		ellipseWidth = (ellipseWidth * ((Float)0.5));
HXLINE( 137)		ellipseHeight = (ellipseHeight * ((Float)0.5));
HXLINE( 139)		if ((ellipseWidth > ((Float)width / (Float)(int)2))) {
HXLINE( 139)			ellipseWidth = ((Float)width / (Float)(int)2);
            		}
HXLINE( 140)		if ((ellipseHeight > ((Float)height / (Float)(int)2))) {
HXLINE( 140)			ellipseHeight = ((Float)height / (Float)(int)2);
            		}
HXLINE( 142)		Float xe = (x + width);
HXDLIN( 142)		Float ye = (y + height);
HXDLIN( 142)		Float cx1 = (-(ellipseWidth) + (ellipseWidth * ::openfl::display::GraphicsPath_obj::SIN45));
HXDLIN( 142)		Float cx2 = (-(ellipseWidth) + (ellipseWidth * ::openfl::display::GraphicsPath_obj::TAN22));
HXDLIN( 142)		Float cy1 = (-(ellipseHeight) + (ellipseHeight * ::openfl::display::GraphicsPath_obj::SIN45));
HXDLIN( 142)		Float cy2 = (-(ellipseHeight) + (ellipseHeight * ::openfl::display::GraphicsPath_obj::TAN22));
HXLINE( 149)		this->moveTo(xe,(ye - ellipseHeight));
HXLINE( 150)		this->curveTo(xe,(ye + cy2),(xe + cx1),(ye + cy1));
HXLINE( 151)		this->curveTo((xe + cx2),ye,(xe - ellipseWidth),ye);
HXLINE( 152)		this->lineTo((x + ellipseWidth),ye);
HXLINE( 153)		this->curveTo((x - cx2),ye,(x - cx1),(ye + cy1));
HXLINE( 154)		this->curveTo(x,(ye + cy2),x,(ye - ellipseHeight));
HXLINE( 155)		this->lineTo(x,(y + ellipseHeight));
HXLINE( 156)		this->curveTo(x,(y - cy2),(x - cx1),(y - cy1));
HXLINE( 157)		this->curveTo((x - cx2),y,(x + ellipseWidth),y);
HXLINE( 158)		this->lineTo((xe - ellipseWidth),y);
HXLINE( 159)		this->curveTo((xe + cx2),y,(xe + cx1),(y - cy1));
HXLINE( 160)		this->curveTo(xe,(y - cy2),xe,(y + ellipseHeight));
HXLINE( 161)		this->lineTo(xe,(ye - ellipseHeight));
            	}


HX_DEFINE_DYNAMIC_FUNC6(GraphicsPath_obj,_hx___drawRoundRect,(void))

Float GraphicsPath_obj::SIN45;

Float GraphicsPath_obj::TAN22;


hx::ObjectPtr< GraphicsPath_obj > GraphicsPath_obj::__new( ::openfl::_Vector::AbstractVector commands, ::openfl::_Vector::AbstractVector data, ::Dynamic __o_winding) {
	hx::ObjectPtr< GraphicsPath_obj > __this = new GraphicsPath_obj();
	__this->__construct(commands,data,__o_winding);
	return __this;
}

hx::ObjectPtr< GraphicsPath_obj > GraphicsPath_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::_Vector::AbstractVector commands, ::openfl::_Vector::AbstractVector data, ::Dynamic __o_winding) {
	GraphicsPath_obj *__this = (GraphicsPath_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GraphicsPath_obj), true, "openfl.display.GraphicsPath"));
	*(void **)__this = GraphicsPath_obj::_hx_vtable;
	__this->__construct(commands,data,__o_winding);
	return __this;
}

GraphicsPath_obj::GraphicsPath_obj()
{
}

void GraphicsPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GraphicsPath);
	HX_MARK_MEMBER_NAME(commands,"commands");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(winding,"winding");
	HX_MARK_MEMBER_NAME(_hx___graphicsDataType,"__graphicsDataType");
	HX_MARK_END_CLASS();
}

void GraphicsPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(commands,"commands");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(winding,"winding");
	HX_VISIT_MEMBER_NAME(_hx___graphicsDataType,"__graphicsDataType");
}

hx::Val GraphicsPath_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return hx::Val( data ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lineTo") ) { return hx::Val( lineTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return hx::Val( moveTo_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"winding") ) { return hx::Val( winding ); }
		if (HX_FIELD_EQ(inName,"curveTo") ) { return hx::Val( curveTo_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { return hx::Val( commands ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wideLineTo") ) { return hx::Val( wideLineTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"wideMoveTo") ) { return hx::Val( wideMoveTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"__drawRect") ) { return hx::Val( _hx___drawRect_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cubicCurveTo") ) { return hx::Val( cubicCurveTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"__drawCircle") ) { return hx::Val( _hx___drawCircle_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__drawEllipse") ) { return hx::Val( _hx___drawEllipse_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__drawRoundRect") ) { return hx::Val( _hx___drawRoundRect_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { return hx::Val( _hx___graphicsDataType ); }
	}
	return super::__Field(inName,inCallProp);
}

bool GraphicsPath_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { outValue = ( SIN45 ); return true; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { outValue = ( TAN22 ); return true; }
	}
	return false;
}

hx::Val GraphicsPath_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::openfl::_Vector::AbstractVector >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"winding") ) { winding=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { commands=inValue.Cast<  ::openfl::_Vector::AbstractVector >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { _hx___graphicsDataType=inValue.Cast<  ::openfl::display::GraphicsDataType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GraphicsPath_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { SIN45=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { TAN22=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

void GraphicsPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("winding","\x1a","\x49","\x70","\xe8"));
	outFields->push(HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GraphicsPath_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_Vector::AbstractVector*/ ,(int)offsetof(GraphicsPath_obj,commands),HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe")},
	{hx::fsObject /*::openfl::_Vector::AbstractVector*/ ,(int)offsetof(GraphicsPath_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GraphicsPath_obj,winding),HX_HCSTRING("winding","\x1a","\x49","\x70","\xe8")},
	{hx::fsObject /*::openfl::display::GraphicsDataType*/ ,(int)offsetof(GraphicsPath_obj,_hx___graphicsDataType),HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo GraphicsPath_obj_sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &GraphicsPath_obj::SIN45,HX_HCSTRING("SIN45","\x79","\x16","\xbe","\xfa")},
	{hx::fsFloat,(void *) &GraphicsPath_obj::TAN22,HX_HCSTRING("TAN22","\x41","\xf4","\xda","\x88")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String GraphicsPath_obj_sMemberFields[] = {
	HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("winding","\x1a","\x49","\x70","\xe8"),
	HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46"),
	HX_HCSTRING("cubicCurveTo","\xe0","\x07","\x90","\x2e"),
	HX_HCSTRING("curveTo","\x0a","\x60","\x88","\xce"),
	HX_HCSTRING("lineTo","\x8f","\x46","\xa0","\xec"),
	HX_HCSTRING("moveTo","\xec","\xd2","\xac","\xcc"),
	HX_HCSTRING("wideLineTo","\x02","\xf3","\x82","\xc8"),
	HX_HCSTRING("wideMoveTo","\x5f","\x7f","\x8f","\xa8"),
	HX_HCSTRING("__drawCircle","\x54","\x68","\x64","\xd0"),
	HX_HCSTRING("__drawEllipse","\x1a","\xc6","\x46","\x9d"),
	HX_HCSTRING("__drawRect","\x68","\x6a","\x49","\x03"),
	HX_HCSTRING("__drawRoundRect","\xce","\xfc","\x5c","\x6a"),
	::String(null()) };

static void GraphicsPath_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsPath_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GraphicsPath_obj::SIN45,"SIN45");
	HX_MARK_MEMBER_NAME(GraphicsPath_obj::TAN22,"TAN22");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicsPath_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsPath_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicsPath_obj::SIN45,"SIN45");
	HX_VISIT_MEMBER_NAME(GraphicsPath_obj::TAN22,"TAN22");
};

#endif

hx::Class GraphicsPath_obj::__mClass;

static ::String GraphicsPath_obj_sStaticFields[] = {
	HX_HCSTRING("SIN45","\x79","\x16","\xbe","\xfa"),
	HX_HCSTRING("TAN22","\x41","\xf4","\xda","\x88"),
	::String(null())
};

void GraphicsPath_obj::__register()
{
	hx::Object *dummy = new GraphicsPath_obj;
	GraphicsPath_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.GraphicsPath","\x7a","\xb7","\x47","\x96");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicsPath_obj::__GetStatic;
	__mClass->mSetStaticField = &GraphicsPath_obj::__SetStatic;
	__mClass->mMarkFunc = GraphicsPath_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GraphicsPath_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GraphicsPath_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GraphicsPath_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicsPath_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicsPath_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicsPath_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GraphicsPath_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_9d2387a0b056a42f_11_boot)
HXDLIN(  11)		SIN45 = ((Float)0.70710678118654752440084436210485);
            	}
{
            	HX_STACKFRAME(&_hx_pos_9d2387a0b056a42f_12_boot)
HXDLIN(  12)		TAN22 = ((Float)0.4142135623730950488016887242097);
            	}
}

} // end namespace openfl
} // end namespace display
