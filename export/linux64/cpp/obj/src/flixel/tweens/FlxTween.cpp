#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#include <flixel/tweens/FlxTweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_AngleTween
#include <flixel/tweens/misc/AngleTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CircularMotion
#include <flixel/tweens/motion/CircularMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CubicMotion
#include <flixel/tweens/motion/CubicMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearMotion
#include <flixel/tweens/motion/LinearMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearPath
#include <flixel/tweens/motion/LinearPath.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadMotion
#include <flixel/tweens/motion/QuadMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadPath
#include <flixel/tweens/motion/QuadPath.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
namespace flixel{
namespace tweens{

Void FlxTween_obj::__construct(Dynamic Options)
{
HX_STACK_FRAME("flixel.tweens.FlxTween","new",0xa442439f,"flixel.tweens.FlxTween.new","flixel/tweens/FlxTween.hx",22,0x5d58d691)
HX_STACK_THIS(this)
HX_STACK_ARG(Options,"Options")
{
	HX_STACK_LINE(406)
	this->_waitingForRestart = false;
	HX_STACK_LINE(405)
	this->_running = false;
	HX_STACK_LINE(404)
	this->_delayToUse = ((Float)0);
	HX_STACK_LINE(403)
	this->_secondsSinceStart = ((Float)0);
	HX_STACK_LINE(401)
	this->loopDelay = ((Float)0);
	HX_STACK_LINE(396)
	this->startDelay = ((Float)0);
	HX_STACK_LINE(391)
	this->executions = (int)0;
	HX_STACK_LINE(384)
	this->scale = ((Float)0);
	HX_STACK_LINE(375)
	this->duration = ((Float)0);
	HX_STACK_LINE(374)
	this->active = false;
	HX_STACK_LINE(414)
	Dynamic tmp = Options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(414)
	Dynamic tmp1 = this->resolveTweenOptions(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(414)
	Options = tmp1;
	HX_STACK_LINE(416)
	Dynamic tmp2 = Options->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(416)
	this->set_type(tmp2);
	HX_STACK_LINE(417)
	this->onStart = Options->__Field(HX_HCSTRING("onStart","\xc3","\x12","\x49","\x1a"), hx::paccDynamic );
	HX_STACK_LINE(418)
	this->onUpdate = Options->__Field(HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"), hx::paccDynamic );
	HX_STACK_LINE(419)
	this->onComplete = Options->__Field(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"), hx::paccDynamic );
	HX_STACK_LINE(420)
	this->ease = Options->__Field(HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43"), hx::paccDynamic );
	HX_STACK_LINE(421)
	Dynamic tmp3 = Options->__Field(HX_HCSTRING("startDelay","\xc1","\xaf","\x3d","\xf3"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(421)
	Dynamic tmp4 = Options->__Field(HX_HCSTRING("loopDelay","\x7f","\xf6","\xd2","\x04"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(421)
	this->setDelays(tmp3,tmp4);
}
;
	return null();
}

//FlxTween_obj::~FlxTween_obj() { }

Dynamic FlxTween_obj::__CreateEmpty() { return  new FlxTween_obj; }
hx::ObjectPtr< FlxTween_obj > FlxTween_obj::__new(Dynamic Options)
{  hx::ObjectPtr< FlxTween_obj > _result_ = new FlxTween_obj();
	_result_->__construct(Options);
	return _result_;}

Dynamic FlxTween_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTween_obj > _result_ = new FlxTween_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *FlxTween_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxTween_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxTween_obj >(this); }
Dynamic FlxTween_obj::resolveTweenOptions( Dynamic Options){
	HX_STACK_FRAME("flixel.tweens.FlxTween","resolveTweenOptions",0x40bbd67e,"flixel.tweens.FlxTween.resolveTweenOptions","flixel/tweens/FlxTween.hx",425,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Options,"Options")
	HX_STACK_LINE(426)
	bool tmp = (Options == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(426)
	if ((tmp)){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tweens/FlxTween.hx",427,0x5d58d691)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , (int)8,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(427)
		Dynamic tmp1 = _Function_2_1::Block();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(427)
		Options = tmp1;
	}
	HX_STACK_LINE(429)
	bool tmp1 = (Options->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(429)
	if ((tmp1)){
		HX_STACK_LINE(430)
		Options->__FieldRef(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")) = (int)8;
	}
	HX_STACK_LINE(432)
	Dynamic tmp2 = Options;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(432)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,resolveTweenOptions,return )

Void FlxTween_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tweens.FlxTween","destroy",0xb268abb9,"flixel.tweens.FlxTween.destroy","flixel/tweens/FlxTween.hx",436,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_LINE(437)
		this->onStart = null();
		HX_STACK_LINE(438)
		this->onUpdate = null();
		HX_STACK_LINE(439)
		this->onComplete = null();
		HX_STACK_LINE(440)
		this->ease = null();
		HX_STACK_LINE(441)
		this->_chainedTweens = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,destroy,(void))

::flixel::tweens::FlxTween FlxTween_obj::then( ::flixel::tweens::FlxTween tween){
	HX_STACK_FRAME("flixel.tweens.FlxTween","then",0x19b266be,"flixel.tweens.FlxTween.then","flixel/tweens/FlxTween.hx",449,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tween,"tween")
	HX_STACK_LINE(450)
	::flixel::tweens::FlxTween tmp = tween;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(450)
	::flixel::tweens::FlxTween tmp1 = this->addChainedTween(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(450)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,then,return )

::flixel::tweens::FlxTween FlxTween_obj::wait( Float delay){
	HX_STACK_FRAME("flixel.tweens.FlxTween","wait",0x1ba8be56,"flixel.tweens.FlxTween.wait","flixel/tweens/FlxTween.hx",457,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(delay,"delay")
	HX_STACK_LINE(458)
	Float tmp = delay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(458)
	::flixel::tweens::misc::NumTween tmp1 = ::flixel::tweens::FlxTween_obj::num((int)0,(int)0,tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(458)
	::flixel::tweens::FlxTween tmp2 = this->addChainedTween(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(458)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,wait,return )

::flixel::tweens::FlxTween FlxTween_obj::addChainedTween( ::flixel::tweens::FlxTween tween){
	HX_STACK_FRAME("flixel.tweens.FlxTween","addChainedTween",0xc68ec82b,"flixel.tweens.FlxTween.addChainedTween","flixel/tweens/FlxTween.hx",462,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tween,"tween")
	HX_STACK_LINE(463)
	tween->setVarsOnEnd();
	HX_STACK_LINE(464)
	::flixel::tweens::FlxTweenManager tmp = ::flixel::tweens::FlxTween_obj::manager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(464)
	::flixel::tweens::FlxTween tmp1 = tween;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(464)
	tmp->remove(tmp1,false);
	HX_STACK_LINE(466)
	bool tmp2 = (this->_chainedTweens == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(466)
	if ((tmp2)){
		HX_STACK_LINE(467)
		this->_chainedTweens = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(469)
	::flixel::tweens::FlxTween tmp3 = tween;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(469)
	this->_chainedTweens->push(tmp3);
	HX_STACK_LINE(470)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,addChainedTween,return )

Void FlxTween_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.tweens.FlxTween","update",0xb905642a,"flixel.tweens.FlxTween.update","flixel/tweens/FlxTween.hx",474,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(475)
		hx::AddEq(this->_secondsSinceStart,elapsed);
		HX_STACK_LINE(476)
		int tmp = this->executions;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(476)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(476)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(476)
		if ((tmp1)){
			HX_STACK_LINE(476)
			tmp2 = this->loopDelay;
		}
		else{
			HX_STACK_LINE(476)
			tmp2 = this->startDelay;
		}
		HX_STACK_LINE(476)
		Float delay = tmp2;		HX_STACK_VAR(delay,"delay");
		HX_STACK_LINE(477)
		Float tmp3 = this->_secondsSinceStart;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(477)
		Float tmp4 = delay;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(477)
		bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(477)
		if ((tmp5)){
			HX_STACK_LINE(479)
			return null();
		}
		HX_STACK_LINE(481)
		Float tmp6 = this->_secondsSinceStart;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(481)
		Float tmp7 = delay;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(481)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(481)
		Float tmp9 = ::Math_obj::max(tmp8,(int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(481)
		Float tmp10 = this->duration;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(481)
		Float tmp11 = (Float(tmp9) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(481)
		this->scale = tmp11;
		HX_STACK_LINE(482)
		Dynamic tmp12 = this->ease_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(482)
		bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(482)
		if ((tmp13)){
			HX_STACK_LINE(484)
			Float tmp14 = this->scale;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(484)
			Float tmp15 = this->ease(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(484)
			this->scale = tmp15;
		}
		HX_STACK_LINE(486)
		bool tmp14 = this->backward;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(486)
		if ((tmp14)){
			HX_STACK_LINE(488)
			Float tmp15 = this->scale;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(488)
			Float tmp16 = ((int)1 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(488)
			this->scale = tmp16;
		}
		HX_STACK_LINE(490)
		Float tmp15 = this->_secondsSinceStart;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(490)
		Float tmp16 = delay;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(490)
		bool tmp17 = (tmp15 > tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(490)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(490)
		if ((tmp17)){
			HX_STACK_LINE(490)
			bool tmp19 = this->_running;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(490)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(490)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(490)
			tmp18 = !(tmp21);
		}
		else{
			HX_STACK_LINE(490)
			tmp18 = false;
		}
		HX_STACK_LINE(490)
		if ((tmp18)){
			HX_STACK_LINE(492)
			this->_running = true;
			HX_STACK_LINE(493)
			Dynamic tmp19 = this->onStart_dyn();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(493)
			bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(493)
			if ((tmp20)){
				HX_STACK_LINE(494)
				this->onStart(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(496)
		Float tmp19 = this->_secondsSinceStart;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(496)
		Float tmp20 = this->duration;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(496)
		Float tmp21 = delay;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(496)
		Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(496)
		bool tmp23 = (tmp19 >= tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(496)
		if ((tmp23)){
			HX_STACK_LINE(498)
			bool tmp24 = this->backward;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(498)
			Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(498)
			if ((tmp24)){
				HX_STACK_LINE(498)
				tmp25 = (int)0;
			}
			else{
				HX_STACK_LINE(498)
				tmp25 = (int)1;
			}
			HX_STACK_LINE(498)
			this->scale = tmp25;
			HX_STACK_LINE(499)
			this->finished = true;
		}
		else{
			HX_STACK_LINE(503)
			Dynamic tmp24 = this->onUpdate_dyn();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(503)
			bool tmp25 = (tmp24 != null());		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(503)
			if ((tmp25)){
				HX_STACK_LINE(504)
				this->onUpdate(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,update,(void))

::flixel::tweens::FlxTween FlxTween_obj::start( ){
	HX_STACK_FRAME("flixel.tweens.FlxTween","start",0xd6ec7561,"flixel.tweens.FlxTween.start","flixel/tweens/FlxTween.hx",512,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_LINE(513)
	this->_waitingForRestart = false;
	HX_STACK_LINE(514)
	this->_secondsSinceStart = (int)0;
	HX_STACK_LINE(515)
	int tmp = this->executions;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(515)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(515)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(515)
	if ((tmp1)){
		HX_STACK_LINE(515)
		tmp2 = this->loopDelay;
	}
	else{
		HX_STACK_LINE(515)
		tmp2 = this->startDelay;
	}
	HX_STACK_LINE(515)
	this->_delayToUse = tmp2;
	HX_STACK_LINE(516)
	Float tmp3 = this->duration;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(516)
	bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(516)
	if ((tmp4)){
		HX_STACK_LINE(518)
		this->set_active(false);
		HX_STACK_LINE(519)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(521)
	this->set_active(true);
	HX_STACK_LINE(522)
	this->_running = false;
	HX_STACK_LINE(523)
	this->finished = false;
	HX_STACK_LINE(524)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,start,return )

Void FlxTween_obj::cancel( ){
{
		HX_STACK_FRAME("flixel.tweens.FlxTween","cancel",0xea33cb9b,"flixel.tweens.FlxTween.cancel","flixel/tweens/FlxTween.hx",532,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_LINE(533)
		this->onEnd();
		HX_STACK_LINE(534)
		::flixel::tweens::FlxTweenManager tmp = ::flixel::tweens::FlxTween_obj::manager;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(534)
		tmp->remove(hx::ObjectPtr<OBJ_>(this),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,cancel,(void))

Void FlxTween_obj::finish( ){
{
		HX_STACK_FRAME("flixel.tweens.FlxTween","finish",0xb87f1e74,"flixel.tweens.FlxTween.finish","flixel/tweens/FlxTween.hx",538,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_LINE(539)
		(this->executions)++;
		HX_STACK_LINE(541)
		Dynamic tmp = this->onComplete_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(541)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(541)
		if ((tmp1)){
			HX_STACK_LINE(542)
			this->onComplete(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(544)
		int tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(544)
		int tmp3 = (int)-17;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(544)
		int tmp4 = (int(tmp2) & int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(544)
		int type = tmp4;		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(546)
		bool tmp5 = (type == (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(546)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(546)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(546)
		if ((tmp6)){
			HX_STACK_LINE(546)
			tmp7 = (type == (int)8);
		}
		else{
			HX_STACK_LINE(546)
			tmp7 = true;
		}
		HX_STACK_LINE(546)
		if ((tmp7)){
			HX_STACK_LINE(548)
			this->onEnd();
			HX_STACK_LINE(549)
			Float tmp8 = this->duration;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(549)
			Float tmp9 = this->startDelay;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(549)
			Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(549)
			this->_secondsSinceStart = tmp10;
			HX_STACK_LINE(551)
			bool tmp11 = (type == (int)8);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(551)
			if ((tmp11)){
				HX_STACK_LINE(553)
				::flixel::tweens::FlxTweenManager tmp12 = ::flixel::tweens::FlxTween_obj::manager;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(553)
				tmp12->remove(hx::ObjectPtr<OBJ_>(this),null());
			}
		}
		HX_STACK_LINE(557)
		bool tmp8 = (type == (int)2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(557)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(557)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(557)
		if ((tmp9)){
			HX_STACK_LINE(557)
			tmp10 = (type == (int)4);
		}
		else{
			HX_STACK_LINE(557)
			tmp10 = true;
		}
		HX_STACK_LINE(557)
		if ((tmp10)){
			HX_STACK_LINE(559)
			Float tmp11 = this->_secondsSinceStart;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(559)
			Float tmp12 = this->_delayToUse;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(559)
			Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(559)
			Float tmp14 = this->duration;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(559)
			Float tmp15 = hx::Mod(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(559)
			Float tmp16 = this->_delayToUse;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(559)
			Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(559)
			this->_secondsSinceStart = tmp17;
			HX_STACK_LINE(560)
			Float tmp18 = this->_secondsSinceStart;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(560)
			Float tmp19 = this->_delayToUse;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(560)
			Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(560)
			Float tmp21 = ::Math_obj::max(tmp20,(int)0);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(560)
			Float tmp22 = this->duration;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(560)
			Float tmp23 = (Float(tmp21) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(560)
			this->scale = tmp23;
			HX_STACK_LINE(562)
			Dynamic tmp24 = this->ease_dyn();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(562)
			bool tmp25 = (tmp24 != null());		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(562)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(562)
			bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(562)
			if ((tmp26)){
				HX_STACK_LINE(562)
				Float tmp28 = this->scale;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(562)
				Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(562)
				Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(562)
				tmp27 = (tmp30 > (int)0);
			}
			else{
				HX_STACK_LINE(562)
				tmp27 = false;
			}
			HX_STACK_LINE(562)
			bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(562)
			if ((tmp27)){
				HX_STACK_LINE(562)
				Float tmp29 = this->scale;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(562)
				Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(562)
				tmp28 = (tmp30 < (int)1);
			}
			else{
				HX_STACK_LINE(562)
				tmp28 = false;
			}
			HX_STACK_LINE(562)
			if ((tmp28)){
				HX_STACK_LINE(564)
				Float tmp29 = this->scale;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(564)
				Float tmp30 = this->ease(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(564)
				this->scale = tmp30;
			}
			HX_STACK_LINE(567)
			bool tmp29 = (type == (int)4);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(567)
			if ((tmp29)){
				HX_STACK_LINE(569)
				bool tmp30 = this->backward;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(569)
				bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(569)
				this->backward = tmp31;
				HX_STACK_LINE(570)
				bool tmp32 = this->backward;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(570)
				if ((tmp32)){
					HX_STACK_LINE(572)
					Float tmp33 = this->scale;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(572)
					Float tmp34 = ((int)1 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(572)
					this->scale = tmp34;
				}
			}
			HX_STACK_LINE(576)
			this->restart();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,finish,(void))

Void FlxTween_obj::onEnd( ){
{
		HX_STACK_FRAME("flixel.tweens.FlxTween","onEnd",0x854598fb,"flixel.tweens.FlxTween.onEnd","flixel/tweens/FlxTween.hx",584,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_LINE(585)
		this->setVarsOnEnd();
		HX_STACK_LINE(586)
		this->processTweenChain();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,onEnd,(void))

Void FlxTween_obj::setVarsOnEnd( ){
{
		HX_STACK_FRAME("flixel.tweens.FlxTween","setVarsOnEnd",0x855d798f,"flixel.tweens.FlxTween.setVarsOnEnd","flixel/tweens/FlxTween.hx",590,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_LINE(591)
		this->set_active(false);
		HX_STACK_LINE(592)
		this->_running = false;
		HX_STACK_LINE(593)
		this->finished = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,setVarsOnEnd,(void))

Void FlxTween_obj::processTweenChain( ){
{
		HX_STACK_FRAME("flixel.tweens.FlxTween","processTweenChain",0xe0e06164,"flixel.tweens.FlxTween.processTweenChain","flixel/tweens/FlxTween.hx",597,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_LINE(598)
		bool tmp = (this->_chainedTweens == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(598)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(598)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(598)
		if ((tmp1)){
			HX_STACK_LINE(598)
			int tmp3 = this->_chainedTweens->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(598)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(598)
			tmp2 = (tmp4 <= (int)0);
		}
		else{
			HX_STACK_LINE(598)
			tmp2 = true;
		}
		HX_STACK_LINE(598)
		if ((tmp2)){
			HX_STACK_LINE(599)
			return null();
		}
		HX_STACK_LINE(601)
		::flixel::tweens::FlxTween tmp3 = this->_chainedTweens->shift().StaticCast< ::flixel::tweens::FlxTween >();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(601)
		this->doNextTween(tmp3);
		HX_STACK_LINE(602)
		this->_chainedTweens = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,processTweenChain,(void))

Void FlxTween_obj::doNextTween( ::flixel::tweens::FlxTween tween){
{
		HX_STACK_FRAME("flixel.tweens.FlxTween","doNextTween",0xb736cdac,"flixel.tweens.FlxTween.doNextTween","flixel/tweens/FlxTween.hx",606,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tween,"tween")
		HX_STACK_LINE(607)
		bool tmp = tween->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(607)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(607)
		if ((tmp1)){
			HX_STACK_LINE(609)
			tween->start();
			HX_STACK_LINE(610)
			::flixel::tweens::FlxTweenManager tmp2 = ::flixel::tweens::FlxTween_obj::manager;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(610)
			::flixel::tweens::FlxTween tmp3 = tween;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(610)
			tmp2->add_flixel_tweens_FlxTween(tmp3,null());
		}
		HX_STACK_LINE(613)
		tween->setChain(this->_chainedTweens);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,doNextTween,(void))

Void FlxTween_obj::setChain( Array< ::Dynamic > previousChain){
{
		HX_STACK_FRAME("flixel.tweens.FlxTween","setChain",0xec346660,"flixel.tweens.FlxTween.setChain","flixel/tweens/FlxTween.hx",617,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_ARG(previousChain,"previousChain")
		HX_STACK_LINE(618)
		bool tmp = (previousChain == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(618)
		if ((tmp)){
			HX_STACK_LINE(619)
			return null();
		}
		HX_STACK_LINE(621)
		bool tmp1 = (this->_chainedTweens == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(621)
		if ((tmp1)){
			HX_STACK_LINE(622)
			this->_chainedTweens = previousChain;
		}
		else{
			HX_STACK_LINE(624)
			this->_chainedTweens = this->_chainedTweens->concat(previousChain);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,setChain,(void))

Void FlxTween_obj::restart( ){
{
		HX_STACK_FRAME("flixel.tweens.FlxTween","restart",0xf888468e,"flixel.tweens.FlxTween.restart","flixel/tweens/FlxTween.hx",632,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_LINE(633)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(633)
		if ((tmp)){
			HX_STACK_LINE(635)
			this->start();
		}
		else{
			HX_STACK_LINE(639)
			this->_waitingForRestart = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,restart,(void))

::flixel::tweens::FlxTween FlxTween_obj::setDelays( Dynamic StartDelay,Dynamic LoopDelay){
	HX_STACK_FRAME("flixel.tweens.FlxTween","setDelays",0x750c1d51,"flixel.tweens.FlxTween.setDelays","flixel/tweens/FlxTween.hx",650,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(StartDelay,"StartDelay")
	HX_STACK_ARG(LoopDelay,"LoopDelay")
	HX_STACK_LINE(651)
	bool tmp = (StartDelay != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(651)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(651)
	if ((tmp)){
		HX_STACK_LINE(651)
		tmp1 = StartDelay;
	}
	else{
		HX_STACK_LINE(651)
		tmp1 = (int)0;
	}
	HX_STACK_LINE(651)
	this->set_startDelay(tmp1);
	HX_STACK_LINE(652)
	bool tmp2 = (LoopDelay != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(652)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(652)
	if ((tmp2)){
		HX_STACK_LINE(652)
		tmp3 = LoopDelay;
	}
	else{
		HX_STACK_LINE(652)
		tmp3 = (int)0;
	}
	HX_STACK_LINE(652)
	this->set_loopDelay(tmp3);
	HX_STACK_LINE(653)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTween_obj,setDelays,return )

Float FlxTween_obj::set_startDelay( Float value){
	HX_STACK_FRAME("flixel.tweens.FlxTween","set_startDelay",0xdc7f879f,"flixel.tweens.FlxTween.set_startDelay","flixel/tweens/FlxTween.hx",657,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(658)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(658)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(658)
	Float dly = tmp1;		HX_STACK_VAR(dly,"dly");
	HX_STACK_LINE(659)
	int tmp2 = this->executions;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(659)
	bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(659)
	if ((tmp3)){
		HX_STACK_LINE(661)
		Float tmp4 = this->duration;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(661)
		Float tmp5 = this->_secondsSinceStart;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(661)
		Float tmp6 = this->_delayToUse;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(661)
		Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(661)
		Float tmp8 = ::Math_obj::max(tmp7,(int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(661)
		Float tmp9 = this->duration;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(661)
		Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(661)
		Float tmp11 = (tmp4 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(661)
		Float tmp12 = dly;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(661)
		Float tmp13 = this->startDelay;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(661)
		Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(661)
		Float tmp15 = ::Math_obj::max(tmp14,(int)0);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(661)
		Float tmp16 = (tmp11 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(661)
		this->_secondsSinceStart = tmp16;
		HX_STACK_LINE(662)
		this->_delayToUse = dly;
	}
	HX_STACK_LINE(664)
	Float tmp4 = this->startDelay = dly;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(664)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,set_startDelay,return )

Float FlxTween_obj::set_loopDelay( Dynamic value){
	HX_STACK_FRAME("flixel.tweens.FlxTween","set_loopDelay",0xc5954461,"flixel.tweens.FlxTween.set_loopDelay","flixel/tweens/FlxTween.hx",668,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(669)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(669)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(669)
	Float dly = tmp1;		HX_STACK_VAR(dly,"dly");
	HX_STACK_LINE(670)
	int tmp2 = this->executions;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(670)
	bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(670)
	if ((tmp3)){
		HX_STACK_LINE(672)
		Float tmp4 = this->duration;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(672)
		Float tmp5 = this->_secondsSinceStart;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(672)
		Float tmp6 = this->_delayToUse;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(672)
		Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(672)
		Float tmp8 = ::Math_obj::max(tmp7,(int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(672)
		Float tmp9 = this->duration;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(672)
		Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(672)
		Float tmp11 = (tmp4 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(672)
		Float tmp12 = dly;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(672)
		Float tmp13 = this->loopDelay;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(672)
		Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(672)
		Float tmp15 = ::Math_obj::max(tmp14,(int)0);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(672)
		Float tmp16 = (tmp11 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(672)
		this->_secondsSinceStart = tmp16;
		HX_STACK_LINE(673)
		this->_delayToUse = dly;
	}
	HX_STACK_LINE(675)
	Float tmp4 = this->loopDelay = dly;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(675)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,set_loopDelay,return )

Float FlxTween_obj::get_percent( ){
	HX_STACK_FRAME("flixel.tweens.FlxTween","get_percent",0x9c57551b,"flixel.tweens.FlxTween.get_percent","flixel/tweens/FlxTween.hx",679,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_LINE(680)
	Float tmp = this->_secondsSinceStart;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(680)
	Float tmp1 = this->_delayToUse;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(680)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(680)
	Float tmp3 = ::Math_obj::max(tmp2,(int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(680)
	Float tmp4 = this->duration;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(680)
	Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(680)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,get_percent,return )

Float FlxTween_obj::set_percent( Float value){
	HX_STACK_FRAME("flixel.tweens.FlxTween","set_percent",0xa6c45c27,"flixel.tweens.FlxTween.set_percent","flixel/tweens/FlxTween.hx",684,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(685)
	Float tmp = this->duration;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(685)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(685)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(685)
	Float tmp3 = this->_delayToUse;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(685)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(685)
	Float tmp5 = this->_secondsSinceStart = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(685)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,set_percent,return )

int FlxTween_obj::set_type( int value){
	HX_STACK_FRAME("flixel.tweens.FlxTween","set_type",0x136d7018,"flixel.tweens.FlxTween.set_type","flixel/tweens/FlxTween.hx",689,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(690)
	bool tmp = (value == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(690)
	if ((tmp)){
		HX_STACK_LINE(692)
		value = (int)8;
	}
	else{
		HX_STACK_LINE(694)
		bool tmp1 = (value == (int)16);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(694)
		if ((tmp1)){
			HX_STACK_LINE(696)
			int tmp2 = (int)17;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(696)
			value = tmp2;
		}
	}
	HX_STACK_LINE(699)
	int tmp1 = (int(value) & int((int)16));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(699)
	bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(699)
	this->backward = tmp2;
	HX_STACK_LINE(700)
	int tmp3 = this->type = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(700)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,set_type,return )

bool FlxTween_obj::set_active( bool active){
	HX_STACK_FRAME("flixel.tweens.FlxTween","set_active",0x9ccb52a4,"flixel.tweens.FlxTween.set_active","flixel/tweens/FlxTween.hx",704,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(active,"active")
	HX_STACK_LINE(705)
	this->active = active;
	HX_STACK_LINE(707)
	bool tmp = this->_waitingForRestart;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(707)
	if ((tmp)){
		HX_STACK_LINE(708)
		this->restart();
	}
	HX_STACK_LINE(710)
	bool tmp1 = active;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(710)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,set_active,return )

int FlxTween_obj::PERSIST;

int FlxTween_obj::LOOPING;

int FlxTween_obj::PINGPONG;

int FlxTween_obj::ONESHOT;

int FlxTween_obj::BACKWARD;

::flixel::tweens::FlxTweenManager FlxTween_obj::manager;

::flixel::tweens::misc::VarTween FlxTween_obj::tween( Dynamic Object,Dynamic Values,hx::Null< Float >  __o_Duration,Dynamic Options){
Float Duration = __o_Duration.Default(1);
	HX_STACK_FRAME("flixel.tweens.FlxTween","tween",0x6c51ab6a,"flixel.tweens.FlxTween.tween","flixel/tweens/FlxTween.hx",70,0x5d58d691)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Values,"Values")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(71)
		::flixel::tweens::misc::VarTween tmp = ::flixel::tweens::misc::VarTween_obj::__new(Options);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		::flixel::tweens::misc::VarTween tween = tmp;		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(72)
		Dynamic tmp1 = Object;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		Dynamic tmp2 = Values;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		Float tmp3 = Duration;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(72)
		tween->tween(tmp1,tmp2,tmp3);
		HX_STACK_LINE(73)
		::flixel::tweens::FlxTweenManager tmp4 = ::flixel::tweens::FlxTween_obj::manager;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(73)
		::flixel::tweens::misc::VarTween tmp5 = tween;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(73)
		::flixel::tweens::misc::VarTween tmp6 = tmp4->add_flixel_tweens_misc_VarTween(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(73)
		return tmp6;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxTween_obj,tween,return )

::flixel::tweens::misc::NumTween FlxTween_obj::num( Float FromValue,Float ToValue,hx::Null< Float >  __o_Duration,Dynamic Options,Dynamic TweenFunction){
Float Duration = __o_Duration.Default(1);
	HX_STACK_FRAME("flixel.tweens.FlxTween","num",0xa4425185,"flixel.tweens.FlxTween.num","flixel/tweens/FlxTween.hx",104,0x5d58d691)
	HX_STACK_ARG(FromValue,"FromValue")
	HX_STACK_ARG(ToValue,"ToValue")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(Options,"Options")
	HX_STACK_ARG(TweenFunction,"TweenFunction")
{
		HX_STACK_LINE(105)
		::flixel::tweens::misc::NumTween tmp = ::flixel::tweens::misc::NumTween_obj::__new(Options);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(105)
		::flixel::tweens::misc::NumTween tween = tmp;		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(106)
		Float tmp1 = FromValue;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		Float tmp2 = ToValue;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(106)
		Float tmp3 = Duration;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(106)
		Dynamic tmp4 = TweenFunction;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(106)
		tween->tween(tmp1,tmp2,tmp3,tmp4);
		HX_STACK_LINE(107)
		::flixel::tweens::FlxTweenManager tmp5 = ::flixel::tweens::FlxTween_obj::manager;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(107)
		::flixel::tweens::misc::NumTween tmp6 = tween;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(107)
		::flixel::tweens::misc::NumTween tmp7 = tmp5->add_flixel_tweens_misc_NumTween(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(107)
		return tmp7;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTween_obj,num,return )

::flixel::tweens::misc::AngleTween FlxTween_obj::angle( ::flixel::FlxSprite Sprite,Float FromAngle,Float ToAngle,hx::Null< Float >  __o_Duration,Dynamic Options){
Float Duration = __o_Duration.Default(1);
	HX_STACK_FRAME("flixel.tweens.FlxTween","angle",0x75c344d2,"flixel.tweens.FlxTween.angle","flixel/tweens/FlxTween.hx",132,0x5d58d691)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(FromAngle,"FromAngle")
	HX_STACK_ARG(ToAngle,"ToAngle")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(133)
		::flixel::tweens::misc::AngleTween tmp = ::flixel::tweens::misc::AngleTween_obj::__new(Options);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		::flixel::tweens::misc::AngleTween tween = tmp;		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(134)
		Float tmp1 = FromAngle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(134)
		Float tmp2 = ToAngle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(134)
		Float tmp3 = Duration;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(134)
		::flixel::FlxSprite tmp4 = Sprite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(134)
		tween->tween(tmp1,tmp2,tmp3,tmp4);
		HX_STACK_LINE(135)
		::flixel::tweens::FlxTweenManager tmp5 = ::flixel::tweens::FlxTween_obj::manager;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(135)
		::flixel::tweens::misc::AngleTween tmp6 = tween;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(135)
		::flixel::tweens::misc::AngleTween tmp7 = tmp5->add_flixel_tweens_misc_AngleTween(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(135)
		return tmp7;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTween_obj,angle,return )

::flixel::tweens::misc::ColorTween FlxTween_obj::color( ::flixel::FlxSprite Sprite,hx::Null< Float >  __o_Duration,int FromColor,int ToColor,Dynamic Options){
Float Duration = __o_Duration.Default(1);
	HX_STACK_FRAME("flixel.tweens.FlxTween","color",0x9d3d7262,"flixel.tweens.FlxTween.color","flixel/tweens/FlxTween.hx",160,0x5d58d691)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(FromColor,"FromColor")
	HX_STACK_ARG(ToColor,"ToColor")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(161)
		::flixel::tweens::misc::ColorTween tmp = ::flixel::tweens::misc::ColorTween_obj::__new(Options);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		::flixel::tweens::misc::ColorTween tween = tmp;		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(162)
		Float tmp1 = Duration;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		int tmp2 = FromColor;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		int tmp3 = ToColor;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(162)
		::flixel::FlxSprite tmp4 = Sprite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(162)
		tween->tween(tmp1,tmp2,tmp3,tmp4);
		HX_STACK_LINE(163)
		::flixel::tweens::FlxTweenManager tmp5 = ::flixel::tweens::FlxTween_obj::manager;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(163)
		::flixel::tweens::misc::ColorTween tmp6 = tween;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(163)
		::flixel::tweens::misc::ColorTween tmp7 = tmp5->add_flixel_tweens_misc_ColorTween(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(163)
		return tmp7;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTween_obj,color,return )

::flixel::tweens::motion::LinearMotion FlxTween_obj::linearMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float ToX,Float ToY,hx::Null< Float >  __o_DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.FlxTween","linearMotion",0xd656f2dc,"flixel.tweens.FlxTween.linearMotion","flixel/tweens/FlxTween.hx",191,0x5d58d691)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(FromX,"FromX")
	HX_STACK_ARG(FromY,"FromY")
	HX_STACK_ARG(ToX,"ToX")
	HX_STACK_ARG(ToY,"ToY")
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(192)
		::flixel::tweens::motion::LinearMotion tmp = ::flixel::tweens::motion::LinearMotion_obj::__new(Options);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(192)
		::flixel::tweens::motion::LinearMotion tween = tmp;		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(193)
		::flixel::FlxObject tmp1 = Object;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(193)
		tween->setObject(tmp1);
		HX_STACK_LINE(194)
		Float tmp2 = FromX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(194)
		Float tmp3 = FromY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(194)
		Float tmp4 = ToX;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(194)
		Float tmp5 = ToY;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(194)
		Float tmp6 = DurationOrSpeed;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(194)
		bool tmp7 = UseDuration;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(194)
		tween->setMotion(tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);
		HX_STACK_LINE(195)
		::flixel::tweens::FlxTweenManager tmp8 = ::flixel::tweens::FlxTween_obj::manager;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(195)
		::flixel::tweens::motion::LinearMotion tmp9 = tween;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(195)
		::flixel::tweens::motion::LinearMotion tmp10 = tmp8->add_flixel_tweens_motion_LinearMotion(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(195)
		return tmp10;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxTween_obj,linearMotion,return )

::flixel::tweens::motion::QuadMotion FlxTween_obj::quadMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float ControlX,Float ControlY,Float ToX,Float ToY,hx::Null< Float >  __o_DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.FlxTween","quadMotion",0xc62584fe,"flixel.tweens.FlxTween.quadMotion","flixel/tweens/FlxTween.hx",225,0x5d58d691)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(FromX,"FromX")
	HX_STACK_ARG(FromY,"FromY")
	HX_STACK_ARG(ControlX,"ControlX")
	HX_STACK_ARG(ControlY,"ControlY")
	HX_STACK_ARG(ToX,"ToX")
	HX_STACK_ARG(ToY,"ToY")
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(226)
		::flixel::tweens::motion::QuadMotion tmp = ::flixel::tweens::motion::QuadMotion_obj::__new(Options);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(226)
		::flixel::tweens::motion::QuadMotion tween = tmp;		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(227)
		::flixel::FlxObject tmp1 = Object;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(227)
		tween->setObject(tmp1);
		HX_STACK_LINE(228)
		Float tmp2 = FromX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(228)
		Float tmp3 = FromY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(228)
		Float tmp4 = ControlX;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(228)
		Float tmp5 = ControlY;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(228)
		Float tmp6 = ToX;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(228)
		Float tmp7 = ToY;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(228)
		Float tmp8 = DurationOrSpeed;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(228)
		bool tmp9 = UseDuration;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(228)
		tween->setMotion(tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9);
		HX_STACK_LINE(229)
		::flixel::tweens::FlxTweenManager tmp10 = ::flixel::tweens::FlxTween_obj::manager;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(229)
		::flixel::tweens::motion::QuadMotion tmp11 = tween;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(229)
		::flixel::tweens::motion::QuadMotion tmp12 = tmp10->add_flixel_tweens_motion_QuadMotion(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(229)
		return tmp12;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC10(FlxTween_obj,quadMotion,return )

::flixel::tweens::motion::CubicMotion FlxTween_obj::cubicMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float aX,Float aY,Float bX,Float bY,Float ToX,Float ToY,hx::Null< Float >  __o_Duration,Dynamic Options){
Float Duration = __o_Duration.Default(1);
	HX_STACK_FRAME("flixel.tweens.FlxTween","cubicMotion",0xa068755f,"flixel.tweens.FlxTween.cubicMotion","flixel/tweens/FlxTween.hx",260,0x5d58d691)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(FromX,"FromX")
	HX_STACK_ARG(FromY,"FromY")
	HX_STACK_ARG(aX,"aX")
	HX_STACK_ARG(aY,"aY")
	HX_STACK_ARG(bX,"bX")
	HX_STACK_ARG(bY,"bY")
	HX_STACK_ARG(ToX,"ToX")
	HX_STACK_ARG(ToY,"ToY")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(261)
		::flixel::tweens::motion::CubicMotion tmp = ::flixel::tweens::motion::CubicMotion_obj::__new(Options);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(261)
		::flixel::tweens::motion::CubicMotion tween = tmp;		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(262)
		::flixel::FlxObject tmp1 = Object;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(262)
		tween->setObject(tmp1);
		HX_STACK_LINE(263)
		Float tmp2 = FromX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(263)
		Float tmp3 = FromY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(263)
		Float tmp4 = aX;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(263)
		Float tmp5 = aY;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(263)
		Float tmp6 = bX;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(263)
		Float tmp7 = bY;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(263)
		Float tmp8 = ToX;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(263)
		Float tmp9 = ToY;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(263)
		Float tmp10 = Duration;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(263)
		tween->setMotion(tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9,tmp10);
		HX_STACK_LINE(264)
		::flixel::tweens::FlxTweenManager tmp11 = ::flixel::tweens::FlxTween_obj::manager;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(264)
		::flixel::tweens::motion::CubicMotion tmp12 = tween;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(264)
		::flixel::tweens::motion::CubicMotion tmp13 = tmp11->add_flixel_tweens_motion_CubicMotion(tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(264)
		return tmp13;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC11(FlxTween_obj,cubicMotion,return )

::flixel::tweens::motion::CircularMotion FlxTween_obj::circularMotion( ::flixel::FlxObject Object,Float CenterX,Float CenterY,Float Radius,Float Angle,bool Clockwise,hx::Null< Float >  __o_DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.FlxTween","circularMotion",0x65e89916,"flixel.tweens.FlxTween.circularMotion","flixel/tweens/FlxTween.hx",293,0x5d58d691)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(CenterX,"CenterX")
	HX_STACK_ARG(CenterY,"CenterY")
	HX_STACK_ARG(Radius,"Radius")
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_ARG(Clockwise,"Clockwise")
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(294)
		::flixel::tweens::motion::CircularMotion tmp = ::flixel::tweens::motion::CircularMotion_obj::__new(Options);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(294)
		::flixel::tweens::motion::CircularMotion tween = tmp;		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(295)
		::flixel::FlxObject tmp1 = Object;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(295)
		tween->setObject(tmp1);
		HX_STACK_LINE(296)
		Float tmp2 = CenterX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(296)
		Float tmp3 = CenterY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(296)
		Float tmp4 = Radius;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(296)
		Float tmp5 = Angle;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(296)
		bool tmp6 = Clockwise;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(296)
		Float tmp7 = DurationOrSpeed;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(296)
		bool tmp8 = UseDuration;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(296)
		tween->setMotion(tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8);
		HX_STACK_LINE(297)
		::flixel::tweens::FlxTweenManager tmp9 = ::flixel::tweens::FlxTween_obj::manager;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(297)
		::flixel::tweens::motion::CircularMotion tmp10 = tween;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(297)
		::flixel::tweens::motion::CircularMotion tmp11 = tmp9->add_flixel_tweens_motion_CircularMotion(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(297)
		return tmp11;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(FlxTween_obj,circularMotion,return )

::flixel::tweens::motion::LinearPath FlxTween_obj::linearPath( ::flixel::FlxObject Object,Array< ::Dynamic > Points,hx::Null< Float >  __o_DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.FlxTween","linearPath",0xd40abccb,"flixel.tweens.FlxTween.linearPath","flixel/tweens/FlxTween.hx",321,0x5d58d691)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Points,"Points")
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(322)
		::flixel::tweens::motion::LinearPath tmp = ::flixel::tweens::motion::LinearPath_obj::__new(Options);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(322)
		::flixel::tweens::motion::LinearPath tween = tmp;		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(324)
		bool tmp1 = (Points != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(324)
		if ((tmp1)){
			HX_STACK_LINE(326)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(326)
			while((true)){
				HX_STACK_LINE(326)
				bool tmp2 = (_g < Points->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(326)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(326)
				if ((tmp3)){
					HX_STACK_LINE(326)
					break;
				}
				HX_STACK_LINE(326)
				::flixel::math::FlxPoint tmp4 = Points->__get(_g).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(326)
				::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(326)
				++(_g);
				HX_STACK_LINE(328)
				Float tmp5 = point->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(328)
				Float tmp6 = point->y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(328)
				tween->addPoint(tmp5,tmp6);
			}
		}
		HX_STACK_LINE(332)
		::flixel::FlxObject tmp2 = Object;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(332)
		tween->setObject(tmp2);
		HX_STACK_LINE(333)
		Float tmp3 = DurationOrSpeed;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(333)
		bool tmp4 = UseDuration;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(333)
		tween->setMotion(tmp3,tmp4);
		HX_STACK_LINE(334)
		::flixel::tweens::FlxTweenManager tmp5 = ::flixel::tweens::FlxTween_obj::manager;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(334)
		::flixel::tweens::motion::LinearPath tmp6 = tween;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(334)
		::flixel::tweens::motion::LinearPath tmp7 = tmp5->add_flixel_tweens_motion_LinearPath(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(334)
		return tmp7;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTween_obj,linearPath,return )

::flixel::tweens::motion::QuadPath FlxTween_obj::quadPath( ::flixel::FlxObject Object,Array< ::Dynamic > Points,hx::Null< Float >  __o_DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.FlxTween","quadPath",0x6abb226d,"flixel.tweens.FlxTween.quadPath","flixel/tweens/FlxTween.hx",358,0x5d58d691)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Points,"Points")
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(359)
		::flixel::tweens::motion::QuadPath tmp = ::flixel::tweens::motion::QuadPath_obj::__new(Options);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(359)
		::flixel::tweens::motion::QuadPath tween = tmp;		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(361)
		bool tmp1 = (Points != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(361)
		if ((tmp1)){
			HX_STACK_LINE(363)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(363)
			while((true)){
				HX_STACK_LINE(363)
				bool tmp2 = (_g < Points->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(363)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(363)
				if ((tmp3)){
					HX_STACK_LINE(363)
					break;
				}
				HX_STACK_LINE(363)
				::flixel::math::FlxPoint tmp4 = Points->__get(_g).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(363)
				::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(363)
				++(_g);
				HX_STACK_LINE(365)
				Float tmp5 = point->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(365)
				Float tmp6 = point->y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(365)
				tween->addPoint(tmp5,tmp6);
			}
		}
		HX_STACK_LINE(369)
		::flixel::FlxObject tmp2 = Object;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(369)
		tween->setObject(tmp2);
		HX_STACK_LINE(370)
		Float tmp3 = DurationOrSpeed;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(370)
		bool tmp4 = UseDuration;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(370)
		tween->setMotion(tmp3,tmp4);
		HX_STACK_LINE(371)
		::flixel::tweens::FlxTweenManager tmp5 = ::flixel::tweens::FlxTween_obj::manager;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(371)
		::flixel::tweens::motion::QuadPath tmp6 = tween;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(371)
		::flixel::tweens::motion::QuadPath tmp7 = tmp5->add_flixel_tweens_motion_QuadPath(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(371)
		return tmp7;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTween_obj,quadPath,return )


FlxTween_obj::FlxTween_obj()
{
}

void FlxTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTween);
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(ease,"ease");
	HX_MARK_MEMBER_NAME(onStart,"onStart");
	HX_MARK_MEMBER_NAME(onUpdate,"onUpdate");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(backward,"backward");
	HX_MARK_MEMBER_NAME(executions,"executions");
	HX_MARK_MEMBER_NAME(startDelay,"startDelay");
	HX_MARK_MEMBER_NAME(loopDelay,"loopDelay");
	HX_MARK_MEMBER_NAME(_secondsSinceStart,"_secondsSinceStart");
	HX_MARK_MEMBER_NAME(_delayToUse,"_delayToUse");
	HX_MARK_MEMBER_NAME(_running,"_running");
	HX_MARK_MEMBER_NAME(_waitingForRestart,"_waitingForRestart");
	HX_MARK_MEMBER_NAME(_chainedTweens,"_chainedTweens");
	HX_MARK_END_CLASS();
}

void FlxTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(ease,"ease");
	HX_VISIT_MEMBER_NAME(onStart,"onStart");
	HX_VISIT_MEMBER_NAME(onUpdate,"onUpdate");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(backward,"backward");
	HX_VISIT_MEMBER_NAME(executions,"executions");
	HX_VISIT_MEMBER_NAME(startDelay,"startDelay");
	HX_VISIT_MEMBER_NAME(loopDelay,"loopDelay");
	HX_VISIT_MEMBER_NAME(_secondsSinceStart,"_secondsSinceStart");
	HX_VISIT_MEMBER_NAME(_delayToUse,"_delayToUse");
	HX_VISIT_MEMBER_NAME(_running,"_running");
	HX_VISIT_MEMBER_NAME(_waitingForRestart,"_waitingForRestart");
	HX_VISIT_MEMBER_NAME(_chainedTweens,"_chainedTweens");
}

Dynamic FlxTween_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ease; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"then") ) { return then_dyn(); }
		if (HX_FIELD_EQ(inName,"wait") ) { return wait_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"onEnd") ) { return onEnd_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel_dyn(); }
		if (HX_FIELD_EQ(inName,"finish") ) { return finish_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onStart") ) { return onStart; }
		if (HX_FIELD_EQ(inName,"percent") ) { if (inCallProp == hx::paccAlways) return get_percent(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"restart") ) { return restart_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return duration; }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return onUpdate; }
		if (HX_FIELD_EQ(inName,"finished") ) { return finished; }
		if (HX_FIELD_EQ(inName,"backward") ) { return backward; }
		if (HX_FIELD_EQ(inName,"_running") ) { return _running; }
		if (HX_FIELD_EQ(inName,"setChain") ) { return setChain_dyn(); }
		if (HX_FIELD_EQ(inName,"set_type") ) { return set_type_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loopDelay") ) { return loopDelay; }
		if (HX_FIELD_EQ(inName,"setDelays") ) { return setDelays_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete; }
		if (HX_FIELD_EQ(inName,"executions") ) { return executions; }
		if (HX_FIELD_EQ(inName,"startDelay") ) { return startDelay; }
		if (HX_FIELD_EQ(inName,"set_active") ) { return set_active_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_delayToUse") ) { return _delayToUse; }
		if (HX_FIELD_EQ(inName,"doNextTween") ) { return doNextTween_dyn(); }
		if (HX_FIELD_EQ(inName,"get_percent") ) { return get_percent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_percent") ) { return set_percent_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setVarsOnEnd") ) { return setVarsOnEnd_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_loopDelay") ) { return set_loopDelay_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_chainedTweens") ) { return _chainedTweens; }
		if (HX_FIELD_EQ(inName,"set_startDelay") ) { return set_startDelay_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"addChainedTween") ) { return addChainedTween_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"processTweenChain") ) { return processTweenChain_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_secondsSinceStart") ) { return _secondsSinceStart; }
		if (HX_FIELD_EQ(inName,"_waitingForRestart") ) { return _waitingForRestart; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"resolveTweenOptions") ) { return resolveTweenOptions_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxTween_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"num") ) { outValue = num_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tween") ) { outValue = tween_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"angle") ) { outValue = angle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"color") ) { outValue = color_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { outValue = manager; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"quadPath") ) { outValue = quadPath_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quadMotion") ) { outValue = quadMotion_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"linearPath") ) { outValue = linearPath_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cubicMotion") ) { outValue = cubicMotion_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"linearMotion") ) { outValue = linearMotion_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"circularMotion") ) { outValue = circularMotion_dyn(); return true;  }
	}
	return false;
}

Dynamic FlxTween_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { ease=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == hx::paccAlways) return set_type(inValue);type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { if (inCallProp == hx::paccAlways) return set_active(inValue);active=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onStart") ) { onStart=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"percent") ) { if (inCallProp == hx::paccAlways) return set_percent(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { onUpdate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backward") ) { backward=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_running") ) { _running=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loopDelay") ) { if (inCallProp == hx::paccAlways) return set_loopDelay(inValue);loopDelay=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"executions") ) { executions=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startDelay") ) { if (inCallProp == hx::paccAlways) return set_startDelay(inValue);startDelay=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_delayToUse") ) { _delayToUse=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_chainedTweens") ) { _chainedTweens=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_secondsSinceStart") ) { _secondsSinceStart=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_waitingForRestart") ) { _waitingForRestart=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxTween_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=ioValue.Cast< ::flixel::tweens::FlxTweenManager >(); return true; }
	}
	return false;
}

void FlxTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("percent","\xc5","\xaa","\xda","\x78"));
	outFields->push(HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("backward","\xe3","\xdb","\x18","\x27"));
	outFields->push(HX_HCSTRING("executions","\xdb","\xf9","\x36","\x3c"));
	outFields->push(HX_HCSTRING("startDelay","\xc1","\xaf","\x3d","\xf3"));
	outFields->push(HX_HCSTRING("loopDelay","\x7f","\xf6","\xd2","\x04"));
	outFields->push(HX_HCSTRING("_secondsSinceStart","\x68","\x4a","\x61","\xcd"));
	outFields->push(HX_HCSTRING("_delayToUse","\x28","\x28","\x40","\x14"));
	outFields->push(HX_HCSTRING("_running","\x80","\xc7","\x21","\x25"));
	outFields->push(HX_HCSTRING("_waitingForRestart","\x74","\xf0","\x92","\xee"));
	outFields->push(HX_HCSTRING("_chainedTweens","\xa9","\x3f","\x16","\x71"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxTween_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsFloat,(int)offsetof(FlxTween_obj,duration),HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTween_obj,ease),HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTween_obj,onStart),HX_HCSTRING("onStart","\xc3","\x12","\x49","\x1a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTween_obj,onUpdate),HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTween_obj,onComplete),HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d")},
	{hx::fsInt,(int)offsetof(FlxTween_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsBool,(int)offsetof(FlxTween_obj,finished),HX_HCSTRING("finished","\x72","\x93","\x0e","\x95")},
	{hx::fsFloat,(int)offsetof(FlxTween_obj,scale),HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")},
	{hx::fsBool,(int)offsetof(FlxTween_obj,backward),HX_HCSTRING("backward","\xe3","\xdb","\x18","\x27")},
	{hx::fsInt,(int)offsetof(FlxTween_obj,executions),HX_HCSTRING("executions","\xdb","\xf9","\x36","\x3c")},
	{hx::fsFloat,(int)offsetof(FlxTween_obj,startDelay),HX_HCSTRING("startDelay","\xc1","\xaf","\x3d","\xf3")},
	{hx::fsFloat,(int)offsetof(FlxTween_obj,loopDelay),HX_HCSTRING("loopDelay","\x7f","\xf6","\xd2","\x04")},
	{hx::fsFloat,(int)offsetof(FlxTween_obj,_secondsSinceStart),HX_HCSTRING("_secondsSinceStart","\x68","\x4a","\x61","\xcd")},
	{hx::fsFloat,(int)offsetof(FlxTween_obj,_delayToUse),HX_HCSTRING("_delayToUse","\x28","\x28","\x40","\x14")},
	{hx::fsBool,(int)offsetof(FlxTween_obj,_running),HX_HCSTRING("_running","\x80","\xc7","\x21","\x25")},
	{hx::fsBool,(int)offsetof(FlxTween_obj,_waitingForRestart),HX_HCSTRING("_waitingForRestart","\x74","\xf0","\x92","\xee")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTween_obj,_chainedTweens),HX_HCSTRING("_chainedTweens","\xa9","\x3f","\x16","\x71")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxTween_obj::PERSIST,HX_HCSTRING("PERSIST","\xf4","\xf5","\x44","\x03")},
	{hx::fsInt,(void *) &FlxTween_obj::LOOPING,HX_HCSTRING("LOOPING","\xde","\x50","\x51","\xa0")},
	{hx::fsInt,(void *) &FlxTween_obj::PINGPONG,HX_HCSTRING("PINGPONG","\x6a","\x23","\xc9","\x01")},
	{hx::fsInt,(void *) &FlxTween_obj::ONESHOT,HX_HCSTRING("ONESHOT","\x40","\x6e","\xaf","\xf6")},
	{hx::fsInt,(void *) &FlxTween_obj::BACKWARD,HX_HCSTRING("BACKWARD","\xe3","\x6b","\x9e","\x80")},
	{hx::fsObject /*::flixel::tweens::FlxTweenManager*/ ,(void *) &FlxTween_obj::manager,HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"),
	HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43"),
	HX_HCSTRING("onStart","\xc3","\x12","\x49","\x1a"),
	HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"),
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("backward","\xe3","\xdb","\x18","\x27"),
	HX_HCSTRING("executions","\xdb","\xf9","\x36","\x3c"),
	HX_HCSTRING("startDelay","\xc1","\xaf","\x3d","\xf3"),
	HX_HCSTRING("loopDelay","\x7f","\xf6","\xd2","\x04"),
	HX_HCSTRING("_secondsSinceStart","\x68","\x4a","\x61","\xcd"),
	HX_HCSTRING("_delayToUse","\x28","\x28","\x40","\x14"),
	HX_HCSTRING("_running","\x80","\xc7","\x21","\x25"),
	HX_HCSTRING("_waitingForRestart","\x74","\xf0","\x92","\xee"),
	HX_HCSTRING("_chainedTweens","\xa9","\x3f","\x16","\x71"),
	HX_HCSTRING("resolveTweenOptions","\x3f","\xb5","\x76","\x9f"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("then","\xdd","\x02","\xfc","\x4c"),
	HX_HCSTRING("wait","\x75","\x5a","\xf2","\x4e"),
	HX_HCSTRING("addChainedTween","\x6c","\xf2","\xe0","\x52"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("cancel","\x7a","\xed","\x33","\xb8"),
	HX_HCSTRING("finish","\x53","\x40","\x7f","\x86"),
	HX_HCSTRING("onEnd","\xfc","\x97","\x64","\x32"),
	HX_HCSTRING("setVarsOnEnd","\xae","\xcc","\xde","\x50"),
	HX_HCSTRING("processTweenChain","\xe5","\x5d","\xc2","\xc5"),
	HX_HCSTRING("doNextTween","\x6d","\x83","\xb4","\x19"),
	HX_HCSTRING("setChain","\xff","\xfd","\xe7","\x53"),
	HX_HCSTRING("restart","\xcf","\xc7","\xa5","\x6a"),
	HX_HCSTRING("setDelays","\xd2","\x30","\x7d","\xca"),
	HX_HCSTRING("set_startDelay","\x7e","\x20","\x53","\x89"),
	HX_HCSTRING("set_loopDelay","\x62","\xac","\x3c","\x0b"),
	HX_HCSTRING("get_percent","\xdc","\x0a","\xd5","\xfe"),
	HX_HCSTRING("set_percent","\xe8","\x11","\x42","\x09"),
	HX_HCSTRING("set_type","\xb7","\x07","\x21","\x7b"),
	HX_HCSTRING("set_active","\x03","\x50","\x4b","\x0a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTween_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTween_obj::PERSIST,"PERSIST");
	HX_MARK_MEMBER_NAME(FlxTween_obj::LOOPING,"LOOPING");
	HX_MARK_MEMBER_NAME(FlxTween_obj::PINGPONG,"PINGPONG");
	HX_MARK_MEMBER_NAME(FlxTween_obj::ONESHOT,"ONESHOT");
	HX_MARK_MEMBER_NAME(FlxTween_obj::BACKWARD,"BACKWARD");
	HX_MARK_MEMBER_NAME(FlxTween_obj::manager,"manager");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTween_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::PERSIST,"PERSIST");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::LOOPING,"LOOPING");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::PINGPONG,"PINGPONG");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::ONESHOT,"ONESHOT");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::BACKWARD,"BACKWARD");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::manager,"manager");
};

#endif

hx::Class FlxTween_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("PERSIST","\xf4","\xf5","\x44","\x03"),
	HX_HCSTRING("LOOPING","\xde","\x50","\x51","\xa0"),
	HX_HCSTRING("PINGPONG","\x6a","\x23","\xc9","\x01"),
	HX_HCSTRING("ONESHOT","\x40","\x6e","\xaf","\xf6"),
	HX_HCSTRING("BACKWARD","\xe3","\x6b","\x9e","\x80"),
	HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13"),
	HX_HCSTRING("tween","\x6b","\xaa","\x70","\x19"),
	HX_HCSTRING("num","\x46","\xde","\x53","\x00"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("linearMotion","\xfb","\x45","\xd8","\xa1"),
	HX_HCSTRING("quadMotion","\x5d","\x82","\xa5","\x33"),
	HX_HCSTRING("cubicMotion","\x20","\x2b","\xe6","\x02"),
	HX_HCSTRING("circularMotion","\xf5","\x31","\xbc","\x12"),
	HX_HCSTRING("linearPath","\x2a","\xba","\x8a","\x41"),
	HX_HCSTRING("quadPath","\x0c","\xba","\x6e","\xd2"),
	::String(null()) };

void FlxTween_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tweens.FlxTween","\x2d","\x88","\x9a","\xc8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTween_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxTween_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTween_obj >;
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

void FlxTween_obj::__boot()
{
	PERSIST= (int)1;
	LOOPING= (int)2;
	PINGPONG= (int)4;
	ONESHOT= (int)8;
	BACKWARD= (int)16;
}

} // end namespace flixel
} // end namespace tweens
