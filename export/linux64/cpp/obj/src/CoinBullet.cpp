#include <hxcpp.h>

#ifndef INCLUDED_CoinBullet
#include <CoinBullet.h>
#endif
#ifndef INCLUDED_Entity
#include <Entity.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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

Void CoinBullet_obj::__construct(int X,int Y,int AX,int AY,::PlayState Play)
{
HX_STACK_FRAME("CoinBullet","new",0x7c09c945,"CoinBullet.new","CoinBullet.hx",9,0xf2c7c5cb)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(AX,"AX")
HX_STACK_ARG(AY,"AY")
HX_STACK_ARG(Play,"Play")
{
	HX_STACK_LINE(10)
	int tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10)
	int tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10)
	::PlayState tmp2 = Play;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(10)
	super::__construct(tmp,tmp1,tmp2,HX_HCSTRING("CoinBullet","\xd3","\xc2","\x38","\x27"),null());
	HX_STACK_LINE(11)
	this->loadGraphic(HX_HCSTRING("assets/images/coin.png","\xf7","\xe9","\xc5","\x54"),true,(int)16,(int)16,null(),null());
	HX_STACK_LINE(13)
	this->setSize((int)12,(int)12);
	HX_STACK_LINE(15)
	::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(15)
	tmp3->add(HX_HCSTRING("walking","\x79","\xbb","\x68","\x93"),Array_obj< int >::__new().Add((int)0),(int)6,true,null(),null());
	HX_STACK_LINE(17)
	::flixel::math::FlxPoint tmp4 = this->velocity;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(17)
	int tmp5 = AX;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(17)
	int tmp6 = AY;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(17)
	tmp4->set(tmp5,tmp6);
}
;
	return null();
}

//CoinBullet_obj::~CoinBullet_obj() { }

Dynamic CoinBullet_obj::__CreateEmpty() { return  new CoinBullet_obj; }
hx::ObjectPtr< CoinBullet_obj > CoinBullet_obj::__new(int X,int Y,int AX,int AY,::PlayState Play)
{  hx::ObjectPtr< CoinBullet_obj > _result_ = new CoinBullet_obj();
	_result_->__construct(X,Y,AX,AY,Play);
	return _result_;}

Dynamic CoinBullet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CoinBullet_obj > _result_ = new CoinBullet_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void CoinBullet_obj::update( Float elapsed){
{
		HX_STACK_FRAME("CoinBullet","update",0x0eb86a44,"CoinBullet.update","CoinBullet.hx",23,0xf2c7c5cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(25)
		::flixel::math::FlxPoint tmp = this->velocity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(25)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(25)
		if ((tmp3)){
			HX_STACK_LINE(25)
			::flixel::math::FlxPoint tmp5 = this->velocity;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(25)
			::flixel::math::FlxPoint tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(25)
			Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(25)
			tmp4 = (tmp7 < (int)0);
		}
		else{
			HX_STACK_LINE(25)
			tmp4 = true;
		}
		HX_STACK_LINE(25)
		if ((tmp4)){
			HX_STACK_LINE(27)
			::flixel::animation::FlxAnimationController tmp5 = this->animation;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(27)
			tmp5->play(HX_HCSTRING("walking","\x79","\xbb","\x68","\x93"),null(),null(),null());
		}
		HX_STACK_LINE(30)
		int tmp5 = this->touching;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(30)
		int tmp6 = (int(tmp5) & int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(30)
		bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(30)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(30)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(30)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(30)
		if ((tmp9)){
			HX_STACK_LINE(30)
			int tmp11 = this->touching;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(30)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(30)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(30)
			int tmp14 = (int(tmp13) & int((int)1));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(30)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(30)
			int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(30)
			tmp10 = (tmp16 > (int)0);
		}
		else{
			HX_STACK_LINE(30)
			tmp10 = true;
		}
		HX_STACK_LINE(30)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(30)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(30)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(30)
		if ((tmp12)){
			HX_STACK_LINE(30)
			int tmp14 = this->touching;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(30)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(30)
			int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(30)
			int tmp17 = (int(tmp16) & int((int)4096));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(30)
			int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(30)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(30)
			tmp13 = (tmp19 > (int)0);
		}
		else{
			HX_STACK_LINE(30)
			tmp13 = true;
		}
		HX_STACK_LINE(30)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(30)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(30)
		if ((tmp14)){
			HX_STACK_LINE(30)
			int tmp16 = this->touching;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(30)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(30)
			int tmp18 = (int(tmp17) & int((int)256));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(30)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(30)
			tmp15 = (tmp19 > (int)0);
		}
		else{
			HX_STACK_LINE(30)
			tmp15 = true;
		}
		HX_STACK_LINE(30)
		if ((tmp15)){
			HX_STACK_LINE(32)
			this->kill();
		}
		HX_STACK_LINE(35)
		Float tmp16 = elapsed;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(35)
		this->super::update(tmp16);
	}
return null();
}


Void CoinBullet_obj::collide( ::Entity o1,::Entity o2){
{
		HX_STACK_FRAME("CoinBullet","collide",0x22387ee3,"CoinBullet.collide","CoinBullet.hx",40,0xf2c7c5cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(o1,"o1")
		HX_STACK_ARG(o2,"o2")
		HX_STACK_LINE(41)
		bool tmp = o1->checkTag(HX_HCSTRING("Alive","\xad","\xd3","\xbe","\xb4"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		if ((tmp1)){
			HX_STACK_LINE(41)
			tmp2 = o2->checkTag(HX_HCSTRING("Alive","\xad","\xd3","\xbe","\xb4"));
		}
		else{
			HX_STACK_LINE(41)
			tmp2 = true;
		}
		HX_STACK_LINE(41)
		if ((tmp2)){
			HX_STACK_LINE(42)
			o1->kill();
			HX_STACK_LINE(43)
			o2->kill();
		}
	}
return null();
}



CoinBullet_obj::CoinBullet_obj()
{
}

Dynamic CoinBullet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
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
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("collide","\x7e","\xaf","\x63","\xed"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CoinBullet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CoinBullet_obj::__mClass,"__mClass");
};

#endif

hx::Class CoinBullet_obj::__mClass;

void CoinBullet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("CoinBullet","\xd3","\xc2","\x38","\x27");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CoinBullet_obj >;
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

