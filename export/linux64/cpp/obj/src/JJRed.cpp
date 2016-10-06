#include <hxcpp.h>

#ifndef INCLUDED_Entity
#include <Entity.h>
#endif
#ifndef INCLUDED_JJRed
#include <JJRed.h>
#endif
#ifndef INCLUDED_MapLoader
#include <MapLoader.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
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

Void JJRed_obj::__construct(int X,int Y,::PlayState Play)
{
HX_STACK_FRAME("JJRed","new",0xe91675e3,"JJRed.new","JJRed.hx",10,0xc0c216ed)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(Play,"Play")
{
	HX_STACK_LINE(11)
	int tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	int tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11)
	::PlayState tmp2 = Play;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(11)
	super::__construct(tmp,tmp1,tmp2,HX_HCSTRING("JJRed","\x71","\x48","\xcf","\xcc"),null());
	HX_STACK_LINE(12)
	this->loadGraphic(HX_HCSTRING("assets/images/jjred.png","\x41","\x29","\x14","\x48"),true,(int)16,(int)16,null(),null());
	HX_STACK_LINE(14)
	::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(14)
	tmp3->add(HX_HCSTRING("walking","\x79","\xbb","\x68","\x93"),Array_obj< int >::__new().Add((int)0).Add((int)1),(int)6,true,null(),null());
	HX_STACK_LINE(15)
	::flixel::animation::FlxAnimationController tmp4 = this->animation;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(15)
	tmp4->add(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),Array_obj< int >::__new().Add((int)0),null(),null(),null(),null());
	HX_STACK_LINE(16)
	this->addTag(HX_HCSTRING("Alive","\xad","\xd3","\xbe","\xb4"));
}
;
	return null();
}

//JJRed_obj::~JJRed_obj() { }

Dynamic JJRed_obj::__CreateEmpty() { return  new JJRed_obj; }
hx::ObjectPtr< JJRed_obj > JJRed_obj::__new(int X,int Y,::PlayState Play)
{  hx::ObjectPtr< JJRed_obj > _result_ = new JJRed_obj();
	_result_->__construct(X,Y,Play);
	return _result_;}

