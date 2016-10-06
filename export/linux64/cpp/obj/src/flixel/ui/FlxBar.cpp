#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBar
#include <flixel/ui/FlxBar.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBarFillDirection
#include <flixel/ui/FlxBarFillDirection.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxGradient
#include <flixel/util/FlxGradient.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace ui{

Void FlxBar_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::flixel::ui::FlxBarFillDirection direction,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic parentRef,::String __o_variable,hx::Null< Float >  __o_min,hx::Null< Float >  __o_max,hx::Null< bool >  __o_showBorder)
{
HX_STACK_FRAME("flixel.ui.FlxBar","new",0xec11b05b,"flixel.ui.FlxBar.new","flixel/ui/FlxBar.hx",30,0x9c56c8d5)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(direction,"direction")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
HX_STACK_ARG(parentRef,"parentRef")
HX_STACK_ARG(__o_variable,"variable")
HX_STACK_ARG(__o_min,"min")
HX_STACK_ARG(__o_max,"max")
HX_STACK_ARG(__o_showBorder,"showBorder")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
int width = __o_width.Default(100);
int height = __o_height.Default(10);
::String variable = __o_variable.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
Float min = __o_min.Default(0);
Float max = __o_max.Default(100);
bool showBorder = __o_showBorder.Default(false);
{
	HX_STACK_LINE(131)
	this->_maxPercent = (int)100;
	HX_STACK_LINE(78)
	this->numDivisions = (int)100;
	HX_STACK_LINE(48)
	this->killOnEmpty = false;
	HX_STACK_LINE(36)
	this->fixedPosition = true;
	HX_STACK_LINE(149)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(149)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(149)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(151)
	bool tmp2 = (direction == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(151)
	::flixel::ui::FlxBarFillDirection tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(151)
	if ((tmp2)){
		HX_STACK_LINE(151)
		tmp3 = ::flixel::ui::FlxBarFillDirection_obj::LEFT_TO_RIGHT;
	}
	else{
		HX_STACK_LINE(151)
		tmp3 = direction;
	}
	HX_STACK_LINE(151)
	direction = tmp3;
	HX_STACK_LINE(153)
	this->barWidth = width;
	HX_STACK_LINE(154)
	this->barHeight = height;
	HX_STACK_LINE(156)
	::openfl::_legacy::geom::Point tmp4 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(156)
	this->_filledBarPoint = tmp4;
	HX_STACK_LINE(157)
	::openfl::_legacy::geom::Rectangle tmp5 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(157)
	this->_filledBarRect = tmp5;
	HX_STACK_LINE(158)
	bool tmp6 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(158)
	if ((tmp6)){
		HX_STACK_LINE(160)
		::openfl::_legacy::geom::Point tmp7 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(160)
		this->_zeroOffset = tmp7;
		HX_STACK_LINE(161)
		::openfl::_legacy::geom::Rectangle tmp8 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(161)
		this->_emptyBarRect = tmp8;
		HX_STACK_LINE(162)
		int tmp9 = width;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(162)
		int tmp10 = height;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(162)
		this->makeGraphic(tmp9,tmp10,(int)0,true,null());
	}
	else{
		HX_STACK_LINE(166)
		::flixel::math::FlxRect tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(166)
		{
			HX_STACK_LINE(166)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(166)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(166)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(166)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(166)
			::flixel::math::FlxRect tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(166)
			{
				HX_STACK_LINE(166)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp9 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(166)
				::flixel::math::FlxRect tmp10 = tmp9->get();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(166)
				::flixel::math::FlxRect _this = tmp10;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(166)
				_this->x = X;
				HX_STACK_LINE(166)
				_this->y = Y;
				HX_STACK_LINE(166)
				_this->width = Width;
				HX_STACK_LINE(166)
				_this->height = Height;
				HX_STACK_LINE(166)
				tmp8 = _this;
			}
			HX_STACK_LINE(166)
			::flixel::math::FlxRect rect = tmp8;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(166)
			rect->_inPool = false;
			HX_STACK_LINE(166)
			tmp7 = rect;
		}
		HX_STACK_LINE(166)
		this->_filledFlxRect = tmp7;
	}
	HX_STACK_LINE(169)
	bool tmp7 = (parentRef != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(169)
	if ((tmp7)){
		HX_STACK_LINE(171)
		this->parent = parentRef;
		HX_STACK_LINE(172)
		this->parentVariable = variable;
	}
	HX_STACK_LINE(175)
	::flixel::ui::FlxBarFillDirection tmp8 = direction;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(175)
	this->set_fillDirection(tmp8);
	HX_STACK_LINE(176)
	bool tmp9 = showBorder;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(176)
	this->createFilledBar((int)-16756480,(int)-16714752,tmp9,null());
	HX_STACK_LINE(177)
	Float tmp10 = min;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(177)
	Float tmp11 = max;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(177)
	this->setRange(tmp10,tmp11);
}
;
	return null();
}

//FlxBar_obj::~FlxBar_obj() { }

Dynamic FlxBar_obj::__CreateEmpty() { return  new FlxBar_obj; }
hx::ObjectPtr< FlxBar_obj > FlxBar_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::flixel::ui::FlxBarFillDirection direction,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic parentRef,::String __o_variable,hx::Null< Float >  __o_min,hx::Null< Float >  __o_max,hx::Null< bool >  __o_showBorder)
{  hx::ObjectPtr< FlxBar_obj > _result_ = new FlxBar_obj();
	_result_->__construct(__o_x,__o_y,direction,__o_width,__o_height,parentRef,__o_variable,__o_min,__o_max,__o_showBorder);
	return _result_;}

Dynamic FlxBar_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBar_obj > _result_ = new FlxBar_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9]);
	return _result_;}

Void FlxBar_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","destroy",0x13b32675,"flixel.ui.FlxBar.destroy","flixel/ui/FlxBar.hx",181,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(182)
		::flixel::math::FlxPoint tmp = this->positionOffset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(182)
		::flixel::math::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(182)
		this->positionOffset = tmp1;
		HX_STACK_LINE(184)
		bool tmp2 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(184)
		if ((tmp2)){
			HX_STACK_LINE(186)
			this->_frontFrame = null();
			HX_STACK_LINE(187)
			::flixel::math::FlxRect tmp3 = this->_filledFlxRect;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(187)
			::flixel::math::FlxRect tmp4 = ::flixel::util::FlxDestroyUtil_obj::put(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(187)
			this->_filledFlxRect = tmp4;
		}
		else{
			HX_STACK_LINE(191)
			this->_emptyBarRect = null();
			HX_STACK_LINE(192)
			this->_zeroOffset = null();
			HX_STACK_LINE(193)
			::openfl::_legacy::display::BitmapData tmp3 = this->_emptyBar;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(193)
			::openfl::_legacy::display::BitmapData tmp4 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(193)
			this->_emptyBar = tmp4;
			HX_STACK_LINE(194)
			::openfl::_legacy::display::BitmapData tmp5 = this->_filledBar;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(194)
			::openfl::_legacy::display::BitmapData tmp6 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(194)
			this->_filledBar = tmp6;
		}
		HX_STACK_LINE(196)
		this->_filledBarRect = null();
		HX_STACK_LINE(197)
		this->_filledBarPoint = null();
		HX_STACK_LINE(199)
		this->parent = null();
		HX_STACK_LINE(200)
		this->positionOffset = null();
		HX_STACK_LINE(201)
		this->emptyCallback = null();
		HX_STACK_LINE(202)
		this->filledCallback = null();
		HX_STACK_LINE(204)
		this->super::destroy();
	}
return null();
}


