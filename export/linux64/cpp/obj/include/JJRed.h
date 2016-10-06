#ifndef INCLUDED_JJRed
#define INCLUDED_JJRed

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Entity
#include <Entity.h>
#endif
HX_DECLARE_CLASS0(Entity)
HX_DECLARE_CLASS0(JJRed)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  JJRed_obj : public ::Entity_obj{
	public:
		typedef ::Entity_obj super;
		typedef JJRed_obj OBJ_;
		JJRed_obj();
		Void __construct(int X,int Y,::PlayState Play);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="JJRed")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< JJRed_obj > __new(int X,int Y,::PlayState Play);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~JJRed_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("JJRed","\x71","\x48","\xcf","\xcc"); }

		static void __boot();
		static int GRAVITY;
		virtual Void update( Float elapsed);

		virtual Void collide( ::Entity o1,::Entity o2);

		virtual Void kill( );

};


#endif /* INCLUDED_JJRed */ 
