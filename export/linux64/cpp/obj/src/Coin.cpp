#include <hxcpp.h>

#ifndef INCLUDED_Ability
#include <Ability.h>
#endif
#ifndef INCLUDED_Coin
#include <Coin.h>
#endif
#ifndef INCLUDED_Entity
#include <Entity.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

Void Coin_obj::__construct(int X,int Y,::PlayState play)
{
HX_STACK_FRAME("Coin","new",0x704aaf23,"Coin.new","Coin.hx",9,0x01a6c5ad)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(play,"play")
{
	HX_STACK_LINE(10)
	int tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10)
	int tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10)
	::PlayState tmp2 = play;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(10)
	super::__construct(tmp,tmp1,tmp2,HX_HCSTRING("Coin","\xb1","\xe1","\x9d","\x2c"),null());
	HX_STACK_LINE(11)
	this->loadGraphic(HX_HCSTRING("assets/images/coin.png","\xf7","\xe9","\xc5","\x54"),true,(int)16,(int)16,null(),null());
	HX_STACK_LINE(12)
	this->setSize((int)16,(int)16);
	HX_STACK_LINE(13)
	::flixel::math::FlxPoint tmp3 = this->acceleration;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(13)
	tmp3->set_y((int)250);
}
;
	return null();
}

//Coin_obj::~Coin_obj() { }

Dynamic Coin_obj::__CreateEmpty() { return  new Coin_obj; }
hx::ObjectPtr< Coin_obj > Coin_obj::__new(int X,int Y,::PlayState play)
{  hx::ObjectPtr< Coin_obj > _result_ = new Coin_obj();
	_result_->__construct(X,Y,play);
	return _result_;}

Dynamic Coin_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Coin_obj > _result_ = new Coin_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void Coin_obj::collide( ::Entity o1,::Entity o2){
{
		HX_STACK_FRAME("Coin","collide",0xcc44abc1,"Coin.collide","Coin.hx",19,0x01a6c5ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(o1,"o1")
		HX_STACK_ARG(o2,"o2")
		HX_STACK_LINE(21)
		bool tmp = (o1->name == HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(21)
		if ((tmp)){
			HX_STACK_LINE(23)
			::Player p = ((::Player)(o1));		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(24)
			(p->coins)++;
			HX_STACK_LINE(25)
			::flixel::FlxSprite tmp1 = ((::flixel::FlxSprite)(p));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(25)
			::PlayState tmp2 = this->play;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(25)
			::OCB tmp3 = ::OCB_obj::__new(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(25)
			p->ability = tmp3;
			HX_STACK_LINE(26)
			this->kill();
		}
		else{
			HX_STACK_LINE(27)
			bool tmp1 = (o2->name == HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(27)
			if ((tmp1)){
				HX_STACK_LINE(29)
				::Player p = ((::Player)(o2));		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(30)
				(p->coins)++;
				HX_STACK_LINE(31)
				::flixel::FlxSprite tmp2 = ((::flixel::FlxSprite)(p));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(31)
				::PlayState tmp3 = this->play;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(31)
				::OCB tmp4 = ::OCB_obj::__new(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(31)
				p->ability = tmp4;
				HX_STACK_LINE(33)
				this->kill();
			}
		}
	}
return null();
}



Coin_obj::Coin_obj()
{
}

Dynamic Coin_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(Coin_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Coin_obj::__mClass,"__mClass");
};

#endif

hx::Class Coin_obj::__mClass;

void Coin_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Coin","\xb1","\xe1","\x9d","\x2c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Coin_obj >;
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

