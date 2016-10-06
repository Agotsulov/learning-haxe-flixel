#ifndef INCLUDED_CoinBullet
#define INCLUDED_CoinBullet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Entity
#include <Entity.h>
#endif
HX_DECLARE_CLASS0(CoinBullet)
HX_DECLARE_CLASS0(Entity)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  CoinBullet_obj : public ::Entity_obj{
	public:
		typedef ::Entity_obj super;
		typedef CoinBullet_obj OBJ_;
		CoinBullet_obj();
		Void __construct(int X,int Y,int AX,int AY,::PlayState Play);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="CoinBullet")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CoinBullet_obj > __new(int X,int Y,int AX,int AY,::PlayState Play);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CoinBullet_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CoinBullet","\xd3","\xc2","\x38","\x27"); }

		virtual Void update( Float elapsed);

		virtual Void collide( ::Entity o1,::Entity o2);

};


#endif /* INCLUDED_CoinBullet */ 
