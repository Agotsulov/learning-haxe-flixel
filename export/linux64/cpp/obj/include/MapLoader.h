#ifndef INCLUDED_MapLoader
#define INCLUDED_MapLoader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Entity)
HX_DECLARE_CLASS0(MapLoader)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,tile,FlxBaseTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  MapLoader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MapLoader_obj OBJ_;
		MapLoader_obj();
		Void __construct(::String foldername,::PlayState play);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="MapLoader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MapLoader_obj > __new(::String foldername,::PlayState play);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MapLoader_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("MapLoader","\xaf","\x83","\x21","\xdd"); }

		::flixel::tile::FlxTilemap background;
		::flixel::tile::FlxTilemap map;
		::flixel::group::FlxTypedGroup actors;
		::Player player;
		::String path;
		virtual ::Entity getEntity( ::String name);
		Dynamic getEntity_dyn();

};


#endif /* INCLUDED_MapLoader */ 
