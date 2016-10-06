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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

Void OCB_obj::__construct(::flixel::FlxSprite Object,::PlayState State)
{
HX_STACK_FRAME("OCB","new",0xbe36bca0,"OCB.new","OCB.hx",9,0x55cdb6d0)
HX_STACK_THIS(this)
HX_STACK_ARG(Object,"Object")
HX_STACK_ARG(State,"State")
{
	HX_STACK_LINE(10)
	::flixel::FlxSprite tmp = Object;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10)
	::PlayState tmp1 = State;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10)
	super::__construct(tmp,tmp1);
}
;
	return null();
}

//OCB_obj::~OCB_obj() { }

Dynamic OCB_obj::__CreateEmpty() { return  new OCB_obj; }
hx::ObjectPtr< OCB_obj > OCB_obj::__new(::flixel::FlxSprite Object,::PlayState State)
{  hx::ObjectPtr< OCB_obj > _result_ = new OCB_obj();
	_result_->__construct(Object,State);
	return _result_;}

Dynamic OCB_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OCB_obj > _result_ = new OCB_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void OCB_obj::use( Float elapsed){
{
		HX_STACK_FRAME("OCB","use",0xbe3c1887,"OCB.use","OCB.hx",14,0x55cdb6d0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(15)
		::flixel::FlxSprite tmp = this->Object;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(15)
		int tmp1 = tmp->facing;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(15)
		Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("OCB.hx","\xd0","\xb6","\xcd","\x55"),15,HX_HCSTRING("OCB","\xae","\x2c","\x3c","\x00"),HX_HCSTRING("use","\x47","\x2c","\x59","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(15)
		::haxe::Log_obj::trace(tmp1,tmp2);
		HX_STACK_LINE(16)
		::flixel::FlxSprite tmp3 = this->Object;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(16)
		int tmp4 = tmp3->facing;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(16)
		bool tmp5 = (tmp4 == (int)16);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(16)
		if ((tmp5)){
			HX_STACK_LINE(17)
			::flixel::FlxSprite tmp6 = this->Object;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(17)
			Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(17)
			Float tmp8 = (tmp7 + (int)24);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(17)
			int tmp9 = ((int)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(17)
			::flixel::FlxSprite tmp10 = this->Object;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(17)
			int tmp11 = ((int)(tmp10->y));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(17)
			::PlayState tmp12 = this->State;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(17)
			::CoinBullet tmp13 = ::CoinBullet_obj::__new(tmp9,tmp11,(int)100,(int)0,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(17)
			::CoinBullet CB = tmp13;		HX_STACK_VAR(CB,"CB");
			HX_STACK_LINE(18)
			::PlayState tmp14 = this->State;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(18)
			::CoinBullet tmp15 = CB;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(18)
			tmp14->add(tmp15);
			HX_STACK_LINE(19)
			::PlayState tmp16 = this->State;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(19)
			::flixel::group::FlxTypedGroup tmp17 = tmp16->loader->actors;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(19)
			::CoinBullet tmp18 = CB;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(19)
			tmp17->add(tmp18);
			HX_STACK_LINE(20)
			::flixel::FlxSprite tmp19 = this->Object;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(20)
			::Player p = ((::Player)(tmp19));		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(21)
			int tmp20 = p->facing;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(21)
			Dynamic tmp21 = hx::SourceInfo(HX_HCSTRING("OCB.hx","\xd0","\xb6","\xcd","\x55"),21,HX_HCSTRING("OCB","\xae","\x2c","\x3c","\x00"),HX_HCSTRING("use","\x47","\x2c","\x59","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(21)
			::haxe::Log_obj::trace(tmp20,tmp21);
			HX_STACK_LINE(22)
			::flixel::FlxSprite tmp22 = ((::flixel::FlxSprite)(p));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(22)
			::PlayState tmp23 = this->State;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(22)
			::Ability tmp24 = ::Ability_obj::__new(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(22)
			p->ability = tmp24;
		}
		else{
			HX_STACK_LINE(24)
			::flixel::FlxSprite tmp6 = this->Object;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(24)
			int tmp7 = tmp6->facing;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(24)
			bool tmp8 = (tmp7 == (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(24)
			if ((tmp8)){
				HX_STACK_LINE(25)
				::flixel::FlxSprite tmp9 = this->Object;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(25)
				Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(25)
				Float tmp11 = (tmp10 + (int)24);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(25)
				int tmp12 = ((int)(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(25)
				::flixel::FlxSprite tmp13 = this->Object;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(25)
				int tmp14 = ((int)(tmp13->y));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(25)
				::PlayState tmp15 = this->State;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(25)
				::CoinBullet tmp16 = ::CoinBullet_obj::__new(tmp12,tmp14,(int)-100,(int)0,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(25)
				::CoinBullet CB = tmp16;		HX_STACK_VAR(CB,"CB");
				HX_STACK_LINE(26)
				::PlayState tmp17 = this->State;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(26)
				::CoinBullet tmp18 = CB;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(26)
				tmp17->add(tmp18);
				HX_STACK_LINE(27)
				::PlayState tmp19 = this->State;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(27)
				::flixel::group::FlxTypedGroup tmp20 = tmp19->loader->actors;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(27)
				::CoinBullet tmp21 = CB;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(27)
				tmp20->add(tmp21);
				HX_STACK_LINE(28)
				::flixel::FlxSprite tmp22 = this->Object;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(28)
				::Player p = ((::Player)(tmp22));		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(29)
				::flixel::FlxSprite tmp23 = ((::flixel::FlxSprite)(p));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(29)
				::PlayState tmp24 = this->State;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(29)
				::Ability tmp25 = ::Ability_obj::__new(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(29)
				p->ability = tmp25;
			}
		}
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

