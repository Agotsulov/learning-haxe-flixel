#include <hxcpp.h>

#include "hxMath.h"
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_math_FlxVelocity
#include <flixel/math/FlxVelocity.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPath
#include <flixel/util/FlxPath.h>
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
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
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
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
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
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{

Void FlxObject_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{
HX_STACK_FRAME("flixel.FlxObject","new",0x2aa4ec91,"flixel.FlxObject.new","flixel/FlxObject.hx",20,0xf0fe0d80)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Width,"Width")
HX_STACK_ARG(__o_Height,"Height")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
{
	struct _Function_1_1{
		inline static ::flixel::math::FlxRect Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",552,0xf0fe0d80)
			{
				HX_STACK_LINE(552)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(552)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(552)
				Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(552)
				Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(552)
				::flixel::math::FlxRect tmp;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(552)
				{
					HX_STACK_LINE(552)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp1 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(552)
					::flixel::math::FlxRect tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(552)
					::flixel::math::FlxRect _this = tmp2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(552)
					_this->x = X;
					HX_STACK_LINE(552)
					_this->y = Y;
					HX_STACK_LINE(552)
					_this->width = Width;
					HX_STACK_LINE(552)
					_this->height = Height;
					HX_STACK_LINE(552)
					tmp = _this;
				}
				HX_STACK_LINE(552)
				::flixel::math::FlxRect rect = tmp;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(552)
				rect->_inPool = false;
				HX_STACK_LINE(552)
				return rect;
			}
			return null();
		}
	};
	HX_STACK_LINE(552)
	this->_rect = _Function_1_1::Block();
	struct _Function_1_2{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",551,0xf0fe0d80)
			{
				HX_STACK_LINE(551)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(551)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(551)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(551)
				::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(551)
				Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(551)
				Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(551)
				::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(551)
				::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(551)
				point->_inPool = false;
				HX_STACK_LINE(551)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(551)
	this->_point = _Function_1_2::Block();
	HX_STACK_LINE(543)
	this->ignoreDrawDebug = false;
	HX_STACK_LINE(538)
	this->debugBoundingBoxColor = null();
	HX_STACK_LINE(532)
	this->collisonXDrag = true;
	HX_STACK_LINE(527)
	this->allowCollisions = (int)4369;
	HX_STACK_LINE(522)
	this->wasTouching = (int)0;
	HX_STACK_LINE(517)
	this->touching = (int)0;
	HX_STACK_LINE(512)
	this->health = ((Float)1);
	HX_STACK_LINE(508)
	this->maxAngular = ((Float)10000);
	HX_STACK_LINE(504)
	this->angularDrag = ((Float)0);
	HX_STACK_LINE(500)
	this->angularAcceleration = ((Float)0);
	HX_STACK_LINE(496)
	this->angularVelocity = ((Float)0);
	HX_STACK_LINE(492)
	this->elasticity = ((Float)0);
	HX_STACK_LINE(488)
	this->mass = ((Float)1);
	HX_STACK_LINE(449)
	this->immovable = false;
	HX_STACK_LINE(445)
	this->moves = true;
	HX_STACK_LINE(440)
	this->angle = ((Float)0);
	HX_STACK_LINE(435)
	this->pixelPerfectPosition = true;
	HX_STACK_LINE(414)
	this->y = ((Float)0);
	HX_STACK_LINE(410)
	this->x = ((Float)0);
	HX_STACK_LINE(562)
	super::__construct();
	HX_STACK_LINE(564)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(564)
	this->set_x(tmp);
	HX_STACK_LINE(565)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(565)
	this->set_y(tmp1);
	HX_STACK_LINE(566)
	Float tmp2 = Width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(566)
	this->set_width(tmp2);
	HX_STACK_LINE(567)
	Float tmp3 = Height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(567)
	this->set_height(tmp3);
	HX_STACK_LINE(569)
	this->initVars();
}
;
	return null();
}

//FlxObject_obj::~FlxObject_obj() { }

Dynamic FlxObject_obj::__CreateEmpty() { return  new FlxObject_obj; }
hx::ObjectPtr< FlxObject_obj > FlxObject_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{  hx::ObjectPtr< FlxObject_obj > _result_ = new FlxObject_obj();
	_result_->__construct(__o_X,__o_Y,__o_Width,__o_Height);
	return _result_;}

Dynamic FlxObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxObject_obj > _result_ = new FlxObject_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void FlxObject_obj::initVars( ){
{
		HX_STACK_FRAME("flixel.FlxObject","initVars",0xb8a66d0b,"flixel.FlxObject.initVars","flixel/FlxObject.hx",576,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(577)
		this->flixelType = (int)1;
		HX_STACK_LINE(578)
		::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(578)
		{
			HX_STACK_LINE(578)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp1 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(578)
			::flixel::math::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(578)
			Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(578)
			Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(578)
			::flixel::math::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(578)
			::flixel::math::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(578)
			point->_inPool = false;
			HX_STACK_LINE(578)
			tmp = point;
		}
		HX_STACK_LINE(578)
		this->last = tmp;
		HX_STACK_LINE(579)
		::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(579)
		{
			HX_STACK_LINE(579)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(579)
			::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(579)
			::flixel::math::FlxPoint tmp4 = tmp3->set((int)1,(int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(579)
			::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(579)
			point->_inPool = false;
			HX_STACK_LINE(579)
			tmp1 = point;
		}
		HX_STACK_LINE(579)
		this->scrollFactor = tmp1;
		HX_STACK_LINE(580)
		bool tmp2 = ::flixel::FlxObject_obj::defaultPixelPerfectPosition;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(580)
		this->pixelPerfectPosition = tmp2;
		HX_STACK_LINE(582)
		{
			HX_STACK_LINE(582)
			::flixel::math::FlxPoint tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(582)
			{
				HX_STACK_LINE(582)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(582)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(582)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp4 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(582)
				::flixel::math::FlxPoint tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(582)
				Float tmp6 = X;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(582)
				Float tmp7 = Y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(582)
				::flixel::math::FlxPoint tmp8 = tmp5->set(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(582)
				::flixel::math::FlxPoint point = tmp8;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(582)
				point->_inPool = false;
				HX_STACK_LINE(582)
				tmp3 = point;
			}
			HX_STACK_LINE(582)
			this->velocity = tmp3;
			HX_STACK_LINE(582)
			::flixel::math::FlxPoint tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(582)
			{
				HX_STACK_LINE(582)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(582)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(582)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp5 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(582)
				::flixel::math::FlxPoint tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(582)
				Float tmp7 = X;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(582)
				Float tmp8 = Y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(582)
				::flixel::math::FlxPoint tmp9 = tmp6->set(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(582)
				::flixel::math::FlxPoint point = tmp9;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(582)
				point->_inPool = false;
				HX_STACK_LINE(582)
				tmp4 = point;
			}
			HX_STACK_LINE(582)
			this->acceleration = tmp4;
			HX_STACK_LINE(582)
			::flixel::math::FlxPoint tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(582)
			{
				HX_STACK_LINE(582)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(582)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(582)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp6 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(582)
				::flixel::math::FlxPoint tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(582)
				Float tmp8 = X;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(582)
				Float tmp9 = Y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(582)
				::flixel::math::FlxPoint tmp10 = tmp7->set(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(582)
				::flixel::math::FlxPoint point = tmp10;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(582)
				point->_inPool = false;
				HX_STACK_LINE(582)
				tmp5 = point;
			}
			HX_STACK_LINE(582)
			this->drag = tmp5;
			HX_STACK_LINE(582)
			::flixel::math::FlxPoint tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(582)
			{
				HX_STACK_LINE(582)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp7 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(582)
				::flixel::math::FlxPoint tmp8 = tmp7->get();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(582)
				::flixel::math::FlxPoint tmp9 = tmp8->set((int)10000,(int)10000);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(582)
				::flixel::math::FlxPoint point = tmp9;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(582)
				point->_inPool = false;
				HX_STACK_LINE(582)
				tmp6 = point;
			}
			HX_STACK_LINE(582)
			this->maxVelocity = tmp6;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,initVars,(void))

Void FlxObject_obj::initMotionVars( ){
{
		HX_STACK_FRAME("flixel.FlxObject","initMotionVars",0xb01943a1,"flixel.FlxObject.initMotionVars","flixel/FlxObject.hx",589,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(590)
		::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(590)
		{
			HX_STACK_LINE(590)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(590)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(590)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp1 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(590)
			::flixel::math::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(590)
			Float tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(590)
			Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(590)
			::flixel::math::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(590)
			::flixel::math::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(590)
			point->_inPool = false;
			HX_STACK_LINE(590)
			tmp = point;
		}
		HX_STACK_LINE(590)
		this->velocity = tmp;
		HX_STACK_LINE(591)
		::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(591)
		{
			HX_STACK_LINE(591)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(591)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(591)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(591)
			::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(591)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(591)
			Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(591)
			::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(591)
			::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(591)
			point->_inPool = false;
			HX_STACK_LINE(591)
			tmp1 = point;
		}
		HX_STACK_LINE(591)
		this->acceleration = tmp1;
		HX_STACK_LINE(592)
		::flixel::math::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(592)
		{
			HX_STACK_LINE(592)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(592)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(592)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp3 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(592)
			::flixel::math::FlxPoint tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(592)
			Float tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(592)
			Float tmp6 = Y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(592)
			::flixel::math::FlxPoint tmp7 = tmp4->set(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(592)
			::flixel::math::FlxPoint point = tmp7;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(592)
			point->_inPool = false;
			HX_STACK_LINE(592)
			tmp2 = point;
		}
		HX_STACK_LINE(592)
		this->drag = tmp2;
		HX_STACK_LINE(593)
		::flixel::math::FlxPoint tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(593)
		{
			HX_STACK_LINE(593)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp4 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(593)
			::flixel::math::FlxPoint tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(593)
			::flixel::math::FlxPoint tmp6 = tmp5->set((int)10000,(int)10000);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(593)
			::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(593)
			point->_inPool = false;
			HX_STACK_LINE(593)
			tmp3 = point;
		}
		HX_STACK_LINE(593)
		this->maxVelocity = tmp3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,initMotionVars,(void))

Void FlxObject_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.FlxObject","destroy",0xba37b5ab,"flixel.FlxObject.destroy","flixel/FlxObject.hx",601,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(602)
		this->super::destroy();
		HX_STACK_LINE(604)
		::flixel::math::FlxPoint tmp = this->velocity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(604)
		::flixel::math::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(604)
		this->velocity = tmp1;
		HX_STACK_LINE(605)
		::flixel::math::FlxPoint tmp2 = this->acceleration;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(605)
		::flixel::math::FlxPoint tmp3 = ::flixel::util::FlxDestroyUtil_obj::put(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(605)
		this->acceleration = tmp3;
		HX_STACK_LINE(606)
		::flixel::math::FlxPoint tmp4 = this->drag;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(606)
		::flixel::math::FlxPoint tmp5 = ::flixel::util::FlxDestroyUtil_obj::put(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(606)
		this->drag = tmp5;
		HX_STACK_LINE(607)
		::flixel::math::FlxPoint tmp6 = this->maxVelocity;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(607)
		::flixel::math::FlxPoint tmp7 = ::flixel::util::FlxDestroyUtil_obj::put(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(607)
		this->maxVelocity = tmp7;
		HX_STACK_LINE(608)
		::flixel::math::FlxPoint tmp8 = this->scrollFactor;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(608)
		::flixel::math::FlxPoint tmp9 = ::flixel::util::FlxDestroyUtil_obj::put(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(608)
		this->scrollFactor = tmp9;
		HX_STACK_LINE(609)
		::flixel::math::FlxPoint tmp10 = this->last;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(609)
		::flixel::math::FlxPoint tmp11 = ::flixel::util::FlxDestroyUtil_obj::put(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(609)
		this->last = tmp11;
		HX_STACK_LINE(610)
		::flixel::math::FlxPoint tmp12 = this->_point;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(610)
		::flixel::math::FlxPoint tmp13 = ::flixel::util::FlxDestroyUtil_obj::put(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(610)
		this->_point = tmp13;
		HX_STACK_LINE(611)
		::flixel::math::FlxRect tmp14 = this->_rect;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(611)
		::flixel::math::FlxRect tmp15 = ::flixel::util::FlxDestroyUtil_obj::put(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(611)
		this->_rect = tmp15;
	}
return null();
}


Void FlxObject_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.FlxObject","update",0x87b15e78,"flixel.FlxObject.update","flixel/FlxObject.hx",619,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(622)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(622)
		this->super::update(tmp);
		HX_STACK_LINE(625)
		::flixel::math::FlxPoint tmp1 = this->last;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(625)
		Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(625)
		tmp1->set_x(tmp2);
		HX_STACK_LINE(626)
		::flixel::math::FlxPoint tmp3 = this->last;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(626)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(626)
		tmp3->set_y(tmp4);
		HX_STACK_LINE(628)
		::flixel::util::FlxPath tmp5 = this->path;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(628)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(628)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(628)
		if ((tmp6)){
			HX_STACK_LINE(628)
			::flixel::util::FlxPath tmp8 = this->path;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(628)
			::flixel::util::FlxPath tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(628)
			tmp7 = tmp9->active;
		}
		else{
			HX_STACK_LINE(628)
			tmp7 = false;
		}
		HX_STACK_LINE(628)
		if ((tmp7)){
			HX_STACK_LINE(629)
			::flixel::util::FlxPath tmp8 = this->path;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(629)
			Float tmp9 = elapsed;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(629)
			tmp8->update(tmp9);
		}
		HX_STACK_LINE(631)
		bool tmp8 = this->moves;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(631)
		if ((tmp8)){
			HX_STACK_LINE(632)
			Float tmp9 = elapsed;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(632)
			this->updateMotion(tmp9);
		}
		HX_STACK_LINE(634)
		int tmp9 = this->touching;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(634)
		this->wasTouching = tmp9;
		HX_STACK_LINE(635)
		this->touching = (int)0;
	}
return null();
}


Void FlxObject_obj::updateMotion( Float elapsed){
{
		HX_STACK_FRAME("flixel.FlxObject","updateMotion",0x420d82ce,"flixel.FlxObject.updateMotion","flixel/FlxObject.hx",643,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(644)
		Float tmp = this->angularVelocity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(644)
		Float tmp1 = this->angularAcceleration;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(644)
		Float tmp2 = this->angularDrag;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(644)
		Float tmp3 = this->maxAngular;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(644)
		Float tmp4 = elapsed;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(644)
		Float tmp5 = ::flixel::math::FlxVelocity_obj::computeVelocity(tmp,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(644)
		Float tmp6 = this->angularVelocity;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(644)
		Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(644)
		Float tmp8 = (((Float)0.5) * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(644)
		Float velocityDelta = tmp8;		HX_STACK_VAR(velocityDelta,"velocityDelta");
		HX_STACK_LINE(645)
		hx::AddEq(this->angularVelocity,velocityDelta);
		HX_STACK_LINE(646)
		{
			HX_STACK_LINE(646)
			::flixel::FlxObject _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(646)
			Float tmp9 = _g->angle;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(646)
			Float tmp10 = this->angularVelocity;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(646)
			Float tmp11 = elapsed;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(646)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(646)
			Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(646)
			_g->set_angle(tmp13);
		}
		HX_STACK_LINE(647)
		hx::AddEq(this->angularVelocity,velocityDelta);
		HX_STACK_LINE(649)
		::flixel::math::FlxPoint tmp9 = this->velocity;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(649)
		Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(649)
		::flixel::math::FlxPoint tmp11 = this->acceleration;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(649)
		Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(649)
		::flixel::math::FlxPoint tmp13 = this->drag;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(649)
		Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(649)
		::flixel::math::FlxPoint tmp15 = this->maxVelocity;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(649)
		Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(649)
		Float tmp17 = elapsed;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(649)
		Float tmp18 = ::flixel::math::FlxVelocity_obj::computeVelocity(tmp10,tmp12,tmp14,tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(649)
		::flixel::math::FlxPoint tmp19 = this->velocity;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(649)
		Float tmp20 = tmp19->x;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(649)
		Float tmp21 = (tmp18 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(649)
		Float tmp22 = (((Float)0.5) * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(649)
		velocityDelta = tmp22;
		HX_STACK_LINE(650)
		{
			HX_STACK_LINE(650)
			::flixel::math::FlxPoint tmp23 = this->velocity;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(650)
			::flixel::math::FlxPoint _g = tmp23;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(650)
			Float tmp24 = (_g->x + velocityDelta);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(650)
			_g->set_x(tmp24);
		}
		HX_STACK_LINE(651)
		::flixel::math::FlxPoint tmp23 = this->velocity;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(651)
		Float tmp24 = tmp23->x;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(651)
		Float tmp25 = elapsed;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(651)
		Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(651)
		Float delta = tmp26;		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(652)
		{
			HX_STACK_LINE(652)
			::flixel::math::FlxPoint tmp27 = this->velocity;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(652)
			::flixel::math::FlxPoint _g = tmp27;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(652)
			Float tmp28 = (_g->x + velocityDelta);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(652)
			_g->set_x(tmp28);
		}
		HX_STACK_LINE(653)
		{
			HX_STACK_LINE(653)
			::flixel::FlxObject _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(653)
			Float tmp27 = (_g->x + delta);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(653)
			_g->set_x(tmp27);
		}
		HX_STACK_LINE(655)
		::flixel::math::FlxPoint tmp27 = this->velocity;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(655)
		Float tmp28 = tmp27->y;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(655)
		::flixel::math::FlxPoint tmp29 = this->acceleration;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(655)
		Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(655)
		::flixel::math::FlxPoint tmp31 = this->drag;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(655)
		Float tmp32 = tmp31->y;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(655)
		::flixel::math::FlxPoint tmp33 = this->maxVelocity;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(655)
		Float tmp34 = tmp33->y;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(655)
		Float tmp35 = elapsed;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(655)
		Float tmp36 = ::flixel::math::FlxVelocity_obj::computeVelocity(tmp28,tmp30,tmp32,tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(655)
		::flixel::math::FlxPoint tmp37 = this->velocity;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(655)
		Float tmp38 = tmp37->y;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(655)
		Float tmp39 = (tmp36 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(655)
		Float tmp40 = (((Float)0.5) * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(655)
		velocityDelta = tmp40;
		HX_STACK_LINE(656)
		{
			HX_STACK_LINE(656)
			::flixel::math::FlxPoint tmp41 = this->velocity;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(656)
			::flixel::math::FlxPoint _g = tmp41;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(656)
			Float tmp42 = (_g->y + velocityDelta);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(656)
			_g->set_y(tmp42);
		}
		HX_STACK_LINE(657)
		::flixel::math::FlxPoint tmp41 = this->velocity;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(657)
		Float tmp42 = tmp41->y;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(657)
		Float tmp43 = elapsed;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(657)
		Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(657)
		delta = tmp44;
		HX_STACK_LINE(658)
		{
			HX_STACK_LINE(658)
			::flixel::math::FlxPoint tmp45 = this->velocity;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(658)
			::flixel::math::FlxPoint _g = tmp45;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(658)
			Float tmp46 = (_g->y + velocityDelta);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(658)
			_g->set_y(tmp46);
		}
		HX_STACK_LINE(659)
		{
			HX_STACK_LINE(659)
			::flixel::FlxObject _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(659)
			Float tmp45 = (_g->y + delta);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(659)
			_g->set_y(tmp45);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,updateMotion,(void))

Void FlxObject_obj::draw( ){
{
		HX_STACK_FRAME("flixel.FlxObject","draw",0x1f17bab3,"flixel.FlxObject.draw","flixel/FlxObject.hx",666,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(668)
		this->super::draw();
		HX_STACK_LINE(669)
		::flixel::_system::frontEnds::DebuggerFrontEnd tmp = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(669)
		bool tmp1 = tmp->__Field(HX_HCSTRING("drawDebug","\xaf","\x87","\x2a","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(669)
		if ((tmp1)){
			HX_STACK_LINE(670)
			this->drawDebug();
		}
	}
return null();
}


bool FlxObject_obj::overlaps( ::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.FlxObject","overlaps",0xaad0e53b,"flixel.FlxObject.overlaps","flixel/FlxObject.hx",685,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(686)
		::flixel::FlxBasic tmp = ObjectOrGroup;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(686)
		::flixel::group::FlxTypedGroup tmp1 = ::flixel::group::FlxTypedGroup_obj::resolveGroup(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(686)
		::flixel::group::FlxTypedGroup group = tmp1;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(687)
		bool tmp2 = (group != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(687)
		if ((tmp2)){
			HX_STACK_LINE(689)
			Dynamic tmp3 = this->overlapsCallback_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(689)
			::flixel::group::FlxTypedGroup tmp4 = group;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(689)
			bool tmp5 = InScreenSpace;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(689)
			::flixel::FlxCamera tmp6 = Camera;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(689)
			bool tmp7 = ::flixel::group::FlxTypedGroup_obj::overlaps(tmp3,tmp4,(int)0,(int)0,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(689)
			return tmp7;
		}
		HX_STACK_LINE(692)
		bool tmp3 = (ObjectOrGroup->flixelType == (int)3);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(692)
		if ((tmp3)){
			HX_STACK_LINE(696)
			::flixel::tile::FlxBaseTilemap tilemap = ((::flixel::tile::FlxBaseTilemap)(ObjectOrGroup));		HX_STACK_VAR(tilemap,"tilemap");
			HX_STACK_LINE(697)
			bool tmp4 = InScreenSpace;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(697)
			::flixel::FlxCamera tmp5 = Camera;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(697)
			bool tmp6 = tilemap->overlaps(hx::ObjectPtr<OBJ_>(this),tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(697)
			return tmp6;
		}
		HX_STACK_LINE(700)
		::flixel::FlxObject object = ((::flixel::FlxObject)(ObjectOrGroup));		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(701)
		bool tmp4 = InScreenSpace;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(701)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(701)
		if ((tmp5)){
			HX_STACK_LINE(703)
			Float tmp6 = object->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(703)
			Float tmp7 = object->get_width();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(703)
			Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(703)
			Float tmp9 = this->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(703)
			bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(703)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(703)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(703)
			if ((tmp11)){
				HX_STACK_LINE(703)
				Float tmp13 = object->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(703)
				Float tmp14 = this->x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(703)
				Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(703)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(703)
				Float tmp17 = this->get_width();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(703)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(703)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(703)
				Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(703)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(703)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(703)
				tmp12 = (tmp13 < tmp22);
			}
			else{
				HX_STACK_LINE(703)
				tmp12 = false;
			}
			HX_STACK_LINE(703)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(703)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(703)
			if ((tmp13)){
				HX_STACK_LINE(704)
				Float tmp15 = object->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(704)
				Float tmp16 = object->get_height();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(704)
				Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(704)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(704)
				Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(704)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(704)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(704)
				Float tmp22 = this->y;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(704)
				Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(704)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(704)
				tmp14 = (tmp21 > tmp24);
			}
			else{
				HX_STACK_LINE(703)
				tmp14 = false;
			}
			HX_STACK_LINE(703)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(703)
			if ((tmp14)){
				HX_STACK_LINE(704)
				Float tmp16 = object->y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(704)
				Float tmp17 = this->y;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(704)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(704)
				Float tmp19 = this->get_height();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(704)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(704)
				Float tmp21 = (tmp18 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(704)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(704)
				tmp15 = (tmp16 < tmp22);
			}
			else{
				HX_STACK_LINE(703)
				tmp15 = false;
			}
			HX_STACK_LINE(703)
			return tmp15;
		}
		HX_STACK_LINE(707)
		bool tmp6 = (Camera == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(707)
		if ((tmp6)){
			HX_STACK_LINE(709)
			::flixel::FlxCamera tmp7 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(709)
			Camera = tmp7;
		}
		HX_STACK_LINE(711)
		::flixel::FlxCamera tmp7 = Camera;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(711)
		::flixel::math::FlxPoint tmp8 = object->getScreenPosition(null(),tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(711)
		::flixel::math::FlxPoint objectScreenPos = tmp8;		HX_STACK_VAR(objectScreenPos,"objectScreenPos");
		HX_STACK_LINE(712)
		::flixel::math::FlxPoint tmp9 = this->_point;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(712)
		::flixel::FlxCamera tmp10 = Camera;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(712)
		this->getScreenPosition(tmp9,tmp10);
		HX_STACK_LINE(713)
		Float tmp11 = objectScreenPos->x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(713)
		Float tmp12 = object->get_width();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(713)
		Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(713)
		::flixel::math::FlxPoint tmp14 = this->_point;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(713)
		Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(713)
		bool tmp16 = (tmp13 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(713)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(713)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(713)
		if ((tmp17)){
			HX_STACK_LINE(713)
			Float tmp19 = objectScreenPos->x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(713)
			::flixel::math::FlxPoint tmp20 = this->_point;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(713)
			::flixel::math::FlxPoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(713)
			::flixel::math::FlxPoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(713)
			Float tmp23 = tmp22->x;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(713)
			Float tmp24 = this->get_width();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(713)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(713)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(713)
			Float tmp27 = (tmp23 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(713)
			Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(713)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(713)
			tmp18 = (tmp19 < tmp29);
		}
		else{
			HX_STACK_LINE(713)
			tmp18 = false;
		}
		HX_STACK_LINE(713)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(713)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(713)
		if ((tmp19)){
			HX_STACK_LINE(714)
			Float tmp21 = objectScreenPos->y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(714)
			Float tmp22 = object->get_height();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(714)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(714)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(714)
			Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(714)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(714)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(714)
			::flixel::math::FlxPoint tmp28 = this->_point;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(714)
			::flixel::math::FlxPoint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(714)
			::flixel::math::FlxPoint tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(714)
			Float tmp31 = tmp30->y;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(714)
			tmp20 = (tmp27 > tmp31);
		}
		else{
			HX_STACK_LINE(713)
			tmp20 = false;
		}
		HX_STACK_LINE(713)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(713)
		if ((tmp20)){
			HX_STACK_LINE(714)
			Float tmp22 = objectScreenPos->y;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(714)
			::flixel::math::FlxPoint tmp23 = this->_point;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(714)
			::flixel::math::FlxPoint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(714)
			Float tmp25 = tmp24->y;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(714)
			Float tmp26 = this->get_height();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(714)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(714)
			Float tmp28 = (tmp25 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(714)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(714)
			tmp21 = (tmp22 < tmp29);
		}
		else{
			HX_STACK_LINE(713)
			tmp21 = false;
		}
		HX_STACK_LINE(713)
		return tmp21;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,overlaps,return )

bool FlxObject_obj::overlapsCallback( ::flixel::FlxBasic ObjectOrGroup,Float X,Float Y,bool InScreenSpace,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxObject","overlapsCallback",0xe4196e20,"flixel.FlxObject.overlapsCallback","flixel/FlxObject.hx",718,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(719)
	::flixel::FlxBasic tmp = ObjectOrGroup;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(719)
	bool tmp1 = InScreenSpace;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(719)
	::flixel::FlxCamera tmp2 = Camera;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(719)
	bool tmp3 = this->overlaps(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(719)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsCallback,return )

bool FlxObject_obj::overlapsAt( Float X,Float Y,::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.FlxObject","overlapsAt",0xacc1230e,"flixel.FlxObject.overlapsAt","flixel/FlxObject.hx",735,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(736)
		::flixel::FlxBasic tmp = ObjectOrGroup;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(736)
		::flixel::group::FlxTypedGroup tmp1 = ::flixel::group::FlxTypedGroup_obj::resolveGroup(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(736)
		::flixel::group::FlxTypedGroup group = tmp1;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(737)
		bool tmp2 = (group != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(737)
		if ((tmp2)){
			HX_STACK_LINE(739)
			Dynamic tmp3 = this->overlapsAtCallback_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(739)
			::flixel::group::FlxTypedGroup tmp4 = group;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(739)
			Float tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(739)
			Float tmp6 = Y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(739)
			bool tmp7 = InScreenSpace;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(739)
			::flixel::FlxCamera tmp8 = Camera;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(739)
			bool tmp9 = ::flixel::group::FlxTypedGroup_obj::overlaps(tmp3,tmp4,tmp5,tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(739)
			return tmp9;
		}
		HX_STACK_LINE(742)
		bool tmp3 = (ObjectOrGroup->flixelType == (int)3);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(742)
		if ((tmp3)){
			HX_STACK_LINE(748)
			::flixel::tile::FlxBaseTilemap tilemap = ((::flixel::tile::FlxBaseTilemap)(ObjectOrGroup));		HX_STACK_VAR(tilemap,"tilemap");
			HX_STACK_LINE(749)
			Float tmp4 = tilemap->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(749)
			Float tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(749)
			Float tmp6 = this->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(749)
			Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(749)
			Float tmp8 = (tmp4 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(749)
			Float tmp9 = tilemap->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(749)
			Float tmp10 = Y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(749)
			Float tmp11 = this->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(749)
			Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(749)
			Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(749)
			bool tmp14 = InScreenSpace;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(749)
			::flixel::FlxCamera tmp15 = Camera;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(749)
			bool tmp16 = tilemap->overlapsAt(tmp8,tmp13,hx::ObjectPtr<OBJ_>(this),tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(749)
			return tmp16;
		}
		HX_STACK_LINE(752)
		::flixel::FlxObject object = ((::flixel::FlxObject)(ObjectOrGroup));		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(753)
		bool tmp4 = InScreenSpace;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(753)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(753)
		if ((tmp5)){
			HX_STACK_LINE(755)
			Float tmp6 = object->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(755)
			Float tmp7 = object->get_width();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(755)
			Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(755)
			Float tmp9 = X;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(755)
			bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(755)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(755)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(755)
			if ((tmp11)){
				HX_STACK_LINE(755)
				Float tmp13 = object->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(755)
				Float tmp14 = X;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(755)
				Float tmp15 = this->get_width();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(755)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(755)
				Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(755)
				Float tmp18 = (tmp14 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(755)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(755)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(755)
				tmp12 = (tmp13 < tmp20);
			}
			else{
				HX_STACK_LINE(755)
				tmp12 = false;
			}
			HX_STACK_LINE(755)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(755)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(755)
			if ((tmp13)){
				HX_STACK_LINE(756)
				Float tmp15 = object->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(756)
				Float tmp16 = object->get_height();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(756)
				Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(756)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(756)
				Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(756)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(756)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(756)
				Float tmp22 = Y;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(756)
				tmp14 = (tmp21 > tmp22);
			}
			else{
				HX_STACK_LINE(755)
				tmp14 = false;
			}
			HX_STACK_LINE(755)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(755)
			if ((tmp14)){
				HX_STACK_LINE(756)
				Float tmp16 = object->y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(756)
				Float tmp17 = Y;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(756)
				Float tmp18 = this->get_height();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(756)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(756)
				Float tmp20 = (tmp17 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(756)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(756)
				tmp15 = (tmp16 < tmp21);
			}
			else{
				HX_STACK_LINE(755)
				tmp15 = false;
			}
			HX_STACK_LINE(755)
			return tmp15;
		}
		HX_STACK_LINE(759)
		bool tmp6 = (Camera == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(759)
		if ((tmp6)){
			HX_STACK_LINE(761)
			::flixel::FlxCamera tmp7 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(761)
			Camera = tmp7;
		}
		HX_STACK_LINE(763)
		::flixel::FlxCamera tmp7 = Camera;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(763)
		::flixel::math::FlxPoint tmp8 = object->getScreenPosition(null(),tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(763)
		::flixel::math::FlxPoint objectScreenPos = tmp8;		HX_STACK_VAR(objectScreenPos,"objectScreenPos");
		HX_STACK_LINE(764)
		::flixel::math::FlxPoint tmp9 = this->_point;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(764)
		::flixel::FlxCamera tmp10 = Camera;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(764)
		this->getScreenPosition(tmp9,tmp10);
		HX_STACK_LINE(765)
		Float tmp11 = objectScreenPos->x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(765)
		Float tmp12 = object->get_width();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(765)
		Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(765)
		::flixel::math::FlxPoint tmp14 = this->_point;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(765)
		Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(765)
		bool tmp16 = (tmp13 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(765)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(765)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(765)
		if ((tmp17)){
			HX_STACK_LINE(765)
			Float tmp19 = objectScreenPos->x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(765)
			::flixel::math::FlxPoint tmp20 = this->_point;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(765)
			::flixel::math::FlxPoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(765)
			::flixel::math::FlxPoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(765)
			Float tmp23 = tmp22->x;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(765)
			Float tmp24 = this->get_width();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(765)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(765)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(765)
			Float tmp27 = (tmp23 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(765)
			Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(765)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(765)
			tmp18 = (tmp19 < tmp29);
		}
		else{
			HX_STACK_LINE(765)
			tmp18 = false;
		}
		HX_STACK_LINE(765)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(765)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(765)
		if ((tmp19)){
			HX_STACK_LINE(766)
			Float tmp21 = objectScreenPos->y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(766)
			Float tmp22 = object->get_height();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(766)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(766)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(766)
			Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(766)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(766)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(766)
			::flixel::math::FlxPoint tmp28 = this->_point;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(766)
			::flixel::math::FlxPoint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(766)
			::flixel::math::FlxPoint tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(766)
			Float tmp31 = tmp30->y;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(766)
			tmp20 = (tmp27 > tmp31);
		}
		else{
			HX_STACK_LINE(765)
			tmp20 = false;
		}
		HX_STACK_LINE(765)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(765)
		if ((tmp20)){
			HX_STACK_LINE(766)
			Float tmp22 = objectScreenPos->y;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(766)
			::flixel::math::FlxPoint tmp23 = this->_point;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(766)
			::flixel::math::FlxPoint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(766)
			Float tmp25 = tmp24->y;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(766)
			Float tmp26 = this->get_height();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(766)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(766)
			Float tmp28 = (tmp25 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(766)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(766)
			tmp21 = (tmp22 < tmp29);
		}
		else{
			HX_STACK_LINE(765)
			tmp21 = false;
		}
		HX_STACK_LINE(765)
		return tmp21;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsAt,return )

bool FlxObject_obj::overlapsAtCallback( ::flixel::FlxBasic ObjectOrGroup,Float X,Float Y,bool InScreenSpace,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxObject","overlapsAtCallback",0xb90836f3,"flixel.FlxObject.overlapsAtCallback","flixel/FlxObject.hx",770,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(771)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(771)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(771)
	::flixel::FlxBasic tmp2 = ObjectOrGroup;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(771)
	bool tmp3 = InScreenSpace;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(771)
	::flixel::FlxCamera tmp4 = Camera;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(771)
	bool tmp5 = this->overlapsAt(tmp,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(771)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsAtCallback,return )

bool FlxObject_obj::overlapsPoint( ::flixel::math::FlxPoint point,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.FlxObject","overlapsPoint",0xcd9c6915,"flixel.FlxObject.overlapsPoint","flixel/FlxObject.hx",783,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(784)
		bool tmp = InScreenSpace;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(784)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(784)
		if ((tmp1)){
			HX_STACK_LINE(786)
			Float tmp2 = point->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(786)
			Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(786)
			bool tmp4 = (tmp2 >= tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(786)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(786)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(786)
			if ((tmp5)){
				HX_STACK_LINE(786)
				Float tmp7 = point->x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(786)
				Float tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(786)
				Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(786)
				Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(786)
				Float tmp11 = this->get_width();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(786)
				Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(786)
				Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(786)
				Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(786)
				Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(786)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(786)
				tmp6 = (tmp7 < tmp16);
			}
			else{
				HX_STACK_LINE(786)
				tmp6 = false;
			}
			HX_STACK_LINE(786)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(786)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(786)
			if ((tmp7)){
				HX_STACK_LINE(786)
				Float tmp9 = point->y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(786)
				Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(786)
				Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(786)
				Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(786)
				tmp8 = (tmp9 >= tmp12);
			}
			else{
				HX_STACK_LINE(786)
				tmp8 = false;
			}
			HX_STACK_LINE(786)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(786)
			if ((tmp8)){
				HX_STACK_LINE(786)
				Float tmp10 = point->y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(786)
				Float tmp11 = this->y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(786)
				Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(786)
				Float tmp13 = this->get_height();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(786)
				Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(786)
				Float tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(786)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(786)
				tmp9 = (tmp10 < tmp16);
			}
			else{
				HX_STACK_LINE(786)
				tmp9 = false;
			}
			HX_STACK_LINE(786)
			return tmp9;
		}
		HX_STACK_LINE(789)
		bool tmp2 = (Camera == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(789)
		if ((tmp2)){
			HX_STACK_LINE(791)
			::flixel::FlxCamera tmp3 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(791)
			Camera = tmp3;
		}
		HX_STACK_LINE(793)
		Float tmp3 = point->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(793)
		Float tmp4 = Camera->scroll->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(793)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(793)
		Float xPos = tmp5;		HX_STACK_VAR(xPos,"xPos");
		HX_STACK_LINE(794)
		Float tmp6 = point->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(794)
		Float tmp7 = Camera->scroll->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(794)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(794)
		Float yPos = tmp8;		HX_STACK_VAR(yPos,"yPos");
		HX_STACK_LINE(795)
		::flixel::math::FlxPoint tmp9 = this->_point;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(795)
		::flixel::FlxCamera tmp10 = Camera;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(795)
		this->getScreenPosition(tmp9,tmp10);
		HX_STACK_LINE(796)
		{
			HX_STACK_LINE(796)
			bool tmp11 = point->_weak;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(796)
			if ((tmp11)){
				HX_STACK_LINE(796)
				point->put();
			}
		}
		HX_STACK_LINE(797)
		Float tmp11 = xPos;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(797)
		::flixel::math::FlxPoint tmp12 = this->_point;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(797)
		Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(797)
		bool tmp14 = (tmp11 >= tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(797)
		bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(797)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(797)
		if ((tmp15)){
			HX_STACK_LINE(797)
			Float tmp17 = xPos;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(797)
			::flixel::math::FlxPoint tmp18 = this->_point;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(797)
			::flixel::math::FlxPoint tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(797)
			::flixel::math::FlxPoint tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(797)
			Float tmp21 = tmp20->x;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(797)
			Float tmp22 = this->get_width();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(797)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(797)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(797)
			Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(797)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(797)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(797)
			tmp16 = (tmp17 < tmp27);
		}
		else{
			HX_STACK_LINE(797)
			tmp16 = false;
		}
		HX_STACK_LINE(797)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(797)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(797)
		if ((tmp17)){
			HX_STACK_LINE(797)
			Float tmp19 = yPos;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(797)
			::flixel::math::FlxPoint tmp20 = this->_point;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(797)
			::flixel::math::FlxPoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(797)
			::flixel::math::FlxPoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(797)
			Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(797)
			tmp18 = (tmp19 >= tmp23);
		}
		else{
			HX_STACK_LINE(797)
			tmp18 = false;
		}
		HX_STACK_LINE(797)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(797)
		if ((tmp18)){
			HX_STACK_LINE(797)
			Float tmp20 = yPos;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(797)
			::flixel::math::FlxPoint tmp21 = this->_point;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(797)
			::flixel::math::FlxPoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(797)
			Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(797)
			Float tmp24 = this->get_height();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(797)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(797)
			Float tmp26 = (tmp23 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(797)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(797)
			tmp19 = (tmp20 < tmp27);
		}
		else{
			HX_STACK_LINE(797)
			tmp19 = false;
		}
		HX_STACK_LINE(797)
		return tmp19;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,overlapsPoint,return )

bool FlxObject_obj::inWorldBounds( ){
	HX_STACK_FRAME("flixel.FlxObject","inWorldBounds",0x89d0e9f3,"flixel.FlxObject.inWorldBounds","flixel/FlxObject.hx",806,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(807)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(807)
	Float tmp1 = this->get_width();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(807)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(807)
	::flixel::math::FlxRect tmp3 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(807)
	Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(807)
	bool tmp5 = (tmp2 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(807)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(807)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(807)
	if ((tmp6)){
		HX_STACK_LINE(807)
		Float tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(807)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(807)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(807)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(807)
		{
			HX_STACK_LINE(807)
			::flixel::math::FlxRect tmp12 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(807)
			::flixel::math::FlxRect tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(807)
			::flixel::math::FlxRect tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(807)
			::flixel::math::FlxRect _this = tmp14;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(807)
			Float tmp15 = (_this->x + _this->width);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(807)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(807)
			tmp11 = tmp16;
		}
		HX_STACK_LINE(807)
		tmp7 = (tmp10 < tmp11);
	}
	else{
		HX_STACK_LINE(807)
		tmp7 = false;
	}
	HX_STACK_LINE(807)
	bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(807)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(807)
	if ((tmp8)){
		HX_STACK_LINE(807)
		Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(807)
		Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(807)
		Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(807)
		Float tmp13 = this->get_height();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(807)
		Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(807)
		Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(807)
		Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(807)
		Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(807)
		Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(807)
		::flixel::math::FlxRect tmp19 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(807)
		::flixel::math::FlxRect tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(807)
		::flixel::math::FlxRect tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(807)
		Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(807)
		tmp9 = (tmp18 > tmp22);
	}
	else{
		HX_STACK_LINE(807)
		tmp9 = false;
	}
	HX_STACK_LINE(807)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(807)
	if ((tmp9)){
		HX_STACK_LINE(807)
		Float tmp11 = this->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(807)
		Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(807)
		Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(807)
		{
			HX_STACK_LINE(807)
			::flixel::math::FlxRect tmp14 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(807)
			::flixel::math::FlxRect tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(807)
			::flixel::math::FlxRect _this = tmp15;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(807)
			Float tmp16 = (_this->y + _this->height);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(807)
			tmp13 = tmp16;
		}
		HX_STACK_LINE(807)
		tmp10 = (tmp12 < tmp13);
	}
	else{
		HX_STACK_LINE(807)
		tmp10 = false;
	}
	HX_STACK_LINE(807)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,inWorldBounds,return )

::flixel::math::FlxPoint FlxObject_obj::getScreenPosition( ::flixel::math::FlxPoint point,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxObject","getScreenPosition",0x643c435c,"flixel.FlxObject.getScreenPosition","flixel/FlxObject.hx",818,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(819)
	bool tmp = (point == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(819)
	if ((tmp)){
		HX_STACK_LINE(821)
		::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(821)
		{
			HX_STACK_LINE(821)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(821)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(821)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(821)
			::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(821)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(821)
			Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(821)
			::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(821)
			::flixel::math::FlxPoint point1 = tmp6;		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(821)
			point1->_inPool = false;
			HX_STACK_LINE(821)
			tmp1 = point1;
		}
		HX_STACK_LINE(821)
		point = tmp1;
	}
	HX_STACK_LINE(823)
	bool tmp1 = (Camera == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(823)
	if ((tmp1)){
		HX_STACK_LINE(825)
		::flixel::FlxCamera tmp2 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(825)
		Camera = tmp2;
	}
	HX_STACK_LINE(828)
	Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(828)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(828)
	point->set(tmp2,tmp3);
	HX_STACK_LINE(829)
	bool tmp4 = this->pixelPerfectPosition;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(829)
	if ((tmp4)){
		HX_STACK_LINE(831)
		Float tmp5 = point->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(831)
		int tmp6 = ::Math_obj::floor(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(831)
		point->set_x(tmp6);
		HX_STACK_LINE(831)
		Float tmp7 = point->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(831)
		int tmp8 = ::Math_obj::floor(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(831)
		point->set_y(tmp8);
		HX_STACK_LINE(831)
		point;
	}
	HX_STACK_LINE(834)
	::flixel::math::FlxPoint tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(834)
	{
		HX_STACK_LINE(834)
		{
			HX_STACK_LINE(834)
			::flixel::math::FlxPoint _g = point;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(834)
			Float tmp6 = _g->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(834)
			Float tmp7 = Camera->scroll->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(834)
			::flixel::math::FlxPoint tmp8 = this->scrollFactor;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(834)
			Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(834)
			Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(834)
			Float tmp11 = (tmp6 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(834)
			_g->set_x(tmp11);
		}
		HX_STACK_LINE(834)
		{
			HX_STACK_LINE(834)
			::flixel::math::FlxPoint _g = point;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(834)
			Float tmp6 = _g->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(834)
			Float tmp7 = Camera->scroll->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(834)
			::flixel::math::FlxPoint tmp8 = this->scrollFactor;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(834)
			Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(834)
			Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(834)
			Float tmp11 = (tmp6 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(834)
			_g->set_y(tmp11);
		}
		HX_STACK_LINE(834)
		tmp5 = point;
	}
	HX_STACK_LINE(834)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,getScreenPosition,return )

::flixel::math::FlxPoint FlxObject_obj::getPosition( ::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.FlxObject","getPosition",0x1bf09890,"flixel.FlxObject.getPosition","flixel/FlxObject.hx",838,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(839)
	bool tmp = (point == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(839)
	if ((tmp)){
		HX_STACK_LINE(840)
		::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(840)
		{
			HX_STACK_LINE(840)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(840)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(840)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(840)
			::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(840)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(840)
			Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(840)
			::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(840)
			::flixel::math::FlxPoint point1 = tmp6;		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(840)
			point1->_inPool = false;
			HX_STACK_LINE(840)
			tmp1 = point1;
		}
		HX_STACK_LINE(840)
		point = tmp1;
	}
	HX_STACK_LINE(841)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(841)
	Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(841)
	::flixel::math::FlxPoint tmp3 = point->set(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(841)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getPosition,return )

::flixel::math::FlxPoint FlxObject_obj::getMidpoint( ::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.FlxObject","getMidpoint",0x7bfe0daf,"flixel.FlxObject.getMidpoint","flixel/FlxObject.hx",851,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(852)
	bool tmp = (point == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(852)
	if ((tmp)){
		HX_STACK_LINE(854)
		::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(854)
		{
			HX_STACK_LINE(854)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(854)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(854)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(854)
			::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(854)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(854)
			Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(854)
			::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(854)
			::flixel::math::FlxPoint point1 = tmp6;		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(854)
			point1->_inPool = false;
			HX_STACK_LINE(854)
			tmp1 = point1;
		}
		HX_STACK_LINE(854)
		point = tmp1;
	}
	HX_STACK_LINE(856)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(856)
	Float tmp2 = this->get_width();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(856)
	Float tmp3 = (tmp2 * ((Float)0.5));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(856)
	Float tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(856)
	Float tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(856)
	Float tmp6 = this->get_height();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(856)
	Float tmp7 = (tmp6 * ((Float)0.5));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(856)
	Float tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(856)
	::flixel::math::FlxPoint tmp9 = point->set(tmp4,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(856)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getMidpoint,return )

::flixel::math::FlxRect FlxObject_obj::getHitbox( ::flixel::math::FlxRect rect){
	HX_STACK_FRAME("flixel.FlxObject","getHitbox",0x5f284dbf,"flixel.FlxObject.getHitbox","flixel/FlxObject.hx",860,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(861)
	bool tmp = (rect == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(861)
	if ((tmp)){
		HX_STACK_LINE(862)
		::flixel::math::FlxRect tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(862)
		{
			HX_STACK_LINE(862)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(862)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(862)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(862)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(862)
			::flixel::math::FlxRect tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(862)
			{
				HX_STACK_LINE(862)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp3 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(862)
				::flixel::math::FlxRect tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(862)
				::flixel::math::FlxRect _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(862)
				_this->x = X;
				HX_STACK_LINE(862)
				_this->y = Y;
				HX_STACK_LINE(862)
				_this->width = Width;
				HX_STACK_LINE(862)
				_this->height = Height;
				HX_STACK_LINE(862)
				tmp2 = _this;
			}
			HX_STACK_LINE(862)
			::flixel::math::FlxRect rect1 = tmp2;		HX_STACK_VAR(rect1,"rect1");
			HX_STACK_LINE(862)
			rect1->_inPool = false;
			HX_STACK_LINE(862)
			tmp1 = rect1;
		}
		HX_STACK_LINE(862)
		rect = tmp1;
	}
	HX_STACK_LINE(863)
	::flixel::math::FlxRect tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(863)
	{
		HX_STACK_LINE(863)
		Float tmp2 = this->get_width();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(863)
		Float Width = tmp2;		HX_STACK_VAR(Width,"Width");
		HX_STACK_LINE(863)
		Float tmp3 = this->get_height();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(863)
		Float Height = tmp3;		HX_STACK_VAR(Height,"Height");
		HX_STACK_LINE(863)
		Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(863)
		rect->x = tmp4;
		HX_STACK_LINE(863)
		Float tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(863)
		rect->y = tmp5;
		HX_STACK_LINE(863)
		rect->width = Width;
		HX_STACK_LINE(863)
		rect->height = Height;
		HX_STACK_LINE(863)
		tmp1 = rect;
	}
	HX_STACK_LINE(863)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getHitbox,return )

Void FlxObject_obj::reset( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.FlxObject","reset",0x1cbd9440,"flixel.FlxObject.reset","flixel/FlxObject.hx",874,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(875)
		this->touching = (int)0;
		HX_STACK_LINE(876)
		this->wasTouching = (int)0;
		HX_STACK_LINE(877)
		Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(877)
		Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(877)
		this->setPosition(tmp,tmp1);
		HX_STACK_LINE(878)
		::flixel::math::FlxPoint tmp2 = this->last;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(878)
		Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(878)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(878)
		tmp2->set(tmp3,tmp4);
		HX_STACK_LINE(879)
		::flixel::math::FlxPoint tmp5 = this->velocity;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(879)
		tmp5->set(null(),null());
		HX_STACK_LINE(880)
		this->revive();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,reset,(void))

bool FlxObject_obj::isOnScreen( ::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxObject","isOnScreen",0x4aab7fe4,"flixel.FlxObject.isOnScreen","flixel/FlxObject.hx",890,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(891)
	bool tmp = (Camera == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(891)
	if ((tmp)){
		HX_STACK_LINE(893)
		::flixel::FlxCamera tmp1 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(893)
		Camera = tmp1;
	}
	HX_STACK_LINE(895)
	::flixel::math::FlxPoint tmp1 = this->_point;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(895)
	::flixel::FlxCamera tmp2 = Camera;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(895)
	this->getScreenPosition(tmp1,tmp2);
	HX_STACK_LINE(896)
	::flixel::math::FlxPoint tmp3 = this->_point;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(896)
	Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(896)
	Float tmp5 = this->get_width();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(896)
	Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(896)
	bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(896)
	bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(896)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(896)
	if ((tmp8)){
		HX_STACK_LINE(896)
		::flixel::math::FlxPoint tmp10 = this->_point;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(896)
		::flixel::math::FlxPoint tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(896)
		::flixel::math::FlxPoint tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(896)
		Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(896)
		int tmp14 = Camera->width;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(896)
		tmp9 = (tmp13 < tmp14);
	}
	else{
		HX_STACK_LINE(896)
		tmp9 = false;
	}
	HX_STACK_LINE(896)
	bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(896)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(896)
	if ((tmp10)){
		HX_STACK_LINE(896)
		::flixel::math::FlxPoint tmp12 = this->_point;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(896)
		::flixel::math::FlxPoint tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(896)
		::flixel::math::FlxPoint tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(896)
		Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(896)
		Float tmp16 = this->get_height();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(896)
		Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(896)
		Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(896)
		Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(896)
		Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(896)
		Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(896)
		tmp11 = (tmp21 > (int)0);
	}
	else{
		HX_STACK_LINE(896)
		tmp11 = false;
	}
	HX_STACK_LINE(896)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(896)
	if ((tmp11)){
		HX_STACK_LINE(896)
		::flixel::math::FlxPoint tmp13 = this->_point;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(896)
		::flixel::math::FlxPoint tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(896)
		Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(896)
		int tmp16 = Camera->height;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(896)
		tmp12 = (tmp15 < tmp16);
	}
	else{
		HX_STACK_LINE(896)
		tmp12 = false;
	}
	HX_STACK_LINE(896)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,isOnScreen,return )

bool FlxObject_obj::isPixelPerfectRender( ::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxObject","isPixelPerfectRender",0xc4c93916,"flixel.FlxObject.isPixelPerfectRender","flixel/FlxObject.hx",903,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(904)
	bool tmp = (Camera == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(904)
	if ((tmp)){
		HX_STACK_LINE(906)
		::flixel::FlxCamera tmp1 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(906)
		Camera = tmp1;
	}
	HX_STACK_LINE(909)
	Dynamic tmp1 = this->pixelPerfectRender;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(909)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(909)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(909)
	if ((tmp2)){
		HX_STACK_LINE(909)
		tmp3 = Camera->pixelPerfectRender;
	}
	else{
		HX_STACK_LINE(909)
		tmp3 = this->pixelPerfectRender;
	}
	HX_STACK_LINE(909)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,isPixelPerfectRender,return )

bool FlxObject_obj::isTouching( int Direction){
	HX_STACK_FRAME("flixel.FlxObject","isTouching",0x23c6647c,"flixel.FlxObject.isTouching","flixel/FlxObject.hx",920,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Direction,"Direction")
	HX_STACK_LINE(921)
	int tmp = this->touching;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(921)
	int tmp1 = Direction;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(921)
	int tmp2 = (int(tmp) & int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(921)
	bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(921)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,isTouching,return )

bool FlxObject_obj::justTouched( int Direction){
	HX_STACK_FRAME("flixel.FlxObject","justTouched",0xbcba8e43,"flixel.FlxObject.justTouched","flixel/FlxObject.hx",932,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Direction,"Direction")
	HX_STACK_LINE(933)
	int tmp = this->touching;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(933)
	int tmp1 = Direction;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(933)
	int tmp2 = (int(tmp) & int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(933)
	bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(933)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(933)
	if ((tmp3)){
		HX_STACK_LINE(933)
		int tmp5 = this->wasTouching;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(933)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(933)
		int tmp7 = Direction;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(933)
		int tmp8 = (int(tmp6) & int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(933)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(933)
		tmp4 = (tmp9 <= (int)0);
	}
	else{
		HX_STACK_LINE(933)
		tmp4 = false;
	}
	HX_STACK_LINE(933)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,justTouched,return )

Void FlxObject_obj::hurt( Float Damage){
{
		HX_STACK_FRAME("flixel.FlxObject","hurt",0x21beeabe,"flixel.FlxObject.hurt","flixel/FlxObject.hx",943,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Damage,"Damage")
		HX_STACK_LINE(944)
		Float tmp = this->health;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(944)
		Float tmp1 = Damage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(944)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(944)
		this->health = tmp2;
		HX_STACK_LINE(945)
		Float tmp3 = this->health;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(945)
		bool tmp4 = (tmp3 <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(945)
		if ((tmp4)){
			HX_STACK_LINE(947)
			this->kill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,hurt,(void))

::flixel::FlxObject FlxObject_obj::screenCenter( ::flixel::util::FlxAxes axes){
	HX_STACK_FRAME("flixel.FlxObject","screenCenter",0x59e58410,"flixel.FlxObject.screenCenter","flixel/FlxObject.hx",958,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(axes,"axes")
	HX_STACK_LINE(959)
	bool tmp = (axes == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(959)
	if ((tmp)){
		HX_STACK_LINE(960)
		axes = ::flixel::util::FlxAxes_obj::XY;
	}
	HX_STACK_LINE(962)
	bool tmp1 = (axes != ::flixel::util::FlxAxes_obj::Y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(962)
	if ((tmp1)){
		HX_STACK_LINE(963)
		int tmp2 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(963)
		Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(963)
		Float tmp4 = this->get_width();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(963)
		Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(963)
		Float tmp6 = (tmp3 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(963)
		this->set_x(tmp6);
	}
	HX_STACK_LINE(964)
	bool tmp2 = (axes != ::flixel::util::FlxAxes_obj::X);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(964)
	if ((tmp2)){
		HX_STACK_LINE(965)
		int tmp3 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(965)
		Float tmp4 = (Float(tmp3) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(965)
		Float tmp5 = this->get_height();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(965)
		Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(965)
		Float tmp7 = (tmp4 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(965)
		this->set_y(tmp7);
	}
	HX_STACK_LINE(967)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,screenCenter,return )

Void FlxObject_obj::setPosition( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.FlxObject","setPosition",0x265d9f9c,"flixel.FlxObject.setPosition","flixel/FlxObject.hx",978,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(979)
		Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(979)
		this->set_x(tmp);
		HX_STACK_LINE(980)
		Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(980)
		this->set_y(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,setPosition,(void))

Void FlxObject_obj::setSize( Float Width,Float Height){
{
		HX_STACK_FRAME("flixel.FlxObject","setSize",0xa7896a34,"flixel.FlxObject.setSize","flixel/FlxObject.hx",990,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(991)
		Float tmp = Width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(991)
		this->set_width(tmp);
		HX_STACK_LINE(992)
		Float tmp1 = Height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(992)
		this->set_height(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,setSize,(void))

Void FlxObject_obj::drawDebug( ){
{
		HX_STACK_FRAME("flixel.FlxObject","drawDebug",0x2ad45ea0,"flixel.FlxObject.drawDebug","flixel/FlxObject.hx",997,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(998)
		bool tmp = this->ignoreDrawDebug;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(998)
		if ((tmp)){
			HX_STACK_LINE(1000)
			return null();
		}
		HX_STACK_LINE(1003)
		{
			HX_STACK_LINE(1003)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1003)
			Array< ::Dynamic > _g1 = this->get_cameras();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1003)
			while((true)){
				HX_STACK_LINE(1003)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1003)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1003)
				if ((tmp2)){
					HX_STACK_LINE(1003)
					break;
				}
				HX_STACK_LINE(1003)
				::flixel::FlxCamera tmp3 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1003)
				::flixel::FlxCamera camera = tmp3;		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(1003)
				++(_g);
				HX_STACK_LINE(1005)
				::flixel::FlxCamera tmp4 = camera;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1005)
				this->drawDebugOnCamera(tmp4);
				HX_STACK_LINE(1007)
				::flixel::util::FlxPath tmp5 = this->path;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1007)
				bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1007)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1007)
				if ((tmp6)){
					HX_STACK_LINE(1007)
					::flixel::util::FlxPath tmp8 = this->path;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1007)
					::flixel::util::FlxPath tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1007)
					bool tmp10 = tmp9->ignoreDrawDebug;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1007)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1007)
					tmp7 = !(tmp11);
				}
				else{
					HX_STACK_LINE(1007)
					tmp7 = false;
				}
				HX_STACK_LINE(1007)
				if ((tmp7)){
					HX_STACK_LINE(1008)
					::flixel::util::FlxPath tmp8 = this->path;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1008)
					tmp8->drawDebug(null());
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,drawDebug,(void))

Void FlxObject_obj::drawDebugOnCamera( ::flixel::FlxCamera camera){
{
		HX_STACK_FRAME("flixel.FlxObject","drawDebugOnCamera",0x0b2ef7e4,"flixel.FlxObject.drawDebugOnCamera","flixel/FlxObject.hx",1019,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(1020)
		bool tmp = camera->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1020)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1020)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1020)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1020)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1020)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1020)
		if ((tmp4)){
			HX_STACK_LINE(1020)
			bool tmp6 = camera->exists;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1020)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1020)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1020)
			tmp5 = !(tmp8);
		}
		else{
			HX_STACK_LINE(1020)
			tmp5 = true;
		}
		HX_STACK_LINE(1020)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1020)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1020)
		if ((tmp6)){
			HX_STACK_LINE(1020)
			::flixel::FlxCamera tmp8 = camera;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1020)
			::flixel::FlxCamera tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1020)
			bool tmp10 = this->isOnScreen(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1020)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1020)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1020)
			tmp7 = !(tmp12);
		}
		else{
			HX_STACK_LINE(1020)
			tmp7 = true;
		}
		HX_STACK_LINE(1020)
		if ((tmp7)){
			HX_STACK_LINE(1022)
			return null();
		}
		HX_STACK_LINE(1025)
		::flixel::FlxCamera tmp8 = camera;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1025)
		::flixel::math::FlxRect tmp9 = this->getBoundingBox(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1025)
		::flixel::math::FlxRect rect = tmp9;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(1028)
		Dynamic tmp10 = this->debugBoundingBoxColor;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1028)
		Dynamic color = tmp10;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(1029)
		bool tmp11 = (color == null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1029)
		if ((tmp11)){
			HX_STACK_LINE(1031)
			int tmp12 = this->allowCollisions;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1031)
			bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1031)
			if ((tmp13)){
				HX_STACK_LINE(1033)
				bool tmp14 = this->immovable;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1033)
				Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1033)
				if ((tmp14)){
					HX_STACK_LINE(1033)
					tmp15 = (int)-16744448;
				}
				else{
					HX_STACK_LINE(1033)
					tmp15 = (int)-65536;
				}
				HX_STACK_LINE(1033)
				color = tmp15;
			}
			else{
				HX_STACK_LINE(1037)
				color = (int)-16776961;
			}
		}
		HX_STACK_LINE(1042)
		bool tmp12 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1042)
		::openfl::_legacy::display::Graphics tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1042)
		if ((tmp12)){
			HX_STACK_LINE(1042)
			::openfl::_legacy::display::Graphics tmp14 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1042)
			tmp14->clear();
			HX_STACK_LINE(1042)
			tmp13 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;
		}
		else{
			HX_STACK_LINE(1042)
			tmp13 = camera->debugLayer->get_graphics();
		}
		HX_STACK_LINE(1042)
		::openfl::_legacy::display::Graphics gfx = tmp13;		HX_STACK_VAR(gfx,"gfx");
		HX_STACK_LINE(1043)
		Dynamic tmp14 = color;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1043)
		gfx->lineStyle((int)1,tmp14,((Float)0.5),null(),null(),null(),null(),null());
		HX_STACK_LINE(1044)
		Float tmp15 = rect->x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1044)
		Float tmp16 = rect->y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1044)
		Float tmp17 = rect->width;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1044)
		Float tmp18 = rect->height;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1044)
		gfx->drawRect(tmp15,tmp16,tmp17,tmp18);
		HX_STACK_LINE(1045)
		{
			HX_STACK_LINE(1045)
			bool tmp19 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1045)
			if ((tmp19)){
				HX_STACK_LINE(1045)
				::openfl::_legacy::display::Sprite tmp20 = ::flixel::util::FlxSpriteUtil_obj::flashGfxSprite;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1045)
				camera->buffer->draw(tmp20,null(),null(),null(),null(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,drawDebugOnCamera,(void))

::openfl::_legacy::display::Graphics FlxObject_obj::beginDrawDebug( ::flixel::FlxCamera camera){
	HX_STACK_FRAME("flixel.FlxObject","beginDrawDebug",0x8677cfb5,"flixel.FlxObject.beginDrawDebug","flixel/FlxObject.hx",1049,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(camera,"camera")
	HX_STACK_LINE(1050)
	bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1050)
	if ((tmp)){
		HX_STACK_LINE(1052)
		::openfl::_legacy::display::Graphics tmp1 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1052)
		tmp1->clear();
		HX_STACK_LINE(1053)
		::openfl::_legacy::display::Graphics tmp2 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1053)
		return tmp2;
	}
	else{
		HX_STACK_LINE(1057)
		::openfl::_legacy::display::Graphics tmp1 = camera->debugLayer->get_graphics();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1057)
		return tmp1;
	}
	HX_STACK_LINE(1050)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,beginDrawDebug,return )

Void FlxObject_obj::endDrawDebug( ::flixel::FlxCamera camera){
{
		HX_STACK_FRAME("flixel.FlxObject","endDrawDebug",0x2518e603,"flixel.FlxObject.endDrawDebug","flixel/FlxObject.hx",1062,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(1063)
		bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1063)
		if ((tmp)){
			HX_STACK_LINE(1065)
			::openfl::_legacy::display::Sprite tmp1 = ::flixel::util::FlxSpriteUtil_obj::flashGfxSprite;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1065)
			camera->buffer->draw(tmp1,null(),null(),null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,endDrawDebug,(void))

::flixel::math::FlxRect FlxObject_obj::getBoundingBox( ::flixel::FlxCamera camera){
	HX_STACK_FRAME("flixel.FlxObject","getBoundingBox",0x58364780,"flixel.FlxObject.getBoundingBox","flixel/FlxObject.hx",1071,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(camera,"camera")
	HX_STACK_LINE(1072)
	::flixel::math::FlxPoint tmp = this->_point;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1072)
	::flixel::FlxCamera tmp1 = camera;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1072)
	this->getScreenPosition(tmp,tmp1);
	HX_STACK_LINE(1073)
	{
		HX_STACK_LINE(1073)
		::flixel::math::FlxRect tmp2 = this->_rect;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1073)
		::flixel::math::FlxRect _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1073)
		Float tmp3 = this->get_width();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1073)
		Float Width = tmp3;		HX_STACK_VAR(Width,"Width");
		HX_STACK_LINE(1073)
		Float tmp4 = this->get_height();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1073)
		Float Height = tmp4;		HX_STACK_VAR(Height,"Height");
		HX_STACK_LINE(1073)
		::flixel::math::FlxPoint tmp5 = this->_point;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1073)
		_this->x = tmp5->x;
		HX_STACK_LINE(1073)
		::flixel::math::FlxPoint tmp6 = this->_point;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1073)
		_this->y = tmp6->y;
		HX_STACK_LINE(1073)
		_this->width = Width;
		HX_STACK_LINE(1073)
		_this->height = Height;
		HX_STACK_LINE(1073)
		_this;
	}
	HX_STACK_LINE(1075)
	::flixel::FlxCamera tmp2 = camera;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1075)
	bool tmp3 = this->isPixelPerfectRender(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1075)
	if ((tmp3)){
		HX_STACK_LINE(1077)
		::flixel::math::FlxRect tmp4 = this->_rect;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1077)
		::flixel::math::FlxRect _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1077)
		Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1077)
		int tmp6 = ::Math_obj::floor(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1077)
		_this->x = tmp6;
		HX_STACK_LINE(1077)
		Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1077)
		int tmp8 = ::Math_obj::floor(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1077)
		_this->y = tmp8;
		HX_STACK_LINE(1077)
		Float tmp9 = _this->width;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1077)
		int tmp10 = ::Math_obj::floor(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1077)
		_this->width = tmp10;
		HX_STACK_LINE(1077)
		Float tmp11 = _this->height;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1077)
		int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1077)
		_this->height = tmp12;
		HX_STACK_LINE(1077)
		_this;
	}
	HX_STACK_LINE(1080)
	::flixel::math::FlxRect tmp4 = this->_rect;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1080)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getBoundingBox,return )

::String FlxObject_obj::toString( ){
	HX_STACK_FRAME("flixel.FlxObject","toString",0x9e14e2db,"flixel.FlxObject.toString","flixel/FlxObject.hx",1087,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1089)
	::flixel::util::LabelValuePair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1089)
	{
		HX_STACK_LINE(1089)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp1 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1089)
		::flixel::util::LabelValuePair tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1089)
		::flixel::util::LabelValuePair _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1089)
		_this->label = HX_HCSTRING("x","\x78","\x00","\x00","\x00");
		HX_STACK_LINE(1089)
		Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1089)
		_this->value = tmp3;
		HX_STACK_LINE(1089)
		tmp = _this;
	}
	HX_STACK_LINE(1090)
	::flixel::util::LabelValuePair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1090)
	{
		HX_STACK_LINE(1090)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp2 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1090)
		::flixel::util::LabelValuePair tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1090)
		::flixel::util::LabelValuePair _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1090)
		_this->label = HX_HCSTRING("y","\x79","\x00","\x00","\x00");
		HX_STACK_LINE(1090)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1090)
		_this->value = tmp4;
		HX_STACK_LINE(1090)
		tmp1 = _this;
	}
	HX_STACK_LINE(1091)
	::flixel::util::LabelValuePair tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1091)
	{
		HX_STACK_LINE(1091)
		Float tmp3 = this->get_width();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1091)
		Dynamic value = tmp3;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(1091)
		{
			HX_STACK_LINE(1091)
			::flixel::util::FlxPool_flixel_util_LabelValuePair tmp4 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1091)
			::flixel::util::LabelValuePair tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1091)
			::flixel::util::LabelValuePair _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1091)
			_this->label = HX_HCSTRING("w","\x77","\x00","\x00","\x00");
			HX_STACK_LINE(1091)
			_this->value = value;
			HX_STACK_LINE(1091)
			tmp2 = _this;
		}
	}
	HX_STACK_LINE(1092)
	::flixel::util::LabelValuePair tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1092)
	{
		HX_STACK_LINE(1092)
		Float tmp4 = this->get_height();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1092)
		Dynamic value = tmp4;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(1092)
		{
			HX_STACK_LINE(1092)
			::flixel::util::FlxPool_flixel_util_LabelValuePair tmp5 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1092)
			::flixel::util::LabelValuePair tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1092)
			::flixel::util::LabelValuePair _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1092)
			_this->label = HX_HCSTRING("h","\x68","\x00","\x00","\x00");
			HX_STACK_LINE(1092)
			_this->value = value;
			HX_STACK_LINE(1092)
			tmp3 = _this;
		}
	}
	HX_STACK_LINE(1093)
	::flixel::util::LabelValuePair tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1093)
	{
		HX_STACK_LINE(1093)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp5 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1093)
		::flixel::util::LabelValuePair tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1093)
		::flixel::util::LabelValuePair _this = tmp6;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1093)
		_this->label = HX_HCSTRING("visible","\x72","\x78","\x24","\xa3");
		HX_STACK_LINE(1093)
		bool tmp7 = this->visible;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1093)
		_this->value = tmp7;
		HX_STACK_LINE(1093)
		tmp4 = _this;
	}
	HX_STACK_LINE(1094)
	::flixel::util::LabelValuePair tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1094)
	{
		HX_STACK_LINE(1094)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp6 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1094)
		::flixel::util::LabelValuePair tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1094)
		::flixel::util::LabelValuePair _this = tmp7;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1094)
		_this->label = HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e");
		HX_STACK_LINE(1094)
		::flixel::math::FlxPoint tmp8 = this->velocity;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1094)
		_this->value = tmp8;
		HX_STACK_LINE(1094)
		tmp5 = _this;
	}
	HX_STACK_LINE(1088)
	::String tmp6 = ::flixel::util::FlxStringUtil_obj::getDebugString(Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4).Add(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1088)
	return tmp6;
}


Float FlxObject_obj::set_x( Float NewX){
	HX_STACK_FRAME("flixel.FlxObject","set_x",0xb024e5cc,"flixel.FlxObject.set_x","flixel/FlxObject.hx",1098,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewX,"NewX")
	HX_STACK_LINE(1099)
	Float tmp = this->x = NewX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1099)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_x,return )

Float FlxObject_obj::set_y( Float NewY){
	HX_STACK_FRAME("flixel.FlxObject","set_y",0xb024e5cd,"flixel.FlxObject.set_y","flixel/FlxObject.hx",1103,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewY,"NewY")
	HX_STACK_LINE(1104)
	Float tmp = this->y = NewY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1104)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_y,return )

Float FlxObject_obj::set_width( Float Width){
	HX_STACK_FRAME("flixel.FlxObject","set_width",0x7d06d55a,"flixel.FlxObject.set_width","flixel/FlxObject.hx",1108,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_LINE(1110)
	bool tmp = (Width < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1110)
	if ((tmp)){
		HX_STACK_LINE(1112)
		{
			HX_STACK_LINE(1112)
			::flixel::_system::frontEnds::LogFrontEnd tmp1 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1112)
			::flixel::_system::debug::log::LogStyle tmp2 = ::flixel::_system::debug::log::LogStyle_obj::WARNING;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1112)
			tmp1->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(HX_HCSTRING("An object's width cannot be smaller than 0. Use offset for sprites to control the hitbox position!","\xf5","\x8d","\x0b","\x95"),tmp2,true);
		}
		HX_STACK_LINE(1113)
		Float tmp1 = Width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1113)
		return tmp1;
	}
	HX_STACK_LINE(1117)
	Float tmp1 = this->width = Width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1117)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_width,return )

Float FlxObject_obj::set_height( Float Height){
	HX_STACK_FRAME("flixel.FlxObject","set_height",0x9f435213,"flixel.FlxObject.set_height","flixel/FlxObject.hx",1121,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Height,"Height")
	HX_STACK_LINE(1123)
	bool tmp = (Height < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1123)
	if ((tmp)){
		HX_STACK_LINE(1125)
		{
			HX_STACK_LINE(1125)
			::flixel::_system::frontEnds::LogFrontEnd tmp1 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1125)
			::flixel::_system::debug::log::LogStyle tmp2 = ::flixel::_system::debug::log::LogStyle_obj::WARNING;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1125)
			tmp1->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(HX_HCSTRING("An object's height cannot be smaller than 0. Use offset for sprites to control the hitbox position!","\xb0","\x49","\x90","\xe4"),tmp2,true);
		}
		HX_STACK_LINE(1126)
		Float tmp1 = Height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1126)
		return tmp1;
	}
	HX_STACK_LINE(1130)
	Float tmp1 = this->height = Height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1130)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_height,return )

