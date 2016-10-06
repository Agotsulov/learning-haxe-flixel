#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
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
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawBaseItem
#include <flixel/graphics/tile/FlxDrawBaseItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawItemType
#include <flixel/graphics/tile/FlxDrawItemType.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawTilesItem
#include <flixel/graphics/tile/FlxDrawTilesItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawTrianglesItem
#include <flixel/graphics/tile/FlxDrawTrianglesItem.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxColorTransformUtil
#include <flixel/util/FlxColorTransformUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
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
#ifndef INCLUDED_openfl__legacy_display_Bitmap
#include <openfl/_legacy/display/Bitmap.h>
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
#ifndef INCLUDED_openfl__legacy_display_PixelSnapping
#include <openfl/_legacy/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_TriangleCulling
#include <openfl/_legacy/display/TriangleCulling.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_filters_BitmapFilter
#include <openfl/_legacy/filters/BitmapFilter.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Transform
#include <openfl/_legacy/geom/Transform.h>
#endif
namespace flixel{

Void FlxCamera_obj::__construct(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< Float >  __o_Zoom)
{
HX_STACK_FRAME("flixel.FlxCamera","new",0x0e8a9f77,"flixel.FlxCamera.new","flixel/FlxCamera.hx",42,0xe7aeb95a)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Width,"Width")
HX_STACK_ARG(__o_Height,"Height")
HX_STACK_ARG(__o_Zoom,"Zoom")
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
Float Zoom = __o_Zoom.Default(0);
{
	HX_STACK_LINE(393)
	this->_helperMatrix = ::flixel::math::FlxMatrix_obj::__new(null(),null(),null(),null(),null(),null());
	struct _Function_1_1{
		inline static ::flixel::math::FlxRect Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",370,0xe7aeb95a)
			{
				HX_STACK_LINE(370)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(370)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(370)
				Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(370)
				Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(370)
				::flixel::math::FlxRect tmp;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(370)
				{
					HX_STACK_LINE(370)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp1 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(370)
					::flixel::math::FlxRect tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(370)
					::flixel::math::FlxRect _this = tmp2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(370)
					_this->x = X;
					HX_STACK_LINE(370)
					_this->y = Y;
					HX_STACK_LINE(370)
					_this->width = Width;
					HX_STACK_LINE(370)
					_this->height = Height;
					HX_STACK_LINE(370)
					tmp = _this;
				}
				HX_STACK_LINE(370)
				::flixel::math::FlxRect rect = tmp;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(370)
				rect->_inPool = false;
				HX_STACK_LINE(370)
				return rect;
			}
			return null();
		}
	};
	HX_STACK_LINE(370)
	this->_bounds = _Function_1_1::Block();
	HX_STACK_LINE(365)
	this->_scrollRect = ::openfl::_legacy::display::Sprite_obj::__new();
	HX_STACK_LINE(345)
	this->initialZoom = ((Float)1);
	struct _Function_1_2{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",336,0xe7aeb95a)
			{
				HX_STACK_LINE(336)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(336)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(336)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(336)
				::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(336)
				Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(336)
				Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(336)
				::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(336)
				::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(336)
				point->_inPool = false;
				HX_STACK_LINE(336)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(336)
	this->_point = _Function_1_2::Block();
	HX_STACK_LINE(332)
	this->_fxShakeAxes = ::flixel::util::FlxAxes_obj::XY;
	struct _Function_1_3{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",328,0xe7aeb95a)
			{
				HX_STACK_LINE(328)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(328)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(328)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(328)
				::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(328)
				Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(328)
				Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(328)
				::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(328)
				::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(328)
				point->_inPool = false;
				HX_STACK_LINE(328)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(328)
	this->_fxShakeOffset = _Function_1_3::Block();
	HX_STACK_LINE(318)
	this->_fxShakeDuration = ((Float)0);
	HX_STACK_LINE(313)
	this->_fxShakeIntensity = ((Float)0);
	HX_STACK_LINE(308)
	this->_fxFadeAlpha = ((Float)0);
	HX_STACK_LINE(303)
	this->_fxFadeCompleted = true;
	HX_STACK_LINE(299)
	this->_fxFadeComplete = null();
	HX_STACK_LINE(294)
	this->_fxFadeIn = false;
	HX_STACK_LINE(288)
	this->_fxFadeDuration = ((Float)0);
	struct _Function_1_4{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",283,0xe7aeb95a)
			{
				HX_STACK_LINE(283)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(283)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(283)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(283)
				::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(283)
				Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(283)
				Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(283)
				::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(283)
				::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(283)
				point->_inPool = false;
				HX_STACK_LINE(283)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(283)
	this->_scrollTarget = _Function_1_4::Block();
	HX_STACK_LINE(275)
	this->_fxFadeColor = (int)0;
	HX_STACK_LINE(271)
	this->_fxFlashAlpha = ((Float)0);
	HX_STACK_LINE(267)
	this->_fxFlashComplete = null();
	HX_STACK_LINE(262)
	this->_fxFlashDuration = ((Float)0);
	HX_STACK_LINE(257)
	this->_fxFlashColor = (int)0;
	struct _Function_1_5{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",252,0xe7aeb95a)
			{
				HX_STACK_LINE(252)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(252)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(252)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(252)
				::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(252)
				Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(252)
				Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(252)
				::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(252)
				::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(252)
				point->_inPool = false;
				HX_STACK_LINE(252)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(252)
	this->_flashOffset = _Function_1_5::Block();
	HX_STACK_LINE(244)
	this->_flashPoint = ::openfl::_legacy::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(231)
	this->filtersEnabled = true;
	struct _Function_1_6{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",227,0xe7aeb95a)
			{
				HX_STACK_LINE(227)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(227)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(227)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(227)
				::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(227)
				Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(227)
				Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(227)
				::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(227)
				::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(227)
				point->_inPool = false;
				HX_STACK_LINE(227)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(227)
	this->followLead = _Function_1_6::Block();
	HX_STACK_LINE(223)
	this->antialiasing = false;
	HX_STACK_LINE(218)
	this->color = (int)-1;
	HX_STACK_LINE(213)
	this->angle = ((Float)0);
	HX_STACK_LINE(208)
	this->alpha = ((Float)1);
	HX_STACK_LINE(199)
	this->height = (int)0;
	HX_STACK_LINE(195)
	this->width = (int)0;
	HX_STACK_LINE(182)
	this->flashSprite = ::openfl::_legacy::display::Sprite_obj::__new();
	HX_STACK_LINE(173)
	this->useBgAlphaBlending = false;
	HX_STACK_LINE(145)
	this->regen = false;
	struct _Function_1_7{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",135,0xe7aeb95a)
			{
				HX_STACK_LINE(135)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(135)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(135)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(135)
				::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(135)
				Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(135)
				Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(135)
				::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(135)
				::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(135)
				point->_inPool = false;
				HX_STACK_LINE(135)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(135)
	this->scroll = _Function_1_7::Block();
	struct _Function_1_8{
		inline static Float Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",106,0xe7aeb95a)
			{
				HX_STACK_LINE(106)
				int tmp = ::flixel::FlxG_obj::updateFramerate;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(106)
				return (Float((int)60) / Float(tmp));
			}
			return null();
		}
	};
	HX_STACK_LINE(106)
	this->followLerp = _Function_1_8::Block();
	struct _Function_1_9{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",100,0xe7aeb95a)
			{
				HX_STACK_LINE(100)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(100)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(100)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(100)
				::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(100)
				Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(100)
				Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(100)
				::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(100)
				::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(100)
				point->_inPool = false;
				HX_STACK_LINE(100)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(100)
	this->targetOffset = _Function_1_9::Block();
	HX_STACK_LINE(66)
	this->y = ((Float)0);
	HX_STACK_LINE(60)
	this->x = ((Float)0);
	HX_STACK_LINE(739)
	super::__construct();
	HX_STACK_LINE(741)
	int tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(741)
	this->set_x(tmp);
	HX_STACK_LINE(742)
	int tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(742)
	this->set_y(tmp1);
	HX_STACK_LINE(745)
	bool tmp2 = (Width <= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(745)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(745)
	if ((tmp2)){
		HX_STACK_LINE(745)
		tmp3 = ::flixel::FlxG_obj::width;
	}
	else{
		HX_STACK_LINE(745)
		tmp3 = Width;
	}
	HX_STACK_LINE(745)
	this->set_width(tmp3);
	HX_STACK_LINE(746)
	bool tmp4 = (Height <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(746)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(746)
	if ((tmp4)){
		HX_STACK_LINE(746)
		tmp5 = ::flixel::FlxG_obj::height;
	}
	else{
		HX_STACK_LINE(746)
		tmp5 = Height;
	}
	HX_STACK_LINE(746)
	this->set_height(tmp5);
	HX_STACK_LINE(747)
	int tmp6 = this->width;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(747)
	int tmp7 = this->height;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(747)
	::openfl::_legacy::geom::Rectangle tmp8 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(747)
	this->_flashRect = tmp8;
	HX_STACK_LINE(749)
	::openfl::_legacy::display::Sprite tmp9 = this->flashSprite;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(749)
	::openfl::_legacy::display::Sprite tmp10 = this->_scrollRect;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(749)
	tmp9->addChild(tmp10);
	HX_STACK_LINE(750)
	::openfl::_legacy::display::Sprite tmp11 = this->_scrollRect;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(750)
	::openfl::_legacy::geom::Rectangle tmp12 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(750)
	tmp11->set_scrollRect(tmp12);
	HX_STACK_LINE(752)
	bool tmp13 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(752)
	this->pixelPerfectRender = tmp13;
	HX_STACK_LINE(754)
	bool tmp14 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(754)
	if ((tmp14)){
		HX_STACK_LINE(756)
		::flixel::FlxSprite tmp15 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(756)
		this->screen = tmp15;
		HX_STACK_LINE(757)
		int tmp16 = this->width;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(757)
		int tmp17 = this->height;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(757)
		::openfl::_legacy::display::BitmapData tmp18 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp16,tmp17,true,(int)0,null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(757)
		this->buffer = tmp18;
		HX_STACK_LINE(758)
		::flixel::FlxSprite tmp19 = this->screen;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(758)
		::openfl::_legacy::display::BitmapData tmp20 = this->buffer;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(758)
		tmp19->set_pixels(tmp20);
		HX_STACK_LINE(759)
		::flixel::FlxSprite tmp21 = this->screen;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(759)
		tmp21->origin->set(null(),null());
		HX_STACK_LINE(760)
		::openfl::_legacy::display::BitmapData tmp22 = this->buffer;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(760)
		::openfl::_legacy::display::Bitmap tmp23 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp22,null(),null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(760)
		this->_flashBitmap = tmp23;
		HX_STACK_LINE(761)
		::openfl::_legacy::display::Sprite tmp24 = this->_scrollRect;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(761)
		::openfl::_legacy::display::Bitmap tmp25 = this->_flashBitmap;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(761)
		tmp24->addChild(tmp25);
		HX_STACK_LINE(762)
		int tmp26 = this->width;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(762)
		int tmp27 = this->height;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(762)
		::openfl::_legacy::display::BitmapData tmp28 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp26,tmp27,true,(int)0,null());		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(762)
		this->_fill = tmp28;
	}
	else{
		HX_STACK_LINE(766)
		::openfl::_legacy::display::Sprite tmp15 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(766)
		this->canvas = tmp15;
		HX_STACK_LINE(767)
		::openfl::_legacy::display::Sprite tmp16 = this->_scrollRect;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(767)
		::openfl::_legacy::display::Sprite tmp17 = this->canvas;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(767)
		tmp16->addChild(tmp17);
		HX_STACK_LINE(768)
		::openfl::_legacy::geom::Matrix tmp18 = ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(768)
		this->_transform = tmp18;
		HX_STACK_LINE(771)
		::openfl::_legacy::display::Sprite tmp19 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(771)
		this->debugLayer = tmp19;
		HX_STACK_LINE(772)
		::openfl::_legacy::display::Sprite tmp20 = this->_scrollRect;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(772)
		::openfl::_legacy::display::Sprite tmp21 = this->debugLayer;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(772)
		tmp20->addChild(tmp21);
	}
	HX_STACK_LINE(776)
	this->set_color((int)-1);
	HX_STACK_LINE(778)
	Float tmp15 = Zoom;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(778)
	this->set_zoom(tmp15);
	HX_STACK_LINE(779)
	Float tmp16 = this->zoom;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(779)
	this->initialZoom = tmp16;
	HX_STACK_LINE(781)
	this->updateScrollRect();
	HX_STACK_LINE(782)
	this->updateFlashOffset();
	HX_STACK_LINE(783)
	this->updateFlashSpritePosition();
	HX_STACK_LINE(784)
	this->updateInternalSpritePositions();
	HX_STACK_LINE(786)
	::flixel::_system::frontEnds::CameraFrontEnd tmp17 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(786)
	int tmp18 = tmp17->__Field(HX_HCSTRING("get_bgColor","\x75","\xe1","\x7d","\x7d"), hx::paccDynamic )();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(786)
	this->bgColor = tmp18;
}
;
	return null();
}

//FlxCamera_obj::~FlxCamera_obj() { }

Dynamic FlxCamera_obj::__CreateEmpty() { return  new FlxCamera_obj; }
hx::ObjectPtr< FlxCamera_obj > FlxCamera_obj::__new(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< Float >  __o_Zoom)
{  hx::ObjectPtr< FlxCamera_obj > _result_ = new FlxCamera_obj();
	_result_->__construct(__o_X,__o_Y,__o_Width,__o_Height,__o_Zoom);
	return _result_;}

Dynamic FlxCamera_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxCamera_obj > _result_ = new FlxCamera_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

::flixel::graphics::tile::FlxDrawTilesItem FlxCamera_obj::startQuadBatch( ::flixel::graphics::FlxGraphic graphic,bool colored,hx::Null< bool >  __o_hasColorOffsets,::openfl::_legacy::display::BlendMode blend,hx::Null< bool >  __o_smooth,Dynamic shader){
bool hasColorOffsets = __o_hasColorOffsets.Default(false);
bool smooth = __o_smooth.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","startQuadBatch",0xe17326fa,"flixel.FlxCamera.startQuadBatch","flixel/FlxCamera.hx",440,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_ARG(colored,"colored")
	HX_STACK_ARG(hasColorOffsets,"hasColorOffsets")
	HX_STACK_ARG(blend,"blend")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(shader,"shader")
{
		HX_STACK_LINE(444)
		::flixel::graphics::tile::FlxDrawTilesItem itemToReturn = null();		HX_STACK_VAR(itemToReturn,"itemToReturn");
		HX_STACK_LINE(445)
		::openfl::_legacy::display::BlendMode tmp = blend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(445)
		int tmp1 = ::flixel::graphics::tile::FlxDrawBaseItem_obj::blendToInt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(445)
		int blendInt = tmp1;		HX_STACK_VAR(blendInt,"blendInt");
		HX_STACK_LINE(447)
		::flixel::graphics::tile::FlxDrawBaseItem tmp2 = this->_currentDrawItem;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(447)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(447)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(447)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(447)
		if ((tmp4)){
			HX_STACK_LINE(447)
			::flixel::graphics::tile::FlxDrawBaseItem tmp6 = this->_currentDrawItem;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(447)
			::flixel::graphics::tile::FlxDrawBaseItem tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(447)
			::flixel::graphics::tile::FlxDrawBaseItem tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(447)
			::flixel::graphics::tile::FlxDrawItemType tmp9 = tmp8->type;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(447)
			tmp5 = (tmp9 == ::flixel::graphics::tile::FlxDrawItemType_obj::TILES);
		}
		else{
			HX_STACK_LINE(447)
			tmp5 = false;
		}
		HX_STACK_LINE(447)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(447)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(447)
		if ((tmp6)){
			HX_STACK_LINE(448)
			::flixel::graphics::tile::FlxDrawTilesItem tmp8 = this->_headTiles;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(448)
			::flixel::graphics::tile::FlxDrawTilesItem tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(448)
			::flixel::graphics::tile::FlxDrawTilesItem tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(448)
			::flixel::graphics::FlxGraphic tmp11 = tmp10->graphics;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(448)
			::flixel::graphics::FlxGraphic tmp12 = graphic;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(448)
			tmp7 = (tmp11 == tmp12);
		}
		else{
			HX_STACK_LINE(447)
			tmp7 = false;
		}
		HX_STACK_LINE(447)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(447)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(447)
		if ((tmp8)){
			HX_STACK_LINE(449)
			::flixel::graphics::tile::FlxDrawTilesItem tmp10 = this->_headTiles;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(449)
			::flixel::graphics::tile::FlxDrawTilesItem tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(449)
			::flixel::graphics::tile::FlxDrawTilesItem tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(449)
			bool tmp13 = tmp12->colored;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(449)
			bool tmp14 = colored;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(449)
			tmp9 = (tmp13 == tmp14);
		}
		else{
			HX_STACK_LINE(447)
			tmp9 = false;
		}
		HX_STACK_LINE(447)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(447)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(447)
		if ((tmp10)){
			HX_STACK_LINE(450)
			::flixel::graphics::tile::FlxDrawTilesItem tmp12 = this->_headTiles;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(450)
			::flixel::graphics::tile::FlxDrawTilesItem tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(450)
			::flixel::graphics::tile::FlxDrawTilesItem tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(450)
			bool tmp15 = tmp14->hasColorOffsets;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(450)
			bool tmp16 = hasColorOffsets;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(450)
			tmp11 = (tmp15 == tmp16);
		}
		else{
			HX_STACK_LINE(447)
			tmp11 = false;
		}
		HX_STACK_LINE(447)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(447)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(447)
		if ((tmp12)){
			HX_STACK_LINE(451)
			::flixel::graphics::tile::FlxDrawTilesItem tmp14 = this->_headTiles;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(451)
			::flixel::graphics::tile::FlxDrawTilesItem tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(451)
			::flixel::graphics::tile::FlxDrawTilesItem tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(451)
			int tmp17 = tmp16->blending;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(451)
			int tmp18 = blendInt;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(451)
			tmp13 = (tmp17 == tmp18);
		}
		else{
			HX_STACK_LINE(447)
			tmp13 = false;
		}
		HX_STACK_LINE(447)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(447)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(447)
		if ((tmp14)){
			HX_STACK_LINE(452)
			::flixel::graphics::tile::FlxDrawTilesItem tmp16 = this->_headTiles;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(452)
			::flixel::graphics::tile::FlxDrawTilesItem tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(452)
			::flixel::graphics::tile::FlxDrawTilesItem tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(452)
			bool tmp19 = tmp18->antialiasing;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(452)
			bool tmp20 = smooth;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(452)
			tmp15 = (tmp19 == tmp20);
		}
		else{
			HX_STACK_LINE(447)
			tmp15 = false;
		}
		HX_STACK_LINE(447)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(447)
		if ((tmp15)){
			HX_STACK_LINE(453)
			::flixel::graphics::tile::FlxDrawTilesItem tmp17 = this->_headTiles;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(453)
			::flixel::graphics::tile::FlxDrawTilesItem tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(453)
			Dynamic tmp19 = tmp18->shader;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(453)
			Dynamic tmp20 = shader;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(453)
			tmp16 = (tmp19 == tmp20);
		}
		else{
			HX_STACK_LINE(447)
			tmp16 = false;
		}
		HX_STACK_LINE(447)
		if ((tmp16)){
			HX_STACK_LINE(455)
			::flixel::graphics::tile::FlxDrawTilesItem tmp17 = this->_headTiles;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(455)
			return tmp17;
		}
		HX_STACK_LINE(458)
		::flixel::graphics::tile::FlxDrawTilesItem tmp17 = ::flixel::FlxCamera_obj::_storageTilesHead;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(458)
		bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(458)
		if ((tmp18)){
			HX_STACK_LINE(460)
			::flixel::graphics::tile::FlxDrawTilesItem tmp19 = ::flixel::FlxCamera_obj::_storageTilesHead;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(460)
			itemToReturn = tmp19;
			HX_STACK_LINE(461)
			::flixel::graphics::tile::FlxDrawTilesItem tmp20 = ::flixel::FlxCamera_obj::_storageTilesHead;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(461)
			::flixel::graphics::tile::FlxDrawTilesItem newHead = tmp20->nextTyped;		HX_STACK_VAR(newHead,"newHead");
			HX_STACK_LINE(462)
			itemToReturn->reset();
			HX_STACK_LINE(463)
			::flixel::FlxCamera_obj::_storageTilesHead = newHead;
		}
		else{
			HX_STACK_LINE(467)
			::flixel::graphics::tile::FlxDrawTilesItem tmp19 = ::flixel::graphics::tile::FlxDrawTilesItem_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(467)
			itemToReturn = tmp19;
		}
		HX_STACK_LINE(470)
		itemToReturn->graphics = graphic;
		HX_STACK_LINE(471)
		itemToReturn->antialiasing = smooth;
		HX_STACK_LINE(472)
		itemToReturn->colored = colored;
		HX_STACK_LINE(473)
		itemToReturn->hasColorOffsets = hasColorOffsets;
		HX_STACK_LINE(474)
		itemToReturn->blending = blendInt;
		HX_STACK_LINE(475)
		itemToReturn->shader = shader;
		HX_STACK_LINE(477)
		::flixel::graphics::tile::FlxDrawTilesItem tmp19 = this->_headTiles;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(477)
		itemToReturn->nextTyped = tmp19;
		HX_STACK_LINE(478)
		this->_headTiles = itemToReturn;
		HX_STACK_LINE(480)
		::flixel::graphics::tile::FlxDrawBaseItem tmp20 = this->_headOfDrawStack;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(480)
		bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(480)
		if ((tmp21)){
			HX_STACK_LINE(482)
			this->_headOfDrawStack = itemToReturn;
		}
		HX_STACK_LINE(485)
		::flixel::graphics::tile::FlxDrawBaseItem tmp22 = this->_currentDrawItem;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(485)
		bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(485)
		if ((tmp23)){
			HX_STACK_LINE(487)
			::flixel::graphics::tile::FlxDrawBaseItem tmp24 = this->_currentDrawItem;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(487)
			tmp24->next = itemToReturn;
		}
		HX_STACK_LINE(490)
		this->_currentDrawItem = itemToReturn;
		HX_STACK_LINE(492)
		::flixel::graphics::tile::FlxDrawTilesItem tmp24 = itemToReturn;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(492)
		return tmp24;
	}
}


HX_DEFINE_DYNAMIC_FUNC6(FlxCamera_obj,startQuadBatch,return )

::flixel::graphics::tile::FlxDrawTrianglesItem FlxCamera_obj::startTrianglesBatch( ::flixel::graphics::FlxGraphic graphic,hx::Null< bool >  __o_smoothing,hx::Null< bool >  __o_isColored,::openfl::_legacy::display::BlendMode blend){
bool smoothing = __o_smoothing.Default(false);
bool isColored = __o_isColored.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","startTrianglesBatch",0xb3a3b828,"flixel.FlxCamera.startTrianglesBatch","flixel/FlxCamera.hx",499,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_ARG(smoothing,"smoothing")
	HX_STACK_ARG(isColored,"isColored")
	HX_STACK_ARG(blend,"blend")
{
		HX_STACK_LINE(500)
		::flixel::graphics::tile::FlxDrawTrianglesItem itemToReturn = null();		HX_STACK_VAR(itemToReturn,"itemToReturn");
		HX_STACK_LINE(501)
		::openfl::_legacy::display::BlendMode tmp = blend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(501)
		int tmp1 = ::flixel::graphics::tile::FlxDrawBaseItem_obj::blendToInt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(501)
		int blendInt = tmp1;		HX_STACK_VAR(blendInt,"blendInt");
		HX_STACK_LINE(503)
		::flixel::graphics::tile::FlxDrawBaseItem tmp2 = this->_currentDrawItem;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(503)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(503)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(503)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(503)
		if ((tmp4)){
			HX_STACK_LINE(503)
			::flixel::graphics::tile::FlxDrawBaseItem tmp6 = this->_currentDrawItem;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(503)
			::flixel::graphics::tile::FlxDrawBaseItem tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(503)
			::flixel::graphics::tile::FlxDrawBaseItem tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(503)
			::flixel::graphics::tile::FlxDrawItemType tmp9 = tmp8->type;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(503)
			tmp5 = (tmp9 == ::flixel::graphics::tile::FlxDrawItemType_obj::TRIANGLES);
		}
		else{
			HX_STACK_LINE(503)
			tmp5 = false;
		}
		HX_STACK_LINE(503)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(503)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(503)
		if ((tmp6)){
			HX_STACK_LINE(504)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp8 = this->_headTriangles;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(504)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(504)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(504)
			::flixel::graphics::FlxGraphic tmp11 = tmp10->graphics;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(504)
			::flixel::graphics::FlxGraphic tmp12 = graphic;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(504)
			tmp7 = (tmp11 == tmp12);
		}
		else{
			HX_STACK_LINE(503)
			tmp7 = false;
		}
		HX_STACK_LINE(503)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(503)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(503)
		if ((tmp8)){
			HX_STACK_LINE(505)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp10 = this->_headTriangles;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(505)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(505)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(505)
			bool tmp13 = tmp12->antialiasing;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(505)
			bool tmp14 = smoothing;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(505)
			tmp9 = (tmp13 == tmp14);
		}
		else{
			HX_STACK_LINE(503)
			tmp9 = false;
		}
		HX_STACK_LINE(503)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(503)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(503)
		if ((tmp10)){
			HX_STACK_LINE(506)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp12 = this->_headTriangles;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(506)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(506)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(506)
			bool tmp15 = tmp14->colored;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(506)
			bool tmp16 = isColored;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(506)
			tmp11 = (tmp15 == tmp16);
		}
		else{
			HX_STACK_LINE(503)
			tmp11 = false;
		}
		HX_STACK_LINE(503)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(503)
		if ((tmp11)){
			HX_STACK_LINE(507)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp13 = this->_headTriangles;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(507)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(507)
			int tmp15 = tmp14->blending;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(507)
			int tmp16 = blendInt;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(507)
			tmp12 = (tmp15 == tmp16);
		}
		else{
			HX_STACK_LINE(503)
			tmp12 = false;
		}
		HX_STACK_LINE(503)
		if ((tmp12)){
			HX_STACK_LINE(509)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp13 = this->_headTriangles;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(509)
			return tmp13;
		}
		HX_STACK_LINE(512)
		::flixel::graphics::FlxGraphic tmp13 = graphic;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(512)
		bool tmp14 = smoothing;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(512)
		bool tmp15 = isColored;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(512)
		::openfl::_legacy::display::BlendMode tmp16 = blend;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(512)
		::flixel::graphics::tile::FlxDrawTrianglesItem tmp17 = this->getNewDrawTrianglesItem(tmp13,tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(512)
		return tmp17;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,startTrianglesBatch,return )

::flixel::graphics::tile::FlxDrawTrianglesItem FlxCamera_obj::getNewDrawTrianglesItem( ::flixel::graphics::FlxGraphic graphic,hx::Null< bool >  __o_smoothing,hx::Null< bool >  __o_isColored,::openfl::_legacy::display::BlendMode blend){
bool smoothing = __o_smoothing.Default(false);
bool isColored = __o_isColored.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","getNewDrawTrianglesItem",0xcd894887,"flixel.FlxCamera.getNewDrawTrianglesItem","flixel/FlxCamera.hx",518,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_ARG(smoothing,"smoothing")
	HX_STACK_ARG(isColored,"isColored")
	HX_STACK_ARG(blend,"blend")
{
		HX_STACK_LINE(519)
		::flixel::graphics::tile::FlxDrawTrianglesItem itemToReturn = null();		HX_STACK_VAR(itemToReturn,"itemToReturn");
		HX_STACK_LINE(520)
		::openfl::_legacy::display::BlendMode tmp = blend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(520)
		int tmp1 = ::flixel::graphics::tile::FlxDrawBaseItem_obj::blendToInt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(520)
		int blendInt = tmp1;		HX_STACK_VAR(blendInt,"blendInt");
		HX_STACK_LINE(522)
		::flixel::graphics::tile::FlxDrawTrianglesItem tmp2 = ::flixel::FlxCamera_obj::_storageTrianglesHead;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(522)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(522)
		if ((tmp3)){
			HX_STACK_LINE(524)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp4 = ::flixel::FlxCamera_obj::_storageTrianglesHead;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(524)
			itemToReturn = tmp4;
			HX_STACK_LINE(525)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp5 = ::flixel::FlxCamera_obj::_storageTrianglesHead;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(525)
			::flixel::graphics::tile::FlxDrawTrianglesItem newHead = tmp5->nextTyped;		HX_STACK_VAR(newHead,"newHead");
			HX_STACK_LINE(526)
			itemToReturn->reset();
			HX_STACK_LINE(527)
			::flixel::FlxCamera_obj::_storageTrianglesHead = newHead;
		}
		else{
			HX_STACK_LINE(531)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp4 = ::flixel::graphics::tile::FlxDrawTrianglesItem_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(531)
			itemToReturn = tmp4;
		}
		HX_STACK_LINE(534)
		itemToReturn->graphics = graphic;
		HX_STACK_LINE(535)
		itemToReturn->antialiasing = smoothing;
		HX_STACK_LINE(536)
		itemToReturn->colored = isColored;
		HX_STACK_LINE(537)
		itemToReturn->blending = blendInt;
		HX_STACK_LINE(539)
		::flixel::graphics::tile::FlxDrawTrianglesItem tmp4 = this->_headTriangles;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(539)
		itemToReturn->nextTyped = tmp4;
		HX_STACK_LINE(540)
		this->_headTriangles = itemToReturn;
		HX_STACK_LINE(542)
		::flixel::graphics::tile::FlxDrawBaseItem tmp5 = this->_headOfDrawStack;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(542)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(542)
		if ((tmp6)){
			HX_STACK_LINE(544)
			this->_headOfDrawStack = itemToReturn;
		}
		HX_STACK_LINE(547)
		::flixel::graphics::tile::FlxDrawBaseItem tmp7 = this->_currentDrawItem;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(547)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(547)
		if ((tmp8)){
			HX_STACK_LINE(549)
			::flixel::graphics::tile::FlxDrawBaseItem tmp9 = this->_currentDrawItem;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(549)
			tmp9->next = itemToReturn;
		}
		HX_STACK_LINE(552)
		this->_currentDrawItem = itemToReturn;
		HX_STACK_LINE(554)
		::flixel::graphics::tile::FlxDrawTrianglesItem tmp9 = itemToReturn;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(554)
		return tmp9;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,getNewDrawTrianglesItem,return )

Void FlxCamera_obj::clearDrawStack( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","clearDrawStack",0x8d7c5ba0,"flixel.FlxCamera.clearDrawStack","flixel/FlxCamera.hx",559,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(560)
		::flixel::graphics::tile::FlxDrawTilesItem tmp = this->_headTiles;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(560)
		::flixel::graphics::tile::FlxDrawTilesItem currTiles = tmp;		HX_STACK_VAR(currTiles,"currTiles");
		HX_STACK_LINE(561)
		::flixel::graphics::tile::FlxDrawTilesItem newTilesHead;		HX_STACK_VAR(newTilesHead,"newTilesHead");
		HX_STACK_LINE(563)
		while((true)){
			HX_STACK_LINE(563)
			bool tmp1 = (currTiles != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(563)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(563)
			if ((tmp2)){
				HX_STACK_LINE(563)
				break;
			}
			HX_STACK_LINE(565)
			newTilesHead = currTiles->nextTyped;
			HX_STACK_LINE(566)
			currTiles->reset();
			HX_STACK_LINE(567)
			::flixel::graphics::tile::FlxDrawTilesItem tmp3 = ::flixel::FlxCamera_obj::_storageTilesHead;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(567)
			currTiles->nextTyped = tmp3;
			HX_STACK_LINE(568)
			::flixel::FlxCamera_obj::_storageTilesHead = currTiles;
			HX_STACK_LINE(569)
			currTiles = newTilesHead;
		}
		HX_STACK_LINE(572)
		::flixel::graphics::tile::FlxDrawTrianglesItem tmp1 = this->_headTriangles;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(572)
		::flixel::graphics::tile::FlxDrawTrianglesItem currTriangles = tmp1;		HX_STACK_VAR(currTriangles,"currTriangles");
		HX_STACK_LINE(573)
		::flixel::graphics::tile::FlxDrawTrianglesItem newTrianglesHead;		HX_STACK_VAR(newTrianglesHead,"newTrianglesHead");
		HX_STACK_LINE(575)
		while((true)){
			HX_STACK_LINE(575)
			bool tmp2 = (currTriangles != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(575)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(575)
			if ((tmp3)){
				HX_STACK_LINE(575)
				break;
			}
			HX_STACK_LINE(577)
			newTrianglesHead = currTriangles->nextTyped;
			HX_STACK_LINE(578)
			currTriangles->reset();
			HX_STACK_LINE(579)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp4 = ::flixel::FlxCamera_obj::_storageTrianglesHead;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(579)
			currTriangles->nextTyped = tmp4;
			HX_STACK_LINE(580)
			::flixel::FlxCamera_obj::_storageTrianglesHead = currTriangles;
			HX_STACK_LINE(581)
			currTriangles = newTrianglesHead;
		}
		HX_STACK_LINE(584)
		this->_currentDrawItem = null();
		HX_STACK_LINE(585)
		this->_headOfDrawStack = null();
		HX_STACK_LINE(586)
		this->_headTiles = null();
		HX_STACK_LINE(587)
		this->_headTriangles = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,clearDrawStack,(void))

Void FlxCamera_obj::render( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","render",0x1f11e49f,"flixel.FlxCamera.render","flixel/FlxCamera.hx",592,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(593)
		::flixel::graphics::tile::FlxDrawBaseItem tmp = this->_headOfDrawStack;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(593)
		::flixel::graphics::tile::FlxDrawBaseItem currItem = tmp;		HX_STACK_VAR(currItem,"currItem");
		HX_STACK_LINE(594)
		while((true)){
			HX_STACK_LINE(594)
			bool tmp1 = (currItem != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(594)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(594)
			if ((tmp2)){
				HX_STACK_LINE(594)
				break;
			}
			HX_STACK_LINE(596)
			currItem->render(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(597)
			currItem = currItem->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,render,(void))

Void FlxCamera_obj::drawPixels( ::flixel::graphics::frames::FlxFrame frame,::openfl::_legacy::display::BitmapData pixels,::flixel::math::FlxMatrix matrix,::openfl::_legacy::geom::ColorTransform transform,::openfl::_legacy::display::BlendMode blend,Dynamic __o_smoothing,Dynamic shader){
Dynamic smoothing = __o_smoothing.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","drawPixels",0x80c6bc1a,"flixel.FlxCamera.drawPixels","flixel/FlxCamera.hx",603,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frame,"frame")
	HX_STACK_ARG(pixels,"pixels")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(transform,"transform")
	HX_STACK_ARG(blend,"blend")
	HX_STACK_ARG(smoothing,"smoothing")
	HX_STACK_ARG(shader,"shader")
{
		HX_STACK_LINE(604)
		bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(604)
		if ((tmp)){
			HX_STACK_LINE(606)
			::openfl::_legacy::display::BitmapData tmp1 = this->buffer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(606)
			::openfl::_legacy::display::BitmapData tmp2 = pixels;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(606)
			::flixel::math::FlxMatrix tmp3 = matrix;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(606)
			::openfl::_legacy::display::BlendMode tmp4 = blend;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(606)
			Dynamic tmp5 = smoothing;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(606)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(606)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(606)
			if ((tmp6)){
				HX_STACK_LINE(606)
				tmp7 = this->antialiasing;
			}
			else{
				HX_STACK_LINE(606)
				tmp7 = true;
			}
			HX_STACK_LINE(606)
			tmp1->draw(tmp2,tmp3,null(),tmp4,null(),tmp7);
		}
		else{
			HX_STACK_LINE(610)
			bool tmp1 = (transform != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(610)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(610)
			if ((tmp1)){
				HX_STACK_LINE(610)
				::openfl::_legacy::geom::ColorTransform tmp3 = transform;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(610)
				::openfl::_legacy::geom::ColorTransform tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(610)
				tmp2 = ::flixel::util::FlxColorTransformUtil_obj::hasRGBMultipliers(tmp4);
			}
			else{
				HX_STACK_LINE(610)
				tmp2 = false;
			}
			HX_STACK_LINE(610)
			bool isColored = tmp2;		HX_STACK_VAR(isColored,"isColored");
			HX_STACK_LINE(611)
			bool tmp3 = (transform != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(611)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(611)
			if ((tmp3)){
				HX_STACK_LINE(611)
				::openfl::_legacy::geom::ColorTransform tmp5 = transform;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(611)
				::openfl::_legacy::geom::ColorTransform tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(611)
				tmp4 = ::flixel::util::FlxColorTransformUtil_obj::hasRGBAOffsets(tmp6);
			}
			else{
				HX_STACK_LINE(611)
				tmp4 = false;
			}
			HX_STACK_LINE(611)
			bool hasColorOffsets = tmp4;		HX_STACK_VAR(hasColorOffsets,"hasColorOffsets");
			HX_STACK_LINE(616)
			::flixel::graphics::FlxGraphic tmp5 = frame->parent;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(616)
			bool tmp6 = isColored;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(616)
			bool tmp7 = hasColorOffsets;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(616)
			::openfl::_legacy::display::BlendMode tmp8 = blend;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(616)
			Dynamic tmp9 = smoothing;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(616)
			Dynamic tmp10 = shader;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(616)
			::flixel::graphics::tile::FlxDrawTilesItem tmp11 = this->startQuadBatch(tmp5,tmp6,tmp7,tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(616)
			::flixel::graphics::tile::FlxDrawTilesItem drawItem = tmp11;		HX_STACK_VAR(drawItem,"drawItem");
			HX_STACK_LINE(618)
			::flixel::graphics::frames::FlxFrame tmp12 = frame;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(618)
			::flixel::math::FlxMatrix tmp13 = matrix;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(618)
			::openfl::_legacy::geom::ColorTransform tmp14 = transform;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(618)
			drawItem->addQuad(tmp12,tmp13,tmp14);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(FlxCamera_obj,drawPixels,(void))

Void FlxCamera_obj::copyPixels( ::flixel::graphics::frames::FlxFrame frame,::openfl::_legacy::display::BitmapData pixels,::openfl::_legacy::geom::Rectangle sourceRect,::openfl::_legacy::geom::Point destPoint,::openfl::_legacy::geom::ColorTransform transform,::openfl::_legacy::display::BlendMode blend,Dynamic __o_smoothing,Dynamic shader){
Dynamic smoothing = __o_smoothing.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","copyPixels",0xf4c7a68b,"flixel.FlxCamera.copyPixels","flixel/FlxCamera.hx",624,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frame,"frame")
	HX_STACK_ARG(pixels,"pixels")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(transform,"transform")
	HX_STACK_ARG(blend,"blend")
	HX_STACK_ARG(smoothing,"smoothing")
	HX_STACK_ARG(shader,"shader")
{
		HX_STACK_LINE(625)
		bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(625)
		if ((tmp)){
			HX_STACK_LINE(627)
			bool tmp1 = (pixels != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(627)
			if ((tmp1)){
				HX_STACK_LINE(629)
				::openfl::_legacy::display::BitmapData tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(629)
				::openfl::_legacy::display::BitmapData tmp3 = pixels;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(629)
				::openfl::_legacy::geom::Rectangle tmp4 = sourceRect;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(629)
				::openfl::_legacy::geom::Point tmp5 = destPoint;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(629)
				tmp2->copyPixels(tmp3,tmp4,tmp5,null(),null(),true);
			}
			else{
				HX_STACK_LINE(631)
				bool tmp2 = (frame != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(631)
				if ((tmp2)){
					HX_STACK_LINE(633)
					::openfl::_legacy::display::BitmapData tmp3 = this->buffer;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(633)
					::openfl::_legacy::geom::Point tmp4 = destPoint;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(633)
					frame->paint(tmp3,tmp4,true,null());
				}
			}
		}
		else{
			HX_STACK_LINE(638)
			::flixel::math::FlxMatrix tmp1 = this->_helperMatrix;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(638)
			tmp1->identity();
			HX_STACK_LINE(639)
			::flixel::math::FlxMatrix tmp2 = this->_helperMatrix;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(639)
			Float tmp3 = destPoint->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(639)
			Float tmp4 = frame->offset->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(639)
			Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(639)
			Float tmp6 = destPoint->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(639)
			Float tmp7 = frame->offset->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(639)
			Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(639)
			tmp2->translate(tmp5,tmp8);
			HX_STACK_LINE(641)
			bool tmp9 = (transform != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(641)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(641)
			if ((tmp9)){
				HX_STACK_LINE(641)
				::openfl::_legacy::geom::ColorTransform tmp11 = transform;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(641)
				::openfl::_legacy::geom::ColorTransform tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(641)
				tmp10 = ::flixel::util::FlxColorTransformUtil_obj::hasRGBMultipliers(tmp12);
			}
			else{
				HX_STACK_LINE(641)
				tmp10 = false;
			}
			HX_STACK_LINE(641)
			bool isColored = tmp10;		HX_STACK_VAR(isColored,"isColored");
			HX_STACK_LINE(642)
			bool tmp11 = (transform != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(642)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(642)
			if ((tmp11)){
				HX_STACK_LINE(642)
				::openfl::_legacy::geom::ColorTransform tmp13 = transform;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(642)
				::openfl::_legacy::geom::ColorTransform tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(642)
				tmp12 = ::flixel::util::FlxColorTransformUtil_obj::hasRGBAOffsets(tmp14);
			}
			else{
				HX_STACK_LINE(642)
				tmp12 = false;
			}
			HX_STACK_LINE(642)
			bool hasColorOffsets = tmp12;		HX_STACK_VAR(hasColorOffsets,"hasColorOffsets");
			HX_STACK_LINE(645)
			::flixel::graphics::FlxGraphic tmp13 = frame->parent;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(645)
			bool tmp14 = isColored;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(645)
			bool tmp15 = hasColorOffsets;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(645)
			::openfl::_legacy::display::BlendMode tmp16 = blend;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(645)
			Dynamic tmp17 = smoothing;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(645)
			Dynamic tmp18 = shader;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(645)
			::flixel::graphics::tile::FlxDrawTilesItem tmp19 = this->startQuadBatch(tmp13,tmp14,tmp15,tmp16,tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(645)
			::flixel::graphics::tile::FlxDrawTilesItem drawItem = tmp19;		HX_STACK_VAR(drawItem,"drawItem");
			HX_STACK_LINE(649)
			::flixel::graphics::frames::FlxFrame tmp20 = frame;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(649)
			::flixel::math::FlxMatrix tmp21 = this->_helperMatrix;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(649)
			::openfl::_legacy::geom::ColorTransform tmp22 = transform;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(649)
			drawItem->addQuad(tmp20,tmp21,tmp22);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(FlxCamera_obj,copyPixels,(void))

Void FlxCamera_obj::drawTriangles( ::flixel::graphics::FlxGraphic graphic,Array< Float > vertices,Array< int > indices,Array< Float > uvtData,Array< int > colors,::flixel::math::FlxPoint position,::openfl::_legacy::display::BlendMode blend,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_smoothing){
bool repeat = __o_repeat.Default(false);
bool smoothing = __o_smoothing.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","drawTriangles",0x78d375de,"flixel.FlxCamera.drawTriangles","flixel/FlxCamera.hx",656,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_ARG(vertices,"vertices")
	HX_STACK_ARG(indices,"indices")
	HX_STACK_ARG(uvtData,"uvtData")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(position,"position")
	HX_STACK_ARG(blend,"blend")
	HX_STACK_ARG(repeat,"repeat")
	HX_STACK_ARG(smoothing,"smoothing")
{
		HX_STACK_LINE(657)
		bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(657)
		if ((tmp)){
			HX_STACK_LINE(659)
			bool tmp1 = (position == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(659)
			if ((tmp1)){
				HX_STACK_LINE(660)
				::flixel::math::FlxPoint tmp2 = ::flixel::FlxCamera_obj::renderPoint;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(660)
				::flixel::math::FlxPoint tmp3 = tmp2->set(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(660)
				position = tmp3;
			}
			HX_STACK_LINE(662)
			{
				HX_STACK_LINE(662)
				::flixel::math::FlxRect tmp2 = this->_bounds;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(662)
				::flixel::math::FlxRect _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(662)
				_this->x = (int)0;
				HX_STACK_LINE(662)
				_this->y = (int)0;
				HX_STACK_LINE(662)
				int tmp3 = this->width;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(662)
				_this->width = tmp3;
				HX_STACK_LINE(662)
				int tmp4 = this->height;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(662)
				_this->height = tmp4;
				HX_STACK_LINE(662)
				_this;
			}
			HX_STACK_LINE(664)
			int verticesLength = vertices->length;		HX_STACK_VAR(verticesLength,"verticesLength");
			HX_STACK_LINE(665)
			int currentVertexPosition = (int)0;		HX_STACK_VAR(currentVertexPosition,"currentVertexPosition");
			HX_STACK_LINE(667)
			Float tempX;		HX_STACK_VAR(tempX,"tempX");
			HX_STACK_LINE(667)
			Float tempY;		HX_STACK_VAR(tempY,"tempY");
			HX_STACK_LINE(668)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(669)
			::flixel::math::FlxRect tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(669)
			{
				HX_STACK_LINE(669)
				::flixel::math::FlxRect tmp3 = ::flixel::FlxCamera_obj::renderRect;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(669)
				::flixel::math::FlxRect _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(669)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(669)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(669)
				Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(669)
				Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(669)
				_this->x = X;
				HX_STACK_LINE(669)
				_this->y = Y;
				HX_STACK_LINE(669)
				_this->width = Width;
				HX_STACK_LINE(669)
				_this->height = Height;
				HX_STACK_LINE(669)
				tmp2 = _this;
			}
			HX_STACK_LINE(669)
			::flixel::math::FlxRect bounds = tmp2;		HX_STACK_VAR(bounds,"bounds");
			HX_STACK_LINE(670)
			Array< Float > tmp3 = ::flixel::FlxCamera_obj::drawVertices;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(670)
			Array< Float > tmp4 = ::flixel::FlxCamera_obj::drawVertices;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(670)
			int tmp5 = tmp4->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(670)
			tmp3->splice((int)0,tmp5);
			HX_STACK_LINE(672)
			while((true)){
				HX_STACK_LINE(672)
				bool tmp6 = (i < verticesLength);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(672)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(672)
				if ((tmp7)){
					HX_STACK_LINE(672)
					break;
				}
				HX_STACK_LINE(674)
				Float tmp8 = position->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(674)
				Float tmp9 = vertices->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(674)
				Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(674)
				tempX = tmp10;
				HX_STACK_LINE(675)
				Float tmp11 = position->y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(675)
				int tmp12 = (i + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(675)
				Float tmp13 = vertices->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(675)
				Float tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(675)
				tempY = tmp14;
				HX_STACK_LINE(677)
				{
					HX_STACK_LINE(677)
					int tmp15 = (currentVertexPosition)++;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(677)
					int index = tmp15;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(677)
					Array< Float > tmp16 = ::flixel::FlxCamera_obj::drawVertices;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(677)
					Float tmp17 = tempX;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(677)
					tmp16[index] = tmp17;
				}
				HX_STACK_LINE(678)
				{
					HX_STACK_LINE(678)
					int tmp15 = (currentVertexPosition)++;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(678)
					int index = tmp15;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(678)
					Array< Float > tmp16 = ::flixel::FlxCamera_obj::drawVertices;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(678)
					Float tmp17 = tempY;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(678)
					tmp16[index] = tmp17;
				}
				HX_STACK_LINE(680)
				bool tmp15 = (i == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(680)
				if ((tmp15)){
					HX_STACK_LINE(682)
					bounds->x = tempX;
					HX_STACK_LINE(682)
					bounds->y = tempY;
					HX_STACK_LINE(682)
					bounds->width = (int)0;
					HX_STACK_LINE(682)
					bounds->height = (int)0;
					HX_STACK_LINE(682)
					bounds;
				}
				else{
					HX_STACK_LINE(686)
					bool tmp16 = (tempX < bounds->x);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(686)
					if ((tmp16)){
						HX_STACK_LINE(686)
						Float tmp17 = (bounds->x - tempX);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(686)
						hx::AddEq(bounds->width,tmp17);
						HX_STACK_LINE(686)
						bounds->x = tempX;
					}
					HX_STACK_LINE(686)
					bool tmp17 = (tempY < bounds->y);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(686)
					if ((tmp17)){
						HX_STACK_LINE(686)
						Float tmp18 = (bounds->y - tempY);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(686)
						hx::AddEq(bounds->height,tmp18);
						HX_STACK_LINE(686)
						bounds->y = tempY;
					}
					HX_STACK_LINE(686)
					Float tmp18 = tempX;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(686)
					Float tmp19 = (bounds->x + bounds->width);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(686)
					bool tmp20 = (tmp18 > tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(686)
					if ((tmp20)){
						HX_STACK_LINE(686)
						Float tmp21 = (tempX - bounds->x);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(686)
						bounds->width = tmp21;
					}
					HX_STACK_LINE(686)
					Float tmp21 = tempY;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(686)
					Float tmp22 = (bounds->y + bounds->height);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(686)
					bool tmp23 = (tmp21 > tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(686)
					if ((tmp23)){
						HX_STACK_LINE(686)
						Float tmp24 = (tempY - bounds->y);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(686)
						bounds->height = tmp24;
					}
					HX_STACK_LINE(686)
					bounds;
				}
				HX_STACK_LINE(689)
				hx::AddEq(i,(int)2);
			}
			HX_STACK_LINE(692)
			{
				HX_STACK_LINE(692)
				bool tmp6 = position->_weak;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(692)
				if ((tmp6)){
					HX_STACK_LINE(692)
					position->put();
				}
			}
			HX_STACK_LINE(694)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(694)
			{
				HX_STACK_LINE(694)
				::flixel::math::FlxRect tmp7 = this->_bounds;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(694)
				::flixel::math::FlxRect _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(694)
				Float tmp8 = (bounds->x + bounds->width);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(694)
				Float tmp9 = _this->x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(694)
				bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(694)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(694)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(694)
				if ((tmp11)){
					HX_STACK_LINE(694)
					Float tmp13 = bounds->x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(694)
					Float tmp14 = (_this->x + _this->width);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(694)
					Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(694)
					Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(694)
					tmp12 = (tmp13 < tmp16);
				}
				else{
					HX_STACK_LINE(694)
					tmp12 = false;
				}
				HX_STACK_LINE(694)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(694)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(694)
				if ((tmp13)){
					HX_STACK_LINE(694)
					Float tmp15 = (bounds->y + bounds->height);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(694)
					Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(694)
					Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(694)
					Float tmp18 = _this->y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(694)
					tmp14 = (tmp17 > tmp18);
				}
				else{
					HX_STACK_LINE(694)
					tmp14 = false;
				}
				HX_STACK_LINE(694)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(694)
				if ((tmp14)){
					HX_STACK_LINE(694)
					Float tmp16 = bounds->y;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(694)
					Float tmp17 = (_this->y + _this->height);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(694)
					Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(694)
					tmp15 = (tmp16 < tmp18);
				}
				else{
					HX_STACK_LINE(694)
					tmp15 = false;
				}
				HX_STACK_LINE(694)
				bool result = tmp15;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(694)
				{
					HX_STACK_LINE(694)
					bool tmp16 = bounds->_weak;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(694)
					if ((tmp16)){
						HX_STACK_LINE(694)
						bool tmp17 = bounds->_inPool;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(694)
						bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(694)
						if ((tmp18)){
							HX_STACK_LINE(694)
							bounds->_inPool = true;
							HX_STACK_LINE(694)
							bounds->_weak = false;
							HX_STACK_LINE(694)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp19 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(694)
							::flixel::math::FlxRect tmp20 = bounds;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(694)
							tmp19->putUnsafe(tmp20);
						}
					}
				}
				HX_STACK_LINE(694)
				tmp6 = result;
			}
			HX_STACK_LINE(694)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(694)
			if ((tmp7)){
				HX_STACK_LINE(696)
				Array< Float > tmp8 = ::flixel::FlxCamera_obj::drawVertices;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(696)
				Array< Float > tmp9 = ::flixel::FlxCamera_obj::drawVertices;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(696)
				int tmp10 = tmp9->length;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(696)
				int tmp11 = verticesLength;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(696)
				int tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(696)
				int tmp13 = verticesLength;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(696)
				tmp8->splice(tmp12,tmp13);
			}
			else{
				HX_STACK_LINE(700)
				::openfl::_legacy::display::Sprite tmp8 = ::flixel::FlxCamera_obj::trianglesSprite;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(700)
				::openfl::_legacy::display::Graphics tmp9 = tmp8->get_graphics();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(700)
				tmp9->clear();
				HX_STACK_LINE(701)
				::openfl::_legacy::display::Sprite tmp10 = ::flixel::FlxCamera_obj::trianglesSprite;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(701)
				::openfl::_legacy::display::Graphics tmp11 = tmp10->get_graphics();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(701)
				::openfl::_legacy::display::BitmapData tmp12 = graphic->bitmap;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(701)
				bool tmp13 = repeat;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(701)
				bool tmp14 = smoothing;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(701)
				tmp11->beginBitmapFill(tmp12,null(),tmp13,tmp14);
				HX_STACK_LINE(702)
				::openfl::_legacy::display::Sprite tmp15 = ::flixel::FlxCamera_obj::trianglesSprite;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(702)
				::openfl::_legacy::display::Graphics tmp16 = tmp15->get_graphics();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(702)
				Array< Float > tmp17 = ::flixel::FlxCamera_obj::drawVertices;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(702)
				tmp16->drawTriangles(tmp17,indices,uvtData,null(),null(),null());
				HX_STACK_LINE(703)
				::openfl::_legacy::display::Sprite tmp18 = ::flixel::FlxCamera_obj::trianglesSprite;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(703)
				::openfl::_legacy::display::Graphics tmp19 = tmp18->get_graphics();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(703)
				tmp19->endFill();
				HX_STACK_LINE(704)
				::openfl::_legacy::display::BitmapData tmp20 = this->buffer;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(704)
				::openfl::_legacy::display::Sprite tmp21 = ::flixel::FlxCamera_obj::trianglesSprite;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(704)
				tmp20->draw(tmp21,null(),null(),null(),null(),null());
				HX_STACK_LINE(706)
				::flixel::_system::frontEnds::DebuggerFrontEnd tmp22 = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(706)
				bool tmp23 = tmp22->__Field(HX_HCSTRING("drawDebug","\xaf","\x87","\x2a","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(706)
				if ((tmp23)){
					HX_STACK_LINE(708)
					::openfl::_legacy::display::Graphics tmp24 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(708)
					::openfl::_legacy::display::Graphics gfx = tmp24;		HX_STACK_VAR(gfx,"gfx");
					HX_STACK_LINE(709)
					gfx->clear();
					HX_STACK_LINE(710)
					gfx->lineStyle((int)1,(int)-16776961,((Float)0.5),null(),null(),null(),null(),null());
					HX_STACK_LINE(711)
					Array< Float > tmp25 = ::flixel::FlxCamera_obj::drawVertices;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(711)
					gfx->drawTriangles(tmp25,indices,null(),null(),null(),null());
					HX_STACK_LINE(712)
					::flixel::FlxCamera tmp26 = this->get_camera();		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(712)
					::openfl::_legacy::display::Sprite tmp27 = ::flixel::util::FlxSpriteUtil_obj::flashGfxSprite;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(712)
					tmp26->buffer->draw(tmp27,null(),null(),null(),null(),null());
				}
			}
			HX_STACK_LINE(717)
			{
				HX_STACK_LINE(717)
				bool tmp8 = bounds->_inPool;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(717)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(717)
				if ((tmp9)){
					HX_STACK_LINE(717)
					bounds->_inPool = true;
					HX_STACK_LINE(717)
					bounds->_weak = false;
					HX_STACK_LINE(717)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp10 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(717)
					::flixel::math::FlxRect tmp11 = bounds;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(717)
					tmp10->putUnsafe(tmp11);
				}
			}
		}
		else{
			HX_STACK_LINE(721)
			{
				HX_STACK_LINE(721)
				::flixel::math::FlxRect tmp1 = this->_bounds;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(721)
				::flixel::math::FlxRect _this = tmp1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(721)
				_this->x = (int)0;
				HX_STACK_LINE(721)
				_this->y = (int)0;
				HX_STACK_LINE(721)
				int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(721)
				_this->width = tmp2;
				HX_STACK_LINE(721)
				int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(721)
				_this->height = tmp3;
				HX_STACK_LINE(721)
				_this;
			}
			HX_STACK_LINE(722)
			bool tmp1 = (colors != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(722)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(722)
			if ((tmp1)){
				HX_STACK_LINE(722)
				tmp2 = (colors->length != (int)0);
			}
			else{
				HX_STACK_LINE(722)
				tmp2 = false;
			}
			HX_STACK_LINE(722)
			bool isColored = tmp2;		HX_STACK_VAR(isColored,"isColored");
			HX_STACK_LINE(723)
			::flixel::graphics::FlxGraphic tmp3 = graphic;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(723)
			bool tmp4 = smoothing;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(723)
			bool tmp5 = isColored;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(723)
			::openfl::_legacy::display::BlendMode tmp6 = blend;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(723)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp7 = this->startTrianglesBatch(tmp3,tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(723)
			::flixel::graphics::tile::FlxDrawTrianglesItem drawItem = tmp7;		HX_STACK_VAR(drawItem,"drawItem");
			HX_STACK_LINE(724)
			::flixel::math::FlxPoint tmp8 = position;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(724)
			::flixel::math::FlxRect tmp9 = this->_bounds;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(724)
			drawItem->addTriangles(vertices,indices,uvtData,colors,tmp8,tmp9);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(FlxCamera_obj,drawTriangles,(void))

Void FlxCamera_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","destroy",0xb607d391,"flixel.FlxCamera.destroy","flixel/FlxCamera.hx",793,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(794)
		::openfl::_legacy::display::Sprite tmp = this->flashSprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(794)
		::openfl::_legacy::display::Sprite tmp1 = this->_scrollRect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(794)
		::flixel::util::FlxDestroyUtil_obj::removeChild(tmp,tmp1);
		HX_STACK_LINE(796)
		bool tmp2 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(796)
		if ((tmp2)){
			HX_STACK_LINE(798)
			::openfl::_legacy::display::Sprite tmp3 = this->_scrollRect;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(798)
			::openfl::_legacy::display::Bitmap tmp4 = this->_flashBitmap;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(798)
			::flixel::util::FlxDestroyUtil_obj::removeChild(tmp3,tmp4);
			HX_STACK_LINE(799)
			::flixel::FlxSprite tmp5 = this->screen;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(799)
			::flixel::FlxSprite tmp6 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(799)
			this->screen = tmp6;
			HX_STACK_LINE(800)
			this->buffer = null();
			HX_STACK_LINE(801)
			this->_flashBitmap = null();
			HX_STACK_LINE(802)
			::openfl::_legacy::display::BitmapData tmp7 = this->_fill;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(802)
			::openfl::_legacy::display::BitmapData tmp8 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(802)
			this->_fill = tmp8;
		}
		else{
			HX_STACK_LINE(807)
			::openfl::_legacy::display::Sprite tmp3 = this->_scrollRect;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(807)
			::openfl::_legacy::display::Sprite tmp4 = this->debugLayer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(807)
			::flixel::util::FlxDestroyUtil_obj::removeChild(tmp3,tmp4);
			HX_STACK_LINE(808)
			this->debugLayer = null();
			HX_STACK_LINE(811)
			::openfl::_legacy::display::Sprite tmp5 = this->_scrollRect;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(811)
			::openfl::_legacy::display::Sprite tmp6 = this->canvas;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(811)
			::flixel::util::FlxDestroyUtil_obj::removeChild(tmp5,tmp6);
			HX_STACK_LINE(812)
			::openfl::_legacy::display::Sprite tmp7 = this->canvas;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(812)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(812)
			if ((tmp8)){
				HX_STACK_LINE(814)
				{
					HX_STACK_LINE(814)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(814)
					::openfl::_legacy::display::Sprite tmp9 = this->canvas;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(814)
					int tmp10 = tmp9->get_numChildren();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(814)
					int _g = tmp10;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(814)
					while((true)){
						HX_STACK_LINE(814)
						bool tmp11 = (_g1 < _g);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(814)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(814)
						if ((tmp12)){
							HX_STACK_LINE(814)
							break;
						}
						HX_STACK_LINE(814)
						int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(814)
						int i = tmp13;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(816)
						::openfl::_legacy::display::Sprite tmp14 = this->canvas;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(816)
						tmp14->removeChildAt((int)0);
					}
				}
				HX_STACK_LINE(818)
				this->canvas = null();
			}
			HX_STACK_LINE(821)
			::flixel::graphics::tile::FlxDrawBaseItem tmp9 = this->_headOfDrawStack;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(821)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(821)
			if ((tmp10)){
				HX_STACK_LINE(823)
				this->clearDrawStack();
			}
			HX_STACK_LINE(826)
			this->_transform = null();
			HX_STACK_LINE(827)
			this->_helperMatrix = null();
		}
		HX_STACK_LINE(830)
		this->_bounds = null();
		HX_STACK_LINE(831)
		::flixel::math::FlxPoint tmp3 = this->scroll;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(831)
		::flixel::math::FlxPoint tmp4 = ::flixel::util::FlxDestroyUtil_obj::put(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(831)
		this->scroll = tmp4;
		HX_STACK_LINE(832)
		::flixel::math::FlxPoint tmp5 = this->targetOffset;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(832)
		::flixel::math::FlxPoint tmp6 = ::flixel::util::FlxDestroyUtil_obj::put(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(832)
		this->targetOffset = tmp6;
		HX_STACK_LINE(833)
		::flixel::math::FlxRect tmp7 = this->deadzone;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(833)
		::flixel::math::FlxRect tmp8 = ::flixel::util::FlxDestroyUtil_obj::put(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(833)
		this->deadzone = tmp8;
		HX_STACK_LINE(835)
		this->target = null();
		HX_STACK_LINE(836)
		this->flashSprite = null();
		HX_STACK_LINE(837)
		this->_scrollRect = null();
		HX_STACK_LINE(838)
		this->_flashRect = null();
		HX_STACK_LINE(839)
		this->_flashPoint = null();
		HX_STACK_LINE(840)
		this->_fxFlashComplete = null();
		HX_STACK_LINE(841)
		this->_fxFadeComplete = null();
		HX_STACK_LINE(842)
		this->_fxShakeComplete = null();
		HX_STACK_LINE(843)
		this->_fxShakeOffset = null();
		HX_STACK_LINE(845)
		this->super::destroy();
	}
return null();
}


Void FlxCamera_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.FlxCamera","update",0xa0edff52,"flixel.FlxCamera.update","flixel/FlxCamera.hx",852,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(854)
		::flixel::FlxObject tmp = this->target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(854)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(854)
		if ((tmp1)){
			HX_STACK_LINE(856)
			this->updateFollow();
		}
		HX_STACK_LINE(859)
		this->updateScroll();
		HX_STACK_LINE(860)
		Float tmp2 = elapsed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(860)
		this->updateFlash(tmp2);
		HX_STACK_LINE(861)
		Float tmp3 = elapsed;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(861)
		this->updateFade(tmp3);
		HX_STACK_LINE(862)
		Float tmp4 = elapsed;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(862)
		this->updateShake(tmp4);
		HX_STACK_LINE(864)
		::openfl::_legacy::display::Sprite tmp5 = this->flashSprite;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(864)
		bool tmp6 = this->filtersEnabled;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(864)
		tmp5->set_filters((  ((tmp6)) ? Array< ::Dynamic >(this->_filters) : Array< ::Dynamic >(null()) ));
		HX_STACK_LINE(866)
		this->updateFlashSpritePosition();
	}
return null();
}


Void FlxCamera_obj::updateScroll( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateScroll",0x3fd094ff,"flixel.FlxCamera.updateScroll","flixel/FlxCamera.hx",874,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(876)
		::flixel::math::FlxPoint tmp = this->scroll;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(876)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(876)
		{
			HX_STACK_LINE(876)
			::flixel::math::FlxPoint tmp2 = this->scroll;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(876)
			Float Value = tmp2->x;		HX_STACK_VAR(Value,"Value");
			HX_STACK_LINE(876)
			Dynamic tmp3 = this->minScrollX;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(876)
			Dynamic Min = tmp3;		HX_STACK_VAR(Min,"Min");
			HX_STACK_LINE(876)
			Dynamic tmp4 = this->maxScrollX;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(876)
			bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(876)
			Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(876)
			if ((tmp5)){
				HX_STACK_LINE(876)
				Dynamic tmp7 = this->maxScrollX;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(876)
				int tmp8 = this->width;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(876)
				tmp6 = (tmp7 - tmp8);
			}
			else{
				HX_STACK_LINE(876)
				tmp6 = null();
			}
			HX_STACK_LINE(876)
			Dynamic Max = tmp6;		HX_STACK_VAR(Max,"Max");
			HX_STACK_LINE(876)
			bool tmp7 = (Min != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(876)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(876)
			if ((tmp7)){
				HX_STACK_LINE(876)
				tmp8 = (Value < Min);
			}
			else{
				HX_STACK_LINE(876)
				tmp8 = false;
			}
			HX_STACK_LINE(876)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(876)
			if ((tmp8)){
				HX_STACK_LINE(876)
				tmp9 = Min;
			}
			else{
				HX_STACK_LINE(876)
				tmp9 = Value;
			}
			HX_STACK_LINE(876)
			Float lowerBound = tmp9;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(876)
			bool tmp10 = (Max != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(876)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(876)
			if ((tmp10)){
				HX_STACK_LINE(876)
				tmp11 = (lowerBound > Max);
			}
			else{
				HX_STACK_LINE(876)
				tmp11 = false;
			}
			HX_STACK_LINE(876)
			if ((tmp11)){
				HX_STACK_LINE(876)
				tmp1 = Max;
			}
			else{
				HX_STACK_LINE(876)
				tmp1 = lowerBound;
			}
		}
		HX_STACK_LINE(876)
		tmp->set_x(tmp1);
		HX_STACK_LINE(877)
		::flixel::math::FlxPoint tmp2 = this->scroll;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(877)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(877)
		{
			HX_STACK_LINE(877)
			::flixel::math::FlxPoint tmp4 = this->scroll;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(877)
			Float Value = tmp4->y;		HX_STACK_VAR(Value,"Value");
			HX_STACK_LINE(877)
			Dynamic tmp5 = this->minScrollY;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(877)
			Dynamic Min = tmp5;		HX_STACK_VAR(Min,"Min");
			HX_STACK_LINE(877)
			Dynamic tmp6 = this->maxScrollY;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(877)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(877)
			Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(877)
			if ((tmp7)){
				HX_STACK_LINE(877)
				Dynamic tmp9 = this->maxScrollY;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(877)
				int tmp10 = this->height;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(877)
				tmp8 = (tmp9 - tmp10);
			}
			else{
				HX_STACK_LINE(877)
				tmp8 = null();
			}
			HX_STACK_LINE(877)
			Dynamic Max = tmp8;		HX_STACK_VAR(Max,"Max");
			HX_STACK_LINE(877)
			bool tmp9 = (Min != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(877)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(877)
			if ((tmp9)){
				HX_STACK_LINE(877)
				tmp10 = (Value < Min);
			}
			else{
				HX_STACK_LINE(877)
				tmp10 = false;
			}
			HX_STACK_LINE(877)
			Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(877)
			if ((tmp10)){
				HX_STACK_LINE(877)
				tmp11 = Min;
			}
			else{
				HX_STACK_LINE(877)
				tmp11 = Value;
			}
			HX_STACK_LINE(877)
			Float lowerBound = tmp11;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(877)
			bool tmp12 = (Max != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(877)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(877)
			if ((tmp12)){
				HX_STACK_LINE(877)
				tmp13 = (lowerBound > Max);
			}
			else{
				HX_STACK_LINE(877)
				tmp13 = false;
			}
			HX_STACK_LINE(877)
			if ((tmp13)){
				HX_STACK_LINE(877)
				tmp3 = Max;
			}
			else{
				HX_STACK_LINE(877)
				tmp3 = lowerBound;
			}
		}
		HX_STACK_LINE(877)
		tmp2->set_y(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateScroll,(void))

Void FlxCamera_obj::updateFollow( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateFollow",0xf2024e63,"flixel.FlxCamera.updateFollow","flixel/FlxCamera.hx",885,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(888)
		::flixel::math::FlxRect tmp = this->deadzone;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(888)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(888)
		if ((tmp1)){
			HX_STACK_LINE(890)
			::flixel::FlxObject tmp2 = this->target;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(890)
			::flixel::math::FlxPoint tmp3 = this->_point;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(890)
			tmp2->getMidpoint(tmp3);
			HX_STACK_LINE(891)
			::flixel::math::FlxPoint tmp4 = this->_point;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(891)
			::flixel::math::FlxPoint tmp5 = this->targetOffset;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(891)
			tmp4->addPoint(tmp5);
			HX_STACK_LINE(892)
			{
				HX_STACK_LINE(892)
				::flixel::math::FlxPoint tmp6 = this->_point;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(892)
				::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(892)
				::flixel::math::FlxPoint tmp7 = this->scroll;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(892)
				Float tmp8 = point->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(892)
				int tmp9 = this->width;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(892)
				Float tmp10 = (tmp9 * ((Float)0.5));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(892)
				Float tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(892)
				Float tmp12 = point->y;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(892)
				int tmp13 = this->height;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(892)
				Float tmp14 = (tmp13 * ((Float)0.5));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(892)
				Float tmp15 = (tmp12 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(892)
				tmp7->set(tmp11,tmp15);
				HX_STACK_LINE(892)
				{
					HX_STACK_LINE(892)
					bool tmp16 = point->_weak;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(892)
					if ((tmp16)){
						HX_STACK_LINE(892)
						point->put();
					}
				}
			}
		}
		else{
			HX_STACK_LINE(896)
			Float edge;		HX_STACK_VAR(edge,"edge");
			HX_STACK_LINE(897)
			::flixel::FlxObject tmp2 = this->target;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(897)
			Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(897)
			::flixel::math::FlxPoint tmp4 = this->targetOffset;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(897)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(897)
			Float tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(897)
			Float targetX = tmp6;		HX_STACK_VAR(targetX,"targetX");
			HX_STACK_LINE(898)
			::flixel::FlxObject tmp7 = this->target;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(898)
			Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(898)
			::flixel::math::FlxPoint tmp9 = this->targetOffset;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(898)
			Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(898)
			Float tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(898)
			Float targetY = tmp11;		HX_STACK_VAR(targetY,"targetY");
			HX_STACK_LINE(900)
			::flixel::FlxCameraFollowStyle tmp12 = this->style;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(900)
			bool tmp13 = (tmp12 == ::flixel::FlxCameraFollowStyle_obj::SCREEN_BY_SCREEN);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(900)
			if ((tmp13)){
				HX_STACK_LINE(902)
				Float tmp14 = targetX;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(902)
				::flixel::math::FlxPoint tmp15 = this->scroll;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(902)
				Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(902)
				int tmp17 = this->width;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(902)
				Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(902)
				bool tmp19 = (tmp14 >= tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(902)
				if ((tmp19)){
					HX_STACK_LINE(904)
					::flixel::math::FlxPoint tmp20 = this->_scrollTarget;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(904)
					::flixel::math::FlxPoint _g = tmp20;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(904)
					Float tmp21 = _g->x;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(904)
					int tmp22 = this->width;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(904)
					Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(904)
					_g->set_x(tmp23);
				}
				else{
					HX_STACK_LINE(906)
					Float tmp20 = targetX;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(906)
					::flixel::math::FlxPoint tmp21 = this->scroll;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(906)
					Float tmp22 = tmp21->x;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(906)
					bool tmp23 = (tmp20 < tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(906)
					if ((tmp23)){
						HX_STACK_LINE(908)
						::flixel::math::FlxPoint tmp24 = this->_scrollTarget;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(908)
						::flixel::math::FlxPoint _g = tmp24;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(908)
						Float tmp25 = _g->x;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(908)
						int tmp26 = this->width;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(908)
						Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(908)
						_g->set_x(tmp27);
					}
				}
				HX_STACK_LINE(911)
				Float tmp20 = targetY;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(911)
				::flixel::math::FlxPoint tmp21 = this->scroll;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(911)
				Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(911)
				int tmp23 = this->height;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(911)
				Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(911)
				bool tmp25 = (tmp20 >= tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(911)
				if ((tmp25)){
					HX_STACK_LINE(913)
					::flixel::math::FlxPoint tmp26 = this->_scrollTarget;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(913)
					::flixel::math::FlxPoint _g = tmp26;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(913)
					Float tmp27 = _g->y;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(913)
					int tmp28 = this->height;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(913)
					Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(913)
					_g->set_y(tmp29);
				}
				else{
					HX_STACK_LINE(915)
					Float tmp26 = targetY;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(915)
					::flixel::math::FlxPoint tmp27 = this->scroll;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(915)
					Float tmp28 = tmp27->y;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(915)
					bool tmp29 = (tmp26 < tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(915)
					if ((tmp29)){
						HX_STACK_LINE(917)
						::flixel::math::FlxPoint tmp30 = this->_scrollTarget;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(917)
						::flixel::math::FlxPoint _g = tmp30;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(917)
						Float tmp31 = _g->y;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(917)
						int tmp32 = this->height;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(917)
						Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(917)
						_g->set_y(tmp33);
					}
				}
			}
			else{
				HX_STACK_LINE(922)
				Float tmp14 = targetX;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(922)
				::flixel::math::FlxRect tmp15 = this->deadzone;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(922)
				Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(922)
				Float tmp17 = (tmp14 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(922)
				edge = tmp17;
				HX_STACK_LINE(923)
				::flixel::math::FlxPoint tmp18 = this->_scrollTarget;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(923)
				Float tmp19 = tmp18->x;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(923)
				Float tmp20 = edge;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(923)
				bool tmp21 = (tmp19 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(923)
				if ((tmp21)){
					HX_STACK_LINE(925)
					::flixel::math::FlxPoint tmp22 = this->_scrollTarget;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(925)
					Float tmp23 = edge;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(925)
					tmp22->set_x(tmp23);
				}
				HX_STACK_LINE(927)
				Float tmp22 = targetX;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(927)
				::flixel::FlxObject tmp23 = this->target;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(927)
				Float tmp24 = tmp23->get_width();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(927)
				Float tmp25 = (tmp22 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(927)
				::flixel::math::FlxRect tmp26 = this->deadzone;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(927)
				Float tmp27 = tmp26->x;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(927)
				Float tmp28 = (tmp25 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(927)
				::flixel::math::FlxRect tmp29 = this->deadzone;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(927)
				Float tmp30 = tmp29->width;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(927)
				Float tmp31 = (tmp28 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(927)
				edge = tmp31;
				HX_STACK_LINE(928)
				::flixel::math::FlxPoint tmp32 = this->_scrollTarget;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(928)
				Float tmp33 = tmp32->x;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(928)
				Float tmp34 = edge;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(928)
				bool tmp35 = (tmp33 < tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(928)
				if ((tmp35)){
					HX_STACK_LINE(930)
					::flixel::math::FlxPoint tmp36 = this->_scrollTarget;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(930)
					Float tmp37 = edge;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(930)
					tmp36->set_x(tmp37);
				}
				HX_STACK_LINE(933)
				Float tmp36 = targetY;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(933)
				::flixel::math::FlxRect tmp37 = this->deadzone;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(933)
				Float tmp38 = tmp37->y;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(933)
				Float tmp39 = (tmp36 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(933)
				edge = tmp39;
				HX_STACK_LINE(934)
				::flixel::math::FlxPoint tmp40 = this->_scrollTarget;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(934)
				Float tmp41 = tmp40->y;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(934)
				Float tmp42 = edge;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(934)
				bool tmp43 = (tmp41 > tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(934)
				if ((tmp43)){
					HX_STACK_LINE(936)
					::flixel::math::FlxPoint tmp44 = this->_scrollTarget;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(936)
					Float tmp45 = edge;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(936)
					tmp44->set_y(tmp45);
				}
				HX_STACK_LINE(938)
				Float tmp44 = targetY;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(938)
				::flixel::FlxObject tmp45 = this->target;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(938)
				Float tmp46 = tmp45->get_height();		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(938)
				Float tmp47 = (tmp44 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(938)
				::flixel::math::FlxRect tmp48 = this->deadzone;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(938)
				Float tmp49 = tmp48->y;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(938)
				Float tmp50 = (tmp47 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(938)
				::flixel::math::FlxRect tmp51 = this->deadzone;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(938)
				Float tmp52 = tmp51->height;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(938)
				Float tmp53 = (tmp50 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(938)
				edge = tmp53;
				HX_STACK_LINE(939)
				::flixel::math::FlxPoint tmp54 = this->_scrollTarget;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(939)
				Float tmp55 = tmp54->y;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(939)
				Float tmp56 = edge;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(939)
				bool tmp57 = (tmp55 < tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(939)
				if ((tmp57)){
					HX_STACK_LINE(941)
					::flixel::math::FlxPoint tmp58 = this->_scrollTarget;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(941)
					Float tmp59 = edge;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(941)
					tmp58->set_y(tmp59);
				}
			}
			HX_STACK_LINE(945)
			::flixel::FlxObject tmp14 = this->target;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(945)
			bool tmp15 = ::Std_obj::is(tmp14,hx::ClassOf< ::flixel::FlxSprite >());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(945)
			if ((tmp15)){
				HX_STACK_LINE(947)
				::flixel::math::FlxPoint tmp16 = this->_lastTargetPosition;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(947)
				bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(947)
				if ((tmp17)){
					HX_STACK_LINE(949)
					::flixel::math::FlxPoint tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(949)
					{
						HX_STACK_LINE(949)
						::flixel::util::FlxPool_flixel_math_FlxPoint tmp19 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(949)
						::flixel::math::FlxPoint tmp20 = tmp19->get();		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(949)
						::flixel::FlxObject tmp21 = this->target;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(949)
						Float tmp22 = tmp21->x;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(949)
						::flixel::FlxObject tmp23 = this->target;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(949)
						Float tmp24 = tmp23->y;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(949)
						::flixel::math::FlxPoint tmp25 = tmp20->set(tmp22,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(949)
						::flixel::math::FlxPoint point = tmp25;		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(949)
						point->_inPool = false;
						HX_STACK_LINE(949)
						tmp18 = point;
					}
					HX_STACK_LINE(949)
					this->_lastTargetPosition = tmp18;
				}
				HX_STACK_LINE(951)
				{
					HX_STACK_LINE(951)
					::flixel::math::FlxPoint tmp18 = this->_scrollTarget;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(951)
					::flixel::math::FlxPoint _g = tmp18;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(951)
					Float tmp19 = _g->x;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(951)
					::flixel::FlxObject tmp20 = this->target;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(951)
					Float tmp21 = tmp20->x;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(951)
					::flixel::math::FlxPoint tmp22 = this->_lastTargetPosition;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(951)
					Float tmp23 = tmp22->x;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(951)
					Float tmp24 = (tmp21 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(951)
					::flixel::math::FlxPoint tmp25 = this->followLead;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(951)
					Float tmp26 = tmp25->x;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(951)
					Float tmp27 = (tmp24 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(951)
					Float tmp28 = (tmp19 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(951)
					_g->set_x(tmp28);
				}
				HX_STACK_LINE(952)
				{
					HX_STACK_LINE(952)
					::flixel::math::FlxPoint tmp18 = this->_scrollTarget;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(952)
					::flixel::math::FlxPoint _g = tmp18;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(952)
					Float tmp19 = _g->y;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(952)
					::flixel::FlxObject tmp20 = this->target;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(952)
					Float tmp21 = tmp20->y;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(952)
					::flixel::math::FlxPoint tmp22 = this->_lastTargetPosition;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(952)
					Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(952)
					Float tmp24 = (tmp21 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(952)
					::flixel::math::FlxPoint tmp25 = this->followLead;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(952)
					Float tmp26 = tmp25->y;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(952)
					Float tmp27 = (tmp24 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(952)
					Float tmp28 = (tmp19 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(952)
					_g->set_y(tmp28);
				}
				HX_STACK_LINE(954)
				::flixel::math::FlxPoint tmp18 = this->_lastTargetPosition;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(954)
				::flixel::FlxObject tmp19 = this->target;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(954)
				Float tmp20 = tmp19->x;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(954)
				tmp18->set_x(tmp20);
				HX_STACK_LINE(955)
				::flixel::math::FlxPoint tmp21 = this->_lastTargetPosition;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(955)
				::flixel::FlxObject tmp22 = this->target;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(955)
				Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(955)
				tmp21->set_y(tmp23);
			}
			HX_STACK_LINE(958)
			Float tmp16 = this->followLerp;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(958)
			int tmp17 = ::flixel::FlxG_obj::updateFramerate;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(958)
			Float tmp18 = (Float((int)60) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(958)
			bool tmp19 = (tmp16 >= tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(958)
			if ((tmp19)){
				HX_STACK_LINE(960)
				::flixel::math::FlxPoint tmp20 = this->scroll;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(960)
				::flixel::math::FlxPoint _this = tmp20;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(960)
				::flixel::math::FlxPoint tmp21 = this->_scrollTarget;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(960)
				::flixel::math::FlxPoint point = tmp21;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(960)
				Float tmp22 = point->x;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(960)
				_this->set_x(tmp22);
				HX_STACK_LINE(960)
				Float tmp23 = point->y;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(960)
				_this->set_y(tmp23);
				HX_STACK_LINE(960)
				{
					HX_STACK_LINE(960)
					bool tmp24 = point->_weak;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(960)
					if ((tmp24)){
						HX_STACK_LINE(960)
						point->put();
					}
				}
				HX_STACK_LINE(960)
				_this;
			}
			else{
				HX_STACK_LINE(964)
				{
					HX_STACK_LINE(964)
					::flixel::math::FlxPoint tmp20 = this->scroll;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(964)
					::flixel::math::FlxPoint _g = tmp20;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(964)
					Float tmp21 = _g->x;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(964)
					::flixel::math::FlxPoint tmp22 = this->_scrollTarget;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(964)
					Float tmp23 = tmp22->x;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(964)
					::flixel::math::FlxPoint tmp24 = this->scroll;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(964)
					Float tmp25 = tmp24->x;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(964)
					Float tmp26 = (tmp23 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(964)
					Float tmp27 = this->followLerp;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(964)
					Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(964)
					int tmp29 = ::flixel::FlxG_obj::updateFramerate;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(964)
					Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(964)
					Float tmp31 = (Float(tmp30) / Float((int)60));		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(964)
					Float tmp32 = (tmp21 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(964)
					_g->set_x(tmp32);
				}
				HX_STACK_LINE(965)
				{
					HX_STACK_LINE(965)
					::flixel::math::FlxPoint tmp20 = this->scroll;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(965)
					::flixel::math::FlxPoint _g = tmp20;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(965)
					Float tmp21 = _g->y;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(965)
					::flixel::math::FlxPoint tmp22 = this->_scrollTarget;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(965)
					Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(965)
					::flixel::math::FlxPoint tmp24 = this->scroll;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(965)
					Float tmp25 = tmp24->y;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(965)
					Float tmp26 = (tmp23 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(965)
					Float tmp27 = this->followLerp;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(965)
					Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(965)
					int tmp29 = ::flixel::FlxG_obj::updateFramerate;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(965)
					Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(965)
					Float tmp31 = (Float(tmp30) / Float((int)60));		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(965)
					Float tmp32 = (tmp21 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(965)
					_g->set_y(tmp32);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateFollow,(void))

Void FlxCamera_obj::updateFlash( Float elapsed){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateFlash",0x43f2dcfe,"flixel.FlxCamera.updateFlash","flixel/FlxCamera.hx",971,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(973)
		Float tmp = this->_fxFlashAlpha;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(973)
		bool tmp1 = (tmp > ((Float)0.0));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(973)
		if ((tmp1)){
			HX_STACK_LINE(975)
			Float tmp2 = elapsed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(975)
			Float tmp3 = this->_fxFlashDuration;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(975)
			Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(975)
			hx::SubEq(this->_fxFlashAlpha,tmp4);
			HX_STACK_LINE(976)
			Float tmp5 = this->_fxFlashAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(976)
			bool tmp6 = (tmp5 <= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(976)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(976)
			if ((tmp6)){
				HX_STACK_LINE(976)
				Dynamic tmp8 = this->_fxFlashComplete_dyn();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(976)
				Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(976)
				tmp7 = (tmp9 != null());
			}
			else{
				HX_STACK_LINE(976)
				tmp7 = false;
			}
			HX_STACK_LINE(976)
			if ((tmp7)){
				HX_STACK_LINE(978)
				this->_fxFlashComplete();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,updateFlash,(void))

Void FlxCamera_obj::updateFade( Float elapsed){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateFade",0xaec3f1ee,"flixel.FlxCamera.updateFade","flixel/FlxCamera.hx",984,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(985)
		bool tmp = this->_fxFadeCompleted;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(985)
		if ((tmp)){
			HX_STACK_LINE(986)
			return null();
		}
		HX_STACK_LINE(988)
		bool tmp1 = this->_fxFadeIn;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(988)
		if ((tmp1)){
			HX_STACK_LINE(990)
			Float tmp2 = elapsed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(990)
			Float tmp3 = this->_fxFadeDuration;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(990)
			Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(990)
			hx::SubEq(this->_fxFadeAlpha,tmp4);
			HX_STACK_LINE(991)
			Float tmp5 = this->_fxFadeAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(991)
			bool tmp6 = (tmp5 <= ((Float)0.0));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(991)
			if ((tmp6)){
				HX_STACK_LINE(993)
				this->_fxFadeAlpha = ((Float)0.0);
				HX_STACK_LINE(994)
				this->completeFade();
			}
		}
		else{
			HX_STACK_LINE(999)
			Float tmp2 = elapsed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(999)
			Float tmp3 = this->_fxFadeDuration;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(999)
			Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(999)
			hx::AddEq(this->_fxFadeAlpha,tmp4);
			HX_STACK_LINE(1000)
			Float tmp5 = this->_fxFadeAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1000)
			bool tmp6 = (tmp5 >= ((Float)1.0));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1000)
			if ((tmp6)){
				HX_STACK_LINE(1002)
				this->_fxFadeAlpha = ((Float)1.0);
				HX_STACK_LINE(1003)
				this->completeFade();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,updateFade,(void))

Void FlxCamera_obj::completeFade( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","completeFade",0xb02048de,"flixel.FlxCamera.completeFade","flixel/FlxCamera.hx",1009,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1010)
		this->_fxFadeCompleted = true;
		HX_STACK_LINE(1011)
		Dynamic tmp = this->_fxFadeComplete_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1011)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1011)
		if ((tmp1)){
			HX_STACK_LINE(1012)
			this->_fxFadeComplete();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,completeFade,(void))

Void FlxCamera_obj::updateShake( Float elapsed){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateShake",0xbd838614,"flixel.FlxCamera.updateShake","flixel/FlxCamera.hx",1016,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(1017)
		Float tmp = this->_fxShakeDuration;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1017)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1017)
		if ((tmp1)){
			HX_STACK_LINE(1019)
			hx::SubEq(this->_fxShakeDuration,elapsed);
			HX_STACK_LINE(1020)
			Float tmp2 = this->_fxShakeDuration;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1020)
			bool tmp3 = (tmp2 <= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1020)
			if ((tmp3)){
				HX_STACK_LINE(1022)
				::flixel::math::FlxPoint tmp4 = this->_fxShakeOffset;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1022)
				tmp4->set(null(),null());
				HX_STACK_LINE(1023)
				Dynamic tmp5 = this->_fxShakeComplete_dyn();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1023)
				bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1023)
				if ((tmp6)){
					HX_STACK_LINE(1025)
					this->_fxShakeComplete();
				}
			}
			else{
				HX_STACK_LINE(1030)
				::flixel::util::FlxAxes tmp4 = this->_fxShakeAxes;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1030)
				bool tmp5 = (tmp4 != ::flixel::util::FlxAxes_obj::Y);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1030)
				if ((tmp5)){
					HX_STACK_LINE(1032)
					::flixel::math::FlxPoint tmp6 = this->_fxShakeOffset;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1032)
					::flixel::math::FlxRandom tmp7 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1032)
					Float tmp8 = this->_fxShakeIntensity;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1032)
					Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1032)
					int tmp10 = this->width;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1032)
					Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1032)
					Float tmp12 = this->_fxShakeIntensity;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1032)
					int tmp13 = this->width;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1032)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1032)
					Float tmp15 = tmp7->_float(tmp11,tmp14,null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1032)
					Float tmp16 = this->zoom;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1032)
					Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1032)
					tmp6->set_x(tmp17);
				}
				HX_STACK_LINE(1034)
				::flixel::util::FlxAxes tmp6 = this->_fxShakeAxes;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1034)
				bool tmp7 = (tmp6 != ::flixel::util::FlxAxes_obj::X);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1034)
				if ((tmp7)){
					HX_STACK_LINE(1036)
					::flixel::math::FlxPoint tmp8 = this->_fxShakeOffset;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1036)
					::flixel::math::FlxRandom tmp9 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1036)
					Float tmp10 = this->_fxShakeIntensity;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1036)
					Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1036)
					int tmp12 = this->height;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1036)
					Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1036)
					Float tmp14 = this->_fxShakeIntensity;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1036)
					int tmp15 = this->height;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1036)
					Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1036)
					Float tmp17 = tmp9->_float(tmp13,tmp16,null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1036)
					Float tmp18 = this->zoom;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1036)
					Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1036)
					tmp8->set_y(tmp19);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,updateShake,(void))

Void FlxCamera_obj::updateFlashSpritePosition( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateFlashSpritePosition",0x5aef376c,"flixel.FlxCamera.updateFlashSpritePosition","flixel/FlxCamera.hx",1047,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1048)
		::openfl::_legacy::display::Sprite tmp = this->flashSprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1048)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1048)
		if ((tmp1)){
			HX_STACK_LINE(1050)
			::openfl::_legacy::display::Sprite tmp2 = this->flashSprite;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1050)
			Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1050)
			::flixel::_system::scaleModes::BaseScaleMode tmp4 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1050)
			Float tmp5 = tmp4->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1050)
			Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1050)
			::flixel::math::FlxPoint tmp7 = this->_flashOffset;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1050)
			Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1050)
			Float tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1050)
			tmp2->set_x(tmp9);
			HX_STACK_LINE(1051)
			::openfl::_legacy::display::Sprite tmp10 = this->flashSprite;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1051)
			Float tmp11 = this->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1051)
			::flixel::_system::scaleModes::BaseScaleMode tmp12 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1051)
			Float tmp13 = tmp12->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1051)
			Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1051)
			::flixel::math::FlxPoint tmp15 = this->_flashOffset;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1051)
			Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1051)
			Float tmp17 = (tmp14 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1051)
			tmp10->set_y(tmp17);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateFlashSpritePosition,(void))

Void FlxCamera_obj::updateFlashOffset( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateFlashOffset",0x0e9fbb31,"flixel.FlxCamera.updateFlashOffset","flixel/FlxCamera.hx",1060,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1061)
		::flixel::math::FlxPoint tmp = this->_flashOffset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1061)
		int tmp1 = this->width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1061)
		Float tmp2 = (tmp1 * ((Float)0.5));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1061)
		::flixel::_system::scaleModes::BaseScaleMode tmp3 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1061)
		Float tmp4 = tmp3->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1061)
		Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1061)
		Float tmp6 = this->initialZoom;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1061)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1061)
		tmp->set_x(tmp7);
		HX_STACK_LINE(1062)
		::flixel::math::FlxPoint tmp8 = this->_flashOffset;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1062)
		int tmp9 = this->height;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1062)
		Float tmp10 = (tmp9 * ((Float)0.5));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1062)
		::flixel::_system::scaleModes::BaseScaleMode tmp11 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1062)
		Float tmp12 = tmp11->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1062)
		Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1062)
		Float tmp14 = this->initialZoom;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1062)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1062)
		tmp8->set_y(tmp15);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateFlashOffset,(void))

Void FlxCamera_obj::updateScrollRect( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateScrollRect",0xbf58f9c3,"flixel.FlxCamera.updateScrollRect","flixel/FlxCamera.hx",1074,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1075)
		::openfl::_legacy::display::Sprite tmp = this->_scrollRect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1075)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1075)
		::openfl::_legacy::geom::Rectangle tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1075)
		if ((tmp1)){
			HX_STACK_LINE(1075)
			::openfl::_legacy::display::Sprite tmp3 = this->_scrollRect;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1075)
			tmp2 = tmp3->get_scrollRect();
		}
		else{
			HX_STACK_LINE(1075)
			tmp2 = null();
		}
		HX_STACK_LINE(1075)
		::openfl::_legacy::geom::Rectangle rect = tmp2;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(1077)
		bool tmp3 = (rect != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1077)
		if ((tmp3)){
			HX_STACK_LINE(1079)
			Float tmp4 = rect->y = (int)0;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1079)
			rect->x = tmp4;
			HX_STACK_LINE(1080)
			int tmp5 = this->width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1080)
			Float tmp6 = this->initialZoom;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1080)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1080)
			::flixel::_system::scaleModes::BaseScaleMode tmp8 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1080)
			Float tmp9 = tmp8->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1080)
			Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1080)
			rect->width = tmp10;
			HX_STACK_LINE(1081)
			int tmp11 = this->height;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1081)
			Float tmp12 = this->initialZoom;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1081)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1081)
			::flixel::_system::scaleModes::BaseScaleMode tmp14 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1081)
			Float tmp15 = tmp14->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1081)
			Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1081)
			rect->height = tmp16;
			HX_STACK_LINE(1082)
			::openfl::_legacy::display::Sprite tmp17 = this->_scrollRect;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1082)
			::openfl::_legacy::geom::Rectangle tmp18 = rect;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1082)
			tmp17->set_scrollRect(tmp18);
			HX_STACK_LINE(1083)
			::openfl::_legacy::display::Sprite tmp19 = this->_scrollRect;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1083)
			Float tmp20 = ((Float)-0.5);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1083)
			Float tmp21 = rect->width;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1083)
			Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1083)
			tmp19->set_x(tmp22);
			HX_STACK_LINE(1084)
			::openfl::_legacy::display::Sprite tmp23 = this->_scrollRect;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1084)
			Float tmp24 = ((Float)-0.5);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1084)
			Float tmp25 = rect->height;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1084)
			Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1084)
			tmp23->set_y(tmp26);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateScrollRect,(void))

