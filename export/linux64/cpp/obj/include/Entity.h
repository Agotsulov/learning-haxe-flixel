#ifndef INCLUDED_Entity
#define INCLUDED_Entity

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(Entity)
HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Entity_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Entity_obj OBJ_;
		Entity_obj();
		Void __construct(int X,int Y,::PlayState play,::String __o_name,hx::Null< Float >  __o_hurtCooldown);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Entity")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Entity_obj > __new(int X,int Y,::PlayState play,::String __o_name,hx::Null< Float >  __o_hurtCooldown);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Entity_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Entity","\x43","\x87","\xb0","\x39"); }

		::PlayState play;
		::String name;
		Float hurtCooldown;
		Float lastHurt;
		bool canHurt;
		::List tags;
		virtual Void update( Float elapsed);

		virtual Void hurt( Float Damage);

		virtual Void collide( ::Entity o1,::Entity o2);
		Dynamic collide_dyn();

		virtual Void addTag( ::String str);
		Dynamic addTag_dyn();

		virtual bool checkTag( ::String str);
		Dynamic checkTag_dyn();

};


#endif /* INCLUDED_Entity */ 
