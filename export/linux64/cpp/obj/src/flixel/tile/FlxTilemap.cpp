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
#ifndef INCLUDED_flixel_graphics_frames_FlxTileFrames
#include <flixel/graphics/frames/FlxTileFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawBaseItem
#include <flixel/graphics/tile/FlxDrawBaseItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawTilesItem
#include <flixel/graphics/tile/FlxDrawTilesItem.h>
#endif
#ifndef INCLUDED_flixel_math_FlxCallbackPoint
#include <flixel/math/FlxCallbackPoint.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTile
#include <flixel/tile/FlxTile.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapBuffer
#include <flixel/tile/FlxTilemapBuffer.h>
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
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal2
#include <flixel/util/_FlxSignal/FlxSignal2.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace tile{

Void FlxTilemap_obj::__construct()
{
HX_STACK_FRAME("flixel.tile.FlxTilemap","new",0xbe02531c,"flixel.tile.FlxTilemap.new","flixel/tile/FlxTilemap.hx",43,0x448feb74)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(128)
	this->_scaledTileHeight = ((Float)0);
	HX_STACK_LINE(127)
	this->_scaledTileWidth = ((Float)0);
	HX_STACK_LINE(125)
	this->_tileHeight = (int)0;
	HX_STACK_LINE(121)
	this->_tileWidth = (int)0;
	HX_STACK_LINE(117)
	this->_buffers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(113)
	this->_flashRect = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(109)
	this->_flashPoint = ::openfl::_legacy::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(97)
	this->blend = null();
	HX_STACK_LINE(92)
	this->colorTransform = ::openfl::_legacy::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(90)
	this->alpha = ((Float)1.0);
	HX_STACK_LINE(85)
	this->color = (int)16777215;
	struct _Function_1_1{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxTilemap.hx",73,0x448feb74)
			{
				HX_STACK_LINE(73)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(73)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(73)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(73)
				::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(73)
				Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(73)
				Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(73)
				::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(73)
				::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(73)
				point->_inPool = false;
				HX_STACK_LINE(73)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(73)
	this->offset = _Function_1_1::Block();
	HX_STACK_LINE(67)
	this->antialiasing = false;
	HX_STACK_LINE(56)
	this->useScaleHack = true;
	HX_STACK_LINE(149)
	super::__construct();
	HX_STACK_LINE(151)
	bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(151)
	if ((tmp)){
		HX_STACK_LINE(153)
		::openfl::_legacy::geom::Point tmp1 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(153)
		this->_helperPoint = tmp1;
		HX_STACK_LINE(154)
		::flixel::math::FlxMatrix tmp2 = ::flixel::math::FlxMatrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(154)
		this->_matrix = tmp2;
	}
	HX_STACK_LINE(157)
	Dynamic tmp1 = this->setScaleXCallback_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(157)
	Dynamic tmp2 = this->setScaleYCallback_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(157)
	Dynamic tmp3 = this->setScaleXYCallback_dyn();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(157)
	::flixel::math::FlxCallbackPoint tmp4 = ::flixel::math::FlxCallbackPoint_obj::__new(tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(157)
	this->scale = tmp4;
	HX_STACK_LINE(158)
	::flixel::math::FlxPoint tmp5 = this->scale;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(158)
	tmp5->set((int)1,(int)1);
	HX_STACK_LINE(160)
	{
		HX_STACK_LINE(160)
		::flixel::_system::frontEnds::SignalFrontEnd tmp6 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(160)
		Dynamic tmp7 = this->onGameResize_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(160)
		tmp6->__Field(HX_HCSTRING("gameResized","\x1e","\xd2","\x29","\x48"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp7);
	}
	HX_STACK_LINE(162)
	bool tmp6 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(162)
	if ((tmp6)){
		HX_STACK_LINE(163)
		::flixel::_system::frontEnds::DebuggerFrontEnd tmp7 = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(163)
		Dynamic tmp8 = this->onDrawDebugChanged_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(163)
		tmp7->__Field(HX_HCSTRING("drawDebugChanged","\x05","\x35","\xde","\x47"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp8);
	}
}
;
	return null();
}

//FlxTilemap_obj::~FlxTilemap_obj() { }

Dynamic FlxTilemap_obj::__CreateEmpty() { return  new FlxTilemap_obj; }
hx::ObjectPtr< FlxTilemap_obj > FlxTilemap_obj::__new()
{  hx::ObjectPtr< FlxTilemap_obj > _result_ = new FlxTilemap_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxTilemap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTilemap_obj > _result_ = new FlxTilemap_obj();
	_result_->__construct();
	return _result_;}

Void FlxTilemap_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","destroy",0xa7f2bdb6,"flixel.tile.FlxTilemap.destroy","flixel/tile/FlxTilemap.hx",171,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(172)
		this->_flashPoint = null();
		HX_STACK_LINE(173)
		this->_flashRect = null();
		HX_STACK_LINE(175)
		this->_tileObjects = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_tileObjects);
		HX_STACK_LINE(176)
		this->_buffers = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_buffers);
		HX_STACK_LINE(178)
		bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(178)
		if ((tmp)){
			HX_STACK_LINE(181)
			this->_debugRect = null();
			HX_STACK_LINE(182)
			this->_debugTileNotSolid = null();
			HX_STACK_LINE(183)
			this->_debugTilePartial = null();
			HX_STACK_LINE(184)
			this->_debugTileSolid = null();
		}
		else{
			HX_STACK_LINE(189)
			this->_helperPoint = null();
			HX_STACK_LINE(190)
			this->_matrix = null();
		}
		HX_STACK_LINE(193)
		this->set_frames(null());
		HX_STACK_LINE(194)
		this->set_graphic(null());
		HX_STACK_LINE(197)
		::flixel::math::FlxPoint tmp1 = this->scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(197)
		::flixel::math::FlxPoint tmp2 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(197)
		this->scale = tmp2;
		HX_STACK_LINE(198)
		::flixel::math::FlxPoint tmp3 = this->offset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(198)
		::flixel::math::FlxPoint tmp4 = ::flixel::util::FlxDestroyUtil_obj::put(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(198)
		this->offset = tmp4;
		HX_STACK_LINE(200)
		this->colorTransform = null();
		HX_STACK_LINE(202)
		{
			HX_STACK_LINE(202)
			::flixel::_system::frontEnds::SignalFrontEnd tmp5 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(202)
			Dynamic tmp6 = this->onGameResize_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(202)
			tmp5->__Field(HX_HCSTRING("gameResized","\x1e","\xd2","\x29","\x48"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp6);
		}
		HX_STACK_LINE(204)
		bool tmp5 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(204)
		if ((tmp5)){
			HX_STACK_LINE(205)
			::flixel::_system::frontEnds::DebuggerFrontEnd tmp6 = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(205)
			Dynamic tmp7 = this->onDrawDebugChanged_dyn();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(205)
			tmp6->__Field(HX_HCSTRING("drawDebugChanged","\x05","\x35","\xde","\x47"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp7);
		}
		HX_STACK_LINE(208)
		this->shader = null();
		HX_STACK_LINE(210)
		this->super::destroy();
	}
return null();
}


::flixel::graphics::frames::FlxFramesCollection FlxTilemap_obj::set_frames( ::flixel::graphics::frames::FlxFramesCollection value){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","set_frames",0xb39c4aa7,"flixel.tile.FlxTilemap.set_frames","flixel/tile/FlxTilemap.hx",214,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(215)
	this->frames = value;
	HX_STACK_LINE(217)
	bool tmp = (value != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(217)
	if ((tmp)){
		HX_STACK_LINE(219)
		::flixel::graphics::frames::FlxFrame tmp1 = value->frames->__get((int)0).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(219)
		Float tmp2 = tmp1->sourceSize->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(219)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(219)
		this->_tileWidth = tmp3;
		HX_STACK_LINE(220)
		::flixel::graphics::frames::FlxFrame tmp4 = value->frames->__get((int)0).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(220)
		Float tmp5 = tmp4->sourceSize->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(220)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(220)
		this->_tileHeight = tmp6;
		HX_STACK_LINE(221)
		::openfl::_legacy::geom::Rectangle tmp7 = this->_flashRect;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(221)
		int tmp8 = this->_tileWidth;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(221)
		int tmp9 = this->_tileHeight;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(221)
		tmp7->setTo((int)0,(int)0,tmp8,tmp9);
		HX_STACK_LINE(222)
		::flixel::graphics::FlxGraphic tmp10 = value->parent;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(222)
		this->set_graphic(tmp10);
		HX_STACK_LINE(223)
		this->postGraphicLoad();
	}
	HX_STACK_LINE(226)
	::flixel::graphics::frames::FlxFramesCollection tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(226)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_frames,return )

Void FlxTilemap_obj::cacheGraphics( int TileWidth,int TileHeight,Dynamic TileGraphic){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","cacheGraphics",0x759126e9,"flixel.tile.FlxTilemap.cacheGraphics","flixel/tile/FlxTilemap.hx",230,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(TileWidth,"TileWidth")
		HX_STACK_ARG(TileHeight,"TileHeight")
		HX_STACK_ARG(TileGraphic,"TileGraphic")
		HX_STACK_LINE(231)
		Dynamic tmp = TileGraphic;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(231)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::flixel::graphics::frames::FlxFramesCollection >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(231)
		if ((tmp1)){
			HX_STACK_LINE(233)
			::flixel::graphics::frames::FlxFramesCollection tmp2 = ((::flixel::graphics::frames::FlxFramesCollection)(TileGraphic));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(233)
			this->set_frames(tmp2);
			HX_STACK_LINE(234)
			return null();
		}
		HX_STACK_LINE(237)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp2 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(237)
		Dynamic tmp3 = TileGraphic;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(237)
		::flixel::graphics::FlxGraphic tmp4 = tmp2->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(237)
		::flixel::graphics::FlxGraphic graph = tmp4;		HX_STACK_VAR(graph,"graph");
		HX_STACK_LINE(238)
		bool tmp5 = (graph == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(238)
		if ((tmp5)){
			HX_STACK_LINE(239)
			return null();
		}
		HX_STACK_LINE(242)
		this->_tileWidth = TileWidth;
		HX_STACK_LINE(243)
		int tmp6 = this->_tileWidth;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(243)
		bool tmp7 = (tmp6 <= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(243)
		if ((tmp7)){
			HX_STACK_LINE(244)
			this->_tileWidth = graph->height;
		}
		HX_STACK_LINE(246)
		this->_tileHeight = TileHeight;
		HX_STACK_LINE(247)
		int tmp8 = this->_tileHeight;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(247)
		bool tmp9 = (tmp8 <= (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(247)
		if ((tmp9)){
			HX_STACK_LINE(248)
			int tmp10 = this->_tileWidth;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(248)
			this->_tileHeight = tmp10;
		}
		HX_STACK_LINE(250)
		::flixel::graphics::FlxGraphic tmp10 = graph;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(250)
		::flixel::math::FlxPoint tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(250)
		{
			HX_STACK_LINE(250)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp12 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(250)
			::flixel::math::FlxPoint tmp13 = tmp12->get();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(250)
			int tmp14 = this->_tileWidth;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(250)
			int tmp15 = this->_tileHeight;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(250)
			::flixel::math::FlxPoint tmp16 = tmp13->set(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(250)
			::flixel::math::FlxPoint point = tmp16;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(250)
			point->_inPool = false;
			HX_STACK_LINE(250)
			tmp11 = point;
		}
		HX_STACK_LINE(250)
		::flixel::graphics::frames::FlxTileFrames tmp12 = ::flixel::graphics::frames::FlxTileFrames_obj::fromGraphic(tmp10,tmp11,null(),null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(250)
		this->set_frames(tmp12);
	}
return null();
}


Void FlxTilemap_obj::initTileObjects( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","initTileObjects",0xb20b6ad2,"flixel.tile.FlxTilemap.initTileObjects","flixel/tile/FlxTilemap.hx",254,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(255)
		::flixel::graphics::frames::FlxFramesCollection tmp = this->frames;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(255)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(255)
		if ((tmp1)){
			HX_STACK_LINE(256)
			return null();
		}
		HX_STACK_LINE(258)
		this->_tileObjects = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_tileObjects);
		HX_STACK_LINE(260)
		this->_tileObjects = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(262)
		::flixel::graphics::frames::FlxFramesCollection tmp2 = this->frames;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(262)
		int tmp3 = tmp2->frames->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(262)
		int length = tmp3;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(263)
		int tmp4 = this->_startingIndex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(263)
		hx::AddEq(length,tmp4);
		HX_STACK_LINE(265)
		{
			HX_STACK_LINE(265)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(265)
			while((true)){
				HX_STACK_LINE(265)
				bool tmp5 = (_g < length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(265)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(265)
				if ((tmp6)){
					HX_STACK_LINE(265)
					break;
				}
				HX_STACK_LINE(265)
				int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(265)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(266)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(266)
				int tmp9 = this->_tileWidth;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(266)
				int tmp10 = this->_tileHeight;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(266)
				int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(266)
				int tmp12 = this->_drawIndex;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(266)
				bool tmp13 = (tmp11 >= tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(266)
				int tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(266)
				int tmp15 = this->_collideIndex;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(266)
				bool tmp16 = (tmp14 >= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(266)
				int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(266)
				if ((tmp16)){
					HX_STACK_LINE(266)
					tmp17 = this->allowCollisions;
				}
				else{
					HX_STACK_LINE(266)
					tmp17 = (int)0;
				}
				HX_STACK_LINE(266)
				::flixel::tile::FlxTile tmp18 = ::flixel::tile::FlxTile_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp8,tmp9,tmp10,tmp13,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(266)
				hx::IndexRef((this->_tileObjects).mPtr,i) = tmp18;
			}
		}
		HX_STACK_LINE(270)
		bool tmp5 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(270)
		if ((tmp5)){
			HX_STACK_LINE(272)
			::openfl::_legacy::display::BitmapData tmp6 = this->makeDebugTile((int)-16776961);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(272)
			this->_debugTileNotSolid = tmp6;
			HX_STACK_LINE(273)
			::openfl::_legacy::display::BitmapData tmp7 = this->makeDebugTile((int)-16181);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(273)
			this->_debugTilePartial = tmp7;
			HX_STACK_LINE(274)
			::openfl::_legacy::display::BitmapData tmp8 = this->makeDebugTile((int)-16744448);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(274)
			this->_debugTileSolid = tmp8;
		}
	}
return null();
}


Void FlxTilemap_obj::computeDimensions( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","computeDimensions",0x3602f860,"flixel.tile.FlxTilemap.computeDimensions","flixel/tile/FlxTilemap.hx",280,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(281)
		int tmp = this->_tileWidth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(281)
		::flixel::math::FlxPoint tmp1 = this->scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(281)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(281)
		Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(281)
		this->_scaledTileWidth = tmp3;
		HX_STACK_LINE(282)
		int tmp4 = this->_tileHeight;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(282)
		::flixel::math::FlxPoint tmp5 = this->scale;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(282)
		Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(282)
		Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(282)
		this->_scaledTileHeight = tmp7;
		HX_STACK_LINE(285)
		int tmp8 = this->widthInTiles;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(285)
		Float tmp9 = this->_scaledTileWidth;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(285)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(285)
		this->set_width(tmp10);
		HX_STACK_LINE(286)
		int tmp11 = this->heightInTiles;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(286)
		Float tmp12 = this->_scaledTileHeight;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(286)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(286)
		this->set_height(tmp13);
	}
return null();
}


Void FlxTilemap_obj::updateMap( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","updateMap",0x271f1fcf,"flixel.tile.FlxTilemap.updateMap","flixel/tile/FlxTilemap.hx",290,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(292)
		bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(292)
		if ((tmp)){
			HX_STACK_LINE(293)
			int tmp1 = this->_tileWidth;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(293)
			int tmp2 = this->_tileHeight;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(293)
			::openfl::_legacy::geom::Rectangle tmp3 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(293)
			this->_debugRect = tmp3;
		}
		HX_STACK_LINE(296)
		int tmp1 = this->_tileObjects->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(296)
		int numTiles = tmp1;		HX_STACK_VAR(numTiles,"numTiles");
		HX_STACK_LINE(297)
		{
			HX_STACK_LINE(297)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(297)
			while((true)){
				HX_STACK_LINE(297)
				bool tmp2 = (_g < numTiles);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(297)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(297)
				if ((tmp3)){
					HX_STACK_LINE(297)
					break;
				}
				HX_STACK_LINE(297)
				int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(297)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(298)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(298)
				this->updateTile(tmp5);
			}
		}
	}
return null();
}


Void FlxTilemap_obj::drawDebugOnCamera( ::flixel::FlxCamera Camera){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","drawDebugOnCamera",0x0d929baf,"flixel.tile.FlxTilemap.drawDebugOnCamera","flixel/tile/FlxTilemap.hx",303,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Camera,"Camera")
		HX_STACK_LINE(304)
		bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(304)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(304)
		if ((tmp1)){
			HX_STACK_LINE(305)
			return null();
		}
		HX_STACK_LINE(307)
		::flixel::tile::FlxTilemapBuffer buffer = null();		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(308)
		::flixel::_system::frontEnds::CameraFrontEnd tmp2 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(308)
		int tmp3 = tmp2->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(308)
		int l = tmp3;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(310)
		{
			HX_STACK_LINE(310)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(310)
			while((true)){
				HX_STACK_LINE(310)
				bool tmp4 = (_g < l);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(310)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(310)
				if ((tmp5)){
					HX_STACK_LINE(310)
					break;
				}
				HX_STACK_LINE(310)
				int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(310)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(312)
				::flixel::_system::frontEnds::CameraFrontEnd tmp7 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(312)
				::flixel::FlxCamera tmp8 = tmp7->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic )->__GetItem(i);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(312)
				::flixel::FlxCamera tmp9 = Camera;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(312)
				bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(312)
				if ((tmp10)){
					HX_STACK_LINE(314)
					::flixel::tile::FlxTilemapBuffer tmp11 = this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(314)
					buffer = tmp11;
					HX_STACK_LINE(315)
					break;
				}
			}
		}
		HX_STACK_LINE(319)
		bool tmp4 = (buffer == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(319)
		if ((tmp4)){
			HX_STACK_LINE(320)
			return null();
		}
		HX_STACK_LINE(323)
		Float tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(323)
		Float tmp6 = Camera->scroll->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(323)
		::flixel::math::FlxPoint tmp7 = this->scrollFactor;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(323)
		Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(323)
		Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(323)
		Float tmp10 = (tmp5 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(323)
		::openfl::_legacy::geom::Point tmp11 = this->_helperPoint;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(323)
		tmp11->x = tmp10;
		HX_STACK_LINE(324)
		Float tmp12 = this->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(324)
		Float tmp13 = Camera->scroll->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(324)
		::flixel::math::FlxPoint tmp14 = this->scrollFactor;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(324)
		Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(324)
		Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(324)
		Float tmp17 = (tmp12 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(324)
		::openfl::_legacy::geom::Point tmp18 = this->_helperPoint;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(324)
		tmp18->y = tmp17;
		HX_STACK_LINE(326)
		int debugColor;		HX_STACK_VAR(debugColor,"debugColor");
		HX_STACK_LINE(327)
		Float drawX;		HX_STACK_VAR(drawX,"drawX");
		HX_STACK_LINE(328)
		Float drawY;		HX_STACK_VAR(drawY,"drawY");
		HX_STACK_LINE(330)
		Float tmp19 = this->_scaledTileWidth;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(330)
		Float rectWidth = tmp19;		HX_STACK_VAR(rectWidth,"rectWidth");
		HX_STACK_LINE(331)
		Float tmp20 = this->_scaledTileHeight;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(331)
		Float rectHeight = tmp20;		HX_STACK_VAR(rectHeight,"rectHeight");
		HX_STACK_LINE(335)
		::flixel::math::FlxPoint tmp21 = this->_point;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(335)
		Float tmp22 = Camera->scroll->x;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(335)
		::flixel::math::FlxPoint tmp23 = this->scrollFactor;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(335)
		Float tmp24 = tmp23->x;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(335)
		Float tmp25 = (tmp22 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(335)
		Float tmp26 = this->x;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(335)
		Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(335)
		tmp21->set_x(tmp27);
		HX_STACK_LINE(336)
		::flixel::math::FlxPoint tmp28 = this->_point;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(336)
		Float tmp29 = Camera->scroll->y;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(336)
		::flixel::math::FlxPoint tmp30 = this->scrollFactor;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(336)
		Float tmp31 = tmp30->y;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(336)
		Float tmp32 = (tmp29 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(336)
		Float tmp33 = this->y;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(336)
		Float tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(336)
		tmp28->set_y(tmp34);
		HX_STACK_LINE(337)
		::flixel::math::FlxPoint tmp35 = this->_point;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(337)
		Float tmp36 = tmp35->x;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(337)
		Float tmp37 = this->_scaledTileWidth;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(337)
		Float tmp38 = (Float(tmp36) / Float(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(337)
		int tmp39 = ::Math_obj::floor(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(337)
		int screenXInTiles = tmp39;		HX_STACK_VAR(screenXInTiles,"screenXInTiles");
		HX_STACK_LINE(338)
		::flixel::math::FlxPoint tmp40 = this->_point;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(338)
		Float tmp41 = tmp40->y;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(338)
		Float tmp42 = this->_scaledTileHeight;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(338)
		Float tmp43 = (Float(tmp41) / Float(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(338)
		int tmp44 = ::Math_obj::floor(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(338)
		int screenYInTiles = tmp44;		HX_STACK_VAR(screenYInTiles,"screenYInTiles");
		HX_STACK_LINE(339)
		int screenRows = buffer->rows;		HX_STACK_VAR(screenRows,"screenRows");
		HX_STACK_LINE(340)
		int screenColumns = buffer->columns;		HX_STACK_VAR(screenColumns,"screenColumns");
		HX_STACK_LINE(343)
		Float tmp45;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(343)
		{
			HX_STACK_LINE(343)
			int tmp46 = this->widthInTiles;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(343)
			int tmp47 = screenColumns;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(343)
			int tmp48 = (tmp46 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(343)
			Dynamic Max = tmp48;		HX_STACK_VAR(Max,"Max");
			HX_STACK_LINE(343)
			bool tmp49 = true;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(343)
			bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(343)
			if ((tmp49)){
				HX_STACK_LINE(343)
				tmp50 = (screenXInTiles < (int)0);
			}
			else{
				HX_STACK_LINE(343)
				tmp50 = false;
			}
			HX_STACK_LINE(343)
			Float tmp51;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(343)
			if ((tmp50)){
				HX_STACK_LINE(343)
				tmp51 = (int)0;
			}
			else{
				HX_STACK_LINE(343)
				tmp51 = screenXInTiles;
			}
			HX_STACK_LINE(343)
			Float lowerBound = tmp51;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(343)
			bool tmp52 = (Max != null());		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(343)
			bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(343)
			if ((tmp52)){
				HX_STACK_LINE(343)
				tmp53 = (lowerBound > Max);
			}
			else{
				HX_STACK_LINE(343)
				tmp53 = false;
			}
			HX_STACK_LINE(343)
			if ((tmp53)){
				HX_STACK_LINE(343)
				tmp45 = Max;
			}
			else{
				HX_STACK_LINE(343)
				tmp45 = lowerBound;
			}
		}
		HX_STACK_LINE(343)
		int tmp46 = ::Std_obj::_int(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(343)
		screenXInTiles = tmp46;
		HX_STACK_LINE(344)
		Float tmp47;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(344)
		{
			HX_STACK_LINE(344)
			int tmp48 = this->heightInTiles;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(344)
			int tmp49 = screenRows;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(344)
			int tmp50 = (tmp48 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(344)
			Dynamic Max = tmp50;		HX_STACK_VAR(Max,"Max");
			HX_STACK_LINE(344)
			bool tmp51 = true;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(344)
			bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(344)
			if ((tmp51)){
				HX_STACK_LINE(344)
				tmp52 = (screenYInTiles < (int)0);
			}
			else{
				HX_STACK_LINE(344)
				tmp52 = false;
			}
			HX_STACK_LINE(344)
			Float tmp53;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(344)
			if ((tmp52)){
				HX_STACK_LINE(344)
				tmp53 = (int)0;
			}
			else{
				HX_STACK_LINE(344)
				tmp53 = screenYInTiles;
			}
			HX_STACK_LINE(344)
			Float lowerBound = tmp53;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(344)
			bool tmp54 = (Max != null());		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(344)
			bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(344)
			if ((tmp54)){
				HX_STACK_LINE(344)
				tmp55 = (lowerBound > Max);
			}
			else{
				HX_STACK_LINE(344)
				tmp55 = false;
			}
			HX_STACK_LINE(344)
			if ((tmp55)){
				HX_STACK_LINE(344)
				tmp47 = Max;
			}
			else{
				HX_STACK_LINE(344)
				tmp47 = lowerBound;
			}
		}
		HX_STACK_LINE(344)
		int tmp48 = ::Std_obj::_int(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(344)
		screenYInTiles = tmp48;
		HX_STACK_LINE(346)
		int tmp49 = screenYInTiles;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(346)
		int tmp50 = this->widthInTiles;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(346)
		int tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(346)
		int tmp52 = screenXInTiles;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(346)
		int tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(346)
		int rowIndex = tmp53;		HX_STACK_VAR(rowIndex,"rowIndex");
		HX_STACK_LINE(347)
		int columnIndex;		HX_STACK_VAR(columnIndex,"columnIndex");
		HX_STACK_LINE(348)
		::flixel::tile::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(349)
		::openfl::_legacy::display::BitmapData debugTile;		HX_STACK_VAR(debugTile,"debugTile");
		HX_STACK_LINE(351)
		{
			HX_STACK_LINE(351)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(351)
			while((true)){
				HX_STACK_LINE(351)
				bool tmp54 = (_g < screenRows);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(351)
				bool tmp55 = !(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(351)
				if ((tmp55)){
					HX_STACK_LINE(351)
					break;
				}
				HX_STACK_LINE(351)
				int tmp56 = (_g)++;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(351)
				int row = tmp56;		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(353)
				columnIndex = rowIndex;
				HX_STACK_LINE(355)
				{
					HX_STACK_LINE(355)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(355)
					while((true)){
						HX_STACK_LINE(355)
						bool tmp57 = (_g1 < screenColumns);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(355)
						bool tmp58 = !(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(355)
						if ((tmp58)){
							HX_STACK_LINE(355)
							break;
						}
						HX_STACK_LINE(355)
						int tmp59 = (_g1)++;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(355)
						int column = tmp59;		HX_STACK_VAR(column,"column");
						HX_STACK_LINE(357)
						int tmp60 = this->_data->__get(columnIndex);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(357)
						::flixel::tile::FlxTile tmp61 = this->_tileObjects->__GetItem(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(357)
						tile = tmp61;
						HX_STACK_LINE(359)
						bool tmp62 = (tile != null());		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(359)
						bool tmp63;		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(359)
						if ((tmp62)){
							HX_STACK_LINE(359)
							tmp63 = tile->visible;
						}
						else{
							HX_STACK_LINE(359)
							tmp63 = false;
						}
						HX_STACK_LINE(359)
						if ((tmp63)){
							HX_STACK_LINE(361)
							::openfl::_legacy::geom::Point tmp64 = this->_helperPoint;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(361)
							Float tmp65 = tmp64->x;		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(361)
							int tmp66 = columnIndex;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(361)
							int tmp67 = this->widthInTiles;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(361)
							int tmp68 = hx::Mod(tmp66,tmp67);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(361)
							Float tmp69 = rectWidth;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(361)
							Float tmp70 = (tmp68 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(361)
							Float tmp71 = (tmp65 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(361)
							drawX = tmp71;
							HX_STACK_LINE(362)
							::openfl::_legacy::geom::Point tmp72 = this->_helperPoint;		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(362)
							Float tmp73 = tmp72->y;		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(362)
							int tmp74 = columnIndex;		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(362)
							int tmp75 = this->widthInTiles;		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(362)
							Float tmp76 = (Float(tmp74) / Float(tmp75));		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(362)
							int tmp77 = ::Math_obj::floor(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(362)
							Float tmp78 = rectHeight;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(362)
							Float tmp79 = (tmp77 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(362)
							Float tmp80 = (tmp73 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(362)
							drawY = tmp80;
							HX_STACK_LINE(364)
							bool tmp81 = (tile->allowCollisions <= (int)0);		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(364)
							if ((tmp81)){
								HX_STACK_LINE(366)
								debugColor = (int)-16776961;
							}
							else{
								HX_STACK_LINE(368)
								bool tmp82 = (tile->allowCollisions != (int)4369);		HX_STACK_VAR(tmp82,"tmp82");
								HX_STACK_LINE(368)
								if ((tmp82)){
									HX_STACK_LINE(370)
									debugColor = (int)-16181;
								}
								else{
									HX_STACK_LINE(374)
									debugColor = (int)-16744448;
								}
							}
							HX_STACK_LINE(378)
							::openfl::_legacy::display::Graphics tmp82 = Camera->debugLayer->get_graphics();		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(378)
							::openfl::_legacy::display::Graphics gfx = tmp82;		HX_STACK_VAR(gfx,"gfx");
							HX_STACK_LINE(379)
							int tmp83 = debugColor;		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(379)
							gfx->lineStyle((int)1,tmp83,((Float)0.5),null(),null(),null(),null(),null());
							HX_STACK_LINE(380)
							Float tmp84 = drawX;		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(380)
							Float tmp85 = drawY;		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(380)
							Float tmp86 = rectWidth;		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(380)
							Float tmp87 = rectHeight;		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(380)
							gfx->drawRect(tmp84,tmp85,tmp86,tmp87);
						}
						HX_STACK_LINE(383)
						(columnIndex)++;
					}
				}
				HX_STACK_LINE(386)
				int tmp57 = this->widthInTiles;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(386)
				hx::AddEq(rowIndex,tmp57);
			}
		}
	}
return null();
}


Void FlxTilemap_obj::draw( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","draw",0x7d740dc8,"flixel.tile.FlxTilemap.draw","flixel/tile/FlxTilemap.hx",395,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(397)
		::flixel::graphics::FlxGraphic tmp = this->graphic;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(397)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(397)
		if ((tmp1)){
			HX_STACK_LINE(398)
			return null();
		}
		HX_STACK_LINE(400)
		::flixel::FlxCamera camera;		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(401)
		::flixel::tile::FlxTilemapBuffer buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(402)
		int tmp2 = this->get_cameras()->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(402)
		int l = tmp2;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(404)
		{
			HX_STACK_LINE(404)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(404)
			while((true)){
				HX_STACK_LINE(404)
				bool tmp3 = (_g < l);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(404)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(404)
				if ((tmp4)){
					HX_STACK_LINE(404)
					break;
				}
				HX_STACK_LINE(404)
				int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(404)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(406)
				::flixel::FlxCamera tmp6 = this->get_cameras()->__get(i).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(406)
				camera = tmp6;
				HX_STACK_LINE(408)
				bool tmp7 = camera->visible;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(408)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(408)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(408)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(408)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(408)
				if ((tmp10)){
					HX_STACK_LINE(408)
					bool tmp12 = camera->exists;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(408)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(408)
					tmp11 = !(tmp13);
				}
				else{
					HX_STACK_LINE(408)
					tmp11 = true;
				}
				HX_STACK_LINE(408)
				if ((tmp11)){
					HX_STACK_LINE(409)
					continue;
				}
				HX_STACK_LINE(411)
				::flixel::tile::FlxTilemapBuffer tmp12 = this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(411)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(411)
				if ((tmp13)){
					HX_STACK_LINE(412)
					::flixel::tile::FlxTilemapBuffer tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(412)
					{
						HX_STACK_LINE(412)
						int tmp15 = this->_tileWidth;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(412)
						int tmp16 = this->_tileHeight;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(412)
						int tmp17 = this->widthInTiles;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(412)
						int tmp18 = this->heightInTiles;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(412)
						::flixel::FlxCamera tmp19 = camera;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(412)
						::flixel::math::FlxPoint tmp20 = this->scale;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(412)
						Float tmp21 = tmp20->x;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(412)
						::flixel::math::FlxPoint tmp22 = this->scale;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(412)
						Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(412)
						::flixel::tile::FlxTilemapBuffer tmp24 = ::flixel::tile::FlxTilemapBuffer_obj::__new(tmp15,tmp16,tmp17,tmp18,tmp19,tmp21,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(412)
						::flixel::tile::FlxTilemapBuffer buffer1 = tmp24;		HX_STACK_VAR(buffer1,"buffer1");
						HX_STACK_LINE(412)
						Dynamic tmp25 = this->pixelPerfectRender;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(412)
						buffer1->pixelPerfectRender = tmp25;
						HX_STACK_LINE(412)
						bool tmp26 = this->antialiasing;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(412)
						buffer1->antialiasing = tmp26;
						HX_STACK_LINE(412)
						tmp14 = buffer1;
					}
					HX_STACK_LINE(412)
					this->_buffers[i] = tmp14;
				}
				HX_STACK_LINE(414)
				::flixel::tile::FlxTilemapBuffer tmp14 = this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(414)
				buffer = tmp14;
				HX_STACK_LINE(416)
				bool tmp15 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(416)
				if ((tmp15)){
					HX_STACK_LINE(418)
					{
						HX_STACK_LINE(418)
						::flixel::math::FlxPoint tmp16 = this->_point;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(418)
						::flixel::FlxCamera tmp17 = camera;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(418)
						::flixel::math::FlxPoint tmp18 = this->getScreenPosition(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(418)
						::flixel::math::FlxPoint tmp19 = this->offset;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(418)
						::flixel::math::FlxPoint tmp20 = tmp18->subtractPoint(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(418)
						::flixel::math::FlxPoint _this = tmp20;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(418)
						{
							HX_STACK_LINE(418)
							::flixel::math::FlxPoint _g1 = _this;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(418)
							Float tmp21 = (_g1->x + buffer->x);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(418)
							_g1->set_x(tmp21);
						}
						HX_STACK_LINE(418)
						{
							HX_STACK_LINE(418)
							::flixel::math::FlxPoint _g1 = _this;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(418)
							Float tmp21 = (_g1->y + buffer->y);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(418)
							_g1->set_y(tmp21);
						}
						HX_STACK_LINE(418)
						_this;
					}
					HX_STACK_LINE(419)
					bool tmp16 = buffer->dirty;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(419)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(419)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(419)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(419)
					if ((tmp18)){
						HX_STACK_LINE(419)
						::flixel::math::FlxPoint tmp20 = this->_point;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(419)
						::flixel::math::FlxPoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(419)
						::flixel::math::FlxPoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(419)
						Float tmp23 = tmp22->x;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(419)
						tmp19 = (tmp23 > (int)0);
					}
					else{
						HX_STACK_LINE(419)
						tmp19 = true;
					}
					HX_STACK_LINE(419)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(419)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(419)
					bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(419)
					if ((tmp21)){
						HX_STACK_LINE(419)
						::flixel::math::FlxPoint tmp23 = this->_point;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(419)
						::flixel::math::FlxPoint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(419)
						::flixel::math::FlxPoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(419)
						Float tmp26 = tmp25->y;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(419)
						tmp22 = (tmp26 > (int)0);
					}
					else{
						HX_STACK_LINE(419)
						tmp22 = true;
					}
					HX_STACK_LINE(419)
					bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(419)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(419)
					bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(419)
					if ((tmp24)){
						HX_STACK_LINE(419)
						::flixel::math::FlxPoint tmp26 = this->_point;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(419)
						::flixel::math::FlxPoint tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(419)
						::flixel::math::FlxPoint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(419)
						Float tmp29 = tmp28->x;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(419)
						Float tmp30 = buffer->width;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(419)
						Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(419)
						Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(419)
						Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(419)
						int tmp34 = camera->width;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(419)
						tmp25 = (tmp33 < tmp34);
					}
					else{
						HX_STACK_LINE(419)
						tmp25 = true;
					}
					HX_STACK_LINE(419)
					bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(419)
					bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(419)
					if ((tmp26)){
						HX_STACK_LINE(419)
						::flixel::math::FlxPoint tmp28 = this->_point;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(419)
						::flixel::math::FlxPoint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(419)
						Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(419)
						Float tmp31 = buffer->height;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(419)
						Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(419)
						Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(419)
						int tmp34 = camera->height;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(419)
						tmp27 = (tmp33 < tmp34);
					}
					else{
						HX_STACK_LINE(419)
						tmp27 = true;
					}
					HX_STACK_LINE(419)
					buffer->dirty = tmp27;
					HX_STACK_LINE(421)
					bool tmp28 = buffer->dirty;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(421)
					if ((tmp28)){
						HX_STACK_LINE(423)
						::flixel::tile::FlxTilemapBuffer tmp29 = buffer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(423)
						::flixel::FlxCamera tmp30 = camera;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(423)
						this->drawTilemap(tmp29,tmp30);
					}
					HX_STACK_LINE(426)
					{
						HX_STACK_LINE(426)
						::flixel::math::FlxPoint tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(426)
						{
							HX_STACK_LINE(426)
							::flixel::math::FlxPoint tmp30 = this->_point;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(426)
							::flixel::FlxCamera tmp31 = camera;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(426)
							::flixel::math::FlxPoint tmp32 = this->getScreenPosition(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(426)
							::flixel::math::FlxPoint tmp33 = this->offset;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(426)
							::flixel::math::FlxPoint tmp34 = tmp32->subtractPoint(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(426)
							::flixel::math::FlxPoint _this = tmp34;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(426)
							{
								HX_STACK_LINE(426)
								::flixel::math::FlxPoint _g1 = _this;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(426)
								Float tmp35 = (_g1->x + buffer->x);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(426)
								_g1->set_x(tmp35);
							}
							HX_STACK_LINE(426)
							{
								HX_STACK_LINE(426)
								::flixel::math::FlxPoint _g1 = _this;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(426)
								Float tmp35 = (_g1->y + buffer->y);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(426)
								_g1->set_y(tmp35);
							}
							HX_STACK_LINE(426)
							tmp29 = _this;
						}
						HX_STACK_LINE(426)
						::flixel::math::FlxPoint _this = tmp29;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(426)
						::openfl::_legacy::geom::Point tmp30 = this->_flashPoint;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(426)
						::openfl::_legacy::geom::Point FlashPoint = tmp30;		HX_STACK_VAR(FlashPoint,"FlashPoint");
						HX_STACK_LINE(426)
						bool tmp31 = (FlashPoint == null());		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(426)
						if ((tmp31)){
							HX_STACK_LINE(426)
							::openfl::_legacy::geom::Point tmp32 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(426)
							FlashPoint = tmp32;
						}
						HX_STACK_LINE(426)
						FlashPoint->x = _this->x;
						HX_STACK_LINE(426)
						FlashPoint->y = _this->y;
						HX_STACK_LINE(426)
						FlashPoint;
					}
					HX_STACK_LINE(427)
					::flixel::FlxCamera tmp29 = camera;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(427)
					::openfl::_legacy::geom::Point tmp30 = this->_flashPoint;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(427)
					::flixel::math::FlxPoint tmp31 = this->scale;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(427)
					Float tmp32 = tmp31->x;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(427)
					::flixel::math::FlxPoint tmp33 = this->scale;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(427)
					Float tmp34 = tmp33->y;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(427)
					buffer->draw(tmp29,tmp30,tmp32,tmp34);
				}
				else{
					HX_STACK_LINE(431)
					::flixel::tile::FlxTilemapBuffer tmp16 = buffer;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(431)
					::flixel::FlxCamera tmp17 = camera;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(431)
					this->drawTilemap(tmp16,tmp17);
				}
				HX_STACK_LINE(435)
				(::flixel::FlxBasic_obj::visibleCount)++;
			}
		}
		HX_STACK_LINE(440)
		::flixel::_system::frontEnds::DebuggerFrontEnd tmp3 = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(440)
		bool tmp4 = tmp3->__Field(HX_HCSTRING("drawDebug","\xaf","\x87","\x2a","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(440)
		if ((tmp4)){
			HX_STACK_LINE(441)
			this->drawDebug();
		}
	}
return null();
}


Void FlxTilemap_obj::setDirty( hx::Null< bool >  __o_Dirty){
bool Dirty = __o_Dirty.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","setDirty",0x6396ccd4,"flixel.tile.FlxTilemap.setDirty","flixel/tile/FlxTilemap.hx",453,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Dirty,"Dirty")
{
		HX_STACK_LINE(453)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(453)
		Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(453)
		while((true)){
			HX_STACK_LINE(453)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(453)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(453)
			if ((tmp1)){
				HX_STACK_LINE(453)
				break;
			}
			HX_STACK_LINE(453)
			::flixel::tile::FlxTilemapBuffer tmp2 = _g1->__get(_g).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(453)
			::flixel::tile::FlxTilemapBuffer buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(453)
			++(_g);
			HX_STACK_LINE(454)
			buffer->dirty = true;
		}
	}
return null();
}


bool FlxTilemap_obj::overlapsWithCallback( ::flixel::FlxObject Object,Dynamic Callback,hx::Null< bool >  __o_FlipCallbackParams,::flixel::math::FlxPoint Position){
bool FlipCallbackParams = __o_FlipCallbackParams.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","overlapsWithCallback",0xe7b56cdb,"flixel.tile.FlxTilemap.overlapsWithCallback","flixel/tile/FlxTilemap.hx",469,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Callback,"Callback")
	HX_STACK_ARG(FlipCallbackParams,"FlipCallbackParams")
	HX_STACK_ARG(Position,"Position")
{
		HX_STACK_LINE(470)
		bool results = false;		HX_STACK_VAR(results,"results");
		HX_STACK_LINE(472)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(472)
		Float xPos = tmp;		HX_STACK_VAR(xPos,"xPos");
		HX_STACK_LINE(473)
		Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(473)
		Float yPos = tmp1;		HX_STACK_VAR(yPos,"yPos");
		HX_STACK_LINE(475)
		bool tmp2 = (Position != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(475)
		if ((tmp2)){
			HX_STACK_LINE(477)
			xPos = Position->x;
			HX_STACK_LINE(478)
			yPos = Position->y;
		}
		HX_STACK_LINE(482)
		Float tmp3 = (Object->x - xPos);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(482)
		Float tmp4 = this->_scaledTileWidth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(482)
		Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(482)
		int tmp6 = ::Math_obj::floor(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(482)
		int selectionX = tmp6;		HX_STACK_VAR(selectionX,"selectionX");
		HX_STACK_LINE(483)
		Float tmp7 = (Object->y - yPos);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(483)
		Float tmp8 = this->_scaledTileHeight;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(483)
		Float tmp9 = (Float(tmp7) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(483)
		int tmp10 = ::Math_obj::floor(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(483)
		int selectionY = tmp10;		HX_STACK_VAR(selectionY,"selectionY");
		HX_STACK_LINE(484)
		int tmp11 = selectionX;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(484)
		Float tmp12 = Object->get_width();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(484)
		Float tmp13 = this->_scaledTileWidth;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(484)
		Float tmp14 = (Float(tmp12) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(484)
		int tmp15 = ::Math_obj::ceil(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(484)
		int tmp16 = (tmp11 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(484)
		int tmp17 = (tmp16 + (int)1);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(484)
		int selectionWidth = tmp17;		HX_STACK_VAR(selectionWidth,"selectionWidth");
		HX_STACK_LINE(485)
		int tmp18 = selectionY;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(485)
		Float tmp19 = Object->get_height();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(485)
		Float tmp20 = this->_scaledTileHeight;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(485)
		Float tmp21 = (Float(tmp19) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(485)
		int tmp22 = ::Math_obj::ceil(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(485)
		int tmp23 = (tmp18 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(485)
		int tmp24 = (tmp23 + (int)1);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(485)
		int selectionHeight = tmp24;		HX_STACK_VAR(selectionHeight,"selectionHeight");
		HX_STACK_LINE(488)
		Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(488)
		{
			HX_STACK_LINE(488)
			int tmp26 = this->widthInTiles;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(488)
			Dynamic Max = tmp26;		HX_STACK_VAR(Max,"Max");
			HX_STACK_LINE(488)
			bool tmp27 = true;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(488)
			bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(488)
			if ((tmp27)){
				HX_STACK_LINE(488)
				tmp28 = (selectionX < (int)0);
			}
			else{
				HX_STACK_LINE(488)
				tmp28 = false;
			}
			HX_STACK_LINE(488)
			Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(488)
			if ((tmp28)){
				HX_STACK_LINE(488)
				tmp29 = (int)0;
			}
			else{
				HX_STACK_LINE(488)
				tmp29 = selectionX;
			}
			HX_STACK_LINE(488)
			Float lowerBound = tmp29;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(488)
			bool tmp30 = (Max != null());		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(488)
			bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(488)
			if ((tmp30)){
				HX_STACK_LINE(488)
				tmp31 = (lowerBound > Max);
			}
			else{
				HX_STACK_LINE(488)
				tmp31 = false;
			}
			HX_STACK_LINE(488)
			if ((tmp31)){
				HX_STACK_LINE(488)
				tmp25 = Max;
			}
			else{
				HX_STACK_LINE(488)
				tmp25 = lowerBound;
			}
		}
		HX_STACK_LINE(488)
		int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(488)
		selectionX = tmp26;
		HX_STACK_LINE(489)
		Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(489)
		{
			HX_STACK_LINE(489)
			int tmp28 = this->heightInTiles;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(489)
			Dynamic Max = tmp28;		HX_STACK_VAR(Max,"Max");
			HX_STACK_LINE(489)
			bool tmp29 = true;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(489)
			bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(489)
			if ((tmp29)){
				HX_STACK_LINE(489)
				tmp30 = (selectionY < (int)0);
			}
			else{
				HX_STACK_LINE(489)
				tmp30 = false;
			}
			HX_STACK_LINE(489)
			Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(489)
			if ((tmp30)){
				HX_STACK_LINE(489)
				tmp31 = (int)0;
			}
			else{
				HX_STACK_LINE(489)
				tmp31 = selectionY;
			}
			HX_STACK_LINE(489)
			Float lowerBound = tmp31;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(489)
			bool tmp32 = (Max != null());		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(489)
			bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(489)
			if ((tmp32)){
				HX_STACK_LINE(489)
				tmp33 = (lowerBound > Max);
			}
			else{
				HX_STACK_LINE(489)
				tmp33 = false;
			}
			HX_STACK_LINE(489)
			if ((tmp33)){
				HX_STACK_LINE(489)
				tmp27 = Max;
			}
			else{
				HX_STACK_LINE(489)
				tmp27 = lowerBound;
			}
		}
		HX_STACK_LINE(489)
		int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(489)
		selectionY = tmp28;
		HX_STACK_LINE(490)
		Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(490)
		{
			HX_STACK_LINE(490)
			int tmp30 = this->widthInTiles;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(490)
			Dynamic Max = tmp30;		HX_STACK_VAR(Max,"Max");
			HX_STACK_LINE(490)
			bool tmp31 = true;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(490)
			bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(490)
			if ((tmp31)){
				HX_STACK_LINE(490)
				tmp32 = (selectionWidth < (int)0);
			}
			else{
				HX_STACK_LINE(490)
				tmp32 = false;
			}
			HX_STACK_LINE(490)
			Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(490)
			if ((tmp32)){
				HX_STACK_LINE(490)
				tmp33 = (int)0;
			}
			else{
				HX_STACK_LINE(490)
				tmp33 = selectionWidth;
			}
			HX_STACK_LINE(490)
			Float lowerBound = tmp33;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(490)
			bool tmp34 = (Max != null());		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(490)
			bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(490)
			if ((tmp34)){
				HX_STACK_LINE(490)
				tmp35 = (lowerBound > Max);
			}
			else{
				HX_STACK_LINE(490)
				tmp35 = false;
			}
			HX_STACK_LINE(490)
			if ((tmp35)){
				HX_STACK_LINE(490)
				tmp29 = Max;
			}
			else{
				HX_STACK_LINE(490)
				tmp29 = lowerBound;
			}
		}
		HX_STACK_LINE(490)
		int tmp30 = ::Std_obj::_int(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(490)
		selectionWidth = tmp30;
		HX_STACK_LINE(491)
		Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(491)
		{
			HX_STACK_LINE(491)
			int tmp32 = this->heightInTiles;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(491)
			Dynamic Max = tmp32;		HX_STACK_VAR(Max,"Max");
			HX_STACK_LINE(491)
			bool tmp33 = true;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(491)
			bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(491)
			if ((tmp33)){
				HX_STACK_LINE(491)
				tmp34 = (selectionHeight < (int)0);
			}
			else{
				HX_STACK_LINE(491)
				tmp34 = false;
			}
			HX_STACK_LINE(491)
			Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(491)
			if ((tmp34)){
				HX_STACK_LINE(491)
				tmp35 = (int)0;
			}
			else{
				HX_STACK_LINE(491)
				tmp35 = selectionHeight;
			}
			HX_STACK_LINE(491)
			Float lowerBound = tmp35;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(491)
			bool tmp36 = (Max != null());		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(491)
			bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(491)
			if ((tmp36)){
				HX_STACK_LINE(491)
				tmp37 = (lowerBound > Max);
			}
			else{
				HX_STACK_LINE(491)
				tmp37 = false;
			}
			HX_STACK_LINE(491)
			if ((tmp37)){
				HX_STACK_LINE(491)
				tmp31 = Max;
			}
			else{
				HX_STACK_LINE(491)
				tmp31 = lowerBound;
			}
		}
		HX_STACK_LINE(491)
		int tmp32 = ::Std_obj::_int(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(491)
		selectionHeight = tmp32;
		HX_STACK_LINE(494)
		int tmp33 = selectionY;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(494)
		int tmp34 = this->widthInTiles;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(494)
		int tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(494)
		int rowStart = tmp35;		HX_STACK_VAR(rowStart,"rowStart");
		HX_STACK_LINE(495)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(496)
		::flixel::tile::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(497)
		bool overlapFound;		HX_STACK_VAR(overlapFound,"overlapFound");
		HX_STACK_LINE(498)
		Float tmp36 = xPos;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(498)
		::flixel::math::FlxPoint tmp37 = this->last;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(498)
		Float tmp38 = tmp37->x;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(498)
		Float tmp39 = (tmp36 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(498)
		Float deltaX = tmp39;		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(499)
		Float tmp40 = yPos;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(499)
		::flixel::math::FlxPoint tmp41 = this->last;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(499)
		Float tmp42 = tmp41->y;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(499)
		Float tmp43 = (tmp40 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(499)
		Float deltaY = tmp43;		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(501)
		{
			HX_STACK_LINE(501)
			int _g = selectionY;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(501)
			while((true)){
				HX_STACK_LINE(501)
				bool tmp44 = (_g < selectionHeight);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(501)
				bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(501)
				if ((tmp45)){
					HX_STACK_LINE(501)
					break;
				}
				HX_STACK_LINE(501)
				int tmp46 = (_g)++;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(501)
				int row = tmp46;		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(503)
				column = selectionX;
				HX_STACK_LINE(505)
				while((true)){
					HX_STACK_LINE(505)
					bool tmp47 = (column < selectionWidth);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(505)
					bool tmp48 = !(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(505)
					if ((tmp48)){
						HX_STACK_LINE(505)
						break;
					}
					HX_STACK_LINE(507)
					int tmp49 = (rowStart + column);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(507)
					int index = tmp49;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(508)
					bool tmp50 = (index < (int)0);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(508)
					bool tmp51 = !(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(508)
					bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(508)
					if ((tmp51)){
						HX_STACK_LINE(508)
						int tmp53 = index;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(508)
						int tmp54 = this->_data->length;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(508)
						int tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(508)
						int tmp56 = (tmp55 - (int)1);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(508)
						int tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(508)
						tmp52 = (tmp53 > tmp57);
					}
					else{
						HX_STACK_LINE(508)
						tmp52 = true;
					}
					HX_STACK_LINE(508)
					if ((tmp52)){
						HX_STACK_LINE(510)
						(column)++;
						HX_STACK_LINE(511)
						continue;
					}
					HX_STACK_LINE(514)
					int tmp53 = this->_data->__get(index);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(514)
					int dataIndex = tmp53;		HX_STACK_VAR(dataIndex,"dataIndex");
					HX_STACK_LINE(515)
					bool tmp54 = (dataIndex < (int)0);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(515)
					if ((tmp54)){
						HX_STACK_LINE(517)
						(column)++;
						HX_STACK_LINE(518)
						continue;
					}
					HX_STACK_LINE(521)
					::flixel::tile::FlxTile tmp55 = this->_tileObjects->__GetItem(dataIndex);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(521)
					tile = tmp55;
					HX_STACK_LINE(522)
					Float tmp56 = this->_scaledTileWidth;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(522)
					tile->set_width(tmp56);
					HX_STACK_LINE(523)
					Float tmp57 = this->_scaledTileHeight;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(523)
					tile->set_height(tmp57);
					HX_STACK_LINE(524)
					Float tmp58 = xPos;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(524)
					int tmp59 = column;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(524)
					Float tmp60 = tile->get_width();		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(524)
					Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(524)
					Float tmp62 = (tmp58 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(524)
					tile->set_x(tmp62);
					HX_STACK_LINE(525)
					Float tmp63 = yPos;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(525)
					int tmp64 = row;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(525)
					Float tmp65 = tile->get_height();		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(525)
					Float tmp66 = (tmp64 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(525)
					Float tmp67 = (tmp63 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(525)
					tile->set_y(tmp67);
					HX_STACK_LINE(526)
					Float tmp68 = (tile->x - deltaX);		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(526)
					tile->last->set_x(tmp68);
					HX_STACK_LINE(527)
					Float tmp69 = (tile->y - deltaY);		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(527)
					tile->last->set_y(tmp69);
					HX_STACK_LINE(530)
					Float tmp70 = Object->x;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(530)
					Float tmp71 = Object->get_width();		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(530)
					Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(530)
					Float tmp73 = tile->x;		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(530)
					bool tmp74 = (tmp72 > tmp73);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(530)
					bool tmp75 = tmp74;		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(530)
					bool tmp76;		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(530)
					if ((tmp75)){
						HX_STACK_LINE(530)
						Float tmp77 = Object->x;		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(530)
						Float tmp78 = tile->x;		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(530)
						Float tmp79 = tile->get_width();		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(530)
						Float tmp80 = tmp79;		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(530)
						Float tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(530)
						Float tmp82 = (tmp78 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(530)
						Float tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(530)
						Float tmp84 = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(530)
						tmp76 = (tmp77 < tmp84);
					}
					else{
						HX_STACK_LINE(530)
						tmp76 = false;
					}
					HX_STACK_LINE(530)
					bool tmp77 = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(530)
					bool tmp78;		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(530)
					if ((tmp77)){
						HX_STACK_LINE(531)
						Float tmp79 = Object->y;		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(531)
						Float tmp80 = Object->get_height();		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(531)
						Float tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(531)
						Float tmp82 = tmp81;		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(531)
						Float tmp83 = (tmp79 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(531)
						Float tmp84 = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(531)
						Float tmp85 = tmp84;		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(531)
						Float tmp86 = tile->y;		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(531)
						tmp78 = (tmp85 > tmp86);
					}
					else{
						HX_STACK_LINE(530)
						tmp78 = false;
					}
					HX_STACK_LINE(530)
					bool tmp79;		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(530)
					if ((tmp78)){
						HX_STACK_LINE(531)
						Float tmp80 = Object->y;		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(531)
						Float tmp81 = tile->y;		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(531)
						Float tmp82 = tile->get_height();		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(531)
						Float tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(531)
						Float tmp84 = (tmp81 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(531)
						Float tmp85 = tmp84;		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(531)
						tmp79 = (tmp80 < tmp85);
					}
					else{
						HX_STACK_LINE(530)
						tmp79 = false;
					}
					HX_STACK_LINE(529)
					overlapFound = tmp79;
					HX_STACK_LINE(533)
					bool tmp80 = (tile->allowCollisions != (int)0);		HX_STACK_VAR(tmp80,"tmp80");
					HX_STACK_LINE(533)
					if ((tmp80)){
						HX_STACK_LINE(535)
						bool tmp81 = (Callback != null());		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(535)
						if ((tmp81)){
							HX_STACK_LINE(537)
							bool tmp82 = FlipCallbackParams;		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(537)
							if ((tmp82)){
								HX_STACK_LINE(539)
								::flixel::FlxObject tmp83 = Object;		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(539)
								::flixel::tile::FlxTile tmp84 = tile;		HX_STACK_VAR(tmp84,"tmp84");
								HX_STACK_LINE(539)
								bool tmp85 = Callback(tmp83,tmp84).Cast< bool >();		HX_STACK_VAR(tmp85,"tmp85");
								HX_STACK_LINE(539)
								overlapFound = tmp85;
							}
							else{
								HX_STACK_LINE(543)
								::flixel::tile::FlxTile tmp83 = tile;		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(543)
								::flixel::FlxObject tmp84 = Object;		HX_STACK_VAR(tmp84,"tmp84");
								HX_STACK_LINE(543)
								bool tmp85 = Callback(tmp83,tmp84).Cast< bool >();		HX_STACK_VAR(tmp85,"tmp85");
								HX_STACK_LINE(543)
								overlapFound = tmp85;
							}
						}
					}
					HX_STACK_LINE(548)
					bool tmp81 = overlapFound;		HX_STACK_VAR(tmp81,"tmp81");
					HX_STACK_LINE(548)
					if ((tmp81)){
						HX_STACK_LINE(550)
						bool tmp82 = (tile->callbackFunction != null());		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(550)
						bool tmp83;		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(550)
						if ((tmp82)){
							HX_STACK_LINE(550)
							bool tmp84 = (tile->filter == null());		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(550)
							bool tmp85 = tmp84;		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(550)
							bool tmp86 = tmp85;		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(550)
							bool tmp87 = !(tmp86);		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(550)
							bool tmp88 = tmp87;		HX_STACK_VAR(tmp88,"tmp88");
							HX_STACK_LINE(550)
							bool tmp89 = tmp88;		HX_STACK_VAR(tmp89,"tmp89");
							HX_STACK_LINE(550)
							if ((tmp89)){
								HX_STACK_LINE(550)
								::flixel::FlxObject tmp90 = Object;		HX_STACK_VAR(tmp90,"tmp90");
								HX_STACK_LINE(550)
								::hx::Class tmp91 = tile->filter;		HX_STACK_VAR(tmp91,"tmp91");
								HX_STACK_LINE(550)
								::flixel::FlxObject tmp92 = tmp90;		HX_STACK_VAR(tmp92,"tmp92");
								HX_STACK_LINE(550)
								::hx::Class tmp93 = tmp91;		HX_STACK_VAR(tmp93,"tmp93");
								HX_STACK_LINE(550)
								::flixel::FlxObject tmp94 = tmp92;		HX_STACK_VAR(tmp94,"tmp94");
								HX_STACK_LINE(550)
								::hx::Class tmp95 = tmp93;		HX_STACK_VAR(tmp95,"tmp95");
								HX_STACK_LINE(550)
								tmp83 = ::Std_obj::is(tmp94,tmp95);
							}
							else{
								HX_STACK_LINE(550)
								tmp83 = true;
							}
						}
						else{
							HX_STACK_LINE(550)
							tmp83 = false;
						}
						HX_STACK_LINE(550)
						if ((tmp83)){
							HX_STACK_LINE(552)
							int tmp84 = (rowStart + column);		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(552)
							tile->mapIndex = tmp84;
							HX_STACK_LINE(553)
							::flixel::tile::FlxTile tmp85 = tile;		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(553)
							::flixel::FlxObject tmp86 = Object;		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(553)
							tile->callbackFunction(tmp85,tmp86);
						}
						HX_STACK_LINE(556)
						bool tmp84 = (tile->allowCollisions != (int)0);		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(556)
						if ((tmp84)){
							HX_STACK_LINE(557)
							results = true;
						}
					}
					HX_STACK_LINE(560)
					(column)++;
				}
				HX_STACK_LINE(563)
				int tmp47 = this->widthInTiles;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(563)
				hx::AddEq(rowStart,tmp47);
			}
		}
		HX_STACK_LINE(566)
		bool tmp44 = results;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(566)
		return tmp44;
	}
}


int FlxTilemap_obj::getTileIndexByCoords( ::flixel::math::FlxPoint Coord){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","getTileIndexByCoords",0xb5ce22c7,"flixel.tile.FlxTilemap.getTileIndexByCoords","flixel/tile/FlxTilemap.hx",570,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Coord,"Coord")
	HX_STACK_LINE(571)
	Float tmp = Coord->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(571)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(571)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(571)
	Float tmp3 = this->_scaledTileHeight;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(571)
	Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(571)
	int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(571)
	int tmp6 = this->widthInTiles;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(571)
	int tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(571)
	Float tmp8 = Coord->x;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(571)
	Float tmp9 = this->x;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(571)
	Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(571)
	Float tmp11 = this->_scaledTileWidth;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(571)
	Float tmp12 = (Float(tmp10) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(571)
	int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(571)
	int tmp14 = (tmp7 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(571)
	int result = tmp14;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(572)
	{
		HX_STACK_LINE(572)
		bool tmp15 = Coord->_weak;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(572)
		if ((tmp15)){
			HX_STACK_LINE(572)
			Coord->put();
		}
	}
	HX_STACK_LINE(573)
	int tmp15 = result;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(573)
	return tmp15;
}


::flixel::math::FlxPoint FlxTilemap_obj::getTileCoordsByIndex( int Index,hx::Null< bool >  __o_Midpoint){
bool Midpoint = __o_Midpoint.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","getTileCoordsByIndex",0xe0680d7d,"flixel.tile.FlxTilemap.getTileCoordsByIndex","flixel/tile/FlxTilemap.hx",577,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_ARG(Midpoint,"Midpoint")
{
		HX_STACK_LINE(578)
		::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(578)
		{
			HX_STACK_LINE(578)
			Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(578)
			int tmp2 = Index;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(578)
			int tmp3 = this->widthInTiles;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(578)
			Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(578)
			int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(578)
			Float tmp6 = this->_scaledTileHeight;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(578)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(578)
			Float tmp8 = (tmp1 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(578)
			Float Y = tmp8;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(578)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp9 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(578)
			::flixel::math::FlxPoint tmp10 = tmp9->get();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(578)
			Float tmp11 = this->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(578)
			int tmp12 = Index;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(578)
			int tmp13 = this->widthInTiles;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(578)
			int tmp14 = hx::Mod(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(578)
			Float tmp15 = this->_scaledTileWidth;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(578)
			Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(578)
			Float tmp17 = (tmp11 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(578)
			Float tmp18 = Y;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(578)
			::flixel::math::FlxPoint tmp19 = tmp10->set(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(578)
			::flixel::math::FlxPoint point = tmp19;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(578)
			point->_inPool = false;
			HX_STACK_LINE(578)
			tmp = point;
		}
		HX_STACK_LINE(578)
		::flixel::math::FlxPoint point = tmp;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(579)
		bool tmp1 = Midpoint;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(579)
		if ((tmp1)){
			HX_STACK_LINE(581)
			{
				HX_STACK_LINE(581)
				::flixel::math::FlxPoint _g = point;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(581)
				Float tmp2 = _g->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(581)
				Float tmp3 = this->_scaledTileWidth;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(581)
				Float tmp4 = (tmp3 * ((Float)0.5));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(581)
				Float tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(581)
				_g->set_x(tmp5);
			}
			HX_STACK_LINE(582)
			{
				HX_STACK_LINE(582)
				::flixel::math::FlxPoint _g = point;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(582)
				Float tmp2 = _g->y;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(582)
				Float tmp3 = this->_scaledTileHeight;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(582)
				Float tmp4 = (tmp3 * ((Float)0.5));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(582)
				Float tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(582)
				_g->set_y(tmp5);
			}
		}
		HX_STACK_LINE(584)
		::flixel::math::FlxPoint tmp2 = point;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(584)
		return tmp2;
	}
}


Array< ::Dynamic > FlxTilemap_obj::getTileCoords( int Index,hx::Null< bool >  __o_Midpoint){
bool Midpoint = __o_Midpoint.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","getTileCoords",0x02899bde,"flixel.tile.FlxTilemap.getTileCoords","flixel/tile/FlxTilemap.hx",595,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_ARG(Midpoint,"Midpoint")
{
		HX_STACK_LINE(596)
		Array< ::Dynamic > array = null();		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(598)
		::flixel::math::FlxPoint point;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(599)
		int tmp = this->widthInTiles;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(599)
		int tmp1 = this->heightInTiles;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(599)
		int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(599)
		int l = tmp2;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(601)
		{
			HX_STACK_LINE(601)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(601)
			while((true)){
				HX_STACK_LINE(601)
				bool tmp3 = (_g < l);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(601)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(601)
				if ((tmp4)){
					HX_STACK_LINE(601)
					break;
				}
				HX_STACK_LINE(601)
				int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(601)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(603)
				int tmp6 = this->_data->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(603)
				int tmp7 = Index;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(603)
				bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(603)
				if ((tmp8)){
					HX_STACK_LINE(605)
					::flixel::math::FlxPoint tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(605)
					{
						HX_STACK_LINE(605)
						Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(605)
						int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(605)
						int tmp12 = this->widthInTiles;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(605)
						Float tmp13 = (Float(tmp11) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(605)
						int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(605)
						Float tmp15 = this->_scaledTileHeight;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(605)
						Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(605)
						Float tmp17 = (tmp10 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(605)
						Float Y = tmp17;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(605)
						::flixel::util::FlxPool_flixel_math_FlxPoint tmp18 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(605)
						::flixel::math::FlxPoint tmp19 = tmp18->get();		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(605)
						Float tmp20 = this->x;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(605)
						int tmp21 = i;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(605)
						int tmp22 = this->widthInTiles;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(605)
						int tmp23 = hx::Mod(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(605)
						Float tmp24 = this->_scaledTileWidth;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(605)
						Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(605)
						Float tmp26 = (tmp20 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(605)
						Float tmp27 = Y;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(605)
						::flixel::math::FlxPoint tmp28 = tmp19->set(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(605)
						::flixel::math::FlxPoint point1 = tmp28;		HX_STACK_VAR(point1,"point1");
						HX_STACK_LINE(605)
						point1->_inPool = false;
						HX_STACK_LINE(605)
						tmp9 = point1;
					}
					HX_STACK_LINE(605)
					point = tmp9;
					HX_STACK_LINE(607)
					bool tmp10 = Midpoint;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(607)
					if ((tmp10)){
						HX_STACK_LINE(609)
						{
							HX_STACK_LINE(609)
							::flixel::math::FlxPoint _g1 = point;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(609)
							Float tmp11 = _g1->x;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(609)
							Float tmp12 = this->_scaledTileWidth;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(609)
							Float tmp13 = (tmp12 * ((Float)0.5));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(609)
							Float tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(609)
							_g1->set_x(tmp14);
						}
						HX_STACK_LINE(610)
						{
							HX_STACK_LINE(610)
							::flixel::math::FlxPoint _g1 = point;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(610)
							Float tmp11 = _g1->y;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(610)
							Float tmp12 = this->_scaledTileHeight;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(610)
							Float tmp13 = (tmp12 * ((Float)0.5));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(610)
							Float tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(610)
							_g1->set_y(tmp14);
						}
					}
					HX_STACK_LINE(613)
					bool tmp11 = (array == null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(613)
					if ((tmp11)){
						HX_STACK_LINE(615)
						array = Array_obj< ::Dynamic >::__new();
					}
					HX_STACK_LINE(617)
					::flixel::math::FlxPoint tmp12 = point;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(617)
					array->push(tmp12);
				}
			}
		}
		HX_STACK_LINE(621)
		return array;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,getTileCoords,return )

Void FlxTilemap_obj::follow( ::flixel::FlxCamera Camera,hx::Null< int >  __o_Border,hx::Null< bool >  __o_UpdateWorld){
int Border = __o_Border.Default(0);
bool UpdateWorld = __o_UpdateWorld.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","follow",0xe6a96c35,"flixel.tile.FlxTilemap.follow","flixel/tile/FlxTilemap.hx",632,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_ARG(Border,"Border")
	HX_STACK_ARG(UpdateWorld,"UpdateWorld")
{
		HX_STACK_LINE(633)
		bool tmp = (Camera == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(633)
		if ((tmp)){
			HX_STACK_LINE(634)
			::flixel::FlxCamera tmp1 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(634)
			Camera = tmp1;
		}
		HX_STACK_LINE(636)
		Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(636)
		int tmp2 = Border;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(636)
		Float tmp3 = this->_scaledTileWidth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(636)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(636)
		Float tmp5 = (tmp1 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(636)
		Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(636)
		int tmp7 = Border;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(636)
		Float tmp8 = this->_scaledTileHeight;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(636)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(636)
		Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(636)
		Float tmp11 = this->get_width();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(636)
		int tmp12 = Border;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(636)
		Float tmp13 = this->_scaledTileWidth;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(636)
		Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(636)
		Float tmp15 = (tmp14 * (int)2);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(636)
		Float tmp16 = (tmp11 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(636)
		Float tmp17 = this->get_height();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(636)
		int tmp18 = Border;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(636)
		Float tmp19 = this->_scaledTileHeight;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(636)
		Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(636)
		Float tmp21 = (tmp20 * (int)2);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(636)
		Float tmp22 = (tmp17 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(636)
		bool tmp23 = UpdateWorld;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(636)
		Camera->setScrollBoundsRect(tmp5,tmp10,tmp16,tmp22,tmp23);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,follow,(void))

bool FlxTilemap_obj::ray( ::flixel::math::FlxPoint Start,::flixel::math::FlxPoint End,::flixel::math::FlxPoint Result,hx::Null< Float >  __o_Resolution){
Float Resolution = __o_Resolution.Default(1);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","ray",0xbe0558a6,"flixel.tile.FlxTilemap.ray","flixel/tile/FlxTilemap.hx",650,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Start,"Start")
	HX_STACK_ARG(End,"End")
	HX_STACK_ARG(Result,"Result")
	HX_STACK_ARG(Resolution,"Resolution")
{
		HX_STACK_LINE(651)
		Float tmp = this->_scaledTileWidth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(651)
		Float step = tmp;		HX_STACK_VAR(step,"step");
		HX_STACK_LINE(653)
		Float tmp1 = this->_scaledTileHeight;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(653)
		Float tmp2 = this->_scaledTileWidth;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(653)
		bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(653)
		if ((tmp3)){
			HX_STACK_LINE(654)
			Float tmp4 = this->_scaledTileHeight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(654)
			step = tmp4;
		}
		HX_STACK_LINE(656)
		hx::DivEq(step,Resolution);
		HX_STACK_LINE(657)
		Float tmp4 = (End->x - Start->x);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(657)
		Float deltaX = tmp4;		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(658)
		Float tmp5 = (End->y - Start->y);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(658)
		Float deltaY = tmp5;		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(659)
		Float tmp6 = (deltaX * deltaX);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(659)
		Float tmp7 = (deltaY * deltaY);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(659)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(659)
		Float tmp9 = ::Math_obj::sqrt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(659)
		Float distance = tmp9;		HX_STACK_VAR(distance,"distance");
		HX_STACK_LINE(660)
		Float tmp10 = (Float(distance) / Float(step));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(660)
		int tmp11 = ::Math_obj::ceil(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(660)
		int steps = tmp11;		HX_STACK_VAR(steps,"steps");
		HX_STACK_LINE(661)
		Float tmp12 = (Float(deltaX) / Float(steps));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(661)
		Float stepX = tmp12;		HX_STACK_VAR(stepX,"stepX");
		HX_STACK_LINE(662)
		Float tmp13 = (Float(deltaY) / Float(steps));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(662)
		Float stepY = tmp13;		HX_STACK_VAR(stepY,"stepY");
		HX_STACK_LINE(663)
		Float tmp14 = (Start->x - stepX);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(663)
		Float tmp15 = this->x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(663)
		Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(663)
		Float curX = tmp16;		HX_STACK_VAR(curX,"curX");
		HX_STACK_LINE(664)
		Float tmp17 = (Start->y - stepY);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(664)
		Float tmp18 = this->y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(664)
		Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(664)
		Float curY = tmp19;		HX_STACK_VAR(curY,"curY");
		HX_STACK_LINE(665)
		int tileX;		HX_STACK_VAR(tileX,"tileX");
		HX_STACK_LINE(666)
		int tileY;		HX_STACK_VAR(tileY,"tileY");
		HX_STACK_LINE(667)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(669)
		{
			HX_STACK_LINE(669)
			bool tmp20 = Start->_weak;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(669)
			if ((tmp20)){
				HX_STACK_LINE(669)
				Start->put();
			}
		}
		HX_STACK_LINE(670)
		{
			HX_STACK_LINE(670)
			bool tmp20 = End->_weak;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(670)
			if ((tmp20)){
				HX_STACK_LINE(670)
				End->put();
			}
		}
		HX_STACK_LINE(672)
		while((true)){
			HX_STACK_LINE(672)
			bool tmp20 = (i < steps);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(672)
			bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(672)
			if ((tmp21)){
				HX_STACK_LINE(672)
				break;
			}
			HX_STACK_LINE(674)
			hx::AddEq(curX,stepX);
			HX_STACK_LINE(675)
			hx::AddEq(curY,stepY);
			HX_STACK_LINE(677)
			bool tmp22 = (curX < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(677)
			bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(677)
			bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(677)
			bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(677)
			if ((tmp24)){
				HX_STACK_LINE(677)
				Float tmp26 = curX;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(677)
				Float tmp27 = this->get_width();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(677)
				Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(677)
				Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(677)
				tmp25 = (tmp26 > tmp29);
			}
			else{
				HX_STACK_LINE(677)
				tmp25 = true;
			}
			HX_STACK_LINE(677)
			bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(677)
			bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(677)
			bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(677)
			if ((tmp27)){
				HX_STACK_LINE(677)
				tmp28 = (curY < (int)0);
			}
			else{
				HX_STACK_LINE(677)
				tmp28 = true;
			}
			HX_STACK_LINE(677)
			bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(677)
			bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(677)
			if ((tmp29)){
				HX_STACK_LINE(677)
				Float tmp31 = curY;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(677)
				Float tmp32 = this->get_height();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(677)
				Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(677)
				tmp30 = (tmp31 > tmp33);
			}
			else{
				HX_STACK_LINE(677)
				tmp30 = true;
			}
			HX_STACK_LINE(677)
			if ((tmp30)){
				HX_STACK_LINE(679)
				(i)++;
				HX_STACK_LINE(680)
				continue;
			}
			HX_STACK_LINE(683)
			Float tmp31 = curX;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(683)
			Float tmp32 = this->_scaledTileWidth;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(683)
			Float tmp33 = (Float(tmp31) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(683)
			int tmp34 = ::Math_obj::floor(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(683)
			tileX = tmp34;
			HX_STACK_LINE(684)
			Float tmp35 = curY;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(684)
			Float tmp36 = this->_scaledTileHeight;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(684)
			Float tmp37 = (Float(tmp35) / Float(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(684)
			int tmp38 = ::Math_obj::floor(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(684)
			tileY = tmp38;
			HX_STACK_LINE(686)
			int tmp39 = tileY;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(686)
			int tmp40 = this->widthInTiles;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(686)
			int tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(686)
			int tmp42 = tileX;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(686)
			int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(686)
			int tmp44 = this->_data->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(686)
			::flixel::tile::FlxTile tmp45 = this->_tileObjects->__GetItem(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(686)
			int tmp46 = tmp45->allowCollisions;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(686)
			bool tmp47 = (tmp46 != (int)0);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(686)
			if ((tmp47)){
				HX_STACK_LINE(689)
				Float tmp48 = this->_scaledTileWidth;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(689)
				int tmp49 = ::Std_obj::_int(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(689)
				hx::MultEq(tileX,tmp49);
				HX_STACK_LINE(690)
				Float tmp50 = this->_scaledTileHeight;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(690)
				int tmp51 = ::Std_obj::_int(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(690)
				hx::MultEq(tileY,tmp51);
				HX_STACK_LINE(691)
				Float rx = (int)0;		HX_STACK_VAR(rx,"rx");
				HX_STACK_LINE(692)
				Float ry = (int)0;		HX_STACK_VAR(ry,"ry");
				HX_STACK_LINE(693)
				Float q;		HX_STACK_VAR(q,"q");
				HX_STACK_LINE(694)
				Float tmp52 = (curX - stepX);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(694)
				Float lx = tmp52;		HX_STACK_VAR(lx,"lx");
				HX_STACK_LINE(695)
				Float tmp53 = (curY - stepY);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(695)
				Float ly = tmp53;		HX_STACK_VAR(ly,"ly");
				HX_STACK_LINE(698)
				q = tileX;
				HX_STACK_LINE(700)
				bool tmp54 = (deltaX < (int)0);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(700)
				if ((tmp54)){
					HX_STACK_LINE(702)
					Float tmp55 = this->_scaledTileWidth;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(702)
					hx::AddEq(q,tmp55);
				}
				HX_STACK_LINE(705)
				rx = q;
				HX_STACK_LINE(706)
				Float tmp55 = ly;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(706)
				Float tmp56 = stepY;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(706)
				Float tmp57 = (q - lx);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(706)
				Float tmp58 = stepX;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(706)
				Float tmp59 = (Float(tmp57) / Float(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(706)
				Float tmp60 = (tmp56 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(706)
				Float tmp61 = (tmp55 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(706)
				ry = tmp61;
				HX_STACK_LINE(708)
				bool tmp62 = (ry >= tileY);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(708)
				bool tmp63;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(708)
				if ((tmp62)){
					HX_STACK_LINE(708)
					Float tmp64 = ry;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(708)
					int tmp65 = tileY;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(708)
					Float tmp66 = this->_scaledTileHeight;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(708)
					Float tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(708)
					Float tmp68 = (tmp65 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(708)
					Float tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(708)
					tmp63 = (tmp64 <= tmp69);
				}
				else{
					HX_STACK_LINE(708)
					tmp63 = false;
				}
				HX_STACK_LINE(708)
				if ((tmp63)){
					HX_STACK_LINE(710)
					bool tmp64 = (Result == null());		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(710)
					if ((tmp64)){
						HX_STACK_LINE(712)
						::flixel::math::FlxPoint tmp65;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(712)
						{
							HX_STACK_LINE(712)
							Float X = (int)0;		HX_STACK_VAR(X,"X");
							HX_STACK_LINE(712)
							Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
							HX_STACK_LINE(712)
							::flixel::util::FlxPool_flixel_math_FlxPoint tmp66 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(712)
							::flixel::math::FlxPoint tmp67 = tmp66->get();		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(712)
							Float tmp68 = X;		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(712)
							Float tmp69 = Y;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(712)
							::flixel::math::FlxPoint tmp70 = tmp67->set(tmp68,tmp69);		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(712)
							::flixel::math::FlxPoint point = tmp70;		HX_STACK_VAR(point,"point");
							HX_STACK_LINE(712)
							point->_inPool = false;
							HX_STACK_LINE(712)
							tmp65 = point;
						}
						HX_STACK_LINE(712)
						Result = tmp65;
					}
					HX_STACK_LINE(715)
					Float tmp65 = rx;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(715)
					Float tmp66 = ry;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(715)
					Result->set(tmp65,tmp66);
					HX_STACK_LINE(716)
					return false;
				}
				HX_STACK_LINE(720)
				q = tileY;
				HX_STACK_LINE(722)
				bool tmp64 = (deltaY < (int)0);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(722)
				if ((tmp64)){
					HX_STACK_LINE(724)
					Float tmp65 = this->_scaledTileHeight;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(724)
					hx::AddEq(q,tmp65);
				}
				HX_STACK_LINE(727)
				Float tmp65 = lx;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(727)
				Float tmp66 = stepX;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(727)
				Float tmp67 = (q - ly);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(727)
				Float tmp68 = stepY;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(727)
				Float tmp69 = (Float(tmp67) / Float(tmp68));		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(727)
				Float tmp70 = (tmp66 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(727)
				Float tmp71 = (tmp65 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(727)
				rx = tmp71;
				HX_STACK_LINE(728)
				ry = q;
				HX_STACK_LINE(730)
				bool tmp72 = (rx >= tileX);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(730)
				bool tmp73;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(730)
				if ((tmp72)){
					HX_STACK_LINE(730)
					Float tmp74 = rx;		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(730)
					int tmp75 = tileX;		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(730)
					Float tmp76 = this->_scaledTileWidth;		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(730)
					Float tmp77 = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(730)
					Float tmp78 = (tmp75 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(730)
					Float tmp79 = tmp78;		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(730)
					tmp73 = (tmp74 <= tmp79);
				}
				else{
					HX_STACK_LINE(730)
					tmp73 = false;
				}
				HX_STACK_LINE(730)
				if ((tmp73)){
					HX_STACK_LINE(732)
					bool tmp74 = (Result == null());		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(732)
					if ((tmp74)){
						HX_STACK_LINE(734)
						::flixel::math::FlxPoint tmp75;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(734)
						{
							HX_STACK_LINE(734)
							Float X = (int)0;		HX_STACK_VAR(X,"X");
							HX_STACK_LINE(734)
							Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
							HX_STACK_LINE(734)
							::flixel::util::FlxPool_flixel_math_FlxPoint tmp76 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(734)
							::flixel::math::FlxPoint tmp77 = tmp76->get();		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(734)
							Float tmp78 = X;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(734)
							Float tmp79 = Y;		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(734)
							::flixel::math::FlxPoint tmp80 = tmp77->set(tmp78,tmp79);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(734)
							::flixel::math::FlxPoint point = tmp80;		HX_STACK_VAR(point,"point");
							HX_STACK_LINE(734)
							point->_inPool = false;
							HX_STACK_LINE(734)
							tmp75 = point;
						}
						HX_STACK_LINE(734)
						Result = tmp75;
					}
					HX_STACK_LINE(737)
					Float tmp75 = rx;		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(737)
					Float tmp76 = ry;		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(737)
					Result->set(tmp75,tmp76);
					HX_STACK_LINE(738)
					return false;
				}
				HX_STACK_LINE(741)
				return true;
			}
			HX_STACK_LINE(743)
			(i)++;
		}
		HX_STACK_LINE(746)
		return true;
	}
}


::flixel::FlxSprite FlxTilemap_obj::tileToSprite( int X,int Y,hx::Null< int >  __o_NewTile,Dynamic SpriteFactory){
int NewTile = __o_NewTile.Default(0);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","tileToSprite",0xe7482ef2,"flixel.tile.FlxTilemap.tileToSprite","flixel/tile/FlxTilemap.hx",760,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(NewTile,"NewTile")
	HX_STACK_ARG(SpriteFactory,"SpriteFactory")
{
		HX_STACK_LINE(761)
		bool tmp = (SpriteFactory == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(761)
		if ((tmp)){
			HX_STACK_LINE(762)
			Dynamic tmp1 = this->defaultTileToSprite_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(762)
			SpriteFactory = tmp1;
		}
		HX_STACK_LINE(764)
		int tmp1 = X;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(764)
		int tmp2 = Y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(764)
		int tmp3 = this->widthInTiles;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(764)
		int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(764)
		int tmp5 = (tmp1 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(764)
		int rowIndex = tmp5;		HX_STACK_VAR(rowIndex,"rowIndex");
		HX_STACK_LINE(765)
		int tmp6 = this->_data->__get(rowIndex);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(765)
		::flixel::tile::FlxTile tmp7 = this->_tileObjects->__GetItem(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(765)
		::flixel::tile::FlxTile tile = tmp7;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(766)
		::flixel::graphics::frames::FlxImageFrame image = null();		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(768)
		bool tmp8 = (tile != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(768)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(768)
		if ((tmp8)){
			HX_STACK_LINE(768)
			tmp9 = tile->visible;
		}
		else{
			HX_STACK_LINE(768)
			tmp9 = false;
		}
		HX_STACK_LINE(768)
		if ((tmp9)){
			HX_STACK_LINE(769)
			::flixel::graphics::frames::FlxFrame tmp10 = tile->frame;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(769)
			::flixel::graphics::frames::FlxImageFrame tmp11 = ::flixel::graphics::frames::FlxImageFrame_obj::fromFrame(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(769)
			image = tmp11;
		}
		else{
			HX_STACK_LINE(771)
			::flixel::graphics::FlxGraphic tmp10 = this->graphic;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(771)
			::flixel::math::FlxRect tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(771)
			{
				HX_STACK_LINE(771)
				::flixel::math::FlxRect tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(771)
				{
					HX_STACK_LINE(771)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp13 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(771)
					::flixel::math::FlxRect tmp14 = tmp13->get();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(771)
					::flixel::math::FlxRect _this = tmp14;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(771)
					_this->x = (int)0;
					HX_STACK_LINE(771)
					_this->y = (int)0;
					HX_STACK_LINE(771)
					int tmp15 = this->_tileWidth;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(771)
					_this->width = tmp15;
					HX_STACK_LINE(771)
					int tmp16 = this->_tileHeight;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(771)
					_this->height = tmp16;
					HX_STACK_LINE(771)
					tmp12 = _this;
				}
				HX_STACK_LINE(771)
				::flixel::math::FlxRect rect = tmp12;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(771)
				rect->_inPool = false;
				HX_STACK_LINE(771)
				tmp11 = rect;
			}
			HX_STACK_LINE(771)
			::flixel::graphics::frames::FlxImageFrame tmp12 = ::flixel::graphics::frames::FlxImageFrame_obj::fromEmptyFrame(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(771)
			image = tmp12;
		}
		HX_STACK_LINE(773)
		int tmp10 = X;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(773)
		int tmp11 = this->_tileWidth;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(773)
		int tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(773)
		::flixel::math::FlxPoint tmp13 = this->scale;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(773)
		Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(773)
		Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(773)
		Float tmp16 = this->x;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(773)
		Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(773)
		Float tileX = tmp17;		HX_STACK_VAR(tileX,"tileX");
		HX_STACK_LINE(774)
		int tmp18 = Y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(774)
		int tmp19 = this->_tileHeight;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(774)
		int tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(774)
		::flixel::math::FlxPoint tmp21 = this->scale;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(774)
		Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(774)
		Float tmp23 = (tmp20 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(774)
		Float tmp24 = this->y;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(774)
		Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(774)
		Float tileY = tmp25;		HX_STACK_VAR(tileY,"tileY");
		HX_STACK_LINE(775)
		::flixel::graphics::frames::FlxImageFrame tmp26 = image;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(775)
		Float tmp27 = tileX;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(775)
		Float tmp28 = tileY;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(775)
		::flixel::math::FlxPoint tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(775)
		{
			HX_STACK_LINE(775)
			::flixel::math::FlxPoint tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(775)
			{
				HX_STACK_LINE(775)
				Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
				HX_STACK_LINE(775)
				Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
				HX_STACK_LINE(775)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp31 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(775)
				::flixel::math::FlxPoint tmp32 = tmp31->get();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(775)
				Float tmp33 = X1;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(775)
				Float tmp34 = Y1;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(775)
				::flixel::math::FlxPoint tmp35 = tmp32->set(tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(775)
				::flixel::math::FlxPoint point = tmp35;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(775)
				point->_inPool = false;
				HX_STACK_LINE(775)
				tmp30 = point;
			}
			HX_STACK_LINE(775)
			::flixel::math::FlxPoint _this = tmp30;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(775)
			::flixel::math::FlxPoint tmp31 = this->scale;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(775)
			::flixel::math::FlxPoint point = tmp31;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(775)
			Float tmp32 = point->x;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(775)
			_this->set_x(tmp32);
			HX_STACK_LINE(775)
			Float tmp33 = point->y;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(775)
			_this->set_y(tmp33);
			HX_STACK_LINE(775)
			{
				HX_STACK_LINE(775)
				bool tmp34 = point->_weak;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(775)
				if ((tmp34)){
					HX_STACK_LINE(775)
					point->put();
				}
			}
			HX_STACK_LINE(775)
			tmp29 = _this;
		}
		HX_STACK_LINE(775)
		Float tmp30 = this->alpha;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(775)
		::openfl::_legacy::display::BlendMode tmp31 = this->blend;		HX_STACK_VAR(tmp31,"tmp31");
		struct _Function_1_1{
			inline static Dynamic Block( Float &tmp28,::flixel::graphics::frames::FlxImageFrame &tmp26,::openfl::_legacy::display::BlendMode &tmp31,Float &tmp27,::flixel::math::FlxPoint &tmp29,Float &tmp30){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxTilemap.hx",775,0x448feb74)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("graphic","\xa8","\x5a","\x07","\x74") , tmp26,false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp27,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp28,false);
					__result->Add(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78") , tmp29,false);
					__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , tmp30,false);
					__result->Add(HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4") , tmp31,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(775)
		Dynamic tmp32 = _Function_1_1::Block(tmp28,tmp26,tmp31,tmp27,tmp29,tmp30);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(775)
		::flixel::FlxSprite tmp33 = SpriteFactory(tmp32).Cast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(775)
		::flixel::FlxSprite tileSprite = tmp33;		HX_STACK_VAR(tileSprite,"tileSprite");
		HX_STACK_LINE(777)
		bool tmp34 = (NewTile >= (int)0);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(777)
		if ((tmp34)){
			HX_STACK_LINE(778)
			int tmp35 = X;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(778)
			int tmp36 = Y;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(778)
			int tmp37 = NewTile;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(778)
			this->setTile(tmp35,tmp36,tmp37,null());
		}
		HX_STACK_LINE(780)
		::flixel::FlxSprite tmp35 = tileSprite;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(780)
		return tmp35;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,tileToSprite,return )

Void FlxTilemap_obj::updateBuffers( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","updateBuffers",0xf5face26,"flixel.tile.FlxTilemap.updateBuffers","flixel/tile/FlxTilemap.hx",787,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(788)
		this->_buffers = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_buffers);
		HX_STACK_LINE(789)
		this->_buffers = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemap_obj,updateBuffers,(void))

Void FlxTilemap_obj::drawTilemap( ::flixel::tile::FlxTilemapBuffer Buffer,::flixel::FlxCamera Camera){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","drawTilemap",0x2b20d346,"flixel.tile.FlxTilemap.drawTilemap","flixel/tile/FlxTilemap.hx",799,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Buffer,"Buffer")
		HX_STACK_ARG(Camera,"Camera")
		HX_STACK_LINE(800)
		Float tmp = this->alpha;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(800)
		bool tmp1 = (tmp != (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(800)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(800)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(800)
		if ((tmp2)){
			HX_STACK_LINE(800)
			int tmp4 = this->color;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(800)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(800)
			tmp3 = (tmp5 != (int)16777215);
		}
		else{
			HX_STACK_LINE(800)
			tmp3 = true;
		}
		HX_STACK_LINE(800)
		bool isColored = tmp3;		HX_STACK_VAR(isColored,"isColored");
		HX_STACK_LINE(803)
		Float drawX = (int)0;		HX_STACK_VAR(drawX,"drawX");
		HX_STACK_LINE(804)
		Float drawY = (int)0;		HX_STACK_VAR(drawY,"drawY");
		HX_STACK_LINE(805)
		Float scaledWidth = (int)0;		HX_STACK_VAR(scaledWidth,"scaledWidth");
		HX_STACK_LINE(806)
		Float scaledHeight = (int)0;		HX_STACK_VAR(scaledHeight,"scaledHeight");
		HX_STACK_LINE(807)
		::flixel::graphics::tile::FlxDrawTilesItem drawItem = null();		HX_STACK_VAR(drawItem,"drawItem");
		HX_STACK_LINE(809)
		bool tmp4 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(809)
		if ((tmp4)){
			HX_STACK_LINE(811)
			Buffer->fill(null());
		}
		else{
			HX_STACK_LINE(815)
			{
				HX_STACK_LINE(815)
				::flixel::math::FlxPoint tmp5 = this->_point;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(815)
				::flixel::FlxCamera tmp6 = Camera;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(815)
				::flixel::math::FlxPoint tmp7 = this->getScreenPosition(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(815)
				::flixel::math::FlxPoint tmp8 = this->offset;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(815)
				::flixel::math::FlxPoint tmp9 = tmp7->subtractPoint(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(815)
				::flixel::math::FlxPoint _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(815)
				::openfl::_legacy::geom::Point tmp10 = this->_helperPoint;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(815)
				::openfl::_legacy::geom::Point FlashPoint = tmp10;		HX_STACK_VAR(FlashPoint,"FlashPoint");
				HX_STACK_LINE(815)
				bool tmp11 = (FlashPoint == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(815)
				if ((tmp11)){
					HX_STACK_LINE(815)
					::openfl::_legacy::geom::Point tmp12 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(815)
					FlashPoint = tmp12;
				}
				HX_STACK_LINE(815)
				FlashPoint->x = _this->x;
				HX_STACK_LINE(815)
				FlashPoint->y = _this->y;
				HX_STACK_LINE(815)
				FlashPoint;
			}
			HX_STACK_LINE(817)
			::flixel::FlxCamera tmp5 = Camera;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(817)
			bool tmp6 = this->isPixelPerfectRender(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(817)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(817)
			if ((tmp6)){
				HX_STACK_LINE(817)
				::openfl::_legacy::geom::Point tmp8 = this->_helperPoint;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(817)
				Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(817)
				tmp7 = ::Math_obj::floor(tmp9);
			}
			else{
				HX_STACK_LINE(817)
				::openfl::_legacy::geom::Point tmp8 = this->_helperPoint;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(817)
				tmp7 = tmp8->x;
			}
			HX_STACK_LINE(817)
			::openfl::_legacy::geom::Point tmp8 = this->_helperPoint;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(817)
			tmp8->x = tmp7;
			HX_STACK_LINE(818)
			::flixel::FlxCamera tmp9 = Camera;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(818)
			bool tmp10 = this->isPixelPerfectRender(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(818)
			Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(818)
			if ((tmp10)){
				HX_STACK_LINE(818)
				::openfl::_legacy::geom::Point tmp12 = this->_helperPoint;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(818)
				Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(818)
				tmp11 = ::Math_obj::floor(tmp13);
			}
			else{
				HX_STACK_LINE(818)
				::openfl::_legacy::geom::Point tmp12 = this->_helperPoint;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(818)
				tmp11 = tmp12->y;
			}
			HX_STACK_LINE(818)
			::openfl::_legacy::geom::Point tmp12 = this->_helperPoint;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(818)
			tmp12->y = tmp11;
			HX_STACK_LINE(820)
			Float tmp13 = this->_scaledTileWidth;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(820)
			scaledWidth = tmp13;
			HX_STACK_LINE(821)
			Float tmp14 = this->_scaledTileHeight;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(821)
			scaledHeight = tmp14;
			HX_STACK_LINE(823)
			::openfl::_legacy::geom::ColorTransform tmp15 = this->colorTransform;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(823)
			bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(823)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(823)
			if ((tmp16)){
				HX_STACK_LINE(823)
				::openfl::_legacy::geom::ColorTransform tmp18 = this->colorTransform;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(823)
				::openfl::_legacy::geom::ColorTransform tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(823)
				::openfl::_legacy::geom::ColorTransform tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(823)
				tmp17 = ::flixel::util::FlxColorTransformUtil_obj::hasRGBAOffsets(tmp20);
			}
			else{
				HX_STACK_LINE(823)
				tmp17 = false;
			}
			HX_STACK_LINE(823)
			bool hasColorOffsets = tmp17;		HX_STACK_VAR(hasColorOffsets,"hasColorOffsets");
			HX_STACK_LINE(824)
			::flixel::graphics::FlxGraphic tmp18 = this->graphic;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(824)
			bool tmp19 = isColored;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(824)
			bool tmp20 = hasColorOffsets;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(824)
			::openfl::_legacy::display::BlendMode tmp21 = this->blend;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(824)
			bool tmp22 = this->antialiasing;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(824)
			Dynamic tmp23 = this->shader;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(824)
			::flixel::graphics::tile::FlxDrawTilesItem tmp24 = Camera->startQuadBatch(tmp18,tmp19,tmp20,tmp21,tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(824)
			drawItem = tmp24;
		}
		HX_STACK_LINE(828)
		::flixel::math::FlxPoint tmp5 = this->_point;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(828)
		Float tmp6 = Camera->scroll->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(828)
		::flixel::math::FlxPoint tmp7 = this->scrollFactor;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(828)
		Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(828)
		Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(828)
		Float tmp10 = this->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(828)
		Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(828)
		::flixel::math::FlxPoint tmp12 = this->offset;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(828)
		Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(828)
		Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(828)
		tmp5->set_x(tmp14);
		HX_STACK_LINE(829)
		::flixel::math::FlxPoint tmp15 = this->_point;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(829)
		Float tmp16 = Camera->scroll->y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(829)
		::flixel::math::FlxPoint tmp17 = this->scrollFactor;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(829)
		Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(829)
		Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(829)
		Float tmp20 = this->y;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(829)
		Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(829)
		::flixel::math::FlxPoint tmp22 = this->offset;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(829)
		Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(829)
		Float tmp24 = (tmp21 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(829)
		tmp15->set_y(tmp24);
		HX_STACK_LINE(831)
		::flixel::math::FlxPoint tmp25 = this->_point;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(831)
		Float tmp26 = tmp25->x;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(831)
		Float tmp27 = this->_scaledTileWidth;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(831)
		Float tmp28 = (Float(tmp26) / Float(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(831)
		int tmp29 = ::Math_obj::floor(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(831)
		int screenXInTiles = tmp29;		HX_STACK_VAR(screenXInTiles,"screenXInTiles");
		HX_STACK_LINE(832)
		::flixel::math::FlxPoint tmp30 = this->_point;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(832)
		Float tmp31 = tmp30->y;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(832)
		Float tmp32 = this->_scaledTileHeight;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(832)
		Float tmp33 = (Float(tmp31) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(832)
		int tmp34 = ::Math_obj::floor(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(832)
		int screenYInTiles = tmp34;		HX_STACK_VAR(screenYInTiles,"screenYInTiles");
		HX_STACK_LINE(833)
		int screenRows = Buffer->rows;		HX_STACK_VAR(screenRows,"screenRows");
		HX_STACK_LINE(834)
		int screenColumns = Buffer->columns;		HX_STACK_VAR(screenColumns,"screenColumns");
		HX_STACK_LINE(837)
		Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(837)
		{
			HX_STACK_LINE(837)
			int tmp36 = this->widthInTiles;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(837)
			int tmp37 = screenColumns;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(837)
			int tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(837)
			Dynamic Max = tmp38;		HX_STACK_VAR(Max,"Max");
			HX_STACK_LINE(837)
			bool tmp39 = true;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(837)
			bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(837)
			if ((tmp39)){
				HX_STACK_LINE(837)
				tmp40 = (screenXInTiles < (int)0);
			}
			else{
				HX_STACK_LINE(837)
				tmp40 = false;
			}
			HX_STACK_LINE(837)
			Float tmp41;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(837)
			if ((tmp40)){
				HX_STACK_LINE(837)
				tmp41 = (int)0;
			}
			else{
				HX_STACK_LINE(837)
				tmp41 = screenXInTiles;
			}
			HX_STACK_LINE(837)
			Float lowerBound = tmp41;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(837)
			bool tmp42 = (Max != null());		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(837)
			bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(837)
			if ((tmp42)){
				HX_STACK_LINE(837)
				tmp43 = (lowerBound > Max);
			}
			else{
				HX_STACK_LINE(837)
				tmp43 = false;
			}
			HX_STACK_LINE(837)
			if ((tmp43)){
				HX_STACK_LINE(837)
				tmp35 = Max;
			}
			else{
				HX_STACK_LINE(837)
				tmp35 = lowerBound;
			}
		}
		HX_STACK_LINE(837)
		int tmp36 = ::Std_obj::_int(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(837)
		screenXInTiles = tmp36;
		HX_STACK_LINE(838)
		Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(838)
		{
			HX_STACK_LINE(838)
			int tmp38 = this->heightInTiles;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(838)
			int tmp39 = screenRows;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(838)
			int tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(838)
			Dynamic Max = tmp40;		HX_STACK_VAR(Max,"Max");
			HX_STACK_LINE(838)
			bool tmp41 = true;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(838)
			bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(838)
			if ((tmp41)){
				HX_STACK_LINE(838)
				tmp42 = (screenYInTiles < (int)0);
			}
			else{
				HX_STACK_LINE(838)
				tmp42 = false;
			}
			HX_STACK_LINE(838)
			Float tmp43;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(838)
			if ((tmp42)){
				HX_STACK_LINE(838)
				tmp43 = (int)0;
			}
			else{
				HX_STACK_LINE(838)
				tmp43 = screenYInTiles;
			}
			HX_STACK_LINE(838)
			Float lowerBound = tmp43;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(838)
			bool tmp44 = (Max != null());		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(838)
			bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(838)
			if ((tmp44)){
				HX_STACK_LINE(838)
				tmp45 = (lowerBound > Max);
			}
			else{
				HX_STACK_LINE(838)
				tmp45 = false;
			}
			HX_STACK_LINE(838)
			if ((tmp45)){
				HX_STACK_LINE(838)
				tmp37 = Max;
			}
			else{
				HX_STACK_LINE(838)
				tmp37 = lowerBound;
			}
		}
		HX_STACK_LINE(838)
		int tmp38 = ::Std_obj::_int(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(838)
		screenYInTiles = tmp38;
		HX_STACK_LINE(840)
		int tmp39 = screenYInTiles;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(840)
		int tmp40 = this->widthInTiles;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(840)
		int tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(840)
		int tmp42 = screenXInTiles;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(840)
		int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(840)
		int rowIndex = tmp43;		HX_STACK_VAR(rowIndex,"rowIndex");
		HX_STACK_LINE(841)
		::openfl::_legacy::geom::Point tmp44 = this->_flashPoint;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(841)
		tmp44->y = (int)0;
		HX_STACK_LINE(842)
		int columnIndex;		HX_STACK_VAR(columnIndex,"columnIndex");
		HX_STACK_LINE(843)
		::flixel::tile::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(844)
		::flixel::graphics::frames::FlxFrame frame;		HX_STACK_VAR(frame,"frame");
		HX_STACK_LINE(847)
		::openfl::_legacy::display::BitmapData debugTile;		HX_STACK_VAR(debugTile,"debugTile");
		HX_STACK_LINE(850)
		{
			HX_STACK_LINE(850)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(850)
			while((true)){
				HX_STACK_LINE(850)
				bool tmp45 = (_g < screenRows);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(850)
				bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(850)
				if ((tmp46)){
					HX_STACK_LINE(850)
					break;
				}
				HX_STACK_LINE(850)
				int tmp47 = (_g)++;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(850)
				int row = tmp47;		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(852)
				columnIndex = rowIndex;
				HX_STACK_LINE(853)
				::openfl::_legacy::geom::Point tmp48 = this->_flashPoint;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(853)
				tmp48->x = (int)0;
				HX_STACK_LINE(855)
				{
					HX_STACK_LINE(855)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(855)
					while((true)){
						HX_STACK_LINE(855)
						bool tmp49 = (_g1 < screenColumns);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(855)
						bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(855)
						if ((tmp50)){
							HX_STACK_LINE(855)
							break;
						}
						HX_STACK_LINE(855)
						int tmp51 = (_g1)++;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(855)
						int column = tmp51;		HX_STACK_VAR(column,"column");
						HX_STACK_LINE(857)
						int tmp52 = this->_data->__get(columnIndex);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(857)
						::flixel::tile::FlxTile tmp53 = this->_tileObjects->__GetItem(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(857)
						tile = tmp53;
						HX_STACK_LINE(859)
						bool tmp54 = (tile != null());		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(859)
						bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(859)
						bool tmp56;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(859)
						if ((tmp55)){
							HX_STACK_LINE(859)
							tmp56 = tile->visible;
						}
						else{
							HX_STACK_LINE(859)
							tmp56 = false;
						}
						HX_STACK_LINE(859)
						bool tmp57;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(859)
						if ((tmp56)){
							HX_STACK_LINE(859)
							int tmp58 = tile->frame->type;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(859)
							int tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(859)
							tmp57 = (tmp59 != (int)2);
						}
						else{
							HX_STACK_LINE(859)
							tmp57 = false;
						}
						HX_STACK_LINE(859)
						if ((tmp57)){
							HX_STACK_LINE(861)
							frame = tile->frame;
							HX_STACK_LINE(863)
							bool tmp58 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(863)
							if ((tmp58)){
								HX_STACK_LINE(865)
								::openfl::_legacy::display::BitmapData tmp59 = Buffer->pixels;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(865)
								::openfl::_legacy::geom::Point tmp60 = this->_flashPoint;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(865)
								frame->paint(tmp59,tmp60,true,null());
								HX_STACK_LINE(868)
								::flixel::_system::frontEnds::DebuggerFrontEnd tmp61 = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(868)
								bool tmp62 = tmp61->__Field(HX_HCSTRING("drawDebug","\xaf","\x87","\x2a","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(868)
								bool tmp63;		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(868)
								if ((tmp62)){
									HX_STACK_LINE(868)
									bool tmp64 = this->ignoreDrawDebug;		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(868)
									bool tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(868)
									bool tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(868)
									tmp63 = !(tmp66);
								}
								else{
									HX_STACK_LINE(868)
									tmp63 = false;
								}
								HX_STACK_LINE(868)
								if ((tmp63)){
									HX_STACK_LINE(870)
									bool tmp64 = (tile->allowCollisions <= (int)0);		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(870)
									if ((tmp64)){
										HX_STACK_LINE(873)
										::openfl::_legacy::display::BitmapData tmp65 = this->_debugTileNotSolid;		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(873)
										debugTile = tmp65;
									}
									else{
										HX_STACK_LINE(875)
										bool tmp65 = (tile->allowCollisions != (int)4369);		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(875)
										if ((tmp65)){
											HX_STACK_LINE(878)
											::openfl::_legacy::display::BitmapData tmp66 = this->_debugTilePartial;		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(878)
											debugTile = tmp66;
										}
										else{
											HX_STACK_LINE(883)
											::openfl::_legacy::display::BitmapData tmp66 = this->_debugTileSolid;		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(883)
											debugTile = tmp66;
										}
									}
									HX_STACK_LINE(886)
									{
										HX_STACK_LINE(886)
										::flixel::math::FlxPoint tmp65 = this->offset;		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(886)
										::flixel::math::FlxPoint _this = tmp65;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(886)
										::openfl::_legacy::geom::Point tmp66 = this->_flashPoint;		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(886)
										::openfl::_legacy::geom::Point FlashPoint = tmp66;		HX_STACK_VAR(FlashPoint,"FlashPoint");
										HX_STACK_LINE(886)
										hx::AddEq(FlashPoint->x,_this->x);
										HX_STACK_LINE(886)
										hx::AddEq(FlashPoint->y,_this->y);
										HX_STACK_LINE(886)
										FlashPoint;
									}
									HX_STACK_LINE(887)
									::openfl::_legacy::display::BitmapData tmp65 = debugTile;		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(887)
									::openfl::_legacy::geom::Rectangle tmp66 = this->_debugRect;		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(887)
									::openfl::_legacy::geom::Point tmp67 = this->_flashPoint;		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(887)
									Buffer->pixels->copyPixels(tmp65,tmp66,tmp67,null(),null(),true);
									HX_STACK_LINE(888)
									{
										HX_STACK_LINE(888)
										::flixel::math::FlxPoint tmp68 = this->offset;		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(888)
										::flixel::math::FlxPoint _this = tmp68;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(888)
										::openfl::_legacy::geom::Point tmp69 = this->_flashPoint;		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(888)
										::openfl::_legacy::geom::Point FlashPoint = tmp69;		HX_STACK_VAR(FlashPoint,"FlashPoint");
										HX_STACK_LINE(888)
										hx::SubEq(FlashPoint->x,_this->x);
										HX_STACK_LINE(888)
										hx::SubEq(FlashPoint->y,_this->y);
										HX_STACK_LINE(888)
										FlashPoint;
									}
								}
							}
							else{
								HX_STACK_LINE(894)
								::openfl::_legacy::geom::Point tmp59 = this->_helperPoint;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(894)
								Float tmp60 = tmp59->x;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(894)
								int tmp61 = columnIndex;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(894)
								int tmp62 = this->widthInTiles;		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(894)
								int tmp63 = hx::Mod(tmp61,tmp62);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(894)
								Float tmp64 = scaledWidth;		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(894)
								Float tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(894)
								Float tmp66 = (tmp60 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(894)
								drawX = tmp66;
								HX_STACK_LINE(895)
								::openfl::_legacy::geom::Point tmp67 = this->_helperPoint;		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(895)
								Float tmp68 = tmp67->y;		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(895)
								int tmp69 = columnIndex;		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(895)
								int tmp70 = this->widthInTiles;		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(895)
								Float tmp71 = (Float(tmp69) / Float(tmp70));		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(895)
								int tmp72 = ::Math_obj::floor(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(895)
								Float tmp73 = scaledHeight;		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(895)
								Float tmp74 = (tmp72 * tmp73);		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(895)
								Float tmp75 = (tmp68 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(895)
								drawY = tmp75;
								HX_STACK_LINE(897)
								::flixel::math::FlxMatrix tmp76 = this->_matrix;		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(897)
								tmp76->identity();
								HX_STACK_LINE(899)
								bool tmp77 = (frame->angle != (int)0);		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(899)
								if ((tmp77)){
									HX_STACK_LINE(901)
									::flixel::math::FlxMatrix tmp78 = this->_matrix;		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(901)
									frame->prepareMatrix(tmp78,null(),null(),null());
								}
								HX_STACK_LINE(904)
								::flixel::math::FlxPoint tmp78 = this->scale;		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(904)
								Float scaleX = tmp78->x;		HX_STACK_VAR(scaleX,"scaleX");
								HX_STACK_LINE(905)
								::flixel::math::FlxPoint tmp79 = this->scale;		HX_STACK_VAR(tmp79,"tmp79");
								HX_STACK_LINE(905)
								Float scaleY = tmp79->y;		HX_STACK_VAR(scaleY,"scaleY");
								HX_STACK_LINE(907)
								bool tmp80 = this->useScaleHack;		HX_STACK_VAR(tmp80,"tmp80");
								HX_STACK_LINE(907)
								if ((tmp80)){
									HX_STACK_LINE(909)
									Float tmp81 = frame->sourceSize->x;		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(909)
									Float tmp82 = Camera->totalScaleX;		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(909)
									Float tmp83 = (tmp81 * tmp82);		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(909)
									Float tmp84 = (Float((int)1) / Float(tmp83));		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(909)
									hx::AddEq(scaleX,tmp84);
									HX_STACK_LINE(910)
									Float tmp85 = frame->sourceSize->y;		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(910)
									Float tmp86 = Camera->totalScaleY;		HX_STACK_VAR(tmp86,"tmp86");
									HX_STACK_LINE(910)
									Float tmp87 = (tmp85 * tmp86);		HX_STACK_VAR(tmp87,"tmp87");
									HX_STACK_LINE(910)
									Float tmp88 = (Float((int)1) / Float(tmp87));		HX_STACK_VAR(tmp88,"tmp88");
									HX_STACK_LINE(910)
									hx::AddEq(scaleY,tmp88);
								}
								HX_STACK_LINE(913)
								::flixel::math::FlxMatrix tmp81 = this->_matrix;		HX_STACK_VAR(tmp81,"tmp81");
								HX_STACK_LINE(913)
								Float tmp82 = scaleX;		HX_STACK_VAR(tmp82,"tmp82");
								HX_STACK_LINE(913)
								Float tmp83 = scaleY;		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(913)
								tmp81->scale(tmp82,tmp83);
								HX_STACK_LINE(914)
								::flixel::math::FlxMatrix tmp84 = this->_matrix;		HX_STACK_VAR(tmp84,"tmp84");
								HX_STACK_LINE(914)
								Float tmp85 = drawX;		HX_STACK_VAR(tmp85,"tmp85");
								HX_STACK_LINE(914)
								Float tmp86 = drawY;		HX_STACK_VAR(tmp86,"tmp86");
								HX_STACK_LINE(914)
								tmp84->translate(tmp85,tmp86);
								HX_STACK_LINE(916)
								::flixel::graphics::frames::FlxFrame tmp87 = frame;		HX_STACK_VAR(tmp87,"tmp87");
								HX_STACK_LINE(916)
								::flixel::math::FlxMatrix tmp88 = this->_matrix;		HX_STACK_VAR(tmp88,"tmp88");
								HX_STACK_LINE(916)
								::openfl::_legacy::geom::ColorTransform tmp89 = this->colorTransform;		HX_STACK_VAR(tmp89,"tmp89");
								HX_STACK_LINE(916)
								drawItem->addQuad(tmp87,tmp88,tmp89);
							}
						}
						HX_STACK_LINE(920)
						bool tmp58 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(920)
						if ((tmp58)){
							HX_STACK_LINE(921)
							int tmp59 = this->_tileWidth;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(921)
							::openfl::_legacy::geom::Point tmp60 = this->_flashPoint;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(921)
							hx::AddEq(tmp60->x,tmp59);
						}
						HX_STACK_LINE(922)
						(columnIndex)++;
					}
				}
				HX_STACK_LINE(925)
				bool tmp49 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(925)
				if ((tmp49)){
					HX_STACK_LINE(926)
					int tmp50 = this->_tileHeight;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(926)
					::openfl::_legacy::geom::Point tmp51 = this->_flashPoint;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(926)
					hx::AddEq(tmp51->y,tmp50);
				}
				HX_STACK_LINE(927)
				int tmp50 = this->widthInTiles;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(927)
				hx::AddEq(rowIndex,tmp50);
			}
		}
		HX_STACK_LINE(930)
		int tmp45 = screenXInTiles;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(930)
		Float tmp46 = this->_scaledTileWidth;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(930)
		Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(930)
		Buffer->x = tmp47;
		HX_STACK_LINE(931)
		int tmp48 = screenYInTiles;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(931)
		Float tmp49 = this->_scaledTileHeight;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(931)
		Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(931)
		Buffer->y = tmp50;
		HX_STACK_LINE(933)
		bool tmp51 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(933)
		if ((tmp51)){
			HX_STACK_LINE(935)
			bool tmp52 = isColored;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(935)
			if ((tmp52)){
				HX_STACK_LINE(936)
				::openfl::_legacy::geom::ColorTransform tmp53 = this->colorTransform;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(936)
				Buffer->colorTransform(tmp53);
			}
			HX_STACK_LINE(937)
			::openfl::_legacy::display::BlendMode tmp53 = this->blend;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(937)
			Buffer->blend = tmp53;
		}
		HX_STACK_LINE(940)
		Buffer->dirty = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,drawTilemap,(void))

::openfl::_legacy::display::BitmapData FlxTilemap_obj::makeDebugTile( int Color){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","makeDebugTile",0xa1ed2d0f,"flixel.tile.FlxTilemap.makeDebugTile","flixel/tile/FlxTilemap.hx",949,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(950)
	bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(950)
	if ((tmp)){
		HX_STACK_LINE(951)
		return null();
	}
	HX_STACK_LINE(953)
	::openfl::_legacy::display::BitmapData debugTile;		HX_STACK_VAR(debugTile,"debugTile");
	HX_STACK_LINE(954)
	int tmp1 = this->_tileWidth;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(954)
	int tmp2 = this->_tileHeight;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(954)
	::openfl::_legacy::display::BitmapData tmp3 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp1,tmp2,true,(int)0,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(954)
	debugTile = tmp3;
	HX_STACK_LINE(956)
	::openfl::_legacy::display::Graphics tmp4 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(956)
	::openfl::_legacy::display::Graphics gfx = tmp4;		HX_STACK_VAR(gfx,"gfx");
	HX_STACK_LINE(957)
	gfx->clear();
	HX_STACK_LINE(958)
	gfx->moveTo((int)0,(int)0);
	HX_STACK_LINE(959)
	int tmp5 = Color;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(959)
	gfx->lineStyle((int)1,tmp5,((Float)0.5),null(),null(),null(),null(),null());
	HX_STACK_LINE(960)
	int tmp6 = this->_tileWidth;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(960)
	int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(960)
	gfx->lineTo(tmp7,(int)0);
	HX_STACK_LINE(961)
	int tmp8 = this->_tileWidth;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(961)
	int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(961)
	int tmp10 = this->_tileHeight;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(961)
	int tmp11 = (tmp10 - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(961)
	gfx->lineTo(tmp9,tmp11);
	HX_STACK_LINE(962)
	int tmp12 = this->_tileHeight;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(962)
	int tmp13 = (tmp12 - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(962)
	gfx->lineTo((int)0,tmp13);
	HX_STACK_LINE(963)
	gfx->lineTo((int)0,(int)0);
	HX_STACK_LINE(965)
	::openfl::_legacy::display::Sprite tmp14 = ::flixel::util::FlxSpriteUtil_obj::flashGfxSprite;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(965)
	debugTile->draw(tmp14,null(),null(),null(),null(),null());
	HX_STACK_LINE(966)
	::openfl::_legacy::display::BitmapData tmp15 = debugTile;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(966)
	return tmp15;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,makeDebugTile,return )

Void FlxTilemap_obj::updateTile( int Index){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","updateTile",0x18c3429b,"flixel.tile.FlxTilemap.updateTile","flixel/tile/FlxTilemap.hx",976,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Index,"Index")
		HX_STACK_LINE(977)
		::flixel::tile::FlxTile tmp = this->_tileObjects->__GetItem(Index);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(977)
		::flixel::tile::FlxTile tile = tmp;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(978)
		bool tmp1 = (tile == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(978)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(978)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(978)
		if ((tmp2)){
			HX_STACK_LINE(978)
			bool tmp4 = tile->visible;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(978)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(978)
			tmp3 = !(tmp5);
		}
		else{
			HX_STACK_LINE(978)
			tmp3 = true;
		}
		HX_STACK_LINE(978)
		if ((tmp3)){
			HX_STACK_LINE(979)
			return null();
		}
		HX_STACK_LINE(981)
		::flixel::graphics::frames::FlxFramesCollection tmp4 = this->frames;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(981)
		int tmp5 = Index;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(981)
		int tmp6 = this->_startingIndex;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(981)
		int tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(981)
		::flixel::graphics::frames::FlxFrame tmp8 = tmp4->frames->__get(tmp7).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(981)
		tile->frame = tmp8;
	}
return null();
}


::flixel::tile::FlxTilemapBuffer FlxTilemap_obj::createBuffer( ::flixel::FlxCamera camera){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","createBuffer",0x170b42e0,"flixel.tile.FlxTilemap.createBuffer","flixel/tile/FlxTilemap.hx",985,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(camera,"camera")
	HX_STACK_LINE(986)
	int tmp = this->_tileWidth;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(986)
	int tmp1 = this->_tileHeight;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(986)
	int tmp2 = this->widthInTiles;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(986)
	int tmp3 = this->heightInTiles;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(986)
	::flixel::FlxCamera tmp4 = camera;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(986)
	::flixel::math::FlxPoint tmp5 = this->scale;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(986)
	Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(986)
	::flixel::math::FlxPoint tmp7 = this->scale;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(986)
	Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(986)
	::flixel::tile::FlxTilemapBuffer tmp9 = ::flixel::tile::FlxTilemapBuffer_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(986)
	::flixel::tile::FlxTilemapBuffer buffer = tmp9;		HX_STACK_VAR(buffer,"buffer");
	HX_STACK_LINE(987)
	Dynamic tmp10 = this->pixelPerfectRender;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(987)
	buffer->pixelPerfectRender = tmp10;
	HX_STACK_LINE(988)
	bool tmp11 = this->antialiasing;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(988)
	buffer->antialiasing = tmp11;
	HX_STACK_LINE(989)
	::flixel::tile::FlxTilemapBuffer tmp12 = buffer;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(989)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,createBuffer,return )

Void FlxTilemap_obj::onGameResize( int _,int _1){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","onGameResize",0x47562b49,"flixel.tile.FlxTilemap.onGameResize","flixel/tile/FlxTilemap.hx",996,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_ARG(_1,"_1")
		HX_STACK_LINE(997)
		::flixel::graphics::FlxGraphic tmp = this->graphic;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(997)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(997)
		if ((tmp1)){
			HX_STACK_LINE(998)
			return null();
		}
		HX_STACK_LINE(1000)
		{
			HX_STACK_LINE(1000)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1000)
			int tmp2 = this->get_cameras()->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1000)
			int _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1000)
			while((true)){
				HX_STACK_LINE(1000)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1000)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1000)
				if ((tmp4)){
					HX_STACK_LINE(1000)
					break;
				}
				HX_STACK_LINE(1000)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1000)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1002)
				::flixel::FlxCamera tmp6 = this->get_cameras()->__get(i).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1002)
				::flixel::FlxCamera camera = tmp6;		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(1003)
				::flixel::tile::FlxTilemapBuffer tmp7 = this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1003)
				::flixel::tile::FlxTilemapBuffer buffer = tmp7;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(1006)
				::flixel::tile::FlxTilemapBuffer tmp8 = ::flixel::tile::FlxTilemap_obj::_helperBuffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1006)
				int tmp9 = this->_tileWidth;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1006)
				int tmp10 = this->widthInTiles;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1006)
				::flixel::math::FlxPoint tmp11 = this->scale;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1006)
				Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1006)
				::flixel::FlxCamera tmp13 = camera;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1006)
				tmp8->updateColumns(tmp9,tmp10,tmp12,tmp13);
				HX_STACK_LINE(1007)
				::flixel::tile::FlxTilemapBuffer tmp14 = ::flixel::tile::FlxTilemap_obj::_helperBuffer;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1007)
				int tmp15 = this->_tileHeight;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1007)
				int tmp16 = this->heightInTiles;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1007)
				::flixel::math::FlxPoint tmp17 = this->scale;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1007)
				Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1007)
				::flixel::FlxCamera tmp19 = camera;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1007)
				tmp14->updateRows(tmp15,tmp16,tmp18,tmp19);
				HX_STACK_LINE(1010)
				bool tmp20 = (buffer == null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1010)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1010)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1010)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1010)
				if ((tmp22)){
					HX_STACK_LINE(1010)
					::flixel::tile::FlxTilemapBuffer tmp24 = ::flixel::tile::FlxTilemap_obj::_helperBuffer;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1010)
					::flixel::tile::FlxTilemapBuffer tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1010)
					::flixel::tile::FlxTilemapBuffer tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1010)
					int tmp27 = tmp26->columns;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1010)
					int tmp28 = buffer->columns;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1010)
					tmp23 = (tmp27 != tmp28);
				}
				else{
					HX_STACK_LINE(1010)
					tmp23 = true;
				}
				HX_STACK_LINE(1010)
				bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1010)
				bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1010)
				if ((tmp24)){
					HX_STACK_LINE(1010)
					::flixel::tile::FlxTilemapBuffer tmp26 = ::flixel::tile::FlxTilemap_obj::_helperBuffer;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1010)
					::flixel::tile::FlxTilemapBuffer tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1010)
					int tmp28 = tmp27->rows;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1010)
					int tmp29 = buffer->rows;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1010)
					tmp25 = (tmp28 != tmp29);
				}
				else{
					HX_STACK_LINE(1010)
					tmp25 = true;
				}
				HX_STACK_LINE(1010)
				if ((tmp25)){
					HX_STACK_LINE(1012)
					bool tmp26 = (buffer != null());		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1012)
					if ((tmp26)){
						HX_STACK_LINE(1013)
						buffer->destroy();
					}
					HX_STACK_LINE(1015)
					::flixel::tile::FlxTilemapBuffer tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1015)
					{
						HX_STACK_LINE(1015)
						int tmp28 = this->_tileWidth;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1015)
						int tmp29 = this->_tileHeight;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1015)
						int tmp30 = this->widthInTiles;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1015)
						int tmp31 = this->heightInTiles;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1015)
						::flixel::FlxCamera tmp32 = camera;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1015)
						::flixel::math::FlxPoint tmp33 = this->scale;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1015)
						Float tmp34 = tmp33->x;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1015)
						::flixel::math::FlxPoint tmp35 = this->scale;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1015)
						Float tmp36 = tmp35->y;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1015)
						::flixel::tile::FlxTilemapBuffer tmp37 = ::flixel::tile::FlxTilemapBuffer_obj::__new(tmp28,tmp29,tmp30,tmp31,tmp32,tmp34,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1015)
						::flixel::tile::FlxTilemapBuffer buffer1 = tmp37;		HX_STACK_VAR(buffer1,"buffer1");
						HX_STACK_LINE(1015)
						Dynamic tmp38 = this->pixelPerfectRender;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1015)
						buffer1->pixelPerfectRender = tmp38;
						HX_STACK_LINE(1015)
						bool tmp39 = this->antialiasing;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1015)
						buffer1->antialiasing = tmp39;
						HX_STACK_LINE(1015)
						tmp27 = buffer1;
					}
					HX_STACK_LINE(1015)
					this->_buffers[i] = tmp27;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,onGameResize,(void))

Void FlxTilemap_obj::onDrawDebugChanged( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","onDrawDebugChanged",0x3243d108,"flixel.tile.FlxTilemap.onDrawDebugChanged","flixel/tile/FlxTilemap.hx",1022,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1023)
		bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1023)
		if ((tmp)){
			HX_STACK_LINE(1024)
			return null();
		}
		HX_STACK_LINE(1026)
		{
			HX_STACK_LINE(1026)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1026)
			Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1026)
			while((true)){
				HX_STACK_LINE(1026)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1026)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1026)
				if ((tmp2)){
					HX_STACK_LINE(1026)
					break;
				}
				HX_STACK_LINE(1026)
				::flixel::tile::FlxTilemapBuffer tmp3 = _g1->__get(_g).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1026)
				::flixel::tile::FlxTilemapBuffer buffer = tmp3;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(1026)
				++(_g);
				HX_STACK_LINE(1027)
				bool tmp4 = (buffer != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1027)
				if ((tmp4)){
					HX_STACK_LINE(1028)
					buffer->dirty = true;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemap_obj,onDrawDebugChanged,(void))

bool FlxTilemap_obj::set_antialiasing( bool value){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","set_antialiasing",0x6cc568b5,"flixel.tile.FlxTilemap.set_antialiasing","flixel/tile/FlxTilemap.hx",1033,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1034)
	{
		HX_STACK_LINE(1034)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1034)
		Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1034)
		while((true)){
			HX_STACK_LINE(1034)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1034)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1034)
			if ((tmp1)){
				HX_STACK_LINE(1034)
				break;
			}
			HX_STACK_LINE(1034)
			::flixel::tile::FlxTilemapBuffer tmp2 = _g1->__get(_g).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1034)
			::flixel::tile::FlxTilemapBuffer buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(1034)
			++(_g);
			HX_STACK_LINE(1035)
			buffer->antialiasing = value;
		}
	}
	HX_STACK_LINE(1036)
	bool tmp = this->antialiasing = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1036)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_antialiasing,return )

::flixel::graphics::FlxGraphic FlxTilemap_obj::set_graphic( ::flixel::graphics::FlxGraphic Value){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","set_graphic",0xa0b86087,"flixel.tile.FlxTilemap.set_graphic","flixel/tile/FlxTilemap.hx",1044,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1046)
	::flixel::graphics::FlxGraphic tmp = this->graphic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1046)
	::flixel::graphics::FlxGraphic tmp1 = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1046)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1046)
	if ((tmp2)){
		HX_STACK_LINE(1049)
		bool tmp3 = (Value != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1049)
		if ((tmp3)){
			HX_STACK_LINE(1050)
			::flixel::graphics::FlxGraphic _g = Value;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1050)
			int tmp4 = _g->get_useCount();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1050)
			int _g1 = tmp4;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1050)
			int tmp5 = (_g1 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1050)
			_g->set_useCount(tmp5);
			HX_STACK_LINE(1050)
			_g1;
		}
		HX_STACK_LINE(1053)
		::flixel::graphics::FlxGraphic tmp4 = this->graphic;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1053)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1053)
		if ((tmp5)){
			HX_STACK_LINE(1054)
			::flixel::graphics::FlxGraphic tmp6 = this->graphic;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1054)
			::flixel::graphics::FlxGraphic _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1054)
			int tmp7 = _g->get_useCount();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1054)
			int _g1 = tmp7;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1054)
			int tmp8 = (_g1 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1054)
			_g->set_useCount(tmp8);
			HX_STACK_LINE(1054)
			_g1;
		}
	}
	HX_STACK_LINE(1057)
	::flixel::graphics::FlxGraphic tmp3 = this->graphic = Value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1057)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_graphic,return )

bool FlxTilemap_obj::set_pixelPerfectRender( bool Value){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","set_pixelPerfectRender",0x5122f25e,"flixel.tile.FlxTilemap.set_pixelPerfectRender","flixel/tile/FlxTilemap.hx",1061,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1062)
	bool tmp = (this->_buffers != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1062)
	if ((tmp)){
		HX_STACK_LINE(1063)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1063)
		Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1063)
		while((true)){
			HX_STACK_LINE(1063)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1063)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1063)
			if ((tmp2)){
				HX_STACK_LINE(1063)
				break;
			}
			HX_STACK_LINE(1063)
			::flixel::tile::FlxTilemapBuffer tmp3 = _g1->__get(_g).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1063)
			::flixel::tile::FlxTilemapBuffer buffer = tmp3;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(1063)
			++(_g);
			HX_STACK_LINE(1064)
			buffer->pixelPerfectRender = Value;
		}
	}
	HX_STACK_LINE(1066)
	Dynamic tmp1 = this->pixelPerfectRender = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1066)
	return tmp1;
}


Float FlxTilemap_obj::set_alpha( Float Alpha){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","set_alpha",0xecd0277d,"flixel.tile.FlxTilemap.set_alpha","flixel/tile/FlxTilemap.hx",1070,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Alpha,"Alpha")
	HX_STACK_LINE(1071)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1071)
	{
		HX_STACK_LINE(1071)
		bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1071)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1071)
		if ((tmp1)){
			HX_STACK_LINE(1071)
			tmp2 = (Alpha < (int)0);
		}
		else{
			HX_STACK_LINE(1071)
			tmp2 = false;
		}
		HX_STACK_LINE(1071)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1071)
		if ((tmp2)){
			HX_STACK_LINE(1071)
			tmp3 = (int)0;
		}
		else{
			HX_STACK_LINE(1071)
			tmp3 = Alpha;
		}
		HX_STACK_LINE(1071)
		Float lowerBound = tmp3;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(1071)
		bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1071)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1071)
		if ((tmp4)){
			HX_STACK_LINE(1071)
			tmp5 = (lowerBound > (int)1);
		}
		else{
			HX_STACK_LINE(1071)
			tmp5 = false;
		}
		HX_STACK_LINE(1071)
		if ((tmp5)){
			HX_STACK_LINE(1071)
			tmp = (int)1;
		}
		else{
			HX_STACK_LINE(1071)
			tmp = lowerBound;
		}
	}
	HX_STACK_LINE(1071)
	this->alpha = ((Float)(tmp));
	HX_STACK_LINE(1072)
	this->updateColorTransform();
	HX_STACK_LINE(1073)
	Float tmp1 = this->alpha;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1073)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_alpha,return )

int FlxTilemap_obj::set_color( int Color){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","set_color",0x1595f182,"flixel.tile.FlxTilemap.set_color","flixel/tile/FlxTilemap.hx",1077,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(1078)
	int tmp = this->color;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1078)
	int tmp1 = Color;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1078)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1078)
	if ((tmp2)){
		HX_STACK_LINE(1079)
		int tmp3 = Color;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1079)
		return tmp3;
	}
	HX_STACK_LINE(1081)
	this->color = Color;
	HX_STACK_LINE(1082)
	this->updateColorTransform();
	HX_STACK_LINE(1083)
	int tmp3 = this->color;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1083)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_color,return )

Void FlxTilemap_obj::updateColorTransform( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","updateColorTransform",0x6f14b936,"flixel.tile.FlxTilemap.updateColorTransform","flixel/tile/FlxTilemap.hx",1087,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1088)
		::openfl::_legacy::geom::ColorTransform tmp = this->colorTransform;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1088)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1088)
		if ((tmp1)){
			HX_STACK_LINE(1089)
			::openfl::_legacy::geom::ColorTransform tmp2 = ::openfl::_legacy::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1089)
			this->colorTransform = tmp2;
		}
		HX_STACK_LINE(1091)
		Float tmp2 = this->alpha;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1091)
		bool tmp3 = (tmp2 != (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1091)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1091)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1091)
		if ((tmp4)){
			HX_STACK_LINE(1091)
			int tmp6 = this->color;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1091)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1091)
			tmp5 = (tmp7 != (int)16777215);
		}
		else{
			HX_STACK_LINE(1091)
			tmp5 = true;
		}
		HX_STACK_LINE(1091)
		if ((tmp5)){
			HX_STACK_LINE(1092)
			::openfl::_legacy::geom::ColorTransform tmp6 = this->colorTransform;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1092)
			int tmp7 = this->color;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1092)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1092)
			int tmp9 = (int(tmp8) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1092)
			int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1092)
			Float tmp11 = (Float(tmp10) / Float((int)255));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1092)
			int tmp12 = this->color;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1092)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1092)
			int tmp14 = (int(tmp13) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1092)
			int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1092)
			Float tmp16 = (Float(tmp15) / Float((int)255));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1092)
			int tmp17 = this->color;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1092)
			int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1092)
			int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1092)
			Float tmp20 = (Float(tmp19) / Float((int)255));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1092)
			Float tmp21 = this->alpha;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1092)
			::flixel::util::FlxColorTransformUtil_obj::setMultipliers(tmp6,tmp11,tmp16,tmp20,tmp21);
		}
		else{
			HX_STACK_LINE(1094)
			::openfl::_legacy::geom::ColorTransform tmp6 = this->colorTransform;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1094)
			::flixel::util::FlxColorTransformUtil_obj::setMultipliers(tmp6,(int)1,(int)1,(int)1,(int)1);
		}
		HX_STACK_LINE(1096)
		bool tmp6 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1096)
		if ((tmp6)){
			HX_STACK_LINE(1097)
			this->setDirty(null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemap_obj,updateColorTransform,(void))

::openfl::_legacy::display::BlendMode FlxTilemap_obj::set_blend( ::openfl::_legacy::display::BlendMode Value){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","set_blend",0x802e6870,"flixel.tile.FlxTilemap.set_blend","flixel/tile/FlxTilemap.hx",1101,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1102)
	bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1102)
	if ((tmp)){
		HX_STACK_LINE(1103)
		this->setDirty(null());
	}
	HX_STACK_LINE(1104)
	::openfl::_legacy::display::BlendMode tmp1 = this->blend = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1104)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_blend,return )

Void FlxTilemap_obj::setScaleXYCallback( ::flixel::math::FlxPoint Scale){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","setScaleXYCallback",0x2287ee32,"flixel.tile.FlxTilemap.setScaleXYCallback","flixel/tile/FlxTilemap.hx",1108,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Scale,"Scale")
		HX_STACK_LINE(1109)
		::flixel::math::FlxPoint tmp = Scale;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1109)
		this->setScaleXCallback(tmp);
		HX_STACK_LINE(1110)
		::flixel::math::FlxPoint tmp1 = Scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1110)
		this->setScaleYCallback(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,setScaleXYCallback,(void))

Void FlxTilemap_obj::setScaleXCallback( ::flixel::math::FlxPoint Scale){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","setScaleXCallback",0x45b95971,"flixel.tile.FlxTilemap.setScaleXCallback","flixel/tile/FlxTilemap.hx",1114,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Scale,"Scale")
		HX_STACK_LINE(1115)
		int tmp = this->_tileWidth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1115)
		::flixel::math::FlxPoint tmp1 = this->scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1115)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1115)
		Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1115)
		this->_scaledTileWidth = tmp3;
		HX_STACK_LINE(1116)
		int tmp4 = this->widthInTiles;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1116)
		Float tmp5 = this->_scaledTileWidth;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1116)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1116)
		this->set_width(tmp6);
		HX_STACK_LINE(1118)
		bool tmp7 = (this->get_cameras() == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1118)
		if ((tmp7)){
			HX_STACK_LINE(1119)
			return null();
		}
		HX_STACK_LINE(1121)
		{
			HX_STACK_LINE(1121)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1121)
			int tmp8 = this->get_cameras()->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1121)
			int _g = tmp8;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1121)
			while((true)){
				HX_STACK_LINE(1121)
				bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1121)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1121)
				if ((tmp10)){
					HX_STACK_LINE(1121)
					break;
				}
				HX_STACK_LINE(1121)
				int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1121)
				int i = tmp11;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1122)
				::flixel::tile::FlxTilemapBuffer tmp12 = this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1122)
				bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1122)
				if ((tmp13)){
					HX_STACK_LINE(1123)
					::flixel::tile::FlxTilemapBuffer tmp14 = this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1123)
					int tmp15 = this->_tileWidth;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1123)
					int tmp16 = this->widthInTiles;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1123)
					::flixel::math::FlxPoint tmp17 = this->scale;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1123)
					Float tmp18 = tmp17->x;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1123)
					::flixel::FlxCamera tmp19 = this->get_cameras()->__get(i).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1123)
					tmp14->updateColumns(tmp15,tmp16,tmp18,tmp19);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,setScaleXCallback,(void))