Void FlxCamera_obj::updateInternalSpritePositions( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateInternalSpritePositions",0x7d5baef6,"flixel.FlxCamera.updateInternalSpritePositions","flixel/FlxCamera.hx",1094,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1095)
		bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1095)
		if ((tmp)){
			HX_STACK_LINE(1097)
			::openfl::_legacy::display::Bitmap tmp1 = this->_flashBitmap;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1097)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1097)
			if ((tmp2)){
				HX_STACK_LINE(1099)
				bool tmp3 = this->regen;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1099)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1099)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1099)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1099)
				if ((tmp5)){
					HX_STACK_LINE(1099)
					int tmp7 = this->width;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1099)
					int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1099)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1099)
					::openfl::_legacy::display::BitmapData tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1099)
					::openfl::_legacy::display::BitmapData tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1099)
					::openfl::_legacy::display::BitmapData tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1099)
					int tmp13 = tmp12->get_width();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1099)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1099)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1099)
					tmp6 = (tmp9 != tmp15);
				}
				else{
					HX_STACK_LINE(1099)
					tmp6 = true;
				}
				HX_STACK_LINE(1099)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1099)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1099)
				if ((tmp7)){
					HX_STACK_LINE(1099)
					int tmp9 = this->height;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1099)
					int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1099)
					::openfl::_legacy::display::BitmapData tmp11 = this->buffer;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1099)
					::openfl::_legacy::display::BitmapData tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1099)
					int tmp13 = tmp12->get_height();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1099)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1099)
					tmp8 = (tmp10 != tmp14);
				}
				else{
					HX_STACK_LINE(1099)
					tmp8 = true;
				}
				HX_STACK_LINE(1099)
				this->regen = tmp8;
				HX_STACK_LINE(1101)
				::openfl::_legacy::display::Bitmap tmp9 = this->_flashBitmap;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1101)
				Float tmp10 = ((Float)-0.5);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1101)
				int tmp11 = this->width;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1101)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1101)
				Float tmp13 = this->scaleX;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1101)
				Float tmp14 = this->initialZoom;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1101)
				Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1101)
				Float tmp16 = (tmp12 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1101)
				::flixel::_system::scaleModes::BaseScaleMode tmp17 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1101)
				Float tmp18 = tmp17->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1101)
				Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1101)
				tmp9->set_x(tmp19);
				HX_STACK_LINE(1102)
				::openfl::_legacy::display::Bitmap tmp20 = this->_flashBitmap;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1102)
				Float tmp21 = ((Float)-0.5);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1102)
				int tmp22 = this->height;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1102)
				Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1102)
				Float tmp24 = this->scaleY;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1102)
				Float tmp25 = this->initialZoom;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1102)
				Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1102)
				Float tmp27 = (tmp23 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1102)
				::flixel::_system::scaleModes::BaseScaleMode tmp28 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1102)
				Float tmp29 = tmp28->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1102)
				Float tmp30 = (tmp27 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1102)
				tmp20->set_y(tmp30);
			}
		}
		else{
			HX_STACK_LINE(1107)
			::openfl::_legacy::display::Sprite tmp1 = this->canvas;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1107)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1107)
			if ((tmp2)){
				HX_STACK_LINE(1109)
				::openfl::_legacy::display::Sprite tmp3 = this->canvas;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1109)
				Float tmp4 = ((Float)-0.5);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1109)
				int tmp5 = this->width;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1109)
				Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1109)
				Float tmp7 = this->scaleX;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1109)
				Float tmp8 = this->initialZoom;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1109)
				Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1109)
				Float tmp10 = (tmp6 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1109)
				::flixel::_system::scaleModes::BaseScaleMode tmp11 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1109)
				Float tmp12 = tmp11->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1109)
				Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1109)
				tmp3->set_x(tmp13);
				HX_STACK_LINE(1110)
				::openfl::_legacy::display::Sprite tmp14 = this->canvas;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1110)
				Float tmp15 = ((Float)-0.5);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1110)
				int tmp16 = this->height;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1110)
				Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1110)
				Float tmp18 = this->scaleY;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1110)
				Float tmp19 = this->initialZoom;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1110)
				Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1110)
				Float tmp21 = (tmp17 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1110)
				::flixel::_system::scaleModes::BaseScaleMode tmp22 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1110)
				Float tmp23 = tmp22->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1110)
				Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1110)
				tmp14->set_y(tmp24);
				HX_STACK_LINE(1112)
				::openfl::_legacy::display::Sprite tmp25 = this->canvas;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1112)
				Float tmp26 = this->totalScaleX;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1112)
				tmp25->set_scaleX(tmp26);
				HX_STACK_LINE(1113)
				::openfl::_legacy::display::Sprite tmp27 = this->canvas;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1113)
				Float tmp28 = this->totalScaleY;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1113)
				tmp27->set_scaleY(tmp28);
				HX_STACK_LINE(1116)
				::openfl::_legacy::display::Sprite tmp29 = this->debugLayer;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1116)
				bool tmp30 = (tmp29 != null());		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1116)
				if ((tmp30)){
					HX_STACK_LINE(1118)
					::openfl::_legacy::display::Sprite tmp31 = this->debugLayer;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1118)
					::openfl::_legacy::display::Sprite tmp32 = this->canvas;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1118)
					Float tmp33 = tmp32->get_x();		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1118)
					tmp31->set_x(tmp33);
					HX_STACK_LINE(1119)
					::openfl::_legacy::display::Sprite tmp34 = this->debugLayer;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1119)
					::openfl::_legacy::display::Sprite tmp35 = this->canvas;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1119)
					Float tmp36 = tmp35->get_y();		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1119)
					tmp34->set_y(tmp36);
					HX_STACK_LINE(1121)
					::openfl::_legacy::display::Sprite tmp37 = this->debugLayer;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1121)
					Float tmp38 = this->totalScaleX;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1121)
					tmp37->set_scaleX(tmp38);
					HX_STACK_LINE(1122)
					::openfl::_legacy::display::Sprite tmp39 = this->debugLayer;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(1122)
					Float tmp40 = this->totalScaleY;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(1122)
					tmp39->set_scaleY(tmp40);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateInternalSpritePositions,(void))

