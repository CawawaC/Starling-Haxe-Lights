// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__Vector_AbstractVector
#include <openfl/_Vector/AbstractVector.h>
#endif
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_starling_core_Starling
#include <starling/core/Starling.h>
#endif
#ifndef INCLUDED_starling_errors_MissingContextError
#include <starling/errors/MissingContextError.h>
#endif
#ifndef INCLUDED_starling_events_EventDispatcher
#include <starling/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_starling_rendering_Effect
#include <starling/rendering/Effect.h>
#endif
#ifndef INCLUDED_starling_rendering_IndexData
#include <starling/rendering/IndexData.h>
#endif
#ifndef INCLUDED_starling_rendering_Painter
#include <starling/rendering/Painter.h>
#endif
#ifndef INCLUDED_starling_rendering_Program
#include <starling/rendering/Program.h>
#endif
#ifndef INCLUDED_starling_rendering_VertexData
#include <starling/rendering/VertexData.h>
#endif
#ifndef INCLUDED_starling_rendering_VertexDataFormat
#include <starling/rendering/VertexDataFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a5d3fa06c66f0999_119_new,"starling.rendering.Effect","new",0x3547ab6b,"starling.rendering.Effect.new","starling/rendering/Effect.hx",119,0x6e1906e3)
HX_LOCAL_STACK_FRAME(_hx_pos_a5d3fa06c66f0999_130_dispose,"starling.rendering.Effect","dispose",0xfc323d2a,"starling.rendering.Effect.dispose","starling/rendering/Effect.hx",130,0x6e1906e3)
HX_LOCAL_STACK_FRAME(_hx_pos_a5d3fa06c66f0999_136_onContextCreated,"starling.rendering.Effect","onContextCreated",0xd3f15b4d,"starling.rendering.Effect.onContextCreated","starling/rendering/Effect.hx",136,0x6e1906e3)
HX_LOCAL_STACK_FRAME(_hx_pos_a5d3fa06c66f0999_144_purgeBuffers,"starling.rendering.Effect","purgeBuffers",0x45e6581d,"starling.rendering.Effect.purgeBuffers","starling/rendering/Effect.hx",144,0x6e1906e3)
HX_LOCAL_STACK_FRAME(_hx_pos_a5d3fa06c66f0999_171_uploadIndexData,"starling.rendering.Effect","uploadIndexData",0xc3c11ba6,"starling.rendering.Effect.uploadIndexData","starling/rendering/Effect.hx",171,0x6e1906e3)
HX_LOCAL_STACK_FRAME(_hx_pos_a5d3fa06c66f0999_207_uploadVertexData,"starling.rendering.Effect","uploadVertexData",0xb3db7324,"starling.rendering.Effect.uploadVertexData","starling/rendering/Effect.hx",207,0x6e1906e3)
HX_LOCAL_STACK_FRAME(_hx_pos_a5d3fa06c66f0999_228_render,"starling.rendering.Effect","render",0xf315c92b,"starling.rendering.Effect.render","starling/rendering/Effect.hx",228,0x6e1906e3)
HX_LOCAL_STACK_FRAME(_hx_pos_a5d3fa06c66f0999_250_beforeDraw,"starling.rendering.Effect","beforeDraw",0xcd51c478,"starling.rendering.Effect.beforeDraw","starling/rendering/Effect.hx",250,0x6e1906e3)
HX_LOCAL_STACK_FRAME(_hx_pos_a5d3fa06c66f0999_261_afterDraw,"starling.rendering.Effect","afterDraw",0x5585318b,"starling.rendering.Effect.afterDraw","starling/rendering/Effect.hx",261,0x6e1906e3)
HX_LOCAL_STACK_FRAME(_hx_pos_a5d3fa06c66f0999_274_createProgram,"starling.rendering.Effect","createProgram",0xae3e59b3,"starling.rendering.Effect.createProgram","starling/rendering/Effect.hx",274,0x6e1906e3)
static const ::String _hx_array_data_6cc519f9_10[] = {
	HX_("m44 op, va0, vc0",52,e9,51,5f),HX_("sge v0, va0, va0",09,d6,61,90),
};
HX_LOCAL_STACK_FRAME(_hx_pos_a5d3fa06c66f0999_295_get_programVariantName,"starling.rendering.Effect","get_programVariantName",0x780caa6a,"starling.rendering.Effect.get_programVariantName","starling/rendering/Effect.hx",295,0x6e1906e3)
HX_LOCAL_STACK_FRAME(_hx_pos_a5d3fa06c66f0999_302_get_programBaseName,"starling.rendering.Effect","get_programBaseName",0xc3eb3dc2,"starling.rendering.Effect.get_programBaseName","starling/rendering/Effect.hx",302,0x6e1906e3)
HX_LOCAL_STACK_FRAME(_hx_pos_a5d3fa06c66f0999_303_set_programBaseName,"starling.rendering.Effect","set_programBaseName",0x008830ce,"starling.rendering.Effect.set_programBaseName","starling/rendering/Effect.hx",303,0x6e1906e3)
HX_LOCAL_STACK_FRAME(_hx_pos_a5d3fa06c66f0999_314_get_programName,"starling.rendering.Effect","get_programName",0x811af211,"starling.rendering.Effect.get_programName","starling/rendering/Effect.hx",314,0x6e1906e3)
HX_LOCAL_STACK_FRAME(_hx_pos_a5d3fa06c66f0999_343_get_program,"starling.rendering.Effect","get_program",0xef1a08a6,"starling.rendering.Effect.get_program","starling/rendering/Effect.hx",343,0x6e1906e3)
HX_LOCAL_STACK_FRAME(_hx_pos_a5d3fa06c66f0999_363_get_onRestore,"starling.rendering.Effect","get_onRestore",0xd5c12a91,"starling.rendering.Effect.get_onRestore","starling/rendering/Effect.hx",363,0x6e1906e3)
HX_LOCAL_STACK_FRAME(_hx_pos_a5d3fa06c66f0999_364_set_onRestore,"starling.rendering.Effect","set_onRestore",0x1ac70c9d,"starling.rendering.Effect.set_onRestore","starling/rendering/Effect.hx",364,0x6e1906e3)
HX_LOCAL_STACK_FRAME(_hx_pos_a5d3fa06c66f0999_369_get_vertexFormat,"starling.rendering.Effect","get_vertexFormat",0xb5344859,"starling.rendering.Effect.get_vertexFormat","starling/rendering/Effect.hx",369,0x6e1906e3)
HX_LOCAL_STACK_FRAME(_hx_pos_a5d3fa06c66f0999_373_get_mvpMatrix3D,"starling.rendering.Effect","get_mvpMatrix3D",0xcc41445b,"starling.rendering.Effect.get_mvpMatrix3D","starling/rendering/Effect.hx",373,0x6e1906e3)
HX_LOCAL_STACK_FRAME(_hx_pos_a5d3fa06c66f0999_374_set_mvpMatrix3D,"starling.rendering.Effect","set_mvpMatrix3D",0xc80cc167,"starling.rendering.Effect.set_mvpMatrix3D","starling/rendering/Effect.hx",374,0x6e1906e3)
HX_LOCAL_STACK_FRAME(_hx_pos_a5d3fa06c66f0999_378_get_indexBuffer,"starling.rendering.Effect","get_indexBuffer",0xb69ddcd4,"starling.rendering.Effect.get_indexBuffer","starling/rendering/Effect.hx",378,0x6e1906e3)
HX_LOCAL_STACK_FRAME(_hx_pos_a5d3fa06c66f0999_382_get_indexBufferSize,"starling.rendering.Effect","get_indexBufferSize",0x38dba3b5,"starling.rendering.Effect.get_indexBufferSize","starling/rendering/Effect.hx",382,0x6e1906e3)
HX_LOCAL_STACK_FRAME(_hx_pos_a5d3fa06c66f0999_386_get_vertexBuffer,"starling.rendering.Effect","get_vertexBuffer",0x883a7622,"starling.rendering.Effect.get_vertexBuffer","starling/rendering/Effect.hx",386,0x6e1906e3)
HX_LOCAL_STACK_FRAME(_hx_pos_a5d3fa06c66f0999_390_get_vertexBufferSize,"starling.rendering.Effect","get_vertexBufferSize",0x4079fc03,"starling.rendering.Effect.get_vertexBufferSize","starling/rendering/Effect.hx",390,0x6e1906e3)
HX_LOCAL_STACK_FRAME(_hx_pos_a5d3fa06c66f0999_102_boot,"starling.rendering.Effect","boot",0x618752c7,"starling.rendering.Effect.boot","starling/rendering/Effect.hx",102,0x6e1906e3)
HX_LOCAL_STACK_FRAME(_hx_pos_a5d3fa06c66f0999_115_boot,"starling.rendering.Effect","boot",0x618752c7,"starling.rendering.Effect.boot","starling/rendering/Effect.hx",115,0x6e1906e3)
namespace starling{
namespace rendering{

void Effect_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_a5d3fa06c66f0999_119_new)
HXLINE( 120)		this->_mvpMatrix3D =  ::openfl::geom::Matrix3D_obj::__alloc( HX_CTX ,null());
HXLINE( 121)		this->_programBaseName = ::Type_obj::getClassName(::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this)));
HXLINE( 124)		::starling::core::Starling_obj::get_current()->get_stage3D()->addEventListener(HX_("context3DCreate",7c,bf,59,7b),this->onContextCreated_dyn(),false,(int)20,true);
            	}