Void FlxTilemap_obj::setScaleYCallback( ::flixel::math::FlxPoint Scale){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","setScaleYCallback",0x18aac272,"flixel.tile.FlxTilemap.setScaleYCallback","flixel/tile/FlxTilemap.hx",1127,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Scale,"Scale")
		HX_STACK_LINE(1128)
		int tmp = this->_tileHeight;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1128)
		::flixel::math::FlxPoint tmp1 = this->scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1128)
		Float tmp2 = tmp1->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1128)
		Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1128)
		this->_scaledTileHeight = tmp3;
		HX_STACK_LINE(1129)
		int tmp4 = this->heightInTiles;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1129)
		Float tmp5 = this->_scaledTileHeight;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1129)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1129)
		this->set_height(tmp6);
		HX_STACK_LINE(1131)
		bool tmp7 = (this->get_cameras() == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1131)
		if ((tmp7)){
			HX_STACK_LINE(1132)
			return null();
		}
		HX_STACK_LINE(1134)
		{
			HX_STACK_LINE(1134)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1134)
			int tmp8 = this->get_cameras()->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1134)
			int _g = tmp8;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1134)
			while((true)){
				HX_STACK_LINE(1134)
				bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1134)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1134)
				if ((tmp10)){
					HX_STACK_LINE(1134)
					break;
				}
				HX_STACK_LINE(1134)
				int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1134)
				int i = tmp11;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1135)
				::flixel::tile::FlxTilemapBuffer tmp12 = this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1135)
				bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1135)
				if ((tmp13)){
					HX_STACK_LINE(1136)
					::flixel::tile::FlxTilemapBuffer tmp14 = this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1136)
					int tmp15 = this->_tileHeight;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1136)
					int tmp16 = this->heightInTiles;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1136)
					::flixel::math::FlxPoint tmp17 = this->scale;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1136)
					Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1136)
					::flixel::FlxCamera tmp19 = this->get_cameras()->__get(i).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1136)
					tmp14->updateRows(tmp15,tmp16,tmp18,tmp19);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,setScaleYCallback,(void))

