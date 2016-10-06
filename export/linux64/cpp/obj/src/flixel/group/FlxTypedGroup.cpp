#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace group{

Void FlxTypedGroup_obj::__construct(hx::Null< int >  __o_MaxSize)
{
HX_STACK_FRAME("flixel.group.FlxTypedGroup","new",0x9772c4d8,"flixel.group.FlxTypedGroup.new","flixel/group/FlxGroup.hx",16,0x1e89d58e)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_MaxSize,"MaxSize")
int MaxSize = __o_MaxSize.Default(0);
{
	HX_STACK_LINE(79)
	this->_marker = (int)0;
	HX_STACK_LINE(75)
	this->length = (int)0;
	HX_STACK_LINE(86)
	super::__construct();
	HX_STACK_LINE(88)
	this->members = cpp::ArrayBase_obj::__new();
	HX_STACK_LINE(89)
	int tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(89)
	this->set_maxSize(tmp2);
	HX_STACK_LINE(90)
	this->flixelType = (int)2;
}
;
	return null();
}

//FlxTypedGroup_obj::~FlxTypedGroup_obj() { }

Dynamic FlxTypedGroup_obj::__CreateEmpty() { return  new FlxTypedGroup_obj; }
hx::ObjectPtr< FlxTypedGroup_obj > FlxTypedGroup_obj::__new(hx::Null< int >  __o_MaxSize)
{  hx::ObjectPtr< FlxTypedGroup_obj > _result_ = new FlxTypedGroup_obj();
	_result_->__construct(__o_MaxSize);
	return _result_;}

Dynamic FlxTypedGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypedGroup_obj > _result_ = new FlxTypedGroup_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void FlxTypedGroup_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","destroy",0x8044bd72,"flixel.group.FlxTypedGroup.destroy","flixel/group/FlxGroup.hx",100,0x1e89d58e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(101)
		this->super::destroy();
		HX_STACK_LINE(103)
		bool tmp = (this->members != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(103)
		if ((tmp)){
			HX_STACK_LINE(105)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(106)
			::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(108)
			while((true)){
				HX_STACK_LINE(108)
				int tmp1 = i;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(108)
				int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(108)
				bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(108)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(108)
				if ((tmp4)){
					HX_STACK_LINE(108)
					break;
				}
				HX_STACK_LINE(110)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(110)
				Dynamic tmp6 = this->members->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(110)
				basic = tmp6;
				HX_STACK_LINE(112)
				bool tmp7 = (basic != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(112)
				if ((tmp7)){
					HX_STACK_LINE(113)
					basic->destroy();
				}
			}
			HX_STACK_LINE(116)
			this->members = null();
		}
	}
return null();
}


Void FlxTypedGroup_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","update",0x4e08ac91,"flixel.group.FlxTypedGroup.update","flixel/group/FlxGroup.hx",124,0x1e89d58e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(125)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(126)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(128)
		while((true)){
			HX_STACK_LINE(128)
			int tmp = i;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(128)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(128)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(128)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(128)
			if ((tmp3)){
				HX_STACK_LINE(128)
				break;
			}
			HX_STACK_LINE(130)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(130)
			Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(130)
			basic = tmp5;
			HX_STACK_LINE(132)
			bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(132)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(132)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(132)
			if ((tmp7)){
				HX_STACK_LINE(132)
				tmp8 = basic->exists;
			}
			else{
				HX_STACK_LINE(132)
				tmp8 = false;
			}
			HX_STACK_LINE(132)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(132)
			if ((tmp8)){
				HX_STACK_LINE(132)
				tmp9 = basic->active;
			}
			else{
				HX_STACK_LINE(132)
				tmp9 = false;
			}
			HX_STACK_LINE(132)
			if ((tmp9)){
				HX_STACK_LINE(134)
				Float tmp10 = elapsed;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(134)
				basic->update(tmp10);
			}
		}
	}
return null();
}


Void FlxTypedGroup_obj::draw( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","draw",0xe667208c,"flixel.group.FlxTypedGroup.draw","flixel/group/FlxGroup.hx",143,0x1e89d58e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(144)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(145)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(147)
		while((true)){
			HX_STACK_LINE(147)
			int tmp = i;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(147)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(147)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(147)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(147)
			if ((tmp3)){
				HX_STACK_LINE(147)
				break;
			}
			HX_STACK_LINE(149)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(149)
			Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(149)
			basic = tmp5;
			HX_STACK_LINE(151)
			bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(151)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(151)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(151)
			if ((tmp7)){
				HX_STACK_LINE(151)
				tmp8 = basic->exists;
			}
			else{
				HX_STACK_LINE(151)
				tmp8 = false;
			}
			HX_STACK_LINE(151)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(151)
			if ((tmp8)){
				HX_STACK_LINE(151)
				tmp9 = basic->visible;
			}
			else{
				HX_STACK_LINE(151)
				tmp9 = false;
			}
			HX_STACK_LINE(151)
			if ((tmp9)){
				HX_STACK_LINE(153)
				basic->draw();
			}
		}
	}
return null();
}


