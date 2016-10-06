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
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

Void Player_obj::__construct(int X,int Y,::PlayState play)
{
HX_STACK_FRAME("Player","new",0x8d5554f3,"Player.new","Player.hx",13,0xa27fc9dd)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(play,"play")
{
	HX_STACK_LINE(20)
	this->coins = (int)0;
	HX_STACK_LINE(26)
	int tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	int tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	::PlayState tmp2 = play;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(26)
	super::__construct(tmp,tmp1,tmp2,HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"),null());
	HX_STACK_LINE(28)
	this->loadGraphic(HX_HCSTRING("assets/images/player.png","\x87","\x88","\x81","\xc6"),true,(int)16,(int)16,null(),null());
	HX_STACK_LINE(30)
	::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(30)
	tmp3->add(HX_HCSTRING("walking","\x79","\xbb","\x68","\x93"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3),(int)12,true,null(),null());
	HX_STACK_LINE(31)
	::flixel::animation::FlxAnimationController tmp4 = this->animation;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(31)
	tmp4->add(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),Array_obj< int >::__new().Add((int)3),null(),null(),null(),null());
	HX_STACK_LINE(32)
	::flixel::animation::FlxAnimationController tmp5 = this->animation;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(32)
	tmp5->add(HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"),Array_obj< int >::__new().Add((int)2),null(),null(),null(),null());
	HX_STACK_LINE(34)
	::flixel::math::FlxPoint tmp6 = this->drag;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(34)
	int tmp7 = (int)1200;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(34)
	int tmp8 = (int)1200;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(34)
	tmp6->set(tmp7,tmp8);
	HX_STACK_LINE(35)
	::flixel::math::FlxPoint tmp9 = this->maxVelocity;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(35)
	int tmp10 = (int)450;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(35)
	int tmp11 = (int)750;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(35)
	tmp9->set(tmp10,tmp11);
	HX_STACK_LINE(36)
	::flixel::math::FlxPoint tmp12 = this->acceleration;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(36)
	tmp12->set_y((int)620);
	HX_STACK_LINE(37)
	this->setSize((int)12,(int)16);
	HX_STACK_LINE(40)
	::abilites::megaJump::MegaJump tmp13 = ::abilites::megaJump::MegaJump_obj::__new(((::flixel::FlxSprite)(hx::ObjectPtr<OBJ_>(this))),play);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(40)
	this->ability = tmp13;
	HX_STACK_LINE(44)
	int tmp14 = ::Player_obj::HEALTH;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(44)
	this->health = tmp14;
	HX_STACK_LINE(47)
	int tmp15 = this->coins;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(47)
	::String tmp16 = (HX_HCSTRING("Coin = ","\x52","\x00","\x9c","\x01") + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(47)
	::flixel::text::FlxText tmp17 = ::flixel::text::FlxText_obj::__new((int)10,(int)10,(int)200,tmp16,(int)18,null());		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(47)
	::flixel::text::FlxText tmp18 = this->textCoins = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(47)
	play->add(tmp18);
	HX_STACK_LINE(48)
	Float tmp19 = this->health;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(48)
	::String tmp20 = (HX_HCSTRING("Health = ","\x27","\x7e","\x4b","\xe4") + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(48)
	::flixel::text::FlxText tmp21 = ::flixel::text::FlxText_obj::__new((int)100,(int)10,(int)200,tmp20,(int)18,null());		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(48)
	::flixel::text::FlxText tmp22 = this->textHealth = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(48)
	play->add(tmp22);
	HX_STACK_LINE(50)
	::flixel::text::FlxText tmp23 = this->textHealth;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(50)
	tmp23->scrollFactor->set((int)0,(int)0);
	HX_STACK_LINE(51)
	::flixel::text::FlxText tmp24 = this->textCoins;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(51)
	tmp24->scrollFactor->set((int)0,(int)0);
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new(int X,int Y,::PlayState play)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct(X,Y,play);
	return _result_;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void Player_obj::update( Float elapsed){
{
		HX_STACK_FRAME("Player","update",0xf1f8df56,"Player.update","Player.hx",55,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(56)
		::flixel::math::FlxPoint tmp = this->acceleration;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		tmp->set_x((int)0);
		HX_STACK_LINE(58)
		::flixel::input::keyboard::FlxKeyboard tmp1 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		bool tmp2 = tmp1->checkKeyArrayState(Array_obj< int >::__new().Add((int)37).Add((int)65),(int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		if ((tmp2)){
			HX_STACK_LINE(60)
			this->set_flipX(true);
			HX_STACK_LINE(61)
			::flixel::math::FlxPoint tmp3 = this->acceleration;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(61)
			int tmp4 = (int)-150;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(61)
			tmp3->set_x(tmp4);
			HX_STACK_LINE(62)
			this->set_facing((int)1);
		}
		else{
			HX_STACK_LINE(65)
			::flixel::input::keyboard::FlxKeyboard tmp3 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(65)
			bool tmp4 = tmp3->checkKeyArrayState(Array_obj< int >::__new().Add((int)39).Add((int)68),(int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(65)
			if ((tmp4)){
				HX_STACK_LINE(67)
				this->set_flipX(false);
				HX_STACK_LINE(68)
				::flixel::math::FlxPoint tmp5 = this->acceleration;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(68)
				tmp5->set_x((int)150);
				HX_STACK_LINE(70)
				this->set_facing((int)16);
			}
		}
		HX_STACK_LINE(73)
		::flixel::input::keyboard::FlxKeyboard tmp3 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(73)
		bool tmp4 = tmp3->checkKeyArrayState(Array_obj< int >::__new().Add((int)38).Add((int)87),(int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(73)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(73)
		if ((tmp4)){
			HX_STACK_LINE(73)
			int tmp6 = this->touching;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(73)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(73)
			int tmp8 = (int(tmp7) & int((int)4096));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(73)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(73)
			tmp5 = (tmp9 > (int)0);
		}
		else{
			HX_STACK_LINE(73)
			tmp5 = false;
		}
		HX_STACK_LINE(73)
		if ((tmp5)){
			HX_STACK_LINE(75)
			::flixel::math::FlxPoint tmp6 = this->velocity;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(75)
			int tmp7 = (int)-250;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(75)
			tmp6->set_y(tmp7);
		}
		else{
			HX_STACK_LINE(78)
			::flixel::math::FlxPoint tmp6 = this->acceleration;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(78)
			tmp6->set_y((int)620);
		}
		HX_STACK_LINE(81)
		::flixel::input::keyboard::FlxKeyboard tmp6 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(81)
		bool tmp7 = tmp6->checkKeyArrayState(Array_obj< int >::__new().Add((int)90),(int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(81)
		if ((tmp7)){
			HX_STACK_LINE(83)
			::Ability tmp8 = this->ability;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(83)
			Float tmp9 = elapsed;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(83)
			tmp8->use(tmp9);
			HX_STACK_LINE(84)
			int tmp10 = this->coins;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(84)
			Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("Player.hx","\xdd","\xc9","\x7f","\xa2"),84,HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"),HX_HCSTRING("update","\x09","\x86","\x05","\x87"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(84)
			::haxe::Log_obj::trace(tmp10,tmp11);
		}
		HX_STACK_LINE(88)
		::flixel::math::FlxPoint tmp8 = this->velocity;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(88)
		Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(88)
		bool tmp10 = (tmp9 > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(88)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(88)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(88)
		if ((tmp11)){
			HX_STACK_LINE(88)
			::flixel::math::FlxPoint tmp13 = this->velocity;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(88)
			::flixel::math::FlxPoint tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(88)
			Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(88)
			tmp12 = (tmp15 < (int)0);
		}
		else{
			HX_STACK_LINE(88)
			tmp12 = true;
		}
		HX_STACK_LINE(88)
		if ((tmp12)){
			HX_STACK_LINE(90)
			::flixel::animation::FlxAnimationController tmp13 = this->animation;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(90)
			tmp13->play(HX_HCSTRING("walking","\x79","\xbb","\x68","\x93"),null(),null(),null());
		}
		else{
			HX_STACK_LINE(92)
			::flixel::math::FlxPoint tmp13 = this->velocity;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(92)
			Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(92)
			bool tmp15 = (tmp14 == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(92)
			if ((tmp15)){
				HX_STACK_LINE(94)
				::flixel::animation::FlxAnimationController tmp16 = this->animation;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(94)
				tmp16->play(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),null(),null(),null());
			}
		}
		HX_STACK_LINE(96)
		::flixel::math::FlxPoint tmp13 = this->velocity;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(96)
		Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(96)
		bool tmp15 = (tmp14 < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(96)
		if ((tmp15)){
			HX_STACK_LINE(98)
			::flixel::animation::FlxAnimationController tmp16 = this->animation;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(98)
			tmp16->play(HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"),null(),null(),null());
		}
		HX_STACK_LINE(100)
		::flixel::text::FlxText tmp16 = this->textCoins;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(100)
		int tmp17 = this->coins;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(100)
		::String tmp18 = (HX_HCSTRING("Coin = ","\x52","\x00","\x9c","\x01") + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(100)
		tmp16->set_text(tmp18);
		HX_STACK_LINE(101)
		::flixel::text::FlxText tmp19 = this->textHealth;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(101)
		Float tmp20 = this->health;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(101)
		::String tmp21 = (HX_HCSTRING("Health = ","\x27","\x7e","\x4b","\xe4") + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(101)
		tmp19->set_text(tmp21);
		HX_STACK_LINE(102)
		Float tmp22 = this->y;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(102)
		bool tmp23 = (tmp22 >= (int)600);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(102)
		if ((tmp23)){
			HX_STACK_LINE(102)
			this->kill();
		}
		HX_STACK_LINE(103)
		Float tmp24 = elapsed;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(103)
		this->super::update(tmp24);
	}
return null();
}


Void Player_obj::collide( ::Entity o1,::Entity o2){
{
		HX_STACK_FRAME("Player","collide",0x175e7991,"Player.collide","Player.hx",107,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(o1,"o1")
		HX_STACK_ARG(o2,"o2")
		HX_STACK_LINE(109)
		bool tmp = (o1->name == HX_HCSTRING("JJ","\xc0","\x40","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(109)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(109)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(109)
		if ((tmp1)){
			HX_STACK_LINE(109)
			::flixel::math::FlxPoint tmp3 = this->velocity;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(109)
			::flixel::math::FlxPoint tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(109)
			::flixel::math::FlxPoint tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(109)
			Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(109)
			tmp2 = (tmp6 > (int)11);
		}
		else{
			HX_STACK_LINE(109)
			tmp2 = false;
		}
		HX_STACK_LINE(109)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(109)
		if ((tmp2)){
			HX_STACK_LINE(109)
			int tmp4 = this->touching;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(109)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(109)
			int tmp6 = (int(tmp5) & int((int)4096));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(109)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(109)
			bool tmp8 = (tmp7 > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(109)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(109)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(109)
			tmp3 = !(tmp10);
		}
		else{
			HX_STACK_LINE(109)
			tmp3 = false;
		}
		HX_STACK_LINE(109)
		if ((tmp3)){
			HX_STACK_LINE(110)
			o1->kill();
			HX_STACK_LINE(111)
			::flixel::math::FlxPoint tmp4 = this->velocity;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(111)
			tmp4->set_y((int)-200);
		}
		HX_STACK_LINE(114)
		bool tmp4 = (o2->name == HX_HCSTRING("JJ","\xc0","\x40","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(114)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(114)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(114)
		if ((tmp5)){
			HX_STACK_LINE(114)
			::flixel::math::FlxPoint tmp7 = this->velocity;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(114)
			::flixel::math::FlxPoint tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(114)
			::flixel::math::FlxPoint tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(114)
			Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(114)
			tmp6 = (tmp10 > (int)11);
		}
		else{
			HX_STACK_LINE(114)
			tmp6 = false;
		}
		HX_STACK_LINE(114)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(114)
		if ((tmp6)){
			HX_STACK_LINE(114)
			int tmp8 = this->touching;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(114)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(114)
			int tmp10 = (int(tmp9) & int((int)4096));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(114)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(114)
			bool tmp12 = (tmp11 > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(114)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(114)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(114)
			tmp7 = !(tmp14);
		}
		else{
			HX_STACK_LINE(114)
			tmp7 = false;
		}
		HX_STACK_LINE(114)
		if ((tmp7)){
			HX_STACK_LINE(115)
			o2->kill();
			HX_STACK_LINE(116)
			::flixel::math::FlxPoint tmp8 = this->velocity;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(116)
			tmp8->set_y((int)-200);
		}
		HX_STACK_LINE(119)
		bool tmp8 = (o1->name == HX_HCSTRING("JJRed","\x71","\x48","\xcf","\xcc"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(119)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(119)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(119)
		if ((tmp9)){
			HX_STACK_LINE(119)
			::flixel::math::FlxPoint tmp11 = this->velocity;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(119)
			::flixel::math::FlxPoint tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(119)
			::flixel::math::FlxPoint tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(119)
			Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(119)
			tmp10 = (tmp14 > (int)11);
		}
		else{
			HX_STACK_LINE(119)
			tmp10 = false;
		}
		HX_STACK_LINE(119)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(119)
		if ((tmp10)){
			HX_STACK_LINE(119)
			int tmp12 = this->touching;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(119)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(119)
			int tmp14 = (int(tmp13) & int((int)4096));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(119)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(119)
			bool tmp16 = (tmp15 > (int)0);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(119)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(119)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(119)
			tmp11 = !(tmp18);
		}
		else{
			HX_STACK_LINE(119)
			tmp11 = false;
		}
		HX_STACK_LINE(119)
		if ((tmp11)){
			HX_STACK_LINE(120)
			o1->kill();
			HX_STACK_LINE(121)
			::flixel::math::FlxPoint tmp12 = this->velocity;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(121)
			tmp12->set_y((int)-200);
		}
		HX_STACK_LINE(124)
		bool tmp12 = (o2->name == HX_HCSTRING("JJRed","\x71","\x48","\xcf","\xcc"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(124)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(124)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(124)
		if ((tmp13)){
			HX_STACK_LINE(124)
			::flixel::math::FlxPoint tmp15 = this->velocity;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(124)
			::flixel::math::FlxPoint tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(124)
			::flixel::math::FlxPoint tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(124)
			Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(124)
			tmp14 = (tmp18 > (int)11);
		}
		else{
			HX_STACK_LINE(124)
			tmp14 = false;
		}
		HX_STACK_LINE(124)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(124)
		if ((tmp14)){
			HX_STACK_LINE(124)
			int tmp16 = this->touching;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(124)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(124)
			int tmp18 = (int(tmp17) & int((int)4096));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(124)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(124)
			bool tmp20 = (tmp19 > (int)0);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(124)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(124)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(124)
			tmp15 = !(tmp22);
		}
		else{
			HX_STACK_LINE(124)
			tmp15 = false;
		}
		HX_STACK_LINE(124)
		if ((tmp15)){
			HX_STACK_LINE(125)
			o2->kill();
			HX_STACK_LINE(126)
			::flixel::math::FlxPoint tmp16 = this->velocity;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(126)
			tmp16->set_y((int)-200);
		}
	}
return null();
}


Void Player_obj::kill( ){
{
		HX_STACK_FRAME("Player","kill",0x1b5c5bab,"Player.kill","Player.hx",133,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(135)
		::PlayState tmp = this->play;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(135)
		Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(135)
		Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(135)
		Float tmp3 = (tmp2 + (int)10);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(135)
		::flixel::text::FlxText tmp4 = ::flixel::text::FlxText_obj::__new(tmp1,tmp3,(int)100,HX_HCSTRING("R to reset","\xf8","\x8e","\xe5","\x9a"),(int)20,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(135)
		tmp->add(tmp4);
		HX_STACK_LINE(136)
		this->super::kill();
	}
return null();
}


int Player_obj::RUN_SPEED;

int Player_obj::GRAVITY;

int Player_obj::JUMP_SPEED;

int Player_obj::HEALTH;


Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(ability,"ability");
	HX_MARK_MEMBER_NAME(coins,"coins");
	HX_MARK_MEMBER_NAME(textCoins,"textCoins");
	HX_MARK_MEMBER_NAME(textHealth,"textHealth");
	::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ability,"ability");
	HX_VISIT_MEMBER_NAME(coins,"coins");
	HX_VISIT_MEMBER_NAME(textCoins,"textCoins");
	HX_VISIT_MEMBER_NAME(textHealth,"textHealth");
	::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Player_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"coins") ) { return coins; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ability") ) { return ability; }
		if (HX_FIELD_EQ(inName,"collide") ) { return collide_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textCoins") ) { return textCoins; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textHealth") ) { return textHealth; }
	}
	return super::__Field(inName,inCallProp);
}

bool Player_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"HEALTH") ) { outValue = HEALTH; return true;  }
	}
	return false;
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"coins") ) { coins=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ability") ) { ability=inValue.Cast< ::Ability >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textCoins") ) { textCoins=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textHealth") ) { textHealth=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Player_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"HEALTH") ) { HEALTH=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ability","\xaa","\x61","\x61","\xad"));
	outFields->push(HX_HCSTRING("coins","\xc2","\x29","\x5a","\x4a"));
	outFields->push(HX_HCSTRING("textCoins","\xd5","\xb9","\x47","\xe3"));
	outFields->push(HX_HCSTRING("textHealth","\x29","\xa9","\xf6","\x33"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Ability*/ ,(int)offsetof(Player_obj,ability),HX_HCSTRING("ability","\xaa","\x61","\x61","\xad")},
	{hx::fsInt,(int)offsetof(Player_obj,coins),HX_HCSTRING("coins","\xc2","\x29","\x5a","\x4a")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(Player_obj,textCoins),HX_HCSTRING("textCoins","\xd5","\xb9","\x47","\xe3")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(Player_obj,textHealth),HX_HCSTRING("textHealth","\x29","\xa9","\xf6","\x33")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Player_obj::RUN_SPEED,HX_HCSTRING("RUN_SPEED","\x13","\xcc","\xdc","\x35")},
	{hx::fsInt,(void *) &Player_obj::GRAVITY,HX_HCSTRING("GRAVITY","\x2e","\x42","\xd3","\xf7")},
	{hx::fsInt,(void *) &Player_obj::JUMP_SPEED,HX_HCSTRING("JUMP_SPEED","\x16","\x0a","\xcf","\xcd")},
	{hx::fsInt,(void *) &Player_obj::HEALTH,HX_HCSTRING("HEALTH","\x9c","\xd4","\x88","\xaf")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("ability","\xaa","\x61","\x61","\xad"),
	HX_HCSTRING("coins","\xc2","\x29","\x5a","\x4a"),
	HX_HCSTRING("textCoins","\xd5","\xb9","\x47","\xe3"),
	HX_HCSTRING("textHealth","\x29","\xa9","\xf6","\x33"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("collide","\x7e","\xaf","\x63","\xed"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Player_obj::RUN_SPEED,"RUN_SPEED");
	HX_MARK_MEMBER_NAME(Player_obj::GRAVITY,"GRAVITY");
	HX_MARK_MEMBER_NAME(Player_obj::JUMP_SPEED,"JUMP_SPEED");
	HX_MARK_MEMBER_NAME(Player_obj::HEALTH,"HEALTH");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Player_obj::RUN_SPEED,"RUN_SPEED");
	HX_VISIT_MEMBER_NAME(Player_obj::GRAVITY,"GRAVITY");
	HX_VISIT_MEMBER_NAME(Player_obj::JUMP_SPEED,"JUMP_SPEED");
	HX_VISIT_MEMBER_NAME(Player_obj::HEALTH,"HEALTH");
};

#endif

hx::Class Player_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("RUN_SPEED","\x13","\xcc","\xdc","\x35"),
	HX_HCSTRING("GRAVITY","\x2e","\x42","\xd3","\xf7"),
	HX_HCSTRING("JUMP_SPEED","\x16","\x0a","\xcf","\xcd"),
	HX_HCSTRING("HEALTH","\x9c","\xd4","\x88","\xaf"),
	::String(null()) };

void Player_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Player_obj::__GetStatic;
	__mClass->mSetStaticField = &Player_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Player_obj >;
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

void Player_obj::__boot()
{
	RUN_SPEED= (int)150;
	GRAVITY= (int)620;
	JUMP_SPEED= (int)250;
	HEALTH= (int)100;
}