::flixel::FlxSprite FlxTilemap_obj::defaultTileToSprite( Dynamic TileProperties){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","defaultTileToSprite",0xb4e0664b,"flixel.tile.FlxTilemap.defaultTileToSprite","flixel/tile/FlxTilemap.hx",1146,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(TileProperties,"TileProperties")
	HX_STACK_LINE(1147)
	::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new(TileProperties->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),TileProperties->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1147)
	::flixel::FlxSprite tileSprite = tmp;		HX_STACK_VAR(tileSprite,"tileSprite");
	HX_STACK_LINE(1148)
	::flixel::graphics::frames::FlxImageFrame tmp1 = TileProperties->__Field(HX_HCSTRING("graphic","\xa8","\x5a","\x07","\x74"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1148)
	tileSprite->set_frames(tmp1);
	HX_STACK_LINE(1149)
	{
		HX_STACK_LINE(1149)
		::flixel::math::FlxPoint _this = tileSprite->scale;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1149)
		::flixel::math::FlxPoint point = TileProperties->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic );		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(1149)
		Float tmp2 = point->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1149)
		_this->set_x(tmp2);
		HX_STACK_LINE(1149)
		Float tmp3 = point->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1149)
		_this->set_y(tmp3);
		HX_STACK_LINE(1149)
		{
			HX_STACK_LINE(1149)
			bool tmp4 = point->_weak;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1149)
			if ((tmp4)){
				HX_STACK_LINE(1149)
				point->put();
			}
		}
		HX_STACK_LINE(1149)
		_this;
	}
	HX_STACK_LINE(1150)
	::flixel::math::FlxPoint tmp2 = TileProperties->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1150)
	::flixel::math::FlxPoint tmp3 = ::flixel::util::FlxDestroyUtil_obj::put(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1150)
	TileProperties->__FieldRef(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")) = tmp3;
	HX_STACK_LINE(1151)
	Float tmp4 = TileProperties->__Field(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1151)
	tileSprite->set_alpha(tmp4);
	HX_STACK_LINE(1152)
	::openfl::_legacy::display::BlendMode tmp5 = TileProperties->__Field(HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1152)
	tileSprite->set_blend(tmp5);
	HX_STACK_LINE(1153)
	::flixel::FlxSprite tmp6 = tileSprite;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1153)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,defaultTileToSprite,return )

