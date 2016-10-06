#ifndef INCLUDED_Coin
#define INCLUDED_Coin

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Entity
#include <Entity.h>
#endif
HX_DECLARE_CLASS0(Coin)
HX_DECLARE_CLASS0(Entity)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Coin_obj : public ::Entity_obj{
	public:
		typedef ::Entity_obj super;
		typedef Coin_obj OBJ_;
		Coin_obj();
		Void __construct(int X,int Y,::PlayState play);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Coin")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Coin_obj > __new(int X,int Y,::PlayState play);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Coin_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Coin","\xb1","\xe1","\x9d","\x2c"); }

		virtual Void collide( ::Entity o1,::Entity o2);

};


#endif /* INCLUDED_Coin */ 