Dynamic Effect_obj::__CreateEmpty() { return new Effect_obj; }

void *Effect_obj::_hx_vtable = 0;

Dynamic Effect_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Effect_obj > _hx_result = new Effect_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Effect_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2a6d1e35;
}

void Effect_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_a5d3fa06c66f0999_130_dispose)
HXLINE( 131)		::starling::core::Starling_obj::get_current()->get_stage3D()->removeEventListener(HX_("context3DCreate",7c,bf,59,7b),this->onContextCreated_dyn(),null());
HXLINE( 132)		this->purgeBuffers(null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Effect_obj,dispose,(void))

void Effect_obj::onContextCreated( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_a5d3fa06c66f0999_136_onContextCreated)
HXLINE( 137)		this->purgeBuffers(null(),null());
HXLINE( 138)		if (hx::IsNotNull( this->_onRestore )) {
HXLINE( 139)			this->_onRestore(hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Effect_obj,onContextCreated,(void))

void Effect_obj::purgeBuffers(hx::Null< bool >  __o_vertexBuffer,hx::Null< bool >  __o_indexBuffer){
bool vertexBuffer = __o_vertexBuffer.Default(true);
bool indexBuffer = __o_indexBuffer.Default(true);
            	HX_STACKFRAME(&_hx_pos_a5d3fa06c66f0999_144_purgeBuffers)
HXLINE( 148)		bool _hx_tmp;
HXDLIN( 148)		if (hx::IsNotNull( this->_vertexBuffer )) {
HXLINE( 148)			_hx_tmp = vertexBuffer;
            		}
            		else {
HXLINE( 148)			_hx_tmp = false;
            		}
HXDLIN( 148)		if (_hx_tmp) {
HXLINE( 150)			try {
            				HX_STACK_CATCHABLE( ::openfl::errors::Error, 0);
HXLINE( 150)				this->_vertexBuffer->dispose();
            			}
            			catch( ::Dynamic _hx_e){
            				if (_hx_e.IsClass<  ::openfl::errors::Error >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::openfl::errors::Error e = _hx_e;
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE( 151)			this->_vertexBuffer = null();
            		}
HXLINE( 154)		bool _hx_tmp1;
HXDLIN( 154)		if (hx::IsNotNull( this->_indexBuffer )) {
HXLINE( 154)			_hx_tmp1 = indexBuffer;
            		}
            		else {
HXLINE( 154)			_hx_tmp1 = false;
            		}
HXDLIN( 154)		if (_hx_tmp1) {
HXLINE( 156)			try {
            				HX_STACK_CATCHABLE( ::openfl::errors::Error, 0);
HXLINE( 156)				this->_indexBuffer->dispose();
            			}
            			catch( ::Dynamic _hx_e){
            				if (_hx_e.IsClass<  ::openfl::errors::Error >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::openfl::errors::Error e1 = _hx_e;
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE( 157)			this->_indexBuffer = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Effect_obj,purgeBuffers,(void))

void Effect_obj::uploadIndexData( ::starling::rendering::IndexData indexData,::String __o_bufferUsage){
::String bufferUsage = __o_bufferUsage.Default(HX_HCSTRING("staticDraw","\xd2","\x23","\x1c","\xa4"));
            	HX_STACKFRAME(&_hx_pos_a5d3fa06c66f0999_171_uploadIndexData)
HXLINE( 172)		int numIndices = indexData->get_numIndices();
HXLINE( 173)		bool isQuadLayout = indexData->get_useQuadLayout();
HXLINE( 174)		bool wasQuadLayout = this->_indexBufferUsesQuadLayout;
HXLINE( 176)		if (hx::IsNotNull( this->_indexBuffer )) {
HXLINE( 178)			if ((numIndices <= this->_indexBufferSize)) {
HXLINE( 180)				bool _hx_tmp;
HXDLIN( 180)				if (!(!(isQuadLayout))) {
HXLINE( 180)					_hx_tmp = !(wasQuadLayout);
            				}
            				else {
HXLINE( 180)					_hx_tmp = true;
            				}
HXDLIN( 180)				if (_hx_tmp) {
HXLINE( 182)					indexData->uploadToIndexBuffer(this->_indexBuffer,null(),null());
HXLINE( 183)					bool _hx_tmp1;
HXDLIN( 183)					if (isQuadLayout) {
HXLINE( 183)						_hx_tmp1 = (numIndices == this->_indexBufferSize);
            					}
            					else {
HXLINE( 183)						_hx_tmp1 = false;
            					}
HXDLIN( 183)					this->_indexBufferUsesQuadLayout = _hx_tmp1;
            				}
            			}
            			else {
HXLINE( 187)				this->purgeBuffers(false,true);
            			}
            		}
HXLINE( 189)		if (hx::IsNull( this->_indexBuffer )) {
HXLINE( 191)			this->_indexBuffer = indexData->createIndexBuffer(true,bufferUsage);
HXLINE( 192)			this->_indexBufferSize = numIndices;
HXLINE( 193)			this->_indexBufferUsesQuadLayout = isQuadLayout;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Effect_obj,uploadIndexData,(void))

void Effect_obj::uploadVertexData( ::starling::rendering::VertexData vertexData,::String __o_bufferUsage){
::String bufferUsage = __o_bufferUsage.Default(HX_HCSTRING("staticDraw","\xd2","\x23","\x1c","\xa4"));
            	HX_STACKFRAME(&_hx_pos_a5d3fa06c66f0999_207_uploadVertexData)
HXLINE( 208)		if (hx::IsNotNull( this->_vertexBuffer )) {
HXLINE( 210)			int _hx_tmp = vertexData->get_size();
HXDLIN( 210)			if ((_hx_tmp <= this->_vertexBufferSize)) {
HXLINE( 211)				vertexData->uploadToVertexBuffer(this->_vertexBuffer,null(),null());
            			}
            			else {
HXLINE( 213)				this->purgeBuffers(true,false);
            			}
            		}
HXLINE( 215)		if (hx::IsNull( this->_vertexBuffer )) {
HXLINE( 217)			this->_vertexBuffer = vertexData->createVertexBuffer(true,bufferUsage);
HXLINE( 218)			this->_vertexBufferSize = vertexData->get_size();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Effect_obj,uploadVertexData,(void))

void Effect_obj::render(hx::Null< int >  __o_firstIndex,hx::Null< int >  __o_numTriangles){
int firstIndex = __o_firstIndex.Default(0);
int numTriangles = __o_numTriangles.Default(-1);
            	HX_GC_STACKFRAME(&_hx_pos_a5d3fa06c66f0999_228_render)
HXLINE( 229)		if ((numTriangles < (int)0)) {
HXLINE( 229)			numTriangles = ::Std_obj::_hx_int(((Float)this->_indexBufferSize / (Float)(int)3));
            		}
HXLINE( 230)		if ((numTriangles == (int)0)) {
HXLINE( 230)			return;
            		}
HXLINE( 232)		 ::openfl::display3D::Context3D context = ::starling::core::Starling_obj::get_current()->get_context();
HXLINE( 233)		if (hx::IsNull( context )) {
HXLINE( 233)			HX_STACK_DO_THROW( ::starling::errors::MissingContextError_obj::__alloc( HX_CTX ,null(),null()));
            		}
HXLINE( 235)		this->beforeDraw(context);
HXLINE( 236)		context->drawTriangles(this->get_indexBuffer(),firstIndex,numTriangles);
HXLINE( 237)		this->afterDraw(context);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Effect_obj,render,(void))

void Effect_obj::beforeDraw( ::openfl::display3D::Context3D context){
            	HX_STACKFRAME(&_hx_pos_a5d3fa06c66f0999_250_beforeDraw)
HXLINE( 251)		this->get_program()->activate(context);
HXLINE( 252)		 ::starling::rendering::VertexDataFormat _hx_tmp = this->get_vertexFormat();
HXDLIN( 252)		_hx_tmp->setVertexBufferAt((int)0,this->get_vertexBuffer(),HX_("position",a9,a0,fa,ca));
HXLINE( 253)		context->setProgramConstantsFromMatrix((int)1,(int)0,this->get_mvpMatrix3D(),true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Effect_obj,beforeDraw,(void))

void Effect_obj::afterDraw( ::openfl::display3D::Context3D context){
            	HX_STACKFRAME(&_hx_pos_a5d3fa06c66f0999_261_afterDraw)
HXDLIN( 261)		context->setVertexBufferAt((int)0,null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Effect_obj,afterDraw,(void))

 ::starling::rendering::Program Effect_obj::createProgram(){
            	HX_STACKFRAME(&_hx_pos_a5d3fa06c66f0999_274_createProgram)
HXLINE( 275)		::String vertexShader = ::Array_obj< ::String >::fromData( _hx_array_data_6cc519f9_10,2)->join(HX_("\n",0a,00,00,00));
HXLINE( 280)		::String fragmentShader = HX_("mov oc, v0",4e,91,c7,65);
HXLINE( 283)		return ::starling::rendering::Program_obj::fromSource(vertexShader,fragmentShader,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Effect_obj,createProgram,return )

int Effect_obj::get_programVariantName(){
            	HX_STACKFRAME(&_hx_pos_a5d3fa06c66f0999_295_get_programVariantName)
HXDLIN( 295)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Effect_obj,get_programVariantName,return )

::String Effect_obj::get_programBaseName(){
            	HX_STACKFRAME(&_hx_pos_a5d3fa06c66f0999_302_get_programBaseName)
HXDLIN( 302)		return this->_programBaseName;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Effect_obj,get_programBaseName,return )

::String Effect_obj::set_programBaseName(::String value){
            	HX_STACKFRAME(&_hx_pos_a5d3fa06c66f0999_303_set_programBaseName)
HXDLIN( 303)		return (this->_programBaseName = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Effect_obj,set_programBaseName,return )

::String Effect_obj::get_programName(){
            	HX_GC_STACKFRAME(&_hx_pos_a5d3fa06c66f0999_314_get_programName)
HXLINE( 315)		::String baseName = this->get_programBaseName();
HXLINE( 316)		int variantName = this->get_programVariantName();
HXLINE( 317)		 ::haxe::ds::IntMap nameCache = ::starling::rendering::Effect_obj::sProgramNameCache->get(baseName).StaticCast<  ::haxe::ds::IntMap >();
HXLINE( 319)		if (hx::IsNull( nameCache )) {
HXLINE( 321)			nameCache =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 322)			::starling::rendering::Effect_obj::sProgramNameCache->set(baseName,nameCache);
            		}
HXLINE( 325)		::String name = ( (::String)(nameCache->get(variantName)) );
HXLINE( 327)		if (hx::IsNull( name )) {
HXLINE( 329)			if ((variantName != (int)0)) {
HXLINE( 329)				name = ((baseName + HX_("#",23,00,00,00)) + ::StringTools_obj::hex(variantName,null()));
            			}
            			else {
HXLINE( 330)				name = baseName;
            			}
HXLINE( 332)			nameCache->set(variantName,name);
            		}
HXLINE( 335)		return name;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Effect_obj,get_programName,return )

 ::starling::rendering::Program Effect_obj::get_program(){
            	HX_STACKFRAME(&_hx_pos_a5d3fa06c66f0999_343_get_program)
HXLINE( 344)		::String name = this->get_programName();
HXLINE( 345)		 ::starling::rendering::Painter painter = ::starling::core::Starling_obj::get_current()->get_painter();
HXLINE( 346)		 ::starling::rendering::Program program = painter->getProgram(name);
HXLINE( 348)		if (hx::IsNull( program )) {
HXLINE( 350)			program = this->createProgram();
HXLINE( 351)			painter->registerProgram(name,program);
            		}
HXLINE( 354)		return program;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Effect_obj,get_program,return )

 ::Dynamic Effect_obj::get_onRestore(){
            	HX_STACKFRAME(&_hx_pos_a5d3fa06c66f0999_363_get_onRestore)
HXDLIN( 363)		return this->_onRestore;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Effect_obj,get_onRestore,return )

 ::Dynamic Effect_obj::set_onRestore( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_a5d3fa06c66f0999_364_set_onRestore)
HXDLIN( 364)		return (this->_onRestore = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Effect_obj,set_onRestore,return )

 ::starling::rendering::VertexDataFormat Effect_obj::get_vertexFormat(){
            	HX_STACKFRAME(&_hx_pos_a5d3fa06c66f0999_369_get_vertexFormat)
HXDLIN( 369)		return ::starling::rendering::Effect_obj::VERTEX_FORMAT;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Effect_obj,get_vertexFormat,return )

 ::openfl::geom::Matrix3D Effect_obj::get_mvpMatrix3D(){
            	HX_STACKFRAME(&_hx_pos_a5d3fa06c66f0999_373_get_mvpMatrix3D)
HXDLIN( 373)		return this->_mvpMatrix3D;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Effect_obj,get_mvpMatrix3D,return )

 ::openfl::geom::Matrix3D Effect_obj::set_mvpMatrix3D( ::openfl::geom::Matrix3D value){
            	HX_STACKFRAME(&_hx_pos_a5d3fa06c66f0999_374_set_mvpMatrix3D)
HXDLIN( 374)		this->_mvpMatrix3D->copyFrom(value);
HXDLIN( 374)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Effect_obj,set_mvpMatrix3D,return )

 ::openfl::display3D::IndexBuffer3D Effect_obj::get_indexBuffer(){
            	HX_STACKFRAME(&_hx_pos_a5d3fa06c66f0999_378_get_indexBuffer)
HXDLIN( 378)		return this->_indexBuffer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Effect_obj,get_indexBuffer,return )

int Effect_obj::get_indexBufferSize(){
            	HX_STACKFRAME(&_hx_pos_a5d3fa06c66f0999_382_get_indexBufferSize)
HXDLIN( 382)		return this->_indexBufferSize;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Effect_obj,get_indexBufferSize,return )

 ::openfl::display3D::VertexBuffer3D Effect_obj::get_vertexBuffer(){
            	HX_STACKFRAME(&_hx_pos_a5d3fa06c66f0999_386_get_vertexBuffer)
HXDLIN( 386)		return this->_vertexBuffer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Effect_obj,get_vertexBuffer,return )

int Effect_obj::get_vertexBufferSize(){
            	HX_STACKFRAME(&_hx_pos_a5d3fa06c66f0999_390_get_vertexBufferSize)
HXDLIN( 390)		return this->_vertexBufferSize;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Effect_obj,get_vertexBufferSize,return )

 ::starling::rendering::VertexDataFormat Effect_obj::VERTEX_FORMAT;

 ::haxe::ds::StringMap Effect_obj::sProgramNameCache;


hx::ObjectPtr< Effect_obj > Effect_obj::__new() {
	hx::ObjectPtr< Effect_obj > __this = new Effect_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Effect_obj > Effect_obj::__alloc(hx::Ctx *_hx_ctx) {
	Effect_obj *__this = (Effect_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Effect_obj), true, "starling.rendering.Effect"));
	*(void **)__this = Effect_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Effect_obj::Effect_obj()
{
}

void Effect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Effect);
	HX_MARK_MEMBER_NAME(_vertexBuffer,"_vertexBuffer");
	HX_MARK_MEMBER_NAME(_vertexBufferSize,"_vertexBufferSize");
	HX_MARK_MEMBER_NAME(_indexBuffer,"_indexBuffer");
	HX_MARK_MEMBER_NAME(_indexBufferSize,"_indexBufferSize");
	HX_MARK_MEMBER_NAME(_indexBufferUsesQuadLayout,"_indexBufferUsesQuadLayout");
	HX_MARK_MEMBER_NAME(_mvpMatrix3D,"_mvpMatrix3D");
	HX_MARK_MEMBER_NAME(_onRestore,"_onRestore");
	HX_MARK_MEMBER_NAME(_programBaseName,"_programBaseName");
	HX_MARK_END_CLASS();
}

void Effect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_vertexBuffer,"_vertexBuffer");
	HX_VISIT_MEMBER_NAME(_vertexBufferSize,"_vertexBufferSize");
	HX_VISIT_MEMBER_NAME(_indexBuffer,"_indexBuffer");
	HX_VISIT_MEMBER_NAME(_indexBufferSize,"_indexBufferSize");
	HX_VISIT_MEMBER_NAME(_indexBufferUsesQuadLayout,"_indexBufferUsesQuadLayout");
	HX_VISIT_MEMBER_NAME(_mvpMatrix3D,"_mvpMatrix3D");
	HX_VISIT_MEMBER_NAME(_onRestore,"_onRestore");
	HX_VISIT_MEMBER_NAME(_programBaseName,"_programBaseName");
}

hx::Val Effect_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"program") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_program() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"afterDraw") ) { return hx::Val( afterDraw_dyn() ); }
		if (HX_FIELD_EQ(inName,"onRestore") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_onRestore() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_onRestore") ) { return hx::Val( _onRestore ); }
		if (HX_FIELD_EQ(inName,"beforeDraw") ) { return hx::Val( beforeDraw_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programName") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_programName() ); }
		if (HX_FIELD_EQ(inName,"get_program") ) { return hx::Val( get_program_dyn() ); }
		if (HX_FIELD_EQ(inName,"mvpMatrix3D") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_mvpMatrix3D() ); }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_indexBuffer() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_indexBuffer") ) { return hx::Val( _indexBuffer ); }
		if (HX_FIELD_EQ(inName,"_mvpMatrix3D") ) { return hx::Val( _mvpMatrix3D ); }
		if (HX_FIELD_EQ(inName,"purgeBuffers") ) { return hx::Val( purgeBuffers_dyn() ); }
		if (HX_FIELD_EQ(inName,"vertexFormat") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_vertexFormat() ); }
		if (HX_FIELD_EQ(inName,"vertexBuffer") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_vertexBuffer() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_vertexBuffer") ) { return hx::Val( _vertexBuffer ); }
		if (HX_FIELD_EQ(inName,"createProgram") ) { return hx::Val( createProgram_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_onRestore") ) { return hx::Val( get_onRestore_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_onRestore") ) { return hx::Val( set_onRestore_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"uploadIndexData") ) { return hx::Val( uploadIndexData_dyn() ); }
		if (HX_FIELD_EQ(inName,"programBaseName") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_programBaseName() ); }
		if (HX_FIELD_EQ(inName,"get_programName") ) { return hx::Val( get_programName_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_mvpMatrix3D") ) { return hx::Val( get_mvpMatrix3D_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_mvpMatrix3D") ) { return hx::Val( set_mvpMatrix3D_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_indexBuffer") ) { return hx::Val( get_indexBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"indexBufferSize") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_indexBufferSize() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_indexBufferSize") ) { return hx::Val( _indexBufferSize ); }
		if (HX_FIELD_EQ(inName,"_programBaseName") ) { return hx::Val( _programBaseName ); }
		if (HX_FIELD_EQ(inName,"onContextCreated") ) { return hx::Val( onContextCreated_dyn() ); }
		if (HX_FIELD_EQ(inName,"uploadVertexData") ) { return hx::Val( uploadVertexData_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vertexFormat") ) { return hx::Val( get_vertexFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vertexBuffer") ) { return hx::Val( get_vertexBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"vertexBufferSize") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_vertexBufferSize() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_vertexBufferSize") ) { return hx::Val( _vertexBufferSize ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"programVariantName") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_programVariantName() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_programBaseName") ) { return hx::Val( get_programBaseName_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_programBaseName") ) { return hx::Val( set_programBaseName_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_indexBufferSize") ) { return hx::Val( get_indexBufferSize_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_vertexBufferSize") ) { return hx::Val( get_vertexBufferSize_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_programVariantName") ) { return hx::Val( get_programVariantName_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_indexBufferUsesQuadLayout") ) { return hx::Val( _indexBufferUsesQuadLayout ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Effect_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"VERTEX_FORMAT") ) { outValue = ( VERTEX_FORMAT ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"sProgramNameCache") ) { outValue = ( sProgramNameCache ); return true; }
	}
	return false;
}

hx::Val Effect_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"onRestore") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_onRestore(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_onRestore") ) { _onRestore=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mvpMatrix3D") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_mvpMatrix3D(inValue.Cast<  ::openfl::geom::Matrix3D >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_indexBuffer") ) { _indexBuffer=inValue.Cast<  ::openfl::display3D::IndexBuffer3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mvpMatrix3D") ) { _mvpMatrix3D=inValue.Cast<  ::openfl::geom::Matrix3D >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_vertexBuffer") ) { _vertexBuffer=inValue.Cast<  ::openfl::display3D::VertexBuffer3D >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"programBaseName") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_programBaseName(inValue.Cast< ::String >()) ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_indexBufferSize") ) { _indexBufferSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_programBaseName") ) { _programBaseName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_vertexBufferSize") ) { _vertexBufferSize=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_indexBufferUsesQuadLayout") ) { _indexBufferUsesQuadLayout=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Effect_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"VERTEX_FORMAT") ) { VERTEX_FORMAT=ioValue.Cast<  ::starling::rendering::VertexDataFormat >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"sProgramNameCache") ) { sProgramNameCache=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void Effect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_vertexBuffer","\x63","\x42","\x18","\x53"));
	outFields->push(HX_HCSTRING("_vertexBufferSize","\xc4","\x7c","\x39","\x69"));
	outFields->push(HX_HCSTRING("_indexBuffer","\xb3","\x13","\xb0","\x5b"));
	outFields->push(HX_HCSTRING("_indexBufferSize","\x14","\x36","\x9c","\xd8"));
	outFields->push(HX_HCSTRING("_indexBufferUsesQuadLayout","\x50","\x33","\xa3","\xcd"));
	outFields->push(HX_HCSTRING("_mvpMatrix3D","\x3a","\x7b","\x53","\x71"));
	outFields->push(HX_HCSTRING("_programBaseName","\x21","\xd0","\xab","\x63"));
	outFields->push(HX_HCSTRING("programVariantName","\x4c","\x19","\x64","\x10"));
	outFields->push(HX_HCSTRING("programBaseName","\xa0","\x8d","\xcc","\x78"));
	outFields->push(HX_HCSTRING("programName","\xef","\x7a","\x23","\xc0"));
	outFields->push(HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3"));
	outFields->push(HX_HCSTRING("vertexFormat","\xbb","\x81","\xa3","\x9d"));
	outFields->push(HX_HCSTRING("mvpMatrix3D","\x39","\xcd","\x49","\x0b"));
	outFields->push(HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5"));
	outFields->push(HX_HCSTRING("indexBufferSize","\x93","\xf3","\xbc","\xed"));
	outFields->push(HX_HCSTRING("vertexBuffer","\x84","\xaf","\xa9","\x70"));
	outFields->push(HX_HCSTRING("vertexBufferSize","\x65","\x8e","\xbe","\xd0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Effect_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display3D::VertexBuffer3D*/ ,(int)offsetof(Effect_obj,_vertexBuffer),HX_HCSTRING("_vertexBuffer","\x63","\x42","\x18","\x53")},
	{hx::fsInt,(int)offsetof(Effect_obj,_vertexBufferSize),HX_HCSTRING("_vertexBufferSize","\xc4","\x7c","\x39","\x69")},
	{hx::fsObject /*::openfl::display3D::IndexBuffer3D*/ ,(int)offsetof(Effect_obj,_indexBuffer),HX_HCSTRING("_indexBuffer","\xb3","\x13","\xb0","\x5b")},
	{hx::fsInt,(int)offsetof(Effect_obj,_indexBufferSize),HX_HCSTRING("_indexBufferSize","\x14","\x36","\x9c","\xd8")},
	{hx::fsBool,(int)offsetof(Effect_obj,_indexBufferUsesQuadLayout),HX_HCSTRING("_indexBufferUsesQuadLayout","\x50","\x33","\xa3","\xcd")},
	{hx::fsObject /*::openfl::geom::Matrix3D*/ ,(int)offsetof(Effect_obj,_mvpMatrix3D),HX_HCSTRING("_mvpMatrix3D","\x3a","\x7b","\x53","\x71")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Effect_obj,_onRestore),HX_HCSTRING("_onRestore","\xb0","\x9b","\xfd","\x9d")},
	{hx::fsString,(int)offsetof(Effect_obj,_programBaseName),HX_HCSTRING("_programBaseName","\x21","\xd0","\xab","\x63")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Effect_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::starling::rendering::VertexDataFormat*/ ,(void *) &Effect_obj::VERTEX_FORMAT,HX_HCSTRING("VERTEX_FORMAT","\xf2","\x39","\xe1","\x29")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Effect_obj::sProgramNameCache,HX_HCSTRING("sProgramNameCache","\x66","\xbf","\x11","\xbc")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Effect_obj_sMemberFields[] = {
	HX_HCSTRING("_vertexBuffer","\x63","\x42","\x18","\x53"),
	HX_HCSTRING("_vertexBufferSize","\xc4","\x7c","\x39","\x69"),
	HX_HCSTRING("_indexBuffer","\xb3","\x13","\xb0","\x5b"),
	HX_HCSTRING("_indexBufferSize","\x14","\x36","\x9c","\xd8"),
	HX_HCSTRING("_indexBufferUsesQuadLayout","\x50","\x33","\xa3","\xcd"),
	HX_HCSTRING("_mvpMatrix3D","\x3a","\x7b","\x53","\x71"),
	HX_HCSTRING("_onRestore","\xb0","\x9b","\xfd","\x9d"),
	HX_HCSTRING("_programBaseName","\x21","\xd0","\xab","\x63"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("onContextCreated","\x38","\x81","\xff","\xc0"),
	HX_HCSTRING("purgeBuffers","\x88","\x6c","\x7a","\x39"),
	HX_HCSTRING("uploadIndexData","\x1b","\x5c","\xab","\xc3"),
	HX_HCSTRING("uploadVertexData","\x0f","\x99","\xe9","\xa0"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("beforeDraw","\x23","\x58","\x19","\x91"),
	HX_HCSTRING("afterDraw","\x40","\xfc","\x4e","\xc2"),
	HX_HCSTRING("createProgram","\xe8","\x22","\x3c","\xdc"),
	HX_HCSTRING("get_programVariantName","\x95","\x92","\xf8","\x69"),
	HX_HCSTRING("get_programBaseName","\xb7","\x5c","\xd7","\x03"),
	HX_HCSTRING("set_programBaseName","\xc3","\x4f","\x74","\x40"),
	HX_HCSTRING("get_programName","\x86","\x32","\x05","\x81"),
	HX_HCSTRING("get_program","\x9b","\xaa","\xf3","\x79"),
	HX_HCSTRING("get_onRestore","\xc6","\xf3","\xbe","\x03"),
	HX_HCSTRING("set_onRestore","\xd2","\xd5","\xc4","\x48"),
	HX_HCSTRING("get_vertexFormat","\x44","\x6e","\x42","\xa2"),
	HX_HCSTRING("get_mvpMatrix3D","\xd0","\x84","\x2b","\xcc"),
	HX_HCSTRING("set_mvpMatrix3D","\xdc","\x01","\xf7","\xc7"),
	HX_HCSTRING("get_indexBuffer","\x49","\x1d","\x88","\xb6"),
	HX_HCSTRING("get_indexBufferSize","\xaa","\xc2","\xc7","\x78"),
	HX_HCSTRING("get_vertexBuffer","\x0d","\x9c","\x48","\x75"),
	HX_HCSTRING("get_vertexBufferSize","\x6e","\xf3","\x28","\xef"),
	::String(null()) };

static void Effect_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Effect_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Effect_obj::VERTEX_FORMAT,"VERTEX_FORMAT");
	HX_MARK_MEMBER_NAME(Effect_obj::sProgramNameCache,"sProgramNameCache");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Effect_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Effect_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Effect_obj::VERTEX_FORMAT,"VERTEX_FORMAT");
	HX_VISIT_MEMBER_NAME(Effect_obj::sProgramNameCache,"sProgramNameCache");
};

#endif

hx::Class Effect_obj::__mClass;

static ::String Effect_obj_sStaticFields[] = {
	HX_HCSTRING("VERTEX_FORMAT","\xf2","\x39","\xe1","\x29"),
	HX_HCSTRING("sProgramNameCache","\x66","\xbf","\x11","\xbc"),
	::String(null())
};

void Effect_obj::__register()
{
	hx::Object *dummy = new Effect_obj;
	Effect_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("starling.rendering.Effect","\xf9","\x19","\xc5","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Effect_obj::__GetStatic;
	__mClass->mSetStaticField = &Effect_obj::__SetStatic;
	__mClass->mMarkFunc = Effect_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Effect_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Effect_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Effect_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Effect_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Effect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Effect_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Effect_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a5d3fa06c66f0999_102_boot)
HXDLIN( 102)		VERTEX_FORMAT = ::starling::rendering::VertexDataFormat_obj::fromString(HX_("position:float2",47,c1,19,df));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_a5d3fa06c66f0999_115_boot)
HXDLIN( 115)		sProgramNameCache =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace starling
} // end namespace rendering