Void FlxCamera_obj::follow( ::flixel::FlxObject Target,::flixel::FlxCameraFollowStyle Style,Dynamic Lerp){
{
		HX_STACK_FRAME("flixel.FlxCamera","follow",0x137f0aba,"flixel.FlxCamera.follow","flixel/FlxCamera.hx",1138,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Target,"Target")
		HX_STACK_ARG(Style,"Style")
		HX_STACK_ARG(Lerp,"Lerp")
		HX_STACK_LINE(1139)
		bool tmp = (Style == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1139)
		if ((tmp)){
			HX_STACK_LINE(1140)
			Style = ::flixel::FlxCameraFollowStyle_obj::LOCKON;
		}
		HX_STACK_LINE(1142)
		bool tmp1 = (Lerp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1142)
		if ((tmp1)){
			HX_STACK_LINE(1143)
			int tmp2 = ::flixel::FlxG_obj::updateFramerate;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1143)
			Float tmp3 = (Float((int)60) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1143)
			Lerp = tmp3;
		}
		HX_STACK_LINE(1145)
		this->style = Style;
		HX_STACK_LINE(1146)
		this->target = Target;
		HX_STACK_LINE(1147)
		Dynamic tmp2 = Lerp;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1147)
		this->set_followLerp(tmp2);
		HX_STACK_LINE(1148)
		Float helper;		HX_STACK_VAR(helper,"helper");
		HX_STACK_LINE(1149)
		Float w = (int)0;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(1150)
		Float h = (int)0;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(1151)
		this->_lastTargetPosition = null();
		HX_STACK_LINE(1153)
		bool tmp3 = (Style != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1153)
		if ((tmp3)){
			HX_STACK_LINE(1153)
			switch( (int)(Style->__Index())){
				case (int)0: {
					HX_STACK_LINE(1156)
					::flixel::FlxObject tmp4 = this->target;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1156)
					bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1156)
					if ((tmp5)){
						HX_STACK_LINE(1158)
						::flixel::FlxObject tmp6 = this->target;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1158)
						Float tmp7 = tmp6->get_width();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1158)
						w = tmp7;
						HX_STACK_LINE(1159)
						::flixel::FlxObject tmp8 = this->target;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1159)
						Float tmp9 = tmp8->get_height();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1159)
						h = tmp9;
					}
					HX_STACK_LINE(1161)
					::flixel::math::FlxRect tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1161)
					{
						HX_STACK_LINE(1161)
						::flixel::math::FlxRect tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1161)
						{
							HX_STACK_LINE(1161)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp8 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1161)
							::flixel::math::FlxRect tmp9 = tmp8->get();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1161)
							::flixel::math::FlxRect _this = tmp9;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1161)
							int tmp10 = this->width;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1161)
							Float tmp11 = w;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1161)
							Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1161)
							Float tmp13 = (Float(tmp12) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1161)
							_this->x = tmp13;
							HX_STACK_LINE(1161)
							int tmp14 = this->height;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1161)
							Float tmp15 = h;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1161)
							Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1161)
							Float tmp17 = (Float(tmp16) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1161)
							Float tmp18 = (h * ((Float)0.25));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1161)
							Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1161)
							_this->y = tmp19;
							HX_STACK_LINE(1161)
							_this->width = w;
							HX_STACK_LINE(1161)
							_this->height = h;
							HX_STACK_LINE(1161)
							tmp7 = _this;
						}
						HX_STACK_LINE(1161)
						::flixel::math::FlxRect rect = tmp7;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(1161)
						rect->_inPool = false;
						HX_STACK_LINE(1161)
						tmp6 = rect;
					}
					HX_STACK_LINE(1161)
					this->deadzone = tmp6;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(1164)
					int tmp4 = this->width;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1164)
					Float tmp5 = (Float(tmp4) / Float((int)8));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1164)
					Float w1 = tmp5;		HX_STACK_VAR(w1,"w1");
					HX_STACK_LINE(1165)
					int tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1165)
					Float tmp7 = (Float(tmp6) / Float((int)3));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1165)
					Float h1 = tmp7;		HX_STACK_VAR(h1,"h1");
					HX_STACK_LINE(1166)
					::flixel::math::FlxRect tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1166)
					{
						HX_STACK_LINE(1166)
						::flixel::math::FlxRect tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1166)
						{
							HX_STACK_LINE(1166)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp10 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1166)
							::flixel::math::FlxRect tmp11 = tmp10->get();		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1166)
							::flixel::math::FlxRect _this = tmp11;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1166)
							int tmp12 = this->width;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1166)
							Float tmp13 = w1;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1166)
							Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1166)
							Float tmp15 = (Float(tmp14) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1166)
							_this->x = tmp15;
							HX_STACK_LINE(1166)
							int tmp16 = this->height;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1166)
							Float tmp17 = h1;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1166)
							Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1166)
							Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1166)
							Float tmp20 = (h1 * ((Float)0.25));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1166)
							Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1166)
							_this->y = tmp21;
							HX_STACK_LINE(1166)
							_this->width = w1;
							HX_STACK_LINE(1166)
							_this->height = h1;
							HX_STACK_LINE(1166)
							tmp9 = _this;
						}
						HX_STACK_LINE(1166)
						::flixel::math::FlxRect rect = tmp9;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(1166)
						rect->_inPool = false;
						HX_STACK_LINE(1166)
						tmp8 = rect;
					}
					HX_STACK_LINE(1166)
					this->deadzone = tmp8;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(1169)
					int tmp4 = this->width;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1169)
					int tmp5 = this->height;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1169)
					Float tmp6 = ::Math_obj::max(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1169)
					Float tmp7 = (Float(tmp6) / Float((int)4));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1169)
					helper = tmp7;
					HX_STACK_LINE(1170)
					::flixel::math::FlxRect tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1170)
					{
						HX_STACK_LINE(1170)
						::flixel::math::FlxRect tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1170)
						{
							HX_STACK_LINE(1170)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp10 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1170)
							::flixel::math::FlxRect tmp11 = tmp10->get();		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1170)
							::flixel::math::FlxRect _this = tmp11;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1170)
							int tmp12 = this->width;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1170)
							Float tmp13 = helper;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1170)
							Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1170)
							Float tmp15 = (Float(tmp14) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1170)
							_this->x = tmp15;
							HX_STACK_LINE(1170)
							int tmp16 = this->height;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1170)
							Float tmp17 = helper;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1170)
							Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1170)
							Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1170)
							_this->y = tmp19;
							HX_STACK_LINE(1170)
							_this->width = helper;
							HX_STACK_LINE(1170)
							_this->height = helper;
							HX_STACK_LINE(1170)
							tmp9 = _this;
						}
						HX_STACK_LINE(1170)
						::flixel::math::FlxRect rect = tmp9;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(1170)
						rect->_inPool = false;
						HX_STACK_LINE(1170)
						tmp8 = rect;
					}
					HX_STACK_LINE(1170)
					this->deadzone = tmp8;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(1173)
					int tmp4 = this->width;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1173)
					int tmp5 = this->height;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1173)
					Float tmp6 = ::Math_obj::max(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1173)
					Float tmp7 = (Float(tmp6) / Float((int)8));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1173)
					helper = tmp7;
					HX_STACK_LINE(1174)
					::flixel::math::FlxRect tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1174)
					{
						HX_STACK_LINE(1174)
						::flixel::math::FlxRect tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1174)
						{
							HX_STACK_LINE(1174)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp10 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1174)
							::flixel::math::FlxRect tmp11 = tmp10->get();		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1174)
							::flixel::math::FlxRect _this = tmp11;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1174)
							int tmp12 = this->width;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1174)
							Float tmp13 = helper;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1174)
							Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1174)
							Float tmp15 = (Float(tmp14) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1174)
							_this->x = tmp15;
							HX_STACK_LINE(1174)
							int tmp16 = this->height;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1174)
							Float tmp17 = helper;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1174)
							Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1174)
							Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1174)
							_this->y = tmp19;
							HX_STACK_LINE(1174)
							_this->width = helper;
							HX_STACK_LINE(1174)
							_this->height = helper;
							HX_STACK_LINE(1174)
							tmp9 = _this;
						}
						HX_STACK_LINE(1174)
						::flixel::math::FlxRect rect = tmp9;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(1174)
						rect->_inPool = false;
						HX_STACK_LINE(1174)
						tmp8 = rect;
					}
					HX_STACK_LINE(1174)
					this->deadzone = tmp8;
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(1177)
					::flixel::math::FlxRect tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1177)
					{
						HX_STACK_LINE(1177)
						::flixel::math::FlxRect tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1177)
						{
							HX_STACK_LINE(1177)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp6 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1177)
							::flixel::math::FlxRect tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1177)
							::flixel::math::FlxRect _this = tmp7;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1177)
							_this->x = (int)0;
							HX_STACK_LINE(1177)
							_this->y = (int)0;
							HX_STACK_LINE(1177)
							int tmp8 = this->width;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1177)
							_this->width = tmp8;
							HX_STACK_LINE(1177)
							int tmp9 = this->height;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1177)
							_this->height = tmp9;
							HX_STACK_LINE(1177)
							tmp5 = _this;
						}
						HX_STACK_LINE(1177)
						::flixel::math::FlxRect rect = tmp5;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(1177)
						rect->_inPool = false;
						HX_STACK_LINE(1177)
						tmp4 = rect;
					}
					HX_STACK_LINE(1177)
					this->deadzone = tmp4;
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(1180)
					this->deadzone = null();
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxCamera_obj,follow,(void))

