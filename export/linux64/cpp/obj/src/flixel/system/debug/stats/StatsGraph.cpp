#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#include <flixel/system/debug/DebuggerUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_stats_StatsGraph
#include <flixel/system/debug/stats/StatsGraph.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_CapsStyle
#include <openfl/_legacy/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_JointStyle
#include <openfl/_legacy/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_LineScaleMode
#include <openfl/_legacy/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Shape
#include <openfl/_legacy/display/Shape.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
namespace flixel{
namespace _system{
namespace debug{
namespace stats{

Void StatsGraph_obj::__construct(int X,int Y,int Width,int Height,int GraphColor,::String Unit,hx::Null< int >  __o_LabelWidth,::String Label)
{
HX_STACK_FRAME("flixel.system.debug.stats.StatsGraph","new",0x328f8738,"flixel.system.debug.stats.StatsGraph.new","flixel/system/debug/stats/StatsGraph.hx",16,0xbadd4916)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(Width,"Width")
HX_STACK_ARG(Height,"Height")
HX_STACK_ARG(GraphColor,"GraphColor")
HX_STACK_ARG(Unit,"Unit")
HX_STACK_ARG(__o_LabelWidth,"LabelWidth")
HX_STACK_ARG(Label,"Label")
int LabelWidth = __o_LabelWidth.Default(45);
{
	HX_STACK_LINE(32)
	this->history = Array_obj< Float >::__new();
	HX_STACK_LINE(28)
	this->maxValue = ((Float)5e-324);
	HX_STACK_LINE(27)
	this->minValue = ((Float)1.79e+308);
	HX_STACK_LINE(43)
	super::__construct();
	HX_STACK_LINE(44)
	int tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	this->set_x(tmp);
	HX_STACK_LINE(45)
	int tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	this->set_y(tmp1);
	HX_STACK_LINE(46)
	int tmp2 = (Width - LabelWidth);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	this->_width = tmp2;
	HX_STACK_LINE(47)
	this->_height = Height;
	HX_STACK_LINE(48)
	this->graphColor = GraphColor;
	HX_STACK_LINE(49)
	this->_unit = Unit;
	HX_STACK_LINE(50)
	this->_labelWidth = LabelWidth;
	HX_STACK_LINE(51)
	bool tmp3 = (Label == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(51)
	::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(51)
	if ((tmp3)){
		HX_STACK_LINE(51)
		tmp4 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	else{
		HX_STACK_LINE(51)
		tmp4 = Label;
	}
	HX_STACK_LINE(51)
	this->_label = tmp4;
	HX_STACK_LINE(53)
	::openfl::_legacy::display::Shape tmp5 = ::openfl::_legacy::display::Shape_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(53)
	this->_axis = tmp5;
	HX_STACK_LINE(54)
	::openfl::_legacy::display::Shape tmp6 = this->_axis;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(54)
	int tmp7 = this->_labelWidth;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(54)
	int tmp8 = (tmp7 + (int)10);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(54)
	tmp6->set_x(tmp8);
	HX_STACK_LINE(56)
	::openfl::_legacy::text::TextField tmp9 = ::flixel::_system::debug::DebuggerUtil_obj::createTextField((int)0,(int)0,(int)-1426063361,(int)11);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(56)
	this->maxLabel = tmp9;
	HX_STACK_LINE(57)
	int tmp10 = this->_height;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(57)
	Float tmp11 = (Float(tmp10) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(57)
	Float tmp12 = ((Float)5.5);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(57)
	Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(57)
	int tmp14 = this->graphColor;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(57)
	::openfl::_legacy::text::TextField tmp15 = ::flixel::_system::debug::DebuggerUtil_obj::createTextField((int)0,tmp13,tmp14,(int)11);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(57)
	this->curLabel = tmp15;
	HX_STACK_LINE(58)
	int tmp16 = this->_height;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(58)
	int tmp17 = (tmp16 - (int)11);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(58)
	::openfl::_legacy::text::TextField tmp18 = ::flixel::_system::debug::DebuggerUtil_obj::createTextField((int)0,tmp17,(int)-1426063361,(int)11);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(58)
	this->minLabel = tmp18;
	HX_STACK_LINE(60)
	int tmp19 = this->_labelWidth;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(60)
	int tmp20 = (tmp19 + (int)20);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(60)
	int tmp21 = this->_height;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(60)
	Float tmp22 = (Float(tmp21) / Float((int)2));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(60)
	Float tmp23 = ((Float)5.5);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(60)
	Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(60)
	Float tmp25 = (tmp24 - (int)10);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(60)
	::openfl::_legacy::text::TextField tmp26 = ::flixel::_system::debug::DebuggerUtil_obj::createTextField(tmp20,tmp25,(int)-1426063361,(int)11);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(60)
	this->avgLabel = tmp26;
	HX_STACK_LINE(61)
	::openfl::_legacy::text::TextField tmp27 = this->avgLabel;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(61)
	int tmp28 = this->_width;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(61)
	tmp27->set_width(tmp28);
	HX_STACK_LINE(62)
	::openfl::_legacy::text::TextField tmp29 = this->avgLabel;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(62)
	::openfl::_legacy::text::TextFormat tmp30 = tmp29->get_defaultTextFormat();		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(62)
	tmp30->align = HX_HCSTRING("center","\xd5","\x25","\xdb","\x05");
	HX_STACK_LINE(63)
	::openfl::_legacy::text::TextField tmp31 = this->avgLabel;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(63)
	tmp31->set_alpha(((Float)0.5));
	HX_STACK_LINE(65)
	::openfl::_legacy::display::Shape tmp32 = this->_axis;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(65)
	this->addChild(tmp32);
	HX_STACK_LINE(66)
	::openfl::_legacy::text::TextField tmp33 = this->maxLabel;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(66)
	this->addChild(tmp33);
	HX_STACK_LINE(67)
	::openfl::_legacy::text::TextField tmp34 = this->curLabel;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(67)
	this->addChild(tmp34);
	HX_STACK_LINE(68)
	::openfl::_legacy::text::TextField tmp35 = this->minLabel;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(68)
	this->addChild(tmp35);
	HX_STACK_LINE(69)
	::openfl::_legacy::text::TextField tmp36 = this->avgLabel;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(69)
	this->addChild(tmp36);
	HX_STACK_LINE(71)
	this->drawAxes();
}
;
	return null();
}

//StatsGraph_obj::~StatsGraph_obj() { }

Dynamic StatsGraph_obj::__CreateEmpty() { return  new StatsGraph_obj; }
hx::ObjectPtr< StatsGraph_obj > StatsGraph_obj::__new(int X,int Y,int Width,int Height,int GraphColor,::String Unit,hx::Null< int >  __o_LabelWidth,::String Label)
{  hx::ObjectPtr< StatsGraph_obj > _result_ = new StatsGraph_obj();
	_result_->__construct(X,Y,Width,Height,GraphColor,Unit,__o_LabelWidth,Label);
	return _result_;}

Dynamic StatsGraph_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StatsGraph_obj > _result_ = new StatsGraph_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _result_;}

Void StatsGraph_obj::drawAxes( ){
{
		HX_STACK_FRAME("flixel.system.debug.stats.StatsGraph","drawAxes",0x7d893d71,"flixel.system.debug.stats.StatsGraph.drawAxes","flixel/system/debug/stats/StatsGraph.hx",78,0xbadd4916)
		HX_STACK_THIS(this)
		HX_STACK_LINE(79)
		::openfl::_legacy::display::Shape tmp = this->_axis;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		::openfl::_legacy::display::Graphics tmp1 = tmp->get_graphics();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(79)
		::openfl::_legacy::display::Graphics gfx = tmp1;		HX_STACK_VAR(gfx,"gfx");
		HX_STACK_LINE(80)
		gfx->clear();
		HX_STACK_LINE(81)
		gfx->lineStyle((int)1,(int)16777215,((Float)0.5),null(),null(),null(),null(),null());
		HX_STACK_LINE(84)
		gfx->moveTo((int)0,(int)0);
		HX_STACK_LINE(85)
		int tmp2 = this->_height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(85)
		gfx->lineTo((int)0,tmp2);
		HX_STACK_LINE(88)
		int tmp3 = this->_height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(88)
		gfx->moveTo((int)0,tmp3);
		HX_STACK_LINE(89)
		int tmp4 = this->_width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(89)
		int tmp5 = this->_height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(89)
		gfx->lineTo(tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StatsGraph_obj,drawAxes,(void))

Void StatsGraph_obj::drawGraph( ){
{
		HX_STACK_FRAME("flixel.system.debug.stats.StatsGraph","drawGraph",0xcaf9ad82,"flixel.system.debug.stats.StatsGraph.drawGraph","flixel/system/debug/stats/StatsGraph.hx",96,0xbadd4916)
		HX_STACK_THIS(this)
		HX_STACK_LINE(97)
		::openfl::_legacy::display::Graphics tmp = this->get_graphics();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(97)
		::openfl::_legacy::display::Graphics gfx = tmp;		HX_STACK_VAR(gfx,"gfx");
		HX_STACK_LINE(98)
		gfx->clear();
		HX_STACK_LINE(99)
		int tmp1 = this->graphColor;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		gfx->lineStyle((int)1,tmp1,(int)1,null(),null(),null(),null(),null());
		HX_STACK_LINE(101)
		int tmp2 = this->_width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(101)
		int tmp3 = (int)29;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(101)
		Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(101)
		Float inc = tmp4;		HX_STACK_VAR(inc,"inc");
		HX_STACK_LINE(102)
		Float tmp5 = this->maxValue;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(102)
		Float tmp6 = this->minValue;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(102)
		Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(102)
		Float tmp8 = this->maxValue;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(102)
		Float tmp9 = (tmp8 * ((Float)0.1));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(102)
		Float tmp10 = ::Math_obj::max(tmp7,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(102)
		Float range = tmp10;		HX_STACK_VAR(range,"range");
		HX_STACK_LINE(103)
		::openfl::_legacy::display::Shape tmp11 = this->_axis;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(103)
		Float tmp12 = tmp11->get_x();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(103)
		Float tmp13 = (tmp12 + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(103)
		Float graphX = tmp13;		HX_STACK_VAR(graphX,"graphX");
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(105)
			int tmp14 = this->history->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(105)
			int _g = tmp14;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(105)
			while((true)){
				HX_STACK_LINE(105)
				bool tmp15 = (_g1 < _g);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(105)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(105)
				if ((tmp16)){
					HX_STACK_LINE(105)
					break;
				}
				HX_STACK_LINE(105)
				int tmp17 = (_g1)++;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(105)
				int i = tmp17;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(107)
				Float tmp18 = this->history->__GetItem(i);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(107)
				Float tmp19 = this->minValue;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(107)
				Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(107)
				Float tmp21 = range;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(107)
				Float tmp22 = (Float(tmp20) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(107)
				Float value = tmp22;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(109)
				Float tmp23 = value;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(109)
				Float tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(109)
				int tmp25 = this->_height;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(109)
				Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(109)
				Float tmp27 = (tmp26 - (int)1);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(109)
				int tmp28 = this->_height;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(109)
				Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(109)
				Float pointY = tmp29;		HX_STACK_VAR(pointY,"pointY");
				HX_STACK_LINE(110)
				bool tmp30 = (i == (int)0);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(110)
				if ((tmp30)){
					HX_STACK_LINE(111)
					Float tmp31 = graphX;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(111)
					::openfl::_legacy::display::Shape tmp32 = this->_axis;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(111)
					Float tmp33 = tmp32->get_y();		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(111)
					Float tmp34 = pointY;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(111)
					Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(111)
					gfx->moveTo(tmp31,tmp35);
				}
				HX_STACK_LINE(112)
				Float tmp31 = graphX;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(112)
				Float tmp32 = (i * inc);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(112)
				Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(112)
				Float tmp34 = pointY;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(112)
				gfx->lineTo(tmp33,tmp34);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StatsGraph_obj,drawGraph,(void))

Void StatsGraph_obj::update( Float Value){
{
		HX_STACK_FRAME("flixel.system.debug.stats.StatsGraph","update",0x0745a631,"flixel.system.debug.stats.StatsGraph.update","flixel/system/debug/stats/StatsGraph.hx",117,0xbadd4916)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Value,"Value")
		HX_STACK_LINE(118)
		Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(118)
		this->history->__Field(HX_HCSTRING("unshift","\x89","\xe3","\xb3","\x78"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(119)
		int tmp1 = this->history->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		bool tmp2 = (tmp1 > (int)30);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(119)
		if ((tmp2)){
			HX_STACK_LINE(120)
			this->history->__Field(HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"), hx::paccDynamic )();
		}
		HX_STACK_LINE(123)
		Float tmp3 = this->maxValue;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(123)
		Float tmp4 = Value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(123)
		Float tmp5 = ::Math_obj::max(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(123)
		this->maxValue = tmp5;
		HX_STACK_LINE(124)
		Float tmp6 = this->minValue;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(124)
		Float tmp7 = Value;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(124)
		Float tmp8 = ::Math_obj::min(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(124)
		this->minValue = tmp8;
		HX_STACK_LINE(126)
		::openfl::_legacy::text::TextField tmp9 = this->minLabel;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(126)
		Float tmp10 = this->minValue;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(126)
		::String tmp11 = this->formatValue(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(126)
		tmp9->set_text(tmp11);
		HX_STACK_LINE(127)
		::openfl::_legacy::text::TextField tmp12 = this->curLabel;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(127)
		Float tmp13 = Value;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(127)
		::String tmp14 = this->formatValue(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(127)
		tmp12->set_text(tmp14);
		HX_STACK_LINE(128)
		::openfl::_legacy::text::TextField tmp15 = this->maxLabel;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(128)
		Float tmp16 = this->maxValue;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(128)
		::String tmp17 = this->formatValue(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(128)
		tmp15->set_text(tmp17);
		HX_STACK_LINE(130)
		::openfl::_legacy::text::TextField tmp18 = this->avgLabel;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(130)
		::String tmp19 = this->_label;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(130)
		::String tmp20 = (tmp19 + HX_HCSTRING("\nAvg: ","\x8e","\xd8","\xea","\xba"));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(130)
		Float tmp21 = this->average();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(130)
		::String tmp22 = this->formatValue(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(130)
		::String tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(130)
		tmp18->set_text(tmp23);
		HX_STACK_LINE(132)
		this->drawGraph();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StatsGraph_obj,update,(void))

::String StatsGraph_obj::formatValue( Float value){
	HX_STACK_FRAME("flixel.system.debug.stats.StatsGraph","formatValue",0xec642792,"flixel.system.debug.stats.StatsGraph.formatValue","flixel/system/debug/stats/StatsGraph.hx",136,0xbadd4916)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(137)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	Float tmp1 = ::flixel::math::FlxMath_obj::roundDecimal(tmp,(int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(137)
	::String tmp2 = (tmp1 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(137)
	::String tmp3 = this->_unit;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(137)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(137)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(StatsGraph_obj,formatValue,return )

Float StatsGraph_obj::average( ){
	HX_STACK_FRAME("flixel.system.debug.stats.StatsGraph","average",0x1ab77435,"flixel.system.debug.stats.StatsGraph.average","flixel/system/debug/stats/StatsGraph.hx",141,0xbadd4916)
	HX_STACK_THIS(this)
	HX_STACK_LINE(142)
	Float sum = (int)0;		HX_STACK_VAR(sum,"sum");
	HX_STACK_LINE(143)
	{
		HX_STACK_LINE(143)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(143)
		Array< Float > _g1 = this->history;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(143)
		while((true)){
			HX_STACK_LINE(143)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(143)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(143)
			if ((tmp1)){
				HX_STACK_LINE(143)
				break;
			}
			HX_STACK_LINE(143)
			Float tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(143)
			Float value = tmp2;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(143)
			++(_g);
			HX_STACK_LINE(144)
			hx::AddEq(sum,value);
		}
	}
	HX_STACK_LINE(145)
	Float tmp = sum;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	int tmp1 = this->history->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(145)
	Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(145)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(StatsGraph_obj,average,return )

Void StatsGraph_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.stats.StatsGraph","destroy",0xdc622fd2,"flixel.system.debug.stats.StatsGraph.destroy","flixel/system/debug/stats/StatsGraph.hx",149,0xbadd4916)
		HX_STACK_THIS(this)
		HX_STACK_LINE(150)
		::openfl::_legacy::display::Shape tmp = this->_axis;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		::openfl::_legacy::display::Shape tmp1 = ::flixel::util::FlxDestroyUtil_obj::removeChild(hx::ObjectPtr<OBJ_>(this),tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(150)
		this->_axis = tmp1;
		HX_STACK_LINE(151)
		::openfl::_legacy::text::TextField tmp2 = this->minLabel;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(151)
		::openfl::_legacy::text::TextField tmp3 = ::flixel::util::FlxDestroyUtil_obj::removeChild(hx::ObjectPtr<OBJ_>(this),tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(151)
		this->minLabel = tmp3;
		HX_STACK_LINE(152)
		::openfl::_legacy::text::TextField tmp4 = this->curLabel;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(152)
		::openfl::_legacy::text::TextField tmp5 = ::flixel::util::FlxDestroyUtil_obj::removeChild(hx::ObjectPtr<OBJ_>(this),tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(152)
		this->curLabel = tmp5;
		HX_STACK_LINE(153)
		::openfl::_legacy::text::TextField tmp6 = this->maxLabel;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(153)
		::openfl::_legacy::text::TextField tmp7 = ::flixel::util::FlxDestroyUtil_obj::removeChild(hx::ObjectPtr<OBJ_>(this),tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(153)
		this->maxLabel = tmp7;
		HX_STACK_LINE(154)
		::openfl::_legacy::text::TextField tmp8 = this->avgLabel;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(154)
		::openfl::_legacy::text::TextField tmp9 = ::flixel::util::FlxDestroyUtil_obj::removeChild(hx::ObjectPtr<OBJ_>(this),tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(154)
		this->avgLabel = tmp9;
		HX_STACK_LINE(155)
		this->history = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StatsGraph_obj,destroy,(void))

int StatsGraph_obj::AXIS_COLOR;

Float StatsGraph_obj::AXIS_ALPHA;

int StatsGraph_obj::HISTORY_MAX;


StatsGraph_obj::StatsGraph_obj()
{
}

void StatsGraph_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StatsGraph);
	HX_MARK_MEMBER_NAME(minLabel,"minLabel");
	HX_MARK_MEMBER_NAME(curLabel,"curLabel");
	HX_MARK_MEMBER_NAME(maxLabel,"maxLabel");
	HX_MARK_MEMBER_NAME(avgLabel,"avgLabel");
	HX_MARK_MEMBER_NAME(minValue,"minValue");
	HX_MARK_MEMBER_NAME(maxValue,"maxValue");
	HX_MARK_MEMBER_NAME(graphColor,"graphColor");
	HX_MARK_MEMBER_NAME(history,"history");
	HX_MARK_MEMBER_NAME(_axis,"_axis");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_unit,"_unit");
	HX_MARK_MEMBER_NAME(_labelWidth,"_labelWidth");
	HX_MARK_MEMBER_NAME(_label,"_label");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StatsGraph_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(minLabel,"minLabel");
	HX_VISIT_MEMBER_NAME(curLabel,"curLabel");
	HX_VISIT_MEMBER_NAME(maxLabel,"maxLabel");
	HX_VISIT_MEMBER_NAME(avgLabel,"avgLabel");
	HX_VISIT_MEMBER_NAME(minValue,"minValue");
	HX_VISIT_MEMBER_NAME(maxValue,"maxValue");
	HX_VISIT_MEMBER_NAME(graphColor,"graphColor");
	HX_VISIT_MEMBER_NAME(history,"history");
	HX_VISIT_MEMBER_NAME(_axis,"_axis");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_unit,"_unit");
	HX_VISIT_MEMBER_NAME(_labelWidth,"_labelWidth");
	HX_VISIT_MEMBER_NAME(_label,"_label");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic StatsGraph_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_axis") ) { return _axis; }
		if (HX_FIELD_EQ(inName,"_unit") ) { return _unit; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"_label") ) { return _label; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"history") ) { return history; }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		if (HX_FIELD_EQ(inName,"average") ) { return average_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"minLabel") ) { return minLabel; }
		if (HX_FIELD_EQ(inName,"curLabel") ) { return curLabel; }
		if (HX_FIELD_EQ(inName,"maxLabel") ) { return maxLabel; }
		if (HX_FIELD_EQ(inName,"avgLabel") ) { return avgLabel; }
		if (HX_FIELD_EQ(inName,"minValue") ) { return minValue; }
		if (HX_FIELD_EQ(inName,"maxValue") ) { return maxValue; }
		if (HX_FIELD_EQ(inName,"drawAxes") ) { return drawAxes_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawGraph") ) { return drawGraph_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"graphColor") ) { return graphColor; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_labelWidth") ) { return _labelWidth; }
		if (HX_FIELD_EQ(inName,"formatValue") ) { return formatValue_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StatsGraph_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_axis") ) { _axis=inValue.Cast< ::openfl::_legacy::display::Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_unit") ) { _unit=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_label") ) { _label=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"history") ) { history=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"minLabel") ) { minLabel=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curLabel") ) { curLabel=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxLabel") ) { maxLabel=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"avgLabel") ) { avgLabel=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minValue") ) { minValue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxValue") ) { maxValue=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"graphColor") ) { graphColor=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_labelWidth") ) { _labelWidth=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StatsGraph_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("minLabel","\x02","\x7b","\xe6","\x66"));
	outFields->push(HX_HCSTRING("curLabel","\x54","\x08","\x5d","\xb7"));
	outFields->push(HX_HCSTRING("maxLabel","\xb0","\x60","\xcc","\x19"));
	outFields->push(HX_HCSTRING("avgLabel","\xc2","\xa2","\xa0","\x08"));
	outFields->push(HX_HCSTRING("minValue","\x7f","\xec","\xef","\x28"));
	outFields->push(HX_HCSTRING("maxValue","\x2d","\xd2","\xd5","\xdb"));
	outFields->push(HX_HCSTRING("graphColor","\x35","\x97","\x9f","\x9d"));
	outFields->push(HX_HCSTRING("history","\x54","\x35","\x47","\x64"));
	outFields->push(HX_HCSTRING("_axis","\x80","\x38","\x8a","\xf3"));
	outFields->push(HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"));
	outFields->push(HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"));
	outFields->push(HX_HCSTRING("_unit","\x63","\xe6","\xba","\x00"));
	outFields->push(HX_HCSTRING("_labelWidth","\x91","\xd0","\xcf","\xb8"));
	outFields->push(HX_HCSTRING("_label","\x35","\x55","\x96","\x6b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(StatsGraph_obj,minLabel),HX_HCSTRING("minLabel","\x02","\x7b","\xe6","\x66")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(StatsGraph_obj,curLabel),HX_HCSTRING("curLabel","\x54","\x08","\x5d","\xb7")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(StatsGraph_obj,maxLabel),HX_HCSTRING("maxLabel","\xb0","\x60","\xcc","\x19")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(StatsGraph_obj,avgLabel),HX_HCSTRING("avgLabel","\xc2","\xa2","\xa0","\x08")},
	{hx::fsFloat,(int)offsetof(StatsGraph_obj,minValue),HX_HCSTRING("minValue","\x7f","\xec","\xef","\x28")},
	{hx::fsFloat,(int)offsetof(StatsGraph_obj,maxValue),HX_HCSTRING("maxValue","\x2d","\xd2","\xd5","\xdb")},
	{hx::fsInt,(int)offsetof(StatsGraph_obj,graphColor),HX_HCSTRING("graphColor","\x35","\x97","\x9f","\x9d")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(StatsGraph_obj,history),HX_HCSTRING("history","\x54","\x35","\x47","\x64")},
	{hx::fsObject /*::openfl::_legacy::display::Shape*/ ,(int)offsetof(StatsGraph_obj,_axis),HX_HCSTRING("_axis","\x80","\x38","\x8a","\xf3")},
	{hx::fsInt,(int)offsetof(StatsGraph_obj,_width),HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6")},
	{hx::fsInt,(int)offsetof(StatsGraph_obj,_height),HX_HCSTRING("_height","\x86","\x19","\xc3","\x70")},
	{hx::fsString,(int)offsetof(StatsGraph_obj,_unit),HX_HCSTRING("_unit","\x63","\xe6","\xba","\x00")},
	{hx::fsInt,(int)offsetof(StatsGraph_obj,_labelWidth),HX_HCSTRING("_labelWidth","\x91","\xd0","\xcf","\xb8")},
	{hx::fsString,(int)offsetof(StatsGraph_obj,_label),HX_HCSTRING("_label","\x35","\x55","\x96","\x6b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &StatsGraph_obj::AXIS_COLOR,HX_HCSTRING("AXIS_COLOR","\xe5","\x83","\xee","\xe4")},
	{hx::fsFloat,(void *) &StatsGraph_obj::AXIS_ALPHA,HX_HCSTRING("AXIS_ALPHA","\xe0","\xb9","\x28","\xbc")},
	{hx::fsInt,(void *) &StatsGraph_obj::HISTORY_MAX,HX_HCSTRING("HISTORY_MAX","\xb9","\x9e","\xaf","\x58")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("minLabel","\x02","\x7b","\xe6","\x66"),
	HX_HCSTRING("curLabel","\x54","\x08","\x5d","\xb7"),
	HX_HCSTRING("maxLabel","\xb0","\x60","\xcc","\x19"),
	HX_HCSTRING("avgLabel","\xc2","\xa2","\xa0","\x08"),
	HX_HCSTRING("minValue","\x7f","\xec","\xef","\x28"),
	HX_HCSTRING("maxValue","\x2d","\xd2","\xd5","\xdb"),
	HX_HCSTRING("graphColor","\x35","\x97","\x9f","\x9d"),
	HX_HCSTRING("history","\x54","\x35","\x47","\x64"),
	HX_HCSTRING("_axis","\x80","\x38","\x8a","\xf3"),
	HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"),
	HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"),
	HX_HCSTRING("_unit","\x63","\xe6","\xba","\x00"),
	HX_HCSTRING("_labelWidth","\x91","\xd0","\xcf","\xb8"),
	HX_HCSTRING("_label","\x35","\x55","\x96","\x6b"),
	HX_HCSTRING("drawAxes","\x49","\xc3","\xe2","\x54"),
	HX_HCSTRING("drawGraph","\xaa","\x44","\xf5","\x61"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("formatValue","\xba","\xd8","\xd1","\xea"),
	HX_HCSTRING("average","\x5d","\x71","\xdb","\x62"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StatsGraph_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(StatsGraph_obj::AXIS_COLOR,"AXIS_COLOR");
	HX_MARK_MEMBER_NAME(StatsGraph_obj::AXIS_ALPHA,"AXIS_ALPHA");
	HX_MARK_MEMBER_NAME(StatsGraph_obj::HISTORY_MAX,"HISTORY_MAX");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StatsGraph_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StatsGraph_obj::AXIS_COLOR,"AXIS_COLOR");
	HX_VISIT_MEMBER_NAME(StatsGraph_obj::AXIS_ALPHA,"AXIS_ALPHA");
	HX_VISIT_MEMBER_NAME(StatsGraph_obj::HISTORY_MAX,"HISTORY_MAX");
};

#endif

hx::Class StatsGraph_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("AXIS_COLOR","\xe5","\x83","\xee","\xe4"),
	HX_HCSTRING("AXIS_ALPHA","\xe0","\xb9","\x28","\xbc"),
	HX_HCSTRING("HISTORY_MAX","\xb9","\x9e","\xaf","\x58"),
	::String(null()) };

void StatsGraph_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.stats.StatsGraph","\x46","\xcb","\x85","\xc7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StatsGraph_obj >;
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

void StatsGraph_obj::__boot()
{
	AXIS_COLOR= (int)16777215;
	AXIS_ALPHA= ((Float)0.5);
	HISTORY_MAX= (int)30;
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace stats
