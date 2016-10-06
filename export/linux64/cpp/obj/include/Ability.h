#ifndef INCLUDED_Ability
#define INCLUDED_Ability

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Ability)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Ability_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Ability_obj OBJ_;
		Ability_obj();
		Void __construct(::flixel::FlxObject Object,::PlayState State);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Ability")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Ability_obj > __new(::flixel::FlxObject Object,::PlayState State);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Ability_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Ability","\x8a","\x89","\xb2","\x7a"); }

		::flixel::FlxObject Object;
		::PlayState State;
		virtual Void use( Float elapsed);
		Dynamic use_dyn();

};


#endif /* INCLUDED_Ability */ 