Float FlxObject_obj::get_width( ){
	HX_STACK_FRAME("flixel.FlxObject","get_width",0x99b5e94e,"flixel.FlxObject.get_width","flixel/FlxObject.hx",1134,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1135)
	Float tmp = this->width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1135)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_width,return )

Float FlxObject_obj::get_height( ){
	HX_STACK_FRAME("flixel.FlxObject","get_height",0x9bc5b39f,"flixel.FlxObject.get_height","flixel/FlxObject.hx",1139,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1140)
	Float tmp = this->height;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1140)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_height,return )

bool FlxObject_obj::get_solid( ){
	HX_STACK_FRAME("flixel.FlxObject","get_solid",0x5018e773,"flixel.FlxObject.get_solid","flixel/FlxObject.hx",1144,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1145)
	int tmp = this->allowCollisions;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1145)
	int tmp1 = (int(tmp) & int((int)4369));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1145)
	bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1145)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_solid,return )

bool FlxObject_obj::set_solid( bool Solid){
	HX_STACK_FRAME("flixel.FlxObject","set_solid",0x3369d37f,"flixel.FlxObject.set_solid","flixel/FlxObject.hx",1149,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Solid,"Solid")
	HX_STACK_LINE(1150)
	bool tmp = Solid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1150)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1150)
	if ((tmp)){
		HX_STACK_LINE(1150)
		tmp1 = (int)4369;
	}
	else{
		HX_STACK_LINE(1150)
		tmp1 = (int)0;
	}
	HX_STACK_LINE(1150)
	this->set_allowCollisions(tmp1);
	HX_STACK_LINE(1151)
	bool tmp2 = Solid;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1151)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_solid,return )

