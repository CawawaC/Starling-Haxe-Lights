// Generated by Haxe 3.4.3
#ifndef INCLUDED_openfl_media_Sound
#define INCLUDED_openfl_media_Sound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,media,AudioBuffer)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,media,ID3Info)
HX_DECLARE_CLASS2(openfl,media,Sound)
HX_DECLARE_CLASS2(openfl,media,SoundChannel)
HX_DECLARE_CLASS2(openfl,media,SoundLoaderContext)
HX_DECLARE_CLASS2(openfl,media,SoundTransform)
HX_DECLARE_CLASS2(openfl,net,URLRequest)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace media{


class HXCPP_CLASS_ATTRIBUTES Sound_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef Sound_obj OBJ_;
		Sound_obj();

	public:
		enum { _hx_ClassId = 0x16cac3db };

		void __construct( ::openfl::net::URLRequest stream, ::openfl::media::SoundLoaderContext context);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.media.Sound")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.media.Sound"); }
		static hx::ObjectPtr< Sound_obj > __new( ::openfl::net::URLRequest stream, ::openfl::media::SoundLoaderContext context);
		static hx::ObjectPtr< Sound_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::net::URLRequest stream, ::openfl::media::SoundLoaderContext context);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sound_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Sound","\xaf","\xfc","\xf9","\x13"); }

		static  ::openfl::media::Sound fromAudioBuffer( ::lime::media::AudioBuffer buffer);
		static ::Dynamic fromAudioBuffer_dyn();

		static  ::openfl::media::Sound fromFile(::String path);
		static ::Dynamic fromFile_dyn();

		static  ::lime::app::Future loadFromFile(::String path);
		static ::Dynamic loadFromFile_dyn();

		static  ::lime::app::Future loadFromFiles(::Array< ::String > paths);
		static ::Dynamic loadFromFiles_dyn();

		int bytesLoaded;
		int bytesTotal;
		bool isBuffering;
		::String url;
		 ::lime::media::AudioBuffer _hx___buffer;
		void close();
		::Dynamic close_dyn();

		void load( ::openfl::net::URLRequest stream, ::openfl::media::SoundLoaderContext context);
		::Dynamic load_dyn();

		void loadCompressedDataFromByteArray( ::openfl::utils::ByteArrayData bytes,int bytesLength);
		::Dynamic loadCompressedDataFromByteArray_dyn();

		void loadPCMFromByteArray( ::openfl::utils::ByteArrayData bytes,int samples,::String format,hx::Null< bool >  stereo,hx::Null< Float >  sampleRate);
		::Dynamic loadPCMFromByteArray_dyn();

		 ::openfl::media::SoundChannel play(hx::Null< Float >  startTime,hx::Null< int >  loops, ::openfl::media::SoundTransform sndTransform);
		::Dynamic play_dyn();

		 ::openfl::media::ID3Info get_id3();
		::Dynamic get_id3_dyn();

		int get_length();
		::Dynamic get_length_dyn();

		void AudioBuffer_onURLLoad( ::lime::media::AudioBuffer buffer);
		::Dynamic AudioBuffer_onURLLoad_dyn();

};

} // end namespace openfl
} // end namespace media

#endif /* INCLUDED_openfl_media_Sound */ 
