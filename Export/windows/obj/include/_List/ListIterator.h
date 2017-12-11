// Generated by Haxe 3.4.3
#ifndef INCLUDED__List_ListIterator
#define INCLUDED__List_ListIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(_List,ListIterator)
HX_DECLARE_CLASS1(_List,ListNode)

namespace _List{


class HXCPP_CLASS_ATTRIBUTES ListIterator_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ListIterator_obj OBJ_;
		ListIterator_obj();

	public:
		enum { _hx_ClassId = 0x7fb888f1 };

		void __construct( ::_List::ListNode head);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="_List.ListIterator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"_List.ListIterator"); }
		static hx::ObjectPtr< ListIterator_obj > __new( ::_List::ListNode head);
		static hx::ObjectPtr< ListIterator_obj > __alloc(hx::Ctx *_hx_ctx, ::_List::ListNode head);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ListIterator_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ListIterator","\x8c","\xfc","\x31","\xc4"); }

		 ::_List::ListNode head;
		bool hasNext();
		::Dynamic hasNext_dyn();

		 ::Dynamic next();
		::Dynamic next_dyn();

};

} // end namespace _List

#endif /* INCLUDED__List_ListIterator */ 