Float FlxObject_obj::set_angle( Float Value){
	HX_STACK_FRAME("flixel.FlxObject","set_angle",0xd5866327,"flixel.FlxObject.set_angle","flixel/FlxObject.hx",1155,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1156)
	Float tmp = this->angle = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1156)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_angle,return )

bool FlxObject_obj::set_moves( bool Value){
	HX_STACK_FRAME("flixel.FlxObject","set_moves",0xbf09eb96,"flixel.FlxObject.set_moves","flixel/FlxObject.hx",1160,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1161)
	bool tmp = this->moves = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1161)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_moves,return )

bool FlxObject_obj::set_immovable( bool Value){
	HX_STACK_FRAME("flixel.FlxObject","set_immovable",0xc5b8805e,"flixel.FlxObject.set_immovable","flixel/FlxObject.hx",1165,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1166)
	bool tmp = this->immovable = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1166)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_immovable,return )

bool FlxObject_obj::set_pixelPerfectRender( bool Value){
	HX_STACK_FRAME("flixel.FlxObject","set_pixelPerfectRender",0x84233609,"flixel.FlxObject.set_pixelPerfectRender","flixel/FlxObject.hx",1170,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1171)
	Dynamic tmp = this->pixelPerfectRender = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1171)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_pixelPerfectRender,return )

