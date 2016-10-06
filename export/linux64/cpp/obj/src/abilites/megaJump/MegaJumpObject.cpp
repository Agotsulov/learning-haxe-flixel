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
#ifndef INCLUDED_abilites_megaJump_MegaJumpObject
#include <abilites/megaJump/MegaJumpObject.h>
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

Void MegaJumpObject_obj::__construct(int X,int Y,::PlayState play)
{
HX_STACK_FRAME("abilites.megaJump.MegaJumpObject","new",0x91e4014e,"abilites.megaJump.MegaJumpObject.new","abilites/megaJump/MegaJumpObject.hx",6,0x346ece02)
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
	super::__construct(tmp,tmp1,tmp2,HX_HCSTRING("Coin","\xb1","\xe1","\x9d","\x2c"),null());
	HX_STACK_LINE(8)
	this->loadGraphic(HX_HCSTRING("assets/images/megaJump.png","\xe6","\x5a","\xc7","\x7a"),true,(int)16,(int)16,null(),null());
	HX_STACK_LINE(9)
	this->setSize((int)16,(int)16);
	HX_STACK_LINE(10)
	::flixel::math::FlxPoint tmp3 = this->acceleration;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(10)
	tmp3->set_y((int)250);
}
;
	return null();
}

//MegaJumpObject_obj::~MegaJumpObject_obj() { }

Dynamic MegaJumpObject_obj::__CreateEmpty() { return  new MegaJumpObject_obj; }
hx::ObjectPtr< MegaJumpObject_obj > MegaJumpObject_obj::__new(int X,int Y,::PlayState play)
{  hx::ObjectPtr< MegaJumpObject_obj > _result_ = new MegaJumpObject_obj();
	_result_->__construct(X,Y,play);
	return _result_;}

Dynamic MegaJumpObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MegaJumpObject_obj > _result_ = new MegaJumpObject_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void MegaJumpObject_obj::collide( ::Entity o1,::Entity o2){
{
		HX_STACK_FRAME("abilites.megaJump.MegaJumpObject","collide",0xcc29ef6c,"abilites.megaJump.MegaJumpObject.collide","abilites/megaJump/MegaJumpObject.hx",16,0x346ece02)
		HX_STACK_THIS(this)
		HX_STACK_ARG(o1,"o1")
		HX_STACK_ARG(o2,"o2")
		HX_STACK_LINE(18)
		bool tmp = (o1->name == HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(18)
		if ((tmp)){
			HX_STACK_LINE(20)
			::Player p = ((::Player)(o1));		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(21)
			::flixel::FlxSprite tmp1 = ((::flixel::FlxSprite)(p));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(21)
			::PlayState tmp2 = this->play;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(21)
			::abilites::megaJump::MegaJump tmp3 = ::abilites::megaJump::MegaJump_obj::__new(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(21)
			p->ability = tmp3;
			HX_STACK_LINE(22)
			this->kill();
		}
		else{
			HX_STACK_LINE(23)
			bool tmp1 = (o2->name == HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(23)
			if ((tmp1)){
				HX_STACK_LINE(25)
				::Player p = ((::Player)(o2));		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(26)
				::flixel::FlxSprite tmp2 = ((::flixel::FlxSprite)(p));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(26)
				::PlayState tmp3 = this->play;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(26)
				::abilites::megaJump::MegaJump tmp4 = ::abilites::megaJump::MegaJump_obj::__new(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(26)
				p->ability = tmp4;
				HX_STACK_LINE(28)
				this->kill();
			}
		}
	}
return null();
}



MegaJumpObject_obj::MegaJumpObject_obj()
{
}

Dynamic MegaJumpObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(MegaJumpObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MegaJumpObject_obj::__mClass,"__mClass");
};

#endif

hx::Class MegaJumpObject_obj::__mClass;

void MegaJumpObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("abilites.megaJump.MegaJumpObject","\x5c","\x02","\x22","\xf4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MegaJumpObject_obj >;
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