Void FlxCamera_obj::snapToTarget( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","snapToTarget",0x8eeb1d9f,"flixel.FlxCamera.snapToTarget","flixel/FlxCamera.hx",1189,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1190)
		this->updateFollow();
		HX_STACK_LINE(1191)
		{
			HX_STACK_LINE(1191)
			::flixel::math::FlxPoint tmp = this->scroll;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1191)
			::flixel::math::FlxPoint _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1191)
			::flixel::math::FlxPoint tmp1 = this->_scrollTarget;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1191)
			::flixel::math::FlxPoint point = tmp1;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(1191)
			Float tmp2 = point->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1191)
			_this->set_x(tmp2);
			HX_STACK_LINE(1191)
			Float tmp3 = point->y;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1191)
			_this->set_y(tmp3);
			HX_STACK_LINE(1191)
			{
				HX_STACK_LINE(1191)
				bool tmp4 = point->_weak;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1191)
				if ((tmp4)){
					HX_STACK_LINE(1191)
					point->put();
				}
			}
			HX_STACK_LINE(1191)
			_this;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,snapToTarget,(void))

Void FlxCamera_obj::focusOn( ::flixel::math::FlxPoint point){
{
		HX_STACK_FRAME("flixel.FlxCamera","focusOn",0xd304f1ae,"flixel.FlxCamera.focusOn","flixel/FlxCamera.hx",1200,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_LINE(1201)
		::flixel::math::FlxPoint tmp = this->scroll;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1201)
		Float tmp1 = point->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1201)
		int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1201)
		Float tmp3 = (tmp2 * ((Float)0.5));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1201)
		Float tmp4 = (tmp1 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1201)
		Float tmp5 = point->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1201)
		int tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1201)
		Float tmp7 = (tmp6 * ((Float)0.5));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1201)
		Float tmp8 = (tmp5 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1201)
		tmp->set(tmp4,tmp8);
		HX_STACK_LINE(1202)
		{
			HX_STACK_LINE(1202)
			bool tmp9 = point->_weak;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1202)
			if ((tmp9)){
				HX_STACK_LINE(1202)
				point->put();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,focusOn,(void))

