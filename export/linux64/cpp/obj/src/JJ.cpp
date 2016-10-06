#include <hxcpp.h>

#ifndef INCLUDED_Coin
#include <Coin.h>
#endif
#ifndef INCLUDED_Entity
#include <Entity.h>
#endif
#ifndef INCLUDED_JJ
#include <JJ.h>
#endif
#ifndef INCLUDED_MapLoader
#include <MapLoader.h>
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

Void JJ_obj::__construct(int X,int Y,::PlayState Play)
{
HX_STACK_FRAME("JJ","new",0x50cb41b2,"JJ.new","JJ.hx",13,0xccb3f9fe)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(Play,"Play")
{
	HX_STACK_LINE(14)
	int tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	int tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	::PlayState tmp2 = Play;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(14)
	super::__construct(tmp,tmp1,tmp2,HX_HCSTRING("JJ","\xc0","\x40","\x00","\x00"),null());
	HX_STACK_LINE(15)
	this->loadGraphic(HX_HCSTRING("assets/images/jj.png","\xe6","\xc3","\xdb","\xcd"),true,(int)16,(int)16,null(),null());
	HX_STACK_LINE(17)
	::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(17)
	tmp3->add(HX_HCSTRING("walking","\x79","\xbb","\x68","\x93"),Array_obj< int >::__new().Add((int)0).Add((int)1),(int)6,true,null(),null());
	HX_STACK_LINE(18)
	::flixel::animation::FlxAnimationController tmp4 = this->animation;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(18)
	tmp4->add(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),Array_obj< int >::__new().Add((int)0),null(),null(),null(),null());
	HX_STACK_LINE(20)
	this->addTag(HX_HCSTRING("Alive","\xad","\xd3","\xbe","\xb4"));
	HX_STACK_LINE(22)
	::flixel::math::FlxPoint tmp5 = this->acceleration;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(22)
	tmp5->set_x((int)100);
}
;
	return null();
}

//JJ_obj::~JJ_obj() { }

Dynamic JJ_obj::__CreateEmpty() { return  new JJ_obj; }
hx::ObjectPtr< JJ_obj > JJ_obj::__new(int X,int Y,::PlayState Play)
{  hx::ObjectPtr< JJ_obj > _result_ = new JJ_obj();
	_result_->__construct(X,Y,Play);
	return _result_;}

Dynamic JJ_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JJ_obj > _result_ = new JJ_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void JJ_obj::update( Float elapsed){
{
		HX_STACK_FRAME("JJ","update",0x823e33f7,"JJ.update","JJ.hx",27,0xccb3f9fe)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(28)
		::flixel::math::FlxPoint tmp = this->acceleration;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		tmp->set_y((int)620);
		HX_STACK_LINE(30)
		int tmp1 = this->touching;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		int tmp2 = (int(tmp1) & int((int)1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(30)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(30)
		if ((tmp3)){
			HX_STACK_LINE(30)
			::flixel::math::FlxPoint tmp4 = this->acceleration;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(30)
			tmp4->set_x((int)100);
		}
		HX_STACK_LINE(31)
		int tmp4 = this->touching;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(31)
		int tmp5 = (int(tmp4) & int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(31)
		bool tmp6 = (tmp5 > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(31)
		if ((tmp6)){
			HX_STACK_LINE(31)
			::flixel::math::FlxPoint tmp7 = this->acceleration;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(31)
			tmp7->set_x((int)-100);
		}
		HX_STACK_LINE(33)
		::flixel::math::FlxPoint tmp7 = this->velocity;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(33)
		Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(33)
		bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(33)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(33)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(33)
		if ((tmp10)){
			HX_STACK_LINE(33)
			::flixel::math::FlxPoint tmp12 = this->velocity;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(33)
			::flixel::math::FlxPoint tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(33)
			Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(33)
			tmp11 = (tmp14 < (int)0);
		}
		else{
			HX_STACK_LINE(33)
			tmp11 = true;
		}
		HX_STACK_LINE(33)
		if ((tmp11)){
			HX_STACK_LINE(35)
			::flixel::animation::FlxAnimationController tmp12 = this->animation;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(35)
			tmp12->play(HX_HCSTRING("walking","\x79","\xbb","\x68","\x93"),null(),null(),null());
		}
		else{
			HX_STACK_LINE(37)
			::flixel::math::FlxPoint tmp12 = this->velocity;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(37)
			Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(37)
			bool tmp14 = (tmp13 == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(37)
			if ((tmp14)){
				HX_STACK_LINE(39)
				::flixel::animation::FlxAnimationController tmp15 = this->animation;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(39)
				tmp15->play(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),null(),null(),null());
			}
		}
		HX_STACK_LINE(42)
		Float tmp12 = elapsed;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(42)
		this->super::update(tmp12);
	}
return null();
}


Void JJ_obj::collide( ::Entity o1,::Entity o2){
{
		HX_STACK_FRAME("JJ","collide",0xc3c331d0,"JJ.collide","JJ.hx",47,0xccb3f9fe)
		HX_STACK_THIS(this)
		HX_STACK_ARG(o1,"o1")
		HX_STACK_ARG(o2,"o2")
		HX_STACK_LINE(48)
		bool tmp = (o2->name == HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		if ((tmp)){
			HX_STACK_LINE(49)
			o2->hurt((int)35);
		}
	}
return null();
}


Void JJ_obj::kill( ){
{
		HX_STACK_FRAME("JJ","kill",0x5f15960c,"JJ.kill","JJ.hx",54,0xccb3f9fe)
		HX_STACK_THIS(this)
		HX_STACK_LINE(55)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		int tmp1 = ((int)(tmp));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		int tmp3 = ((int)(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(55)
		::PlayState tmp4 = this->play;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(55)
		::Coin tmp5 = ::Coin_obj::__new(tmp1,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(55)
		::Coin C = tmp5;		HX_STACK_VAR(C,"C");
		HX_STACK_LINE(56)
		::PlayState tmp6 = this->play;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(56)
		::Coin tmp7 = C;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(56)
		tmp6->add(tmp7);
		HX_STACK_LINE(57)
		::PlayState tmp8 = this->play;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(57)
		::flixel::group::FlxTypedGroup tmp9 = tmp8->loader->actors;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(57)
		::Coin tmp10 = C;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(57)
		tmp9->add(tmp10);
		HX_STACK_LINE(58)
		this->super::kill();
	}
return null();
}


int JJ_obj::GRAVITY;


JJ_obj::JJ_obj()
{
}

Dynamic JJ_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
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
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &JJ_obj::GRAVITY,HX_HCSTRING("GRAVITY","\x2e","\x42","\xd3","\xf7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("collide","\x7e","\xaf","\x63","\xed"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JJ_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JJ_obj::GRAVITY,"GRAVITY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JJ_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JJ_obj::GRAVITY,"GRAVITY");
};

#endif

hx::Class JJ_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("GRAVITY","\x2e","\x42","\xd3","\xf7"),
	::String(null()) };

void JJ_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("JJ","\xc0","\x40","\x00","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< JJ_obj >;
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

void JJ_obj::__boot()
{
	GRAVITY= (int)620;
}

