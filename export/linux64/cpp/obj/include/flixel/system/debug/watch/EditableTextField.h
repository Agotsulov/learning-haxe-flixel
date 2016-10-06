#ifndef INCLUDED_flixel_system_debug_watch_EditableTextField
#define INCLUDED_flixel_system_debug_watch_EditableTextField

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS4(flixel,_system,debug,watch,EditableTextField)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,KeyboardEvent)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextField)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextFormat)
namespace flixel{
namespace _system{
namespace debug{
namespace watch{


class HXCPP_CLASS_ATTRIBUTES  EditableTextField_obj : public ::openfl::_legacy::text::TextField_obj{
	public:
		typedef ::openfl::_legacy::text::TextField_obj super;
		typedef EditableTextField_obj OBJ_;
		EditableTextField_obj();
		Void __construct(bool allowEditing,::openfl::_legacy::text::TextFormat defaultFormat,Dynamic submitValue);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.watch.EditableTextField")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EditableTextField_obj > __new(bool allowEditing,::openfl::_legacy::text::TextFormat defaultFormat,Dynamic submitValue);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EditableTextField_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::util::IFlxDestroyable_obj *();
		::String __ToString() const { return HX_HCSTRING("EditableTextField","\x69","\x0b","\x08","\x7c"); }

		bool isEditing;
		bool allowEditing;
		Dynamic submitValue;
		Dynamic &submitValue_dyn() { return submitValue;}
		::openfl::_legacy::text::TextFormat defaultFormat;
		::openfl::_legacy::text::TextFormat editFormat;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void onMouseUp( Dynamic _);
		Dynamic onMouseUp_dyn();

		virtual Void onKeyUp( ::openfl::_legacy::events::KeyboardEvent e);
		Dynamic onKeyUp_dyn();

		virtual Void onKeyDown( ::openfl::_legacy::events::KeyboardEvent e);
		Dynamic onKeyDown_dyn();

		virtual bool modifyNumericValue( Float modifier);
		Dynamic modifyNumericValue_dyn();

		virtual Void onFocusLost( Dynamic _);
		Dynamic onFocusLost_dyn();

		virtual Void submit( );
		Dynamic submit_dyn();

		virtual Void setIsEditing( bool isEditing);
		Dynamic setIsEditing_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch

#endif /* INCLUDED_flixel_system_debug_watch_EditableTextField */ 