Void FlxCamera_obj::flash( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-1);
Float Duration = __o_Duration.Default(1);
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","flash",0x27663887,"flixel.FlxCamera.flash","flixel/FlxCamera.hx",1214,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(1215)
		bool tmp = Force;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1215)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1215)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1215)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1215)
		if ((tmp2)){
			HX_STACK_LINE(1215)
			Float tmp4 = this->_fxFlashAlpha;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1215)
			Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1215)
			tmp3 = (tmp5 > ((Float)0.0));
		}
		else{
			HX_STACK_LINE(1215)
			tmp3 = false;
		}
		HX_STACK_LINE(1215)
		if ((tmp3)){
			HX_STACK_LINE(1217)
			return null();
		}
		HX_STACK_LINE(1219)
		this->_fxFlashColor = Color;
		HX_STACK_LINE(1220)
		bool tmp4 = (Duration <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1220)
		if ((tmp4)){
			HX_STACK_LINE(1222)
			Duration = ((Float)0.000001);
		}
		HX_STACK_LINE(1224)
		this->_fxFlashDuration = Duration;
		HX_STACK_LINE(1225)
		this->_fxFlashComplete = OnComplete;
		HX_STACK_LINE(1226)
		this->_fxFlashAlpha = ((Float)1.0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,flash,(void))

Void FlxCamera_obj::fade( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,hx::Null< bool >  __o_FadeIn,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-16777216);
Float Duration = __o_Duration.Default(1);
bool FadeIn = __o_FadeIn.Default(false);
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","fade",0xa5741a85,"flixel.FlxCamera.fade","flixel/FlxCamera.hx",1239,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(FadeIn,"FadeIn")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(1240)
		bool tmp = this->_fxFadeCompleted;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1240)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1240)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1240)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1240)
		if ((tmp2)){
			HX_STACK_LINE(1240)
			bool tmp4 = Force;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1240)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1240)
			tmp3 = !(tmp5);
		}
		else{
			HX_STACK_LINE(1240)
			tmp3 = false;
		}
		HX_STACK_LINE(1240)
		if ((tmp3)){
			HX_STACK_LINE(1241)
			return null();
		}
		HX_STACK_LINE(1243)
		this->_fxFadeColor = Color;
		HX_STACK_LINE(1244)
		bool tmp4 = (Duration <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1244)
		if ((tmp4)){
			HX_STACK_LINE(1245)
			Duration = ((Float)0.000001);
		}
		HX_STACK_LINE(1247)
		this->_fxFadeIn = FadeIn;
		HX_STACK_LINE(1248)
		this->_fxFadeDuration = Duration;
		HX_STACK_LINE(1249)
		this->_fxFadeComplete = OnComplete;
		HX_STACK_LINE(1251)
		bool tmp5 = this->_fxFadeIn;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1251)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1251)
		if ((tmp5)){
			HX_STACK_LINE(1251)
			tmp6 = ((Float)0.999999);
		}
		else{
			HX_STACK_LINE(1251)
			tmp6 = ((Float)0.000001);
		}
		HX_STACK_LINE(1251)
		this->_fxFadeAlpha = tmp6;
		HX_STACK_LINE(1252)
		this->_fxFadeCompleted = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,fade,(void))

Void FlxCamera_obj::shake( hx::Null< Float >  __o_Intensity,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force,::flixel::util::FlxAxes Axes){
Float Intensity = __o_Intensity.Default(((Float)0.05));
Float Duration = __o_Duration.Default(((Float)0.5));
bool Force = __o_Force.Default(true);
	HX_STACK_FRAME("flixel.FlxCamera","shake",0xa0f6e19d,"flixel.FlxCamera.shake","flixel/FlxCamera.hx",1265,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Intensity,"Intensity")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
	HX_STACK_ARG(Axes,"Axes")
{
		HX_STACK_LINE(1266)
		bool tmp = (Axes == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1266)
		if ((tmp)){
			HX_STACK_LINE(1267)
			Axes = ::flixel::util::FlxAxes_obj::XY;
		}
		HX_STACK_LINE(1269)
		bool tmp1 = Force;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1269)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1269)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1269)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1269)
		if ((tmp3)){
			HX_STACK_LINE(1269)
			::flixel::math::FlxPoint tmp5 = this->_fxShakeOffset;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1269)
			::flixel::math::FlxPoint tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1269)
			Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1269)
			bool tmp8 = (tmp7 != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1269)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1269)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1269)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1269)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1269)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1269)
			if ((tmp13)){
				HX_STACK_LINE(1269)
				::flixel::math::FlxPoint tmp14 = this->_fxShakeOffset;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1269)
				::flixel::math::FlxPoint tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1269)
				::flixel::math::FlxPoint tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1269)
				Float tmp17 = tmp16->y;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1269)
				tmp4 = (tmp17 != (int)0);
			}
			else{
				HX_STACK_LINE(1269)
				tmp4 = true;
			}
		}
		else{
			HX_STACK_LINE(1269)
			tmp4 = false;
		}
		HX_STACK_LINE(1269)
		if ((tmp4)){
			HX_STACK_LINE(1271)
			return null();
		}
		HX_STACK_LINE(1273)
		this->_fxShakeIntensity = Intensity;
		HX_STACK_LINE(1274)
		this->_fxShakeDuration = Duration;
		HX_STACK_LINE(1275)
		this->_fxShakeComplete = OnComplete;
		HX_STACK_LINE(1276)
		this->_fxShakeAxes = Axes;
		HX_STACK_LINE(1277)
		::flixel::math::FlxPoint tmp5 = this->_fxShakeOffset;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1277)
		tmp5->set(null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,shake,(void))

Void FlxCamera_obj::stopFX( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","stopFX",0x29222b1d,"flixel.FlxCamera.stopFX","flixel/FlxCamera.hx",1284,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1285)
		this->_fxFlashAlpha = ((Float)0.0);
		HX_STACK_LINE(1286)
		this->_fxFadeAlpha = ((Float)0.0);
		HX_STACK_LINE(1287)
		this->_fxShakeDuration = (int)0;
		HX_STACK_LINE(1288)
		this->updateFlashSpritePosition();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,stopFX,(void))

Void FlxCamera_obj::setFilters( Array< ::Dynamic > filters){
{
		HX_STACK_FRAME("flixel.FlxCamera","setFilters",0x0e7f1802,"flixel.FlxCamera.setFilters","flixel/FlxCamera.hx",1296,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(filters,"filters")
		HX_STACK_LINE(1296)
		this->_filters = filters;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,setFilters,(void))

::flixel::FlxCamera FlxCamera_obj::copyFrom( ::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxCamera","copyFrom",0x88512948,"flixel.FlxCamera.copyFrom","flixel/FlxCamera.hx",1306,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(1307)
	Dynamic tmp = Camera->minScrollX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1307)
	Dynamic tmp1 = Camera->maxScrollX;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1307)
	Dynamic tmp2 = Camera->minScrollY;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1307)
	Dynamic tmp3 = Camera->maxScrollY;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1307)
	this->setScrollBounds(tmp,tmp1,tmp2,tmp3);
	HX_STACK_LINE(1309)
	this->target = Camera->target;
	HX_STACK_LINE(1311)
	::flixel::FlxObject tmp4 = this->target;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1311)
	bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1311)
	if ((tmp5)){
		HX_STACK_LINE(1313)
		bool tmp6 = (Camera->deadzone == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1313)
		if ((tmp6)){
			HX_STACK_LINE(1315)
			this->deadzone = null();
		}
		else{
			HX_STACK_LINE(1319)
			::flixel::math::FlxRect tmp7 = this->deadzone;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1319)
			bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1319)
			if ((tmp8)){
				HX_STACK_LINE(1321)
				::flixel::math::FlxRect tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1321)
				{
					HX_STACK_LINE(1321)
					Float X = (int)0;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(1321)
					Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(1321)
					Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
					HX_STACK_LINE(1321)
					Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
					HX_STACK_LINE(1321)
					::flixel::math::FlxRect tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1321)
					{
						HX_STACK_LINE(1321)
						::flixel::util::FlxPool_flixel_math_FlxRect tmp11 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1321)
						::flixel::math::FlxRect tmp12 = tmp11->get();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1321)
						::flixel::math::FlxRect _this = tmp12;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1321)
						_this->x = X;
						HX_STACK_LINE(1321)
						_this->y = Y;
						HX_STACK_LINE(1321)
						_this->width = Width;
						HX_STACK_LINE(1321)
						_this->height = Height;
						HX_STACK_LINE(1321)
						tmp10 = _this;
					}
					HX_STACK_LINE(1321)
					::flixel::math::FlxRect rect = tmp10;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(1321)
					rect->_inPool = false;
					HX_STACK_LINE(1321)
					tmp9 = rect;
				}
				HX_STACK_LINE(1321)
				this->deadzone = tmp9;
			}
			HX_STACK_LINE(1323)
			{
				HX_STACK_LINE(1323)
				::flixel::math::FlxRect tmp9 = this->deadzone;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1323)
				::flixel::math::FlxRect _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1323)
				::flixel::math::FlxRect Rect = Camera->deadzone;		HX_STACK_VAR(Rect,"Rect");
				HX_STACK_LINE(1323)
				_this->x = Rect->x;
				HX_STACK_LINE(1323)
				_this->y = Rect->y;
				HX_STACK_LINE(1323)
				_this->width = Rect->width;
				HX_STACK_LINE(1323)
				_this->height = Rect->height;
				HX_STACK_LINE(1323)
				{
					HX_STACK_LINE(1323)
					bool tmp10 = Rect->_weak;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1323)
					if ((tmp10)){
						HX_STACK_LINE(1323)
						bool tmp11 = Rect->_inPool;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1323)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1323)
						if ((tmp12)){
							HX_STACK_LINE(1323)
							Rect->_inPool = true;
							HX_STACK_LINE(1323)
							Rect->_weak = false;
							HX_STACK_LINE(1323)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp13 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1323)
							::flixel::math::FlxRect tmp14 = Rect;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1323)
							tmp13->putUnsafe(tmp14);
						}
					}
				}
				HX_STACK_LINE(1323)
				_this;
			}
		}
	}
	HX_STACK_LINE(1326)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,copyFrom,return )

Void FlxCamera_obj::fill( int Color,hx::Null< bool >  __o_BlendAlpha,hx::Null< Float >  __o_FxAlpha,::openfl::_legacy::display::Graphics graphics){
bool BlendAlpha = __o_BlendAlpha.Default(true);
Float FxAlpha = __o_FxAlpha.Default(((Float)1.0));
	HX_STACK_FRAME("flixel.FlxCamera","fill",0xa57a338c,"flixel.FlxCamera.fill","flixel/FlxCamera.hx",1336,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(BlendAlpha,"BlendAlpha")
	HX_STACK_ARG(FxAlpha,"FxAlpha")
	HX_STACK_ARG(graphics,"graphics")
{
		HX_STACK_LINE(1337)
		bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1337)
		if ((tmp)){
			HX_STACK_LINE(1339)
			bool tmp1 = BlendAlpha;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1339)
			if ((tmp1)){
				HX_STACK_LINE(1341)
				::openfl::_legacy::display::BitmapData tmp2 = this->_fill;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1341)
				::openfl::_legacy::geom::Rectangle tmp3 = this->_flashRect;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1341)
				int tmp4 = Color;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1341)
				tmp2->fillRect(tmp3,tmp4);
				HX_STACK_LINE(1342)
				::openfl::_legacy::display::BitmapData tmp5 = this->buffer;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1342)
				::openfl::_legacy::display::BitmapData tmp6 = this->_fill;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1342)
				::openfl::_legacy::geom::Rectangle tmp7 = this->_flashRect;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1342)
				::openfl::_legacy::geom::Point tmp8 = this->_flashPoint;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1342)
				bool tmp9 = BlendAlpha;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1342)
				tmp5->copyPixels(tmp6,tmp7,tmp8,null(),null(),tmp9);
			}
			else{
				HX_STACK_LINE(1346)
				::openfl::_legacy::display::BitmapData tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1346)
				::openfl::_legacy::geom::Rectangle tmp3 = this->_flashRect;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1346)
				int tmp4 = Color;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1346)
				tmp2->fillRect(tmp3,tmp4);
			}
		}
		else{
			HX_STACK_LINE(1351)
			bool tmp1 = (FxAlpha == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1351)
			if ((tmp1)){
				HX_STACK_LINE(1353)
				return null();
			}
			HX_STACK_LINE(1356)
			bool tmp2 = (graphics == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1356)
			::openfl::_legacy::display::Graphics tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1356)
			if ((tmp2)){
				HX_STACK_LINE(1356)
				::openfl::_legacy::display::Sprite tmp4 = this->canvas;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1356)
				tmp3 = tmp4->get_graphics();
			}
			else{
				HX_STACK_LINE(1356)
				tmp3 = graphics;
			}
			HX_STACK_LINE(1356)
			::openfl::_legacy::display::Graphics targetGraphics = tmp3;		HX_STACK_VAR(targetGraphics,"targetGraphics");
			HX_STACK_LINE(1358)
			int tmp4 = Color;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1358)
			Float tmp5 = FxAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1358)
			targetGraphics->beginFill(tmp4,tmp5);
			HX_STACK_LINE(1361)
			int tmp6 = this->width;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1361)
			int tmp7 = (tmp6 + (int)2);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1361)
			int tmp8 = this->height;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1361)
			int tmp9 = (tmp8 + (int)2);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1361)
			targetGraphics->drawRect((int)-1,(int)-1,tmp7,tmp9);
			HX_STACK_LINE(1362)
			targetGraphics->endFill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,fill,(void))

