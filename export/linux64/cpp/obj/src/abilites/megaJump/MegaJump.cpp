#include <hxcpp.h>

#ifndef INCLUDED_Ability
#include <Ability.h>
#endif
#ifndef INCLUDED_Entity
#include <Entity.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_abilites_megaJump_MegaJump
#include <abilites/megaJump/MegaJump.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
namespace abilites{
namespace megaJump{

Void MegaJump_obj::__construct(::flixel::FlxSprite Object,::PlayState State)
{
HX_STACK_FRAME("abilites.megaJump.MegaJump","new",0xef3de72f,"abilites.megaJump.MegaJump.new","abilites/megaJump/MegaJump.hx",10,0x6d9a2741)
HX_STACK_THIS(this)
HX_STACK_ARG(Object,"Object")
HX_STACK_ARG(State,"State")
{
	HX_STACK_LINE(11)
	::flixel::FlxSprite tmp = Object;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	::PlayState tmp1 = State;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11)
	super::__construct(tmp,tmp1);
}
;
	return null();
}

//MegaJump_obj::~MegaJump_obj() { }

Dynamic MegaJump_obj::__CreateEmpty() { return  new MegaJump_obj; }
hx::ObjectPtr< MegaJump_obj > MegaJump_obj::__new(::flixel::FlxSprite Object,::PlayState State)
{  hx::ObjectPtr< MegaJump_obj > _result_ = new MegaJump_obj();
	_result_->__construct(Object,State);
	return _result_;}

Dynamic MegaJump_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MegaJump_obj > _result_ = new MegaJump_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void MegaJump_obj::use( Float elapsed){
{
		HX_STACK_FRAME("abilites.megaJump.MegaJump","use",0xef434316,"abilites.megaJump.MegaJump.use","abilites/megaJump/MegaJump.hx",15,0x6d9a2741)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(17)
		::flixel::FlxSprite tmp = this->Object;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(17)
		::Player p = ((::Player)(tmp));		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(18)
		p->velocity->set_y((int)-1000);
		HX_STACK_LINE(19)
		::flixel::FlxSprite tmp1 = ((::flixel::FlxSprite)(p));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(19)
		::PlayState tmp2 = this->State;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(19)
		::Ability tmp3 = ::Ability_obj::__new(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(19)
		p->ability = tmp3;
	}
return null();
}



MegaJump_obj::MegaJump_obj()
{
}

Dynamic MegaJump_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(MegaJump_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MegaJump_obj::__mClass,"__mClass");
};

#endif

hx::Class MegaJump_obj::__mClass;

void MegaJump_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("abilites.megaJump.MegaJump","\xbd","\x23","\xf9","\x86");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MegaJump_obj >;
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

} // end namespace abilites
} // end namespace megaJump
