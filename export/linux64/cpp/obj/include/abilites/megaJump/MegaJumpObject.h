#ifndef INCLUDED_abilites_megaJump_MegaJumpObject
#define INCLUDED_abilites_megaJump_MegaJumpObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Entity
#include <Entity.h>
#endif
HX_DECLARE_CLASS0(Entity)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS2(abilites,megaJump,MegaJumpObject)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace abilites{
namespace megaJump{


class HXCPP_CLASS_ATTRIBUTES  MegaJumpObject_obj : public ::Entity_obj{
	public:
		typedef ::Entity_obj super;
		typedef MegaJumpObject_obj OBJ_;
		MegaJumpObject_obj();
		Void __construct(int X,int Y,::PlayState play);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="abilites.megaJump.MegaJumpObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MegaJumpObject_obj > __new(int X,int Y,::PlayState play);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MegaJumpObject_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("MegaJumpObject","\x7f","\x78","\xed","\x2e"); }

		virtual Void collide( ::Entity o1,::Entity o2);

};

} // end namespace abilites
} // end namespace megaJump

#endif /* INCLUDED_abilites_megaJump_MegaJumpObject */ 