int FlxTilemap_obj::set_allowCollisions( int Value){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","set_allowCollisions",0x96e24689,"flixel.tile.FlxTilemap.set_allowCollisions","flixel/tile/FlxTilemap.hx",1157,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1158)
	{
		HX_STACK_LINE(1158)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1158)
		Array< ::Dynamic > _g1 = this->_tileObjects;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1158)
		while((true)){
			HX_STACK_LINE(1158)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1158)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1158)
			if ((tmp1)){
				HX_STACK_LINE(1158)
				break;
			}
			HX_STACK_LINE(1158)
			::flixel::tile::FlxTile tmp2 = _g1->__get(_g).StaticCast< ::flixel::tile::FlxTile >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1158)
			::flixel::tile::FlxTile tile = tmp2;		HX_STACK_VAR(tile,"tile");
			HX_STACK_LINE(1158)
			++(_g);
			HX_STACK_LINE(1159)
			int tmp3 = tile->index;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1159)
			int tmp4 = this->_collideIndex;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1159)
			bool tmp5 = (tmp3 >= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1159)
			if ((tmp5)){
				HX_STACK_LINE(1160)
				int tmp6 = Value;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1160)
				tile->set_allowCollisions(tmp6);
			}
		}
	}
	HX_STACK_LINE(1162)
	int tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1162)
	int tmp1 = this->super::set_allowCollisions(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1162)
	return tmp1;
}