int FlxObject_obj::set_allowCollisions( int Value){
	HX_STACK_FRAME("flixel.FlxObject","set_allowCollisions",0x7975d9fe,"flixel.FlxObject.set_allowCollisions","flixel/FlxObject.hx",1175,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1176)
	int tmp = this->allowCollisions = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1176)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_allowCollisions,return )

::flixel::util::FlxPath FlxObject_obj::set_path( ::flixel::util::FlxPath path){
	HX_STACK_FRAME("flixel.FlxObject","set_path",0xde100cd1,"flixel.FlxObject.set_path","flixel/FlxObject.hx",1180,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(1181)
	::flixel::util::FlxPath tmp = this->path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1181)
	::flixel::util::FlxPath tmp1 = path;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1181)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1181)
	if ((tmp2)){
		HX_STACK_LINE(1182)
		::flixel::util::FlxPath tmp3 = path;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1182)
		return tmp3;
	}
	HX_STACK_LINE(1184)
	::flixel::util::FlxPath tmp3 = this->path;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1184)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1184)
	if ((tmp4)){
		HX_STACK_LINE(1185)
		::flixel::util::FlxPath tmp5 = this->path;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1185)
		tmp5->object = null();
	}
	HX_STACK_LINE(1187)
	bool tmp5 = (path != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1187)
	if ((tmp5)){
		HX_STACK_LINE(1188)
		path->object = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(1189)
	::flixel::util::FlxPath tmp6 = this->path = path;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1189)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_path,return )

