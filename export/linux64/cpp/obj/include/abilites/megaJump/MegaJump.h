#ifndef INCLUDED_abilites_megaJump_MegaJump
#define INCLUDED_abilites_megaJump_MegaJump

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Ability
#include <Ability.h>
#endif
HX_DECLARE_CLASS0(Ability)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS2(abilites,megaJump,MegaJump)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace abilites{
namespace megaJump{


class HXCPP_CLASS_ATTRIBUTES  MegaJump_obj : public ::Ability_obj{
	public:
		typedef ::Ability_obj super;
		typedef MegaJump_obj OBJ_;
		MegaJump_obj();
		Void __construct(::flixel::FlxObject Object,::PlayState State);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="abilites.megaJump.MegaJump")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MegaJump_obj > __new(::flixel::FlxObject Object,::PlayState State);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MegaJump_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("MegaJump","\xa0","\x8d","\x07","\xd6"); }

		virtual Void use( Float elapsed);

};

} // end namespace abilites
} // end namespace megaJump

#endif /* INCLUDED_abilites_megaJump_MegaJump */ 