::flixel::tile::FlxTilemapBuffer FlxTilemap_obj::_helperBuffer;


FlxTilemap_obj::FlxTilemap_obj()
{
}

void FlxTilemap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTilemap);
	HX_MARK_MEMBER_NAME(useScaleHack,"useScaleHack");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(graphic,"graphic");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(colorTransform,"colorTransform");
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_buffers,"_buffers");
	HX_MARK_MEMBER_NAME(_tileWidth,"_tileWidth");
	HX_MARK_MEMBER_NAME(_tileHeight,"_tileHeight");
	HX_MARK_MEMBER_NAME(_scaledTileWidth,"_scaledTileWidth");
	HX_MARK_MEMBER_NAME(_scaledTileHeight,"_scaledTileHeight");
	HX_MARK_MEMBER_NAME(_debugTileNotSolid,"_debugTileNotSolid");
	HX_MARK_MEMBER_NAME(_debugTilePartial,"_debugTilePartial");
	HX_MARK_MEMBER_NAME(_debugTileSolid,"_debugTileSolid");
	HX_MARK_MEMBER_NAME(_debugRect,"_debugRect");
	HX_MARK_MEMBER_NAME(_helperPoint,"_helperPoint");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	::flixel::tile::FlxBaseTilemap_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTilemap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(useScaleHack,"useScaleHack");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(graphic,"graphic");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(colorTransform,"colorTransform");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_buffers,"_buffers");
	HX_VISIT_MEMBER_NAME(_tileWidth,"_tileWidth");
	HX_VISIT_MEMBER_NAME(_tileHeight,"_tileHeight");
	HX_VISIT_MEMBER_NAME(_scaledTileWidth,"_scaledTileWidth");
	HX_VISIT_MEMBER_NAME(_scaledTileHeight,"_scaledTileHeight");
	HX_VISIT_MEMBER_NAME(_debugTileNotSolid,"_debugTileNotSolid");
	HX_VISIT_MEMBER_NAME(_debugTilePartial,"_debugTilePartial");
	HX_VISIT_MEMBER_NAME(_debugTileSolid,"_debugTileSolid");
	HX_VISIT_MEMBER_NAME(_debugRect,"_debugRect");
	HX_VISIT_MEMBER_NAME(_helperPoint,"_helperPoint");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	::flixel::tile::FlxBaseTilemap_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTilemap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ray") ) { return ray_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"blend") ) { return blend; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		if (HX_FIELD_EQ(inName,"shader") ) { return shader; }
		if (HX_FIELD_EQ(inName,"follow") ) { return follow_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"graphic") ) { return graphic; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buffers") ) { return _buffers; }
		if (HX_FIELD_EQ(inName,"setDirty") ) { return setDirty_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"updateMap") ) { return updateMap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_blend") ) { return set_blend_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		if (HX_FIELD_EQ(inName,"_tileWidth") ) { return _tileWidth; }
		if (HX_FIELD_EQ(inName,"_debugRect") ) { return _debugRect; }
		if (HX_FIELD_EQ(inName,"set_frames") ) { return set_frames_dyn(); }
		if (HX_FIELD_EQ(inName,"updateTile") ) { return updateTile_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		if (HX_FIELD_EQ(inName,"_tileHeight") ) { return _tileHeight; }
		if (HX_FIELD_EQ(inName,"drawTilemap") ) { return drawTilemap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_graphic") ) { return set_graphic_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"useScaleHack") ) { return useScaleHack; }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return antialiasing; }
		if (HX_FIELD_EQ(inName,"_helperPoint") ) { return _helperPoint; }
		if (HX_FIELD_EQ(inName,"tileToSprite") ) { return tileToSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return createBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"onGameResize") ) { return onGameResize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheGraphics") ) { return cacheGraphics_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileCoords") ) { return getTileCoords_dyn(); }
		if (HX_FIELD_EQ(inName,"updateBuffers") ) { return updateBuffers_dyn(); }
		if (HX_FIELD_EQ(inName,"makeDebugTile") ) { return makeDebugTile_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_debugTileSolid") ) { return _debugTileSolid; }
		if (HX_FIELD_EQ(inName,"initTileObjects") ) { return initTileObjects_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_scaledTileWidth") ) { return _scaledTileWidth; }
		if (HX_FIELD_EQ(inName,"set_antialiasing") ) { return set_antialiasing_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_scaledTileHeight") ) { return _scaledTileHeight; }
		if (HX_FIELD_EQ(inName,"_debugTilePartial") ) { return _debugTilePartial; }
		if (HX_FIELD_EQ(inName,"computeDimensions") ) { return computeDimensions_dyn(); }
		if (HX_FIELD_EQ(inName,"drawDebugOnCamera") ) { return drawDebugOnCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"setScaleXCallback") ) { return setScaleXCallback_dyn(); }
		if (HX_FIELD_EQ(inName,"setScaleYCallback") ) { return setScaleYCallback_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_debugTileNotSolid") ) { return _debugTileNotSolid; }
		if (HX_FIELD_EQ(inName,"onDrawDebugChanged") ) { return onDrawDebugChanged_dyn(); }
		if (HX_FIELD_EQ(inName,"setScaleXYCallback") ) { return setScaleXYCallback_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"defaultTileToSprite") ) { return defaultTileToSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"set_allowCollisions") ) { return set_allowCollisions_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"overlapsWithCallback") ) { return overlapsWithCallback_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileIndexByCoords") ) { return getTileIndexByCoords_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileCoordsByIndex") ) { return getTileCoordsByIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return updateColorTransform_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"set_pixelPerfectRender") ) { return set_pixelPerfectRender_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxTilemap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_helperBuffer") ) { outValue = _helperBuffer; return true;  }
	}
	return false;
}