Void FlxCamera_obj::drawFX( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","drawFX",0xf9beeb9f,"flixel.FlxCamera.drawFX","flixel/FlxCamera.hx",1371,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1372)
		Float alphaComponent;		HX_STACK_VAR(alphaComponent,"alphaComponent");
		HX_STACK_LINE(1375)
		Float tmp = this->_fxFlashAlpha;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1375)
		bool tmp1 = (tmp > ((Float)0.0));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1375)
		if ((tmp1)){
			HX_STACK_LINE(1377)
			int tmp2 = this->_fxFlashColor;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1377)
			int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1377)
			int tmp4 = (int(tmp3) >> int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1377)
			int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1377)
			alphaComponent = tmp5;
			HX_STACK_LINE(1379)
			bool tmp6 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1379)
			if ((tmp6)){
				HX_STACK_LINE(1381)
				bool tmp7 = (alphaComponent <= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1381)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1381)
				if ((tmp7)){
					HX_STACK_LINE(1381)
					tmp8 = (int)255;
				}
				else{
					HX_STACK_LINE(1381)
					tmp8 = alphaComponent;
				}
				HX_STACK_LINE(1381)
				Float tmp9 = this->_fxFlashAlpha;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1381)
				Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1381)
				int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1381)
				int tmp12 = (int(tmp11) << int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1381)
				int tmp13 = this->_fxFlashColor;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1381)
				int tmp14 = (int(tmp13) & int((int)16777215));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1381)
				int tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1381)
				this->fill(tmp15,null(),null(),null());
			}
			else{
				HX_STACK_LINE(1385)
				int tmp7 = this->_fxFlashColor;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1385)
				int tmp8 = (int(tmp7) & int((int)16777215));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1385)
				bool tmp9 = (alphaComponent <= (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1385)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1385)
				if ((tmp9)){
					HX_STACK_LINE(1385)
					tmp10 = (int)255;
				}
				else{
					HX_STACK_LINE(1385)
					tmp10 = alphaComponent;
				}
				HX_STACK_LINE(1385)
				Float tmp11 = this->_fxFlashAlpha;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1385)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1385)
				Float tmp13 = (Float(tmp12) / Float((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1385)
				::openfl::_legacy::display::Sprite tmp14 = this->canvas;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1385)
				::openfl::_legacy::display::Graphics tmp15 = tmp14->get_graphics();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1385)
				this->fill(tmp8,true,tmp13,tmp15);
			}
		}
		HX_STACK_LINE(1390)
		Float tmp2 = this->_fxFadeAlpha;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1390)
		bool tmp3 = (tmp2 > ((Float)0.0));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1390)
		if ((tmp3)){
			HX_STACK_LINE(1392)
			int tmp4 = this->_fxFadeColor;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1392)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1392)
			int tmp6 = (int(tmp5) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1392)
			int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1392)
			alphaComponent = tmp7;
			HX_STACK_LINE(1394)
			bool tmp8 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1394)
			if ((tmp8)){
				HX_STACK_LINE(1396)
				bool tmp9 = (alphaComponent <= (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1396)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1396)
				if ((tmp9)){
					HX_STACK_LINE(1396)
					tmp10 = (int)255;
				}
				else{
					HX_STACK_LINE(1396)
					tmp10 = alphaComponent;
				}
				HX_STACK_LINE(1396)
				Float tmp11 = this->_fxFadeAlpha;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1396)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1396)
				int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1396)
				int tmp14 = (int(tmp13) << int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1396)
				int tmp15 = this->_fxFadeColor;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1396)
				int tmp16 = (int(tmp15) & int((int)16777215));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1396)
				int tmp17 = (tmp14 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1396)
				this->fill(tmp17,null(),null(),null());
			}
			else{
				HX_STACK_LINE(1400)
				int tmp9 = this->_fxFadeColor;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1400)
				int tmp10 = (int(tmp9) & int((int)16777215));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1400)
				bool tmp11 = (alphaComponent <= (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1400)
				Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1400)
				if ((tmp11)){
					HX_STACK_LINE(1400)
					tmp12 = (int)255;
				}
				else{
					HX_STACK_LINE(1400)
					tmp12 = alphaComponent;
				}
				HX_STACK_LINE(1400)
				Float tmp13 = this->_fxFadeAlpha;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1400)
				Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1400)
				Float tmp15 = (Float(tmp14) / Float((int)255));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1400)
				::openfl::_legacy::display::Sprite tmp16 = this->canvas;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1400)
				::openfl::_legacy::display::Graphics tmp17 = tmp16->get_graphics();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1400)
				this->fill(tmp10,true,tmp15,tmp17);
			}
		}
		HX_STACK_LINE(1404)
		::flixel::math::FlxPoint tmp4 = this->_fxShakeOffset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1404)
		Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1404)
		bool tmp6 = (tmp5 != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1404)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1404)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1404)
		if ((tmp7)){
			HX_STACK_LINE(1404)
			::flixel::math::FlxPoint tmp9 = this->_fxShakeOffset;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1404)
			::flixel::math::FlxPoint tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1404)
			Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1404)
			tmp8 = (tmp11 != (int)0);
		}
		else{
			HX_STACK_LINE(1404)
			tmp8 = true;
		}
		HX_STACK_LINE(1404)
		if ((tmp8)){
			HX_STACK_LINE(1406)
			{
				HX_STACK_LINE(1406)
				::openfl::_legacy::display::Sprite tmp9 = this->flashSprite;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1406)
				::openfl::_legacy::display::Sprite _g = tmp9;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1406)
				Float tmp10 = _g->get_x();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1406)
				::flixel::math::FlxPoint tmp11 = this->_fxShakeOffset;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1406)
				Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1406)
				::flixel::_system::scaleModes::BaseScaleMode tmp13 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1406)
				Float tmp14 = tmp13->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1406)
				Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1406)
				Float tmp16 = (tmp10 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1406)
				_g->set_x(tmp16);
			}
			HX_STACK_LINE(1407)
			{
				HX_STACK_LINE(1407)
				::openfl::_legacy::display::Sprite tmp9 = this->flashSprite;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1407)
				::openfl::_legacy::display::Sprite _g = tmp9;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1407)
				Float tmp10 = _g->get_y();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1407)
				::flixel::math::FlxPoint tmp11 = this->_fxShakeOffset;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1407)
				Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1407)
				::flixel::_system::scaleModes::BaseScaleMode tmp13 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1407)
				Float tmp14 = tmp13->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1407)
				Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1407)
				Float tmp16 = (tmp10 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1407)
				_g->set_y(tmp16);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,drawFX,(void))

Void FlxCamera_obj::checkResize( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","checkResize",0x465b6af3,"flixel.FlxCamera.checkResize","flixel/FlxCamera.hx",1413,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1414)
		bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1414)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1414)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1414)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1414)
		if ((tmp2)){
			HX_STACK_LINE(1414)
			bool tmp4 = this->regen;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1414)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1414)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1414)
			tmp3 = !(tmp6);
		}
		else{
			HX_STACK_LINE(1414)
			tmp3 = false;
		}
		HX_STACK_LINE(1414)
		if ((tmp3)){
			HX_STACK_LINE(1415)
			return null();
		}
		HX_STACK_LINE(1417)
		int tmp4 = this->width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1417)
		::openfl::_legacy::display::BitmapData tmp5 = this->buffer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1417)
		int tmp6 = tmp5->get_width();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1417)
		bool tmp7 = (tmp4 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1417)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1417)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1417)
		if ((tmp8)){
			HX_STACK_LINE(1417)
			int tmp10 = this->height;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1417)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1417)
			::openfl::_legacy::display::BitmapData tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1417)
			::openfl::_legacy::display::BitmapData tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1417)
			int tmp14 = tmp13->get_height();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1417)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1417)
			tmp9 = (tmp11 != tmp15);
		}
		else{
			HX_STACK_LINE(1417)
			tmp9 = true;
		}
		HX_STACK_LINE(1417)
		if ((tmp9)){
			HX_STACK_LINE(1419)
			::flixel::FlxSprite tmp10 = this->screen;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1419)
			::flixel::graphics::FlxGraphic oldBuffer = tmp10->graphic;		HX_STACK_VAR(oldBuffer,"oldBuffer");
			HX_STACK_LINE(1420)
			int tmp11 = this->width;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1420)
			int tmp12 = this->height;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1420)
			::openfl::_legacy::display::BitmapData tmp13 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp11,tmp12,true,(int)0,null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1420)
			this->buffer = tmp13;
			HX_STACK_LINE(1421)
			::flixel::FlxSprite tmp14 = this->screen;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1421)
			::openfl::_legacy::display::BitmapData tmp15 = this->buffer;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1421)
			tmp14->set_pixels(tmp15);
			HX_STACK_LINE(1422)
			::flixel::FlxSprite tmp16 = this->screen;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1422)
			tmp16->origin->set(null(),null());
			HX_STACK_LINE(1423)
			::openfl::_legacy::display::Bitmap tmp17 = this->_flashBitmap;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1423)
			::openfl::_legacy::display::BitmapData tmp18 = this->buffer;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1423)
			tmp17->set_bitmapData(tmp18);
			HX_STACK_LINE(1424)
			int tmp19 = this->width;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1424)
			::openfl::_legacy::geom::Rectangle tmp20 = this->_flashRect;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1424)
			tmp20->width = tmp19;
			HX_STACK_LINE(1425)
			int tmp21 = this->height;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1425)
			::openfl::_legacy::geom::Rectangle tmp22 = this->_flashRect;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1425)
			tmp22->height = tmp21;
			HX_STACK_LINE(1426)
			::openfl::_legacy::display::BitmapData tmp23 = this->_fill;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1426)
			::openfl::_legacy::display::BitmapData tmp24 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1426)
			this->_fill = tmp24;
			HX_STACK_LINE(1427)
			int tmp25 = this->width;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1427)
			int tmp26 = this->height;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1427)
			::openfl::_legacy::display::BitmapData tmp27 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp25,tmp26,true,(int)0,null());		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1427)
			this->_fill = tmp27;
			HX_STACK_LINE(1428)
			::flixel::_system::frontEnds::BitmapFrontEnd tmp28 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1428)
			::flixel::graphics::FlxGraphic tmp29 = oldBuffer;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1428)
			tmp28->__Field(HX_HCSTRING("removeIfNoUse","\x85","\xb1","\x4f","\xe2"), hx::paccDynamic )(tmp29);
		}
		HX_STACK_LINE(1431)
		this->regen = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,checkResize,(void))

Void FlxCamera_obj::setSize( int Width,int Height){
{
		HX_STACK_FRAME("flixel.FlxCamera","setSize",0xa359881a,"flixel.FlxCamera.setSize","flixel/FlxCamera.hx",1441,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(1442)
		int tmp = Width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1442)
		this->set_width(tmp);
		HX_STACK_LINE(1443)
		int tmp1 = Height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1443)
		this->set_height(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setSize,(void))

Void FlxCamera_obj::setPosition( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.FlxCamera","setPosition",0x5729a882,"flixel.FlxCamera.setPosition","flixel/FlxCamera.hx",1454,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(1455)
		Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1455)
		this->set_x(tmp);
		HX_STACK_LINE(1456)
		Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1456)
		this->set_y(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setPosition,(void))

Void FlxCamera_obj::setScrollBoundsRect( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height,hx::Null< bool >  __o_UpdateWorld){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
bool UpdateWorld = __o_UpdateWorld.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","setScrollBoundsRect",0xd34a357f,"flixel.FlxCamera.setScrollBoundsRect","flixel/FlxCamera.hx",1469,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(UpdateWorld,"UpdateWorld")
{
		HX_STACK_LINE(1470)
		bool tmp = UpdateWorld;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1470)
		if ((tmp)){
			HX_STACK_LINE(1472)
			::flixel::math::FlxRect tmp1 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1472)
			::flixel::math::FlxRect _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1472)
			_this->x = X;
			HX_STACK_LINE(1472)
			_this->y = Y;
			HX_STACK_LINE(1472)
			_this->width = Width;
			HX_STACK_LINE(1472)
			_this->height = Height;
			HX_STACK_LINE(1472)
			_this;
		}
		HX_STACK_LINE(1475)
		Float tmp1 = X;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1475)
		Float tmp2 = (X + Width);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1475)
		Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1475)
		Float tmp4 = (Y + Height);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1475)
		this->setScrollBounds(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,setScrollBoundsRect,(void))

Void FlxCamera_obj::setScrollBounds( Dynamic MinX,Dynamic MaxX,Dynamic MinY,Dynamic MaxY){
{
		HX_STACK_FRAME("flixel.FlxCamera","setScrollBounds",0x4d9242bb,"flixel.FlxCamera.setScrollBounds","flixel/FlxCamera.hx",1488,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(MinX,"MinX")
		HX_STACK_ARG(MaxX,"MaxX")
		HX_STACK_ARG(MinY,"MinY")
		HX_STACK_ARG(MaxY,"MaxY")
		HX_STACK_LINE(1489)
		this->minScrollX = MinX;
		HX_STACK_LINE(1490)
		this->maxScrollX = MaxX;
		HX_STACK_LINE(1491)
		this->minScrollY = MinY;
		HX_STACK_LINE(1492)
		this->maxScrollY = MaxY;
		HX_STACK_LINE(1493)
		this->updateScroll();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,setScrollBounds,(void))

Void FlxCamera_obj::setScale( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.FlxCamera","setScale",0x46f35511,"flixel.FlxCamera.setScale","flixel/FlxCamera.hx",1504,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(1505)
		this->scaleX = X;
		HX_STACK_LINE(1506)
		this->scaleY = Y;
		HX_STACK_LINE(1508)
		Float tmp = this->scaleX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1508)
		::flixel::_system::scaleModes::BaseScaleMode tmp1 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1508)
		Float tmp2 = tmp1->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1508)
		Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1508)
		this->totalScaleX = tmp3;
		HX_STACK_LINE(1509)
		Float tmp4 = this->scaleY;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1509)
		::flixel::_system::scaleModes::BaseScaleMode tmp5 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1509)
		Float tmp6 = tmp5->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1509)
		Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1509)
		this->totalScaleY = tmp7;
		HX_STACK_LINE(1511)
		bool tmp8 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1511)
		if ((tmp8)){
			HX_STACK_LINE(1513)
			::openfl::_legacy::display::Bitmap tmp9 = this->_flashBitmap;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1513)
			Float tmp10 = this->totalScaleX;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1513)
			tmp9->set_scaleX(tmp10);
			HX_STACK_LINE(1514)
			::openfl::_legacy::display::Bitmap tmp11 = this->_flashBitmap;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1514)
			Float tmp12 = this->totalScaleY;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1514)
			tmp11->set_scaleY(tmp12);
		}
		else{
			HX_STACK_LINE(1518)
			::openfl::_legacy::geom::Matrix tmp9 = this->_transform;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1518)
			tmp9->identity();
			HX_STACK_LINE(1519)
			::openfl::_legacy::geom::Matrix tmp10 = this->_transform;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1519)
			Float tmp11 = this->totalScaleX;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1519)
			Float tmp12 = this->totalScaleY;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1519)
			tmp10->scale(tmp11,tmp12);
		}
		HX_STACK_LINE(1522)
		this->updateFlashSpritePosition();
		HX_STACK_LINE(1523)
		this->updateScrollRect();
		HX_STACK_LINE(1524)
		this->updateInternalSpritePositions();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setScale,(void))

Void FlxCamera_obj::onResize( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","onResize",0xa8186dfc,"flixel.FlxCamera.onResize","flixel/FlxCamera.hx",1532,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1533)
		this->updateFlashOffset();
		HX_STACK_LINE(1534)
		Float tmp = this->scaleX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1534)
		Float tmp1 = this->scaleY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1534)
		this->setScale(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,onResize,(void))

Float FlxCamera_obj::set_followLerp( Float Value){
	HX_STACK_FRAME("flixel.FlxCamera","set_followLerp",0xf2f9b78e,"flixel.FlxCamera.set_followLerp","flixel/FlxCamera.hx",1538,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1539)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1539)
	{
		HX_STACK_LINE(1539)
		int tmp1 = ::flixel::FlxG_obj::updateFramerate;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1539)
		Float tmp2 = (Float((int)60) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1539)
		Dynamic Max = tmp2;		HX_STACK_VAR(Max,"Max");
		HX_STACK_LINE(1539)
		bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1539)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1539)
		if ((tmp3)){
			HX_STACK_LINE(1539)
			tmp4 = (Value < (int)0);
		}
		else{
			HX_STACK_LINE(1539)
			tmp4 = false;
		}
		HX_STACK_LINE(1539)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1539)
		if ((tmp4)){
			HX_STACK_LINE(1539)
			tmp5 = (int)0;
		}
		else{
			HX_STACK_LINE(1539)
			tmp5 = Value;
		}
		HX_STACK_LINE(1539)
		Float lowerBound = tmp5;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(1539)
		bool tmp6 = (Max != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1539)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1539)
		if ((tmp6)){
			HX_STACK_LINE(1539)
			tmp7 = (lowerBound > Max);
		}
		else{
			HX_STACK_LINE(1539)
			tmp7 = false;
		}
		HX_STACK_LINE(1539)
		if ((tmp7)){
			HX_STACK_LINE(1539)
			tmp = Max;
		}
		else{
			HX_STACK_LINE(1539)
			tmp = lowerBound;
		}
	}
	HX_STACK_LINE(1539)
	Float tmp1 = this->followLerp = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1539)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_followLerp,return )

int FlxCamera_obj::set_width( int Value){
	HX_STACK_FRAME("flixel.FlxCamera","set_width",0x2386b8c0,"flixel.FlxCamera.set_width","flixel/FlxCamera.hx",1543,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1544)
	bool tmp = (Value > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1544)
	if ((tmp)){
		HX_STACK_LINE(1546)
		this->width = Value;
		HX_STACK_LINE(1548)
		this->updateFlashOffset();
		HX_STACK_LINE(1549)
		this->updateScrollRect();
		HX_STACK_LINE(1550)
		this->updateInternalSpritePositions();
	}
	HX_STACK_LINE(1552)
	int tmp1 = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1552)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_width,return )

int FlxCamera_obj::set_height( int Value){
	HX_STACK_FRAME("flixel.FlxCamera","set_height",0xa8aa67ed,"flixel.FlxCamera.set_height","flixel/FlxCamera.hx",1556,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1557)
	bool tmp = (Value > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1557)
	if ((tmp)){
		HX_STACK_LINE(1559)
		this->height = Value;
		HX_STACK_LINE(1561)
		this->updateFlashOffset();
		HX_STACK_LINE(1562)
		this->updateScrollRect();
		HX_STACK_LINE(1563)
		this->updateInternalSpritePositions();
	}
	HX_STACK_LINE(1565)
	int tmp1 = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1565)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_height,return )

Float FlxCamera_obj::set_zoom( Float Zoom){
	HX_STACK_FRAME("flixel.FlxCamera","set_zoom",0x3f00d599,"flixel.FlxCamera.set_zoom","flixel/FlxCamera.hx",1569,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Zoom,"Zoom")
	HX_STACK_LINE(1570)
	bool tmp = (Zoom == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1570)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1570)
	if ((tmp)){
		HX_STACK_LINE(1570)
		tmp1 = ::flixel::FlxCamera_obj::defaultZoom;
	}
	else{
		HX_STACK_LINE(1570)
		tmp1 = Zoom;
	}
	HX_STACK_LINE(1570)
	this->zoom = tmp1;
	HX_STACK_LINE(1571)
	Float tmp2 = this->zoom;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1571)
	Float tmp3 = this->zoom;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1571)
	this->setScale(tmp2,tmp3);
	HX_STACK_LINE(1572)
	Float tmp4 = this->zoom;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1572)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_zoom,return )

Float FlxCamera_obj::set_alpha( Float Alpha){
	HX_STACK_FRAME("flixel.FlxCamera","set_alpha",0x7abaaa18,"flixel.FlxCamera.set_alpha","flixel/FlxCamera.hx",1576,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Alpha,"Alpha")
	HX_STACK_LINE(1577)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1577)
	{
		HX_STACK_LINE(1577)
		bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1577)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1577)
		if ((tmp1)){
			HX_STACK_LINE(1577)
			tmp2 = (Alpha < (int)0);
		}
		else{
			HX_STACK_LINE(1577)
			tmp2 = false;
		}
		HX_STACK_LINE(1577)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1577)
		if ((tmp2)){
			HX_STACK_LINE(1577)
			tmp3 = (int)0;
		}
		else{
			HX_STACK_LINE(1577)
			tmp3 = Alpha;
		}
		HX_STACK_LINE(1577)
		Float lowerBound = tmp3;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(1577)
		bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1577)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1577)
		if ((tmp4)){
			HX_STACK_LINE(1577)
			tmp5 = (lowerBound > (int)1);
		}
		else{
			HX_STACK_LINE(1577)
			tmp5 = false;
		}
		HX_STACK_LINE(1577)
		if ((tmp5)){
			HX_STACK_LINE(1577)
			tmp = (int)1;
		}
		else{
			HX_STACK_LINE(1577)
			tmp = lowerBound;
		}
	}
	HX_STACK_LINE(1577)
	this->alpha = ((Float)(tmp));
	HX_STACK_LINE(1578)
	bool tmp1 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1578)
	if ((tmp1)){
		HX_STACK_LINE(1580)
		::openfl::_legacy::display::Bitmap tmp2 = this->_flashBitmap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1580)
		Float tmp3 = Alpha;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1580)
		tmp2->set_alpha(tmp3);
	}
	else{
		HX_STACK_LINE(1584)
		::openfl::_legacy::display::Sprite tmp2 = this->canvas;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1584)
		Float tmp3 = Alpha;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1584)
		tmp2->set_alpha(tmp3);
	}
	HX_STACK_LINE(1586)
	Float tmp2 = Alpha;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1586)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_alpha,return )

Float FlxCamera_obj::set_angle( Float Angle){
	HX_STACK_FRAME("flixel.FlxCamera","set_angle",0x7c06468d,"flixel.FlxCamera.set_angle","flixel/FlxCamera.hx",1590,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_LINE(1591)
	this->angle = Angle;
	HX_STACK_LINE(1592)
	::openfl::_legacy::display::Sprite tmp = this->flashSprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1592)
	Float tmp1 = Angle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1592)
	tmp->set_rotation(tmp1);
	HX_STACK_LINE(1593)
	Float tmp2 = Angle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1593)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_angle,return )

