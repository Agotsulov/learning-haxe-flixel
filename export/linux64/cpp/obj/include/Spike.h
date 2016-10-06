#ifndef INCLUDED_Spike
#define INCLUDED_Spike

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Entity
#include <Entity.h>
#endif
HX_DECLARE_CLASS0(Entity)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS0(Spike)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Spike_obj : public ::Entity_obj{
	public:
		typedef ::Entity_obj super;
		typedef Spike_obj OBJ_;
		Spike_obj();
		Void __construct(int X,int Y,::PlayState play);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Spike")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Spike_obj > __new(int X,int Y,::PlayState play);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Spike_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Spike","\xa6","\x15","\x9a","\x14"); }

		virtual Void collide( ::Entity o1,::Entity o2);

};


#endif /* INCLUDED_Spike */ 