Dynamic FlxTilemap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return set_color(inValue);color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return set_alpha(inValue);alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blend") ) { if (inCallProp == hx::paccAlways) return set_blend(inValue);blend=inValue.Cast< ::openfl::_legacy::display::BlendMode >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frames") ) { if (inCallProp == hx::paccAlways) return set_frames(inValue);frames=inValue.Cast< ::flixel::graphics::frames::FlxFramesCollection >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"graphic") ) { if (inCallProp == hx::paccAlways) return set_graphic(inValue);graphic=inValue.Cast< ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::flixel::math::FlxMatrix >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buffers") ) { _buffers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileWidth") ) { _tileWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_debugRect") ) { _debugRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileHeight") ) { _tileHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"useScaleHack") ) { useScaleHack=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { if (inCallProp == hx::paccAlways) return set_antialiasing(inValue);antialiasing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_helperPoint") ) { _helperPoint=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { colorTransform=inValue.Cast< ::openfl::_legacy::geom::ColorTransform >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_debugTileSolid") ) { _debugTileSolid=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_scaledTileWidth") ) { _scaledTileWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_scaledTileHeight") ) { _scaledTileHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_debugTilePartial") ) { _debugTilePartial=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_debugTileNotSolid") ) { _debugTileNotSolid=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxTilemap_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_helperBuffer") ) { _helperBuffer=ioValue.Cast< ::flixel::tile::FlxTilemapBuffer >(); return true; }
	}
	return false;
}