Dynamic JJRed_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JJRed_obj > _result_ = new JJRed_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void JJRed_obj::update( Float elapsed){
{
		HX_STACK_FRAME("JJRed","update",0x6a4ef466,"JJRed.update","JJRed.hx",21,0xc0c216ed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(22)
		::flixel::math::FlxPoint tmp = this->acceleration;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		tmp->set_y((int)620);
		HX_STACK_LINE(24)
		::flixel::math::FlxPoint tmp1 = this->velocity;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(24)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(24)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(24)
		if ((tmp4)){
			HX_STACK_LINE(24)
			::flixel::math::FlxPoint tmp6 = this->velocity;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(24)
			::flixel::math::FlxPoint tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(24)
			Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(24)
			tmp5 = (tmp8 < (int)0);
		}
		else{
			HX_STACK_LINE(24)
			tmp5 = true;
		}
		HX_STACK_LINE(24)
		if ((tmp5)){
			HX_STACK_LINE(26)
			::flixel::animation::FlxAnimationController tmp6 = this->animation;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(26)
			tmp6->play(HX_HCSTRING("walking","\x79","\xbb","\x68","\x93"),null(),null(),null());
		}
		else{
			HX_STACK_LINE(28)
			::flixel::math::FlxPoint tmp6 = this->velocity;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(28)
			Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(28)
			bool tmp8 = (tmp7 == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(28)
			if ((tmp8)){
				HX_STACK_LINE(30)
				::flixel::animation::FlxAnimationController tmp9 = this->animation;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(30)
				tmp9->play(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),null(),null(),null());
			}
		}
		HX_STACK_LINE(33)
		::PlayState tmp6 = this->play;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(33)
		::Entity tmp7 = tmp6->loader->getEntity(HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(33)
		::Entity p = tmp7;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(34)
		Float tmp8 = p->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(34)
		Float tmp9 = this->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(34)
		Float tmp10 = (tmp9 - (int)32);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(34)
		bool tmp11 = (tmp8 >= tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(34)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(34)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(34)
		if ((tmp12)){
			HX_STACK_LINE(34)
			Float tmp14 = p->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(34)
			Float tmp15 = this->y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(34)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(34)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(34)
			Float tmp18 = (tmp17 - (int)32);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(34)
			Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(34)
			Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(34)
			tmp13 = (tmp14 >= tmp20);
		}
		else{
			HX_STACK_LINE(34)
			tmp13 = false;
		}
		HX_STACK_LINE(34)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(34)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(34)
		if ((tmp14)){
			HX_STACK_LINE(34)
			Float tmp16 = p->x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(34)
			Float tmp17 = this->x;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(34)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(34)
			Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(34)
			tmp15 = (tmp16 <= tmp19);
		}
		else{
			HX_STACK_LINE(34)
			tmp15 = false;
		}
		HX_STACK_LINE(34)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(34)
		if ((tmp15)){
			HX_STACK_LINE(34)
			Float tmp17 = p->y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(34)
			Float tmp18 = this->y;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(34)
			Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(34)
			tmp16 = (tmp17 <= tmp19);
		}
		else{
			HX_STACK_LINE(34)
			tmp16 = false;
		}
		HX_STACK_LINE(34)
		if ((tmp16)){
			HX_STACK_LINE(35)
			::flixel::math::FlxPoint tmp17 = this->velocity;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(35)
			tmp17->set_y((int)-150);
		}
		HX_STACK_LINE(37)
		Float tmp17 = p->x;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(37)
		Float tmp18 = this->x;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(37)
		bool tmp19 = (tmp17 >= tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(37)
		bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(37)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(37)
		if ((tmp20)){
			HX_STACK_LINE(37)
			Float tmp22 = p->y;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(37)
			Float tmp23 = this->y;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(37)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(37)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(37)
			tmp21 = (tmp22 >= tmp25);
		}
		else{
			HX_STACK_LINE(37)
			tmp21 = false;
		}
		HX_STACK_LINE(37)
		bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(37)
		bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(37)
		if ((tmp22)){
			HX_STACK_LINE(37)
			Float tmp24 = p->x;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(37)
			Float tmp25 = this->x;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(37)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(37)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(37)
			Float tmp28 = (tmp27 + (int)32);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(37)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(37)
			Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(37)
			tmp23 = (tmp24 <= tmp30);
		}
		else{
			HX_STACK_LINE(37)
			tmp23 = false;
		}
		HX_STACK_LINE(37)
		bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(37)
		if ((tmp23)){
			HX_STACK_LINE(37)
			Float tmp25 = p->y;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(37)
			Float tmp26 = this->y;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(37)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(37)
			Float tmp28 = (tmp27 + (int)32);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(37)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(37)
			tmp24 = (tmp25 <= tmp29);
		}
		else{
			HX_STACK_LINE(37)
			tmp24 = false;
		}
		HX_STACK_LINE(37)
		if ((tmp24)){
			HX_STACK_LINE(38)
			::flixel::math::FlxPoint tmp25 = this->velocity;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(38)
			tmp25->set_y((int)-150);
		}
		HX_STACK_LINE(41)
		Float tmp25 = elapsed;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(41)
		this->super::update(tmp25);
	}
return null();
}


Void JJRed_obj::collide( ::Entity o1,::Entity o2){
{
		HX_STACK_FRAME("JJRed","collide",0xea5ad281,"JJRed.collide","JJRed.hx",46,0xc0c216ed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(o1,"o1")
		HX_STACK_ARG(o2,"o2")
		HX_STACK_LINE(48)
		bool tmp = (o2->name == HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		if ((tmp)){
			HX_STACK_LINE(49)
			o2->hurt((int)10);
			HX_STACK_LINE(50)
			o2->velocity->set_y((int)-250);
		}
		HX_STACK_LINE(53)
		bool tmp1 = (o1->name == HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(53)
		if ((tmp1)){
			HX_STACK_LINE(54)
			o1->hurt((int)10);
			HX_STACK_LINE(56)
			o2->velocity->set_y((int)-250);
		}
	}
return null();
}


Void JJRed_obj::kill( ){
{
		HX_STACK_FRAME("JJRed","kill",0x08980cbb,"JJRed.kill","JJRed.hx",62,0xc0c216ed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(63)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		int tmp1 = ((int)(tmp));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(63)
		Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(63)
		int tmp3 = ((int)(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(63)
		::PlayState tmp4 = this->play;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(63)
		::abilites::megaJump::MegaJumpObject tmp5 = ::abilites::megaJump::MegaJumpObject_obj::__new(tmp1,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(63)
		::abilites::megaJump::MegaJumpObject C = tmp5;		HX_STACK_VAR(C,"C");
		HX_STACK_LINE(64)
		::PlayState tmp6 = this->play;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(64)
		::abilites::megaJump::MegaJumpObject tmp7 = C;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(64)
		tmp6->add(tmp7);
		HX_STACK_LINE(65)
		::PlayState tmp8 = this->play;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(65)
		::flixel::group::FlxTypedGroup tmp9 = tmp8->loader->actors;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(65)
		::abilites::megaJump::MegaJumpObject tmp10 = C;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(65)
		tmp9->add(tmp10);
		HX_STACK_LINE(66)
		this->super::kill();
	}
return null();
}


int JJRed_obj::GRAVITY;


JJRed_obj::JJRed_obj()
{
}

Dynamic JJRed_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	{hx::fsInt,(void *) &JJRed_obj::GRAVITY,HX_HCSTRING("GRAVITY","\x2e","\x42","\xd3","\xf7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("collide","\x7e","\xaf","\x63","\xed"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JJRed_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JJRed_obj::GRAVITY,"GRAVITY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JJRed_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JJRed_obj::GRAVITY,"GRAVITY");
};

#endif

hx::Class JJRed_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("GRAVITY","\x2e","\x42","\xd3","\xf7"),
	::String(null()) };

void JJRed_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("JJRed","\x71","\x48","\xcf","\xcc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< JJRed_obj >;
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

void JJRed_obj::__boot()
{
	GRAVITY= (int)620;
}

