#ifndef INCLUDED_OCB
#define INCLUDED_OCB

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Ability
#include <Ability.h>
#endif
HX_DECLARE_CLASS0(Ability)
HX_DECLARE_CLASS0(OCB)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  OCB_obj : public ::Ability_obj{
	public:
		typedef ::Ability_obj super;
		typedef OCB_obj OBJ_;
		OCB_obj();
		Void __construct(::flixel::FlxSprite Object,::PlayState State);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="OCB")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< OCB_obj > __new(::flixel::FlxSprite Object,::PlayState State);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OCB_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("OCB","\xae","\x2c","\x3c","\x00"); }

		virtual Void use( Float elapsed);

};


#endif /* INCLUDED_OCB */ 