int FlxCamera_obj::set_color( int Color){
	HX_STACK_FRAME("flixel.FlxCamera","set_color",0xa380741d,"flixel.FlxCamera.set_color","flixel/FlxCamera.hx",1597,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(1598)
	this->color = Color;
	HX_STACK_LINE(1599)
	::openfl::_legacy::geom::ColorTransform colorTransform;		HX_STACK_VAR(colorTransform,"colorTransform");
	HX_STACK_LINE(1601)
	bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1601)
	if ((tmp)){
		HX_STACK_LINE(1603)
		::openfl::_legacy::display::Bitmap tmp1 = this->_flashBitmap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1603)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1603)
		if ((tmp2)){
			HX_STACK_LINE(1605)
			int tmp3 = Color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1605)
			return tmp3;
		}
		HX_STACK_LINE(1607)
		::openfl::_legacy::display::Bitmap tmp3 = this->_flashBitmap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1607)
		::openfl::_legacy::geom::Transform tmp4 = tmp3->get_transform();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1607)
		::openfl::_legacy::geom::ColorTransform tmp5 = tmp4->get_colorTransform();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1607)
		colorTransform = tmp5;
	}
	else{
		HX_STACK_LINE(1611)
		::openfl::_legacy::display::Sprite tmp1 = this->canvas;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1611)
		::openfl::_legacy::geom::Transform tmp2 = tmp1->get_transform();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1611)
		::openfl::_legacy::geom::ColorTransform tmp3 = tmp2->get_colorTransform();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1611)
		colorTransform = tmp3;
	}
	HX_STACK_LINE(1614)
	int tmp1 = this->color;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1614)
	int tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1614)
	int tmp3 = (int(tmp2) >> int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1614)
	int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1614)
	Float tmp5 = (Float(tmp4) / Float((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1614)
	colorTransform->redMultiplier = tmp5;
	HX_STACK_LINE(1615)
	int tmp6 = this->color;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1615)
	int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1615)
	int tmp8 = (int(tmp7) >> int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1615)
	int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1615)
	Float tmp10 = (Float(tmp9) / Float((int)255));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1615)
	colorTransform->greenMultiplier = tmp10;
	HX_STACK_LINE(1616)
	int tmp11 = this->color;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1616)
	int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1616)
	int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1616)
	Float tmp14 = (Float(tmp13) / Float((int)255));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1616)
	colorTransform->blueMultiplier = tmp14;
	HX_STACK_LINE(1618)
	bool tmp15 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1618)
	if ((tmp15)){
		HX_STACK_LINE(1620)
		::openfl::_legacy::display::Bitmap tmp16 = this->_flashBitmap;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1620)
		::openfl::_legacy::geom::Transform tmp17 = tmp16->get_transform();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1620)
		::openfl::_legacy::geom::ColorTransform tmp18 = colorTransform;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1620)
		tmp17->set_colorTransform(tmp18);
	}
	else{
		HX_STACK_LINE(1624)
		::openfl::_legacy::display::Sprite tmp16 = this->canvas;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1624)
		::openfl::_legacy::geom::Transform tmp17 = tmp16->get_transform();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1624)
		::openfl::_legacy::geom::ColorTransform tmp18 = colorTransform;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1624)
		tmp17->set_colorTransform(tmp18);
	}
	HX_STACK_LINE(1627)
	int tmp16 = Color;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(1627)
	return tmp16;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_color,return )

bool FlxCamera_obj::set_antialiasing( bool Antialiasing){
	HX_STACK_FRAME("flixel.FlxCamera","set_antialiasing",0x0f9a3f7a,"flixel.FlxCamera.set_antialiasing","flixel/FlxCamera.hx",1631,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Antialiasing,"Antialiasing")
	HX_STACK_LINE(1632)
	this->antialiasing = Antialiasing;
	HX_STACK_LINE(1633)
	bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1633)
	if ((tmp)){
		HX_STACK_LINE(1635)
		::openfl::_legacy::display::Bitmap tmp1 = this->_flashBitmap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1635)
		bool tmp2 = Antialiasing;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1635)
		tmp1->set_smoothing(tmp2);
	}
	HX_STACK_LINE(1637)
	bool tmp1 = Antialiasing;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1637)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_antialiasing,return )

Float FlxCamera_obj::set_x( Float x){
	HX_STACK_FRAME("flixel.FlxCamera","set_x",0x9f099e32,"flixel.FlxCamera.set_x","flixel/FlxCamera.hx",1641,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(1642)
	this->x = x;
	HX_STACK_LINE(1643)
	this->updateFlashSpritePosition();
	HX_STACK_LINE(1644)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1644)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_x,return )

Float FlxCamera_obj::set_y( Float y){
	HX_STACK_FRAME("flixel.FlxCamera","set_y",0x9f099e33,"flixel.FlxCamera.set_y","flixel/FlxCamera.hx",1648,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(1649)
	this->y = y;
	HX_STACK_LINE(1650)
	this->updateFlashSpritePosition();
	HX_STACK_LINE(1651)
	Float tmp = y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1651)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_y,return )

bool FlxCamera_obj::set_visible( bool visible){
	HX_STACK_FRAME("flixel.FlxCamera","set_visible",0x8f5a1dac,"flixel.FlxCamera.set_visible","flixel/FlxCamera.hx",1655,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(visible,"visible")
	HX_STACK_LINE(1656)
	::openfl::_legacy::display::Sprite tmp = this->flashSprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1656)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1656)
	if ((tmp1)){
		HX_STACK_LINE(1658)
		::openfl::_legacy::display::Sprite tmp2 = this->flashSprite;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1658)
		bool tmp3 = visible;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1658)
		tmp2->set_visible(tmp3);
	}
	HX_STACK_LINE(1660)
	bool tmp2 = this->visible = visible;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1660)
	return tmp2;
}


Float FlxCamera_obj::defaultZoom;

Array< ::Dynamic > FlxCamera_obj::defaultCameras;

::flixel::graphics::tile::FlxDrawTilesItem FlxCamera_obj::_storageTilesHead;

::flixel::graphics::tile::FlxDrawTrianglesItem FlxCamera_obj::_storageTrianglesHead;

Array< Float > FlxCamera_obj::drawVertices;

::openfl::_legacy::display::Sprite FlxCamera_obj::trianglesSprite;

::flixel::math::FlxPoint FlxCamera_obj::renderPoint;

::flixel::math::FlxRect FlxCamera_obj::renderRect;


FlxCamera_obj::FlxCamera_obj()
{
}

void FlxCamera_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxCamera);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(totalScaleX,"totalScaleX");
	HX_MARK_MEMBER_NAME(totalScaleY,"totalScaleY");
	HX_MARK_MEMBER_NAME(style,"style");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(targetOffset,"targetOffset");
	HX_MARK_MEMBER_NAME(followLerp,"followLerp");
	HX_MARK_MEMBER_NAME(deadzone,"deadzone");
	HX_MARK_MEMBER_NAME(minScrollX,"minScrollX");
	HX_MARK_MEMBER_NAME(maxScrollX,"maxScrollX");
	HX_MARK_MEMBER_NAME(minScrollY,"minScrollY");
	HX_MARK_MEMBER_NAME(maxScrollY,"maxScrollY");
	HX_MARK_MEMBER_NAME(scroll,"scroll");
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(regen,"regen");
	HX_MARK_MEMBER_NAME(bgColor,"bgColor");
	HX_MARK_MEMBER_NAME(screen,"screen");
	HX_MARK_MEMBER_NAME(useBgAlphaBlending,"useBgAlphaBlending");
	HX_MARK_MEMBER_NAME(flashSprite,"flashSprite");
	HX_MARK_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(followLead,"followLead");
	HX_MARK_MEMBER_NAME(filtersEnabled,"filtersEnabled");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_flashOffset,"_flashOffset");
	HX_MARK_MEMBER_NAME(_fxFlashColor,"_fxFlashColor");
	HX_MARK_MEMBER_NAME(_fxFlashDuration,"_fxFlashDuration");
	HX_MARK_MEMBER_NAME(_fxFlashComplete,"_fxFlashComplete");
	HX_MARK_MEMBER_NAME(_fxFlashAlpha,"_fxFlashAlpha");
	HX_MARK_MEMBER_NAME(_fxFadeColor,"_fxFadeColor");
	HX_MARK_MEMBER_NAME(_lastTargetPosition,"_lastTargetPosition");
	HX_MARK_MEMBER_NAME(_scrollTarget,"_scrollTarget");
	HX_MARK_MEMBER_NAME(_fxFadeDuration,"_fxFadeDuration");
	HX_MARK_MEMBER_NAME(_fxFadeIn,"_fxFadeIn");
	HX_MARK_MEMBER_NAME(_fxFadeComplete,"_fxFadeComplete");
	HX_MARK_MEMBER_NAME(_fxFadeCompleted,"_fxFadeCompleted");
	HX_MARK_MEMBER_NAME(_fxFadeAlpha,"_fxFadeAlpha");
	HX_MARK_MEMBER_NAME(_fxShakeIntensity,"_fxShakeIntensity");
	HX_MARK_MEMBER_NAME(_fxShakeDuration,"_fxShakeDuration");
	HX_MARK_MEMBER_NAME(_fxShakeComplete,"_fxShakeComplete");
	HX_MARK_MEMBER_NAME(_fxShakeOffset,"_fxShakeOffset");
	HX_MARK_MEMBER_NAME(_fxShakeAxes,"_fxShakeAxes");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_filters,"_filters");
	HX_MARK_MEMBER_NAME(initialZoom,"initialZoom");
	HX_MARK_MEMBER_NAME(_fill,"_fill");
	HX_MARK_MEMBER_NAME(_flashBitmap,"_flashBitmap");
	HX_MARK_MEMBER_NAME(_scrollRect,"_scrollRect");
	HX_MARK_MEMBER_NAME(_bounds,"_bounds");
	HX_MARK_MEMBER_NAME(canvas,"canvas");
	HX_MARK_MEMBER_NAME(debugLayer,"debugLayer");
	HX_MARK_MEMBER_NAME(_transform,"_transform");
	HX_MARK_MEMBER_NAME(_helperMatrix,"_helperMatrix");
	HX_MARK_MEMBER_NAME(_currentDrawItem,"_currentDrawItem");
	HX_MARK_MEMBER_NAME(_headOfDrawStack,"_headOfDrawStack");
	HX_MARK_MEMBER_NAME(_headTiles,"_headTiles");
	HX_MARK_MEMBER_NAME(_headTriangles,"_headTriangles");
	::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxCamera_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(totalScaleX,"totalScaleX");
	HX_VISIT_MEMBER_NAME(totalScaleY,"totalScaleY");
	HX_VISIT_MEMBER_NAME(style,"style");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(targetOffset,"targetOffset");
	HX_VISIT_MEMBER_NAME(followLerp,"followLerp");
	HX_VISIT_MEMBER_NAME(deadzone,"deadzone");
	HX_VISIT_MEMBER_NAME(minScrollX,"minScrollX");
	HX_VISIT_MEMBER_NAME(maxScrollX,"maxScrollX");
	HX_VISIT_MEMBER_NAME(minScrollY,"minScrollY");
	HX_VISIT_MEMBER_NAME(maxScrollY,"maxScrollY");
	HX_VISIT_MEMBER_NAME(scroll,"scroll");
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(regen,"regen");
	HX_VISIT_MEMBER_NAME(bgColor,"bgColor");
	HX_VISIT_MEMBER_NAME(screen,"screen");
	HX_VISIT_MEMBER_NAME(useBgAlphaBlending,"useBgAlphaBlending");
	HX_VISIT_MEMBER_NAME(flashSprite,"flashSprite");
	HX_VISIT_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(followLead,"followLead");
	HX_VISIT_MEMBER_NAME(filtersEnabled,"filtersEnabled");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_flashOffset,"_flashOffset");
	HX_VISIT_MEMBER_NAME(_fxFlashColor,"_fxFlashColor");
	HX_VISIT_MEMBER_NAME(_fxFlashDuration,"_fxFlashDuration");
	HX_VISIT_MEMBER_NAME(_fxFlashComplete,"_fxFlashComplete");
	HX_VISIT_MEMBER_NAME(_fxFlashAlpha,"_fxFlashAlpha");
	HX_VISIT_MEMBER_NAME(_fxFadeColor,"_fxFadeColor");
	HX_VISIT_MEMBER_NAME(_lastTargetPosition,"_lastTargetPosition");
	HX_VISIT_MEMBER_NAME(_scrollTarget,"_scrollTarget");
	HX_VISIT_MEMBER_NAME(_fxFadeDuration,"_fxFadeDuration");
	HX_VISIT_MEMBER_NAME(_fxFadeIn,"_fxFadeIn");
	HX_VISIT_MEMBER_NAME(_fxFadeComplete,"_fxFadeComplete");
	HX_VISIT_MEMBER_NAME(_fxFadeCompleted,"_fxFadeCompleted");
	HX_VISIT_MEMBER_NAME(_fxFadeAlpha,"_fxFadeAlpha");
	HX_VISIT_MEMBER_NAME(_fxShakeIntensity,"_fxShakeIntensity");
	HX_VISIT_MEMBER_NAME(_fxShakeDuration,"_fxShakeDuration");
	HX_VISIT_MEMBER_NAME(_fxShakeComplete,"_fxShakeComplete");
	HX_VISIT_MEMBER_NAME(_fxShakeOffset,"_fxShakeOffset");
	HX_VISIT_MEMBER_NAME(_fxShakeAxes,"_fxShakeAxes");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_filters,"_filters");
	HX_VISIT_MEMBER_NAME(initialZoom,"initialZoom");
	HX_VISIT_MEMBER_NAME(_fill,"_fill");
	HX_VISIT_MEMBER_NAME(_flashBitmap,"_flashBitmap");
	HX_VISIT_MEMBER_NAME(_scrollRect,"_scrollRect");
	HX_VISIT_MEMBER_NAME(_bounds,"_bounds");
	HX_VISIT_MEMBER_NAME(canvas,"canvas");
	HX_VISIT_MEMBER_NAME(debugLayer,"debugLayer");
	HX_VISIT_MEMBER_NAME(_transform,"_transform");
	HX_VISIT_MEMBER_NAME(_helperMatrix,"_helperMatrix");
	HX_VISIT_MEMBER_NAME(_currentDrawItem,"_currentDrawItem");
	HX_VISIT_MEMBER_NAME(_headOfDrawStack,"_headOfDrawStack");
	HX_VISIT_MEMBER_NAME(_headTiles,"_headTiles");
	HX_VISIT_MEMBER_NAME(_headTriangles,"_headTriangles");
	::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxCamera_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { return zoom; }
		if (HX_FIELD_EQ(inName,"fade") ) { return fade_dyn(); }
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { return style; }
		if (HX_FIELD_EQ(inName,"regen") ) { return regen; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"_fill") ) { return _fill; }
		if (HX_FIELD_EQ(inName,"flash") ) { return flash_dyn(); }
		if (HX_FIELD_EQ(inName,"shake") ) { return shake_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { return scaleX; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return scaleY; }
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll; }
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		if (HX_FIELD_EQ(inName,"screen") ) { return screen; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"canvas") ) { return canvas; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"follow") ) { return follow_dyn(); }
		if (HX_FIELD_EQ(inName,"stopFX") ) { return stopFX_dyn(); }
		if (HX_FIELD_EQ(inName,"drawFX") ) { return drawFX_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { return bgColor; }
		if (HX_FIELD_EQ(inName,"_bounds") ) { return _bounds; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"focusOn") ) { return focusOn_dyn(); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadzone") ) { return deadzone; }
		if (HX_FIELD_EQ(inName,"_filters") ) { return _filters; }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"setScale") ) { return setScale_dyn(); }
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_zoom") ) { return set_zoom_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fxFadeIn") ) { return _fxFadeIn; }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"followLerp") ) { return followLerp; }
		if (HX_FIELD_EQ(inName,"minScrollX") ) { return minScrollX; }
		if (HX_FIELD_EQ(inName,"maxScrollX") ) { return maxScrollX; }
		if (HX_FIELD_EQ(inName,"minScrollY") ) { return minScrollY; }
		if (HX_FIELD_EQ(inName,"maxScrollY") ) { return maxScrollY; }
		if (HX_FIELD_EQ(inName,"followLead") ) { return followLead; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		if (HX_FIELD_EQ(inName,"debugLayer") ) { return debugLayer; }
		if (HX_FIELD_EQ(inName,"_transform") ) { return _transform; }
		if (HX_FIELD_EQ(inName,"_headTiles") ) { return _headTiles; }
		if (HX_FIELD_EQ(inName,"drawPixels") ) { return drawPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"copyPixels") ) { return copyPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"updateFade") ) { return updateFade_dyn(); }
		if (HX_FIELD_EQ(inName,"setFilters") ) { return setFilters_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalScaleX") ) { return totalScaleX; }
		if (HX_FIELD_EQ(inName,"totalScaleY") ) { return totalScaleY; }
		if (HX_FIELD_EQ(inName,"flashSprite") ) { return flashSprite; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		if (HX_FIELD_EQ(inName,"initialZoom") ) { return initialZoom; }
		if (HX_FIELD_EQ(inName,"_scrollRect") ) { return _scrollRect; }
		if (HX_FIELD_EQ(inName,"updateFlash") ) { return updateFlash_dyn(); }
		if (HX_FIELD_EQ(inName,"updateShake") ) { return updateShake_dyn(); }
		if (HX_FIELD_EQ(inName,"checkResize") ) { return checkResize_dyn(); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"targetOffset") ) { return targetOffset; }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return antialiasing; }
		if (HX_FIELD_EQ(inName,"_flashOffset") ) { return _flashOffset; }
		if (HX_FIELD_EQ(inName,"_fxFadeColor") ) { return _fxFadeColor; }
		if (HX_FIELD_EQ(inName,"_fxFadeAlpha") ) { return _fxFadeAlpha; }
		if (HX_FIELD_EQ(inName,"_fxShakeAxes") ) { return _fxShakeAxes; }
		if (HX_FIELD_EQ(inName,"_flashBitmap") ) { return _flashBitmap; }
		if (HX_FIELD_EQ(inName,"updateScroll") ) { return updateScroll_dyn(); }
		if (HX_FIELD_EQ(inName,"updateFollow") ) { return updateFollow_dyn(); }
		if (HX_FIELD_EQ(inName,"completeFade") ) { return completeFade_dyn(); }
		if (HX_FIELD_EQ(inName,"snapToTarget") ) { return snapToTarget_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_fxFlashColor") ) { return _fxFlashColor; }
		if (HX_FIELD_EQ(inName,"_fxFlashAlpha") ) { return _fxFlashAlpha; }
		if (HX_FIELD_EQ(inName,"_scrollTarget") ) { return _scrollTarget; }
		if (HX_FIELD_EQ(inName,"_helperMatrix") ) { return _helperMatrix; }
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return drawTriangles_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"filtersEnabled") ) { return filtersEnabled; }
		if (HX_FIELD_EQ(inName,"_fxShakeOffset") ) { return _fxShakeOffset; }
		if (HX_FIELD_EQ(inName,"_headTriangles") ) { return _headTriangles; }
		if (HX_FIELD_EQ(inName,"startQuadBatch") ) { return startQuadBatch_dyn(); }
		if (HX_FIELD_EQ(inName,"clearDrawStack") ) { return clearDrawStack_dyn(); }
		if (HX_FIELD_EQ(inName,"set_followLerp") ) { return set_followLerp_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fxFadeDuration") ) { return _fxFadeDuration; }
		if (HX_FIELD_EQ(inName,"_fxFadeComplete") ) { return _fxFadeComplete; }
		if (HX_FIELD_EQ(inName,"setScrollBounds") ) { return setScrollBounds_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_fxFlashDuration") ) { return _fxFlashDuration; }
		if (HX_FIELD_EQ(inName,"_fxFlashComplete") ) { return _fxFlashComplete; }
		if (HX_FIELD_EQ(inName,"_fxFadeCompleted") ) { return _fxFadeCompleted; }
		if (HX_FIELD_EQ(inName,"_fxShakeDuration") ) { return _fxShakeDuration; }
		if (HX_FIELD_EQ(inName,"_fxShakeComplete") ) { return _fxShakeComplete; }
		if (HX_FIELD_EQ(inName,"_currentDrawItem") ) { return _currentDrawItem; }
		if (HX_FIELD_EQ(inName,"_headOfDrawStack") ) { return _headOfDrawStack; }
		if (HX_FIELD_EQ(inName,"updateScrollRect") ) { return updateScrollRect_dyn(); }
		if (HX_FIELD_EQ(inName,"set_antialiasing") ) { return set_antialiasing_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_fxShakeIntensity") ) { return _fxShakeIntensity; }
		if (HX_FIELD_EQ(inName,"updateFlashOffset") ) { return updateFlashOffset_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"useBgAlphaBlending") ) { return useBgAlphaBlending; }
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { return pixelPerfectRender; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastTargetPosition") ) { return _lastTargetPosition; }
		if (HX_FIELD_EQ(inName,"startTrianglesBatch") ) { return startTrianglesBatch_dyn(); }
		if (HX_FIELD_EQ(inName,"setScrollBoundsRect") ) { return setScrollBoundsRect_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getNewDrawTrianglesItem") ) { return getNewDrawTrianglesItem_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"updateFlashSpritePosition") ) { return updateFlashSpritePosition_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"updateInternalSpritePositions") ) { return updateInternalSpritePositions_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxCamera_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"renderRect") ) { outValue = renderRect; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultZoom") ) { outValue = defaultZoom; return true;  }
		if (HX_FIELD_EQ(inName,"renderPoint") ) { outValue = renderPoint; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"drawVertices") ) { outValue = drawVertices; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultCameras") ) { outValue = defaultCameras; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"trianglesSprite") ) { outValue = trianglesSprite; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_storageTilesHead") ) { outValue = _storageTilesHead; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_storageTrianglesHead") ) { outValue = _storageTrianglesHead; return true;  }
	}
	return false;
}

Dynamic FlxCamera_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue);x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue);y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { if (inCallProp == hx::paccAlways) return set_zoom(inValue);zoom=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { style=inValue.Cast< ::flixel::FlxCameraFollowStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"regen") ) { regen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue);width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return set_alpha(inValue);alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == hx::paccAlways) return set_angle(inValue);angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return set_color(inValue);color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fill") ) { _fill=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scroll") ) { scroll=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screen") ) { screen=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue);height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canvas") ) { canvas=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { bgColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bounds") ) { _bounds=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadzone") ) { deadzone=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_filters") ) { _filters=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fxFadeIn") ) { _fxFadeIn=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"followLerp") ) { if (inCallProp == hx::paccAlways) return set_followLerp(inValue);followLerp=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minScrollX") ) { minScrollX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollX") ) { maxScrollX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minScrollY") ) { minScrollY=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollY") ) { maxScrollY=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"followLead") ) { followLead=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugLayer") ) { debugLayer=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_transform") ) { _transform=inValue.Cast< ::openfl::_legacy::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headTiles") ) { _headTiles=inValue.Cast< ::flixel::graphics::tile::FlxDrawTilesItem >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalScaleX") ) { totalScaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"totalScaleY") ) { totalScaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flashSprite") ) { flashSprite=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"initialZoom") ) { initialZoom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollRect") ) { _scrollRect=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"targetOffset") ) { targetOffset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { if (inCallProp == hx::paccAlways) return set_antialiasing(inValue);antialiasing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashOffset") ) { _flashOffset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeColor") ) { _fxFadeColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeAlpha") ) { _fxFadeAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeAxes") ) { _fxShakeAxes=inValue.Cast< ::flixel::util::FlxAxes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashBitmap") ) { _flashBitmap=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_fxFlashColor") ) { _fxFlashColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashAlpha") ) { _fxFlashAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollTarget") ) { _scrollTarget=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_helperMatrix") ) { _helperMatrix=inValue.Cast< ::flixel::math::FlxMatrix >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"filtersEnabled") ) { filtersEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeOffset") ) { _fxShakeOffset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headTriangles") ) { _headTriangles=inValue.Cast< ::flixel::graphics::tile::FlxDrawTrianglesItem >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fxFadeDuration") ) { _fxFadeDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeComplete") ) { _fxFadeComplete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_fxFlashDuration") ) { _fxFlashDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashComplete") ) { _fxFlashComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeCompleted") ) { _fxFadeCompleted=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeDuration") ) { _fxShakeDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeComplete") ) { _fxShakeComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_currentDrawItem") ) { _currentDrawItem=inValue.Cast< ::flixel::graphics::tile::FlxDrawBaseItem >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headOfDrawStack") ) { _headOfDrawStack=inValue.Cast< ::flixel::graphics::tile::FlxDrawBaseItem >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_fxShakeIntensity") ) { _fxShakeIntensity=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"useBgAlphaBlending") ) { useBgAlphaBlending=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { pixelPerfectRender=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastTargetPosition") ) { _lastTargetPosition=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxCamera_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"renderRect") ) { renderRect=ioValue.Cast< ::flixel::math::FlxRect >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultZoom") ) { defaultZoom=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"renderPoint") ) { renderPoint=ioValue.Cast< ::flixel::math::FlxPoint >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"drawVertices") ) { drawVertices=ioValue.Cast< Array< Float > >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultCameras") ) { defaultCameras=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"trianglesSprite") ) { trianglesSprite=ioValue.Cast< ::openfl::_legacy::display::Sprite >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_storageTilesHead") ) { _storageTilesHead=ioValue.Cast< ::flixel::graphics::tile::FlxDrawTilesItem >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_storageTrianglesHead") ) { _storageTrianglesHead=ioValue.Cast< ::flixel::graphics::tile::FlxDrawTrianglesItem >(); return true; }
	}
	return false;
}