Void FlxBar_obj::trackParent( int offsetX,int offsetY){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","trackParent",0x235ed510,"flixel.ui.FlxBar.trackParent","flixel/ui/FlxBar.hx",217,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(offsetX,"offsetX")
		HX_STACK_ARG(offsetY,"offsetY")
		HX_STACK_LINE(218)
		this->fixedPosition = false;
		HX_STACK_LINE(219)
		::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(219)
		{
			HX_STACK_LINE(219)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp1 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(219)
			::flixel::math::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(219)
			int tmp3 = offsetX;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(219)
			int tmp4 = offsetY;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(219)
			::flixel::math::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(219)
			::flixel::math::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(219)
			point->_inPool = false;
			HX_STACK_LINE(219)
			tmp = point;
		}
		HX_STACK_LINE(219)
		this->positionOffset = tmp;
		HX_STACK_LINE(221)
		Dynamic tmp1 = this->parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(221)
		bool tmp2 = ::Reflect_obj::hasField(tmp1,HX_HCSTRING("scrollFactor","\xbc","\xec","\xcf","\x3b"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(221)
		if ((tmp2)){
			HX_STACK_LINE(223)
			::flixel::math::FlxPoint tmp3 = this->scrollFactor;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(223)
			Dynamic tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(223)
			tmp3->set_x(tmp4->__Field(HX_HCSTRING("scrollFactor","\xbc","\xec","\xcf","\x3b"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ));
			HX_STACK_LINE(224)
			::flixel::math::FlxPoint tmp5 = this->scrollFactor;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(224)
			Dynamic tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(224)
			tmp5->set_y(tmp6->__Field(HX_HCSTRING("scrollFactor","\xbc","\xec","\xcf","\x3b"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBar_obj,trackParent,(void))

Void FlxBar_obj::setParent( Dynamic parentRef,::String variable,hx::Null< bool >  __o_track,hx::Null< int >  __o_offsetX,hx::Null< int >  __o_offsetY){
bool track = __o_track.Default(false);
int offsetX = __o_offsetX.Default(0);
int offsetY = __o_offsetY.Default(0);
	HX_STACK_FRAME("flixel.ui.FlxBar","setParent",0x1ca008a7,"flixel.ui.FlxBar.setParent","flixel/ui/FlxBar.hx",238,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(parentRef,"parentRef")
	HX_STACK_ARG(variable,"variable")
	HX_STACK_ARG(track,"track")
	HX_STACK_ARG(offsetX,"offsetX")
	HX_STACK_ARG(offsetY,"offsetY")
{
		HX_STACK_LINE(239)
		this->parent = parentRef;
		HX_STACK_LINE(240)
		this->parentVariable = variable;
		HX_STACK_LINE(242)
		bool tmp = track;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(242)
		if ((tmp)){
			HX_STACK_LINE(244)
			int tmp1 = offsetX;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(244)
			int tmp2 = offsetY;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(244)
			this->trackParent(tmp1,tmp2);
		}
		HX_STACK_LINE(247)
		this->updateValueFromParent();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxBar_obj,setParent,(void))

Void FlxBar_obj::stopTrackingParent( int posX,int posY){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","stopTrackingParent",0x3b6e39c8,"flixel.ui.FlxBar.stopTrackingParent","flixel/ui/FlxBar.hx",257,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(posX,"posX")
		HX_STACK_ARG(posY,"posY")
		HX_STACK_LINE(258)
		this->fixedPosition = true;
		HX_STACK_LINE(259)
		int tmp = posX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(259)
		this->set_x(tmp);
		HX_STACK_LINE(260)
		int tmp1 = posY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(260)
		this->set_y(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBar_obj,stopTrackingParent,(void))

Void FlxBar_obj::setCallbacks( Dynamic onEmpty,Dynamic onFilled,hx::Null< bool >  __o_killOnEmpty){
bool killOnEmpty = __o_killOnEmpty.Default(false);
	HX_STACK_FRAME("flixel.ui.FlxBar","setCallbacks",0x67217bb1,"flixel.ui.FlxBar.setCallbacks","flixel/ui/FlxBar.hx",273,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(onEmpty,"onEmpty")
	HX_STACK_ARG(onFilled,"onFilled")
	HX_STACK_ARG(killOnEmpty,"killOnEmpty")
{
		HX_STACK_LINE(274)
		bool tmp = (onEmpty != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(274)
		Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(274)
		if ((tmp)){
			HX_STACK_LINE(274)
			tmp1 = onEmpty;
		}
		else{
			HX_STACK_LINE(274)
			tmp1 = this->emptyCallback_dyn();
		}
		HX_STACK_LINE(274)
		this->emptyCallback = tmp1;
		HX_STACK_LINE(275)
		bool tmp2 = (onFilled != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(275)
		Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(275)
		if ((tmp2)){
			HX_STACK_LINE(275)
			tmp3 = onFilled;
		}
		else{
			HX_STACK_LINE(275)
			tmp3 = this->filledCallback_dyn();
		}
		HX_STACK_LINE(275)
		this->filledCallback = tmp3;
		HX_STACK_LINE(276)
		this->killOnEmpty = killOnEmpty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxBar_obj,setCallbacks,(void))

Void FlxBar_obj::setRange( Float min,Float max){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","setRange",0x4a8160e0,"flixel.ui.FlxBar.setRange","flixel/ui/FlxBar.hx",286,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(min,"min")
		HX_STACK_ARG(max,"max")
		HX_STACK_LINE(287)
		bool tmp = (max <= min);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(287)
		if ((tmp)){
			HX_STACK_LINE(289)
			HX_STACK_DO_THROW(HX_HCSTRING("FlxBar: max cannot be less than or equal to min","\x5b","\xe6","\xe7","\x51"));
			HX_STACK_LINE(290)
			return null();
		}
		HX_STACK_LINE(293)
		this->min = min;
		HX_STACK_LINE(294)
		this->max = max;
		HX_STACK_LINE(295)
		Float tmp1 = (max - min);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(295)
		this->range = tmp1;
		HX_STACK_LINE(296)
		Float tmp2 = this->range;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(296)
		int tmp3 = this->_maxPercent;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(296)
		Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(296)
		this->pct = tmp4;
		HX_STACK_LINE(298)
		bool tmp5 = this->_fillHorizontal;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(298)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(298)
		if ((tmp5)){
			HX_STACK_LINE(298)
			int tmp7 = this->barWidth;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(298)
			int tmp8 = this->_maxPercent;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(298)
			tmp6 = (Float(tmp7) / Float(tmp8));
		}
		else{
			HX_STACK_LINE(298)
			int tmp7 = this->barHeight;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(298)
			int tmp8 = this->_maxPercent;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(298)
			tmp6 = (Float(tmp7) / Float(tmp8));
		}
		HX_STACK_LINE(298)
		this->pxPerPercent = tmp6;
		HX_STACK_LINE(300)
		Float tmp7 = this->get_value();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(300)
		bool tmp8 = ::Math_obj::isNaN(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(300)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(300)
		if ((tmp9)){
			HX_STACK_LINE(302)
			Float tmp10 = min;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(302)
			Float tmp11 = this->get_value();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(302)
			Float tmp12 = max;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(302)
			Float tmp13 = ::Math_obj::min(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(302)
			Float tmp14 = ::Math_obj::max(tmp10,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(302)
			this->set_value(tmp14);
		}
		else{
			HX_STACK_LINE(306)
			Float tmp10 = min;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(306)
			this->set_value(tmp10);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBar_obj,setRange,(void))

::flixel::ui::FlxBar FlxBar_obj::createFilledBar( int empty,int fill,hx::Null< bool >  __o_showBorder,hx::Null< int >  __o_border){
bool showBorder = __o_showBorder.Default(false);
int border = __o_border.Default(-1);
	HX_STACK_FRAME("flixel.ui.FlxBar","createFilledBar",0x6a7e3330,"flixel.ui.FlxBar.createFilledBar","flixel/ui/FlxBar.hx",321,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(empty,"empty")
	HX_STACK_ARG(fill,"fill")
	HX_STACK_ARG(showBorder,"showBorder")
	HX_STACK_ARG(border,"border")
{
		HX_STACK_LINE(322)
		int tmp = empty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(322)
		bool tmp1 = showBorder;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(322)
		int tmp2 = border;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(322)
		this->createColoredEmptyBar(tmp,tmp1,tmp2);
		HX_STACK_LINE(323)
		int tmp3 = fill;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(323)
		bool tmp4 = showBorder;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(323)
		int tmp5 = border;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(323)
		this->createColoredFilledBar(tmp3,tmp4,tmp5);
		HX_STACK_LINE(324)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBar_obj,createFilledBar,return )

::flixel::ui::FlxBar FlxBar_obj::createColoredEmptyBar( int empty,hx::Null< bool >  __o_showBorder,hx::Null< int >  __o_border){
bool showBorder = __o_showBorder.Default(false);
int border = __o_border.Default(-1);
	HX_STACK_FRAME("flixel.ui.FlxBar","createColoredEmptyBar",0xa6df1307,"flixel.ui.FlxBar.createColoredEmptyBar","flixel/ui/FlxBar.hx",336,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(empty,"empty")
	HX_STACK_ARG(showBorder,"showBorder")
	HX_STACK_ARG(border,"border")
{
		HX_STACK_LINE(337)
		bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(337)
		if ((tmp)){
			HX_STACK_LINE(339)
			int tmp1 = this->barWidth;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(339)
			::String tmp2 = (HX_HCSTRING("empty: ","\x73","\xea","\xc7","\xc6") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(339)
			::String tmp3 = (tmp2 + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(339)
			int tmp4 = this->barHeight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(339)
			::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(339)
			::String tmp6 = (tmp5 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(339)
			::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(339)
			{
				HX_STACK_LINE(339)
				bool Alpha = true;		HX_STACK_VAR(Alpha,"Alpha");
				HX_STACK_LINE(339)
				bool Prefix = true;		HX_STACK_VAR(Prefix,"Prefix");
				HX_STACK_LINE(339)
				bool tmp8 = Prefix;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(339)
				::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(339)
				if ((tmp8)){
					HX_STACK_LINE(339)
					tmp9 = HX_HCSTRING("0x","\x48","\x2a","\x00","\x00");
				}
				else{
					HX_STACK_LINE(339)
					tmp9 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
				}
				HX_STACK_LINE(339)
				bool tmp10 = Alpha;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(339)
				::String tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(339)
				if ((tmp10)){
					HX_STACK_LINE(339)
					int tmp12 = (int(empty) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(339)
					int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(339)
					tmp11 = ::StringTools_obj::hex(tmp13,(int)2);
				}
				else{
					HX_STACK_LINE(339)
					tmp11 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
				}
				HX_STACK_LINE(339)
				::String tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(339)
				int tmp13 = (int(empty) >> int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(339)
				int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(339)
				::String tmp15 = ::StringTools_obj::hex(tmp14,(int)2);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(339)
				::String tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(339)
				int tmp17 = (int(empty) >> int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(339)
				int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(339)
				::String tmp19 = ::StringTools_obj::hex(tmp18,(int)2);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(339)
				::String tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(339)
				int tmp21 = (int(empty) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(339)
				::String tmp22 = ::StringTools_obj::hex(tmp21,(int)2);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(339)
				tmp7 = (tmp20 + tmp22);
			}
			HX_STACK_LINE(339)
			::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(339)
			::String emptyKey = tmp8;		HX_STACK_VAR(emptyKey,"emptyKey");
			HX_STACK_LINE(340)
			bool tmp9 = showBorder;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(340)
			if ((tmp9)){
				HX_STACK_LINE(341)
				::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(341)
				{
					HX_STACK_LINE(341)
					bool Alpha = true;		HX_STACK_VAR(Alpha,"Alpha");
					HX_STACK_LINE(341)
					bool Prefix = true;		HX_STACK_VAR(Prefix,"Prefix");
					HX_STACK_LINE(341)
					bool tmp11 = Prefix;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(341)
					::String tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(341)
					if ((tmp11)){
						HX_STACK_LINE(341)
						tmp12 = HX_HCSTRING("0x","\x48","\x2a","\x00","\x00");
					}
					else{
						HX_STACK_LINE(341)
						tmp12 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
					}
					HX_STACK_LINE(341)
					bool tmp13 = Alpha;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(341)
					::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(341)
					if ((tmp13)){
						HX_STACK_LINE(341)
						int tmp15 = (int(border) >> int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(341)
						int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(341)
						tmp14 = ::StringTools_obj::hex(tmp16,(int)2);
					}
					else{
						HX_STACK_LINE(341)
						tmp14 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
					}
					HX_STACK_LINE(341)
					::String tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(341)
					int tmp16 = (int(border) >> int((int)16));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(341)
					int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(341)
					::String tmp18 = ::StringTools_obj::hex(tmp17,(int)2);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(341)
					::String tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(341)
					int tmp20 = (int(border) >> int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(341)
					int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(341)
					::String tmp22 = ::StringTools_obj::hex(tmp21,(int)2);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(341)
					::String tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(341)
					int tmp24 = (int(border) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(341)
					::String tmp25 = ::StringTools_obj::hex(tmp24,(int)2);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(341)
					tmp10 = (tmp23 + tmp25);
				}
				HX_STACK_LINE(341)
				::String tmp11 = (HX_HCSTRING(",border: ","\xbe","\x9e","\x76","\x9a") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(341)
				hx::AddEq(emptyKey,tmp11);
			}
			HX_STACK_LINE(343)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(343)
			{
				HX_STACK_LINE(343)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp11 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(343)
				::flixel::_system::frontEnds::BitmapFrontEnd _this = tmp11;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(343)
				::String tmp12 = emptyKey;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(343)
				::String tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(343)
				bool tmp14 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(343)
				if ((tmp14)){
					HX_STACK_LINE(343)
					::String tmp15 = emptyKey;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(343)
					::String tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(343)
					::flixel::graphics::FlxGraphic tmp17 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(343)
					::flixel::graphics::FlxGraphic tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(343)
					::flixel::graphics::FlxGraphic tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(343)
					tmp10 = (tmp19 != null());
				}
				else{
					HX_STACK_LINE(343)
					tmp10 = false;
				}
			}
			HX_STACK_LINE(343)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(343)
			if ((tmp11)){
				HX_STACK_LINE(345)
				::openfl::_legacy::display::BitmapData emptyBar = null();		HX_STACK_VAR(emptyBar,"emptyBar");
				HX_STACK_LINE(347)
				bool tmp12 = showBorder;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(347)
				if ((tmp12)){
					HX_STACK_LINE(349)
					int tmp13 = this->barWidth;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(349)
					int tmp14 = this->barHeight;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(349)
					int tmp15 = border;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(349)
					::openfl::_legacy::display::BitmapData tmp16 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp13,tmp14,true,tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(349)
					emptyBar = tmp16;
					HX_STACK_LINE(350)
					int tmp17 = this->barWidth;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(350)
					int tmp18 = (tmp17 - (int)2);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(350)
					int tmp19 = this->barHeight;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(350)
					int tmp20 = (tmp19 - (int)2);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(350)
					::openfl::_legacy::geom::Rectangle tmp21 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)1,(int)1,tmp18,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(350)
					int tmp22 = empty;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(350)
					emptyBar->fillRect(tmp21,tmp22);
				}
				else{
					HX_STACK_LINE(354)
					int tmp13 = this->barWidth;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(354)
					int tmp14 = this->barHeight;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(354)
					int tmp15 = empty;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(354)
					::openfl::_legacy::display::BitmapData tmp16 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp13,tmp14,true,tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(354)
					emptyBar = tmp16;
				}
				HX_STACK_LINE(357)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp13 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(357)
				::openfl::_legacy::display::BitmapData tmp14 = emptyBar;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(357)
				::String tmp15 = emptyKey;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(357)
				tmp13->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp14,false,tmp15);
			}
			HX_STACK_LINE(360)
			::flixel::_system::frontEnds::BitmapFrontEnd tmp12 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(360)
			::String tmp13 = emptyKey;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(360)
			::flixel::graphics::FlxGraphic tmp14 = tmp12->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(360)
			::flixel::graphics::frames::FlxImageFrame tmp15 = tmp14->get_imageFrame();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(360)
			this->set_frames(tmp15);
		}
		else{
			HX_STACK_LINE(364)
			bool tmp1 = showBorder;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(364)
			if ((tmp1)){
				HX_STACK_LINE(366)
				int tmp2 = this->barWidth;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(366)
				int tmp3 = this->barHeight;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(366)
				int tmp4 = border;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(366)
				::openfl::_legacy::display::BitmapData tmp5 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp2,tmp3,true,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(366)
				this->_emptyBar = tmp5;
				HX_STACK_LINE(367)
				::openfl::_legacy::display::BitmapData tmp6 = this->_emptyBar;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(367)
				int tmp7 = this->barWidth;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(367)
				int tmp8 = (tmp7 - (int)2);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(367)
				int tmp9 = this->barHeight;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(367)
				int tmp10 = (tmp9 - (int)2);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(367)
				::openfl::_legacy::geom::Rectangle tmp11 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)1,(int)1,tmp8,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(367)
				int tmp12 = empty;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(367)
				tmp6->fillRect(tmp11,tmp12);
			}
			else{
				HX_STACK_LINE(371)
				int tmp2 = this->barWidth;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(371)
				int tmp3 = this->barHeight;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(371)
				int tmp4 = empty;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(371)
				::openfl::_legacy::display::BitmapData tmp5 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp2,tmp3,true,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(371)
				this->_emptyBar = tmp5;
			}
			HX_STACK_LINE(374)
			::openfl::_legacy::geom::Rectangle tmp2 = this->_emptyBarRect;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(374)
			int tmp3 = this->barWidth;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(374)
			int tmp4 = this->barHeight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(374)
			tmp2->setTo((int)0,(int)0,tmp3,tmp4);
			HX_STACK_LINE(375)
			this->updateEmptyBar();
		}
		HX_STACK_LINE(378)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxBar_obj,createColoredEmptyBar,return )

::flixel::ui::FlxBar FlxBar_obj::createColoredFilledBar( int fill,hx::Null< bool >  __o_showBorder,hx::Null< int >  __o_border){
bool showBorder = __o_showBorder.Default(false);
int border = __o_border.Default(-1);
	HX_STACK_FRAME("flixel.ui.FlxBar","createColoredFilledBar",0x03a68870,"flixel.ui.FlxBar.createColoredFilledBar","flixel/ui/FlxBar.hx",389,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fill,"fill")
	HX_STACK_ARG(showBorder,"showBorder")
	HX_STACK_ARG(border,"border")
{
		HX_STACK_LINE(390)
		bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(390)
		if ((tmp)){
			HX_STACK_LINE(392)
			int tmp1 = this->barWidth;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(392)
			::String tmp2 = (HX_HCSTRING("filled: ","\xc8","\x6c","\x47","\x79") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(392)
			::String tmp3 = (tmp2 + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(392)
			int tmp4 = this->barHeight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(392)
			::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(392)
			::String tmp6 = (tmp5 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(392)
			::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(392)
			{
				HX_STACK_LINE(392)
				bool Alpha = true;		HX_STACK_VAR(Alpha,"Alpha");
				HX_STACK_LINE(392)
				bool Prefix = true;		HX_STACK_VAR(Prefix,"Prefix");
				HX_STACK_LINE(392)
				bool tmp8 = Prefix;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(392)
				::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(392)
				if ((tmp8)){
					HX_STACK_LINE(392)
					tmp9 = HX_HCSTRING("0x","\x48","\x2a","\x00","\x00");
				}
				else{
					HX_STACK_LINE(392)
					tmp9 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
				}
				HX_STACK_LINE(392)
				bool tmp10 = Alpha;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(392)
				::String tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(392)
				if ((tmp10)){
					HX_STACK_LINE(392)
					int tmp12 = (int(fill) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(392)
					int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(392)
					tmp11 = ::StringTools_obj::hex(tmp13,(int)2);
				}
				else{
					HX_STACK_LINE(392)
					tmp11 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
				}
				HX_STACK_LINE(392)
				::String tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(392)
				int tmp13 = (int(fill) >> int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(392)
				int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(392)
				::String tmp15 = ::StringTools_obj::hex(tmp14,(int)2);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(392)
				::String tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(392)
				int tmp17 = (int(fill) >> int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(392)
				int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(392)
				::String tmp19 = ::StringTools_obj::hex(tmp18,(int)2);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(392)
				::String tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(392)
				int tmp21 = (int(fill) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(392)
				::String tmp22 = ::StringTools_obj::hex(tmp21,(int)2);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(392)
				tmp7 = (tmp20 + tmp22);
			}
			HX_STACK_LINE(392)
			::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(392)
			::String filledKey = tmp8;		HX_STACK_VAR(filledKey,"filledKey");
			HX_STACK_LINE(393)
			bool tmp9 = showBorder;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(393)
			if ((tmp9)){
				HX_STACK_LINE(394)
				::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(394)
				{
					HX_STACK_LINE(394)
					bool Alpha = true;		HX_STACK_VAR(Alpha,"Alpha");
					HX_STACK_LINE(394)
					bool Prefix = true;		HX_STACK_VAR(Prefix,"Prefix");
					HX_STACK_LINE(394)
					bool tmp11 = Prefix;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(394)
					::String tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(394)
					if ((tmp11)){
						HX_STACK_LINE(394)
						tmp12 = HX_HCSTRING("0x","\x48","\x2a","\x00","\x00");
					}
					else{
						HX_STACK_LINE(394)
						tmp12 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
					}
					HX_STACK_LINE(394)
					bool tmp13 = Alpha;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(394)
					::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(394)
					if ((tmp13)){
						HX_STACK_LINE(394)
						int tmp15 = (int(border) >> int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(394)
						int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(394)
						tmp14 = ::StringTools_obj::hex(tmp16,(int)2);
					}
					else{
						HX_STACK_LINE(394)
						tmp14 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
					}
					HX_STACK_LINE(394)
					::String tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(394)
					int tmp16 = (int(border) >> int((int)16));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(394)
					int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(394)
					::String tmp18 = ::StringTools_obj::hex(tmp17,(int)2);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(394)
					::String tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(394)
					int tmp20 = (int(border) >> int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(394)
					int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(394)
					::String tmp22 = ::StringTools_obj::hex(tmp21,(int)2);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(394)
					::String tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(394)
					int tmp24 = (int(border) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(394)
					::String tmp25 = ::StringTools_obj::hex(tmp24,(int)2);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(394)
					tmp10 = (tmp23 + tmp25);
				}
				HX_STACK_LINE(394)
				::String tmp11 = (HX_HCSTRING(",border: ","\xbe","\x9e","\x76","\x9a") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(394)
				hx::AddEq(filledKey,tmp11);
			}
			HX_STACK_LINE(396)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(396)
			{
				HX_STACK_LINE(396)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp11 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(396)
				::flixel::_system::frontEnds::BitmapFrontEnd _this = tmp11;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(396)
				::String tmp12 = filledKey;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(396)
				::String tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(396)
				bool tmp14 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(396)
				if ((tmp14)){
					HX_STACK_LINE(396)
					::String tmp15 = filledKey;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(396)
					::String tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(396)
					::flixel::graphics::FlxGraphic tmp17 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(396)
					::flixel::graphics::FlxGraphic tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(396)
					::flixel::graphics::FlxGraphic tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(396)
					tmp10 = (tmp19 != null());
				}
				else{
					HX_STACK_LINE(396)
					tmp10 = false;
				}
			}
			HX_STACK_LINE(396)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(396)
			if ((tmp11)){
				HX_STACK_LINE(398)
				::openfl::_legacy::display::BitmapData filledBar = null();		HX_STACK_VAR(filledBar,"filledBar");
				HX_STACK_LINE(400)
				bool tmp12 = showBorder;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(400)
				if ((tmp12)){
					HX_STACK_LINE(402)
					int tmp13 = this->barWidth;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(402)
					int tmp14 = this->barHeight;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(402)
					int tmp15 = border;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(402)
					::openfl::_legacy::display::BitmapData tmp16 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp13,tmp14,true,tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(402)
					filledBar = tmp16;
					HX_STACK_LINE(403)
					int tmp17 = this->barWidth;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(403)
					int tmp18 = (tmp17 - (int)2);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(403)
					int tmp19 = this->barHeight;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(403)
					int tmp20 = (tmp19 - (int)2);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(403)
					::openfl::_legacy::geom::Rectangle tmp21 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)1,(int)1,tmp18,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(403)
					int tmp22 = fill;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(403)
					filledBar->fillRect(tmp21,tmp22);
				}
				else{
					HX_STACK_LINE(407)
					int tmp13 = this->barWidth;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(407)
					int tmp14 = this->barHeight;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(407)
					int tmp15 = fill;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(407)
					::openfl::_legacy::display::BitmapData tmp16 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp13,tmp14,true,tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(407)
					filledBar = tmp16;
				}
				HX_STACK_LINE(410)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp13 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(410)
				::openfl::_legacy::display::BitmapData tmp14 = filledBar;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(410)
				::String tmp15 = filledKey;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(410)
				tmp13->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp14,false,tmp15);
			}
			HX_STACK_LINE(413)
			::flixel::_system::frontEnds::BitmapFrontEnd tmp12 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(413)
			::String tmp13 = filledKey;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(413)
			::flixel::graphics::FlxGraphic tmp14 = tmp12->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(413)
			::flixel::graphics::frames::FlxImageFrame tmp15 = tmp14->get_imageFrame();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(413)
			this->set_frontFrames(tmp15);
		}
		else{
			HX_STACK_LINE(417)
			bool tmp1 = showBorder;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(417)
			if ((tmp1)){
				HX_STACK_LINE(419)
				int tmp2 = this->barWidth;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(419)
				int tmp3 = this->barHeight;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(419)
				int tmp4 = border;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(419)
				::openfl::_legacy::display::BitmapData tmp5 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp2,tmp3,true,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(419)
				this->_filledBar = tmp5;
				HX_STACK_LINE(420)
				::openfl::_legacy::display::BitmapData tmp6 = this->_filledBar;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(420)
				int tmp7 = this->barWidth;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(420)
				int tmp8 = (tmp7 - (int)2);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(420)
				int tmp9 = this->barHeight;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(420)
				int tmp10 = (tmp9 - (int)2);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(420)
				::openfl::_legacy::geom::Rectangle tmp11 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)1,(int)1,tmp8,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(420)
				int tmp12 = fill;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(420)
				tmp6->fillRect(tmp11,tmp12);
			}
			else{
				HX_STACK_LINE(424)
				int tmp2 = this->barWidth;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(424)
				int tmp3 = this->barHeight;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(424)
				int tmp4 = fill;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(424)
				::openfl::_legacy::display::BitmapData tmp5 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp2,tmp3,true,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(424)
				this->_filledBar = tmp5;
			}
			HX_STACK_LINE(427)
			::openfl::_legacy::geom::Rectangle tmp2 = this->_filledBarRect;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(427)
			int tmp3 = this->barWidth;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(427)
			int tmp4 = this->barHeight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(427)
			tmp2->setTo((int)0,(int)0,tmp3,tmp4);
			HX_STACK_LINE(428)
			this->updateFilledBar();
		}
		HX_STACK_LINE(430)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxBar_obj,createColoredFilledBar,return )

::flixel::ui::FlxBar FlxBar_obj::createGradientBar( Array< int > empty,Array< int > fill,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_showBorder,hx::Null< int >  __o_border){
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(180);
bool showBorder = __o_showBorder.Default(false);
int border = __o_border.Default(-1);
	HX_STACK_FRAME("flixel.ui.FlxBar","createGradientBar",0x851ca162,"flixel.ui.FlxBar.createGradientBar","flixel/ui/FlxBar.hx",446,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(empty,"empty")
	HX_STACK_ARG(fill,"fill")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(showBorder,"showBorder")
	HX_STACK_ARG(border,"border")
{
		HX_STACK_LINE(447)
		int tmp = chunkSize;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(447)
		int tmp1 = rotation;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(447)
		bool tmp2 = showBorder;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(447)
		int tmp3 = border;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(447)
		this->createGradientEmptyBar(empty,tmp,tmp1,tmp2,tmp3);
		HX_STACK_LINE(448)
		int tmp4 = chunkSize;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(448)
		int tmp5 = rotation;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(448)
		bool tmp6 = showBorder;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(448)
		int tmp7 = border;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(448)
		this->createGradientFilledBar(fill,tmp4,tmp5,tmp6,tmp7);
		HX_STACK_LINE(449)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(FlxBar_obj,createGradientBar,return )

::flixel::ui::FlxBar FlxBar_obj::createGradientEmptyBar( Array< int > empty,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_showBorder,hx::Null< int >  __o_border){
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(180);
bool showBorder = __o_showBorder.Default(false);
int border = __o_border.Default(-1);
	HX_STACK_FRAME("flixel.ui.FlxBar","createGradientEmptyBar",0x05ffcf57,"flixel.ui.FlxBar.createGradientEmptyBar","flixel/ui/FlxBar.hx",463,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(empty,"empty")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(showBorder,"showBorder")
	HX_STACK_ARG(border,"border")
{
		HX_STACK_LINE(464)
		bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(464)
		if ((tmp)){
			HX_STACK_LINE(466)
			int tmp1 = this->barWidth;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(466)
			::String tmp2 = (HX_HCSTRING("Gradient:","\x2a","\x58","\xe6","\x6e") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(466)
			::String tmp3 = (tmp2 + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(466)
			int tmp4 = this->barHeight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(466)
			::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(466)
			::String tmp6 = (tmp5 + HX_HCSTRING(",colors:[","\xbd","\xd0","\x85","\xcb"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(466)
			::String emptyKey = tmp6;		HX_STACK_VAR(emptyKey,"emptyKey");
			HX_STACK_LINE(467)
			{
				HX_STACK_LINE(467)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(467)
				while((true)){
					HX_STACK_LINE(467)
					bool tmp7 = (_g < empty->length);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(467)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(467)
					if ((tmp8)){
						HX_STACK_LINE(467)
						break;
					}
					HX_STACK_LINE(467)
					int tmp9 = empty->__get(_g);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(467)
					int col = tmp9;		HX_STACK_VAR(col,"col");
					HX_STACK_LINE(467)
					++(_g);
					HX_STACK_LINE(469)
					::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(469)
					{
						HX_STACK_LINE(469)
						bool Alpha = true;		HX_STACK_VAR(Alpha,"Alpha");
						HX_STACK_LINE(469)
						bool Prefix = true;		HX_STACK_VAR(Prefix,"Prefix");
						HX_STACK_LINE(469)
						bool tmp11 = Prefix;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(469)
						::String tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(469)
						if ((tmp11)){
							HX_STACK_LINE(469)
							tmp12 = HX_HCSTRING("0x","\x48","\x2a","\x00","\x00");
						}
						else{
							HX_STACK_LINE(469)
							tmp12 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
						}
						HX_STACK_LINE(469)
						bool tmp13 = Alpha;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(469)
						::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(469)
						if ((tmp13)){
							HX_STACK_LINE(469)
							int tmp15 = (int(col) >> int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(469)
							int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(469)
							tmp14 = ::StringTools_obj::hex(tmp16,(int)2);
						}
						else{
							HX_STACK_LINE(469)
							tmp14 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
						}
						HX_STACK_LINE(469)
						::String tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(469)
						int tmp16 = (int(col) >> int((int)16));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(469)
						int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(469)
						::String tmp18 = ::StringTools_obj::hex(tmp17,(int)2);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(469)
						::String tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(469)
						int tmp20 = (int(col) >> int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(469)
						int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(469)
						::String tmp22 = ::StringTools_obj::hex(tmp21,(int)2);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(469)
						::String tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(469)
						int tmp24 = (int(col) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(469)
						::String tmp25 = ::StringTools_obj::hex(tmp24,(int)2);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(469)
						tmp10 = (tmp23 + tmp25);
					}
					HX_STACK_LINE(469)
					::String tmp11 = (tmp10 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(469)
					hx::AddEq(emptyKey,tmp11);
				}
			}
			HX_STACK_LINE(471)
			::String tmp7 = (HX_HCSTRING("],chunkSize: ","\x25","\xff","\x35","\xeb") + chunkSize);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(471)
			::String tmp8 = (tmp7 + HX_HCSTRING(",rotation: ","\x90","\x2a","\xb9","\x0a"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(471)
			int tmp9 = rotation;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(471)
			::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(471)
			hx::AddEq(emptyKey,tmp10);
			HX_STACK_LINE(473)
			bool tmp11 = showBorder;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(473)
			if ((tmp11)){
				HX_STACK_LINE(475)
				::String tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(475)
				{
					HX_STACK_LINE(475)
					bool Alpha = true;		HX_STACK_VAR(Alpha,"Alpha");
					HX_STACK_LINE(475)
					bool Prefix = true;		HX_STACK_VAR(Prefix,"Prefix");
					HX_STACK_LINE(475)
					bool tmp13 = Prefix;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(475)
					::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(475)
					if ((tmp13)){
						HX_STACK_LINE(475)
						tmp14 = HX_HCSTRING("0x","\x48","\x2a","\x00","\x00");
					}
					else{
						HX_STACK_LINE(475)
						tmp14 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
					}
					HX_STACK_LINE(475)
					bool tmp15 = Alpha;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(475)
					::String tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(475)
					if ((tmp15)){
						HX_STACK_LINE(475)
						int tmp17 = (int(border) >> int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(475)
						int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(475)
						tmp16 = ::StringTools_obj::hex(tmp18,(int)2);
					}
					else{
						HX_STACK_LINE(475)
						tmp16 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
					}
					HX_STACK_LINE(475)
					::String tmp17 = (tmp14 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(475)
					int tmp18 = (int(border) >> int((int)16));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(475)
					int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(475)
					::String tmp20 = ::StringTools_obj::hex(tmp19,(int)2);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(475)
					::String tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(475)
					int tmp22 = (int(border) >> int((int)8));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(475)
					int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(475)
					::String tmp24 = ::StringTools_obj::hex(tmp23,(int)2);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(475)
					::String tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(475)
					int tmp26 = (int(border) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(475)
					::String tmp27 = ::StringTools_obj::hex(tmp26,(int)2);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(475)
					tmp12 = (tmp25 + tmp27);
				}
				HX_STACK_LINE(475)
				::String tmp13 = (HX_HCSTRING(",border: ","\xbe","\x9e","\x76","\x9a") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(475)
				hx::AddEq(emptyKey,tmp13);
			}
			HX_STACK_LINE(478)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(478)
			{
				HX_STACK_LINE(478)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp13 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(478)
				::flixel::_system::frontEnds::BitmapFrontEnd _this = tmp13;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(478)
				::String tmp14 = emptyKey;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(478)
				::String tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(478)
				bool tmp16 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(478)
				if ((tmp16)){
					HX_STACK_LINE(478)
					::String tmp17 = emptyKey;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(478)
					::String tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(478)
					::flixel::graphics::FlxGraphic tmp19 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(478)
					::flixel::graphics::FlxGraphic tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(478)
					::flixel::graphics::FlxGraphic tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(478)
					tmp12 = (tmp21 != null());
				}
				else{
					HX_STACK_LINE(478)
					tmp12 = false;
				}
			}
			HX_STACK_LINE(478)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(478)
			if ((tmp13)){
				HX_STACK_LINE(480)
				::openfl::_legacy::display::BitmapData emptyBar = null();		HX_STACK_VAR(emptyBar,"emptyBar");
				HX_STACK_LINE(482)
				bool tmp14 = showBorder;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(482)
				if ((tmp14)){
					HX_STACK_LINE(484)
					int tmp15 = this->barWidth;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(484)
					int tmp16 = this->barHeight;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(484)
					int tmp17 = border;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(484)
					::openfl::_legacy::display::BitmapData tmp18 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp15,tmp16,true,tmp17,null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(484)
					emptyBar = tmp18;
					HX_STACK_LINE(485)
					::openfl::_legacy::display::BitmapData tmp19 = emptyBar;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(485)
					int tmp20 = this->barWidth;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(485)
					int tmp21 = (tmp20 - (int)2);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(485)
					int tmp22 = this->barHeight;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(485)
					int tmp23 = (tmp22 - (int)2);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(485)
					int tmp24 = chunkSize;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(485)
					int tmp25 = rotation;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(485)
					::flixel::util::FlxGradient_obj::overlayGradientOnBitmapData(tmp19,tmp21,tmp23,empty,(int)1,(int)1,tmp24,tmp25,null());
				}
				else{
					HX_STACK_LINE(489)
					int tmp15 = this->barWidth;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(489)
					int tmp16 = this->barHeight;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(489)
					int tmp17 = chunkSize;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(489)
					int tmp18 = rotation;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(489)
					::openfl::_legacy::display::BitmapData tmp19 = ::flixel::util::FlxGradient_obj::createGradientBitmapData(tmp15,tmp16,empty,tmp17,tmp18,null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(489)
					emptyBar = tmp19;
				}
				HX_STACK_LINE(492)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp15 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(492)
				::openfl::_legacy::display::BitmapData tmp16 = emptyBar;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(492)
				::String tmp17 = emptyKey;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(492)
				tmp15->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp16,false,tmp17);
			}
			HX_STACK_LINE(495)
			::flixel::_system::frontEnds::BitmapFrontEnd tmp14 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(495)
			::String tmp15 = emptyKey;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(495)
			::flixel::graphics::FlxGraphic tmp16 = tmp14->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(495)
			::flixel::graphics::frames::FlxImageFrame tmp17 = tmp16->get_imageFrame();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(495)
			this->set_frames(tmp17);
		}
		else{
			HX_STACK_LINE(499)
			bool tmp1 = showBorder;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(499)
			if ((tmp1)){
				HX_STACK_LINE(501)
				int tmp2 = this->barWidth;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(501)
				int tmp3 = this->barHeight;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(501)
				int tmp4 = border;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(501)
				::openfl::_legacy::display::BitmapData tmp5 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp2,tmp3,true,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(501)
				this->_emptyBar = tmp5;
				HX_STACK_LINE(502)
				::openfl::_legacy::display::BitmapData tmp6 = this->_emptyBar;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(502)
				int tmp7 = this->barWidth;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(502)
				int tmp8 = (tmp7 - (int)2);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(502)
				int tmp9 = this->barHeight;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(502)
				int tmp10 = (tmp9 - (int)2);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(502)
				int tmp11 = chunkSize;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(502)
				int tmp12 = rotation;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(502)
				::flixel::util::FlxGradient_obj::overlayGradientOnBitmapData(tmp6,tmp8,tmp10,empty,(int)1,(int)1,tmp11,tmp12,null());
			}
			else{
				HX_STACK_LINE(506)
				int tmp2 = this->barWidth;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(506)
				int tmp3 = this->barHeight;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(506)
				int tmp4 = chunkSize;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(506)
				int tmp5 = rotation;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(506)
				::openfl::_legacy::display::BitmapData tmp6 = ::flixel::util::FlxGradient_obj::createGradientBitmapData(tmp2,tmp3,empty,tmp4,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(506)
				this->_emptyBar = tmp6;
			}
			HX_STACK_LINE(509)
			::openfl::_legacy::geom::Rectangle tmp2 = this->_emptyBarRect;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(509)
			int tmp3 = this->barWidth;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(509)
			int tmp4 = this->barHeight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(509)
			tmp2->setTo((int)0,(int)0,tmp3,tmp4);
			HX_STACK_LINE(510)
			this->updateEmptyBar();
		}
		HX_STACK_LINE(513)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxBar_obj,createGradientEmptyBar,return )

::flixel::ui::FlxBar FlxBar_obj::createGradientFilledBar( Array< int > fill,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_showBorder,hx::Null< int >  __o_border){
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(180);
bool showBorder = __o_showBorder.Default(false);
int border = __o_border.Default(-1);
	HX_STACK_FRAME("flixel.ui.FlxBar","createGradientFilledBar",0xe12a9220,"flixel.ui.FlxBar.createGradientFilledBar","flixel/ui/FlxBar.hx",527,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fill,"fill")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(showBorder,"showBorder")
	HX_STACK_ARG(border,"border")
{
		HX_STACK_LINE(528)
		bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(528)
		if ((tmp)){
			HX_STACK_LINE(530)
			int tmp1 = this->barWidth;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(530)
			::String tmp2 = (HX_HCSTRING("Gradient:","\x2a","\x58","\xe6","\x6e") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(530)
			::String tmp3 = (tmp2 + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(530)
			int tmp4 = this->barHeight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(530)
			::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(530)
			::String tmp6 = (tmp5 + HX_HCSTRING(",colors:[","\xbd","\xd0","\x85","\xcb"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(530)
			::String filledKey = tmp6;		HX_STACK_VAR(filledKey,"filledKey");
			HX_STACK_LINE(531)
			{
				HX_STACK_LINE(531)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(531)
				while((true)){
					HX_STACK_LINE(531)
					bool tmp7 = (_g < fill->length);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(531)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(531)
					if ((tmp8)){
						HX_STACK_LINE(531)
						break;
					}
					HX_STACK_LINE(531)
					int tmp9 = fill->__get(_g);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(531)
					int col = tmp9;		HX_STACK_VAR(col,"col");
					HX_STACK_LINE(531)
					++(_g);
					HX_STACK_LINE(533)
					::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(533)
					{
						HX_STACK_LINE(533)
						bool Alpha = true;		HX_STACK_VAR(Alpha,"Alpha");
						HX_STACK_LINE(533)
						bool Prefix = true;		HX_STACK_VAR(Prefix,"Prefix");
						HX_STACK_LINE(533)
						bool tmp11 = Prefix;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(533)
						::String tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(533)
						if ((tmp11)){
							HX_STACK_LINE(533)
							tmp12 = HX_HCSTRING("0x","\x48","\x2a","\x00","\x00");
						}
						else{
							HX_STACK_LINE(533)
							tmp12 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
						}
						HX_STACK_LINE(533)
						bool tmp13 = Alpha;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(533)
						::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(533)
						if ((tmp13)){
							HX_STACK_LINE(533)
							int tmp15 = (int(col) >> int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(533)
							int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(533)
							tmp14 = ::StringTools_obj::hex(tmp16,(int)2);
						}
						else{
							HX_STACK_LINE(533)
							tmp14 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
						}
						HX_STACK_LINE(533)
						::String tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(533)
						int tmp16 = (int(col) >> int((int)16));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(533)
						int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(533)
						::String tmp18 = ::StringTools_obj::hex(tmp17,(int)2);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(533)
						::String tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(533)
						int tmp20 = (int(col) >> int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(533)
						int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(533)
						::String tmp22 = ::StringTools_obj::hex(tmp21,(int)2);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(533)
						::String tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(533)
						int tmp24 = (int(col) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(533)
						::String tmp25 = ::StringTools_obj::hex(tmp24,(int)2);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(533)
						tmp10 = (tmp23 + tmp25);
					}
					HX_STACK_LINE(533)
					::String tmp11 = (tmp10 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(533)
					hx::AddEq(filledKey,tmp11);
				}
			}
			HX_STACK_LINE(535)
			::String tmp7 = (HX_HCSTRING("],chunkSize: ","\x25","\xff","\x35","\xeb") + chunkSize);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(535)
			::String tmp8 = (tmp7 + HX_HCSTRING(",rotation: ","\x90","\x2a","\xb9","\x0a"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(535)
			int tmp9 = rotation;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(535)
			::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(535)
			hx::AddEq(filledKey,tmp10);
			HX_STACK_LINE(537)
			bool tmp11 = showBorder;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(537)
			if ((tmp11)){
				HX_STACK_LINE(539)
				::String tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(539)
				{
					HX_STACK_LINE(539)
					bool Alpha = true;		HX_STACK_VAR(Alpha,"Alpha");
					HX_STACK_LINE(539)
					bool Prefix = true;		HX_STACK_VAR(Prefix,"Prefix");
					HX_STACK_LINE(539)
					bool tmp13 = Prefix;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(539)
					::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(539)
					if ((tmp13)){
						HX_STACK_LINE(539)
						tmp14 = HX_HCSTRING("0x","\x48","\x2a","\x00","\x00");
					}
					else{
						HX_STACK_LINE(539)
						tmp14 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
					}
					HX_STACK_LINE(539)
					bool tmp15 = Alpha;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(539)
					::String tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(539)
					if ((tmp15)){
						HX_STACK_LINE(539)
						int tmp17 = (int(border) >> int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(539)
						int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(539)
						tmp16 = ::StringTools_obj::hex(tmp18,(int)2);
					}
					else{
						HX_STACK_LINE(539)
						tmp16 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
					}
					HX_STACK_LINE(539)
					::String tmp17 = (tmp14 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(539)
					int tmp18 = (int(border) >> int((int)16));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(539)
					int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(539)
					::String tmp20 = ::StringTools_obj::hex(tmp19,(int)2);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(539)
					::String tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(539)
					int tmp22 = (int(border) >> int((int)8));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(539)
					int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(539)
					::String tmp24 = ::StringTools_obj::hex(tmp23,(int)2);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(539)
					::String tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(539)
					int tmp26 = (int(border) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(539)
					::String tmp27 = ::StringTools_obj::hex(tmp26,(int)2);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(539)
					tmp12 = (tmp25 + tmp27);
				}
				HX_STACK_LINE(539)
				::String tmp13 = (HX_HCSTRING(",border: ","\xbe","\x9e","\x76","\x9a") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(539)
				hx::AddEq(filledKey,tmp13);
			}
			HX_STACK_LINE(542)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(542)
			{
				HX_STACK_LINE(542)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp13 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(542)
				::flixel::_system::frontEnds::BitmapFrontEnd _this = tmp13;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(542)
				::String tmp14 = filledKey;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(542)
				::String tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(542)
				bool tmp16 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(542)
				if ((tmp16)){
					HX_STACK_LINE(542)
					::String tmp17 = filledKey;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(542)
					::String tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(542)
					::flixel::graphics::FlxGraphic tmp19 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(542)
					::flixel::graphics::FlxGraphic tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(542)
					::flixel::graphics::FlxGraphic tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(542)
					tmp12 = (tmp21 != null());
				}
				else{
					HX_STACK_LINE(542)
					tmp12 = false;
				}
			}
			HX_STACK_LINE(542)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(542)
			if ((tmp13)){
				HX_STACK_LINE(544)
				::openfl::_legacy::display::BitmapData filledBar = null();		HX_STACK_VAR(filledBar,"filledBar");
				HX_STACK_LINE(546)
				bool tmp14 = showBorder;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(546)
				if ((tmp14)){
					HX_STACK_LINE(548)
					int tmp15 = this->barWidth;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(548)
					int tmp16 = this->barHeight;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(548)
					int tmp17 = border;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(548)
					::openfl::_legacy::display::BitmapData tmp18 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp15,tmp16,true,tmp17,null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(548)
					filledBar = tmp18;
					HX_STACK_LINE(549)
					::openfl::_legacy::display::BitmapData tmp19 = filledBar;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(549)
					int tmp20 = this->barWidth;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(549)
					int tmp21 = (tmp20 - (int)2);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(549)
					int tmp22 = this->barHeight;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(549)
					int tmp23 = (tmp22 - (int)2);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(549)
					int tmp24 = chunkSize;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(549)
					int tmp25 = rotation;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(549)
					::flixel::util::FlxGradient_obj::overlayGradientOnBitmapData(tmp19,tmp21,tmp23,fill,(int)1,(int)1,tmp24,tmp25,null());
				}
				else{
					HX_STACK_LINE(553)
					int tmp15 = this->barWidth;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(553)
					int tmp16 = this->barHeight;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(553)
					int tmp17 = chunkSize;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(553)
					int tmp18 = rotation;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(553)
					::openfl::_legacy::display::BitmapData tmp19 = ::flixel::util::FlxGradient_obj::createGradientBitmapData(tmp15,tmp16,fill,tmp17,tmp18,null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(553)
					filledBar = tmp19;
				}
				HX_STACK_LINE(556)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp15 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(556)
				::openfl::_legacy::display::BitmapData tmp16 = filledBar;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(556)
				::String tmp17 = filledKey;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(556)
				tmp15->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp16,false,tmp17);
			}
			HX_STACK_LINE(559)
			::flixel::_system::frontEnds::BitmapFrontEnd tmp14 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(559)
			::String tmp15 = filledKey;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(559)
			::flixel::graphics::FlxGraphic tmp16 = tmp14->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(559)
			::flixel::graphics::frames::FlxImageFrame tmp17 = tmp16->get_imageFrame();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(559)
			this->set_frontFrames(tmp17);
		}
		else{
			HX_STACK_LINE(563)
			bool tmp1 = showBorder;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(563)
			if ((tmp1)){
				HX_STACK_LINE(565)
				int tmp2 = this->barWidth;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(565)
				int tmp3 = this->barHeight;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(565)
				int tmp4 = border;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(565)
				::openfl::_legacy::display::BitmapData tmp5 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp2,tmp3,true,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(565)
				this->_filledBar = tmp5;
				HX_STACK_LINE(566)
				::openfl::_legacy::display::BitmapData tmp6 = this->_filledBar;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(566)
				int tmp7 = this->barWidth;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(566)
				int tmp8 = (tmp7 - (int)2);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(566)
				int tmp9 = this->barHeight;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(566)
				int tmp10 = (tmp9 - (int)2);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(566)
				int tmp11 = chunkSize;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(566)
				int tmp12 = rotation;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(566)
				::flixel::util::FlxGradient_obj::overlayGradientOnBitmapData(tmp6,tmp8,tmp10,fill,(int)1,(int)1,tmp11,tmp12,null());
			}
			else{
				HX_STACK_LINE(570)
				int tmp2 = this->barWidth;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(570)
				int tmp3 = this->barHeight;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(570)
				int tmp4 = chunkSize;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(570)
				int tmp5 = rotation;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(570)
				::openfl::_legacy::display::BitmapData tmp6 = ::flixel::util::FlxGradient_obj::createGradientBitmapData(tmp2,tmp3,fill,tmp4,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(570)
				this->_filledBar = tmp6;
			}
			HX_STACK_LINE(573)
			::openfl::_legacy::geom::Rectangle tmp2 = this->_filledBarRect;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(573)
			int tmp3 = this->barWidth;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(573)
			int tmp4 = this->barHeight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(573)
			tmp2->setTo((int)0,(int)0,tmp3,tmp4);
			HX_STACK_LINE(574)
			this->updateFilledBar();
		}
		HX_STACK_LINE(577)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxBar_obj,createGradientFilledBar,return )

::flixel::ui::FlxBar FlxBar_obj::createImageBar( Dynamic empty,Dynamic fill,hx::Null< int >  __o_emptyBackground,hx::Null< int >  __o_fillBackground){
int emptyBackground = __o_emptyBackground.Default(-16777216);
int fillBackground = __o_fillBackground.Default(-16711936);
	HX_STACK_FRAME("flixel.ui.FlxBar","createImageBar",0xf0f89039,"flixel.ui.FlxBar.createImageBar","flixel/ui/FlxBar.hx",593,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(empty,"empty")
	HX_STACK_ARG(fill,"fill")
	HX_STACK_ARG(emptyBackground,"emptyBackground")
	HX_STACK_ARG(fillBackground,"fillBackground")
{
		HX_STACK_LINE(594)
		Dynamic tmp = empty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(594)
		int tmp1 = emptyBackground;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(594)
		this->createImageEmptyBar(tmp,tmp1);
		HX_STACK_LINE(595)
		Dynamic tmp2 = fill;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(595)
		int tmp3 = fillBackground;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(595)
		this->createImageFilledBar(tmp2,tmp3);
		HX_STACK_LINE(596)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBar_obj,createImageBar,return )

::flixel::ui::FlxBar FlxBar_obj::createImageEmptyBar( Dynamic empty,hx::Null< int >  __o_emptyBackground){
int emptyBackground = __o_emptyBackground.Default(-16777216);
	HX_STACK_FRAME("flixel.ui.FlxBar","createImageEmptyBar",0xa6dfb520,"flixel.ui.FlxBar.createImageEmptyBar","flixel/ui/FlxBar.hx",607,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(empty,"empty")
	HX_STACK_ARG(emptyBackground,"emptyBackground")
{
		HX_STACK_LINE(608)
		bool tmp = (empty != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(608)
		if ((tmp)){
			HX_STACK_LINE(610)
			::flixel::_system::frontEnds::BitmapFrontEnd tmp1 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(610)
			Dynamic tmp2 = empty;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(610)
			::flixel::graphics::FlxGraphic tmp3 = tmp1->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(610)
			::flixel::graphics::FlxGraphic emptyGraphic = tmp3;		HX_STACK_VAR(emptyGraphic,"emptyGraphic");
			HX_STACK_LINE(612)
			bool tmp4 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(612)
			if ((tmp4)){
				HX_STACK_LINE(614)
				::flixel::graphics::frames::FlxImageFrame tmp5 = emptyGraphic->get_imageFrame();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(614)
				this->set_frames(tmp5);
			}
			else{
				HX_STACK_LINE(618)
				::openfl::_legacy::display::BitmapData tmp5 = emptyGraphic->bitmap->clone();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(618)
				this->_emptyBar = tmp5;
				HX_STACK_LINE(620)
				::openfl::_legacy::display::BitmapData tmp6 = this->_emptyBar;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(620)
				int tmp7 = tmp6->get_width();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(620)
				this->barWidth = tmp7;
				HX_STACK_LINE(621)
				::openfl::_legacy::display::BitmapData tmp8 = this->_emptyBar;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(621)
				int tmp9 = tmp8->get_height();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(621)
				this->barHeight = tmp9;
				HX_STACK_LINE(623)
				::openfl::_legacy::geom::Rectangle tmp10 = this->_emptyBarRect;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(623)
				int tmp11 = this->barWidth;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(623)
				int tmp12 = this->barHeight;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(623)
				tmp10->setTo((int)0,(int)0,tmp11,tmp12);
				HX_STACK_LINE(625)
				::flixel::graphics::FlxGraphic tmp13 = this->graphic;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(625)
				bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(625)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(625)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(625)
				if ((tmp15)){
					HX_STACK_LINE(625)
					::flixel::graphics::frames::FlxFrame tmp17 = this->frame;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(625)
					::flixel::graphics::frames::FlxFrame tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(625)
					Float tmp19 = tmp18->sourceSize->x;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(625)
					Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(625)
					int tmp21 = this->barWidth;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(625)
					int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(625)
					bool tmp23 = (tmp20 != tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(625)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(625)
					bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(625)
					bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(625)
					bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(625)
					bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(625)
					if ((tmp28)){
						HX_STACK_LINE(625)
						::flixel::graphics::frames::FlxFrame tmp29 = this->frame;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(625)
						::flixel::graphics::frames::FlxFrame tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(625)
						::flixel::graphics::frames::FlxFrame tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(625)
						Float tmp32 = tmp31->sourceSize->y;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(625)
						Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(625)
						Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(625)
						int tmp35 = this->barHeight;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(625)
						int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(625)
						int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(625)
						tmp16 = (tmp34 != tmp37);
					}
					else{
						HX_STACK_LINE(625)
						tmp16 = true;
					}
				}
				else{
					HX_STACK_LINE(625)
					tmp16 = true;
				}
				HX_STACK_LINE(625)
				if ((tmp16)){
					HX_STACK_LINE(627)
					int tmp17 = this->barWidth;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(627)
					int tmp18 = this->barHeight;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(627)
					this->makeGraphic(tmp17,tmp18,(int)0,true,null());
				}
				HX_STACK_LINE(630)
				this->updateEmptyBar();
			}
		}
		else{
			HX_STACK_LINE(635)
			int tmp1 = emptyBackground;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(635)
			this->createColoredEmptyBar(tmp1,null(),null());
		}
		HX_STACK_LINE(638)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBar_obj,createImageEmptyBar,return )

::flixel::ui::FlxBar FlxBar_obj::createImageFilledBar( Dynamic fill,hx::Null< int >  __o_fillBackground){
int fillBackground = __o_fillBackground.Default(-16711936);
	HX_STACK_FRAME("flixel.ui.FlxBar","createImageFilledBar",0x0433bc37,"flixel.ui.FlxBar.createImageFilledBar","flixel/ui/FlxBar.hx",649,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fill,"fill")
	HX_STACK_ARG(fillBackground,"fillBackground")
{
		HX_STACK_LINE(650)
		bool tmp = (fill != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(650)
		if ((tmp)){
			HX_STACK_LINE(652)
			::flixel::_system::frontEnds::BitmapFrontEnd tmp1 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(652)
			Dynamic tmp2 = fill;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(652)
			::flixel::graphics::FlxGraphic tmp3 = tmp1->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(652)
			::flixel::graphics::FlxGraphic filledGraphic = tmp3;		HX_STACK_VAR(filledGraphic,"filledGraphic");
			HX_STACK_LINE(654)
			bool tmp4 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(654)
			if ((tmp4)){
				HX_STACK_LINE(656)
				::flixel::graphics::frames::FlxImageFrame tmp5 = filledGraphic->get_imageFrame();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(656)
				this->set_frontFrames(tmp5);
			}
			else{
				HX_STACK_LINE(660)
				::openfl::_legacy::display::BitmapData tmp5 = filledGraphic->bitmap->clone();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(660)
				this->_filledBar = tmp5;
				HX_STACK_LINE(662)
				::openfl::_legacy::geom::Rectangle tmp6 = this->_filledBarRect;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(662)
				int tmp7 = this->barWidth;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(662)
				int tmp8 = this->barHeight;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(662)
				tmp6->setTo((int)0,(int)0,tmp7,tmp8);
				HX_STACK_LINE(664)
				::flixel::graphics::FlxGraphic tmp9 = this->graphic;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(664)
				bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(664)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(664)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(664)
				if ((tmp11)){
					HX_STACK_LINE(664)
					::flixel::graphics::frames::FlxFrame tmp13 = this->frame;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(664)
					::flixel::graphics::frames::FlxFrame tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(664)
					Float tmp15 = tmp14->sourceSize->x;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(664)
					Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(664)
					int tmp17 = this->barWidth;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(664)
					int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(664)
					bool tmp19 = (tmp16 != tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(664)
					bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(664)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(664)
					bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(664)
					bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(664)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(664)
					if ((tmp24)){
						HX_STACK_LINE(664)
						::flixel::graphics::frames::FlxFrame tmp25 = this->frame;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(664)
						::flixel::graphics::frames::FlxFrame tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(664)
						::flixel::graphics::frames::FlxFrame tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(664)
						Float tmp28 = tmp27->sourceSize->y;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(664)
						Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(664)
						Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(664)
						int tmp31 = this->barHeight;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(664)
						int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(664)
						int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(664)
						tmp12 = (tmp30 != tmp33);
					}
					else{
						HX_STACK_LINE(664)
						tmp12 = true;
					}
				}
				else{
					HX_STACK_LINE(664)
					tmp12 = true;
				}
				HX_STACK_LINE(664)
				if ((tmp12)){
					HX_STACK_LINE(666)
					int tmp13 = this->barWidth;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(666)
					int tmp14 = this->barHeight;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(666)
					this->makeGraphic(tmp13,tmp14,(int)0,true,null());
				}
				HX_STACK_LINE(669)
				bool tmp13 = this->_fillHorizontal;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(669)
				Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(669)
				if ((tmp13)){
					HX_STACK_LINE(669)
					int tmp15 = this->barWidth;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(669)
					int tmp16 = this->_maxPercent;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(669)
					tmp14 = (Float(tmp15) / Float(tmp16));
				}
				else{
					HX_STACK_LINE(669)
					int tmp15 = this->barHeight;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(669)
					int tmp16 = this->_maxPercent;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(669)
					tmp14 = (Float(tmp15) / Float(tmp16));
				}
				HX_STACK_LINE(669)
				this->pxPerPercent = tmp14;
				HX_STACK_LINE(670)
				this->updateFilledBar();
			}
		}
		else{
			HX_STACK_LINE(675)
			int tmp1 = fillBackground;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(675)
			this->createColoredFilledBar(tmp1,null(),null());
		}
		HX_STACK_LINE(678)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBar_obj,createImageFilledBar,return )

::flixel::ui::FlxBarFillDirection FlxBar_obj::set_fillDirection( ::flixel::ui::FlxBarFillDirection direction){
	HX_STACK_FRAME("flixel.ui.FlxBar","set_fillDirection",0x7ac2afda,"flixel.ui.FlxBar.set_fillDirection","flixel/ui/FlxBar.hx",682,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(direction,"direction")
	HX_STACK_LINE(683)
	this->fillDirection = direction;
	HX_STACK_LINE(685)
	switch( (int)(direction->__Index())){
		case (int)0: case (int)1: case (int)4: case (int)5: {
			HX_STACK_LINE(688)
			this->_fillHorizontal = true;
		}
		;break;
		case (int)2: case (int)3: case (int)6: case (int)7: {
			HX_STACK_LINE(691)
			this->_fillHorizontal = false;
		}
		;break;
	}
	HX_STACK_LINE(694)
	::flixel::ui::FlxBarFillDirection tmp = this->fillDirection;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(694)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,set_fillDirection,return )

Void FlxBar_obj::updateValueFromParent( ){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","updateValueFromParent",0x9d60d3b7,"flixel.ui.FlxBar.updateValueFromParent","flixel/ui/FlxBar.hx",698,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(699)
		Dynamic tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(699)
		::String tmp1 = this->parentVariable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(699)
		Dynamic tmp2 = ::Reflect_obj::getProperty(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(699)
		this->set_value(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,updateValueFromParent,(void))

Void FlxBar_obj::updateBar( ){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","updateBar",0x52521d85,"flixel.ui.FlxBar.updateBar","flixel/ui/FlxBar.hx",707,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(708)
		this->updateEmptyBar();
		HX_STACK_LINE(709)
		this->updateFilledBar();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,updateBar,(void))

Void FlxBar_obj::updateEmptyBar( ){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","updateEmptyBar",0x77e67454,"flixel.ui.FlxBar.updateEmptyBar","flixel/ui/FlxBar.hx",716,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(717)
		bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(717)
		if ((tmp)){
			HX_STACK_LINE(719)
			::openfl::_legacy::display::BitmapData tmp1 = this->get_pixels();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(719)
			::openfl::_legacy::display::BitmapData tmp2 = this->_emptyBar;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(719)
			::openfl::_legacy::geom::Rectangle tmp3 = this->_emptyBarRect;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(719)
			::openfl::_legacy::geom::Point tmp4 = this->_zeroOffset;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(719)
			tmp1->copyPixels(tmp2,tmp3,tmp4,null(),null(),null());
			HX_STACK_LINE(720)
			this->dirty = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,updateEmptyBar,(void))

Void FlxBar_obj::updateFilledBar( ){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","updateFilledBar",0x19144a83,"flixel.ui.FlxBar.updateFilledBar","flixel/ui/FlxBar.hx",728,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(729)
		int tmp = this->barWidth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(729)
		::openfl::_legacy::geom::Rectangle tmp1 = this->_filledBarRect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(729)
		tmp1->width = tmp;
		HX_STACK_LINE(730)
		int tmp2 = this->barHeight;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(730)
		::openfl::_legacy::geom::Rectangle tmp3 = this->_filledBarRect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(730)
		tmp3->height = tmp2;
		HX_STACK_LINE(732)
		Float tmp4 = this->get_value();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(732)
		Float tmp5 = this->min;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(732)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(732)
		Float tmp7 = this->range;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(732)
		Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(732)
		Float fraction = tmp8;		HX_STACK_VAR(fraction,"fraction");
		HX_STACK_LINE(733)
		Float tmp9 = fraction;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(733)
		int tmp10 = this->_maxPercent;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(733)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(733)
		Float percent = tmp11;		HX_STACK_VAR(percent,"percent");
		HX_STACK_LINE(734)
		bool tmp12 = this->_fillHorizontal;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(734)
		Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(734)
		if ((tmp12)){
			HX_STACK_LINE(734)
			tmp13 = this->barWidth;
		}
		else{
			HX_STACK_LINE(734)
			tmp13 = this->barHeight;
		}
		HX_STACK_LINE(734)
		Float maxScale = tmp13;		HX_STACK_VAR(maxScale,"maxScale");
		HX_STACK_LINE(735)
		Float tmp14 = maxScale;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(735)
		int tmp15 = this->numDivisions;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(735)
		Float tmp16 = (Float(tmp14) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(735)
		Float scaleInterval = tmp16;		HX_STACK_VAR(scaleInterval,"scaleInterval");
		HX_STACK_LINE(736)
		Float tmp17 = (fraction * maxScale);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(736)
		Float tmp18 = scaleInterval;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(736)
		Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(736)
		int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(736)
		Float tmp21 = scaleInterval;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(736)
		Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(736)
		Float interval = tmp22;		HX_STACK_VAR(interval,"interval");
		HX_STACK_LINE(738)
		bool tmp23 = this->_fillHorizontal;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(738)
		if ((tmp23)){
			HX_STACK_LINE(740)
			Float tmp24 = interval;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(740)
			int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(740)
			::openfl::_legacy::geom::Rectangle tmp26 = this->_filledBarRect;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(740)
			tmp26->width = tmp25;
		}
		else{
			HX_STACK_LINE(744)
			Float tmp24 = interval;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(744)
			int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(744)
			::openfl::_legacy::geom::Rectangle tmp26 = this->_filledBarRect;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(744)
			tmp26->height = tmp25;
		}
		HX_STACK_LINE(747)
		bool tmp24 = (percent > (int)0);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(747)
		if ((tmp24)){
			HX_STACK_LINE(749)
			{
				HX_STACK_LINE(749)
				::flixel::ui::FlxBarFillDirection tmp25 = this->fillDirection;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(749)
				::flixel::ui::FlxBarFillDirection _g = tmp25;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(749)
				switch( (int)(_g->__Index())){
					case (int)0: case (int)2: {
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(755)
						int tmp26 = this->barHeight;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(755)
						::openfl::_legacy::geom::Rectangle tmp27 = this->_filledBarRect;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(755)
						Float tmp28 = tmp27->height;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(755)
						Float tmp29 = (tmp26 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(755)
						::openfl::_legacy::geom::Rectangle tmp30 = this->_filledBarRect;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(755)
						tmp30->y = tmp29;
						HX_STACK_LINE(756)
						int tmp31 = this->barHeight;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(756)
						::openfl::_legacy::geom::Rectangle tmp32 = this->_filledBarRect;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(756)
						Float tmp33 = tmp32->height;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(756)
						Float tmp34 = (tmp31 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(756)
						::openfl::_legacy::geom::Point tmp35 = this->_filledBarPoint;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(756)
						tmp35->y = tmp34;
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(759)
						int tmp26 = this->barWidth;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(759)
						::openfl::_legacy::geom::Rectangle tmp27 = this->_filledBarRect;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(759)
						Float tmp28 = tmp27->width;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(759)
						Float tmp29 = (tmp26 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(759)
						::openfl::_legacy::geom::Rectangle tmp30 = this->_filledBarRect;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(759)
						tmp30->x = tmp29;
						HX_STACK_LINE(760)
						int tmp31 = this->barWidth;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(760)
						::openfl::_legacy::geom::Rectangle tmp32 = this->_filledBarRect;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(760)
						Float tmp33 = tmp32->width;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(760)
						Float tmp34 = (tmp31 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(760)
						::openfl::_legacy::geom::Point tmp35 = this->_filledBarPoint;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(760)
						tmp35->x = tmp34;
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(763)
						int tmp26 = this->barWidth;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(763)
						Float tmp27 = (Float(tmp26) / Float((int)2));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(763)
						::openfl::_legacy::geom::Rectangle tmp28 = this->_filledBarRect;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(763)
						Float tmp29 = tmp28->width;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(763)
						Float tmp30 = (Float(tmp29) / Float((int)2));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(763)
						Float tmp31 = (tmp27 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(763)
						int tmp32 = ::Std_obj::_int(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(763)
						::openfl::_legacy::geom::Rectangle tmp33 = this->_filledBarRect;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(763)
						tmp33->x = tmp32;
						HX_STACK_LINE(764)
						int tmp34 = this->barWidth;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(764)
						Float tmp35 = (Float(tmp34) / Float((int)2));		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(764)
						::openfl::_legacy::geom::Rectangle tmp36 = this->_filledBarRect;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(764)
						Float tmp37 = tmp36->width;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(764)
						Float tmp38 = (Float(tmp37) / Float((int)2));		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(764)
						Float tmp39 = (tmp35 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(764)
						int tmp40 = ::Std_obj::_int(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(764)
						::openfl::_legacy::geom::Point tmp41 = this->_filledBarPoint;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(764)
						tmp41->x = tmp40;
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(767)
						Float tmp26 = (maxScale - interval);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(767)
						int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(767)
						::openfl::_legacy::geom::Rectangle tmp28 = this->_filledBarRect;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(767)
						tmp28->width = tmp27;
						HX_STACK_LINE(768)
						int tmp29 = this->barWidth;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(768)
						::openfl::_legacy::geom::Rectangle tmp30 = this->_filledBarRect;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(768)
						Float tmp31 = tmp30->width;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(768)
						Float tmp32 = (tmp29 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(768)
						Float tmp33 = (Float(tmp32) / Float((int)2));		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(768)
						int tmp34 = ::Std_obj::_int(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(768)
						::openfl::_legacy::geom::Point tmp35 = this->_filledBarPoint;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(768)
						tmp35->x = tmp34;
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(771)
						int tmp26 = this->barHeight;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(771)
						Float tmp27 = (Float(tmp26) / Float((int)2));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(771)
						::openfl::_legacy::geom::Rectangle tmp28 = this->_filledBarRect;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(771)
						Float tmp29 = tmp28->height;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(771)
						Float tmp30 = (Float(tmp29) / Float((int)2));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(771)
						Float tmp31 = (tmp27 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(771)
						int tmp32 = ::Std_obj::_int(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(771)
						::openfl::_legacy::geom::Rectangle tmp33 = this->_filledBarRect;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(771)
						tmp33->y = tmp32;
						HX_STACK_LINE(772)
						int tmp34 = this->barHeight;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(772)
						Float tmp35 = (Float(tmp34) / Float((int)2));		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(772)
						::openfl::_legacy::geom::Rectangle tmp36 = this->_filledBarRect;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(772)
						Float tmp37 = tmp36->height;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(772)
						Float tmp38 = (Float(tmp37) / Float((int)2));		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(772)
						Float tmp39 = (tmp35 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(772)
						int tmp40 = ::Std_obj::_int(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(772)
						::openfl::_legacy::geom::Point tmp41 = this->_filledBarPoint;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(772)
						tmp41->y = tmp40;
					}
					;break;
					case (int)7: {
						HX_STACK_LINE(775)
						Float tmp26 = (maxScale - interval);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(775)
						int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(775)
						::openfl::_legacy::geom::Rectangle tmp28 = this->_filledBarRect;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(775)
						tmp28->height = tmp27;
						HX_STACK_LINE(776)
						int tmp29 = this->barHeight;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(776)
						::openfl::_legacy::geom::Rectangle tmp30 = this->_filledBarRect;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(776)
						Float tmp31 = tmp30->height;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(776)
						Float tmp32 = (tmp29 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(776)
						Float tmp33 = (Float(tmp32) / Float((int)2));		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(776)
						int tmp34 = ::Std_obj::_int(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(776)
						::openfl::_legacy::geom::Point tmp35 = this->_filledBarPoint;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(776)
						tmp35->y = tmp34;
					}
					;break;
				}
			}
			HX_STACK_LINE(779)
			bool tmp25 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(779)
			if ((tmp25)){
				HX_STACK_LINE(781)
				::openfl::_legacy::display::BitmapData tmp26 = this->get_pixels();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(781)
				::openfl::_legacy::display::BitmapData tmp27 = this->_filledBar;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(781)
				::openfl::_legacy::geom::Rectangle tmp28 = this->_filledBarRect;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(781)
				::openfl::_legacy::geom::Point tmp29 = this->_filledBarPoint;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(781)
				tmp26->copyPixels(tmp27,tmp28,tmp29,null(),null(),true);
			}
			else{
				HX_STACK_LINE(785)
				::flixel::graphics::frames::FlxImageFrame tmp26 = this->get_frontFrames();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(785)
				bool tmp27 = (tmp26 != null());		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(785)
				if ((tmp27)){
					HX_STACK_LINE(787)
					Float tmp28 = percent;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(787)
					int tmp29 = ::Std_obj::_int(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(787)
					int prct = tmp29;		HX_STACK_VAR(prct,"prct");
					HX_STACK_LINE(788)
					{
						HX_STACK_LINE(788)
						::flixel::math::FlxRect tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(788)
						{
							HX_STACK_LINE(788)
							::flixel::math::FlxRect tmp31 = this->_filledFlxRect;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(788)
							::flixel::math::FlxRect _this = tmp31;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(788)
							::openfl::_legacy::geom::Rectangle tmp32 = this->_filledBarRect;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(788)
							::openfl::_legacy::geom::Rectangle FlashRect = tmp32;		HX_STACK_VAR(FlashRect,"FlashRect");
							HX_STACK_LINE(788)
							_this->x = FlashRect->x;
							HX_STACK_LINE(788)
							_this->y = FlashRect->y;
							HX_STACK_LINE(788)
							_this->width = FlashRect->width;
							HX_STACK_LINE(788)
							_this->height = FlashRect->height;
							HX_STACK_LINE(788)
							tmp30 = _this;
						}
						HX_STACK_LINE(788)
						::flixel::math::FlxRect _this = tmp30;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(788)
						Float tmp31 = _this->x;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(788)
						int tmp32 = ::Math_obj::round(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(788)
						_this->x = tmp32;
						HX_STACK_LINE(788)
						Float tmp33 = _this->y;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(788)
						int tmp34 = ::Math_obj::round(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(788)
						_this->y = tmp34;
						HX_STACK_LINE(788)
						Float tmp35 = _this->width;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(788)
						int tmp36 = ::Math_obj::round(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(788)
						_this->width = tmp36;
						HX_STACK_LINE(788)
						Float tmp37 = _this->height;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(788)
						int tmp38 = ::Math_obj::round(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(788)
						_this->height = tmp38;
						HX_STACK_LINE(788)
						_this;
					}
					HX_STACK_LINE(789)
					bool tmp30 = (prct > (int)0);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(789)
					if ((tmp30)){
						HX_STACK_LINE(791)
						::flixel::graphics::frames::FlxImageFrame tmp31 = this->get_frontFrames();		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(791)
						::flixel::graphics::frames::FlxFrame tmp32 = tmp31->get_frame();		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(791)
						::flixel::math::FlxRect tmp33 = this->_filledFlxRect;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(791)
						::flixel::graphics::frames::FlxFrame tmp34 = this->_frontFrame;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(791)
						::flixel::graphics::frames::FlxFrame tmp35 = tmp32->clipTo(tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(791)
						this->_frontFrame = tmp35;
					}
				}
			}
		}
		HX_STACK_LINE(797)
		bool tmp25 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(797)
		if ((tmp25)){
			HX_STACK_LINE(799)
			this->dirty = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,updateFilledBar,(void))

Void FlxBar_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","update",0xdbe594ee,"flixel.ui.FlxBar.update","flixel/ui/FlxBar.hx",804,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(805)
		Dynamic tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(805)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(805)
		if ((tmp1)){
			HX_STACK_LINE(807)
			Dynamic tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(807)
			::String tmp3 = this->parentVariable;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(807)
			Dynamic tmp4 = ::Reflect_obj::getProperty(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(807)
			Float tmp5 = this->get_value();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(807)
			bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(807)
			if ((tmp6)){
				HX_STACK_LINE(809)
				this->updateValueFromParent();
			}
			HX_STACK_LINE(812)
			bool tmp7 = this->fixedPosition;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(812)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(812)
			if ((tmp8)){
				HX_STACK_LINE(814)
				Dynamic tmp9 = this->parent;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(814)
				::flixel::math::FlxPoint tmp10 = this->positionOffset;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(814)
				Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(814)
				Dynamic tmp12 = (tmp9->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ) + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(814)
				this->set_x(tmp12);
				HX_STACK_LINE(815)
				Dynamic tmp13 = this->parent;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(815)
				::flixel::math::FlxPoint tmp14 = this->positionOffset;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(815)
				Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(815)
				Dynamic tmp16 = (tmp13->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ) + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(815)
				this->set_y(tmp16);
			}
		}
		HX_STACK_LINE(819)
		Float tmp2 = elapsed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(819)
		this->super::update(tmp2);
	}
return null();
}


Void FlxBar_obj::draw( ){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","draw",0x9cd647a9,"flixel.ui.FlxBar.draw","flixel/ui/FlxBar.hx",823,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(824)
		this->super::draw();
		HX_STACK_LINE(826)
		bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(826)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(826)
		if ((tmp1)){
			HX_STACK_LINE(827)
			return null();
		}
		HX_STACK_LINE(829)
		Float tmp2 = this->alpha;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(829)
		bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(829)
		if ((tmp3)){
			HX_STACK_LINE(830)
			return null();
		}
		HX_STACK_LINE(832)
		Float tmp4 = this->get_percent();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(832)
		bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(832)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(832)
		if ((tmp5)){
			HX_STACK_LINE(832)
			::flixel::graphics::frames::FlxFrame tmp7 = this->_frontFrame;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(832)
			::flixel::graphics::frames::FlxFrame tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(832)
			int tmp9 = tmp8->type;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(832)
			tmp6 = (tmp9 != (int)2);
		}
		else{
			HX_STACK_LINE(832)
			tmp6 = false;
		}
		HX_STACK_LINE(832)
		if ((tmp6)){
			HX_STACK_LINE(834)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(834)
			Array< ::Dynamic > _g1 = this->get_cameras();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(834)
			while((true)){
				HX_STACK_LINE(834)
				bool tmp7 = (_g < _g1->length);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(834)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(834)
				if ((tmp8)){
					HX_STACK_LINE(834)
					break;
				}
				HX_STACK_LINE(834)
				::flixel::FlxCamera tmp9 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(834)
				::flixel::FlxCamera camera = tmp9;		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(834)
				++(_g);
				HX_STACK_LINE(836)
				bool tmp10 = camera->visible;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(836)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(836)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(836)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(836)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(836)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(836)
				if ((tmp14)){
					HX_STACK_LINE(836)
					bool tmp16 = camera->exists;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(836)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(836)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(836)
					tmp15 = !(tmp18);
				}
				else{
					HX_STACK_LINE(836)
					tmp15 = true;
				}
				HX_STACK_LINE(836)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(836)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(836)
				if ((tmp16)){
					HX_STACK_LINE(836)
					::flixel::FlxCamera tmp18 = camera;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(836)
					::flixel::FlxCamera tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(836)
					bool tmp20 = this->isOnScreen(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(836)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(836)
					bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(836)
					tmp17 = !(tmp22);
				}
				else{
					HX_STACK_LINE(836)
					tmp17 = true;
				}
				HX_STACK_LINE(836)
				if ((tmp17)){
					HX_STACK_LINE(838)
					continue;
				}
				HX_STACK_LINE(841)
				::flixel::math::FlxPoint tmp18 = this->_point;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(841)
				::flixel::FlxCamera tmp19 = camera;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(841)
				::flixel::math::FlxPoint tmp20 = this->getScreenPosition(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(841)
				::flixel::math::FlxPoint tmp21 = this->offset;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(841)
				tmp20->subtractPoint(tmp21);
				HX_STACK_LINE(843)
				::flixel::graphics::frames::FlxFrame tmp22 = this->_frontFrame;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(843)
				::flixel::math::FlxMatrix tmp23 = this->_matrix;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(843)
				bool tmp24 = this->flipX;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(843)
				bool tmp25 = this->flipY;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(843)
				tmp22->prepareMatrix(tmp23,(int)0,tmp24,tmp25);
				HX_STACK_LINE(844)
				::flixel::math::FlxMatrix tmp26 = this->_matrix;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(844)
				::flixel::math::FlxPoint tmp27 = this->origin;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(844)
				Float tmp28 = tmp27->x;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(844)
				Float tmp29 = -(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(844)
				::flixel::math::FlxPoint tmp30 = this->origin;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(844)
				Float tmp31 = tmp30->y;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(844)
				Float tmp32 = -(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(844)
				tmp26->translate(tmp29,tmp32);
				HX_STACK_LINE(845)
				::flixel::math::FlxMatrix tmp33 = this->_matrix;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(845)
				::flixel::math::FlxPoint tmp34 = this->scale;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(845)
				Float tmp35 = tmp34->x;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(845)
				::flixel::math::FlxPoint tmp36 = this->scale;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(845)
				Float tmp37 = tmp36->y;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(845)
				tmp33->scale(tmp35,tmp37);
				HX_STACK_LINE(848)
				Float tmp38 = this->angle;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(848)
				bool tmp39 = (tmp38 != (int)0);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(848)
				if ((tmp39)){
					HX_STACK_LINE(850)
					::flixel::math::FlxMatrix tmp40 = this->_matrix;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(850)
					::flixel::math::FlxMatrix _this = tmp40;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(850)
					Float tmp41 = this->_cosAngle;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(850)
					Float cos = tmp41;		HX_STACK_VAR(cos,"cos");
					HX_STACK_LINE(850)
					Float tmp42 = this->_sinAngle;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(850)
					Float sin = tmp42;		HX_STACK_VAR(sin,"sin");
					HX_STACK_LINE(850)
					Float tmp43 = (_this->a * cos);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(850)
					Float tmp44 = (_this->b * sin);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(850)
					Float tmp45 = (tmp43 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(850)
					Float a1 = tmp45;		HX_STACK_VAR(a1,"a1");
					HX_STACK_LINE(850)
					Float tmp46 = (_this->a * sin);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(850)
					Float tmp47 = (_this->b * cos);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(850)
					Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(850)
					_this->b = tmp48;
					HX_STACK_LINE(850)
					_this->a = a1;
					HX_STACK_LINE(850)
					Float tmp49 = (_this->c * cos);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(850)
					Float tmp50 = (_this->d * sin);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(850)
					Float tmp51 = (tmp49 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(850)
					Float c1 = tmp51;		HX_STACK_VAR(c1,"c1");
					HX_STACK_LINE(850)
					Float tmp52 = (_this->c * sin);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(850)
					Float tmp53 = (_this->d * cos);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(850)
					Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(850)
					_this->d = tmp54;
					HX_STACK_LINE(850)
					_this->c = c1;
					HX_STACK_LINE(850)
					Float tmp55 = (_this->tx * cos);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(850)
					Float tmp56 = (_this->ty * sin);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(850)
					Float tmp57 = (tmp55 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(850)
					Float tx1 = tmp57;		HX_STACK_VAR(tx1,"tx1");
					HX_STACK_LINE(850)
					Float tmp58 = (_this->tx * sin);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(850)
					Float tmp59 = (_this->ty * cos);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(850)
					Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(850)
					_this->ty = tmp60;
					HX_STACK_LINE(850)
					_this->tx = tx1;
					HX_STACK_LINE(850)
					_this;
				}
				HX_STACK_LINE(853)
				{
					HX_STACK_LINE(853)
					::flixel::math::FlxPoint tmp40 = this->_point;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(853)
					::flixel::math::FlxPoint _this = tmp40;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(853)
					{
						HX_STACK_LINE(853)
						::flixel::math::FlxPoint _g2 = _this;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(853)
						Float tmp41 = _g2->x;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(853)
						::flixel::math::FlxPoint tmp42 = this->origin;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(853)
						Float tmp43 = tmp42->x;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(853)
						Float tmp44 = (tmp41 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(853)
						_g2->set_x(tmp44);
					}
					HX_STACK_LINE(853)
					{
						HX_STACK_LINE(853)
						::flixel::math::FlxPoint _g2 = _this;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(853)
						Float tmp41 = _g2->y;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(853)
						::flixel::math::FlxPoint tmp42 = this->origin;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(853)
						Float tmp43 = tmp42->y;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(853)
						Float tmp44 = (tmp41 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(853)
						_g2->set_y(tmp44);
					}
					HX_STACK_LINE(853)
					_this;
				}
				HX_STACK_LINE(854)
				::flixel::FlxCamera tmp40 = camera;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(854)
				bool tmp41 = this->isPixelPerfectRender(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(854)
				if ((tmp41)){
					HX_STACK_LINE(856)
					::flixel::math::FlxPoint tmp42 = this->_point;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(856)
					::flixel::math::FlxPoint _this = tmp42;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(856)
					Float tmp43 = _this->x;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(856)
					int tmp44 = ::Math_obj::floor(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(856)
					_this->set_x(tmp44);
					HX_STACK_LINE(856)
					Float tmp45 = _this->y;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(856)
					int tmp46 = ::Math_obj::floor(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(856)
					_this->set_y(tmp46);
					HX_STACK_LINE(856)
					_this;
				}
				HX_STACK_LINE(859)
				::flixel::math::FlxMatrix tmp42 = this->_matrix;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(859)
				::flixel::math::FlxPoint tmp43 = this->_point;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(859)
				Float tmp44 = tmp43->x;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(859)
				::flixel::math::FlxPoint tmp45 = this->_point;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(859)
				Float tmp46 = tmp45->y;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(859)
				tmp42->translate(tmp44,tmp46);
				HX_STACK_LINE(860)
				::flixel::graphics::frames::FlxFrame tmp47 = this->_frontFrame;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(860)
				::flixel::math::FlxMatrix tmp48 = this->_matrix;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(860)
				::openfl::_legacy::geom::ColorTransform tmp49 = this->colorTransform;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(860)
				::openfl::_legacy::display::BlendMode tmp50 = this->blend;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(860)
				bool tmp51 = this->antialiasing;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(860)
				Dynamic tmp52 = this->shader;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(860)
				camera->drawPixels(tmp47,null(),tmp48,tmp49,tmp50,tmp51,tmp52);
			}
		}
	}
return null();
}


::openfl::_legacy::display::BitmapData FlxBar_obj::set_pixels( ::openfl::_legacy::display::BitmapData Pixels){
	HX_STACK_FRAME("flixel.ui.FlxBar","set_pixels",0x3c70e2cf,"flixel.ui.FlxBar.set_pixels","flixel/ui/FlxBar.hx",866,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Pixels,"Pixels")
	HX_STACK_LINE(867)
	bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(867)
	if ((tmp)){
		HX_STACK_LINE(869)
		::openfl::_legacy::display::BitmapData tmp1 = Pixels;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(869)
		return tmp1;
	}
	else{
		HX_STACK_LINE(873)
		::openfl::_legacy::display::BitmapData tmp1 = Pixels;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(873)
		::openfl::_legacy::display::BitmapData tmp2 = this->super::set_pixels(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(873)
		return tmp2;
	}
	HX_STACK_LINE(867)
	return null();
}


::String FlxBar_obj::toString( ){
	HX_STACK_FRAME("flixel.ui.FlxBar","toString",0x909c22d1,"flixel.ui.FlxBar.toString","flixel/ui/FlxBar.hx",878,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(880)
	::flixel::util::LabelValuePair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(880)
	{
		HX_STACK_LINE(880)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp1 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(880)
		::flixel::util::LabelValuePair tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(880)
		::flixel::util::LabelValuePair _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(880)
		_this->label = HX_HCSTRING("min","\x92","\x11","\x53","\x00");
		HX_STACK_LINE(880)
		Float tmp3 = this->min;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(880)
		_this->value = tmp3;
		HX_STACK_LINE(880)
		tmp = _this;
	}
	HX_STACK_LINE(881)
	::flixel::util::LabelValuePair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(881)
	{
		HX_STACK_LINE(881)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp2 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(881)
		::flixel::util::LabelValuePair tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(881)
		::flixel::util::LabelValuePair _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(881)
		_this->label = HX_HCSTRING("max","\xa4","\x0a","\x53","\x00");
		HX_STACK_LINE(881)
		Float tmp4 = this->max;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(881)
		_this->value = tmp4;
		HX_STACK_LINE(881)
		tmp1 = _this;
	}
	HX_STACK_LINE(882)
	::flixel::util::LabelValuePair tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(882)
	{
		HX_STACK_LINE(882)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp3 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(882)
		::flixel::util::LabelValuePair tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(882)
		::flixel::util::LabelValuePair _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(882)
		_this->label = HX_HCSTRING("range","\xbd","\xa5","\x1f","\xe4");
		HX_STACK_LINE(882)
		Float tmp5 = this->range;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(882)
		_this->value = tmp5;
		HX_STACK_LINE(882)
		tmp2 = _this;
	}
	HX_STACK_LINE(883)
	::flixel::util::LabelValuePair tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(883)
	{
		HX_STACK_LINE(883)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp4 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(883)
		::flixel::util::LabelValuePair tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(883)
		::flixel::util::LabelValuePair _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(883)
		_this->label = HX_HCSTRING("%","\x25","\x00","\x00","\x00");
		HX_STACK_LINE(883)
		Float tmp6 = this->pct;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(883)
		_this->value = tmp6;
		HX_STACK_LINE(883)
		tmp3 = _this;
	}
	HX_STACK_LINE(884)
	::flixel::util::LabelValuePair tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(884)
	{
		HX_STACK_LINE(884)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp5 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(884)
		::flixel::util::LabelValuePair tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(884)
		::flixel::util::LabelValuePair _this = tmp6;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(884)
		_this->label = HX_HCSTRING("px/%","\x1e","\x1d","\x63","\x4a");
		HX_STACK_LINE(884)
		Float tmp7 = this->pxPerPercent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(884)
		_this->value = tmp7;
		HX_STACK_LINE(884)
		tmp4 = _this;
	}
	HX_STACK_LINE(885)
	::flixel::util::LabelValuePair tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(885)
	{
		HX_STACK_LINE(885)
		Float tmp6 = this->get_value();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(885)
		Dynamic value = tmp6;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(885)
		{
			HX_STACK_LINE(885)
			::flixel::util::FlxPool_flixel_util_LabelValuePair tmp7 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(885)
			::flixel::util::LabelValuePair tmp8 = tmp7->get();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(885)
			::flixel::util::LabelValuePair _this = tmp8;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(885)
			_this->label = HX_HCSTRING("value","\x71","\x7f","\xb8","\x31");
			HX_STACK_LINE(885)
			_this->value = value;
			HX_STACK_LINE(885)
			tmp5 = _this;
		}
	}
	HX_STACK_LINE(879)
	::String tmp6 = ::flixel::util::FlxStringUtil_obj::getDebugString(Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4).Add(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(879)
	return tmp6;
}


Float FlxBar_obj::get_percent( ){
	HX_STACK_FRAME("flixel.ui.FlxBar","get_percent",0x8cbbddd7,"flixel.ui.FlxBar.get_percent","flixel/ui/FlxBar.hx",889,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(890)
	Float tmp = this->get_value();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(890)
	Float tmp1 = this->max;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(890)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(890)
	if ((tmp2)){
		HX_STACK_LINE(892)
		int tmp3 = this->_maxPercent;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(892)
		return tmp3;
	}
	HX_STACK_LINE(895)
	Float tmp3 = this->get_value();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(895)
	Float tmp4 = this->min;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(895)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(895)
	Float tmp6 = this->range;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(895)
	Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(895)
	int tmp8 = this->_maxPercent;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(895)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(895)
	int tmp10 = ::Math_obj::floor(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(895)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,get_percent,return )

Float FlxBar_obj::set_percent( Float newPct){
	HX_STACK_FRAME("flixel.ui.FlxBar","set_percent",0x9728e4e3,"flixel.ui.FlxBar.set_percent","flixel/ui/FlxBar.hx",899,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newPct,"newPct")
	HX_STACK_LINE(900)
	bool tmp = (newPct >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(900)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(900)
	if ((tmp)){
		HX_STACK_LINE(900)
		Float tmp2 = newPct;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(900)
		int tmp3 = this->_maxPercent;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(900)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(900)
		tmp1 = (tmp2 <= tmp4);
	}
	else{
		HX_STACK_LINE(900)
		tmp1 = false;
	}
	HX_STACK_LINE(900)
	if ((tmp1)){
		HX_STACK_LINE(902)
		Float tmp2 = this->pct;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(902)
		Float tmp3 = newPct;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(902)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(902)
		this->set_value(tmp4);
	}
	HX_STACK_LINE(904)
	Float tmp2 = newPct;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(904)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,set_percent,return )

Float FlxBar_obj::set_value( Float newValue){
	HX_STACK_FRAME("flixel.ui.FlxBar","set_value",0x282d560f,"flixel.ui.FlxBar.set_value","flixel/ui/FlxBar.hx",908,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newValue,"newValue")
	HX_STACK_LINE(909)
	Float tmp = this->min;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(909)
	Float tmp1 = newValue;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(909)
	Float tmp2 = this->max;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(909)
	Float tmp3 = ::Math_obj::min(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(909)
	Float tmp4 = ::Math_obj::max(tmp,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(909)
	this->value = tmp4;
	HX_STACK_LINE(911)
	Float tmp5 = this->get_value();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(911)
	Float tmp6 = this->min;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(911)
	bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(911)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(911)
	if ((tmp7)){
		HX_STACK_LINE(911)
		Dynamic tmp9 = this->emptyCallback_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(911)
		Dynamic tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(911)
		tmp8 = (tmp10 != null());
	}
	else{
		HX_STACK_LINE(911)
		tmp8 = false;
	}
	HX_STACK_LINE(911)
	if ((tmp8)){
		HX_STACK_LINE(913)
		this->emptyCallback();
	}
	HX_STACK_LINE(916)
	Float tmp9 = this->get_value();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(916)
	Float tmp10 = this->max;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(916)
	bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(916)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(916)
	if ((tmp11)){
		HX_STACK_LINE(916)
		Dynamic tmp13 = this->filledCallback_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(916)
		Dynamic tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(916)
		tmp12 = (tmp14 != null());
	}
	else{
		HX_STACK_LINE(916)
		tmp12 = false;
	}
	HX_STACK_LINE(916)
	if ((tmp12)){
		HX_STACK_LINE(918)
		this->filledCallback();
	}
	HX_STACK_LINE(921)
	Float tmp13 = this->get_value();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(921)
	Float tmp14 = this->min;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(921)
	bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(921)
	bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(921)
	if ((tmp15)){
		HX_STACK_LINE(921)
		tmp16 = this->killOnEmpty;
	}
	else{
		HX_STACK_LINE(921)
		tmp16 = false;
	}
	HX_STACK_LINE(921)
	if ((tmp16)){
		HX_STACK_LINE(923)
		this->kill();
	}
	HX_STACK_LINE(926)
	this->updateBar();
	HX_STACK_LINE(927)
	Float tmp17 = newValue;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(927)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,set_value,return )

Float FlxBar_obj::get_value( ){
	HX_STACK_FRAME("flixel.ui.FlxBar","get_value",0x44dc6a03,"flixel.ui.FlxBar.get_value","flixel/ui/FlxBar.hx",931,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(939)
	Float tmp = this->value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(939)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,get_value,return )

int FlxBar_obj::set_numDivisions( int newValue){
	HX_STACK_FRAME("flixel.ui.FlxBar","set_numDivisions",0x1f308ca2,"flixel.ui.FlxBar.set_numDivisions","flixel/ui/FlxBar.hx",943,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newValue,"newValue")
	HX_STACK_LINE(944)
	bool tmp = (newValue > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(944)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(944)
	if ((tmp)){
		HX_STACK_LINE(944)
		tmp1 = newValue;
	}
	else{
		HX_STACK_LINE(944)
		tmp1 = (int)100;
	}
	HX_STACK_LINE(944)
	this->numDivisions = tmp1;
	HX_STACK_LINE(945)
	this->updateFilledBar();
	HX_STACK_LINE(946)
	int tmp2 = newValue;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(946)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,set_numDivisions,return )

::flixel::graphics::frames::FlxImageFrame FlxBar_obj::get_frontFrames( ){
	HX_STACK_FRAME("flixel.ui.FlxBar","get_frontFrames",0xa222c541,"flixel.ui.FlxBar.get_frontFrames","flixel/ui/FlxBar.hx",950,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(951)
	bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(951)
	if ((tmp)){
		HX_STACK_LINE(953)
		::flixel::graphics::frames::FlxImageFrame tmp1 = this->frontFrames;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(953)
		return tmp1;
	}
	HX_STACK_LINE(955)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,get_frontFrames,return )

::flixel::graphics::frames::FlxImageFrame FlxBar_obj::set_frontFrames( ::flixel::graphics::frames::FlxImageFrame value){
	HX_STACK_FRAME("flixel.ui.FlxBar","set_frontFrames",0x9dee424d,"flixel.ui.FlxBar.set_frontFrames","flixel/ui/FlxBar.hx",959,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(960)
	bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(960)
	if ((tmp)){
		HX_STACK_LINE(962)
		this->frontFrames = value;
		HX_STACK_LINE(963)
		bool tmp1 = (value != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(963)
		::flixel::graphics::frames::FlxFrame tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(963)
		if ((tmp1)){
			HX_STACK_LINE(963)
			::flixel::graphics::frames::FlxFrame tmp3 = value->get_frame();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(963)
			::flixel::graphics::frames::FlxFrame tmp4 = this->_frontFrame;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(963)
			tmp2 = tmp3->copyTo(tmp4);
		}
		else{
			HX_STACK_LINE(963)
			tmp2 = null();
		}
		HX_STACK_LINE(963)
		this->_frontFrame = tmp2;
	}
	else{
		HX_STACK_LINE(967)
		::flixel::graphics::frames::FlxFrame tmp1 = value->get_frame();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(967)
		::openfl::_legacy::display::BitmapData tmp2 = tmp1->paint(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(967)
		this->createImageFilledBar(tmp2,null());
	}
	HX_STACK_LINE(970)
	::flixel::graphics::frames::FlxImageFrame tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(970)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,set_frontFrames,return )

::flixel::graphics::frames::FlxImageFrame FlxBar_obj::get_backFrames( ){
	HX_STACK_FRAME("flixel.ui.FlxBar","get_backFrames",0x7b96195b,"flixel.ui.FlxBar.get_backFrames","flixel/ui/FlxBar.hx",974,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(975)
	bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(975)
	if ((tmp)){
		HX_STACK_LINE(977)
		::flixel::graphics::frames::FlxFramesCollection tmp1 = this->frames;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(977)
		::flixel::graphics::frames::FlxImageFrame tmp2 = ((::flixel::graphics::frames::FlxImageFrame)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(977)
		return tmp2;
	}
	HX_STACK_LINE(979)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,get_backFrames,return )

::flixel::graphics::frames::FlxImageFrame FlxBar_obj::set_backFrames( ::flixel::graphics::frames::FlxImageFrame value){
	HX_STACK_FRAME("flixel.ui.FlxBar","set_backFrames",0x9bb601cf,"flixel.ui.FlxBar.set_backFrames","flixel/ui/FlxBar.hx",983,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(984)
	bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(984)
	if ((tmp)){
		HX_STACK_LINE(986)
		::flixel::graphics::frames::FlxImageFrame tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(986)
		this->set_frames(tmp1);
	}
	else{
		HX_STACK_LINE(990)
		::flixel::graphics::frames::FlxFrame tmp1 = value->get_frame();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(990)
		::openfl::_legacy::display::BitmapData tmp2 = tmp1->paint(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(990)
		this->createImageEmptyBar(tmp2,null());
	}
	HX_STACK_LINE(992)
	::flixel::graphics::frames::FlxImageFrame tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(992)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,set_backFrames,return )


FlxBar_obj::FlxBar_obj()
{
}

void FlxBar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBar);
	HX_MARK_MEMBER_NAME(fixedPosition,"fixedPosition");
	HX_MARK_MEMBER_NAME(pxPerPercent,"pxPerPercent");
	HX_MARK_MEMBER_NAME(positionOffset,"positionOffset");
	HX_MARK_MEMBER_NAME(killOnEmpty,"killOnEmpty");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(min,"min");
	HX_MARK_MEMBER_NAME(max,"max");
	HX_MARK_MEMBER_NAME(range,"range");
	HX_MARK_MEMBER_NAME(pct,"pct");
	HX_MARK_MEMBER_NAME(numDivisions,"numDivisions");
	HX_MARK_MEMBER_NAME(emptyCallback,"emptyCallback");
	HX_MARK_MEMBER_NAME(filledCallback,"filledCallback");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(parentVariable,"parentVariable");
	HX_MARK_MEMBER_NAME(barWidth,"barWidth");
	HX_MARK_MEMBER_NAME(barHeight,"barHeight");
	HX_MARK_MEMBER_NAME(frontFrames,"frontFrames");
	HX_MARK_MEMBER_NAME(fillDirection,"fillDirection");
	HX_MARK_MEMBER_NAME(_fillHorizontal,"_fillHorizontal");
	HX_MARK_MEMBER_NAME(_frontFrame,"_frontFrame");
	HX_MARK_MEMBER_NAME(_filledFlxRect,"_filledFlxRect");
	HX_MARK_MEMBER_NAME(_emptyBar,"_emptyBar");
	HX_MARK_MEMBER_NAME(_emptyBarRect,"_emptyBarRect");
	HX_MARK_MEMBER_NAME(_filledBar,"_filledBar");
	HX_MARK_MEMBER_NAME(_zeroOffset,"_zeroOffset");
	HX_MARK_MEMBER_NAME(_filledBarRect,"_filledBarRect");
	HX_MARK_MEMBER_NAME(_filledBarPoint,"_filledBarPoint");
	HX_MARK_MEMBER_NAME(_maxPercent,"_maxPercent");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxBar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fixedPosition,"fixedPosition");
	HX_VISIT_MEMBER_NAME(pxPerPercent,"pxPerPercent");
	HX_VISIT_MEMBER_NAME(positionOffset,"positionOffset");
	HX_VISIT_MEMBER_NAME(killOnEmpty,"killOnEmpty");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(min,"min");
	HX_VISIT_MEMBER_NAME(max,"max");
	HX_VISIT_MEMBER_NAME(range,"range");
	HX_VISIT_MEMBER_NAME(pct,"pct");
	HX_VISIT_MEMBER_NAME(numDivisions,"numDivisions");
	HX_VISIT_MEMBER_NAME(emptyCallback,"emptyCallback");
	HX_VISIT_MEMBER_NAME(filledCallback,"filledCallback");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(parentVariable,"parentVariable");
	HX_VISIT_MEMBER_NAME(barWidth,"barWidth");
	HX_VISIT_MEMBER_NAME(barHeight,"barHeight");
	HX_VISIT_MEMBER_NAME(frontFrames,"frontFrames");
	HX_VISIT_MEMBER_NAME(fillDirection,"fillDirection");
	HX_VISIT_MEMBER_NAME(_fillHorizontal,"_fillHorizontal");
	HX_VISIT_MEMBER_NAME(_frontFrame,"_frontFrame");
	HX_VISIT_MEMBER_NAME(_filledFlxRect,"_filledFlxRect");
	HX_VISIT_MEMBER_NAME(_emptyBar,"_emptyBar");
	HX_VISIT_MEMBER_NAME(_emptyBarRect,"_emptyBarRect");
	HX_VISIT_MEMBER_NAME(_filledBar,"_filledBar");
	HX_VISIT_MEMBER_NAME(_zeroOffset,"_zeroOffset");
	HX_VISIT_MEMBER_NAME(_filledBarRect,"_filledBarRect");
	HX_VISIT_MEMBER_NAME(_filledBarPoint,"_filledBarPoint");
	HX_VISIT_MEMBER_NAME(_maxPercent,"_maxPercent");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxBar_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { return min; }
		if (HX_FIELD_EQ(inName,"max") ) { return max; }
		if (HX_FIELD_EQ(inName,"pct") ) { return pct; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return inCallProp == hx::paccAlways ? get_value() : value; }
		if (HX_FIELD_EQ(inName,"range") ) { return range; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"percent") ) { if (inCallProp == hx::paccAlways) return get_percent(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"barWidth") ) { return barWidth; }
		if (HX_FIELD_EQ(inName,"setRange") ) { return setRange_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"barHeight") ) { return barHeight; }
		if (HX_FIELD_EQ(inName,"_emptyBar") ) { return _emptyBar; }
		if (HX_FIELD_EQ(inName,"setParent") ) { return setParent_dyn(); }
		if (HX_FIELD_EQ(inName,"updateBar") ) { return updateBar_dyn(); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return set_value_dyn(); }
		if (HX_FIELD_EQ(inName,"get_value") ) { return get_value_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backFrames") ) { if (inCallProp == hx::paccAlways) return get_backFrames(); }
		if (HX_FIELD_EQ(inName,"_filledBar") ) { return _filledBar; }
		if (HX_FIELD_EQ(inName,"set_pixels") ) { return set_pixels_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"killOnEmpty") ) { return killOnEmpty; }
		if (HX_FIELD_EQ(inName,"frontFrames") ) { return inCallProp == hx::paccAlways ? get_frontFrames() : frontFrames; }
		if (HX_FIELD_EQ(inName,"_frontFrame") ) { return _frontFrame; }
		if (HX_FIELD_EQ(inName,"_zeroOffset") ) { return _zeroOffset; }
		if (HX_FIELD_EQ(inName,"_maxPercent") ) { return _maxPercent; }
		if (HX_FIELD_EQ(inName,"trackParent") ) { return trackParent_dyn(); }
		if (HX_FIELD_EQ(inName,"get_percent") ) { return get_percent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_percent") ) { return set_percent_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pxPerPercent") ) { return pxPerPercent; }
		if (HX_FIELD_EQ(inName,"numDivisions") ) { return numDivisions; }
		if (HX_FIELD_EQ(inName,"setCallbacks") ) { return setCallbacks_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fixedPosition") ) { return fixedPosition; }
		if (HX_FIELD_EQ(inName,"emptyCallback") ) { return emptyCallback; }
		if (HX_FIELD_EQ(inName,"fillDirection") ) { return fillDirection; }
		if (HX_FIELD_EQ(inName,"_emptyBarRect") ) { return _emptyBarRect; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"positionOffset") ) { return positionOffset; }
		if (HX_FIELD_EQ(inName,"filledCallback") ) { return filledCallback; }
		if (HX_FIELD_EQ(inName,"parentVariable") ) { return parentVariable; }
		if (HX_FIELD_EQ(inName,"_filledFlxRect") ) { return _filledFlxRect; }
		if (HX_FIELD_EQ(inName,"_filledBarRect") ) { return _filledBarRect; }
		if (HX_FIELD_EQ(inName,"createImageBar") ) { return createImageBar_dyn(); }
		if (HX_FIELD_EQ(inName,"updateEmptyBar") ) { return updateEmptyBar_dyn(); }
		if (HX_FIELD_EQ(inName,"get_backFrames") ) { return get_backFrames_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backFrames") ) { return set_backFrames_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fillHorizontal") ) { return _fillHorizontal; }
		if (HX_FIELD_EQ(inName,"_filledBarPoint") ) { return _filledBarPoint; }
		if (HX_FIELD_EQ(inName,"createFilledBar") ) { return createFilledBar_dyn(); }
		if (HX_FIELD_EQ(inName,"updateFilledBar") ) { return updateFilledBar_dyn(); }
		if (HX_FIELD_EQ(inName,"get_frontFrames") ) { return get_frontFrames_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frontFrames") ) { return set_frontFrames_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_numDivisions") ) { return set_numDivisions_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createGradientBar") ) { return createGradientBar_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fillDirection") ) { return set_fillDirection_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stopTrackingParent") ) { return stopTrackingParent_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"createImageEmptyBar") ) { return createImageEmptyBar_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createImageFilledBar") ) { return createImageFilledBar_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createColoredEmptyBar") ) { return createColoredEmptyBar_dyn(); }
		if (HX_FIELD_EQ(inName,"updateValueFromParent") ) { return updateValueFromParent_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"createColoredFilledBar") ) { return createColoredFilledBar_dyn(); }
		if (HX_FIELD_EQ(inName,"createGradientEmptyBar") ) { return createGradientEmptyBar_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"createGradientFilledBar") ) { return createGradientFilledBar_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBar_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { min=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max") ) { max=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pct") ) { pct=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == hx::paccAlways) return set_value(inValue);value=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"range") ) { range=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"percent") ) { if (inCallProp == hx::paccAlways) return set_percent(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"barWidth") ) { barWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"barHeight") ) { barHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_emptyBar") ) { _emptyBar=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backFrames") ) { if (inCallProp == hx::paccAlways) return set_backFrames(inValue); }
		if (HX_FIELD_EQ(inName,"_filledBar") ) { _filledBar=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"killOnEmpty") ) { killOnEmpty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frontFrames") ) { if (inCallProp == hx::paccAlways) return set_frontFrames(inValue);frontFrames=inValue.Cast< ::flixel::graphics::frames::FlxImageFrame >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_frontFrame") ) { _frontFrame=inValue.Cast< ::flixel::graphics::frames::FlxFrame >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_zeroOffset") ) { _zeroOffset=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxPercent") ) { _maxPercent=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pxPerPercent") ) { pxPerPercent=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numDivisions") ) { if (inCallProp == hx::paccAlways) return set_numDivisions(inValue);numDivisions=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fixedPosition") ) { fixedPosition=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"emptyCallback") ) { emptyCallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fillDirection") ) { if (inCallProp == hx::paccAlways) return set_fillDirection(inValue);fillDirection=inValue.Cast< ::flixel::ui::FlxBarFillDirection >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_emptyBarRect") ) { _emptyBarRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"positionOffset") ) { positionOffset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filledCallback") ) { filledCallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parentVariable") ) { parentVariable=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_filledFlxRect") ) { _filledFlxRect=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_filledBarRect") ) { _filledBarRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fillHorizontal") ) { _fillHorizontal=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_filledBarPoint") ) { _filledBarPoint=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("fixedPosition","\x3d","\xea","\xd2","\x12"));
	outFields->push(HX_HCSTRING("pxPerPercent","\x90","\xc3","\x28","\x3b"));
	outFields->push(HX_HCSTRING("positionOffset","\x1c","\x11","\x32","\xb5"));
	outFields->push(HX_HCSTRING("killOnEmpty","\xf0","\x70","\x0b","\xae"));
	outFields->push(HX_HCSTRING("percent","\xc5","\xaa","\xda","\x78"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("min","\x92","\x11","\x53","\x00"));
	outFields->push(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("range","\xbd","\xa5","\x1f","\xe4"));
	outFields->push(HX_HCSTRING("pct","\x21","\x53","\x55","\x00"));
	outFields->push(HX_HCSTRING("numDivisions","\x80","\x33","\x9c","\x26"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("parentVariable","\x86","\x0d","\xe5","\x30"));
	outFields->push(HX_HCSTRING("barWidth","\x33","\xf7","\x30","\x99"));
	outFields->push(HX_HCSTRING("barHeight","\x1a","\xce","\xf6","\x27"));
	outFields->push(HX_HCSTRING("frontFrames","\x2f","\xa1","\xf5","\xbc"));
	outFields->push(HX_HCSTRING("backFrames","\x2d","\x95","\x0f","\xeb"));
	outFields->push(HX_HCSTRING("fillDirection","\x3c","\x0b","\x89","\xf1"));
	outFields->push(HX_HCSTRING("_fillHorizontal","\xe6","\x79","\x6f","\x9d"));
	outFields->push(HX_HCSTRING("_frontFrame","\xe3","\x97","\xe5","\x05"));
	outFields->push(HX_HCSTRING("_filledFlxRect","\x75","\x41","\xba","\xea"));
	outFields->push(HX_HCSTRING("_emptyBar","\xa5","\x7c","\xc1","\x6f"));
	outFields->push(HX_HCSTRING("_emptyBarRect","\x69","\xac","\xcd","\xcb"));
	outFields->push(HX_HCSTRING("_filledBar","\x12","\x89","\xe0","\x00"));
	outFields->push(HX_HCSTRING("_zeroOffset","\xfa","\xb5","\x5e","\xc4"));
	outFields->push(HX_HCSTRING("_filledBarRect","\x56","\xf3","\x0f","\x6a"));
	outFields->push(HX_HCSTRING("_filledBarPoint","\xde","\x79","\xb8","\x43"));
	outFields->push(HX_HCSTRING("_maxPercent","\xa0","\xf1","\x88","\xb5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxBar_obj,fixedPosition),HX_HCSTRING("fixedPosition","\x3d","\xea","\xd2","\x12")},
	{hx::fsFloat,(int)offsetof(FlxBar_obj,pxPerPercent),HX_HCSTRING("pxPerPercent","\x90","\xc3","\x28","\x3b")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxBar_obj,positionOffset),HX_HCSTRING("positionOffset","\x1c","\x11","\x32","\xb5")},
	{hx::fsBool,(int)offsetof(FlxBar_obj,killOnEmpty),HX_HCSTRING("killOnEmpty","\xf0","\x70","\x0b","\xae")},
	{hx::fsFloat,(int)offsetof(FlxBar_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{hx::fsFloat,(int)offsetof(FlxBar_obj,min),HX_HCSTRING("min","\x92","\x11","\x53","\x00")},
	{hx::fsFloat,(int)offsetof(FlxBar_obj,max),HX_HCSTRING("max","\xa4","\x0a","\x53","\x00")},
	{hx::fsFloat,(int)offsetof(FlxBar_obj,range),HX_HCSTRING("range","\xbd","\xa5","\x1f","\xe4")},
	{hx::fsFloat,(int)offsetof(FlxBar_obj,pct),HX_HCSTRING("pct","\x21","\x53","\x55","\x00")},
	{hx::fsInt,(int)offsetof(FlxBar_obj,numDivisions),HX_HCSTRING("numDivisions","\x80","\x33","\x9c","\x26")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxBar_obj,emptyCallback),HX_HCSTRING("emptyCallback","\x72","\x65","\x53","\x13")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxBar_obj,filledCallback),HX_HCSTRING("filledCallback","\x87","\xd5","\x00","\xe4")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxBar_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsString,(int)offsetof(FlxBar_obj,parentVariable),HX_HCSTRING("parentVariable","\x86","\x0d","\xe5","\x30")},
	{hx::fsInt,(int)offsetof(FlxBar_obj,barWidth),HX_HCSTRING("barWidth","\x33","\xf7","\x30","\x99")},
	{hx::fsInt,(int)offsetof(FlxBar_obj,barHeight),HX_HCSTRING("barHeight","\x1a","\xce","\xf6","\x27")},
	{hx::fsObject /*::flixel::graphics::frames::FlxImageFrame*/ ,(int)offsetof(FlxBar_obj,frontFrames),HX_HCSTRING("frontFrames","\x2f","\xa1","\xf5","\xbc")},
	{hx::fsObject /*::flixel::ui::FlxBarFillDirection*/ ,(int)offsetof(FlxBar_obj,fillDirection),HX_HCSTRING("fillDirection","\x3c","\x0b","\x89","\xf1")},
	{hx::fsBool,(int)offsetof(FlxBar_obj,_fillHorizontal),HX_HCSTRING("_fillHorizontal","\xe6","\x79","\x6f","\x9d")},
	{hx::fsObject /*::flixel::graphics::frames::FlxFrame*/ ,(int)offsetof(FlxBar_obj,_frontFrame),HX_HCSTRING("_frontFrame","\xe3","\x97","\xe5","\x05")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxBar_obj,_filledFlxRect),HX_HCSTRING("_filledFlxRect","\x75","\x41","\xba","\xea")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxBar_obj,_emptyBar),HX_HCSTRING("_emptyBar","\xa5","\x7c","\xc1","\x6f")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(FlxBar_obj,_emptyBarRect),HX_HCSTRING("_emptyBarRect","\x69","\xac","\xcd","\xcb")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxBar_obj,_filledBar),HX_HCSTRING("_filledBar","\x12","\x89","\xe0","\x00")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxBar_obj,_zeroOffset),HX_HCSTRING("_zeroOffset","\xfa","\xb5","\x5e","\xc4")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(FlxBar_obj,_filledBarRect),HX_HCSTRING("_filledBarRect","\x56","\xf3","\x0f","\x6a")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxBar_obj,_filledBarPoint),HX_HCSTRING("_filledBarPoint","\xde","\x79","\xb8","\x43")},
	{hx::fsInt,(int)offsetof(FlxBar_obj,_maxPercent),HX_HCSTRING("_maxPercent","\xa0","\xf1","\x88","\xb5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("fixedPosition","\x3d","\xea","\xd2","\x12"),
	HX_HCSTRING("pxPerPercent","\x90","\xc3","\x28","\x3b"),
	HX_HCSTRING("positionOffset","\x1c","\x11","\x32","\xb5"),
	HX_HCSTRING("killOnEmpty","\xf0","\x70","\x0b","\xae"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("min","\x92","\x11","\x53","\x00"),
	HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"),
	HX_HCSTRING("range","\xbd","\xa5","\x1f","\xe4"),
	HX_HCSTRING("pct","\x21","\x53","\x55","\x00"),
	HX_HCSTRING("numDivisions","\x80","\x33","\x9c","\x26"),
	HX_HCSTRING("emptyCallback","\x72","\x65","\x53","\x13"),
	HX_HCSTRING("filledCallback","\x87","\xd5","\x00","\xe4"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("parentVariable","\x86","\x0d","\xe5","\x30"),
	HX_HCSTRING("barWidth","\x33","\xf7","\x30","\x99"),
	HX_HCSTRING("barHeight","\x1a","\xce","\xf6","\x27"),
	HX_HCSTRING("frontFrames","\x2f","\xa1","\xf5","\xbc"),
	HX_HCSTRING("fillDirection","\x3c","\x0b","\x89","\xf1"),
	HX_HCSTRING("_fillHorizontal","\xe6","\x79","\x6f","\x9d"),
	HX_HCSTRING("_frontFrame","\xe3","\x97","\xe5","\x05"),
	HX_HCSTRING("_filledFlxRect","\x75","\x41","\xba","\xea"),
	HX_HCSTRING("_emptyBar","\xa5","\x7c","\xc1","\x6f"),
	HX_HCSTRING("_emptyBarRect","\x69","\xac","\xcd","\xcb"),
	HX_HCSTRING("_filledBar","\x12","\x89","\xe0","\x00"),
	HX_HCSTRING("_zeroOffset","\xfa","\xb5","\x5e","\xc4"),
	HX_HCSTRING("_filledBarRect","\x56","\xf3","\x0f","\x6a"),
	HX_HCSTRING("_filledBarPoint","\xde","\x79","\xb8","\x43"),
	HX_HCSTRING("_maxPercent","\xa0","\xf1","\x88","\xb5"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("trackParent","\x15","\x02","\x78","\x95"),
	HX_HCSTRING("setParent","\x6c","\x7a","\x25","\x4d"),
	HX_HCSTRING("stopTrackingParent","\x63","\xe7","\x80","\x2a"),
	HX_HCSTRING("setCallbacks","\x0c","\xb3","\x0f","\xcb"),
	HX_HCSTRING("setRange","\xbb","\x0e","\x54","\xf2"),
	HX_HCSTRING("createFilledBar","\xb5","\xc6","\x32","\x46"),
	HX_HCSTRING("createColoredEmptyBar","\x4c","\x98","\x6a","\xaf"),
	HX_HCSTRING("createColoredFilledBar","\x8b","\x9f","\x2f","\x75"),
	HX_HCSTRING("createGradientBar","\x27","\xe0","\xc0","\x25"),
	HX_HCSTRING("createGradientEmptyBar","\x72","\xe6","\x88","\x77"),
	HX_HCSTRING("createGradientFilledBar","\xa5","\xb2","\x95","\xc7"),
	HX_HCSTRING("createImageBar","\x54","\x94","\x67","\xd6"),
	HX_HCSTRING("createImageEmptyBar","\x25","\xef","\x24","\xe8"),
	HX_HCSTRING("createImageFilledBar","\x92","\x46","\x81","\xdf"),
	HX_HCSTRING("set_fillDirection","\x9f","\xee","\x66","\x1b"),
	HX_HCSTRING("updateValueFromParent","\xfc","\x58","\xec","\xa5"),
	HX_HCSTRING("updateBar","\x4a","\x8f","\xd7","\x82"),
	HX_HCSTRING("updateEmptyBar","\x6f","\x78","\x55","\x5d"),
	HX_HCSTRING("updateFilledBar","\x08","\xde","\xc8","\xf4"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("set_pixels","\x6a","\xfd","\xae","\x80"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("get_percent","\xdc","\x0a","\xd5","\xfe"),
	HX_HCSTRING("set_percent","\xe8","\x11","\x42","\x09"),
	HX_HCSTRING("set_value","\xd4","\xc7","\xb2","\x58"),
	HX_HCSTRING("get_value","\xc8","\xdb","\x61","\x75"),
	HX_HCSTRING("set_numDivisions","\x7d","\x0d","\x7d","\x81"),
	HX_HCSTRING("get_frontFrames","\xc6","\x58","\xd7","\x7d"),
	HX_HCSTRING("set_frontFrames","\xd2","\xd5","\xa2","\x79"),
	HX_HCSTRING("get_backFrames","\x76","\x1d","\x05","\x61"),
	HX_HCSTRING("set_backFrames","\xea","\x05","\x25","\x81"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBar_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBar_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxBar_obj::__mClass;

void FlxBar_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.ui.FlxBar","\xe9","\xe6","\x0d","\x71");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxBar_obj >;
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
} // end namespace ui