bool FlxObject_obj::defaultPixelPerfectPosition;

Float FlxObject_obj::SEPARATE_BIAS;

int FlxObject_obj::LEFT;

int FlxObject_obj::RIGHT;

int FlxObject_obj::UP;

int FlxObject_obj::DOWN;

int FlxObject_obj::NONE;

int FlxObject_obj::CEILING;

int FlxObject_obj::FLOOR;

int FlxObject_obj::WALL;

int FlxObject_obj::ANY;

::flixel::math::FlxRect FlxObject_obj::_firstSeparateFlxRect;

::flixel::math::FlxRect FlxObject_obj::_secondSeparateFlxRect;

bool FlxObject_obj::separate( ::flixel::FlxObject Object1,::flixel::FlxObject Object2){
	HX_STACK_FRAME("flixel.FlxObject","separate",0x6cc23192,"flixel.FlxObject.separate","flixel/FlxObject.hx",80,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_LINE(81)
	::flixel::FlxObject tmp = Object1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	::flixel::FlxObject tmp1 = Object2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(81)
	bool tmp2 = ::flixel::FlxObject_obj::separateX(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(81)
	bool separatedX = tmp2;		HX_STACK_VAR(separatedX,"separatedX");
	HX_STACK_LINE(82)
	::flixel::FlxObject tmp3 = Object1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(82)
	::flixel::FlxObject tmp4 = Object2;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(82)
	bool tmp5 = ::flixel::FlxObject_obj::separateY(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(82)
	bool separatedY = tmp5;		HX_STACK_VAR(separatedY,"separatedY");
	HX_STACK_LINE(83)
	bool tmp6 = separatedX;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(83)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(83)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(83)
	if ((tmp7)){
		HX_STACK_LINE(83)
		tmp8 = separatedY;
	}
	else{
		HX_STACK_LINE(83)
		tmp8 = true;
	}
	HX_STACK_LINE(83)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separate,return )

bool FlxObject_obj::updateTouchingFlags( ::flixel::FlxObject Object1,::flixel::FlxObject Object2){
	HX_STACK_FRAME("flixel.FlxObject","updateTouchingFlags",0x15a0502c,"flixel.FlxObject.updateTouchingFlags","flixel/FlxObject.hx",95,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_LINE(96)
	::flixel::FlxObject tmp = Object1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	::flixel::FlxObject tmp1 = Object2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(96)
	bool tmp2 = ::flixel::FlxObject_obj::updateTouchingFlagsX(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(96)
	bool touchingX = tmp2;		HX_STACK_VAR(touchingX,"touchingX");
	HX_STACK_LINE(97)
	::flixel::FlxObject tmp3 = Object1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(97)
	::flixel::FlxObject tmp4 = Object2;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(97)
	bool tmp5 = ::flixel::FlxObject_obj::updateTouchingFlagsY(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(97)
	bool touchingY = tmp5;		HX_STACK_VAR(touchingY,"touchingY");
	HX_STACK_LINE(98)
	bool tmp6 = touchingX;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(98)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(98)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(98)
	if ((tmp7)){
		HX_STACK_LINE(98)
		tmp8 = touchingY;
	}
	else{
		HX_STACK_LINE(98)
		tmp8 = true;
	}
	HX_STACK_LINE(98)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,updateTouchingFlags,return )

Float FlxObject_obj::computeOverlapX( ::flixel::FlxObject Object1,::flixel::FlxObject Object2,hx::Null< bool >  __o_checkMaxOverlap){
bool checkMaxOverlap = __o_checkMaxOverlap.Default(true);
	HX_STACK_FRAME("flixel.FlxObject","computeOverlapX",0x240ec739,"flixel.FlxObject.computeOverlapX","flixel/FlxObject.hx",107,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_ARG(checkMaxOverlap,"checkMaxOverlap")
{
		HX_STACK_LINE(108)
		Float overlap = (int)0;		HX_STACK_VAR(overlap,"overlap");
		HX_STACK_LINE(110)
		Float tmp = Object1->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(110)
		Float tmp1 = Object1->last->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(110)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(110)
		Float obj1delta = tmp2;		HX_STACK_VAR(obj1delta,"obj1delta");
		HX_STACK_LINE(111)
		Float tmp3 = Object2->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(111)
		Float tmp4 = Object2->last->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(111)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(111)
		Float obj2delta = tmp5;		HX_STACK_VAR(obj2delta,"obj2delta");
		HX_STACK_LINE(113)
		bool tmp6 = (obj1delta != obj2delta);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(113)
		if ((tmp6)){
			HX_STACK_LINE(116)
			bool tmp7 = (obj1delta > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(116)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(116)
			if ((tmp7)){
				HX_STACK_LINE(116)
				tmp8 = obj1delta;
			}
			else{
				HX_STACK_LINE(116)
				Float tmp9 = obj1delta;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(116)
				tmp8 = -(tmp9);
			}
			HX_STACK_LINE(116)
			Float obj1deltaAbs = tmp8;		HX_STACK_VAR(obj1deltaAbs,"obj1deltaAbs");
			HX_STACK_LINE(117)
			bool tmp9 = (obj2delta > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(117)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(117)
			if ((tmp9)){
				HX_STACK_LINE(117)
				tmp10 = obj2delta;
			}
			else{
				HX_STACK_LINE(117)
				Float tmp11 = obj2delta;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(117)
				tmp10 = -(tmp11);
			}
			HX_STACK_LINE(117)
			Float obj2deltaAbs = tmp10;		HX_STACK_VAR(obj2deltaAbs,"obj2deltaAbs");
			HX_STACK_LINE(119)
			::flixel::math::FlxRect tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(119)
			{
				HX_STACK_LINE(119)
				::flixel::math::FlxRect tmp12 = ::flixel::FlxObject_obj::_firstSeparateFlxRect;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(119)
				::flixel::math::FlxRect _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(119)
				Float tmp13 = Object1->get_width();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(119)
				Float tmp14 = obj1deltaAbs;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(119)
				Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(119)
				Float Width = tmp15;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(119)
				Float tmp16 = Object1->get_height();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(119)
				Float Height = tmp16;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(119)
				Float tmp17 = Object1->x;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(119)
				bool tmp18 = (obj1delta > (int)0);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(119)
				Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(119)
				if ((tmp18)){
					HX_STACK_LINE(119)
					tmp19 = obj1delta;
				}
				else{
					HX_STACK_LINE(119)
					tmp19 = (int)0;
				}
				HX_STACK_LINE(119)
				Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(119)
				_this->x = tmp20;
				HX_STACK_LINE(119)
				Float tmp21 = Object1->last->y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(119)
				_this->y = tmp21;
				HX_STACK_LINE(119)
				_this->width = Width;
				HX_STACK_LINE(119)
				_this->height = Height;
				HX_STACK_LINE(119)
				tmp11 = _this;
			}
			HX_STACK_LINE(119)
			::flixel::math::FlxRect obj1rect = tmp11;		HX_STACK_VAR(obj1rect,"obj1rect");
			HX_STACK_LINE(120)
			::flixel::math::FlxRect tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(120)
			{
				HX_STACK_LINE(120)
				::flixel::math::FlxRect tmp13 = ::flixel::FlxObject_obj::_secondSeparateFlxRect;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(120)
				::flixel::math::FlxRect _this = tmp13;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(120)
				Float tmp14 = Object2->get_width();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(120)
				Float tmp15 = obj2deltaAbs;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(120)
				Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(120)
				Float Width = tmp16;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(120)
				Float tmp17 = Object2->get_height();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(120)
				Float Height = tmp17;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(120)
				Float tmp18 = Object2->x;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(120)
				bool tmp19 = (obj2delta > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(120)
				Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(120)
				if ((tmp19)){
					HX_STACK_LINE(120)
					tmp20 = obj2delta;
				}
				else{
					HX_STACK_LINE(120)
					tmp20 = (int)0;
				}
				HX_STACK_LINE(120)
				Float tmp21 = (tmp18 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(120)
				_this->x = tmp21;
				HX_STACK_LINE(120)
				Float tmp22 = Object2->last->y;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(120)
				_this->y = tmp22;
				HX_STACK_LINE(120)
				_this->width = Width;
				HX_STACK_LINE(120)
				_this->height = Height;
				HX_STACK_LINE(120)
				tmp12 = _this;
			}
			HX_STACK_LINE(120)
			::flixel::math::FlxRect obj2rect = tmp12;		HX_STACK_VAR(obj2rect,"obj2rect");
			HX_STACK_LINE(122)
			Float tmp13 = (obj1rect->x + obj1rect->width);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(122)
			Float tmp14 = obj2rect->x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(122)
			bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(122)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(122)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(122)
			if ((tmp16)){
				HX_STACK_LINE(122)
				Float tmp18 = obj1rect->x;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(122)
				Float tmp19 = (obj2rect->x + obj2rect->width);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(122)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(122)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(122)
				tmp17 = (tmp18 < tmp21);
			}
			else{
				HX_STACK_LINE(122)
				tmp17 = false;
			}
			HX_STACK_LINE(122)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(122)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(122)
			if ((tmp18)){
				HX_STACK_LINE(122)
				Float tmp20 = (obj1rect->y + obj1rect->height);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(122)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(122)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(122)
				Float tmp23 = obj2rect->y;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(122)
				tmp19 = (tmp22 > tmp23);
			}
			else{
				HX_STACK_LINE(122)
				tmp19 = false;
			}
			HX_STACK_LINE(122)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(122)
			if ((tmp19)){
				HX_STACK_LINE(122)
				Float tmp21 = obj1rect->y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(122)
				Float tmp22 = (obj2rect->y + obj2rect->height);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(122)
				Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(122)
				tmp20 = (tmp21 < tmp23);
			}
			else{
				HX_STACK_LINE(122)
				tmp20 = false;
			}
			HX_STACK_LINE(122)
			if ((tmp20)){
				HX_STACK_LINE(124)
				bool tmp21 = checkMaxOverlap;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(124)
				Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(124)
				if ((tmp21)){
					HX_STACK_LINE(124)
					Float tmp23 = (obj1deltaAbs + obj2deltaAbs);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(124)
					Float tmp24 = ::flixel::FlxObject_obj::SEPARATE_BIAS;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(124)
					tmp22 = (tmp23 + tmp24);
				}
				else{
					HX_STACK_LINE(124)
					tmp22 = (int)0;
				}
				HX_STACK_LINE(124)
				Float maxOverlap = tmp22;		HX_STACK_VAR(maxOverlap,"maxOverlap");
				HX_STACK_LINE(127)
				bool tmp23 = (obj1delta > obj2delta);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(127)
				if ((tmp23)){
					HX_STACK_LINE(129)
					Float tmp24 = Object1->x;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(129)
					Float tmp25 = Object1->get_width();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(129)
					Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(129)
					Float tmp27 = Object2->x;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(129)
					Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(129)
					overlap = tmp28;
					HX_STACK_LINE(130)
					bool tmp29 = checkMaxOverlap;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(130)
					bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(130)
					bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(130)
					if ((tmp30)){
						HX_STACK_LINE(130)
						tmp31 = (overlap > maxOverlap);
					}
					else{
						HX_STACK_LINE(130)
						tmp31 = false;
					}
					HX_STACK_LINE(130)
					bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(130)
					bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(130)
					bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(130)
					if ((tmp33)){
						HX_STACK_LINE(130)
						int tmp35 = (int(Object1->allowCollisions) & int((int)16));		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(130)
						int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(130)
						int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(130)
						tmp34 = (tmp37 == (int)0);
					}
					else{
						HX_STACK_LINE(130)
						tmp34 = true;
					}
					HX_STACK_LINE(130)
					bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(130)
					bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(130)
					if ((tmp35)){
						HX_STACK_LINE(130)
						int tmp37 = (int(Object2->allowCollisions) & int((int)1));		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(130)
						int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(130)
						tmp36 = (tmp38 == (int)0);
					}
					else{
						HX_STACK_LINE(130)
						tmp36 = true;
					}
					HX_STACK_LINE(130)
					if ((tmp36)){
						HX_STACK_LINE(132)
						overlap = (int)0;
					}
					else{
						HX_STACK_LINE(136)
						hx::OrEq(Object1->touching,(int)16);
						HX_STACK_LINE(137)
						hx::OrEq(Object2->touching,(int)1);
					}
				}
				else{
					HX_STACK_LINE(140)
					bool tmp24 = (obj1delta < obj2delta);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(140)
					if ((tmp24)){
						HX_STACK_LINE(142)
						Float tmp25 = Object1->x;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(142)
						Float tmp26 = Object2->get_width();		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(142)
						Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(142)
						Float tmp28 = Object2->x;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(142)
						Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(142)
						overlap = tmp29;
						HX_STACK_LINE(143)
						bool tmp30 = checkMaxOverlap;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(143)
						bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(143)
						bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(143)
						if ((tmp31)){
							HX_STACK_LINE(143)
							Float tmp33 = overlap;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(143)
							Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(143)
							Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(143)
							Float tmp36 = -(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(143)
							Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(143)
							Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(143)
							Float tmp39 = maxOverlap;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(143)
							tmp32 = (tmp38 > tmp39);
						}
						else{
							HX_STACK_LINE(143)
							tmp32 = false;
						}
						HX_STACK_LINE(143)
						bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(143)
						bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(143)
						bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(143)
						if ((tmp34)){
							HX_STACK_LINE(143)
							int tmp36 = (int(Object1->allowCollisions) & int((int)1));		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(143)
							int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(143)
							int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(143)
							tmp35 = (tmp38 == (int)0);
						}
						else{
							HX_STACK_LINE(143)
							tmp35 = true;
						}
						HX_STACK_LINE(143)
						bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(143)
						bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(143)
						if ((tmp36)){
							HX_STACK_LINE(143)
							int tmp38 = (int(Object2->allowCollisions) & int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(143)
							int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(143)
							tmp37 = (tmp39 == (int)0);
						}
						else{
							HX_STACK_LINE(143)
							tmp37 = true;
						}
						HX_STACK_LINE(143)
						if ((tmp37)){
							HX_STACK_LINE(145)
							overlap = (int)0;
						}
						else{
							HX_STACK_LINE(149)
							hx::OrEq(Object1->touching,(int)1);
							HX_STACK_LINE(150)
							hx::OrEq(Object2->touching,(int)16);
						}
					}
				}
			}
		}
		HX_STACK_LINE(155)
		Float tmp7 = overlap;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(155)
		return tmp7;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,computeOverlapX,return )

bool FlxObject_obj::separateX( ::flixel::FlxObject Object1,::flixel::FlxObject Object2){
	HX_STACK_FRAME("flixel.FlxObject","separateX",0xbd292e86,"flixel.FlxObject.separateX","flixel/FlxObject.hx",166,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_LINE(168)
	bool obj1immovable = Object1->immovable;		HX_STACK_VAR(obj1immovable,"obj1immovable");
	HX_STACK_LINE(169)
	bool obj2immovable = Object2->immovable;		HX_STACK_VAR(obj2immovable,"obj2immovable");
	HX_STACK_LINE(170)
	bool tmp = obj1immovable;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(170)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(170)
	if ((tmp)){
		HX_STACK_LINE(170)
		tmp1 = obj2immovable;
	}
	else{
		HX_STACK_LINE(170)
		tmp1 = false;
	}
	HX_STACK_LINE(170)
	if ((tmp1)){
		HX_STACK_LINE(172)
		return false;
	}
	HX_STACK_LINE(176)
	bool tmp2 = (Object1->flixelType == (int)3);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(176)
	if ((tmp2)){
		HX_STACK_LINE(178)
		::flixel::tile::FlxBaseTilemap tilemap = ((::flixel::tile::FlxBaseTilemap)(Object1));		HX_STACK_VAR(tilemap,"tilemap");
		HX_STACK_LINE(179)
		::flixel::FlxObject tmp3 = Object2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(179)
		Dynamic tmp4 = ::flixel::FlxObject_obj::separateX_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(179)
		bool tmp5 = tilemap->overlapsWithCallback(tmp3,tmp4,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(179)
		return tmp5;
	}
	HX_STACK_LINE(181)
	bool tmp3 = (Object2->flixelType == (int)3);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(181)
	if ((tmp3)){
		HX_STACK_LINE(183)
		::flixel::tile::FlxBaseTilemap tilemap = ((::flixel::tile::FlxBaseTilemap)(Object2));		HX_STACK_VAR(tilemap,"tilemap");
		HX_STACK_LINE(184)
		::flixel::FlxObject tmp4 = Object1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(184)
		Dynamic tmp5 = ::flixel::FlxObject_obj::separateX_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(184)
		bool tmp6 = tilemap->overlapsWithCallback(tmp4,tmp5,true,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(184)
		return tmp6;
	}
	HX_STACK_LINE(187)
	::flixel::FlxObject tmp4 = Object1;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(187)
	::flixel::FlxObject tmp5 = Object2;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(187)
	Float tmp6 = ::flixel::FlxObject_obj::computeOverlapX(tmp4,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(187)
	Float overlap = tmp6;		HX_STACK_VAR(overlap,"overlap");
	HX_STACK_LINE(189)
	bool tmp7 = (overlap != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(189)
	if ((tmp7)){
		HX_STACK_LINE(191)
		Float tmp8 = Object1->velocity->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(191)
		Float obj1v = tmp8;		HX_STACK_VAR(obj1v,"obj1v");
		HX_STACK_LINE(192)
		Float tmp9 = Object2->velocity->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(192)
		Float obj2v = tmp9;		HX_STACK_VAR(obj2v,"obj2v");
		HX_STACK_LINE(194)
		bool tmp10 = obj1immovable;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(194)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(194)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(194)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(194)
		if ((tmp12)){
			HX_STACK_LINE(194)
			bool tmp14 = obj2immovable;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(194)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(194)
			tmp13 = !(tmp15);
		}
		else{
			HX_STACK_LINE(194)
			tmp13 = false;
		}
		HX_STACK_LINE(194)
		if ((tmp13)){
			HX_STACK_LINE(196)
			hx::MultEq(overlap,((Float)0.5));
			HX_STACK_LINE(197)
			Float tmp14 = (Object1->x - overlap);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(197)
			Object1->set_x(tmp14);
			HX_STACK_LINE(198)
			{
				HX_STACK_LINE(198)
				::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(198)
				Float tmp15 = (_g->x + overlap);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(198)
				_g->set_x(tmp15);
			}
			HX_STACK_LINE(200)
			Float tmp15 = (obj2v * obj2v);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(200)
			Float tmp16 = Object2->mass;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(200)
			Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(200)
			Float tmp18 = Object1->mass;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(200)
			Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(200)
			Float tmp20 = ::Math_obj::sqrt(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(200)
			bool tmp21 = (obj2v > (int)0);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(200)
			int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(200)
			if ((tmp21)){
				HX_STACK_LINE(200)
				tmp22 = (int)1;
			}
			else{
				HX_STACK_LINE(200)
				tmp22 = (int)-1;
			}
			HX_STACK_LINE(200)
			Float tmp23 = (tmp20 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(200)
			Float obj1velocity = tmp23;		HX_STACK_VAR(obj1velocity,"obj1velocity");
			HX_STACK_LINE(201)
			Float tmp24 = (obj1v * obj1v);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(201)
			Float tmp25 = Object1->mass;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(201)
			Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(201)
			Float tmp27 = Object2->mass;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(201)
			Float tmp28 = (Float(tmp26) / Float(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(201)
			Float tmp29 = ::Math_obj::sqrt(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(201)
			bool tmp30 = (obj1v > (int)0);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(201)
			int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(201)
			if ((tmp30)){
				HX_STACK_LINE(201)
				tmp31 = (int)1;
			}
			else{
				HX_STACK_LINE(201)
				tmp31 = (int)-1;
			}
			HX_STACK_LINE(201)
			Float tmp32 = (tmp29 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(201)
			Float obj2velocity = tmp32;		HX_STACK_VAR(obj2velocity,"obj2velocity");
			HX_STACK_LINE(202)
			Float tmp33 = (obj1velocity + obj2velocity);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(202)
			Float tmp34 = (tmp33 * ((Float)0.5));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(202)
			Float average = tmp34;		HX_STACK_VAR(average,"average");
			HX_STACK_LINE(203)
			hx::SubEq(obj1velocity,average);
			HX_STACK_LINE(204)
			hx::SubEq(obj2velocity,average);
			HX_STACK_LINE(205)
			Float tmp35 = average;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(205)
			Float tmp36 = (obj1velocity * Object1->elasticity);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(205)
			Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(205)
			Object1->velocity->set_x(tmp37);
			HX_STACK_LINE(206)
			Float tmp38 = average;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(206)
			Float tmp39 = (obj2velocity * Object2->elasticity);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(206)
			Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(206)
			Object2->velocity->set_x(tmp40);
		}
		else{
			HX_STACK_LINE(208)
			bool tmp14 = obj1immovable;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(208)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(208)
			if ((tmp15)){
				HX_STACK_LINE(210)
				Float tmp16 = (Object1->x - overlap);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(210)
				Object1->set_x(tmp16);
				HX_STACK_LINE(211)
				Float tmp17 = obj2v;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(211)
				Float tmp18 = (obj1v * Object1->elasticity);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(211)
				Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(211)
				Object1->velocity->set_x(tmp19);
			}
			else{
				HX_STACK_LINE(213)
				bool tmp16 = obj2immovable;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(213)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(213)
				if ((tmp17)){
					HX_STACK_LINE(215)
					{
						HX_STACK_LINE(215)
						::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(215)
						Float tmp18 = (_g->x + overlap);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(215)
						_g->set_x(tmp18);
					}
					HX_STACK_LINE(216)
					Float tmp18 = obj1v;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(216)
					Float tmp19 = (obj2v * Object2->elasticity);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(216)
					Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(216)
					Object2->velocity->set_x(tmp20);
				}
			}
		}
		HX_STACK_LINE(218)
		return true;
	}
	HX_STACK_LINE(221)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separateX,return )

bool FlxObject_obj::updateTouchingFlagsX( ::flixel::FlxObject Object1,::flixel::FlxObject Object2){
	HX_STACK_FRAME("flixel.FlxObject","updateTouchingFlagsX",0xd6a5d6ac,"flixel.FlxObject.updateTouchingFlagsX","flixel/FlxObject.hx",232,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_LINE(234)
	bool tmp = (Object1->flixelType == (int)3);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(234)
	if ((tmp)){
		HX_STACK_LINE(236)
		::flixel::tile::FlxBaseTilemap tilemap = ((::flixel::tile::FlxBaseTilemap)(Object1));		HX_STACK_VAR(tilemap,"tilemap");
		HX_STACK_LINE(237)
		::flixel::FlxObject tmp1 = Object2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(237)
		Dynamic tmp2 = ::flixel::FlxObject_obj::updateTouchingFlagsX_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(237)
		bool tmp3 = tilemap->overlapsWithCallback(tmp1,tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(237)
		return tmp3;
	}
	HX_STACK_LINE(239)
	bool tmp1 = (Object2->flixelType == (int)3);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(239)
	if ((tmp1)){
		HX_STACK_LINE(241)
		::flixel::tile::FlxBaseTilemap tilemap = ((::flixel::tile::FlxBaseTilemap)(Object2));		HX_STACK_VAR(tilemap,"tilemap");
		HX_STACK_LINE(242)
		::flixel::FlxObject tmp2 = Object1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(242)
		Dynamic tmp3 = ::flixel::FlxObject_obj::updateTouchingFlagsX_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(242)
		bool tmp4 = tilemap->overlapsWithCallback(tmp2,tmp3,true,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(242)
		return tmp4;
	}
	HX_STACK_LINE(245)
	::flixel::FlxObject tmp2 = Object1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(245)
	::flixel::FlxObject tmp3 = Object2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(245)
	Float tmp4 = ::flixel::FlxObject_obj::computeOverlapX(tmp2,tmp3,false);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(245)
	bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(245)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,updateTouchingFlagsX,return )

Float FlxObject_obj::computeOverlapY( ::flixel::FlxObject Object1,::flixel::FlxObject Object2,hx::Null< bool >  __o_checkMaxOverlap){
bool checkMaxOverlap = __o_checkMaxOverlap.Default(true);
	HX_STACK_FRAME("flixel.FlxObject","computeOverlapY",0x240ec73a,"flixel.FlxObject.computeOverlapY","flixel/FlxObject.hx",254,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_ARG(checkMaxOverlap,"checkMaxOverlap")
{
		HX_STACK_LINE(255)
		Float overlap = (int)0;		HX_STACK_VAR(overlap,"overlap");
		HX_STACK_LINE(257)
		Float tmp = Object1->y;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(257)
		Float tmp1 = Object1->last->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(257)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(257)
		Float obj1delta = tmp2;		HX_STACK_VAR(obj1delta,"obj1delta");
		HX_STACK_LINE(258)
		Float tmp3 = Object2->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(258)
		Float tmp4 = Object2->last->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(258)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(258)
		Float obj2delta = tmp5;		HX_STACK_VAR(obj2delta,"obj2delta");
		HX_STACK_LINE(260)
		bool tmp6 = (obj1delta != obj2delta);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(260)
		if ((tmp6)){
			HX_STACK_LINE(263)
			bool tmp7 = (obj1delta > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(263)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(263)
			if ((tmp7)){
				HX_STACK_LINE(263)
				tmp8 = obj1delta;
			}
			else{
				HX_STACK_LINE(263)
				Float tmp9 = obj1delta;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(263)
				tmp8 = -(tmp9);
			}
			HX_STACK_LINE(263)
			Float obj1deltaAbs = tmp8;		HX_STACK_VAR(obj1deltaAbs,"obj1deltaAbs");
			HX_STACK_LINE(264)
			bool tmp9 = (obj2delta > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(264)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(264)
			if ((tmp9)){
				HX_STACK_LINE(264)
				tmp10 = obj2delta;
			}
			else{
				HX_STACK_LINE(264)
				Float tmp11 = obj2delta;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(264)
				tmp10 = -(tmp11);
			}
			HX_STACK_LINE(264)
			Float obj2deltaAbs = tmp10;		HX_STACK_VAR(obj2deltaAbs,"obj2deltaAbs");
			HX_STACK_LINE(266)
			::flixel::math::FlxRect tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(266)
			{
				HX_STACK_LINE(266)
				::flixel::math::FlxRect tmp12 = ::flixel::FlxObject_obj::_firstSeparateFlxRect;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(266)
				::flixel::math::FlxRect _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(266)
				Float tmp13 = Object1->get_width();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(266)
				Float Width = tmp13;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(266)
				Float tmp14 = Object1->get_height();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(266)
				Float tmp15 = obj1deltaAbs;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(266)
				Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(266)
				Float Height = tmp16;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(266)
				_this->x = Object1->x;
				HX_STACK_LINE(266)
				Float tmp17 = Object1->y;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(266)
				bool tmp18 = (obj1delta > (int)0);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(266)
				Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(266)
				if ((tmp18)){
					HX_STACK_LINE(266)
					tmp19 = obj1delta;
				}
				else{
					HX_STACK_LINE(266)
					tmp19 = (int)0;
				}
				HX_STACK_LINE(266)
				Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(266)
				_this->y = tmp20;
				HX_STACK_LINE(266)
				_this->width = Width;
				HX_STACK_LINE(266)
				_this->height = Height;
				HX_STACK_LINE(266)
				tmp11 = _this;
			}
			HX_STACK_LINE(266)
			::flixel::math::FlxRect obj1rect = tmp11;		HX_STACK_VAR(obj1rect,"obj1rect");
			HX_STACK_LINE(267)
			::flixel::math::FlxRect tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(267)
			{
				HX_STACK_LINE(267)
				::flixel::math::FlxRect tmp13 = ::flixel::FlxObject_obj::_secondSeparateFlxRect;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(267)
				::flixel::math::FlxRect _this = tmp13;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(267)
				Float tmp14 = Object2->get_width();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(267)
				Float Width = tmp14;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(267)
				Float tmp15 = Object2->get_height();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(267)
				Float tmp16 = obj2deltaAbs;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(267)
				Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(267)
				Float Height = tmp17;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(267)
				_this->x = Object2->x;
				HX_STACK_LINE(267)
				Float tmp18 = Object2->y;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(267)
				bool tmp19 = (obj2delta > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(267)
				Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(267)
				if ((tmp19)){
					HX_STACK_LINE(267)
					tmp20 = obj2delta;
				}
				else{
					HX_STACK_LINE(267)
					tmp20 = (int)0;
				}
				HX_STACK_LINE(267)
				Float tmp21 = (tmp18 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(267)
				_this->y = tmp21;
				HX_STACK_LINE(267)
				_this->width = Width;
				HX_STACK_LINE(267)
				_this->height = Height;
				HX_STACK_LINE(267)
				tmp12 = _this;
			}
			HX_STACK_LINE(267)
			::flixel::math::FlxRect obj2rect = tmp12;		HX_STACK_VAR(obj2rect,"obj2rect");
			HX_STACK_LINE(269)
			Float tmp13 = (obj1rect->x + obj1rect->width);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(269)
			Float tmp14 = obj2rect->x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(269)
			bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(269)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(269)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(269)
			if ((tmp16)){
				HX_STACK_LINE(269)
				Float tmp18 = obj1rect->x;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(269)
				Float tmp19 = (obj2rect->x + obj2rect->width);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(269)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(269)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(269)
				tmp17 = (tmp18 < tmp21);
			}
			else{
				HX_STACK_LINE(269)
				tmp17 = false;
			}
			HX_STACK_LINE(269)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(269)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(269)
			if ((tmp18)){
				HX_STACK_LINE(269)
				Float tmp20 = (obj1rect->y + obj1rect->height);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(269)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(269)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(269)
				Float tmp23 = obj2rect->y;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(269)
				tmp19 = (tmp22 > tmp23);
			}
			else{
				HX_STACK_LINE(269)
				tmp19 = false;
			}
			HX_STACK_LINE(269)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(269)
			if ((tmp19)){
				HX_STACK_LINE(269)
				Float tmp21 = obj1rect->y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(269)
				Float tmp22 = (obj2rect->y + obj2rect->height);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(269)
				Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(269)
				tmp20 = (tmp21 < tmp23);
			}
			else{
				HX_STACK_LINE(269)
				tmp20 = false;
			}
			HX_STACK_LINE(269)
			if ((tmp20)){
				HX_STACK_LINE(271)
				bool tmp21 = checkMaxOverlap;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(271)
				Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(271)
				if ((tmp21)){
					HX_STACK_LINE(271)
					Float tmp23 = (obj1deltaAbs + obj2deltaAbs);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(271)
					Float tmp24 = ::flixel::FlxObject_obj::SEPARATE_BIAS;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(271)
					tmp22 = (tmp23 + tmp24);
				}
				else{
					HX_STACK_LINE(271)
					tmp22 = (int)0;
				}
				HX_STACK_LINE(271)
				Float maxOverlap = tmp22;		HX_STACK_VAR(maxOverlap,"maxOverlap");
				HX_STACK_LINE(274)
				bool tmp23 = (obj1delta > obj2delta);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(274)
				if ((tmp23)){
					HX_STACK_LINE(276)
					Float tmp24 = Object1->y;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(276)
					Float tmp25 = Object1->get_height();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(276)
					Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(276)
					Float tmp27 = Object2->y;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(276)
					Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(276)
					overlap = tmp28;
					HX_STACK_LINE(277)
					bool tmp29 = checkMaxOverlap;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(277)
					bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(277)
					bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(277)
					if ((tmp30)){
						HX_STACK_LINE(277)
						tmp31 = (overlap > maxOverlap);
					}
					else{
						HX_STACK_LINE(277)
						tmp31 = false;
					}
					HX_STACK_LINE(277)
					bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(277)
					bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(277)
					bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(277)
					if ((tmp33)){
						HX_STACK_LINE(277)
						int tmp35 = (int(Object1->allowCollisions) & int((int)4096));		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(277)
						int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(277)
						int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(277)
						tmp34 = (tmp37 == (int)0);
					}
					else{
						HX_STACK_LINE(277)
						tmp34 = true;
					}
					HX_STACK_LINE(277)
					bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(277)
					bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(277)
					if ((tmp35)){
						HX_STACK_LINE(277)
						int tmp37 = (int(Object2->allowCollisions) & int((int)256));		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(277)
						int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(277)
						tmp36 = (tmp38 == (int)0);
					}
					else{
						HX_STACK_LINE(277)
						tmp36 = true;
					}
					HX_STACK_LINE(277)
					if ((tmp36)){
						HX_STACK_LINE(279)
						overlap = (int)0;
					}
					else{
						HX_STACK_LINE(283)
						hx::OrEq(Object1->touching,(int)4096);
						HX_STACK_LINE(284)
						hx::OrEq(Object2->touching,(int)256);
					}
				}
				else{
					HX_STACK_LINE(287)
					bool tmp24 = (obj1delta < obj2delta);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(287)
					if ((tmp24)){
						HX_STACK_LINE(289)
						Float tmp25 = Object1->y;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(289)
						Float tmp26 = Object2->get_height();		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(289)
						Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(289)
						Float tmp28 = Object2->y;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(289)
						Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(289)
						overlap = tmp29;
						HX_STACK_LINE(290)
						bool tmp30 = checkMaxOverlap;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(290)
						bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(290)
						bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(290)
						if ((tmp31)){
							HX_STACK_LINE(290)
							Float tmp33 = overlap;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(290)
							Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(290)
							Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(290)
							Float tmp36 = -(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(290)
							Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(290)
							Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(290)
							Float tmp39 = maxOverlap;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(290)
							tmp32 = (tmp38 > tmp39);
						}
						else{
							HX_STACK_LINE(290)
							tmp32 = false;
						}
						HX_STACK_LINE(290)
						bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(290)
						bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(290)
						bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(290)
						if ((tmp34)){
							HX_STACK_LINE(290)
							int tmp36 = (int(Object1->allowCollisions) & int((int)256));		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(290)
							int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(290)
							int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(290)
							tmp35 = (tmp38 == (int)0);
						}
						else{
							HX_STACK_LINE(290)
							tmp35 = true;
						}
						HX_STACK_LINE(290)
						bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(290)
						bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(290)
						if ((tmp36)){
							HX_STACK_LINE(290)
							int tmp38 = (int(Object2->allowCollisions) & int((int)4096));		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(290)
							int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(290)
							tmp37 = (tmp39 == (int)0);
						}
						else{
							HX_STACK_LINE(290)
							tmp37 = true;
						}
						HX_STACK_LINE(290)
						if ((tmp37)){
							HX_STACK_LINE(292)
							overlap = (int)0;
						}
						else{
							HX_STACK_LINE(296)
							hx::OrEq(Object1->touching,(int)256);
							HX_STACK_LINE(297)
							hx::OrEq(Object2->touching,(int)4096);
						}
					}
				}
			}
		}
		HX_STACK_LINE(302)
		Float tmp7 = overlap;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(302)
		return tmp7;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,computeOverlapY,return )

bool FlxObject_obj::separateY( ::flixel::FlxObject Object1,::flixel::FlxObject Object2){
	HX_STACK_FRAME("flixel.FlxObject","separateY",0xbd292e87,"flixel.FlxObject.separateY","flixel/FlxObject.hx",313,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_LINE(315)
	bool obj1immovable = Object1->immovable;		HX_STACK_VAR(obj1immovable,"obj1immovable");
	HX_STACK_LINE(316)
	bool obj2immovable = Object2->immovable;		HX_STACK_VAR(obj2immovable,"obj2immovable");
	HX_STACK_LINE(317)
	bool tmp = obj1immovable;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(317)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(317)
	if ((tmp)){
		HX_STACK_LINE(317)
		tmp1 = obj2immovable;
	}
	else{
		HX_STACK_LINE(317)
		tmp1 = false;
	}
	HX_STACK_LINE(317)
	if ((tmp1)){
		HX_STACK_LINE(319)
		return false;
	}
	HX_STACK_LINE(323)
	bool tmp2 = (Object1->flixelType == (int)3);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(323)
	if ((tmp2)){
		HX_STACK_LINE(325)
		::flixel::tile::FlxBaseTilemap tilemap = ((::flixel::tile::FlxBaseTilemap)(Object1));		HX_STACK_VAR(tilemap,"tilemap");
		HX_STACK_LINE(326)
		::flixel::FlxObject tmp3 = Object2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(326)
		Dynamic tmp4 = ::flixel::FlxObject_obj::separateY_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(326)
		bool tmp5 = tilemap->overlapsWithCallback(tmp3,tmp4,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(326)
		return tmp5;
	}
	HX_STACK_LINE(328)
	bool tmp3 = (Object2->flixelType == (int)3);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(328)
	if ((tmp3)){
		HX_STACK_LINE(330)
		::flixel::tile::FlxBaseTilemap tilemap = ((::flixel::tile::FlxBaseTilemap)(Object2));		HX_STACK_VAR(tilemap,"tilemap");
		HX_STACK_LINE(331)
		::flixel::FlxObject tmp4 = Object1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(331)
		Dynamic tmp5 = ::flixel::FlxObject_obj::separateY_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(331)
		bool tmp6 = tilemap->overlapsWithCallback(tmp4,tmp5,true,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(331)
		return tmp6;
	}
	HX_STACK_LINE(334)
	::flixel::FlxObject tmp4 = Object1;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(334)
	::flixel::FlxObject tmp5 = Object2;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(334)
	Float tmp6 = ::flixel::FlxObject_obj::computeOverlapY(tmp4,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(334)
	Float overlap = tmp6;		HX_STACK_VAR(overlap,"overlap");
	HX_STACK_LINE(336)
	bool tmp7 = (overlap != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(336)
	if ((tmp7)){
		HX_STACK_LINE(338)
		Float tmp8 = Object1->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(338)
		Float tmp9 = Object1->last->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(338)
		Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(338)
		Float obj1delta = tmp10;		HX_STACK_VAR(obj1delta,"obj1delta");
		HX_STACK_LINE(339)
		Float tmp11 = Object2->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(339)
		Float tmp12 = Object2->last->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(339)
		Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(339)
		Float obj2delta = tmp13;		HX_STACK_VAR(obj2delta,"obj2delta");
		HX_STACK_LINE(340)
		Float tmp14 = Object1->velocity->y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(340)
		Float obj1v = tmp14;		HX_STACK_VAR(obj1v,"obj1v");
		HX_STACK_LINE(341)
		Float tmp15 = Object2->velocity->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(341)
		Float obj2v = tmp15;		HX_STACK_VAR(obj2v,"obj2v");
		HX_STACK_LINE(343)
		bool tmp16 = obj1immovable;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(343)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(343)
		bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(343)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(343)
		if ((tmp18)){
			HX_STACK_LINE(343)
			bool tmp20 = obj2immovable;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(343)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(343)
			tmp19 = !(tmp21);
		}
		else{
			HX_STACK_LINE(343)
			tmp19 = false;
		}
		HX_STACK_LINE(343)
		if ((tmp19)){
			HX_STACK_LINE(345)
			hx::MultEq(overlap,((Float)0.5));
			HX_STACK_LINE(346)
			Float tmp20 = (Object1->y - overlap);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(346)
			Object1->set_y(tmp20);
			HX_STACK_LINE(347)
			{
				HX_STACK_LINE(347)
				::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(347)
				Float tmp21 = (_g->y + overlap);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(347)
				_g->set_y(tmp21);
			}
			HX_STACK_LINE(349)
			Float tmp21 = (obj2v * obj2v);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(349)
			Float tmp22 = Object2->mass;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(349)
			Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(349)
			Float tmp24 = Object1->mass;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(349)
			Float tmp25 = (Float(tmp23) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(349)
			Float tmp26 = ::Math_obj::sqrt(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(349)
			bool tmp27 = (obj2v > (int)0);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(349)
			int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(349)
			if ((tmp27)){
				HX_STACK_LINE(349)
				tmp28 = (int)1;
			}
			else{
				HX_STACK_LINE(349)
				tmp28 = (int)-1;
			}
			HX_STACK_LINE(349)
			Float tmp29 = (tmp26 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(349)
			Float obj1velocity = tmp29;		HX_STACK_VAR(obj1velocity,"obj1velocity");
			HX_STACK_LINE(350)
			Float tmp30 = (obj1v * obj1v);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(350)
			Float tmp31 = Object1->mass;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(350)
			Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(350)
			Float tmp33 = Object2->mass;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(350)
			Float tmp34 = (Float(tmp32) / Float(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(350)
			Float tmp35 = ::Math_obj::sqrt(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(350)
			bool tmp36 = (obj1v > (int)0);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(350)
			int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(350)
			if ((tmp36)){
				HX_STACK_LINE(350)
				tmp37 = (int)1;
			}
			else{
				HX_STACK_LINE(350)
				tmp37 = (int)-1;
			}
			HX_STACK_LINE(350)
			Float tmp38 = (tmp35 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(350)
			Float obj2velocity = tmp38;		HX_STACK_VAR(obj2velocity,"obj2velocity");
			HX_STACK_LINE(351)
			Float tmp39 = (obj1velocity + obj2velocity);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(351)
			Float tmp40 = (tmp39 * ((Float)0.5));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(351)
			Float average = tmp40;		HX_STACK_VAR(average,"average");
			HX_STACK_LINE(352)
			hx::SubEq(obj1velocity,average);
			HX_STACK_LINE(353)
			hx::SubEq(obj2velocity,average);
			HX_STACK_LINE(354)
			Float tmp41 = average;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(354)
			Float tmp42 = (obj1velocity * Object1->elasticity);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(354)
			Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(354)
			Object1->velocity->set_y(tmp43);
			HX_STACK_LINE(355)
			Float tmp44 = average;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(355)
			Float tmp45 = (obj2velocity * Object2->elasticity);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(355)
			Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(355)
			Object2->velocity->set_y(tmp46);
		}
		else{
			HX_STACK_LINE(357)
			bool tmp20 = obj1immovable;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(357)
			bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(357)
			if ((tmp21)){
				HX_STACK_LINE(359)
				Float tmp22 = (Object1->y - overlap);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(359)
				Object1->set_y(tmp22);
				HX_STACK_LINE(360)
				Float tmp23 = obj2v;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(360)
				Float tmp24 = (obj1v * Object1->elasticity);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(360)
				Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(360)
				Object1->velocity->set_y(tmp25);
				HX_STACK_LINE(362)
				bool tmp26 = Object1->collisonXDrag;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(362)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(362)
				bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(362)
				if ((tmp27)){
					HX_STACK_LINE(362)
					tmp28 = Object2->active;
				}
				else{
					HX_STACK_LINE(362)
					tmp28 = false;
				}
				HX_STACK_LINE(362)
				bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(362)
				bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(362)
				if ((tmp29)){
					HX_STACK_LINE(362)
					tmp30 = Object2->moves;
				}
				else{
					HX_STACK_LINE(362)
					tmp30 = false;
				}
				HX_STACK_LINE(362)
				bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(362)
				if ((tmp30)){
					HX_STACK_LINE(362)
					tmp31 = (obj1delta > obj2delta);
				}
				else{
					HX_STACK_LINE(362)
					tmp31 = false;
				}
				HX_STACK_LINE(362)
				if ((tmp31)){
					HX_STACK_LINE(364)
					::flixel::FlxObject _g = Object1;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(364)
					Float tmp32 = _g->x;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(364)
					Float tmp33 = Object2->x;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(364)
					Float tmp34 = Object2->last->x;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(364)
					Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(364)
					Float tmp36 = (tmp32 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(364)
					_g->set_x(tmp36);
				}
			}
			else{
				HX_STACK_LINE(367)
				bool tmp22 = obj2immovable;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(367)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(367)
				if ((tmp23)){
					HX_STACK_LINE(369)
					{
						HX_STACK_LINE(369)
						::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(369)
						Float tmp24 = (_g->y + overlap);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(369)
						_g->set_y(tmp24);
					}
					HX_STACK_LINE(370)
					Float tmp24 = obj1v;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(370)
					Float tmp25 = (obj2v * Object2->elasticity);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(370)
					Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(370)
					Object2->velocity->set_y(tmp26);
					HX_STACK_LINE(372)
					bool tmp27 = Object2->collisonXDrag;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(372)
					bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(372)
					bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(372)
					if ((tmp28)){
						HX_STACK_LINE(372)
						tmp29 = Object1->active;
					}
					else{
						HX_STACK_LINE(372)
						tmp29 = false;
					}
					HX_STACK_LINE(372)
					bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(372)
					bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(372)
					if ((tmp30)){
						HX_STACK_LINE(372)
						tmp31 = Object1->moves;
					}
					else{
						HX_STACK_LINE(372)
						tmp31 = false;
					}
					HX_STACK_LINE(372)
					bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(372)
					if ((tmp31)){
						HX_STACK_LINE(372)
						tmp32 = (obj1delta < obj2delta);
					}
					else{
						HX_STACK_LINE(372)
						tmp32 = false;
					}
					HX_STACK_LINE(372)
					if ((tmp32)){
						HX_STACK_LINE(374)
						::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(374)
						Float tmp33 = _g->x;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(374)
						Float tmp34 = Object1->x;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(374)
						Float tmp35 = Object1->last->x;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(374)
						Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(374)
						Float tmp37 = (tmp33 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(374)
						_g->set_x(tmp37);
					}
				}
			}
		}
		HX_STACK_LINE(377)
		return true;
	}
	HX_STACK_LINE(380)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separateY,return )

bool FlxObject_obj::updateTouchingFlagsY( ::flixel::FlxObject Object1,::flixel::FlxObject Object2){
	HX_STACK_FRAME("flixel.FlxObject","updateTouchingFlagsY",0xd6a5d6ad,"flixel.FlxObject.updateTouchingFlagsY","flixel/FlxObject.hx",391,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_LINE(393)
	bool tmp = (Object1->flixelType == (int)3);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(393)
	if ((tmp)){
		HX_STACK_LINE(395)
		::flixel::tile::FlxBaseTilemap tilemap = ((::flixel::tile::FlxBaseTilemap)(Object1));		HX_STACK_VAR(tilemap,"tilemap");
		HX_STACK_LINE(396)
		::flixel::FlxObject tmp1 = Object2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(396)
		Dynamic tmp2 = ::flixel::FlxObject_obj::updateTouchingFlagsY_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(396)
		bool tmp3 = tilemap->overlapsWithCallback(tmp1,tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(396)
		return tmp3;
	}
	HX_STACK_LINE(398)
	bool tmp1 = (Object2->flixelType == (int)3);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(398)
	if ((tmp1)){
		HX_STACK_LINE(400)
		::flixel::tile::FlxBaseTilemap tilemap = ((::flixel::tile::FlxBaseTilemap)(Object2));		HX_STACK_VAR(tilemap,"tilemap");
		HX_STACK_LINE(401)
		::flixel::FlxObject tmp2 = Object1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(401)
		Dynamic tmp3 = ::flixel::FlxObject_obj::updateTouchingFlagsY_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(401)
		bool tmp4 = tilemap->overlapsWithCallback(tmp2,tmp3,true,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(401)
		return tmp4;
	}
	HX_STACK_LINE(404)
	::flixel::FlxObject tmp2 = Object1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(404)
	::flixel::FlxObject tmp3 = Object2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(404)
	Float tmp4 = ::flixel::FlxObject_obj::computeOverlapY(tmp2,tmp3,false);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(404)
	bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(404)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,updateTouchingFlagsY,return )


FlxObject_obj::FlxObject_obj()
{
}

void FlxObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxObject);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_MARK_MEMBER_NAME(pixelPerfectPosition,"pixelPerfectPosition");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(moves,"moves");
	HX_MARK_MEMBER_NAME(immovable,"immovable");
	HX_MARK_MEMBER_NAME(scrollFactor,"scrollFactor");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(acceleration,"acceleration");
	HX_MARK_MEMBER_NAME(drag,"drag");
	HX_MARK_MEMBER_NAME(maxVelocity,"maxVelocity");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(mass,"mass");
	HX_MARK_MEMBER_NAME(elasticity,"elasticity");
	HX_MARK_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_MARK_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_MARK_MEMBER_NAME(angularDrag,"angularDrag");
	HX_MARK_MEMBER_NAME(maxAngular,"maxAngular");
	HX_MARK_MEMBER_NAME(health,"health");
	HX_MARK_MEMBER_NAME(touching,"touching");
	HX_MARK_MEMBER_NAME(wasTouching,"wasTouching");
	HX_MARK_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_MARK_MEMBER_NAME(collisonXDrag,"collisonXDrag");
	HX_MARK_MEMBER_NAME(debugBoundingBoxColor,"debugBoundingBoxColor");
	HX_MARK_MEMBER_NAME(ignoreDrawDebug,"ignoreDrawDebug");
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_VISIT_MEMBER_NAME(pixelPerfectPosition,"pixelPerfectPosition");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(moves,"moves");
	HX_VISIT_MEMBER_NAME(immovable,"immovable");
	HX_VISIT_MEMBER_NAME(scrollFactor,"scrollFactor");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(acceleration,"acceleration");
	HX_VISIT_MEMBER_NAME(drag,"drag");
	HX_VISIT_MEMBER_NAME(maxVelocity,"maxVelocity");
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(mass,"mass");
	HX_VISIT_MEMBER_NAME(elasticity,"elasticity");
	HX_VISIT_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_VISIT_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_VISIT_MEMBER_NAME(angularDrag,"angularDrag");
	HX_VISIT_MEMBER_NAME(maxAngular,"maxAngular");
	HX_VISIT_MEMBER_NAME(health,"health");
	HX_VISIT_MEMBER_NAME(touching,"touching");
	HX_VISIT_MEMBER_NAME(wasTouching,"wasTouching");
	HX_VISIT_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_VISIT_MEMBER_NAME(collisonXDrag,"collisonXDrag");
	HX_VISIT_MEMBER_NAME(debugBoundingBoxColor,"debugBoundingBoxColor");
	HX_VISIT_MEMBER_NAME(ignoreDrawDebug,"ignoreDrawDebug");
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { return drag; }
		if (HX_FIELD_EQ(inName,"last") ) { return last; }
		if (HX_FIELD_EQ(inName,"mass") ) { return mass; }
		if (HX_FIELD_EQ(inName,"path") ) { return path; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"hurt") ) { return hurt_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp == hx::paccAlways ? get_width() : width; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"moves") ) { return moves; }
		if (HX_FIELD_EQ(inName,"solid") ) { if (inCallProp == hx::paccAlways) return get_solid(); }
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp == hx::paccAlways ? get_height() : height; }
		if (HX_FIELD_EQ(inName,"health") ) { return health; }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { return velocity; }
		if (HX_FIELD_EQ(inName,"touching") ) { return touching; }
		if (HX_FIELD_EQ(inName,"initVars") ) { return initVars_dyn(); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"set_path") ) { return set_path_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immovable") ) { return immovable; }
		if (HX_FIELD_EQ(inName,"getHitbox") ) { return getHitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"drawDebug") ) { return drawDebug_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_solid") ) { return get_solid_dyn(); }
		if (HX_FIELD_EQ(inName,"set_solid") ) { return set_solid_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_moves") ) { return set_moves_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { return elasticity; }
		if (HX_FIELD_EQ(inName,"maxAngular") ) { return maxAngular; }
		if (HX_FIELD_EQ(inName,"overlapsAt") ) { return overlapsAt_dyn(); }
		if (HX_FIELD_EQ(inName,"isOnScreen") ) { return isOnScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"isTouching") ) { return isTouching_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxVelocity") ) { return maxVelocity; }
		if (HX_FIELD_EQ(inName,"angularDrag") ) { return angularDrag; }
		if (HX_FIELD_EQ(inName,"wasTouching") ) { return wasTouching; }
		if (HX_FIELD_EQ(inName,"getPosition") ) { return getPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"getMidpoint") ) { return getMidpoint_dyn(); }
		if (HX_FIELD_EQ(inName,"justTouched") ) { return justTouched_dyn(); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scrollFactor") ) { return scrollFactor; }
		if (HX_FIELD_EQ(inName,"acceleration") ) { return acceleration; }
		if (HX_FIELD_EQ(inName,"updateMotion") ) { return updateMotion_dyn(); }
		if (HX_FIELD_EQ(inName,"screenCenter") ) { return screenCenter_dyn(); }
		if (HX_FIELD_EQ(inName,"endDrawDebug") ) { return endDrawDebug_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisonXDrag") ) { return collisonXDrag; }
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return overlapsPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"inWorldBounds") ) { return inWorldBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"set_immovable") ) { return set_immovable_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initMotionVars") ) { return initMotionVars_dyn(); }
		if (HX_FIELD_EQ(inName,"beginDrawDebug") ) { return beginDrawDebug_dyn(); }
		if (HX_FIELD_EQ(inName,"getBoundingBox") ) { return getBoundingBox_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { return angularVelocity; }
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { return allowCollisions; }
		if (HX_FIELD_EQ(inName,"ignoreDrawDebug") ) { return ignoreDrawDebug; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"overlapsCallback") ) { return overlapsCallback_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getScreenPosition") ) { return getScreenPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"drawDebugOnCamera") ) { return drawDebugOnCamera_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { return pixelPerfectRender; }
		if (HX_FIELD_EQ(inName,"overlapsAtCallback") ) { return overlapsAtCallback_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { return angularAcceleration; }
		if (HX_FIELD_EQ(inName,"set_allowCollisions") ) { return set_allowCollisions_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"pixelPerfectPosition") ) { return pixelPerfectPosition; }
		if (HX_FIELD_EQ(inName,"isPixelPerfectRender") ) { return isPixelPerfectRender_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"debugBoundingBoxColor") ) { return debugBoundingBoxColor; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"set_pixelPerfectRender") ) { return set_pixelPerfectRender_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"separate") ) { outValue = separate_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"separateX") ) { outValue = separateX_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"separateY") ) { outValue = separateY_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SEPARATE_BIAS") ) { outValue = SEPARATE_BIAS; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"computeOverlapX") ) { outValue = computeOverlapX_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"computeOverlapY") ) { outValue = computeOverlapY_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateTouchingFlags") ) { outValue = updateTouchingFlags_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateTouchingFlagsX") ) { outValue = updateTouchingFlagsX_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"updateTouchingFlagsY") ) { outValue = updateTouchingFlagsY_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_firstSeparateFlxRect") ) { outValue = _firstSeparateFlxRect; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_secondSeparateFlxRect") ) { outValue = _secondSeparateFlxRect; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"defaultPixelPerfectPosition") ) { outValue = defaultPixelPerfectPosition; return true;  }
	}
	return false;
}

Dynamic FlxObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue);x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue);y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { drag=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mass") ) { mass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"path") ) { if (inCallProp == hx::paccAlways) return set_path(inValue);path=inValue.Cast< ::flixel::util::FlxPath >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue);width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == hx::paccAlways) return set_angle(inValue);angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moves") ) { if (inCallProp == hx::paccAlways) return set_moves(inValue);moves=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"solid") ) { if (inCallProp == hx::paccAlways) return set_solid(inValue); }
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue);height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"health") ) { health=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touching") ) { touching=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immovable") ) { if (inCallProp == hx::paccAlways) return set_immovable(inValue);immovable=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { elasticity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxAngular") ) { maxAngular=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxVelocity") ) { maxVelocity=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angularDrag") ) { angularDrag=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wasTouching") ) { wasTouching=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scrollFactor") ) { scrollFactor=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"acceleration") ) { acceleration=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisonXDrag") ) { collisonXDrag=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { angularVelocity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { if (inCallProp == hx::paccAlways) return set_allowCollisions(inValue);allowCollisions=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ignoreDrawDebug") ) { ignoreDrawDebug=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { if (inCallProp == hx::paccAlways) return set_pixelPerfectRender(inValue);pixelPerfectRender=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { angularAcceleration=inValue.Cast< Float >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"pixelPerfectPosition") ) { pixelPerfectPosition=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"debugBoundingBoxColor") ) { debugBoundingBoxColor=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxObject_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"SEPARATE_BIAS") ) { SEPARATE_BIAS=ioValue.Cast< Float >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_firstSeparateFlxRect") ) { _firstSeparateFlxRect=ioValue.Cast< ::flixel::math::FlxRect >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_secondSeparateFlxRect") ) { _secondSeparateFlxRect=ioValue.Cast< ::flixel::math::FlxRect >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"defaultPixelPerfectPosition") ) { defaultPixelPerfectPosition=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void FlxObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("pixelPerfectRender","\xdd","\x59","\x4f","\x2f"));
	outFields->push(HX_HCSTRING("pixelPerfectPosition","\xf0","\x7e","\x5e","\x3d"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("moves","\x42","\xcc","\x65","\x0c"));
	outFields->push(HX_HCSTRING("immovable","\x0a","\x27","\x70","\x27"));
	outFields->push(HX_HCSTRING("solid","\x2b","\xb4","\xc5","\x80"));
	outFields->push(HX_HCSTRING("scrollFactor","\xbc","\xec","\xcf","\x3b"));
	outFields->push(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"));
	outFields->push(HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"));
	outFields->push(HX_HCSTRING("drag","\xf4","\x2b","\x70","\x42"));
	outFields->push(HX_HCSTRING("maxVelocity","\xe1","\x0c","\xc4","\x94"));
	outFields->push(HX_HCSTRING("last","\x56","\x0a","\xad","\x47"));
	outFields->push(HX_HCSTRING("mass","\xf4","\x40","\x56","\x48"));
	outFields->push(HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d"));
	outFields->push(HX_HCSTRING("angularVelocity","\x1f","\x1f","\xfe","\x58"));
	outFields->push(HX_HCSTRING("angularAcceleration","\x42","\xc6","\x00","\x9a"));
	outFields->push(HX_HCSTRING("angularDrag","\xf6","\x1f","\x19","\x9c"));
	outFields->push(HX_HCSTRING("maxAngular","\x9e","\x28","\xf6","\xc2"));
	outFields->push(HX_HCSTRING("health","\x9c","\x28","\x06","\xfd"));
	outFields->push(HX_HCSTRING("touching","\x83","\x16","\x25","\x00"));
	outFields->push(HX_HCSTRING("wasTouching","\xcc","\x44","\xe4","\x5f"));
	outFields->push(HX_HCSTRING("allowCollisions","\xaa","\xc9","\xd9","\x59"));
	outFields->push(HX_HCSTRING("collisonXDrag","\x97","\xca","\xfa","\x0a"));
	outFields->push(HX_HCSTRING("debugBoundingBoxColor","\x4f","\xf7","\x30","\x61"));
	outFields->push(HX_HCSTRING("ignoreDrawDebug","\x3d","\xfc","\x11","\x6b"));
	outFields->push(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));
	outFields->push(HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"));
	outFields->push(HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxObject_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxObject_obj,pixelPerfectRender),HX_HCSTRING("pixelPerfectRender","\xdd","\x59","\x4f","\x2f")},
	{hx::fsBool,(int)offsetof(FlxObject_obj,pixelPerfectPosition),HX_HCSTRING("pixelPerfectPosition","\xf0","\x7e","\x5e","\x3d")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{hx::fsBool,(int)offsetof(FlxObject_obj,moves),HX_HCSTRING("moves","\x42","\xcc","\x65","\x0c")},
	{hx::fsBool,(int)offsetof(FlxObject_obj,immovable),HX_HCSTRING("immovable","\x0a","\x27","\x70","\x27")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxObject_obj,scrollFactor),HX_HCSTRING("scrollFactor","\xbc","\xec","\xcf","\x3b")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxObject_obj,velocity),HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxObject_obj,acceleration),HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxObject_obj,drag),HX_HCSTRING("drag","\xf4","\x2b","\x70","\x42")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxObject_obj,maxVelocity),HX_HCSTRING("maxVelocity","\xe1","\x0c","\xc4","\x94")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxObject_obj,last),HX_HCSTRING("last","\x56","\x0a","\xad","\x47")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,mass),HX_HCSTRING("mass","\xf4","\x40","\x56","\x48")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,elasticity),HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,angularVelocity),HX_HCSTRING("angularVelocity","\x1f","\x1f","\xfe","\x58")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,angularAcceleration),HX_HCSTRING("angularAcceleration","\x42","\xc6","\x00","\x9a")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,angularDrag),HX_HCSTRING("angularDrag","\xf6","\x1f","\x19","\x9c")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,maxAngular),HX_HCSTRING("maxAngular","\x9e","\x28","\xf6","\xc2")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,health),HX_HCSTRING("health","\x9c","\x28","\x06","\xfd")},
	{hx::fsInt,(int)offsetof(FlxObject_obj,touching),HX_HCSTRING("touching","\x83","\x16","\x25","\x00")},
	{hx::fsInt,(int)offsetof(FlxObject_obj,wasTouching),HX_HCSTRING("wasTouching","\xcc","\x44","\xe4","\x5f")},
	{hx::fsInt,(int)offsetof(FlxObject_obj,allowCollisions),HX_HCSTRING("allowCollisions","\xaa","\xc9","\xd9","\x59")},
	{hx::fsBool,(int)offsetof(FlxObject_obj,collisonXDrag),HX_HCSTRING("collisonXDrag","\x97","\xca","\xfa","\x0a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxObject_obj,debugBoundingBoxColor),HX_HCSTRING("debugBoundingBoxColor","\x4f","\xf7","\x30","\x61")},
	{hx::fsBool,(int)offsetof(FlxObject_obj,ignoreDrawDebug),HX_HCSTRING("ignoreDrawDebug","\x3d","\xfc","\x11","\x6b")},
	{hx::fsObject /*::flixel::util::FlxPath*/ ,(int)offsetof(FlxObject_obj,path),HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxObject_obj,_point),HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxObject_obj,_rect),HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &FlxObject_obj::defaultPixelPerfectPosition,HX_HCSTRING("defaultPixelPerfectPosition","\x51","\x0a","\xc2","\xb0")},
	{hx::fsFloat,(void *) &FlxObject_obj::SEPARATE_BIAS,HX_HCSTRING("SEPARATE_BIAS","\x15","\x78","\x21","\xa0")},
	{hx::fsInt,(void *) &FlxObject_obj::LEFT,HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")},
	{hx::fsInt,(void *) &FlxObject_obj::RIGHT,HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")},
	{hx::fsInt,(void *) &FlxObject_obj::UP,HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00")},
	{hx::fsInt,(void *) &FlxObject_obj::DOWN,HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d")},
	{hx::fsInt,(void *) &FlxObject_obj::NONE,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{hx::fsInt,(void *) &FlxObject_obj::CEILING,HX_HCSTRING("CEILING","\xdd","\x32","\x72","\xb3")},
	{hx::fsInt,(void *) &FlxObject_obj::FLOOR,HX_HCSTRING("FLOOR","\xac","\x09","\x85","\x80")},
	{hx::fsInt,(void *) &FlxObject_obj::WALL,HX_HCSTRING("WALL","\x0a","\x25","\xb3","\x39")},
	{hx::fsInt,(void *) &FlxObject_obj::ANY,HX_HCSTRING("ANY","\xcc","\x96","\x31","\x00")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(void *) &FlxObject_obj::_firstSeparateFlxRect,HX_HCSTRING("_firstSeparateFlxRect","\x22","\xb9","\x2f","\x5e")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(void *) &FlxObject_obj::_secondSeparateFlxRect,HX_HCSTRING("_secondSeparateFlxRect","\xc0","\xbd","\xfc","\xda")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("pixelPerfectRender","\xdd","\x59","\x4f","\x2f"),
	HX_HCSTRING("pixelPerfectPosition","\xf0","\x7e","\x5e","\x3d"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("moves","\x42","\xcc","\x65","\x0c"),
	HX_HCSTRING("immovable","\x0a","\x27","\x70","\x27"),
	HX_HCSTRING("scrollFactor","\xbc","\xec","\xcf","\x3b"),
	HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"),
	HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"),
	HX_HCSTRING("drag","\xf4","\x2b","\x70","\x42"),
	HX_HCSTRING("maxVelocity","\xe1","\x0c","\xc4","\x94"),
	HX_HCSTRING("last","\x56","\x0a","\xad","\x47"),
	HX_HCSTRING("mass","\xf4","\x40","\x56","\x48"),
	HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d"),
	HX_HCSTRING("angularVelocity","\x1f","\x1f","\xfe","\x58"),
	HX_HCSTRING("angularAcceleration","\x42","\xc6","\x00","\x9a"),
	HX_HCSTRING("angularDrag","\xf6","\x1f","\x19","\x9c"),
	HX_HCSTRING("maxAngular","\x9e","\x28","\xf6","\xc2"),
	HX_HCSTRING("health","\x9c","\x28","\x06","\xfd"),
	HX_HCSTRING("touching","\x83","\x16","\x25","\x00"),
	HX_HCSTRING("wasTouching","\xcc","\x44","\xe4","\x5f"),
	HX_HCSTRING("allowCollisions","\xaa","\xc9","\xd9","\x59"),
	HX_HCSTRING("collisonXDrag","\x97","\xca","\xfa","\x0a"),
	HX_HCSTRING("debugBoundingBoxColor","\x4f","\xf7","\x30","\x61"),
	HX_HCSTRING("ignoreDrawDebug","\x3d","\xfc","\x11","\x6b"),
	HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"),
	HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"),
	HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe"),
	HX_HCSTRING("initVars","\xdc","\x5a","\x00","\x53"),
	HX_HCSTRING("initMotionVars","\x32","\xe4","\x28","\x65"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updateMotion","\x1f","\x2d","\x21","\xcb"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("overlaps","\x0c","\xd3","\x2a","\x45"),
	HX_HCSTRING("overlapsCallback","\xf1","\x14","\xbf","\xb4"),
	HX_HCSTRING("overlapsAt","\x1f","\xe7","\xce","\x03"),
	HX_HCSTRING("overlapsAtCallback","\x04","\xf4","\x81","\x3b"),
	HX_HCSTRING("overlapsPoint","\xa4","\xc5","\xbd","\x35"),
	HX_HCSTRING("inWorldBounds","\x82","\x46","\xf2","\xf1"),
	HX_HCSTRING("getScreenPosition","\x6b","\x93","\x88","\x24"),
	HX_HCSTRING("getPosition","\x5f","\x63","\xee","\xf0"),
	HX_HCSTRING("getMidpoint","\x7e","\xd8","\xfb","\x50"),
	HX_HCSTRING("getHitbox","\xce","\x76","\x7e","\xd3"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("isOnScreen","\xf5","\x43","\xb9","\xa1"),
	HX_HCSTRING("isPixelPerfectRender","\x67","\x1c","\xf9","\x26"),
	HX_HCSTRING("isTouching","\x8d","\x28","\xd4","\x7a"),
	HX_HCSTRING("justTouched","\x12","\x59","\xb8","\x91"),
	HX_HCSTRING("hurt","\x0f","\x5c","\x17","\x45"),
	HX_HCSTRING("screenCenter","\x61","\x2e","\xf9","\xe2"),
	HX_HCSTRING("setPosition","\x6b","\x6a","\x5b","\xfb"),
	HX_HCSTRING("setSize","\x83","\xe1","\xd7","\x11"),
	HX_HCSTRING("drawDebug","\xaf","\x87","\x2a","\x9f"),
	HX_HCSTRING("drawDebugOnCamera","\xf3","\x47","\x7b","\xcb"),
	HX_HCSTRING("beginDrawDebug","\x46","\x70","\x87","\x3b"),
	HX_HCSTRING("endDrawDebug","\x54","\x90","\x2c","\xae"),
	HX_HCSTRING("getBoundingBox","\x11","\xe8","\x45","\x0d"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("get_solid","\x82","\x10","\x6f","\xc4"),
	HX_HCSTRING("set_solid","\x8e","\xfc","\xbf","\xa7"),
	HX_HCSTRING("set_angle","\x36","\x8c","\xdc","\x49"),
	HX_HCSTRING("set_moves","\xa5","\x14","\x60","\x33"),
	HX_HCSTRING("set_immovable","\xed","\xdc","\xd9","\x2d"),
	HX_HCSTRING("set_pixelPerfectRender","\x9a","\x4f","\x8f","\xbc"),
	HX_HCSTRING("set_allowCollisions","\xcd","\x8b","\x81","\x21"),
	HX_HCSTRING("set_path","\xa2","\xfa","\x69","\x78"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxObject_obj::defaultPixelPerfectPosition,"defaultPixelPerfectPosition");
	HX_MARK_MEMBER_NAME(FlxObject_obj::SEPARATE_BIAS,"SEPARATE_BIAS");
	HX_MARK_MEMBER_NAME(FlxObject_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(FlxObject_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(FlxObject_obj::UP,"UP");
	HX_MARK_MEMBER_NAME(FlxObject_obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(FlxObject_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(FlxObject_obj::CEILING,"CEILING");
	HX_MARK_MEMBER_NAME(FlxObject_obj::FLOOR,"FLOOR");
	HX_MARK_MEMBER_NAME(FlxObject_obj::WALL,"WALL");
	HX_MARK_MEMBER_NAME(FlxObject_obj::ANY,"ANY");
	HX_MARK_MEMBER_NAME(FlxObject_obj::_firstSeparateFlxRect,"_firstSeparateFlxRect");
	HX_MARK_MEMBER_NAME(FlxObject_obj::_secondSeparateFlxRect,"_secondSeparateFlxRect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::defaultPixelPerfectPosition,"defaultPixelPerfectPosition");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::SEPARATE_BIAS,"SEPARATE_BIAS");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::UP,"UP");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::CEILING,"CEILING");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::FLOOR,"FLOOR");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::WALL,"WALL");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::ANY,"ANY");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::_firstSeparateFlxRect,"_firstSeparateFlxRect");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::_secondSeparateFlxRect,"_secondSeparateFlxRect");
};

#endif

hx::Class FlxObject_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("defaultPixelPerfectPosition","\x51","\x0a","\xc2","\xb0"),
	HX_HCSTRING("SEPARATE_BIAS","\x15","\x78","\x21","\xa0"),
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00"),
	HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d"),
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("CEILING","\xdd","\x32","\x72","\xb3"),
	HX_HCSTRING("FLOOR","\xac","\x09","\x85","\x80"),
	HX_HCSTRING("WALL","\x0a","\x25","\xb3","\x39"),
	HX_HCSTRING("ANY","\xcc","\x96","\x31","\x00"),
	HX_HCSTRING("_firstSeparateFlxRect","\x22","\xb9","\x2f","\x5e"),
	HX_HCSTRING("_secondSeparateFlxRect","\xc0","\xbd","\xfc","\xda"),
	HX_HCSTRING("separate","\x63","\x1f","\x1c","\x07"),
	HX_HCSTRING("updateTouchingFlags","\xfb","\x01","\xac","\xbd"),
	HX_HCSTRING("computeOverlapX","\x88","\xa5","\xab","\xdc"),
	HX_HCSTRING("separateX","\x95","\x57","\x7f","\x31"),
	HX_HCSTRING("updateTouchingFlagsX","\xfd","\xb9","\xd5","\x38"),
	HX_HCSTRING("computeOverlapY","\x89","\xa5","\xab","\xdc"),
	HX_HCSTRING("separateY","\x96","\x57","\x7f","\x31"),
	HX_HCSTRING("updateTouchingFlagsY","\xfe","\xb9","\xd5","\x38"),
	::String(null()) };

void FlxObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.FlxObject","\x1f","\x50","\x95","\x35");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxObject_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxObject_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxObject_obj >;
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

void FlxObject_obj::__boot()
{
	defaultPixelPerfectPosition= false;
	SEPARATE_BIAS= ((Float)4);
	LEFT= (int)1;
	RIGHT= (int)16;
	UP= (int)256;
	DOWN= (int)4096;
	NONE= (int)0;
	CEILING= (int)256;
	FLOOR= (int)4096;
	WALL= (int)17;
	ANY= (int)4369;
struct _Function_0_1{
	inline static ::flixel::math::FlxRect Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",69,0xf0fe0d80)
		{
			HX_STACK_LINE(69)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(69)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(69)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(69)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(69)
			::flixel::math::FlxRect tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(69)
			{
				HX_STACK_LINE(69)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp1 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(69)
				::flixel::math::FlxRect tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(69)
				::flixel::math::FlxRect _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(69)
				_this->x = X;
				HX_STACK_LINE(69)
				_this->y = Y;
				HX_STACK_LINE(69)
				_this->width = Width;
				HX_STACK_LINE(69)
				_this->height = Height;
				HX_STACK_LINE(69)
				tmp = _this;
			}
			HX_STACK_LINE(69)
			::flixel::math::FlxRect rect = tmp;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(69)
			rect->_inPool = false;
			HX_STACK_LINE(69)
			return rect;
		}
		return null();
	}
};
	_firstSeparateFlxRect= _Function_0_1::Block();
struct _Function_0_2{
	inline static ::flixel::math::FlxRect Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",70,0xf0fe0d80)
		{
			HX_STACK_LINE(70)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(70)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(70)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(70)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(70)
			::flixel::math::FlxRect tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(70)
			{
				HX_STACK_LINE(70)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp1 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(70)
				::flixel::math::FlxRect tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(70)
				::flixel::math::FlxRect _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(70)
				_this->x = X;
				HX_STACK_LINE(70)
				_this->y = Y;
				HX_STACK_LINE(70)
				_this->width = Width;
				HX_STACK_LINE(70)
				_this->height = Height;
				HX_STACK_LINE(70)
				tmp = _this;
			}
			HX_STACK_LINE(70)
			::flixel::math::FlxRect rect = tmp;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(70)
			rect->_inPool = false;
			HX_STACK_LINE(70)
			return rect;
		}
		return null();
	}
};
	_secondSeparateFlxRect= _Function_0_2::Block();
}

} // end namespace flixel
