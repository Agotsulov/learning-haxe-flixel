#ifndef INCLUDED_Door
#define INCLUDED_Door

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Entity
#include <Entity.h>
#endif
HX_DECLARE_CLASS0(Door)
HX_DECLARE_CLASS0(Entity)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Door_obj : public ::Entity_obj{
	public:
		typedef ::Entity_obj super;
		typedef Door_obj OBJ_;
		Door_obj();
		Void __construct(int X,int Y,::PlayState play,::String folderpath);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Door")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Door_obj > __new(int X,int Y,::PlayState play,::String folderpath);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Door_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Door","\x8e","\x1d","\x47","\x2d"); }

		::String folderpath;
		virtual Void collide( ::Entity o1,::Entity o2);

};


#endif /* INCLUDED_Door */ 
