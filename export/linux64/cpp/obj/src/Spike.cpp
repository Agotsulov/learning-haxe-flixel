#include <hxcpp.h>

#ifndef INCLUDED_Entity
#include <Entity.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Spike
#include <Spike.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

Void Spike_obj::__construct(int X,int Y,::PlayState play)
{
HX_STACK_FRAME("Spike","new",0x87088198,"Spike.new","Spike.hx",6,0x96fdb8d8)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(play,"play")
{
	HX_STACK_LINE(7)
	int tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7)
	int tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7)
	::PlayState tmp2 = play;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(7)
	super::__construct(tmp,tmp1,tmp2,null(),null());
	HX_STACK_LINE(8)
	this->name = HX_HCSTRING("Spike","\xa6","\x15","\x9a","\x14");
	HX_STACK_LINE(9)
	this->loadGraphic(HX_HCSTRING("assets/images/spike.png","\xf6","\x18","\x09","\x8d"),true,(int)16,(int)16,null(),null());
	HX_STACK_LINE(10)
	this->setSize((int)16,(int)16);
}
;
	return null();
}

//Spike_obj::~Spike_obj() { }

Dynamic Spike_obj::__CreateEmpty() { return  new Spike_obj; }
hx::ObjectPtr< Spike_obj > Spike_obj::__new(int X,int Y,::PlayState play)
{  hx::ObjectPtr< Spike_obj > _result_ = new Spike_obj();
	_result_->__construct(X,Y,play);
	return _result_;}

Dynamic Spike_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Spike_obj > _result_ = new Spike_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void Spike_obj::collide( ::Entity o1,::Entity o2){
{
		HX_STACK_FRAME("Spike","collide",0x09355cb6,"Spike.collide","Spike.hx",16,0x96fdb8d8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(o1,"o1")
		HX_STACK_ARG(o2,"o2")
		HX_STACK_LINE(18)
		bool tmp = (o1->name != HX_HCSTRING("Spike","\xa6","\x15","\x9a","\x14"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(18)
		if ((tmp)){
			HX_STACK_LINE(20)
			o1->kill();
		}
		else{
			HX_STACK_LINE(21)
			bool tmp1 = (o2->name != HX_HCSTRING("Spike","\xa6","\x15","\x9a","\x14"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(21)
			if ((tmp1)){
				HX_STACK_LINE(23)
				o2->kill();
			}
		}
	}
return null();
}



Spike_obj::Spike_obj()
{
}

Dynamic Spike_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"collide") ) { return collide_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("collide","\x7e","\xaf","\x63","\xed"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Spike_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Spike_obj::__mClass,"__mClass");
};

#endif

hx::Class Spike_obj::__mClass;

void Spike_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Spike","\xa6","\x15","\x9a","\x14");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Spike_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