void FlxTilemap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("useScaleHack","\x44","\x9c","\x16","\x98"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	outFields->push(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"));
	outFields->push(HX_HCSTRING("graphic","\xa8","\x5a","\x07","\x74"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"));
	outFields->push(HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4"));
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	outFields->push(HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7"));
	outFields->push(HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d"));
	outFields->push(HX_HCSTRING("_buffers","\xf4","\xfc","\x48","\xeb"));
	outFields->push(HX_HCSTRING("_tileWidth","\xb9","\x8f","\x60","\xb1"));
	outFields->push(HX_HCSTRING("_tileHeight","\xd4","\xaa","\x6c","\x39"));
	outFields->push(HX_HCSTRING("_scaledTileWidth","\x7f","\x28","\x09","\x38"));
	outFields->push(HX_HCSTRING("_scaledTileHeight","\x4e","\xbf","\x49","\x86"));
	outFields->push(HX_HCSTRING("_debugTileNotSolid","\x1a","\xdf","\x89","\x53"));
	outFields->push(HX_HCSTRING("_debugTilePartial","\xbf","\x14","\x2d","\x78"));
	outFields->push(HX_HCSTRING("_debugTileSolid","\xe9","\x85","\xdf","\xf6"));
	outFields->push(HX_HCSTRING("_debugRect","\xd8","\x6c","\x95","\x8a"));
	outFields->push(HX_HCSTRING("_helperPoint","\x03","\xe6","\x14","\xf8"));
	outFields->push(HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxTilemap_obj,useScaleHack),HX_HCSTRING("useScaleHack","\x44","\x9c","\x16","\x98")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxTilemap_obj,scale),HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")},
	{hx::fsBool,(int)offsetof(FlxTilemap_obj,antialiasing),HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxTilemap_obj,offset),HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")},
	{hx::fsObject /*::flixel::graphics::frames::FlxFramesCollection*/ ,(int)offsetof(FlxTilemap_obj,frames),HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac")},
	{hx::fsObject /*::flixel::graphics::FlxGraphic*/ ,(int)offsetof(FlxTilemap_obj,graphic),HX_HCSTRING("graphic","\xa8","\x5a","\x07","\x74")},
	{hx::fsInt,(int)offsetof(FlxTilemap_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsFloat,(int)offsetof(FlxTilemap_obj,alpha),HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")},
	{hx::fsObject /*::openfl::_legacy::geom::ColorTransform*/ ,(int)offsetof(FlxTilemap_obj,colorTransform),HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad")},
	{hx::fsObject /*::openfl::_legacy::display::BlendMode*/ ,(int)offsetof(FlxTilemap_obj,blend),HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTilemap_obj,shader),HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxTilemap_obj,_flashPoint),HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(FlxTilemap_obj,_flashRect),HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTilemap_obj,_buffers),HX_HCSTRING("_buffers","\xf4","\xfc","\x48","\xeb")},
	{hx::fsInt,(int)offsetof(FlxTilemap_obj,_tileWidth),HX_HCSTRING("_tileWidth","\xb9","\x8f","\x60","\xb1")},
	{hx::fsInt,(int)offsetof(FlxTilemap_obj,_tileHeight),HX_HCSTRING("_tileHeight","\xd4","\xaa","\x6c","\x39")},
	{hx::fsFloat,(int)offsetof(FlxTilemap_obj,_scaledTileWidth),HX_HCSTRING("_scaledTileWidth","\x7f","\x28","\x09","\x38")},
	{hx::fsFloat,(int)offsetof(FlxTilemap_obj,_scaledTileHeight),HX_HCSTRING("_scaledTileHeight","\x4e","\xbf","\x49","\x86")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxTilemap_obj,_debugTileNotSolid),HX_HCSTRING("_debugTileNotSolid","\x1a","\xdf","\x89","\x53")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxTilemap_obj,_debugTilePartial),HX_HCSTRING("_debugTilePartial","\xbf","\x14","\x2d","\x78")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxTilemap_obj,_debugTileSolid),HX_HCSTRING("_debugTileSolid","\xe9","\x85","\xdf","\xf6")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(FlxTilemap_obj,_debugRect),HX_HCSTRING("_debugRect","\xd8","\x6c","\x95","\x8a")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxTilemap_obj,_helperPoint),HX_HCSTRING("_helperPoint","\x03","\xe6","\x14","\xf8")},
	{hx::fsObject /*::flixel::math::FlxMatrix*/ ,(int)offsetof(FlxTilemap_obj,_matrix),HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::flixel::tile::FlxTilemapBuffer*/ ,(void *) &FlxTilemap_obj::_helperBuffer,HX_HCSTRING("_helperBuffer","\xed","\x07","\x9b","\xf3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("useScaleHack","\x44","\x9c","\x16","\x98"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"),
	HX_HCSTRING("graphic","\xa8","\x5a","\x07","\x74"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"),
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4"),
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7"),
	HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d"),
	HX_HCSTRING("_buffers","\xf4","\xfc","\x48","\xeb"),
	HX_HCSTRING("_tileWidth","\xb9","\x8f","\x60","\xb1"),
	HX_HCSTRING("_tileHeight","\xd4","\xaa","\x6c","\x39"),
	HX_HCSTRING("_scaledTileWidth","\x7f","\x28","\x09","\x38"),
	HX_HCSTRING("_scaledTileHeight","\x4e","\xbf","\x49","\x86"),
	HX_HCSTRING("_debugTileNotSolid","\x1a","\xdf","\x89","\x53"),
	HX_HCSTRING("_debugTilePartial","\xbf","\x14","\x2d","\x78"),
	HX_HCSTRING("_debugTileSolid","\xe9","\x85","\xdf","\xf6"),
	HX_HCSTRING("_debugRect","\xd8","\x6c","\x95","\x8a"),
	HX_HCSTRING("_helperPoint","\x03","\xe6","\x14","\xf8"),
	HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("set_frames","\xe3","\xbd","\x8a","\xa0"),
	HX_HCSTRING("cacheGraphics","\x2d","\x61","\x95","\xfc"),
	HX_HCSTRING("initTileObjects","\x16","\xbe","\x45","\x2e"),
	HX_HCSTRING("computeDimensions","\xa4","\xa4","\xeb","\xf3"),
	HX_HCSTRING("updateMap","\x13","\xe8","\xdf","\x82"),
	HX_HCSTRING("drawDebugOnCamera","\xf3","\x47","\x7b","\xcb"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("setDirty","\x10","\xb9","\x04","\xe8"),
	HX_HCSTRING("overlapsWithCallback","\x17","\xc3","\x72","\xa8"),
	HX_HCSTRING("getTileIndexByCoords","\x03","\x79","\x8b","\x76"),
	HX_HCSTRING("getTileCoordsByIndex","\xb9","\x63","\x25","\xa1"),
	HX_HCSTRING("getTileCoords","\x22","\xd6","\x8d","\x89"),
	HX_HCSTRING("follow","\x71","\x91","\x96","\xf9"),
	HX_HCSTRING("ray","\xea","\xd5","\x56","\x00"),
	HX_HCSTRING("tileToSprite","\x2e","\xe9","\x26","\xc3"),
	HX_HCSTRING("updateBuffers","\x6a","\x08","\xff","\x7c"),
	HX_HCSTRING("drawTilemap","\x8a","\x34","\xd7","\x8e"),
	HX_HCSTRING("makeDebugTile","\x53","\x67","\xf1","\x28"),
	HX_HCSTRING("updateTile","\xd7","\xb5","\xb1","\x05"),
	HX_HCSTRING("createBuffer","\x1c","\xfd","\xe9","\xf2"),
	HX_HCSTRING("onGameResize","\x85","\xe5","\x34","\x23"),
	HX_HCSTRING("onDrawDebugChanged","\x44","\xe0","\xf1","\x9f"),
	HX_HCSTRING("set_antialiasing","\xf1","\xf0","\x93","\xa3"),
	HX_HCSTRING("set_graphic","\xcb","\xc1","\x6e","\x04"),
	HX_HCSTRING("set_pixelPerfectRender","\x9a","\x4f","\x8f","\xbc"),
	HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("updateColorTransform","\x72","\x0f","\xd2","\x2f"),
	HX_HCSTRING("set_blend","\xb4","\x30","\xef","\xdb"),
	HX_HCSTRING("setScaleXYCallback","\x6e","\xfd","\x35","\x90"),
	HX_HCSTRING("setScaleXCallback","\xb5","\x05","\xa2","\x03"),
	HX_HCSTRING("setScaleYCallback","\xb6","\x6e","\x93","\xd6"),
	HX_HCSTRING("defaultTileToSprite","\x8f","\xab","\x7f","\x3f"),
	HX_HCSTRING("set_allowCollisions","\xcd","\x8b","\x81","\x21"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::_helperBuffer,"_helperBuffer");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::_helperBuffer,"_helperBuffer");
};

#endif

hx::Class FlxTilemap_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_helperBuffer","\xed","\x07","\x9b","\xf3"),
	::String(null()) };

void FlxTilemap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tile.FlxTilemap","\x2a","\xd5","\x63","\x29");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTilemap_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxTilemap_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTilemap_obj >;
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

void FlxTilemap_obj::__boot()
{
	_helperBuffer= ::Type_obj::createEmptyInstance(hx::ClassOf< ::flixel::tile::FlxTilemapBuffer >());
}

} // end namespace flixel
} // end namespace tile