void FlxCamera_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("totalScaleX","\x72","\xdd","\x5b","\x02"));
	outFields->push(HX_HCSTRING("totalScaleY","\x73","\xdd","\x5b","\x02"));
	outFields->push(HX_HCSTRING("style","\x31","\xa5","\x1d","\x84"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("targetOffset","\xc4","\xd1","\xc3","\x1c"));
	outFields->push(HX_HCSTRING("followLerp","\x88","\xdc","\x83","\xd9"));
	outFields->push(HX_HCSTRING("deadzone","\xd0","\x12","\x55","\x6d"));
	outFields->push(HX_HCSTRING("minScrollX","\x39","\x80","\x8f","\xf6"));
	outFields->push(HX_HCSTRING("maxScrollX","\x67","\xad","\xfc","\x9a"));
	outFields->push(HX_HCSTRING("minScrollY","\x3a","\x80","\x8f","\xf6"));
	outFields->push(HX_HCSTRING("maxScrollY","\x68","\xad","\xfc","\x9a"));
	outFields->push(HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"));
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("regen","\xbd","\x2e","\xbf","\xe6"));
	outFields->push(HX_HCSTRING("bgColor","\x5e","\x81","\x83","\xf7"));
	outFields->push(HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47"));
	outFields->push(HX_HCSTRING("useBgAlphaBlending","\x23","\x25","\x12","\xb2"));
	outFields->push(HX_HCSTRING("flashSprite","\xd5","\xe9","\x0d","\xf4"));
	outFields->push(HX_HCSTRING("pixelPerfectRender","\xdd","\x59","\x4f","\x2f"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50"));
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"));
	outFields->push(HX_HCSTRING("followLead","\xad","\xcd","\x83","\xd9"));
	outFields->push(HX_HCSTRING("filtersEnabled","\x06","\x08","\x9b","\x18"));
	outFields->push(HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d"));
	outFields->push(HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7"));
	outFields->push(HX_HCSTRING("_flashOffset","\x64","\x53","\xc1","\xf6"));
	outFields->push(HX_HCSTRING("_fxFlashColor","\x64","\x98","\x14","\xdc"));
	outFields->push(HX_HCSTRING("_fxFlashDuration","\xf3","\x7e","\xd1","\x2d"));
	outFields->push(HX_HCSTRING("_fxFlashAlpha","\x5f","\xce","\x4e","\xb3"));
	outFields->push(HX_HCSTRING("_fxFadeColor","\x96","\x44","\xa8","\xb9"));
	outFields->push(HX_HCSTRING("_lastTargetPosition","\x2f","\xd6","\x08","\xc4"));
	outFields->push(HX_HCSTRING("_scrollTarget","\x1d","\xda","\x1d","\xc1"));
	outFields->push(HX_HCSTRING("_fxFadeDuration","\x01","\xfe","\xdd","\x9f"));
	outFields->push(HX_HCSTRING("_fxFadeIn","\xd2","\xda","\xfe","\xa8"));
	outFields->push(HX_HCSTRING("_fxFadeCompleted","\x3e","\x8a","\xd9","\xa9"));
	outFields->push(HX_HCSTRING("_fxFadeAlpha","\x91","\x7a","\xe2","\x90"));
	outFields->push(HX_HCSTRING("_fxShakeIntensity","\x5e","\x86","\x94","\x7a"));
	outFields->push(HX_HCSTRING("_fxShakeDuration","\x09","\x2e","\x72","\x36"));
	outFields->push(HX_HCSTRING("_fxShakeOffset","\x08","\x2f","\x77","\x93"));
	outFields->push(HX_HCSTRING("_fxShakeAxes","\x5a","\x79","\xf0","\x5e"));
	outFields->push(HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"));
	outFields->push(HX_HCSTRING("_filters","\x3c","\xfb","\xfe","\x42"));
	outFields->push(HX_HCSTRING("initialZoom","\xb7","\x71","\x1d","\x2d"));
	outFields->push(HX_HCSTRING("_fill","\x62","\xea","\xcc","\xf6"));
	outFields->push(HX_HCSTRING("_flashBitmap","\xc0","\xcb","\x8d","\x87"));
	outFields->push(HX_HCSTRING("_scrollRect","\xf0","\xa8","\xf0","\xdb"));
	outFields->push(HX_HCSTRING("_bounds","\x14","\x98","\x94","\xd4"));
	outFields->push(HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8"));
	outFields->push(HX_HCSTRING("debugLayer","\x7e","\x52","\xa4","\x6e"));
	outFields->push(HX_HCSTRING("_transform","\x2d","\xa9","\x35","\xa1"));
	outFields->push(HX_HCSTRING("_helperMatrix","\x2e","\x81","\xce","\xde"));
	outFields->push(HX_HCSTRING("_currentDrawItem","\x11","\x6b","\x5a","\x19"));
	outFields->push(HX_HCSTRING("_headOfDrawStack","\xce","\xc5","\x68","\xac"));
	outFields->push(HX_HCSTRING("_headTiles","\x06","\xac","\x50","\xff"));
	outFields->push(HX_HCSTRING("_headTriangles","\xac","\xb3","\x7c","\x97"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,scaleX),HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,scaleY),HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,totalScaleX),HX_HCSTRING("totalScaleX","\x72","\xdd","\x5b","\x02")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,totalScaleY),HX_HCSTRING("totalScaleY","\x73","\xdd","\x5b","\x02")},
	{hx::fsObject /*::flixel::FlxCameraFollowStyle*/ ,(int)offsetof(FlxCamera_obj,style),HX_HCSTRING("style","\x31","\xa5","\x1d","\x84")},
	{hx::fsObject /*::flixel::FlxObject*/ ,(int)offsetof(FlxCamera_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,targetOffset),HX_HCSTRING("targetOffset","\xc4","\xd1","\xc3","\x1c")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,followLerp),HX_HCSTRING("followLerp","\x88","\xdc","\x83","\xd9")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxCamera_obj,deadzone),HX_HCSTRING("deadzone","\xd0","\x12","\x55","\x6d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,minScrollX),HX_HCSTRING("minScrollX","\x39","\x80","\x8f","\xf6")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,maxScrollX),HX_HCSTRING("maxScrollX","\x67","\xad","\xfc","\x9a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,minScrollY),HX_HCSTRING("minScrollY","\x3a","\x80","\x8f","\xf6")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,maxScrollY),HX_HCSTRING("maxScrollY","\x68","\xad","\xfc","\x9a")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,scroll),HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxCamera_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsBool,(int)offsetof(FlxCamera_obj,regen),HX_HCSTRING("regen","\xbd","\x2e","\xbf","\xe6")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,bgColor),HX_HCSTRING("bgColor","\x5e","\x81","\x83","\xf7")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxCamera_obj,screen),HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47")},
	{hx::fsBool,(int)offsetof(FlxCamera_obj,useBgAlphaBlending),HX_HCSTRING("useBgAlphaBlending","\x23","\x25","\x12","\xb2")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(FlxCamera_obj,flashSprite),HX_HCSTRING("flashSprite","\xd5","\xe9","\x0d","\xf4")},
	{hx::fsBool,(int)offsetof(FlxCamera_obj,pixelPerfectRender),HX_HCSTRING("pixelPerfectRender","\xdd","\x59","\x4f","\x2f")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,zoom),HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,alpha),HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsBool,(int)offsetof(FlxCamera_obj,antialiasing),HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,followLead),HX_HCSTRING("followLead","\xad","\xcd","\x83","\xd9")},
	{hx::fsBool,(int)offsetof(FlxCamera_obj,filtersEnabled),HX_HCSTRING("filtersEnabled","\x06","\x08","\x9b","\x18")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(FlxCamera_obj,_flashRect),HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxCamera_obj,_flashPoint),HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_flashOffset),HX_HCSTRING("_flashOffset","\x64","\x53","\xc1","\xf6")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,_fxFlashColor),HX_HCSTRING("_fxFlashColor","\x64","\x98","\x14","\xdc")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxFlashDuration),HX_HCSTRING("_fxFlashDuration","\xf3","\x7e","\xd1","\x2d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,_fxFlashComplete),HX_HCSTRING("_fxFlashComplete","\x58","\x70","\x0b","\x99")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxFlashAlpha),HX_HCSTRING("_fxFlashAlpha","\x5f","\xce","\x4e","\xb3")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,_fxFadeColor),HX_HCSTRING("_fxFadeColor","\x96","\x44","\xa8","\xb9")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_lastTargetPosition),HX_HCSTRING("_lastTargetPosition","\x2f","\xd6","\x08","\xc4")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_scrollTarget),HX_HCSTRING("_scrollTarget","\x1d","\xda","\x1d","\xc1")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxFadeDuration),HX_HCSTRING("_fxFadeDuration","\x01","\xfe","\xdd","\x9f")},
	{hx::fsBool,(int)offsetof(FlxCamera_obj,_fxFadeIn),HX_HCSTRING("_fxFadeIn","\xd2","\xda","\xfe","\xa8")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,_fxFadeComplete),HX_HCSTRING("_fxFadeComplete","\x66","\xef","\x17","\x0b")},
	{hx::fsBool,(int)offsetof(FlxCamera_obj,_fxFadeCompleted),HX_HCSTRING("_fxFadeCompleted","\x3e","\x8a","\xd9","\xa9")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxFadeAlpha),HX_HCSTRING("_fxFadeAlpha","\x91","\x7a","\xe2","\x90")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxShakeIntensity),HX_HCSTRING("_fxShakeIntensity","\x5e","\x86","\x94","\x7a")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxShakeDuration),HX_HCSTRING("_fxShakeDuration","\x09","\x2e","\x72","\x36")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,_fxShakeComplete),HX_HCSTRING("_fxShakeComplete","\x6e","\x1f","\xac","\xa1")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_fxShakeOffset),HX_HCSTRING("_fxShakeOffset","\x08","\x2f","\x77","\x93")},
	{hx::fsObject /*::flixel::util::FlxAxes*/ ,(int)offsetof(FlxCamera_obj,_fxShakeAxes),HX_HCSTRING("_fxShakeAxes","\x5a","\x79","\xf0","\x5e")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_point),HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxCamera_obj,_filters),HX_HCSTRING("_filters","\x3c","\xfb","\xfe","\x42")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,initialZoom),HX_HCSTRING("initialZoom","\xb7","\x71","\x1d","\x2d")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxCamera_obj,_fill),HX_HCSTRING("_fill","\x62","\xea","\xcc","\xf6")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(FlxCamera_obj,_flashBitmap),HX_HCSTRING("_flashBitmap","\xc0","\xcb","\x8d","\x87")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(FlxCamera_obj,_scrollRect),HX_HCSTRING("_scrollRect","\xf0","\xa8","\xf0","\xdb")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxCamera_obj,_bounds),HX_HCSTRING("_bounds","\x14","\x98","\x94","\xd4")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(FlxCamera_obj,canvas),HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(FlxCamera_obj,debugLayer),HX_HCSTRING("debugLayer","\x7e","\x52","\xa4","\x6e")},
	{hx::fsObject /*::openfl::_legacy::geom::Matrix*/ ,(int)offsetof(FlxCamera_obj,_transform),HX_HCSTRING("_transform","\x2d","\xa9","\x35","\xa1")},
	{hx::fsObject /*::flixel::math::FlxMatrix*/ ,(int)offsetof(FlxCamera_obj,_helperMatrix),HX_HCSTRING("_helperMatrix","\x2e","\x81","\xce","\xde")},
	{hx::fsObject /*::flixel::graphics::tile::FlxDrawBaseItem*/ ,(int)offsetof(FlxCamera_obj,_currentDrawItem),HX_HCSTRING("_currentDrawItem","\x11","\x6b","\x5a","\x19")},
	{hx::fsObject /*::flixel::graphics::tile::FlxDrawBaseItem*/ ,(int)offsetof(FlxCamera_obj,_headOfDrawStack),HX_HCSTRING("_headOfDrawStack","\xce","\xc5","\x68","\xac")},
	{hx::fsObject /*::flixel::graphics::tile::FlxDrawTilesItem*/ ,(int)offsetof(FlxCamera_obj,_headTiles),HX_HCSTRING("_headTiles","\x06","\xac","\x50","\xff")},
	{hx::fsObject /*::flixel::graphics::tile::FlxDrawTrianglesItem*/ ,(int)offsetof(FlxCamera_obj,_headTriangles),HX_HCSTRING("_headTriangles","\xac","\xb3","\x7c","\x97")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &FlxCamera_obj::defaultZoom,HX_HCSTRING("defaultZoom","\x74","\x9c","\xb7","\x22")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &FlxCamera_obj::defaultCameras,HX_HCSTRING("defaultCameras","\x6d","\xe3","\x71","\x12")},
	{hx::fsObject /*::flixel::graphics::tile::FlxDrawTilesItem*/ ,(void *) &FlxCamera_obj::_storageTilesHead,HX_HCSTRING("_storageTilesHead","\xe9","\xa8","\x61","\xaf")},
	{hx::fsObject /*::flixel::graphics::tile::FlxDrawTrianglesItem*/ ,(void *) &FlxCamera_obj::_storageTrianglesHead,HX_HCSTRING("_storageTrianglesHead","\x0f","\x09","\x78","\x17")},
	{hx::fsObject /*Array< Float >*/ ,(void *) &FlxCamera_obj::drawVertices,HX_HCSTRING("drawVertices","\x1d","\x4c","\x09","\x40")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(void *) &FlxCamera_obj::trianglesSprite,HX_HCSTRING("trianglesSprite","\x10","\xd3","\x45","\xab")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(void *) &FlxCamera_obj::renderPoint,HX_HCSTRING("renderPoint","\x1a","\xe1","\x40","\x92")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(void *) &FlxCamera_obj::renderRect,HX_HCSTRING("renderRect","\x9a","\x47","\xb1","\xe8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c"),
	HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c"),
	HX_HCSTRING("totalScaleX","\x72","\xdd","\x5b","\x02"),
	HX_HCSTRING("totalScaleY","\x73","\xdd","\x5b","\x02"),
	HX_HCSTRING("style","\x31","\xa5","\x1d","\x84"),
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("targetOffset","\xc4","\xd1","\xc3","\x1c"),
	HX_HCSTRING("followLerp","\x88","\xdc","\x83","\xd9"),
	HX_HCSTRING("deadzone","\xd0","\x12","\x55","\x6d"),
	HX_HCSTRING("minScrollX","\x39","\x80","\x8f","\xf6"),
	HX_HCSTRING("maxScrollX","\x67","\xad","\xfc","\x9a"),
	HX_HCSTRING("minScrollY","\x3a","\x80","\x8f","\xf6"),
	HX_HCSTRING("maxScrollY","\x68","\xad","\xfc","\x9a"),
	HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"),
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("regen","\xbd","\x2e","\xbf","\xe6"),
	HX_HCSTRING("bgColor","\x5e","\x81","\x83","\xf7"),
	HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47"),
	HX_HCSTRING("useBgAlphaBlending","\x23","\x25","\x12","\xb2"),
	HX_HCSTRING("flashSprite","\xd5","\xe9","\x0d","\xf4"),
	HX_HCSTRING("pixelPerfectRender","\xdd","\x59","\x4f","\x2f"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50"),
	HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"),
	HX_HCSTRING("followLead","\xad","\xcd","\x83","\xd9"),
	HX_HCSTRING("filtersEnabled","\x06","\x08","\x9b","\x18"),
	HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d"),
	HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7"),
	HX_HCSTRING("_flashOffset","\x64","\x53","\xc1","\xf6"),
	HX_HCSTRING("_fxFlashColor","\x64","\x98","\x14","\xdc"),
	HX_HCSTRING("_fxFlashDuration","\xf3","\x7e","\xd1","\x2d"),
	HX_HCSTRING("_fxFlashComplete","\x58","\x70","\x0b","\x99"),
	HX_HCSTRING("_fxFlashAlpha","\x5f","\xce","\x4e","\xb3"),
	HX_HCSTRING("_fxFadeColor","\x96","\x44","\xa8","\xb9"),
	HX_HCSTRING("_lastTargetPosition","\x2f","\xd6","\x08","\xc4"),
	HX_HCSTRING("_scrollTarget","\x1d","\xda","\x1d","\xc1"),
	HX_HCSTRING("_fxFadeDuration","\x01","\xfe","\xdd","\x9f"),
	HX_HCSTRING("_fxFadeIn","\xd2","\xda","\xfe","\xa8"),
	HX_HCSTRING("_fxFadeComplete","\x66","\xef","\x17","\x0b"),
	HX_HCSTRING("_fxFadeCompleted","\x3e","\x8a","\xd9","\xa9"),
	HX_HCSTRING("_fxFadeAlpha","\x91","\x7a","\xe2","\x90"),
	HX_HCSTRING("_fxShakeIntensity","\x5e","\x86","\x94","\x7a"),
	HX_HCSTRING("_fxShakeDuration","\x09","\x2e","\x72","\x36"),
	HX_HCSTRING("_fxShakeComplete","\x6e","\x1f","\xac","\xa1"),
	HX_HCSTRING("_fxShakeOffset","\x08","\x2f","\x77","\x93"),
	HX_HCSTRING("_fxShakeAxes","\x5a","\x79","\xf0","\x5e"),
	HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"),
	HX_HCSTRING("_filters","\x3c","\xfb","\xfe","\x42"),
	HX_HCSTRING("initialZoom","\xb7","\x71","\x1d","\x2d"),
	HX_HCSTRING("_fill","\x62","\xea","\xcc","\xf6"),
	HX_HCSTRING("_flashBitmap","\xc0","\xcb","\x8d","\x87"),
	HX_HCSTRING("_scrollRect","\xf0","\xa8","\xf0","\xdb"),
	HX_HCSTRING("_bounds","\x14","\x98","\x94","\xd4"),
	HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8"),
	HX_HCSTRING("debugLayer","\x7e","\x52","\xa4","\x6e"),
	HX_HCSTRING("_transform","\x2d","\xa9","\x35","\xa1"),
	HX_HCSTRING("_helperMatrix","\x2e","\x81","\xce","\xde"),
	HX_HCSTRING("_currentDrawItem","\x11","\x6b","\x5a","\x19"),
	HX_HCSTRING("_headOfDrawStack","\xce","\xc5","\x68","\xac"),
	HX_HCSTRING("_headTiles","\x06","\xac","\x50","\xff"),
	HX_HCSTRING("_headTriangles","\xac","\xb3","\x7c","\x97"),
	HX_HCSTRING("startQuadBatch","\xb1","\xbc","\x12","\x5e"),
	HX_HCSTRING("startTrianglesBatch","\x11","\x0b","\xb7","\x6e"),
	HX_HCSTRING("getNewDrawTrianglesItem","\xf0","\xc3","\x0a","\x12"),
	HX_HCSTRING("clearDrawStack","\x57","\xf1","\x1b","\x0a"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("drawPixels","\x51","\x6a","\x6d","\xce"),
	HX_HCSTRING("copyPixels","\xc2","\x54","\x6e","\x42"),
	HX_HCSTRING("drawTriangles","\x07","\x44","\x68","\xde"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updateScroll","\xf6","\x7e","\x28","\x47"),
	HX_HCSTRING("updateFollow","\x5a","\x38","\x5a","\xf9"),
	HX_HCSTRING("updateFlash","\xe7","\x9e","\x24","\xe8"),
	HX_HCSTRING("updateFade","\x25","\xa0","\x6a","\xfc"),
	HX_HCSTRING("completeFade","\xd5","\x32","\x78","\xb7"),
	HX_HCSTRING("updateShake","\xfd","\x47","\xb5","\x61"),
	HX_HCSTRING("updateFlashSpritePosition","\x15","\x1f","\x55","\xdf"),
	HX_HCSTRING("updateFlashOffset","\xda","\x51","\x21","\xf5"),
	HX_HCSTRING("updateScrollRect","\x3a","\xab","\x52","\x53"),
	HX_HCSTRING("updateInternalSpritePositions","\x1f","\x1f","\xf9","\x76"),
	HX_HCSTRING("follow","\x71","\x91","\x96","\xf9"),
	HX_HCSTRING("snapToTarget","\x96","\x07","\x43","\x96"),
	HX_HCSTRING("focusOn","\x17","\x4b","\x83","\x41"),
	HX_HCSTRING("flash","\xb0","\x35","\x8c","\x02"),
	HX_HCSTRING("fade","\x7c","\xb5","\xb5","\x43"),
	HX_HCSTRING("shake","\xc6","\xde","\x1c","\x7c"),
	HX_HCSTRING("stopFX","\xd4","\xb1","\x39","\x0f"),
	HX_HCSTRING("setFilters","\x39","\xc6","\x25","\x5c"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("fill","\x83","\xce","\xbb","\x43"),
	HX_HCSTRING("drawFX","\x56","\x72","\xd6","\xdf"),
	HX_HCSTRING("checkResize","\xdc","\x2c","\x8d","\xea"),
	HX_HCSTRING("setSize","\x83","\xe1","\xd7","\x11"),
	HX_HCSTRING("setPosition","\x6b","\x6a","\x5b","\xfb"),
	HX_HCSTRING("setScrollBoundsRect","\x68","\x88","\x5d","\x8e"),
	HX_HCSTRING("setScrollBounds","\x24","\xad","\x95","\xdc"),
	HX_HCSTRING("setScale","\x88","\x37","\x03","\x87"),
	HX_HCSTRING("onResize","\x73","\x50","\x28","\xe8"),
	HX_HCSTRING("set_followLerp","\x45","\x4d","\x99","\x6f"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("set_zoom","\x10","\xb8","\x10","\x7f"),
	HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"),
	HX_HCSTRING("set_angle","\x36","\x8c","\xdc","\x49"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("set_antialiasing","\xf1","\xf0","\x93","\xa3"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCamera_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::defaultZoom,"defaultZoom");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::defaultCameras,"defaultCameras");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::_storageTilesHead,"_storageTilesHead");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::_storageTrianglesHead,"_storageTrianglesHead");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::drawVertices,"drawVertices");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::trianglesSprite,"trianglesSprite");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::renderPoint,"renderPoint");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::renderRect,"renderRect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::defaultZoom,"defaultZoom");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::defaultCameras,"defaultCameras");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::_storageTilesHead,"_storageTilesHead");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::_storageTrianglesHead,"_storageTrianglesHead");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::drawVertices,"drawVertices");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::trianglesSprite,"trianglesSprite");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::renderPoint,"renderPoint");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::renderRect,"renderRect");
};

#endif

hx::Class FlxCamera_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("defaultZoom","\x74","\x9c","\xb7","\x22"),
	HX_HCSTRING("defaultCameras","\x6d","\xe3","\x71","\x12"),
	HX_HCSTRING("_storageTilesHead","\xe9","\xa8","\x61","\xaf"),
	HX_HCSTRING("_storageTrianglesHead","\x0f","\x09","\x78","\x17"),
	HX_HCSTRING("drawVertices","\x1d","\x4c","\x09","\x40"),
	HX_HCSTRING("trianglesSprite","\x10","\xd3","\x45","\xab"),
	HX_HCSTRING("renderPoint","\x1a","\xe1","\x40","\x92"),
	HX_HCSTRING("renderRect","\x9a","\x47","\xb1","\xe8"),
	::String(null()) };

void FlxCamera_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.FlxCamera","\x05","\x18","\xe2","\xd7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxCamera_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxCamera_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxCamera_obj >;
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

void FlxCamera_obj::__boot()
{
struct _Function_0_1{
	inline static Array< Float > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",425,0xe7aeb95a)
		{
			HX_STACK_LINE(425)
			Array< Float > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(425)
			this1 = Array_obj< Float >::__new();
			HX_STACK_LINE(425)
			this1->__SetSizeExact(null());
			HX_STACK_LINE(425)
			return this1;
		}
		return null();
	}
};
	drawVertices= _Function_0_1::Block();
	trianglesSprite= ::openfl::_legacy::display::Sprite_obj::__new();
struct _Function_0_2{
	inline static ::flixel::math::FlxPoint Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",434,0xe7aeb95a)
		{
			HX_STACK_LINE(434)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(434)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(434)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(434)
			::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(434)
			Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(434)
			Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(434)
			::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(434)
			::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(434)
			point->_inPool = false;
			HX_STACK_LINE(434)
			return point;
		}
		return null();
	}
};
	renderPoint= _Function_0_2::Block();
struct _Function_0_3{
	inline static ::flixel::math::FlxRect Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",435,0xe7aeb95a)
		{
			HX_STACK_LINE(435)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(435)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(435)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(435)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(435)
			::flixel::math::FlxRect tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(435)
			{
				HX_STACK_LINE(435)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp1 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(435)
				::flixel::math::FlxRect tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(435)
				::flixel::math::FlxRect _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(435)
				_this->x = X;
				HX_STACK_LINE(435)
				_this->y = Y;
				HX_STACK_LINE(435)
				_this->width = Width;
				HX_STACK_LINE(435)
				_this->height = Height;
				HX_STACK_LINE(435)
				tmp = _this;
			}
			HX_STACK_LINE(435)
			::flixel::math::FlxRect rect = tmp;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(435)
			rect->_inPool = false;
			HX_STACK_LINE(435)
			return rect;
		}
		return null();
	}
};
	renderRect= _Function_0_3::Block();
}

} // end namespace flixel
