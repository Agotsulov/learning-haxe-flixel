#ifndef INCLUDED_flixel_system_debug_watch_WatchEntry
#define INCLUDED_flixel_system_debug_watch_WatchEntry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS4(flixel,_system,debug,watch,EditableTextField)
HX_DECLARE_CLASS4(flixel,_system,debug,watch,WatchEntry)
HX_DECLARE_CLASS4(flixel,_system,debug,watch,WatchEntryData)
HX_DECLARE_CLASS3(flixel,_system,ui,FlxSystemButton)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextField)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextFormat)
namespace flixel{
namespace _system{
namespace debug{
namespace watch{


class HXCPP_CLASS_ATTRIBUTES  WatchEntry_obj : public ::openfl::_legacy::display::Sprite_obj{
	public:
		typedef ::openfl::_legacy::display::Sprite_obj super;
		typedef WatchEntry_obj OBJ_;
		WatchEntry_obj();
		Void __construct(::String displayName,::flixel::_system::debug::watch::WatchEntryData data,Dynamic removeEntry);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.watch.WatchEntry")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< WatchEntry_obj > __new(::String displayName,::flixel::_system::debug::watch::WatchEntryData data,Dynamic removeEntry);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WatchEntry_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::util::IFlxDestroyable_obj *();
		::String __ToString() const { return HX_HCSTRING("WatchEntry","\xc3","\x97","\x41","\xdf"); }

		static void __boot();
		static int GUTTER;
		static int TEXT_HEIGHT;
		static int MAX_NAME_WIDTH;
		::flixel::_system::debug::watch::WatchEntryData data;
		::String displayName;
		::openfl::_legacy::text::TextField nameText;
		::flixel::_system::debug::watch::EditableTextField valueText;
		::flixel::_system::ui::FlxSystemButton removeButton;
		::openfl::_legacy::text::TextFormat defaultFormat;
		virtual int getTextColor( );
		Dynamic getTextColor_dyn();

		virtual Dynamic initTextField( Dynamic textField);
		Dynamic initTextField_dyn();

		virtual Void updateSize( Float nameWidth,Float windowWidth);
		Dynamic updateSize_dyn();

		virtual Void updateName( );
		Dynamic updateName_dyn();

		virtual Void setNameText( ::String name);
		Dynamic setNameText_dyn();

		virtual ::String getValue( );
		Dynamic getValue_dyn();

		virtual Void submitValue( ::String value);
		Dynamic submitValue_dyn();

		virtual Void updateValue( );
		Dynamic updateValue_dyn();

		virtual Float getNameWidth( );
		Dynamic getNameWidth_dyn();

		virtual Float getMinWidth( );
		Dynamic getMinWidth_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch

#endif /* INCLUDED_flixel_system_debug_watch_WatchEntry */ 