Dynamic FlxTypedGroup_obj::add( Dynamic Object){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","add",0x9768e699,"flixel.group.FlxTypedGroup.add","flixel/group/FlxGroup.hx",169,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_LINE(170)
	bool tmp = (Object == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(170)
	if ((tmp)){
		HX_STACK_LINE(172)
		{
			HX_STACK_LINE(172)
			::flixel::_system::frontEnds::LogFrontEnd tmp1 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(172)
			::flixel::_system::debug::log::LogStyle tmp2 = ::flixel::_system::debug::log::LogStyle_obj::WARNING;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(172)
			tmp1->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(HX_HCSTRING("Cannot add a `null` object to a FlxGroup.","\xf2","\xf4","\xc0","\x70"),tmp2,true);
		}
		HX_STACK_LINE(173)
		return null();
	}
	HX_STACK_LINE(177)
	Dynamic tmp1 = Object;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(177)
	int tmp2 = this->members->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(177)
	bool tmp3 = (tmp2 >= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(177)
	if ((tmp3)){
		HX_STACK_LINE(179)
		Dynamic tmp4 = Object;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(179)
		return tmp4;
	}
	HX_STACK_LINE(183)
	int tmp4 = this->getFirstNull();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(183)
	int index = tmp4;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(184)
	bool tmp5 = (index != (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(184)
	if ((tmp5)){
		HX_STACK_LINE(186)
		Dynamic tmp6 = Object;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(186)
		hx::IndexRef((this->members).mPtr,index) = tmp6;
		HX_STACK_LINE(188)
		int tmp7 = index;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(188)
		int tmp8 = this->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(188)
		bool tmp9 = (tmp7 >= tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(188)
		if ((tmp9)){
			HX_STACK_LINE(190)
			int tmp10 = (index + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(190)
			this->length = tmp10;
		}
		HX_STACK_LINE(193)
		Dynamic tmp10 = Object;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(193)
		return tmp10;
	}
	HX_STACK_LINE(197)
	int tmp6 = this->maxSize;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(197)
	bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(197)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(197)
	if ((tmp7)){
		HX_STACK_LINE(197)
		int tmp9 = this->length;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(197)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(197)
		int tmp11 = this->maxSize;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(197)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(197)
		tmp8 = (tmp10 >= tmp12);
	}
	else{
		HX_STACK_LINE(197)
		tmp8 = false;
	}
	HX_STACK_LINE(197)
	if ((tmp8)){
		HX_STACK_LINE(199)
		Dynamic tmp9 = Object;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(199)
		return tmp9;
	}
	HX_STACK_LINE(203)
	Dynamic tmp9 = Object;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(203)
	this->members->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp9);
	HX_STACK_LINE(204)
	(this->length)++;
	HX_STACK_LINE(206)
	Dynamic tmp10 = Object;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(206)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,add,return )

Dynamic FlxTypedGroup_obj::insert( int position,Dynamic object){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","insert",0x64e069c1,"flixel.group.FlxTypedGroup.insert","flixel/group/FlxGroup.hx",221,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_ARG(object,"object")
	HX_STACK_LINE(222)
	bool tmp = (object == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(222)
	if ((tmp)){
		HX_STACK_LINE(224)
		{
			HX_STACK_LINE(224)
			::flixel::_system::frontEnds::LogFrontEnd tmp1 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(224)
			::flixel::_system::debug::log::LogStyle tmp2 = ::flixel::_system::debug::log::LogStyle_obj::WARNING;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(224)
			tmp1->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(HX_HCSTRING("Cannot insert a `null` object into a FlxGroup.","\xa5","\x36","\xf4","\x8f"),tmp2,true);
		}
		HX_STACK_LINE(225)
		return null();
	}
	HX_STACK_LINE(229)
	Dynamic tmp1 = object;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(229)
	int tmp2 = this->members->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(229)
	bool tmp3 = (tmp2 >= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(229)
	if ((tmp3)){
		HX_STACK_LINE(231)
		Dynamic tmp4 = object;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(231)
		return tmp4;
	}
	HX_STACK_LINE(235)
	int tmp4 = position;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(235)
	int tmp5 = this->length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(235)
	bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(235)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(235)
	if ((tmp6)){
		HX_STACK_LINE(235)
		Dynamic tmp8 = this->members->__GetItem(position);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(235)
		Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(235)
		tmp7 = (tmp9 == null());
	}
	else{
		HX_STACK_LINE(235)
		tmp7 = false;
	}
	HX_STACK_LINE(235)
	if ((tmp7)){
		HX_STACK_LINE(237)
		Dynamic tmp8 = object;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(237)
		hx::IndexRef((this->members).mPtr,position) = tmp8;
		HX_STACK_LINE(238)
		Dynamic tmp9 = object;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(238)
		return tmp9;
	}
	HX_STACK_LINE(242)
	int tmp8 = this->maxSize;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(242)
	bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(242)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(242)
	if ((tmp9)){
		HX_STACK_LINE(242)
		int tmp11 = this->length;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(242)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(242)
		int tmp13 = this->maxSize;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(242)
		int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(242)
		tmp10 = (tmp12 >= tmp14);
	}
	else{
		HX_STACK_LINE(242)
		tmp10 = false;
	}
	HX_STACK_LINE(242)
	if ((tmp10)){
		HX_STACK_LINE(244)
		Dynamic tmp11 = object;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(244)
		return tmp11;
	}
	HX_STACK_LINE(248)
	int tmp11 = position;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(248)
	Dynamic tmp12 = object;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(248)
	this->members->__Field(HX_HCSTRING("insert","\x39","\x43","\xdd","\x9d"), hx::paccDynamic )(tmp11,tmp12);
	HX_STACK_LINE(249)
	(this->length)++;
	HX_STACK_LINE(251)
	Dynamic tmp13 = object;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(251)
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,insert,return )

Dynamic FlxTypedGroup_obj::recycle( ::hx::Class ObjectClass,Dynamic ObjectFactory,hx::Null< bool >  __o_Force,hx::Null< bool >  __o_Revive){
bool Force = __o_Force.Default(false);
bool Revive = __o_Revive.Default(true);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","recycle",0x934aa08b,"flixel.group.FlxTypedGroup.recycle","flixel/group/FlxGroup.hx",277,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectClass,"ObjectClass")
	HX_STACK_ARG(ObjectFactory,"ObjectFactory")
	HX_STACK_ARG(Force,"Force")
	HX_STACK_ARG(Revive,"Revive")
{
		HX_STACK_LINE(278)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(281)
		int tmp = this->maxSize;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(281)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(281)
		if ((tmp1)){
			HX_STACK_LINE(284)
			int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(284)
			int tmp3 = this->maxSize;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(284)
			bool tmp4 = (tmp2 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(284)
			if ((tmp4)){
				HX_STACK_LINE(286)
				Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					Dynamic object = null();		HX_STACK_VAR(object,"object");
					HX_STACK_LINE(286)
					bool tmp6 = (ObjectFactory != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(286)
					if ((tmp6)){
						HX_STACK_LINE(286)
						Dynamic tmp7 = ObjectFactory();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(286)
						Dynamic tmp8 = object = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(286)
						this->add(tmp8);
					}
					else{
						HX_STACK_LINE(286)
						bool tmp7 = (ObjectClass != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(286)
						if ((tmp7)){
							HX_STACK_LINE(286)
							::hx::Class tmp8 = ObjectClass;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(286)
							Dynamic tmp9 = ::Type_obj::createInstance(tmp8,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(286)
							Dynamic tmp10 = object = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(286)
							this->add(tmp10);
						}
					}
					HX_STACK_LINE(286)
					tmp5 = object;
				}
				HX_STACK_LINE(286)
				Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(286)
				return tmp6;
			}
			else{
				HX_STACK_LINE(291)
				int tmp5 = (this->_marker)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(291)
				Dynamic tmp6 = this->members->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(291)
				basic = tmp6;
				HX_STACK_LINE(293)
				int tmp7 = this->_marker;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(293)
				int tmp8 = this->maxSize;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(293)
				bool tmp9 = (tmp7 >= tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(293)
				if ((tmp9)){
					HX_STACK_LINE(295)
					this->_marker = (int)0;
				}
				HX_STACK_LINE(298)
				bool tmp10 = Revive;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(298)
				if ((tmp10)){
					HX_STACK_LINE(300)
					basic->revive();
				}
				HX_STACK_LINE(303)
				Dynamic tmp11 = ((Dynamic)(basic));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(303)
				return tmp11;
			}
		}
		else{
			HX_STACK_LINE(309)
			::hx::Class tmp2 = ObjectClass;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(309)
			bool tmp3 = Force;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(309)
			Dynamic tmp4 = this->getFirstAvailable(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(309)
			basic = tmp4;
			HX_STACK_LINE(311)
			bool tmp5 = (basic != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(311)
			if ((tmp5)){
				HX_STACK_LINE(313)
				bool tmp6 = Revive;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(313)
				if ((tmp6)){
					HX_STACK_LINE(315)
					basic->revive();
				}
				HX_STACK_LINE(317)
				Dynamic tmp7 = ((Dynamic)(basic));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(317)
				return tmp7;
			}
			HX_STACK_LINE(320)
			Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(320)
			{
				HX_STACK_LINE(320)
				Dynamic object = null();		HX_STACK_VAR(object,"object");
				HX_STACK_LINE(320)
				bool tmp7 = (ObjectFactory != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(320)
				if ((tmp7)){
					HX_STACK_LINE(320)
					Dynamic tmp8 = ObjectFactory();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(320)
					Dynamic tmp9 = object = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(320)
					this->add(tmp9);
				}
				else{
					HX_STACK_LINE(320)
					bool tmp8 = (ObjectClass != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(320)
					if ((tmp8)){
						HX_STACK_LINE(320)
						::hx::Class tmp9 = ObjectClass;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(320)
						Dynamic tmp10 = ::Type_obj::createInstance(tmp9,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(320)
						Dynamic tmp11 = object = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(320)
						this->add(tmp11);
					}
				}
				HX_STACK_LINE(320)
				tmp6 = object;
			}
			HX_STACK_LINE(320)
			Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(320)
			return tmp7;
		}
		HX_STACK_LINE(281)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedGroup_obj,recycle,return )

Dynamic FlxTypedGroup_obj::recycleCreateObject( ::hx::Class ObjectClass,Dynamic ObjectFactory){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","recycleCreateObject",0x87e5d006,"flixel.group.FlxTypedGroup.recycleCreateObject","flixel/group/FlxGroup.hx",325,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectClass,"ObjectClass")
	HX_STACK_ARG(ObjectFactory,"ObjectFactory")
	HX_STACK_LINE(326)
	Dynamic object = null();		HX_STACK_VAR(object,"object");
	HX_STACK_LINE(328)
	bool tmp = (ObjectFactory != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(328)
	if ((tmp)){
		HX_STACK_LINE(330)
		Dynamic tmp1 = ObjectFactory();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(330)
		Dynamic tmp2 = object = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(330)
		this->add(tmp2);
	}
	else{
		HX_STACK_LINE(332)
		bool tmp1 = (ObjectClass != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(332)
		if ((tmp1)){
			HX_STACK_LINE(334)
			::hx::Class tmp2 = ObjectClass;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(334)
			Dynamic tmp3 = ::Type_obj::createInstance(tmp2,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(334)
			Dynamic tmp4 = object = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(334)
			this->add(tmp4);
		}
	}
	HX_STACK_LINE(337)
	Dynamic tmp1 = object;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(337)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,recycleCreateObject,return )

Dynamic FlxTypedGroup_obj::remove( Dynamic Object,hx::Null< bool >  __o_Splice){
bool Splice = __o_Splice.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","remove",0xcb8bc2cc,"flixel.group.FlxTypedGroup.remove","flixel/group/FlxGroup.hx",348,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Splice,"Splice")
{
		HX_STACK_LINE(349)
		bool tmp = (this->members == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(349)
		if ((tmp)){
			HX_STACK_LINE(350)
			return null();
		}
		HX_STACK_LINE(352)
		Dynamic tmp1 = Object;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(352)
		int tmp2 = this->members->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(352)
		int index = tmp2;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(354)
		bool tmp3 = (index < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(354)
		if ((tmp3)){
			HX_STACK_LINE(355)
			return null();
		}
		HX_STACK_LINE(357)
		bool tmp4 = Splice;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(357)
		if ((tmp4)){
			HX_STACK_LINE(358)
			int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(358)
			this->members->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp5,(int)1);
		}
		else{
			HX_STACK_LINE(360)
			hx::IndexRef((this->members).mPtr,index) = null();
		}
		HX_STACK_LINE(362)
		Dynamic tmp5 = Object;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(362)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,remove,return )

Dynamic FlxTypedGroup_obj::replace( Dynamic OldObject,Dynamic NewObject){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","replace",0x06e6d8ac,"flixel.group.FlxTypedGroup.replace","flixel/group/FlxGroup.hx",374,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(OldObject,"OldObject")
	HX_STACK_ARG(NewObject,"NewObject")
	HX_STACK_LINE(375)
	Dynamic tmp = OldObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(375)
	int tmp1 = this->members->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(375)
	int index = tmp1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(377)
	bool tmp2 = (index < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(377)
	if ((tmp2)){
		HX_STACK_LINE(378)
		return null();
	}
	HX_STACK_LINE(380)
	Dynamic tmp3 = NewObject;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(380)
	hx::IndexRef((this->members).mPtr,index) = tmp3;
	HX_STACK_LINE(382)
	Dynamic tmp4 = NewObject;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(382)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,replace,return )

Void FlxTypedGroup_obj::sort( Dynamic Function,hx::Null< int >  __o_Order){
int Order = __o_Order.Default(-1);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","sort",0xf04f1be6,"flixel.group.FlxTypedGroup.sort","flixel/group/FlxGroup.hx",393,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Order,"Order")
{
		HX_STACK_LINE(394)
		Dynamic tmp = Function;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(394)
		int tmp1 = Order;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(394)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(394)
		{
			HX_STACK_LINE(394)
			Dynamic f = tmp;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(394)
			int a1 = tmp1;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,int,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			int run(Dynamic a2,Dynamic a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","flixel/group/FlxGroup.hx",394,0x1e89d58e)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(394)
					int tmp3 = a1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(394)
					Dynamic tmp4 = a2;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(394)
					Dynamic tmp5 = a3;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(394)
					int tmp6 = f(tmp3,tmp4,tmp5).Cast< int >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(394)
					return tmp6;
				}
				return null();
			}
			HX_END_LOCAL_FUNC2(return)

			HX_STACK_LINE(394)
			tmp2 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(394)
		this->members->__Field(HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"), hx::paccDynamic )(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,sort,(void))

Dynamic FlxTypedGroup_obj::getFirstAvailable( ::hx::Class ObjectClass,hx::Null< bool >  __o_Force){
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","getFirstAvailable",0x3f88c127,"flixel.group.FlxTypedGroup.getFirstAvailable","flixel/group/FlxGroup.hx",406,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectClass,"ObjectClass")
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(407)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(408)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(410)
		while((true)){
			HX_STACK_LINE(410)
			int tmp = i;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(410)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(410)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(410)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(410)
			if ((tmp3)){
				HX_STACK_LINE(410)
				break;
			}
			HX_STACK_LINE(412)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(412)
			Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(412)
			basic = tmp5;
			HX_STACK_LINE(414)
			bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(414)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(414)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(414)
			if ((tmp7)){
				HX_STACK_LINE(414)
				bool tmp9 = basic->exists;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(414)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(414)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(414)
				tmp8 = !(tmp11);
			}
			else{
				HX_STACK_LINE(414)
				tmp8 = false;
			}
			HX_STACK_LINE(414)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(414)
			if ((tmp8)){
				HX_STACK_LINE(414)
				bool tmp10 = (ObjectClass == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(414)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(414)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(414)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(414)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(414)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(414)
				if ((tmp15)){
					HX_STACK_LINE(414)
					::flixel::FlxBasic tmp16 = basic;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(414)
					::hx::Class tmp17 = ObjectClass;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(414)
					::flixel::FlxBasic tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(414)
					::hx::Class tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(414)
					::flixel::FlxBasic tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(414)
					::hx::Class tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(414)
					tmp9 = ::Std_obj::is(tmp20,tmp21);
				}
				else{
					HX_STACK_LINE(414)
					tmp9 = true;
				}
			}
			else{
				HX_STACK_LINE(414)
				tmp9 = false;
			}
			HX_STACK_LINE(414)
			if ((tmp9)){
				HX_STACK_LINE(416)
				bool tmp10 = Force;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(416)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(416)
				if ((tmp10)){
					HX_STACK_LINE(416)
					::flixel::FlxBasic tmp12 = basic;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(416)
					::flixel::FlxBasic tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(416)
					::hx::Class tmp14 = ::Type_obj::getClass(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(416)
					::hx::Class tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(416)
					::hx::Class tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(416)
					::String tmp17 = ::Type_obj::getClassName(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(416)
					::String tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(416)
					::hx::Class tmp19 = ObjectClass;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(416)
					::hx::Class tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(416)
					::String tmp21 = ::Type_obj::getClassName(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(416)
					::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(416)
					tmp11 = (tmp18 != tmp22);
				}
				else{
					HX_STACK_LINE(416)
					tmp11 = false;
				}
				HX_STACK_LINE(416)
				if ((tmp11)){
					HX_STACK_LINE(418)
					continue;
				}
				HX_STACK_LINE(420)
				int tmp12 = (i - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(420)
				Dynamic tmp13 = this->members->__GetItem(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(420)
				return tmp13;
			}
		}
		HX_STACK_LINE(424)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,getFirstAvailable,return )

int FlxTypedGroup_obj::getFirstNull( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","getFirstNull",0xc17e73e9,"flixel.group.FlxTypedGroup.getFirstNull","flixel/group/FlxGroup.hx",434,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(435)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(437)
	while((true)){
		HX_STACK_LINE(437)
		int tmp = i;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(437)
		int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(437)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(437)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(437)
		if ((tmp3)){
			HX_STACK_LINE(437)
			break;
		}
		HX_STACK_LINE(439)
		Dynamic tmp4 = this->members->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(439)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(439)
		if ((tmp5)){
			HX_STACK_LINE(441)
			int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(441)
			return tmp6;
		}
		HX_STACK_LINE(443)
		(i)++;
	}
	HX_STACK_LINE(446)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstNull,return )

Dynamic FlxTypedGroup_obj::getFirstExisting( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","getFirstExisting",0x314444ed,"flixel.group.FlxTypedGroup.getFirstExisting","flixel/group/FlxGroup.hx",456,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(457)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(458)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(460)
	while((true)){
		HX_STACK_LINE(460)
		int tmp = i;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(460)
		int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(460)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(460)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(460)
		if ((tmp3)){
			HX_STACK_LINE(460)
			break;
		}
		HX_STACK_LINE(462)
		int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(462)
		Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(462)
		basic = tmp5;
		HX_STACK_LINE(464)
		bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(464)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(464)
		if ((tmp6)){
			HX_STACK_LINE(464)
			tmp7 = basic->exists;
		}
		else{
			HX_STACK_LINE(464)
			tmp7 = false;
		}
		HX_STACK_LINE(464)
		if ((tmp7)){
			HX_STACK_LINE(466)
			Dynamic tmp8 = ((Dynamic)(basic));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(466)
			return tmp8;
		}
	}
	HX_STACK_LINE(470)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstExisting,return )

Dynamic FlxTypedGroup_obj::getFirstAlive( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","getFirstAlive",0x0afc442b,"flixel.group.FlxTypedGroup.getFirstAlive","flixel/group/FlxGroup.hx",480,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(481)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(482)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(484)
	while((true)){
		HX_STACK_LINE(484)
		int tmp = i;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(484)
		int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(484)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(484)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(484)
		if ((tmp3)){
			HX_STACK_LINE(484)
			break;
		}
		HX_STACK_LINE(486)
		int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(486)
		Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(486)
		basic = tmp5;
		HX_STACK_LINE(488)
		bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(488)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(488)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(488)
		if ((tmp7)){
			HX_STACK_LINE(488)
			tmp8 = basic->exists;
		}
		else{
			HX_STACK_LINE(488)
			tmp8 = false;
		}
		HX_STACK_LINE(488)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(488)
		if ((tmp8)){
			HX_STACK_LINE(488)
			tmp9 = basic->alive;
		}
		else{
			HX_STACK_LINE(488)
			tmp9 = false;
		}
		HX_STACK_LINE(488)
		if ((tmp9)){
			HX_STACK_LINE(490)
			Dynamic tmp10 = ((Dynamic)(basic));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(490)
			return tmp10;
		}
	}
	HX_STACK_LINE(494)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstAlive,return )

Dynamic FlxTypedGroup_obj::getFirstDead( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","getFirstDead",0xbad62406,"flixel.group.FlxTypedGroup.getFirstDead","flixel/group/FlxGroup.hx",504,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(505)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(506)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(508)
	while((true)){
		HX_STACK_LINE(508)
		int tmp = i;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(508)
		int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(508)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(508)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(508)
		if ((tmp3)){
			HX_STACK_LINE(508)
			break;
		}
		HX_STACK_LINE(510)
		int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(510)
		Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(510)
		basic = tmp5;
		HX_STACK_LINE(512)
		bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(512)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(512)
		if ((tmp6)){
			HX_STACK_LINE(512)
			bool tmp8 = basic->alive;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(512)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(512)
			tmp7 = !(tmp9);
		}
		else{
			HX_STACK_LINE(512)
			tmp7 = false;
		}
		HX_STACK_LINE(512)
		if ((tmp7)){
			HX_STACK_LINE(514)
			Dynamic tmp8 = ((Dynamic)(basic));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(514)
			return tmp8;
		}
	}
	HX_STACK_LINE(518)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstDead,return )

int FlxTypedGroup_obj::countLiving( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","countLiving",0x0ee705d0,"flixel.group.FlxTypedGroup.countLiving","flixel/group/FlxGroup.hx",527,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(528)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(529)
	int count = (int)-1;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(530)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(532)
	while((true)){
		HX_STACK_LINE(532)
		int tmp = i;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(532)
		int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(532)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(532)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(532)
		if ((tmp3)){
			HX_STACK_LINE(532)
			break;
		}
		HX_STACK_LINE(534)
		int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(534)
		Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(534)
		basic = tmp5;
		HX_STACK_LINE(536)
		bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(536)
		if ((tmp6)){
			HX_STACK_LINE(538)
			bool tmp7 = (count < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(538)
			if ((tmp7)){
				HX_STACK_LINE(540)
				count = (int)0;
			}
			HX_STACK_LINE(542)
			bool tmp8 = basic->exists;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(542)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(542)
			if ((tmp8)){
				HX_STACK_LINE(542)
				tmp9 = basic->alive;
			}
			else{
				HX_STACK_LINE(542)
				tmp9 = false;
			}
			HX_STACK_LINE(542)
			if ((tmp9)){
				HX_STACK_LINE(544)
				(count)++;
			}
		}
	}
	HX_STACK_LINE(549)
	int tmp = count;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(549)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,countLiving,return )

int FlxTypedGroup_obj::countDead( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","countDead",0x0964718b,"flixel.group.FlxTypedGroup.countDead","flixel/group/FlxGroup.hx",558,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(559)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(560)
	int count = (int)-1;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(561)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(563)
	while((true)){
		HX_STACK_LINE(563)
		int tmp = i;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(563)
		int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(563)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(563)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(563)
		if ((tmp3)){
			HX_STACK_LINE(563)
			break;
		}
		HX_STACK_LINE(565)
		int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(565)
		Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(565)
		basic = tmp5;
		HX_STACK_LINE(567)
		bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(567)
		if ((tmp6)){
			HX_STACK_LINE(569)
			bool tmp7 = (count < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(569)
			if ((tmp7)){
				HX_STACK_LINE(571)
				count = (int)0;
			}
			HX_STACK_LINE(573)
			bool tmp8 = basic->alive;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(573)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(573)
			if ((tmp9)){
				HX_STACK_LINE(575)
				(count)++;
			}
		}
	}
	HX_STACK_LINE(580)
	int tmp = count;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(580)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,countDead,return )

Dynamic FlxTypedGroup_obj::getRandom( hx::Null< int >  __o_StartIndex,hx::Null< int >  __o_Length){
int StartIndex = __o_StartIndex.Default(0);
int Length = __o_Length.Default(0);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","getRandom",0xe8c349b1,"flixel.group.FlxTypedGroup.getRandom","flixel/group/FlxGroup.hx",591,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(StartIndex,"StartIndex")
	HX_STACK_ARG(Length,"Length")
{
		HX_STACK_LINE(592)
		bool tmp = (StartIndex < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(592)
		if ((tmp)){
			HX_STACK_LINE(594)
			StartIndex = (int)0;
		}
		HX_STACK_LINE(596)
		bool tmp1 = (Length <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(596)
		if ((tmp1)){
			HX_STACK_LINE(598)
			int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(598)
			Length = tmp2;
		}
		HX_STACK_LINE(601)
		::flixel::math::FlxRandom tmp2 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(601)
		int tmp3 = StartIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(601)
		int tmp4 = Length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(601)
		Dynamic tmp5 = tmp2->getObject_flixel_group_FlxTypedGroup_T(this->members,null(),tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(601)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,getRandom,return )

Void FlxTypedGroup_obj::clear( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","clear",0x1c7a7405,"flixel.group.FlxTypedGroup.clear","flixel/group/FlxGroup.hx",609,0x1e89d58e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(610)
		this->length = (int)0;
		HX_STACK_LINE(611)
		::flixel::util::FlxArrayUtil_obj::clearArray(this->members,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,clear,(void))

Void FlxTypedGroup_obj::kill( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","kill",0xeb00d426,"flixel.group.FlxTypedGroup.kill","flixel/group/FlxGroup.hx",619,0x1e89d58e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(620)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(621)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(623)
		while((true)){
			HX_STACK_LINE(623)
			int tmp = i;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(623)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(623)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(623)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(623)
			if ((tmp3)){
				HX_STACK_LINE(623)
				break;
			}
			HX_STACK_LINE(625)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(625)
			Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(625)
			basic = tmp5;
			HX_STACK_LINE(627)
			bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(627)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(627)
			if ((tmp6)){
				HX_STACK_LINE(627)
				tmp7 = basic->exists;
			}
			else{
				HX_STACK_LINE(627)
				tmp7 = false;
			}
			HX_STACK_LINE(627)
			if ((tmp7)){
				HX_STACK_LINE(629)
				basic->kill();
			}
		}
		HX_STACK_LINE(633)
		this->super::kill();
	}
return null();
}


Void FlxTypedGroup_obj::revive( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","revive",0xd17a20dd,"flixel.group.FlxTypedGroup.revive","flixel/group/FlxGroup.hx",640,0x1e89d58e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(641)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(642)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(644)
		while((true)){
			HX_STACK_LINE(644)
			int tmp = i;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(644)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(644)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(644)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(644)
			if ((tmp3)){
				HX_STACK_LINE(644)
				break;
			}
			HX_STACK_LINE(646)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(646)
			Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(646)
			basic = tmp5;
			HX_STACK_LINE(648)
			bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(648)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(648)
			if ((tmp6)){
				HX_STACK_LINE(648)
				bool tmp8 = basic->exists;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(648)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(648)
				tmp7 = !(tmp9);
			}
			else{
				HX_STACK_LINE(648)
				tmp7 = false;
			}
			HX_STACK_LINE(648)
			if ((tmp7)){
				HX_STACK_LINE(650)
				basic->revive();
			}
		}
		HX_STACK_LINE(654)
		this->super::revive();
	}
return null();
}


::flixel::group::FlxTypedGroupIterator FlxTypedGroup_obj::iterator( Dynamic filter){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","iterator",0x7e9a2276,"flixel.group.FlxTypedGroup.iterator","flixel/group/FlxGroup.hx",661,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(662)
	::flixel::group::FlxTypedGroupIterator tmp = ::flixel::group::FlxTypedGroupIterator_obj::__new(this->members,filter);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(662)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,iterator,return )

Void FlxTypedGroup_obj::forEach( Dynamic Function,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","forEach",0x207cba22,"flixel.group.FlxTypedGroup.forEach","flixel/group/FlxGroup.hx",672,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Recurse,"Recurse")
{
		HX_STACK_LINE(673)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(674)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(676)
		while((true)){
			HX_STACK_LINE(676)
			int tmp = i;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(676)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(676)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(676)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(676)
			if ((tmp3)){
				HX_STACK_LINE(676)
				break;
			}
			HX_STACK_LINE(678)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(678)
			Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(678)
			basic = tmp5;
			HX_STACK_LINE(680)
			bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(680)
			if ((tmp6)){
				HX_STACK_LINE(682)
				bool tmp7 = Recurse;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(682)
				if ((tmp7)){
					HX_STACK_LINE(684)
					::flixel::FlxBasic tmp8 = basic;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(684)
					::flixel::group::FlxTypedGroup tmp9 = ::flixel::group::FlxTypedGroup_obj::resolveGroup(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(684)
					::flixel::group::FlxTypedGroup group = tmp9;		HX_STACK_VAR(group,"group");
					HX_STACK_LINE(685)
					bool tmp10 = (group != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(685)
					if ((tmp10)){
						HX_STACK_LINE(687)
						Dynamic tmp11 = Function;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(687)
						bool tmp12 = Recurse;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(687)
						group->forEach(tmp11,tmp12);
					}
				}
				HX_STACK_LINE(691)
				Dynamic tmp8 = ((Dynamic)(basic));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(691)
				Function(tmp8).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEach,(void))

Void FlxTypedGroup_obj::forEachAlive( Dynamic Function,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","forEachAlive",0x4c021e4b,"flixel.group.FlxTypedGroup.forEachAlive","flixel/group/FlxGroup.hx",703,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Recurse,"Recurse")
{
		HX_STACK_LINE(704)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(705)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(707)
		while((true)){
			HX_STACK_LINE(707)
			int tmp = i;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(707)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(707)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(707)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(707)
			if ((tmp3)){
				HX_STACK_LINE(707)
				break;
			}
			HX_STACK_LINE(709)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(709)
			Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(709)
			basic = tmp5;
			HX_STACK_LINE(711)
			bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(711)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(711)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(711)
			if ((tmp7)){
				HX_STACK_LINE(711)
				tmp8 = basic->exists;
			}
			else{
				HX_STACK_LINE(711)
				tmp8 = false;
			}
			HX_STACK_LINE(711)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(711)
			if ((tmp8)){
				HX_STACK_LINE(711)
				tmp9 = basic->alive;
			}
			else{
				HX_STACK_LINE(711)
				tmp9 = false;
			}
			HX_STACK_LINE(711)
			if ((tmp9)){
				HX_STACK_LINE(713)
				bool tmp10 = Recurse;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(713)
				if ((tmp10)){
					HX_STACK_LINE(715)
					::flixel::FlxBasic tmp11 = basic;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(715)
					::flixel::group::FlxTypedGroup tmp12 = ::flixel::group::FlxTypedGroup_obj::resolveGroup(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(715)
					::flixel::group::FlxTypedGroup group = tmp12;		HX_STACK_VAR(group,"group");
					HX_STACK_LINE(716)
					bool tmp13 = (group != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(716)
					if ((tmp13)){
						HX_STACK_LINE(718)
						Dynamic tmp14 = Function;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(718)
						bool tmp15 = Recurse;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(718)
						group->forEachAlive(tmp14,tmp15);
					}
				}
				HX_STACK_LINE(722)
				Dynamic tmp11 = ((Dynamic)(basic));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(722)
				Function(tmp11).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEachAlive,(void))

Void FlxTypedGroup_obj::forEachDead( Dynamic Function,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","forEachDead",0x5740ede6,"flixel.group.FlxTypedGroup.forEachDead","flixel/group/FlxGroup.hx",734,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Recurse,"Recurse")
{
		HX_STACK_LINE(735)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(736)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(738)
		while((true)){
			HX_STACK_LINE(738)
			int tmp = i;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(738)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(738)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(738)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(738)
			if ((tmp3)){
				HX_STACK_LINE(738)
				break;
			}
			HX_STACK_LINE(740)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(740)
			Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(740)
			basic = tmp5;
			HX_STACK_LINE(742)
			bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(742)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(742)
			if ((tmp6)){
				HX_STACK_LINE(742)
				bool tmp8 = basic->alive;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(742)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(742)
				tmp7 = !(tmp9);
			}
			else{
				HX_STACK_LINE(742)
				tmp7 = false;
			}
			HX_STACK_LINE(742)
			if ((tmp7)){
				HX_STACK_LINE(744)
				bool tmp8 = Recurse;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(744)
				if ((tmp8)){
					HX_STACK_LINE(746)
					::flixel::FlxBasic tmp9 = basic;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(746)
					::flixel::group::FlxTypedGroup tmp10 = ::flixel::group::FlxTypedGroup_obj::resolveGroup(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(746)
					::flixel::group::FlxTypedGroup group = tmp10;		HX_STACK_VAR(group,"group");
					HX_STACK_LINE(747)
					bool tmp11 = (group != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(747)
					if ((tmp11)){
						HX_STACK_LINE(749)
						Dynamic tmp12 = Function;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(749)
						bool tmp13 = Recurse;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(749)
						group->forEachDead(tmp12,tmp13);
					}
				}
				HX_STACK_LINE(753)
				Dynamic tmp9 = ((Dynamic)(basic));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(753)
				Function(tmp9).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEachDead,(void))

Void FlxTypedGroup_obj::forEachExists( Dynamic Function,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","forEachExists",0xb812919e,"flixel.group.FlxTypedGroup.forEachExists","flixel/group/FlxGroup.hx",765,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Recurse,"Recurse")
{
		HX_STACK_LINE(766)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(767)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(769)
		while((true)){
			HX_STACK_LINE(769)
			int tmp = i;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(769)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(769)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(769)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(769)
			if ((tmp3)){
				HX_STACK_LINE(769)
				break;
			}
			HX_STACK_LINE(771)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(771)
			Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(771)
			basic = tmp5;
			HX_STACK_LINE(773)
			bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(773)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(773)
			if ((tmp6)){
				HX_STACK_LINE(773)
				tmp7 = basic->exists;
			}
			else{
				HX_STACK_LINE(773)
				tmp7 = false;
			}
			HX_STACK_LINE(773)
			if ((tmp7)){
				HX_STACK_LINE(775)
				bool tmp8 = Recurse;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(775)
				if ((tmp8)){
					HX_STACK_LINE(777)
					::flixel::FlxBasic tmp9 = basic;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(777)
					::flixel::group::FlxTypedGroup tmp10 = ::flixel::group::FlxTypedGroup_obj::resolveGroup(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(777)
					::flixel::group::FlxTypedGroup group = tmp10;		HX_STACK_VAR(group,"group");
					HX_STACK_LINE(778)
					bool tmp11 = (group != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(778)
					if ((tmp11)){
						HX_STACK_LINE(780)
						Dynamic tmp12 = Function;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(780)
						bool tmp13 = Recurse;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(780)
						group->forEachExists(tmp12,tmp13);
					}
				}
				HX_STACK_LINE(784)
				Dynamic tmp9 = ((Dynamic)(basic));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(784)
				Function(tmp9).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEachExists,(void))

Void FlxTypedGroup_obj::forEachOfType( ::hx::Class ObjectClass,Dynamic Function,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","forEachOfType",0x4c90cb33,"flixel.group.FlxTypedGroup.forEachOfType","flixel/group/FlxGroup.hx",797,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectClass,"ObjectClass")
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Recurse,"Recurse")
{
		HX_STACK_LINE(798)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(799)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(801)
		while((true)){
			HX_STACK_LINE(801)
			int tmp = i;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(801)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(801)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(801)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(801)
			if ((tmp3)){
				HX_STACK_LINE(801)
				break;
			}
			HX_STACK_LINE(803)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(803)
			Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(803)
			basic = tmp5;
			HX_STACK_LINE(805)
			bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(805)
			if ((tmp6)){
				HX_STACK_LINE(807)
				bool tmp7 = Recurse;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(807)
				if ((tmp7)){
					HX_STACK_LINE(809)
					::flixel::FlxBasic tmp8 = basic;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(809)
					::flixel::group::FlxTypedGroup tmp9 = ::flixel::group::FlxTypedGroup_obj::resolveGroup(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(809)
					::flixel::group::FlxTypedGroup group = tmp9;		HX_STACK_VAR(group,"group");
					HX_STACK_LINE(810)
					bool tmp10 = (group != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(810)
					if ((tmp10)){
						HX_STACK_LINE(812)
						::hx::Class tmp11 = ObjectClass;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(812)
						Dynamic tmp12 = Function;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(812)
						bool tmp13 = Recurse;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(812)
						group->forEachOfType(tmp11,tmp12,tmp13);
					}
				}
				HX_STACK_LINE(816)
				::flixel::FlxBasic tmp8 = basic;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(816)
				::hx::Class tmp9 = ObjectClass;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(816)
				bool tmp10 = ::Std_obj::is(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(816)
				if ((tmp10)){
					HX_STACK_LINE(817)
					Dynamic tmp11 = ((Dynamic)(basic));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(817)
					Function(tmp11).Cast< Void >();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedGroup_obj,forEachOfType,(void))

int FlxTypedGroup_obj::set_maxSize( int Size){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","set_maxSize",0x3b478d20,"flixel.group.FlxTypedGroup.set_maxSize","flixel/group/FlxGroup.hx",823,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Size,"Size")
	HX_STACK_LINE(824)
	int tmp = Size;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(824)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(824)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(824)
	this->maxSize = tmp2;
	HX_STACK_LINE(826)
	int tmp3 = this->_marker;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(826)
	int tmp4 = this->maxSize;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(826)
	bool tmp5 = (tmp3 >= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(826)
	if ((tmp5)){
		HX_STACK_LINE(828)
		this->_marker = (int)0;
	}
	HX_STACK_LINE(830)
	int tmp6 = this->maxSize;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(830)
	bool tmp7 = (tmp6 == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(830)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(830)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(830)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(830)
	if ((tmp9)){
		HX_STACK_LINE(830)
		tmp10 = (this->members == null());
	}
	else{
		HX_STACK_LINE(830)
		tmp10 = true;
	}
	HX_STACK_LINE(830)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(830)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(830)
	if ((tmp11)){
		HX_STACK_LINE(830)
		int tmp13 = this->maxSize;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(830)
		int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(830)
		int tmp15 = this->length;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(830)
		int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(830)
		tmp12 = (tmp14 >= tmp16);
	}
	else{
		HX_STACK_LINE(830)
		tmp12 = true;
	}
	HX_STACK_LINE(830)
	if ((tmp12)){
		HX_STACK_LINE(832)
		int tmp13 = this->maxSize;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(832)
		return tmp13;
	}
	HX_STACK_LINE(836)
	int tmp13 = this->maxSize;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(836)
	int i = tmp13;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(837)
	int tmp14 = this->length;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(837)
	int l = tmp14;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(838)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(840)
	while((true)){
		HX_STACK_LINE(840)
		bool tmp15 = (i < l);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(840)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(840)
		if ((tmp16)){
			HX_STACK_LINE(840)
			break;
		}
		HX_STACK_LINE(842)
		int tmp17 = (i)++;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(842)
		Dynamic tmp18 = this->members->__GetItem(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(842)
		basic = tmp18;
		HX_STACK_LINE(844)
		bool tmp19 = (basic != null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(844)
		if ((tmp19)){
			HX_STACK_LINE(845)
			basic->destroy();
		}
	}
	HX_STACK_LINE(848)
	int tmp15 = this->maxSize;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(848)
	::flixel::util::FlxArrayUtil_obj::setLength_flixel_group_FlxTypedGroup_T(this->members,tmp15);
	HX_STACK_LINE(849)
	int tmp16 = this->members->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(849)
	this->length = tmp16;
	HX_STACK_LINE(851)
	int tmp17 = this->maxSize;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(851)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,set_maxSize,return )

bool FlxTypedGroup_obj::overlaps( Dynamic Callback,::flixel::group::FlxTypedGroup Group,Float X,Float Y,bool InScreenSpace,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","overlaps",0x302aab94,"flixel.group.FlxTypedGroup.overlaps","flixel/group/FlxGroup.hx",23,0x1e89d58e)
	HX_STACK_ARG(Callback,"Callback")
	HX_STACK_ARG(Group,"Group")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(24)
	bool result = false;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(25)
	bool tmp = (Group != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	if ((tmp)){
		HX_STACK_LINE(27)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(28)
		int l = Group->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(29)
		::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(31)
		while((true)){
			HX_STACK_LINE(31)
			bool tmp1 = (i < l);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(31)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(31)
			if ((tmp2)){
				HX_STACK_LINE(31)
				break;
			}
			HX_STACK_LINE(33)
			int tmp3 = (i)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(33)
			::flixel::FlxBasic tmp4 = Group->members->__GetItem(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(33)
			basic = tmp4;
			HX_STACK_LINE(35)
			bool tmp5 = (basic != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(35)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(35)
			if ((tmp5)){
				HX_STACK_LINE(35)
				::flixel::FlxBasic tmp7 = basic;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(35)
				Float tmp8 = X;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(35)
				Float tmp9 = Y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(35)
				bool tmp10 = InScreenSpace;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(35)
				::flixel::FlxCamera tmp11 = Camera;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(35)
				::flixel::FlxBasic tmp12 = tmp7;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(35)
				Float tmp13 = tmp8;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(35)
				Float tmp14 = tmp9;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(35)
				bool tmp15 = tmp10;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(35)
				::flixel::FlxCamera tmp16 = tmp11;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(35)
				tmp6 = Callback(tmp12,tmp13,tmp14,tmp15,tmp16).Cast< bool >();
			}
			else{
				HX_STACK_LINE(35)
				tmp6 = false;
			}
			HX_STACK_LINE(35)
			if ((tmp6)){
				HX_STACK_LINE(37)
				result = true;
				HX_STACK_LINE(38)
				break;
			}
		}
	}
	HX_STACK_LINE(42)
	bool tmp1 = result;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxTypedGroup_obj,overlaps,return )

::flixel::group::FlxTypedGroup FlxTypedGroup_obj::resolveGroup( ::flixel::FlxBasic ObjectOrGroup){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","resolveGroup",0x84c4b53b,"flixel.group.FlxTypedGroup.resolveGroup","flixel/group/FlxGroup.hx",46,0x1e89d58e)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_LINE(47)
	::flixel::group::FlxTypedGroup group = null();		HX_STACK_VAR(group,"group");
	HX_STACK_LINE(48)
	bool tmp = (ObjectOrGroup != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	if ((tmp)){
		HX_STACK_LINE(50)
		bool tmp1 = (ObjectOrGroup->flixelType == (int)2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		if ((tmp1)){
			HX_STACK_LINE(52)
			group = ((::flixel::group::FlxTypedGroup)(ObjectOrGroup));
		}
		else{
			HX_STACK_LINE(54)
			bool tmp2 = (ObjectOrGroup->flixelType == (int)4);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(54)
			if ((tmp2)){
				HX_STACK_LINE(56)
				::flixel::group::FlxTypedSpriteGroup spriteGroup = ((::flixel::group::FlxTypedSpriteGroup)(ObjectOrGroup));		HX_STACK_VAR(spriteGroup,"spriteGroup");
				HX_STACK_LINE(57)
				group = spriteGroup->group;
			}
		}
	}
	HX_STACK_LINE(60)
	::flixel::group::FlxTypedGroup tmp1 = group;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,resolveGroup,return )


FlxTypedGroup_obj::FlxTypedGroup_obj()
{
}

void FlxTypedGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedGroup);
	HX_MARK_MEMBER_NAME(members,"members");
	HX_MARK_MEMBER_NAME(maxSize,"maxSize");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(_marker,"_marker");
	::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypedGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(members,"members");
	HX_VISIT_MEMBER_NAME(maxSize,"maxSize");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(_marker,"_marker");
	::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTypedGroup_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"sort") ) { return sort_dyn(); }
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"revive") ) { return revive_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"members") ) { return members; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { return maxSize; }
		if (HX_FIELD_EQ(inName,"_marker") ) { return _marker; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		if (HX_FIELD_EQ(inName,"replace") ) { return replace_dyn(); }
		if (HX_FIELD_EQ(inName,"forEach") ) { return forEach_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"countDead") ) { return countDead_dyn(); }
		if (HX_FIELD_EQ(inName,"getRandom") ) { return getRandom_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"countLiving") ) { return countLiving_dyn(); }
		if (HX_FIELD_EQ(inName,"forEachDead") ) { return forEachDead_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxSize") ) { return set_maxSize_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getFirstNull") ) { return getFirstNull_dyn(); }
		if (HX_FIELD_EQ(inName,"getFirstDead") ) { return getFirstDead_dyn(); }
		if (HX_FIELD_EQ(inName,"forEachAlive") ) { return forEachAlive_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getFirstAlive") ) { return getFirstAlive_dyn(); }
		if (HX_FIELD_EQ(inName,"forEachExists") ) { return forEachExists_dyn(); }
		if (HX_FIELD_EQ(inName,"forEachOfType") ) { return forEachOfType_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getFirstExisting") ) { return getFirstExisting_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getFirstAvailable") ) { return getFirstAvailable_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"recycleCreateObject") ) { return recycleCreateObject_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxTypedGroup_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"overlaps") ) { outValue = overlaps_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resolveGroup") ) { outValue = resolveGroup_dyn(); return true;  }
	}
	return false;
}

Dynamic FlxTypedGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"members") ) { members=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { if (inCallProp == hx::paccAlways) return set_maxSize(inValue);maxSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_marker") ) { _marker=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("members","\xd9","\x2c","\x70","\x1a"));
	outFields->push(HX_HCSTRING("maxSize","\x85","\xf9","\x83","\xcc"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("_marker","\x59","\x87","\xe7","\x28"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(FlxTypedGroup_obj,members),HX_HCSTRING("members","\xd9","\x2c","\x70","\x1a")},
	{hx::fsInt,(int)offsetof(FlxTypedGroup_obj,maxSize),HX_HCSTRING("maxSize","\x85","\xf9","\x83","\xcc")},
	{hx::fsInt,(int)offsetof(FlxTypedGroup_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsInt,(int)offsetof(FlxTypedGroup_obj,_marker),HX_HCSTRING("_marker","\x59","\x87","\xe7","\x28")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("members","\xd9","\x2c","\x70","\x1a"),
	HX_HCSTRING("maxSize","\x85","\xf9","\x83","\xcc"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("_marker","\x59","\x87","\xe7","\x28"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("insert","\x39","\x43","\xdd","\x9d"),
	HX_HCSTRING("recycle","\x13","\x10","\x8c","\x37"),
	HX_HCSTRING("recycleCreateObject","\x8e","\x6b","\x54","\x8e"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("replace","\x34","\x48","\x28","\xab"),
	HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"),
	HX_HCSTRING("getFirstAvailable","\xaf","\xea","\xb3","\x05"),
	HX_HCSTRING("getFirstNull","\x61","\xb7","\x33","\x0f"),
	HX_HCSTRING("getFirstExisting","\x65","\xa4","\x6c","\xee"),
	HX_HCSTRING("getFirstAlive","\xb3","\x09","\xe2","\xbb"),
	HX_HCSTRING("getFirstDead","\x7e","\x67","\x8b","\x08"),
	HX_HCSTRING("countLiving","\x58","\xd9","\x8a","\x30"),
	HX_HCSTRING("countDead","\x13","\xd3","\x86","\x54"),
	HX_HCSTRING("getRandom","\x39","\xab","\xe5","\x33"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	HX_HCSTRING("revive","\x55","\xfa","\x76","\x0a"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("forEach","\xaa","\x29","\xbe","\xc4"),
	HX_HCSTRING("forEachAlive","\xc3","\x61","\xb7","\x99"),
	HX_HCSTRING("forEachDead","\x6e","\xc1","\xe4","\x78"),
	HX_HCSTRING("forEachExists","\x26","\x57","\xf8","\x68"),
	HX_HCSTRING("forEachOfType","\xbb","\x90","\x76","\xfd"),
	HX_HCSTRING("set_maxSize","\xa8","\x60","\xeb","\x5c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypedGroup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypedGroup_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTypedGroup_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("overlaps","\x0c","\xd3","\x2a","\x45"),
	HX_HCSTRING("resolveGroup","\xb3","\xf8","\x79","\xd2"),
	::String(null()) };

void FlxTypedGroup_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.group.FlxTypedGroup","\xe6","\xb8","\x51","\xd3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTypedGroup_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTypedGroup_obj >;
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

} // end namespace flixel
} // end namespace group
