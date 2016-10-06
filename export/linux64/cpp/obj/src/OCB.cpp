#include <hxcpp.h>

#ifndef INCLUDED_Ability
#include <Ability.h>
#endif
#ifndef INCLUDED_CoinBullet
#include <CoinBullet.h>
#endif
#ifndef INCLUDED_Entity
#include <Entity.h>
#endif
#ifndef INCLUDED_MapLoader
#include <MapLoader.h>
#endif
#ifndef INCLUDED_OCB
#include <OCB.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
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

Void OCB_obj::__construct(::flixel::FlxObject Object,::PlayState State)
{
HX_STACK_FRAME("OCB","new",0xbe36bca0,"OCB.new","OCB.hx",11,0x55cdb6d0)
HX_STACK_THIS(this)
HX_STACK_ARG(Object,"Object")
HX_STACK_ARG(State,"State")
{
	HX_STACK_LINE(12)
	::flixel::FlxObject tmp = Object;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	::PlayState tmp1 = State;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12)
	super::__construct(tmp,tmp1);
}
;
	return null();
}

//OCB_obj::~OCB_obj() { }

Dynamic OCB_obj::__CreateEmpty() { return  new OCB_obj; }
hx::ObjectPtr< OCB_obj > OCB_obj::__new(::flixel::FlxObject Object,::PlayState State)
{  hx::ObjectPtr< OCB_obj > _result_ = new OCB_obj();
	_result_->__construct(Object,State);
	return _result_;}

Dynamic OCB_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OCB_obj > _result_ = new OCB_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void OCB_obj::use( Float elapsed){
{
		HX_STACK_FRAME("OCB","use",0xbe3c1887,"OCB.use","OCB.hx",16,0x55cdb6d0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(17)
		::flixel::FlxObject tmp = this->Object;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(17)
		Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(17)
		Float tmp2 = (tmp1 + (int)24);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(17)
		int tmp3 = ((int)(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(17)
		::flixel::FlxObject tmp4 = this->Object;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(17)
		int tmp5 = ((int)(tmp4->y));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(17)
		::PlayState tmp6 = this->State;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(17)
		::CoinBullet tmp7 = ::CoinBullet_obj::__new(tmp3,tmp5,(int)100,(int)0,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(17)
		::CoinBullet CB = tmp7;		HX_STACK_VAR(CB,"CB");
		HX_STACK_LINE(18)
		::PlayState tmp8 = this->State;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(18)
		::CoinBullet tmp9 = CB;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(18)
		tmp8->add(tmp9);
		HX_STACK_LINE(19)
		::PlayState tmp10 = this->State;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(19)
		::flixel::group::FlxTypedGroup tmp11 = tmp10->loader->actors;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(19)
		::CoinBullet tmp12 = CB;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(19)
		tmp11->add(tmp12);
		HX_STACK_LINE(20)
		::flixel::FlxObject tmp13 = this->Object;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(20)
		::Player p = ((::Player)(tmp13));		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(21)
		::flixel::FlxObject tmp14 = ((::flixel::FlxObject)(p));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(21)
		::PlayState tmp15 = this->State;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(21)
		::Ability tmp16 = ::Ability_obj::__new(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(21)
		p->ability = tmp16;
	}
return null();
}



OCB_obj::OCB_obj()
{
}

Dynamic OCB_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"use") ) { return use_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("use","\x47","\x2c","\x59","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OCB_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OCB_obj::__mClass,"__mClass");
};

#endif

hx::Class OCB_obj::__mClass;

void OCB_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("OCB","\xae","\x2c","\x3c","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OCB_obj >;
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

