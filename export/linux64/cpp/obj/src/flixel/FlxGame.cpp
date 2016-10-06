#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_effects_postprocess_PostProcess
#include <flixel/effects/postprocess/PostProcess.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxTilesheet
#include <flixel/graphics/tile/FlxTilesheet.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxSwipe
#include <flixel/input/FlxSwipe.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSplash
#include <flixel/system/FlxSplash.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_Console
#include <flixel/system/debug/console/Console.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_debug_stats_Stats
#include <flixel/system/debug/stats/Stats.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_PluginFrontEnd
#include <flixel/system/frontEnds/PluginFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxFocusLostScreen
#include <flixel/system/ui/FlxFocusLostScreen.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSoundTray
#include <flixel/system/ui/FlxSoundTray.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal1
#include <flixel/util/_FlxSignal/FlxSignal1.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal2
#include <flixel/util/_FlxSignal/FlxSignal2.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DirectRenderer
#include <openfl/_legacy/display/DirectRenderer.h>
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
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_OpenGLView
#include <openfl/_legacy/display/OpenGLView.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_StageAlign
#include <openfl/_legacy/display/StageAlign.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_StageScaleMode
#include <openfl/_legacy/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Tilesheet
#include <openfl/_legacy/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{

Void FlxGame_obj::__construct(hx::Null< int >  __o_GameWidth,hx::Null< int >  __o_GameHeight,::hx::Class InitialState,hx::Null< Float >  __o_Zoom,hx::Null< int >  __o_UpdateFramerate,hx::Null< int >  __o_DrawFramerate,hx::Null< bool >  __o_SkipSplash,hx::Null< bool >  __o_StartFullscreen)
{
HX_STACK_FRAME("flixel.FlxGame","new",0xde7d5f44,"flixel.FlxGame.new","flixel/FlxGame.hx",41,0x34f39fed)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_GameWidth,"GameWidth")
HX_STACK_ARG(__o_GameHeight,"GameHeight")
HX_STACK_ARG(InitialState,"InitialState")
HX_STACK_ARG(__o_Zoom,"Zoom")
HX_STACK_ARG(__o_UpdateFramerate,"UpdateFramerate")
HX_STACK_ARG(__o_DrawFramerate,"DrawFramerate")
HX_STACK_ARG(__o_SkipSplash,"SkipSplash")
HX_STACK_ARG(__o_StartFullscreen,"StartFullscreen")
int GameWidth = __o_GameWidth.Default(0);
int GameHeight = __o_GameHeight.Default(0);
Float Zoom = __o_Zoom.Default(1);
int UpdateFramerate = __o_UpdateFramerate.Default(60);
int DrawFramerate = __o_DrawFramerate.Default(60);
bool SkipSplash = __o_SkipSplash.Default(false);
bool StartFullscreen = __o_StartFullscreen.Default(false);
{
	HX_STACK_LINE(223)
	this->postProcesses = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(219)
	this->postProcessLayer = ::openfl::_legacy::display::Sprite_obj::__new();
	HX_STACK_LINE(195)
	this->_resetGame = false;
	HX_STACK_LINE(185)
	this->_startFullscreen = false;
	HX_STACK_LINE(179)
	this->_skipSplash = false;
	HX_STACK_LINE(173)
	this->_customFocusLostScreen = ((::hx::Class)(hx::ClassOf< ::flixel::_system::ui::FlxFocusLostScreen >()));
	HX_STACK_LINE(166)
	this->_customSoundTray = ((::hx::Class)(hx::ClassOf< ::flixel::_system::ui::FlxSoundTray >()));
	HX_STACK_LINE(145)
	this->_onFocusFiredOnce = false;
	HX_STACK_LINE(133)
	this->_lostFocus = false;
	HX_STACK_LINE(106)
	this->_startTime = (int)0;
	HX_STACK_LINE(101)
	this->_total = (int)0;
	HX_STACK_LINE(88)
	this->_gameJustStarted = false;
	HX_STACK_LINE(82)
	this->filtersEnabled = true;
	HX_STACK_LINE(78)
	this->ticks = (int)0;
	HX_STACK_LINE(46)
	this->focusLostFramerate = (int)10;
	HX_STACK_LINE(243)
	super::__construct();
	HX_STACK_LINE(246)
	this->_startFullscreen = StartFullscreen;
	HX_STACK_LINE(250)
	::openfl::_legacy::display::Sprite tmp = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(250)
	this->_inputContainer = tmp;
	HX_STACK_LINE(252)
	bool tmp1 = (GameWidth == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(252)
	if ((tmp1)){
		HX_STACK_LINE(253)
		::openfl::_legacy::display::MovieClip tmp2 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(253)
		::openfl::_legacy::display::Stage tmp3 = tmp2->get_stage();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(253)
		int tmp4 = tmp3->get_stageWidth();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(253)
		GameWidth = tmp4;
	}
	HX_STACK_LINE(254)
	bool tmp2 = (GameHeight == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(254)
	if ((tmp2)){
		HX_STACK_LINE(255)
		::openfl::_legacy::display::MovieClip tmp3 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(255)
		::openfl::_legacy::display::Stage tmp4 = tmp3->get_stage();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(255)
		int tmp5 = tmp4->get_stageHeight();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(255)
		GameHeight = tmp5;
	}
	HX_STACK_LINE(258)
	int tmp3 = GameWidth;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(258)
	int tmp4 = GameHeight;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(258)
	Float tmp5 = Zoom;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(258)
	::flixel::FlxG_obj::init(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4,tmp5);
	HX_STACK_LINE(260)
	int tmp6 = UpdateFramerate;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(260)
	::flixel::FlxG_obj::set_updateFramerate(tmp6);
	HX_STACK_LINE(261)
	int tmp7 = DrawFramerate;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(261)
	::flixel::FlxG_obj::set_drawFramerate(tmp7);
	HX_STACK_LINE(262)
	Float tmp8 = this->_stepMS;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(262)
	this->_accumulator = tmp8;
	HX_STACK_LINE(263)
	this->_skipSplash = SkipSplash;
	HX_STACK_LINE(270)
	bool tmp9 = (InitialState == null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(270)
	::hx::Class tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(270)
	if ((tmp9)){
		HX_STACK_LINE(270)
		tmp10 = hx::ClassOf< ::flixel::FlxState >();
	}
	else{
		HX_STACK_LINE(270)
		tmp10 = InitialState;
	}
	HX_STACK_LINE(270)
	this->_initialState = tmp10;
	HX_STACK_LINE(272)
	::String tmp11 = ::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(272)
	Dynamic tmp12 = this->create_dyn();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(272)
	this->addEventListener(tmp11,tmp12,null(),null(),null());
}
;
	return null();
}

//FlxGame_obj::~FlxGame_obj() { }

Dynamic FlxGame_obj::__CreateEmpty() { return  new FlxGame_obj; }
hx::ObjectPtr< FlxGame_obj > FlxGame_obj::__new(hx::Null< int >  __o_GameWidth,hx::Null< int >  __o_GameHeight,::hx::Class InitialState,hx::Null< Float >  __o_Zoom,hx::Null< int >  __o_UpdateFramerate,hx::Null< int >  __o_DrawFramerate,hx::Null< bool >  __o_SkipSplash,hx::Null< bool >  __o_StartFullscreen)
{  hx::ObjectPtr< FlxGame_obj > _result_ = new FlxGame_obj();
	_result_->__construct(__o_GameWidth,__o_GameHeight,InitialState,__o_Zoom,__o_UpdateFramerate,__o_DrawFramerate,__o_SkipSplash,__o_StartFullscreen);
	return _result_;}

Dynamic FlxGame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGame_obj > _result_ = new FlxGame_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _result_;}

Void FlxGame_obj::setFilters( Array< ::Dynamic > filters){
{
		HX_STACK_FRAME("flixel.FlxGame","setFilters",0x71579bd5,"flixel.FlxGame.setFilters","flixel/FlxGame.hx",280,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(filters,"filters")
		HX_STACK_LINE(280)
		this->_filters = filters;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,setFilters,(void))

Void FlxGame_obj::create( Dynamic _){
{
		HX_STACK_FRAME("flixel.FlxGame","create",0x90873e98,"flixel.FlxGame.create","flixel/FlxGame.hx",287,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(288)
		::openfl::_legacy::display::Stage tmp = this->get_stage();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(288)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(288)
		if ((tmp1)){
			HX_STACK_LINE(290)
			return null();
		}
		HX_STACK_LINE(292)
		::String tmp2 = ::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(292)
		Dynamic tmp3 = this->create_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(292)
		this->removeEventListener(tmp2,tmp3,null());
		HX_STACK_LINE(294)
		int tmp4 = this->getTimer();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(294)
		this->_startTime = tmp4;
		HX_STACK_LINE(295)
		int tmp5 = this->getTimer();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(295)
		int tmp6 = this->_startTime;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(295)
		int tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(295)
		this->_total = tmp7;
		HX_STACK_LINE(298)
		bool tmp8 = this->_startFullscreen;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(298)
		::flixel::FlxG_obj::set_fullscreen(tmp8);
		HX_STACK_LINE(302)
		::openfl::_legacy::display::Stage tmp9 = this->get_stage();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(302)
		tmp9->set_scaleMode(::openfl::_legacy::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(303)
		::openfl::_legacy::display::Stage tmp10 = this->get_stage();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(303)
		tmp10->set_align(::openfl::_legacy::display::StageAlign_obj::TOP_LEFT);
		HX_STACK_LINE(304)
		::openfl::_legacy::display::Stage tmp11 = this->get_stage();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(304)
		int tmp12 = ::flixel::FlxG_obj::drawFramerate;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(304)
		tmp11->set_frameRate(tmp12);
		HX_STACK_LINE(306)
		::openfl::_legacy::display::Sprite tmp13 = this->_inputContainer;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(306)
		this->addChild(tmp13);
		HX_STACK_LINE(310)
		{
			HX_STACK_LINE(310)
			::openfl::_legacy::display::Sprite tmp14 = this->postProcessLayer;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(310)
			this->addChild(tmp14);
		}
		HX_STACK_LINE(315)
		::openfl::_legacy::display::MovieClip tmp14 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(315)
		::openfl::_legacy::display::Stage tmp15 = tmp14->get_stage();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(315)
		int tmp16 = tmp15->get_stageWidth();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(315)
		::openfl::_legacy::display::MovieClip tmp17 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(315)
		::openfl::_legacy::display::Stage tmp18 = tmp17->get_stage();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(315)
		int tmp19 = tmp18->get_stageHeight();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(315)
		::flixel::_system::debug::FlxDebugger tmp20 = ::flixel::_system::debug::FlxDebugger_obj::__new(tmp16,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(315)
		this->debugger = tmp20;
		HX_STACK_LINE(316)
		::flixel::_system::debug::FlxDebugger tmp21 = this->debugger;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(316)
		this->addChild(tmp21);
		HX_STACK_LINE(323)
		::hx::Class tmp22 = this->_customSoundTray;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(323)
		::flixel::_system::ui::FlxSoundTray tmp23 = ::Type_obj::createInstance(tmp22,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(323)
		this->soundTray = tmp23;
		HX_STACK_LINE(324)
		::flixel::_system::ui::FlxSoundTray tmp24 = this->soundTray;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(324)
		this->addChild(tmp24);
		HX_STACK_LINE(328)
		::hx::Class tmp25 = this->_customFocusLostScreen;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(328)
		::flixel::_system::ui::FlxFocusLostScreen tmp26 = ::Type_obj::createInstance(tmp25,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(328)
		this->_focusLostScreen = tmp26;
		HX_STACK_LINE(329)
		::flixel::_system::ui::FlxFocusLostScreen tmp27 = this->_focusLostScreen;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(329)
		this->addChild(tmp27);
		HX_STACK_LINE(335)
		::openfl::_legacy::display::Stage tmp28 = this->get_stage();		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(335)
		Dynamic tmp29 = this->onFocusLost_dyn();		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(335)
		tmp28->addEventListener(HX_HCSTRING("focusOut","\x96","\x6f","\x5e","\x11"),tmp29,null(),null(),null());
		HX_STACK_LINE(336)
		::openfl::_legacy::display::Stage tmp30 = this->get_stage();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(336)
		Dynamic tmp31 = this->onFocus_dyn();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(336)
		tmp30->addEventListener(HX_HCSTRING("focusIn","\xdd","\x45","\x83","\x41"),tmp31,null(),null(),null());
		HX_STACK_LINE(343)
		{
			HX_STACK_LINE(343)
			::flixel::_system::frontEnds::SignalFrontEnd tmp32 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(343)
			tmp32->__Field(HX_HCSTRING("preGameReset","\xda","\x1b","\xe3","\xc1"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
			HX_STACK_LINE(343)
			this->_skipSplash = true;
			HX_STACK_LINE(343)
			bool tmp33 = this->_skipSplash;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(343)
			bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(343)
			bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(343)
			if ((tmp34)){
				HX_STACK_LINE(343)
				::hx::Class tmp36 = ::flixel::_system::FlxSplash_obj::nextState;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(343)
				::hx::Class tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(343)
				tmp35 = (tmp37 != null());
			}
			else{
				HX_STACK_LINE(343)
				tmp35 = true;
			}
			HX_STACK_LINE(343)
			if ((tmp35)){
				HX_STACK_LINE(343)
				::hx::Class tmp36 = this->_initialState;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(343)
				::flixel::FlxState tmp37 = ::Type_obj::createInstance(tmp36,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(343)
				this->_requestedState = tmp37;
				HX_STACK_LINE(343)
				::hx::Class tmp38 = ::flixel::_system::FlxSplash_obj::nextState;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(343)
				bool tmp39 = (tmp38 == null());		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(343)
				if ((tmp39)){
					HX_STACK_LINE(343)
					this->_gameJustStarted = true;
				}
			}
			else{
				HX_STACK_LINE(343)
				::hx::Class tmp36 = this->_initialState;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(343)
				::flixel::_system::FlxSplash_obj::nextState = tmp36;
				HX_STACK_LINE(343)
				::flixel::_system::FlxSplash tmp37 = ::flixel::_system::FlxSplash_obj::__new(null());		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(343)
				this->_requestedState = tmp37;
				HX_STACK_LINE(343)
				this->_skipSplash = true;
			}
			HX_STACK_LINE(343)
			::flixel::FlxState tmp36 = this->_requestedState;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(343)
			bool tmp37 = ::Std_obj::is(tmp36,hx::ClassOf< ::flixel::FlxSubState >());		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(343)
			if ((tmp37)){
				HX_STACK_LINE(343)
				HX_STACK_DO_THROW(HX_HCSTRING("You can't set FlxSubState class instance as the state for you game","\xf2","\x8e","\x2c","\x80"));
			}
			HX_STACK_LINE(343)
			::flixel::FlxG_obj::reset();
			HX_STACK_LINE(343)
			::flixel::_system::frontEnds::SignalFrontEnd tmp38 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(343)
			tmp38->__Field(HX_HCSTRING("postGameReset","\xfd","\x07","\x96","\xc9"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
		}
		HX_STACK_LINE(344)
		this->switchState();
		HX_STACK_LINE(346)
		int tmp32 = ::flixel::FlxG_obj::updateFramerate;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(346)
		int tmp33 = ::flixel::FlxG_obj::drawFramerate;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(346)
		bool tmp34 = (tmp32 < tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(346)
		if ((tmp34)){
			HX_STACK_LINE(348)
			::flixel::_system::frontEnds::LogFrontEnd tmp35 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(348)
			::flixel::_system::debug::log::LogStyle tmp36 = ::flixel::_system::debug::log::LogStyle_obj::WARNING;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(348)
			tmp35->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(HX_HCSTRING("FlxG.updateFramerate: The update framerate shouldn't be smaller than the draw framerate, since it can slow down your game.","\x81","\x2e","\x69","\x6b"),tmp36,true);
		}
		HX_STACK_LINE(352)
		::openfl::_legacy::display::Stage tmp35 = this->get_stage();		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(352)
		::String tmp36 = ::openfl::_legacy::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(352)
		Dynamic tmp37 = this->onEnterFrame_dyn();		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(352)
		tmp35->addEventListener(tmp36,tmp37,null(),null(),null());
		HX_STACK_LINE(356)
		::openfl::_legacy::display::Stage tmp38 = this->get_stage();		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(356)
		::String tmp39 = ::openfl::_legacy::events::Event_obj::RESIZE;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(356)
		Dynamic tmp40 = this->onResize_dyn();		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(356)
		tmp38->addEventListener(tmp39,tmp40,null(),null(),null());
		HX_STACK_LINE(359)
		::openfl::_legacy::display::MovieClip tmp41 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(359)
		::openfl::_legacy::display::Stage tmp42 = tmp41->get_stage();		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(359)
		int tmp43 = tmp42->get_stageWidth();		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(359)
		::openfl::_legacy::display::MovieClip tmp44 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(359)
		::openfl::_legacy::display::Stage tmp45 = tmp44->get_stage();		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(359)
		int tmp46 = tmp45->get_stageHeight();		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(359)
		this->resizeGame(tmp43,tmp46);
		HX_STACK_LINE(361)
		::String tmp47 = ::openfl::_legacy::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(361)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp48 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(361)
		Dynamic tmp49 = tmp48->__Field(HX_HCSTRING("onAssetsReload","\xfb","\x33","\x88","\x63"), hx::paccDynamic );		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(361)
		::openfl::_legacy::Assets_obj::addEventListener(tmp47,tmp49,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,create,(void))

Void FlxGame_obj::onFocus( Dynamic _){
{
		HX_STACK_FRAME("flixel.FlxGame","onFocus",0x6f2bcf1d,"flixel.FlxGame.onFocus","flixel/FlxGame.hx",365,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(375)
		bool tmp = this->_onFocusFiredOnce;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(375)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(375)
		if ((tmp1)){
			HX_STACK_LINE(377)
			this->_onFocusFiredOnce = true;
			HX_STACK_LINE(378)
			return null();
		}
		HX_STACK_LINE(387)
		this->_lostFocus = false;
		HX_STACK_LINE(388)
		::flixel::_system::frontEnds::SignalFrontEnd tmp2 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(388)
		tmp2->__Field(HX_HCSTRING("focusGained","\x96","\xec","\x66","\xa1"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
		HX_STACK_LINE(389)
		::flixel::FlxState tmp3 = this->_state;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(389)
		tmp3->onFocus();
		HX_STACK_LINE(391)
		bool tmp4 = ::flixel::FlxG_obj::autoPause;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(391)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(391)
		if ((tmp5)){
			HX_STACK_LINE(393)
			return null();
		}
		HX_STACK_LINE(397)
		::flixel::_system::ui::FlxFocusLostScreen tmp6 = this->_focusLostScreen;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(397)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(397)
		if ((tmp7)){
			HX_STACK_LINE(399)
			::flixel::_system::ui::FlxFocusLostScreen tmp8 = this->_focusLostScreen;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(399)
			tmp8->__Field(HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"), hx::paccDynamic )(false);
		}
		HX_STACK_LINE(404)
		::flixel::_system::debug::FlxDebugger tmp8 = this->debugger;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(404)
		tmp8->__Field(HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84"), hx::paccDynamic )->__Field(HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"), hx::paccDynamic )();
		HX_STACK_LINE(407)
		::openfl::_legacy::display::Stage tmp9 = this->get_stage();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(407)
		int tmp10 = ::flixel::FlxG_obj::drawFramerate;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(407)
		tmp9->set_frameRate(tmp10);
		HX_STACK_LINE(409)
		::flixel::_system::frontEnds::SoundFrontEnd tmp11 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(409)
		tmp11->__Field(HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"), hx::paccDynamic )();
		HX_STACK_LINE(411)
		{
			HX_STACK_LINE(411)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(411)
			::flixel::_system::frontEnds::InputFrontEnd tmp12 = ::flixel::FlxG_obj::inputs;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(411)
			Array< ::flixel::input::IFlxInputManager > _g1 = tmp12->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(411)
			while((true)){
				HX_STACK_LINE(411)
				bool tmp13 = (_g < _g1->length);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(411)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(411)
				if ((tmp14)){
					HX_STACK_LINE(411)
					break;
				}
				HX_STACK_LINE(411)
				::flixel::input::IFlxInputManager tmp15 = _g1->__get(_g);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(411)
				::flixel::input::IFlxInputManager input = tmp15;		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(411)
				++(_g);
				HX_STACK_LINE(411)
				input->onFocus();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onFocus,(void))

Void FlxGame_obj::onFocusLost( Dynamic _){
{
		HX_STACK_FRAME("flixel.FlxGame","onFocusLost",0xb7eef7a1,"flixel.FlxGame.onFocusLost","flixel/FlxGame.hx",415,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(423)
		this->_lostFocus = true;
		HX_STACK_LINE(424)
		::flixel::_system::frontEnds::SignalFrontEnd tmp = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(424)
		tmp->__Field(HX_HCSTRING("focusLost","\xdc","\x01","\x43","\x1f"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
		HX_STACK_LINE(425)
		::flixel::FlxState tmp1 = this->_state;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(425)
		tmp1->onFocusLost();
		HX_STACK_LINE(427)
		bool tmp2 = ::flixel::FlxG_obj::autoPause;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(427)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(427)
		if ((tmp3)){
			HX_STACK_LINE(429)
			return null();
		}
		HX_STACK_LINE(433)
		::flixel::_system::ui::FlxFocusLostScreen tmp4 = this->_focusLostScreen;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(433)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(433)
		if ((tmp5)){
			HX_STACK_LINE(435)
			::flixel::_system::ui::FlxFocusLostScreen tmp6 = this->_focusLostScreen;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(435)
			tmp6->__Field(HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"), hx::paccDynamic )(true);
		}
		HX_STACK_LINE(440)
		::flixel::_system::debug::FlxDebugger tmp6 = this->debugger;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(440)
		tmp6->__Field(HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84"), hx::paccDynamic )->__Field(HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"), hx::paccDynamic )();
		HX_STACK_LINE(443)
		::openfl::_legacy::display::Stage tmp7 = this->get_stage();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(443)
		int tmp8 = this->focusLostFramerate;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(443)
		tmp7->set_frameRate(tmp8);
		HX_STACK_LINE(445)
		::flixel::_system::frontEnds::SoundFrontEnd tmp9 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(445)
		tmp9->__Field(HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"), hx::paccDynamic )();
		HX_STACK_LINE(447)
		{
			HX_STACK_LINE(447)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(447)
			::flixel::_system::frontEnds::InputFrontEnd tmp10 = ::flixel::FlxG_obj::inputs;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(447)
			Array< ::flixel::input::IFlxInputManager > _g1 = tmp10->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(447)
			while((true)){
				HX_STACK_LINE(447)
				bool tmp11 = (_g < _g1->length);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(447)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(447)
				if ((tmp12)){
					HX_STACK_LINE(447)
					break;
				}
				HX_STACK_LINE(447)
				::flixel::input::IFlxInputManager tmp13 = _g1->__get(_g);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(447)
				::flixel::input::IFlxInputManager input = tmp13;		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(447)
				++(_g);
				HX_STACK_LINE(447)
				input->onFocusLost();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onFocusLost,(void))

Void FlxGame_obj::onResize( Dynamic _){
{
		HX_STACK_FRAME("flixel.FlxGame","onResize",0xebfa470f,"flixel.FlxGame.onResize","flixel/FlxGame.hx",452,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(453)
		::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(453)
		::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(453)
		int tmp2 = tmp1->get_stageWidth();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(453)
		int width = tmp2;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(454)
		::openfl::_legacy::display::MovieClip tmp3 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(454)
		::openfl::_legacy::display::Stage tmp4 = tmp3->get_stage();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(454)
		int tmp5 = tmp4->get_stageHeight();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(454)
		int height = tmp5;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(457)
		bool tmp6 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(457)
		if ((tmp6)){
			HX_STACK_LINE(459)
			::flixel::_system::frontEnds::BitmapFrontEnd tmp7 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(459)
			tmp7->__Field(HX_HCSTRING("onContext","\x90","\x4e","\x22","\xf1"), hx::paccDynamic )();
		}
		HX_STACK_LINE(463)
		int tmp7 = width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(463)
		int tmp8 = height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(463)
		this->resizeGame(tmp7,tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onResize,(void))

Void FlxGame_obj::resizeGame( int width,int height){
{
		HX_STACK_FRAME("flixel.FlxGame","resizeGame",0xcdcb59a2,"flixel.FlxGame.resizeGame","flixel/FlxGame.hx",467,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(468)
		{
			HX_STACK_LINE(468)
			::flixel::_system::scaleModes::BaseScaleMode tmp = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(468)
			int tmp1 = width;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(468)
			int tmp2 = height;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(468)
			tmp->__Field(HX_HCSTRING("onMeasure","\xff","\xb3","\x94","\x14"), hx::paccDynamic )(tmp1,tmp2);
		}
		HX_STACK_LINE(470)
		::flixel::FlxState tmp = this->_state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(470)
		int tmp1 = width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(470)
		int tmp2 = height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(470)
		tmp->onResize(tmp1,tmp2);
		HX_STACK_LINE(471)
		::flixel::_system::frontEnds::SignalFrontEnd tmp3 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(471)
		int tmp4 = width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(471)
		int tmp5 = height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(471)
		tmp3->__Field(HX_HCSTRING("gameResized","\x1e","\xd2","\x29","\x48"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )(tmp4,tmp5);
		HX_STACK_LINE(473)
		::flixel::_system::frontEnds::CameraFrontEnd tmp6 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(473)
		tmp6->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )();
		HX_STACK_LINE(476)
		::flixel::_system::debug::FlxDebugger tmp7 = this->debugger;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(476)
		int tmp8 = width;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(476)
		int tmp9 = height;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(476)
		tmp7->__Field(HX_HCSTRING("onResize","\x73","\x50","\x28","\xe8"), hx::paccDynamic )(tmp8,tmp9);
		HX_STACK_LINE(480)
		::flixel::_system::ui::FlxFocusLostScreen tmp10 = this->_focusLostScreen;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(480)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(480)
		if ((tmp11)){
			HX_STACK_LINE(482)
			::flixel::_system::ui::FlxFocusLostScreen tmp12 = this->_focusLostScreen;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(482)
			tmp12->__Field(HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"), hx::paccDynamic )();
		}
		HX_STACK_LINE(487)
		::flixel::_system::ui::FlxSoundTray tmp12 = this->soundTray;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(487)
		bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(487)
		if ((tmp13)){
			HX_STACK_LINE(489)
			::flixel::_system::ui::FlxSoundTray tmp14 = this->soundTray;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(489)
			tmp14->__Field(HX_HCSTRING("screenCenter","\x61","\x2e","\xf9","\xe2"), hx::paccDynamic )();
		}
		HX_STACK_LINE(494)
		{
			HX_STACK_LINE(494)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(494)
			Array< ::Dynamic > _g1 = this->postProcesses;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(494)
			while((true)){
				HX_STACK_LINE(494)
				bool tmp14 = (_g < _g1->length);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(494)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(494)
				if ((tmp15)){
					HX_STACK_LINE(494)
					break;
				}
				HX_STACK_LINE(494)
				::flixel::effects::postprocess::PostProcess tmp16 = _g1->__get(_g).StaticCast< ::flixel::effects::postprocess::PostProcess >();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(494)
				::flixel::effects::postprocess::PostProcess postProcess = tmp16;		HX_STACK_VAR(postProcess,"postProcess");
				HX_STACK_LINE(494)
				++(_g);
				HX_STACK_LINE(496)
				postProcess->rebuild();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGame_obj,resizeGame,(void))

Void FlxGame_obj::onEnterFrame( Dynamic _){
{
		HX_STACK_FRAME("flixel.FlxGame","onEnterFrame",0x001b1a90,"flixel.FlxGame.onEnterFrame","flixel/FlxGame.hx",505,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(506)
		int tmp = this->getTimer();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(506)
		int tmp1 = this->_startTime;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(506)
		int tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(506)
		this->ticks = tmp2;
		HX_STACK_LINE(507)
		int tmp3 = this->ticks;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(507)
		int tmp4 = this->_total;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(507)
		int tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(507)
		this->_elapsedMS = tmp5;
		HX_STACK_LINE(508)
		int tmp6 = this->ticks;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(508)
		this->_total = tmp6;
		HX_STACK_LINE(511)
		::flixel::_system::ui::FlxSoundTray tmp7 = this->soundTray;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(511)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(511)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(511)
		if ((tmp8)){
			HX_STACK_LINE(511)
			::flixel::_system::ui::FlxSoundTray tmp10 = this->soundTray;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(511)
			::flixel::_system::ui::FlxSoundTray tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(511)
			tmp9 = tmp11->__Field(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(511)
			tmp9 = false;
		}
		HX_STACK_LINE(511)
		if ((tmp9)){
			HX_STACK_LINE(513)
			::flixel::_system::ui::FlxSoundTray tmp10 = this->soundTray;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(513)
			Float tmp11 = this->_elapsedMS;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(513)
			tmp10->__Field(HX_HCSTRING("update","\x09","\x86","\x05","\x87"), hx::paccDynamic )(tmp11);
		}
		HX_STACK_LINE(517)
		bool tmp10 = this->_lostFocus;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(517)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(517)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(517)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(517)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(517)
		if ((tmp13)){
			HX_STACK_LINE(517)
			bool tmp15 = ::flixel::FlxG_obj::autoPause;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(517)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(517)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(517)
			tmp14 = !(tmp17);
		}
		else{
			HX_STACK_LINE(517)
			tmp14 = true;
		}
		HX_STACK_LINE(517)
		if ((tmp14)){
			HX_STACK_LINE(519)
			::flixel::_system::frontEnds::VCRFrontEnd tmp15 = ::flixel::FlxG_obj::vcr;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(519)
			bool tmp16 = tmp15->__Field(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(519)
			if ((tmp16)){
				HX_STACK_LINE(521)
				::flixel::_system::frontEnds::VCRFrontEnd tmp17 = ::flixel::FlxG_obj::vcr;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(521)
				bool tmp18 = tmp17->__Field(HX_HCSTRING("stepRequested","\x82","\x98","\x54","\xd1"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(521)
				if ((tmp18)){
					HX_STACK_LINE(523)
					::flixel::_system::frontEnds::VCRFrontEnd tmp19 = ::flixel::FlxG_obj::vcr;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(523)
					tmp19->__FieldRef(HX_HCSTRING("stepRequested","\x82","\x98","\x54","\xd1")) = false;
				}
				else{
					HX_STACK_LINE(525)
					::flixel::FlxState tmp19 = this->_state;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(525)
					::flixel::FlxState tmp20 = this->_requestedState;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(525)
					bool tmp21 = (tmp19 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(525)
					if ((tmp21)){
						HX_STACK_LINE(528)
						::flixel::_system::debug::FlxDebugger tmp22 = this->debugger;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(528)
						tmp22->__Field(HX_HCSTRING("update","\x09","\x86","\x05","\x87"), hx::paccDynamic )();
						HX_STACK_LINE(530)
						return null();
					}
				}
			}
			HX_STACK_LINE(534)
			bool tmp17 = ::flixel::FlxG_obj::fixedTimestep;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(534)
			if ((tmp17)){
				HX_STACK_LINE(536)
				Float tmp18 = this->_elapsedMS;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(536)
				hx::AddEq(this->_accumulator,tmp18);
				HX_STACK_LINE(537)
				Float tmp19 = this->_accumulator;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(537)
				Float tmp20 = this->_maxAccumulation;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(537)
				bool tmp21 = (tmp19 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(537)
				Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(537)
				if ((tmp21)){
					HX_STACK_LINE(537)
					tmp22 = this->_maxAccumulation;
				}
				else{
					HX_STACK_LINE(537)
					tmp22 = this->_accumulator;
				}
				HX_STACK_LINE(537)
				this->_accumulator = tmp22;
				HX_STACK_LINE(539)
				while((true)){
					HX_STACK_LINE(539)
					Float tmp23 = this->_accumulator;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(539)
					Float tmp24 = this->_stepMS;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(539)
					bool tmp25 = (tmp23 >= tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(539)
					bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(539)
					if ((tmp26)){
						HX_STACK_LINE(539)
						break;
					}
					HX_STACK_LINE(541)
					this->step();
					HX_STACK_LINE(542)
					Float tmp27 = this->_stepMS;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(542)
					hx::SubEq(this->_accumulator,tmp27);
				}
			}
			else{
				HX_STACK_LINE(547)
				this->step();
			}
			HX_STACK_LINE(551)
			::flixel::FlxBasic_obj::visibleCount = (int)0;
			HX_STACK_LINE(554)
			this->draw();
			HX_STACK_LINE(557)
			::flixel::_system::debug::FlxDebugger tmp18 = this->debugger;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(557)
			int tmp19 = ::flixel::FlxBasic_obj::visibleCount;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(557)
			tmp18->__Field(HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84"), hx::paccDynamic )->__Field(HX_HCSTRING("visibleObjects","\x82","\xea","\xf1","\x36"), hx::paccDynamic )(tmp19);
			HX_STACK_LINE(558)
			::flixel::_system::debug::FlxDebugger tmp20 = this->debugger;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(558)
			tmp20->__Field(HX_HCSTRING("update","\x09","\x86","\x05","\x87"), hx::paccDynamic )();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onEnterFrame,(void))

Void FlxGame_obj::resetGame( ){
{
		HX_STACK_FRAME("flixel.FlxGame","resetGame",0xde30cf45,"flixel.FlxGame.resetGame","flixel/FlxGame.hx",568,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(569)
		::flixel::_system::frontEnds::SignalFrontEnd tmp = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(569)
		tmp->__Field(HX_HCSTRING("preGameReset","\xda","\x1b","\xe3","\xc1"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
		HX_STACK_LINE(572)
		this->_skipSplash = true;
		HX_STACK_LINE(575)
		bool tmp1 = this->_skipSplash;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(575)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(575)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(575)
		if ((tmp2)){
			HX_STACK_LINE(575)
			::hx::Class tmp4 = ::flixel::_system::FlxSplash_obj::nextState;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(575)
			::hx::Class tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(575)
			tmp3 = (tmp5 != null());
		}
		else{
			HX_STACK_LINE(575)
			tmp3 = true;
		}
		HX_STACK_LINE(575)
		if ((tmp3)){
			HX_STACK_LINE(577)
			::hx::Class tmp4 = this->_initialState;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(577)
			::flixel::FlxState tmp5 = ::Type_obj::createInstance(tmp4,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(577)
			this->_requestedState = tmp5;
			HX_STACK_LINE(578)
			::hx::Class tmp6 = ::flixel::_system::FlxSplash_obj::nextState;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(578)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(578)
			if ((tmp7)){
				HX_STACK_LINE(580)
				this->_gameJustStarted = true;
			}
		}
		else{
			HX_STACK_LINE(585)
			::hx::Class tmp4 = this->_initialState;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(585)
			::flixel::_system::FlxSplash_obj::nextState = tmp4;
			HX_STACK_LINE(586)
			::flixel::_system::FlxSplash tmp5 = ::flixel::_system::FlxSplash_obj::__new(null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(586)
			this->_requestedState = tmp5;
			HX_STACK_LINE(587)
			this->_skipSplash = true;
		}
		HX_STACK_LINE(591)
		::flixel::FlxState tmp4 = this->_requestedState;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(591)
		bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::flixel::FlxSubState >());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(591)
		if ((tmp5)){
			HX_STACK_LINE(593)
			HX_STACK_DO_THROW(HX_HCSTRING("You can't set FlxSubState class instance as the state for you game","\xf2","\x8e","\x2c","\x80"));
		}
		HX_STACK_LINE(597)
		::flixel::FlxG_obj::reset();
		HX_STACK_LINE(599)
		::flixel::_system::frontEnds::SignalFrontEnd tmp6 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(599)
		tmp6->__Field(HX_HCSTRING("postGameReset","\xfd","\x07","\x96","\xc9"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,resetGame,(void))

Void FlxGame_obj::switchState( ){
{
		HX_STACK_FRAME("flixel.FlxGame","switchState",0xedf41a61,"flixel.FlxGame.switchState","flixel/FlxGame.hx",608,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(610)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(610)
		tmp->__Field(HX_HCSTRING("clearCache","\x75","\xd9","\x1e","\x16"), hx::paccDynamic )();
		HX_STACK_LINE(611)
		::flixel::_system::frontEnds::CameraFrontEnd tmp1 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(611)
		tmp1->__Field(HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"), hx::paccDynamic )(null());
		HX_STACK_LINE(612)
		::flixel::_system::frontEnds::InputFrontEnd tmp2 = ::flixel::FlxG_obj::inputs;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(612)
		tmp2->__Field(HX_HCSTRING("onStateSwitch","\x06","\xb4","\xec","\xa2"), hx::paccDynamic )();
		HX_STACK_LINE(614)
		::flixel::_system::frontEnds::SoundFrontEnd tmp3 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(614)
		tmp3->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )(null());
		HX_STACK_LINE(617)
		::flixel::_system::frontEnds::SignalFrontEnd tmp4 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(617)
		tmp4->__Field(HX_HCSTRING("stateSwitched","\x84","\x32","\x02","\x37"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
		HX_STACK_LINE(624)
		::flixel::FlxState tmp5 = this->_state;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(624)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(624)
		if ((tmp6)){
			HX_STACK_LINE(626)
			::flixel::FlxState tmp7 = this->_state;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(626)
			tmp7->destroy();
		}
		HX_STACK_LINE(630)
		::flixel::FlxState tmp7 = this->_requestedState;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(630)
		this->_state = tmp7;
		HX_STACK_LINE(632)
		::flixel::_system::frontEnds::SignalFrontEnd tmp8 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(632)
		::flixel::FlxState tmp9 = this->_state;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(632)
		tmp8->__Field(HX_HCSTRING("preStateCreate","\x8a","\xe8","\xdd","\x06"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )(tmp9);
		HX_STACK_LINE(634)
		::flixel::FlxState tmp10 = this->_state;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(634)
		tmp10->create();
		HX_STACK_LINE(636)
		bool tmp11 = this->_gameJustStarted;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(636)
		if ((tmp11)){
			HX_STACK_LINE(638)
			this->gameStart();
		}
		HX_STACK_LINE(642)
		{
			HX_STACK_LINE(642)
			::flixel::FlxState tmp12 = this->_state;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(642)
			Dynamic value = tmp12;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(642)
			::flixel::_system::debug::FlxDebugger tmp13 = this->debugger;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(642)
			::haxe::ds::StringMap tmp14 = tmp13->__Field(HX_HCSTRING("console","\x57","\xeb","\xd5","\x18"), hx::paccDynamic )->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(642)
			Dynamic tmp15 = value;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(642)
			tmp14->set(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),tmp15);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,switchState,(void))

Void FlxGame_obj::gameStart( ){
{
		HX_STACK_FRAME("flixel.FlxGame","gameStart",0x0d0c34f4,"flixel.FlxGame.gameStart","flixel/FlxGame.hx",647,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(648)
		::flixel::_system::frontEnds::SignalFrontEnd tmp = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(648)
		tmp->__Field(HX_HCSTRING("gameStarted","\x6f","\x9f","\xd1","\x19"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
		HX_STACK_LINE(649)
		this->_gameJustStarted = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,gameStart,(void))

Void FlxGame_obj::step( ){
{
		HX_STACK_FRAME("flixel.FlxGame","step",0xd28f5fe8,"flixel.FlxGame.step","flixel/FlxGame.hx",659,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(661)
		bool tmp = this->_resetGame;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(661)
		if ((tmp)){
			HX_STACK_LINE(663)
			{
				HX_STACK_LINE(663)
				::flixel::_system::frontEnds::SignalFrontEnd tmp1 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(663)
				tmp1->__Field(HX_HCSTRING("preGameReset","\xda","\x1b","\xe3","\xc1"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
				HX_STACK_LINE(663)
				this->_skipSplash = true;
				HX_STACK_LINE(663)
				bool tmp2 = this->_skipSplash;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(663)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(663)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(663)
				if ((tmp3)){
					HX_STACK_LINE(663)
					::hx::Class tmp5 = ::flixel::_system::FlxSplash_obj::nextState;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(663)
					::hx::Class tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(663)
					tmp4 = (tmp6 != null());
				}
				else{
					HX_STACK_LINE(663)
					tmp4 = true;
				}
				HX_STACK_LINE(663)
				if ((tmp4)){
					HX_STACK_LINE(663)
					::hx::Class tmp5 = this->_initialState;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(663)
					::flixel::FlxState tmp6 = ::Type_obj::createInstance(tmp5,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(663)
					this->_requestedState = tmp6;
					HX_STACK_LINE(663)
					::hx::Class tmp7 = ::flixel::_system::FlxSplash_obj::nextState;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(663)
					bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(663)
					if ((tmp8)){
						HX_STACK_LINE(663)
						this->_gameJustStarted = true;
					}
				}
				else{
					HX_STACK_LINE(663)
					::hx::Class tmp5 = this->_initialState;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(663)
					::flixel::_system::FlxSplash_obj::nextState = tmp5;
					HX_STACK_LINE(663)
					::flixel::_system::FlxSplash tmp6 = ::flixel::_system::FlxSplash_obj::__new(null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(663)
					this->_requestedState = tmp6;
					HX_STACK_LINE(663)
					this->_skipSplash = true;
				}
				HX_STACK_LINE(663)
				::flixel::FlxState tmp5 = this->_requestedState;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(663)
				bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::flixel::FlxSubState >());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(663)
				if ((tmp6)){
					HX_STACK_LINE(663)
					HX_STACK_DO_THROW(HX_HCSTRING("You can't set FlxSubState class instance as the state for you game","\xf2","\x8e","\x2c","\x80"));
				}
				HX_STACK_LINE(663)
				::flixel::FlxG_obj::reset();
				HX_STACK_LINE(663)
				::flixel::_system::frontEnds::SignalFrontEnd tmp7 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(663)
				tmp7->__Field(HX_HCSTRING("postGameReset","\xfd","\x07","\x96","\xc9"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
			}
			HX_STACK_LINE(664)
			this->_resetGame = false;
		}
		HX_STACK_LINE(667)
		this->handleReplayRequests();
		HX_STACK_LINE(671)
		::flixel::FlxBasic_obj::activeCount = (int)0;
		HX_STACK_LINE(674)
		this->update();
		HX_STACK_LINE(677)
		::flixel::_system::debug::FlxDebugger tmp1 = this->debugger;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(677)
		int tmp2 = ::flixel::FlxBasic_obj::activeCount;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(677)
		tmp1->__Field(HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84"), hx::paccDynamic )->__Field(HX_HCSTRING("activeObjects","\xae","\xb3","\x18","\x3a"), hx::paccDynamic )(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,step,(void))

Void FlxGame_obj::handleReplayRequests( ){
{
		HX_STACK_FRAME("flixel.FlxGame","handleReplayRequests",0xefa2c6ef,"flixel.FlxGame.handleReplayRequests","flixel/FlxGame.hx",682,0x34f39fed)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,handleReplayRequests,(void))

Void FlxGame_obj::update( ){
{
		HX_STACK_FRAME("flixel.FlxGame","update",0x9b7d5da5,"flixel.FlxGame.update","flixel/FlxGame.hx",716,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(717)
		::flixel::FlxState tmp = this->_state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(717)
		bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(717)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(717)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(717)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(717)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(717)
		if ((tmp4)){
			HX_STACK_LINE(717)
			::flixel::FlxState tmp6 = this->_state;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(717)
			::flixel::FlxState tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(717)
			bool tmp8 = tmp7->exists;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(717)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(717)
			tmp5 = !(tmp9);
		}
		else{
			HX_STACK_LINE(717)
			tmp5 = true;
		}
		HX_STACK_LINE(717)
		if ((tmp5)){
			HX_STACK_LINE(719)
			return null();
		}
		HX_STACK_LINE(722)
		::flixel::FlxState tmp6 = this->_state;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(722)
		::flixel::FlxState tmp7 = this->_requestedState;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(722)
		bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(722)
		if ((tmp8)){
			HX_STACK_LINE(724)
			this->switchState();
		}
		HX_STACK_LINE(728)
		::flixel::_system::frontEnds::DebuggerFrontEnd tmp9 = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(728)
		bool tmp10 = tmp9->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(728)
		if ((tmp10)){
			HX_STACK_LINE(729)
			int tmp11 = this->getTimer();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(729)
			int tmp12 = this->_startTime;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(729)
			int tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(729)
			this->ticks = tmp13;
		}
		HX_STACK_LINE(732)
		this->updateElapsed();
		HX_STACK_LINE(734)
		::flixel::_system::frontEnds::SignalFrontEnd tmp11 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(734)
		tmp11->__Field(HX_HCSTRING("preUpdate","\x8c","\x96","\xa6","\xe5"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
		HX_STACK_LINE(736)
		this->updateInput();
		HX_STACK_LINE(739)
		::flixel::effects::postprocess::PostProcess tmp12 = this->postProcesses->__get((int)0).StaticCast< ::flixel::effects::postprocess::PostProcess >();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(739)
		bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(739)
		if ((tmp13)){
			HX_STACK_LINE(741)
			::flixel::effects::postprocess::PostProcess tmp14 = this->postProcesses->__get((int)0).StaticCast< ::flixel::effects::postprocess::PostProcess >();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(741)
			Float tmp15 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(741)
			tmp14->update(tmp15);
		}
		HX_STACK_LINE(746)
		::flixel::_system::frontEnds::SoundFrontEnd tmp14 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(746)
		Float tmp15 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(746)
		tmp14->__Field(HX_HCSTRING("update","\x09","\x86","\x05","\x87"), hx::paccDynamic )(tmp15);
		HX_STACK_LINE(748)
		{
			HX_STACK_LINE(748)
			Float tmp16 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(748)
			Float elapsed = tmp16;		HX_STACK_VAR(elapsed,"elapsed");
			HX_STACK_LINE(748)
			{
				HX_STACK_LINE(748)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(748)
				::flixel::_system::frontEnds::PluginFrontEnd tmp17 = ::flixel::FlxG_obj::plugins;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(748)
				Array< ::Dynamic > _g1 = tmp17->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(748)
				while((true)){
					HX_STACK_LINE(748)
					bool tmp18 = (_g < _g1->length);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(748)
					bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(748)
					if ((tmp19)){
						HX_STACK_LINE(748)
						break;
					}
					HX_STACK_LINE(748)
					::flixel::FlxBasic tmp20 = _g1->__get(_g).StaticCast< ::flixel::FlxBasic >();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(748)
					::flixel::FlxBasic plugin = tmp20;		HX_STACK_VAR(plugin,"plugin");
					HX_STACK_LINE(748)
					++(_g);
					HX_STACK_LINE(748)
					bool tmp21 = plugin->exists;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(748)
					bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(748)
					if ((tmp21)){
						HX_STACK_LINE(748)
						tmp22 = plugin->active;
					}
					else{
						HX_STACK_LINE(748)
						tmp22 = false;
					}
					HX_STACK_LINE(748)
					if ((tmp22)){
						HX_STACK_LINE(748)
						Float tmp23 = elapsed;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(748)
						plugin->update(tmp23);
					}
				}
			}
		}
		HX_STACK_LINE(750)
		::flixel::FlxState tmp16 = this->_state;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(750)
		Float tmp17 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(750)
		tmp16->tryUpdate(tmp17);
		HX_STACK_LINE(752)
		{
			HX_STACK_LINE(752)
			Float tmp18 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(752)
			Float elapsed = tmp18;		HX_STACK_VAR(elapsed,"elapsed");
			HX_STACK_LINE(752)
			{
				HX_STACK_LINE(752)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(752)
				::flixel::_system::frontEnds::CameraFrontEnd tmp19 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(752)
				Array< ::Dynamic > _g1 = tmp19->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(752)
				while((true)){
					HX_STACK_LINE(752)
					bool tmp20 = (_g < _g1->length);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(752)
					bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(752)
					if ((tmp21)){
						HX_STACK_LINE(752)
						break;
					}
					HX_STACK_LINE(752)
					::flixel::FlxCamera tmp22 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(752)
					::flixel::FlxCamera camera = tmp22;		HX_STACK_VAR(camera,"camera");
					HX_STACK_LINE(752)
					++(_g);
					HX_STACK_LINE(752)
					bool tmp23 = (camera != null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(752)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(752)
					bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(752)
					if ((tmp24)){
						HX_STACK_LINE(752)
						tmp25 = camera->exists;
					}
					else{
						HX_STACK_LINE(752)
						tmp25 = false;
					}
					HX_STACK_LINE(752)
					bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(752)
					if ((tmp25)){
						HX_STACK_LINE(752)
						tmp26 = camera->active;
					}
					else{
						HX_STACK_LINE(752)
						tmp26 = false;
					}
					HX_STACK_LINE(752)
					if ((tmp26)){
						HX_STACK_LINE(752)
						Float tmp27 = elapsed;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(752)
						camera->update(tmp27);
					}
				}
			}
		}
		HX_STACK_LINE(753)
		::flixel::_system::frontEnds::SignalFrontEnd tmp18 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(753)
		tmp18->__Field(HX_HCSTRING("postUpdate","\x89","\x06","\x3e","\xdc"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
		HX_STACK_LINE(756)
		::flixel::_system::debug::FlxDebugger tmp19 = this->debugger;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(756)
		int tmp20 = this->getTimer();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(756)
		int tmp21 = this->_startTime;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(756)
		int tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(756)
		int tmp23 = this->ticks;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(756)
		int tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(756)
		tmp19->__Field(HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84"), hx::paccDynamic )->__Field(HX_HCSTRING("flixelUpdate","\x85","\x69","\x5e","\x27"), hx::paccDynamic )(tmp24);
		HX_STACK_LINE(760)
		::flixel::util::FlxArrayUtil_obj::clearArray(::flixel::FlxG_obj::swipes,null());
		HX_STACK_LINE(763)
		bool tmp25 = this->filtersEnabled;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(763)
		this->set_filters((  ((tmp25)) ? Array< ::Dynamic >(this->_filters) : Array< ::Dynamic >(null()) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,update,(void))

Void FlxGame_obj::updateElapsed( ){
{
		HX_STACK_FRAME("flixel.FlxGame","updateElapsed",0x372d9117,"flixel.FlxGame.updateElapsed","flixel/FlxGame.hx",767,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(768)
		bool tmp = ::flixel::FlxG_obj::fixedTimestep;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(768)
		if ((tmp)){
			HX_STACK_LINE(770)
			Float tmp1 = ::flixel::FlxG_obj::timeScale;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(770)
			Float tmp2 = this->_stepSeconds;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(770)
			Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(770)
			::flixel::FlxG_obj::elapsed = tmp3;
		}
		else{
			HX_STACK_LINE(774)
			Float tmp1 = ::flixel::FlxG_obj::timeScale;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(774)
			Float tmp2 = this->_elapsedMS;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(774)
			Float tmp3 = (Float(tmp2) / Float((int)1000));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(774)
			Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(774)
			::flixel::FlxG_obj::elapsed = tmp4;
			HX_STACK_LINE(776)
			Float tmp5 = ::flixel::FlxG_obj::maxElapsed;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(776)
			Float tmp6 = ::flixel::FlxG_obj::timeScale;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(776)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(776)
			Float max = tmp7;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(777)
			Float tmp8 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(777)
			Float tmp9 = max;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(777)
			bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(777)
			if ((tmp10)){
				HX_STACK_LINE(778)
				::flixel::FlxG_obj::elapsed = max;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,updateElapsed,(void))

Void FlxGame_obj::updateInput( ){
{
		HX_STACK_FRAME("flixel.FlxGame","updateInput",0x1a1f4025,"flixel.FlxGame.updateInput","flixel/FlxGame.hx",827,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(827)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(827)
		::flixel::_system::frontEnds::InputFrontEnd tmp = ::flixel::FlxG_obj::inputs;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(827)
		Array< ::flixel::input::IFlxInputManager > _g1 = tmp->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(827)
		while((true)){
			HX_STACK_LINE(827)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(827)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(827)
			if ((tmp2)){
				HX_STACK_LINE(827)
				break;
			}
			HX_STACK_LINE(827)
			::flixel::input::IFlxInputManager tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(827)
			::flixel::input::IFlxInputManager input = tmp3;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(827)
			++(_g);
			HX_STACK_LINE(827)
			input->update();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,updateInput,(void))

Void FlxGame_obj::draw( ){
{
		HX_STACK_FRAME("flixel.FlxGame","draw",0xc8a3a4a0,"flixel.FlxGame.draw","flixel/FlxGame.hx",846,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(847)
		::flixel::FlxState tmp = this->_state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(847)
		bool tmp1 = tmp->visible;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(847)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(847)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(847)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(847)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(847)
		if ((tmp4)){
			HX_STACK_LINE(847)
			::flixel::FlxState tmp6 = this->_state;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(847)
			::flixel::FlxState tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(847)
			bool tmp8 = tmp7->exists;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(847)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(847)
			tmp5 = !(tmp9);
		}
		else{
			HX_STACK_LINE(847)
			tmp5 = true;
		}
		HX_STACK_LINE(847)
		if ((tmp5)){
			HX_STACK_LINE(849)
			return null();
		}
		HX_STACK_LINE(853)
		::flixel::_system::frontEnds::DebuggerFrontEnd tmp6 = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(853)
		bool tmp7 = tmp6->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(853)
		if ((tmp7)){
			HX_STACK_LINE(854)
			int tmp8 = this->getTimer();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(854)
			int tmp9 = this->_startTime;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(854)
			int tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(854)
			this->ticks = tmp10;
		}
		HX_STACK_LINE(857)
		::flixel::_system::frontEnds::SignalFrontEnd tmp8 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(857)
		tmp8->__Field(HX_HCSTRING("preDraw","\xc7","\x05","\xd5","\x1a"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
		HX_STACK_LINE(859)
		bool tmp9 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(859)
		if ((tmp9)){
			HX_STACK_LINE(861)
			::flixel::graphics::tile::FlxTilesheet_obj::_DRAWCALLS = (int)0;
		}
		HX_STACK_LINE(865)
		::flixel::effects::postprocess::PostProcess tmp10 = this->postProcesses->__get((int)0).StaticCast< ::flixel::effects::postprocess::PostProcess >();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(865)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(865)
		if ((tmp11)){
			HX_STACK_LINE(867)
			::flixel::effects::postprocess::PostProcess tmp12 = this->postProcesses->__get((int)0).StaticCast< ::flixel::effects::postprocess::PostProcess >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(867)
			tmp12->capture();
		}
		HX_STACK_LINE(871)
		{
			HX_STACK_LINE(871)
			::flixel::_system::frontEnds::CameraFrontEnd tmp12 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(871)
			::flixel::_system::frontEnds::CameraFrontEnd _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(871)
			{
				HX_STACK_LINE(871)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(871)
				Array< ::Dynamic > _g1 = _this->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(871)
				while((true)){
					HX_STACK_LINE(871)
					bool tmp13 = (_g < _g1->length);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(871)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(871)
					if ((tmp14)){
						HX_STACK_LINE(871)
						break;
					}
					HX_STACK_LINE(871)
					::flixel::FlxCamera tmp15 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(871)
					::flixel::FlxCamera camera = tmp15;		HX_STACK_VAR(camera,"camera");
					HX_STACK_LINE(871)
					++(_g);
					HX_STACK_LINE(871)
					bool tmp16 = (camera == null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(871)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(871)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(871)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(871)
					if ((tmp18)){
						HX_STACK_LINE(871)
						bool tmp20 = camera->exists;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(871)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(871)
						bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(871)
						tmp19 = !(tmp22);
					}
					else{
						HX_STACK_LINE(871)
						tmp19 = true;
					}
					HX_STACK_LINE(871)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(871)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(871)
					if ((tmp20)){
						HX_STACK_LINE(871)
						bool tmp22 = camera->visible;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(871)
						bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(871)
						tmp21 = !(tmp23);
					}
					else{
						HX_STACK_LINE(871)
						tmp21 = true;
					}
					HX_STACK_LINE(871)
					if ((tmp21)){
						HX_STACK_LINE(871)
						continue;
					}
					HX_STACK_LINE(871)
					bool tmp22 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(871)
					if ((tmp22)){
						HX_STACK_LINE(871)
						camera->checkResize();
						HX_STACK_LINE(871)
						bool tmp23 = _this->__Field(HX_HCSTRING("useBufferLocking","\xf0","\x43","\x3c","\x76"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(871)
						if ((tmp23)){
							HX_STACK_LINE(871)
							camera->buffer->lock();
						}
					}
					HX_STACK_LINE(871)
					bool tmp23 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(871)
					if ((tmp23)){
						HX_STACK_LINE(871)
						camera->clearDrawStack();
						HX_STACK_LINE(871)
						::openfl::_legacy::display::Graphics tmp24 = camera->canvas->get_graphics();		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(871)
						tmp24->clear();
						HX_STACK_LINE(871)
						::openfl::_legacy::display::Graphics tmp25 = camera->debugLayer->get_graphics();		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(871)
						tmp25->clear();
					}
					HX_STACK_LINE(871)
					bool tmp24 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(871)
					if ((tmp24)){
						HX_STACK_LINE(871)
						int tmp25 = camera->bgColor;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(871)
						bool tmp26 = camera->useBgAlphaBlending;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(871)
						camera->fill(tmp25,tmp26,null(),null());
						HX_STACK_LINE(871)
						camera->screen->dirty = true;
					}
					else{
						HX_STACK_LINE(871)
						int tmp25 = (int(camera->bgColor) & int((int)16777215));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(871)
						int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(871)
						bool tmp27 = camera->useBgAlphaBlending;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(871)
						int tmp28 = (int(camera->bgColor) >> int((int)24));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(871)
						int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(871)
						Float tmp30 = (Float(tmp29) / Float((int)255));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(871)
						camera->fill(tmp26,tmp27,tmp30,null());
					}
				}
			}
		}
		HX_STACK_LINE(873)
		{
			HX_STACK_LINE(873)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(873)
			::flixel::_system::frontEnds::PluginFrontEnd tmp12 = ::flixel::FlxG_obj::plugins;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(873)
			Array< ::Dynamic > _g1 = tmp12->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(873)
			while((true)){
				HX_STACK_LINE(873)
				bool tmp13 = (_g < _g1->length);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(873)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(873)
				if ((tmp14)){
					HX_STACK_LINE(873)
					break;
				}
				HX_STACK_LINE(873)
				::flixel::FlxBasic tmp15 = _g1->__get(_g).StaticCast< ::flixel::FlxBasic >();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(873)
				::flixel::FlxBasic plugin = tmp15;		HX_STACK_VAR(plugin,"plugin");
				HX_STACK_LINE(873)
				++(_g);
				HX_STACK_LINE(873)
				bool tmp16 = plugin->exists;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(873)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(873)
				if ((tmp16)){
					HX_STACK_LINE(873)
					tmp17 = plugin->visible;
				}
				else{
					HX_STACK_LINE(873)
					tmp17 = false;
				}
				HX_STACK_LINE(873)
				if ((tmp17)){
					HX_STACK_LINE(873)
					plugin->draw();
				}
			}
		}
		HX_STACK_LINE(875)
		::flixel::FlxState tmp12 = this->_state;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(875)
		tmp12->draw();
		HX_STACK_LINE(877)
		bool tmp13 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(877)
		if ((tmp13)){
			HX_STACK_LINE(879)
			{
				HX_STACK_LINE(879)
				bool tmp14 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(879)
				if ((tmp14)){
					HX_STACK_LINE(879)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(879)
					::flixel::_system::frontEnds::CameraFrontEnd tmp15 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(879)
					Array< ::Dynamic > _g1 = tmp15->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(879)
					while((true)){
						HX_STACK_LINE(879)
						bool tmp16 = (_g < _g1->length);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(879)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(879)
						if ((tmp17)){
							HX_STACK_LINE(879)
							break;
						}
						HX_STACK_LINE(879)
						::flixel::FlxCamera tmp18 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(879)
						::flixel::FlxCamera camera = tmp18;		HX_STACK_VAR(camera,"camera");
						HX_STACK_LINE(879)
						++(_g);
						HX_STACK_LINE(879)
						bool tmp19 = (camera != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(879)
						bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(879)
						bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(879)
						if ((tmp20)){
							HX_STACK_LINE(879)
							tmp21 = camera->exists;
						}
						else{
							HX_STACK_LINE(879)
							tmp21 = false;
						}
						HX_STACK_LINE(879)
						bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(879)
						if ((tmp21)){
							HX_STACK_LINE(879)
							tmp22 = camera->visible;
						}
						else{
							HX_STACK_LINE(879)
							tmp22 = false;
						}
						HX_STACK_LINE(879)
						if ((tmp22)){
							HX_STACK_LINE(879)
							camera->render();
						}
					}
				}
			}
			HX_STACK_LINE(882)
			::flixel::_system::debug::FlxDebugger tmp14 = this->debugger;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(882)
			int tmp15 = ::flixel::graphics::tile::FlxTilesheet_obj::_DRAWCALLS;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(882)
			tmp14->__Field(HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84"), hx::paccDynamic )->__Field(HX_HCSTRING("drawCalls","\x71","\xa7","\x26","\x09"), hx::paccDynamic )(tmp15);
		}
		HX_STACK_LINE(886)
		{
			HX_STACK_LINE(886)
			::flixel::_system::frontEnds::CameraFrontEnd tmp14 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(886)
			::flixel::_system::frontEnds::CameraFrontEnd _this = tmp14;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(886)
			{
				HX_STACK_LINE(886)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(886)
				Array< ::Dynamic > _g1 = _this->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(886)
				while((true)){
					HX_STACK_LINE(886)
					bool tmp15 = (_g < _g1->length);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(886)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(886)
					if ((tmp16)){
						HX_STACK_LINE(886)
						break;
					}
					HX_STACK_LINE(886)
					::flixel::FlxCamera tmp17 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(886)
					::flixel::FlxCamera camera = tmp17;		HX_STACK_VAR(camera,"camera");
					HX_STACK_LINE(886)
					++(_g);
					HX_STACK_LINE(886)
					bool tmp18 = (camera == null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(886)
					bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(886)
					bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(886)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(886)
					if ((tmp20)){
						HX_STACK_LINE(886)
						bool tmp22 = camera->exists;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(886)
						bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(886)
						bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(886)
						tmp21 = !(tmp24);
					}
					else{
						HX_STACK_LINE(886)
						tmp21 = true;
					}
					HX_STACK_LINE(886)
					bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(886)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(886)
					if ((tmp22)){
						HX_STACK_LINE(886)
						bool tmp24 = camera->visible;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(886)
						bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(886)
						tmp23 = !(tmp25);
					}
					else{
						HX_STACK_LINE(886)
						tmp23 = true;
					}
					HX_STACK_LINE(886)
					if ((tmp23)){
						HX_STACK_LINE(886)
						continue;
					}
					HX_STACK_LINE(886)
					camera->drawFX();
					HX_STACK_LINE(886)
					bool tmp24 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(886)
					if ((tmp24)){
						HX_STACK_LINE(886)
						bool tmp25 = _this->__Field(HX_HCSTRING("useBufferLocking","\xf0","\x43","\x3c","\x76"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(886)
						if ((tmp25)){
							HX_STACK_LINE(886)
							camera->buffer->unlock(null());
						}
						HX_STACK_LINE(886)
						camera->screen->dirty = true;
					}
				}
			}
		}
		HX_STACK_LINE(888)
		::flixel::_system::frontEnds::SignalFrontEnd tmp14 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(888)
		tmp14->__Field(HX_HCSTRING("postDraw","\x84","\x8c","\xaf","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
		HX_STACK_LINE(891)
		::flixel::_system::debug::FlxDebugger tmp15 = this->debugger;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(891)
		int tmp16 = this->getTimer();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(891)
		int tmp17 = this->_startTime;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(891)
		int tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(891)
		int tmp19 = this->ticks;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(891)
		int tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(891)
		tmp15->__Field(HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84"), hx::paccDynamic )->__Field(HX_HCSTRING("flixelDraw","\x80","\xf8","\xdf","\x4d"), hx::paccDynamic )(tmp20);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,draw,(void))

int FlxGame_obj::getTicks( ){
	HX_STACK_FRAME("flixel.FlxGame","getTicks",0x73d7349c,"flixel.FlxGame.getTicks","flixel/FlxGame.hx",896,0x34f39fed)
	HX_STACK_THIS(this)
	HX_STACK_LINE(897)
	int tmp = this->getTimer();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(897)
	int tmp1 = this->_startTime;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(897)
	int tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(897)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,getTicks,return )

HX_BEGIN_DEFAULT_FUNC(__default_getTimer,FlxGame_obj)
int run(){
	HX_STACK_FRAME("flixel.FlxGame","getTimer",0x73dec5eb,"flixel.FlxGame.getTimer","flixel/FlxGame.hx",901,0x34f39fed)
	HX_STACK_THIS(this)
	HX_STACK_LINE(903)
	int tmp = ::openfl::_legacy::Lib_obj::getTimer();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(903)
	return tmp;
}
HX_END_LOCAL_FUNC0(return )
HX_END_DEFAULT_FUNC


FlxGame_obj::FlxGame_obj()
{
	getTimer = new __default_getTimer(this);
}

void FlxGame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGame);
	HX_MARK_MEMBER_NAME(focusLostFramerate,"focusLostFramerate");
	HX_MARK_MEMBER_NAME(soundTray,"soundTray");
	HX_MARK_MEMBER_NAME(debugger,"debugger");
	HX_MARK_MEMBER_NAME(ticks,"ticks");
	HX_MARK_MEMBER_NAME(filtersEnabled,"filtersEnabled");
	HX_MARK_MEMBER_NAME(_gameJustStarted,"_gameJustStarted");
	HX_MARK_MEMBER_NAME(_initialState,"_initialState");
	HX_MARK_MEMBER_NAME(_state,"_state");
	HX_MARK_MEMBER_NAME(_total,"_total");
	HX_MARK_MEMBER_NAME(_startTime,"_startTime");
	HX_MARK_MEMBER_NAME(_accumulator,"_accumulator");
	HX_MARK_MEMBER_NAME(_elapsedMS,"_elapsedMS");
	HX_MARK_MEMBER_NAME(_stepMS,"_stepMS");
	HX_MARK_MEMBER_NAME(_stepSeconds,"_stepSeconds");
	HX_MARK_MEMBER_NAME(_maxAccumulation,"_maxAccumulation");
	HX_MARK_MEMBER_NAME(_lostFocus,"_lostFocus");
	HX_MARK_MEMBER_NAME(_filters,"_filters");
	HX_MARK_MEMBER_NAME(_onFocusFiredOnce,"_onFocusFiredOnce");
	HX_MARK_MEMBER_NAME(_focusLostScreen,"_focusLostScreen");
	HX_MARK_MEMBER_NAME(_inputContainer,"_inputContainer");
	HX_MARK_MEMBER_NAME(_customSoundTray,"_customSoundTray");
	HX_MARK_MEMBER_NAME(_customFocusLostScreen,"_customFocusLostScreen");
	HX_MARK_MEMBER_NAME(_skipSplash,"_skipSplash");
	HX_MARK_MEMBER_NAME(_startFullscreen,"_startFullscreen");
	HX_MARK_MEMBER_NAME(_requestedState,"_requestedState");
	HX_MARK_MEMBER_NAME(_resetGame,"_resetGame");
	HX_MARK_MEMBER_NAME(postProcessLayer,"postProcessLayer");
	HX_MARK_MEMBER_NAME(postProcesses,"postProcesses");
	HX_MARK_MEMBER_NAME(getTimer,"getTimer");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxGame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(focusLostFramerate,"focusLostFramerate");
	HX_VISIT_MEMBER_NAME(soundTray,"soundTray");
	HX_VISIT_MEMBER_NAME(debugger,"debugger");
	HX_VISIT_MEMBER_NAME(ticks,"ticks");
	HX_VISIT_MEMBER_NAME(filtersEnabled,"filtersEnabled");
	HX_VISIT_MEMBER_NAME(_gameJustStarted,"_gameJustStarted");
	HX_VISIT_MEMBER_NAME(_initialState,"_initialState");
	HX_VISIT_MEMBER_NAME(_state,"_state");
	HX_VISIT_MEMBER_NAME(_total,"_total");
	HX_VISIT_MEMBER_NAME(_startTime,"_startTime");
	HX_VISIT_MEMBER_NAME(_accumulator,"_accumulator");
	HX_VISIT_MEMBER_NAME(_elapsedMS,"_elapsedMS");
	HX_VISIT_MEMBER_NAME(_stepMS,"_stepMS");
	HX_VISIT_MEMBER_NAME(_stepSeconds,"_stepSeconds");
	HX_VISIT_MEMBER_NAME(_maxAccumulation,"_maxAccumulation");
	HX_VISIT_MEMBER_NAME(_lostFocus,"_lostFocus");
	HX_VISIT_MEMBER_NAME(_filters,"_filters");
	HX_VISIT_MEMBER_NAME(_onFocusFiredOnce,"_onFocusFiredOnce");
	HX_VISIT_MEMBER_NAME(_focusLostScreen,"_focusLostScreen");
	HX_VISIT_MEMBER_NAME(_inputContainer,"_inputContainer");
	HX_VISIT_MEMBER_NAME(_customSoundTray,"_customSoundTray");
	HX_VISIT_MEMBER_NAME(_customFocusLostScreen,"_customFocusLostScreen");
	HX_VISIT_MEMBER_NAME(_skipSplash,"_skipSplash");
	HX_VISIT_MEMBER_NAME(_startFullscreen,"_startFullscreen");
	HX_VISIT_MEMBER_NAME(_requestedState,"_requestedState");
	HX_VISIT_MEMBER_NAME(_resetGame,"_resetGame");
	HX_VISIT_MEMBER_NAME(postProcessLayer,"postProcessLayer");
	HX_VISIT_MEMBER_NAME(postProcesses,"postProcesses");
	HX_VISIT_MEMBER_NAME(getTimer,"getTimer");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxGame_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { return step_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ticks") ) { return ticks; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_state") ) { return _state; }
		if (HX_FIELD_EQ(inName,"_total") ) { return _total; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_stepMS") ) { return _stepMS; }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"debugger") ) { return debugger; }
		if (HX_FIELD_EQ(inName,"_filters") ) { return _filters; }
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		if (HX_FIELD_EQ(inName,"getTicks") ) { return getTicks_dyn(); }
		if (HX_FIELD_EQ(inName,"getTimer") ) { return getTimer; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"soundTray") ) { return soundTray; }
		if (HX_FIELD_EQ(inName,"resetGame") ) { return resetGame_dyn(); }
		if (HX_FIELD_EQ(inName,"gameStart") ) { return gameStart_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_startTime") ) { return _startTime; }
		if (HX_FIELD_EQ(inName,"_elapsedMS") ) { return _elapsedMS; }
		if (HX_FIELD_EQ(inName,"_lostFocus") ) { return _lostFocus; }
		if (HX_FIELD_EQ(inName,"_resetGame") ) { return _resetGame; }
		if (HX_FIELD_EQ(inName,"setFilters") ) { return setFilters_dyn(); }
		if (HX_FIELD_EQ(inName,"resizeGame") ) { return resizeGame_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_skipSplash") ) { return _skipSplash; }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"switchState") ) { return switchState_dyn(); }
		if (HX_FIELD_EQ(inName,"updateInput") ) { return updateInput_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_accumulator") ) { return _accumulator; }
		if (HX_FIELD_EQ(inName,"_stepSeconds") ) { return _stepSeconds; }
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return onEnterFrame_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_initialState") ) { return _initialState; }
		if (HX_FIELD_EQ(inName,"postProcesses") ) { return postProcesses; }
		if (HX_FIELD_EQ(inName,"updateElapsed") ) { return updateElapsed_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"filtersEnabled") ) { return filtersEnabled; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_inputContainer") ) { return _inputContainer; }
		if (HX_FIELD_EQ(inName,"_requestedState") ) { return _requestedState; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_gameJustStarted") ) { return _gameJustStarted; }
		if (HX_FIELD_EQ(inName,"_maxAccumulation") ) { return _maxAccumulation; }
		if (HX_FIELD_EQ(inName,"_focusLostScreen") ) { return _focusLostScreen; }
		if (HX_FIELD_EQ(inName,"_customSoundTray") ) { return _customSoundTray; }
		if (HX_FIELD_EQ(inName,"_startFullscreen") ) { return _startFullscreen; }
		if (HX_FIELD_EQ(inName,"postProcessLayer") ) { return postProcessLayer; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onFocusFiredOnce") ) { return _onFocusFiredOnce; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"focusLostFramerate") ) { return focusLostFramerate; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"handleReplayRequests") ) { return handleReplayRequests_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_customFocusLostScreen") ) { return _customFocusLostScreen; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGame_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ticks") ) { ticks=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_state") ) { _state=inValue.Cast< ::flixel::FlxState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_total") ) { _total=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_stepMS") ) { _stepMS=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"debugger") ) { debugger=inValue.Cast< ::flixel::_system::debug::FlxDebugger >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_filters") ) { _filters=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"getTimer") ) { getTimer=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"soundTray") ) { soundTray=inValue.Cast< ::flixel::_system::ui::FlxSoundTray >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_startTime") ) { _startTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_elapsedMS") ) { _elapsedMS=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lostFocus") ) { _lostFocus=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_resetGame") ) { _resetGame=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_skipSplash") ) { _skipSplash=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_accumulator") ) { _accumulator=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_stepSeconds") ) { _stepSeconds=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_initialState") ) { _initialState=inValue.Cast< ::hx::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"postProcesses") ) { postProcesses=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"filtersEnabled") ) { filtersEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_inputContainer") ) { _inputContainer=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_requestedState") ) { _requestedState=inValue.Cast< ::flixel::FlxState >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_gameJustStarted") ) { _gameJustStarted=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxAccumulation") ) { _maxAccumulation=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_focusLostScreen") ) { _focusLostScreen=inValue.Cast< ::flixel::_system::ui::FlxFocusLostScreen >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_customSoundTray") ) { _customSoundTray=inValue.Cast< ::hx::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startFullscreen") ) { _startFullscreen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"postProcessLayer") ) { postProcessLayer=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onFocusFiredOnce") ) { _onFocusFiredOnce=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"focusLostFramerate") ) { focusLostFramerate=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_customFocusLostScreen") ) { _customFocusLostScreen=inValue.Cast< ::hx::Class >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("focusLostFramerate","\x11","\xa8","\xf2","\xda"));
	outFields->push(HX_HCSTRING("soundTray","\x65","\x62","\xd1","\x57"));
	outFields->push(HX_HCSTRING("debugger","\x21","\x24","\xeb","\x90"));
	outFields->push(HX_HCSTRING("ticks","\x76","\x2e","\x2e","\x10"));
	outFields->push(HX_HCSTRING("filtersEnabled","\x06","\x08","\x9b","\x18"));
	outFields->push(HX_HCSTRING("_gameJustStarted","\x24","\xcc","\x52","\x15"));
	outFields->push(HX_HCSTRING("_initialState","\xcc","\x09","\x8a","\x2a"));
	outFields->push(HX_HCSTRING("_state","\x52","\xbd","\xf2","\x7f"));
	outFields->push(HX_HCSTRING("_total","\x05","\x9b","\x19","\x10"));
	outFields->push(HX_HCSTRING("_startTime","\x50","\xc1","\x92","\x61"));
	outFields->push(HX_HCSTRING("_accumulator","\x47","\xf7","\xa7","\x3a"));
	outFields->push(HX_HCSTRING("_elapsedMS","\x63","\xde","\xe6","\xb9"));
	outFields->push(HX_HCSTRING("_stepMS","\x51","\xa7","\x14","\x77"));
	outFields->push(HX_HCSTRING("_stepSeconds","\x94","\x66","\xe1","\xd2"));
	outFields->push(HX_HCSTRING("_maxAccumulation","\x8a","\x43","\xd9","\xcd"));
	outFields->push(HX_HCSTRING("_lostFocus","\x15","\x47","\x9b","\xcd"));
	outFields->push(HX_HCSTRING("_filters","\x3c","\xfb","\xfe","\x42"));
	outFields->push(HX_HCSTRING("_onFocusFiredOnce","\x75","\x65","\x64","\xfb"));
	outFields->push(HX_HCSTRING("_focusLostScreen","\xe9","\xc0","\x3c","\x2c"));
	outFields->push(HX_HCSTRING("_inputContainer","\x76","\x08","\x99","\x47"));
	outFields->push(HX_HCSTRING("_customSoundTray","\xf5","\xfe","\x64","\x5b"));
	outFields->push(HX_HCSTRING("_customFocusLostScreen","\xf8","\xe6","\xa0","\x2d"));
	outFields->push(HX_HCSTRING("_skipSplash","\x65","\x42","\x26","\xfa"));
	outFields->push(HX_HCSTRING("_startFullscreen","\xbe","\x03","\xce","\x18"));
	outFields->push(HX_HCSTRING("_requestedState","\x62","\x56","\x37","\x70"));
	outFields->push(HX_HCSTRING("_resetGame","\x22","\x79","\xed","\xe5"));
	outFields->push(HX_HCSTRING("postProcessLayer","\x62","\xfd","\xc8","\xec"));
	outFields->push(HX_HCSTRING("postProcesses","\x1d","\x84","\xbe","\x80"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxGame_obj,focusLostFramerate),HX_HCSTRING("focusLostFramerate","\x11","\xa8","\xf2","\xda")},
	{hx::fsObject /*::flixel::_system::ui::FlxSoundTray*/ ,(int)offsetof(FlxGame_obj,soundTray),HX_HCSTRING("soundTray","\x65","\x62","\xd1","\x57")},
	{hx::fsObject /*::flixel::_system::debug::FlxDebugger*/ ,(int)offsetof(FlxGame_obj,debugger),HX_HCSTRING("debugger","\x21","\x24","\xeb","\x90")},
	{hx::fsInt,(int)offsetof(FlxGame_obj,ticks),HX_HCSTRING("ticks","\x76","\x2e","\x2e","\x10")},
	{hx::fsBool,(int)offsetof(FlxGame_obj,filtersEnabled),HX_HCSTRING("filtersEnabled","\x06","\x08","\x9b","\x18")},
	{hx::fsBool,(int)offsetof(FlxGame_obj,_gameJustStarted),HX_HCSTRING("_gameJustStarted","\x24","\xcc","\x52","\x15")},
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(FlxGame_obj,_initialState),HX_HCSTRING("_initialState","\xcc","\x09","\x8a","\x2a")},
	{hx::fsObject /*::flixel::FlxState*/ ,(int)offsetof(FlxGame_obj,_state),HX_HCSTRING("_state","\x52","\xbd","\xf2","\x7f")},
	{hx::fsInt,(int)offsetof(FlxGame_obj,_total),HX_HCSTRING("_total","\x05","\x9b","\x19","\x10")},
	{hx::fsInt,(int)offsetof(FlxGame_obj,_startTime),HX_HCSTRING("_startTime","\x50","\xc1","\x92","\x61")},
	{hx::fsFloat,(int)offsetof(FlxGame_obj,_accumulator),HX_HCSTRING("_accumulator","\x47","\xf7","\xa7","\x3a")},
	{hx::fsFloat,(int)offsetof(FlxGame_obj,_elapsedMS),HX_HCSTRING("_elapsedMS","\x63","\xde","\xe6","\xb9")},
	{hx::fsFloat,(int)offsetof(FlxGame_obj,_stepMS),HX_HCSTRING("_stepMS","\x51","\xa7","\x14","\x77")},
	{hx::fsFloat,(int)offsetof(FlxGame_obj,_stepSeconds),HX_HCSTRING("_stepSeconds","\x94","\x66","\xe1","\xd2")},
	{hx::fsFloat,(int)offsetof(FlxGame_obj,_maxAccumulation),HX_HCSTRING("_maxAccumulation","\x8a","\x43","\xd9","\xcd")},
	{hx::fsBool,(int)offsetof(FlxGame_obj,_lostFocus),HX_HCSTRING("_lostFocus","\x15","\x47","\x9b","\xcd")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxGame_obj,_filters),HX_HCSTRING("_filters","\x3c","\xfb","\xfe","\x42")},
	{hx::fsBool,(int)offsetof(FlxGame_obj,_onFocusFiredOnce),HX_HCSTRING("_onFocusFiredOnce","\x75","\x65","\x64","\xfb")},
	{hx::fsObject /*::flixel::_system::ui::FlxFocusLostScreen*/ ,(int)offsetof(FlxGame_obj,_focusLostScreen),HX_HCSTRING("_focusLostScreen","\xe9","\xc0","\x3c","\x2c")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(FlxGame_obj,_inputContainer),HX_HCSTRING("_inputContainer","\x76","\x08","\x99","\x47")},
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(FlxGame_obj,_customSoundTray),HX_HCSTRING("_customSoundTray","\xf5","\xfe","\x64","\x5b")},
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(FlxGame_obj,_customFocusLostScreen),HX_HCSTRING("_customFocusLostScreen","\xf8","\xe6","\xa0","\x2d")},
	{hx::fsBool,(int)offsetof(FlxGame_obj,_skipSplash),HX_HCSTRING("_skipSplash","\x65","\x42","\x26","\xfa")},
	{hx::fsBool,(int)offsetof(FlxGame_obj,_startFullscreen),HX_HCSTRING("_startFullscreen","\xbe","\x03","\xce","\x18")},
	{hx::fsObject /*::flixel::FlxState*/ ,(int)offsetof(FlxGame_obj,_requestedState),HX_HCSTRING("_requestedState","\x62","\x56","\x37","\x70")},
	{hx::fsBool,(int)offsetof(FlxGame_obj,_resetGame),HX_HCSTRING("_resetGame","\x22","\x79","\xed","\xe5")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(FlxGame_obj,postProcessLayer),HX_HCSTRING("postProcessLayer","\x62","\xfd","\xc8","\xec")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxGame_obj,postProcesses),HX_HCSTRING("postProcesses","\x1d","\x84","\xbe","\x80")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxGame_obj,getTimer),HX_HCSTRING("getTimer","\x4f","\xcf","\x0c","\x70")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("focusLostFramerate","\x11","\xa8","\xf2","\xda"),
	HX_HCSTRING("soundTray","\x65","\x62","\xd1","\x57"),
	HX_HCSTRING("debugger","\x21","\x24","\xeb","\x90"),
	HX_HCSTRING("ticks","\x76","\x2e","\x2e","\x10"),
	HX_HCSTRING("filtersEnabled","\x06","\x08","\x9b","\x18"),
	HX_HCSTRING("_gameJustStarted","\x24","\xcc","\x52","\x15"),
	HX_HCSTRING("_initialState","\xcc","\x09","\x8a","\x2a"),
	HX_HCSTRING("_state","\x52","\xbd","\xf2","\x7f"),
	HX_HCSTRING("_total","\x05","\x9b","\x19","\x10"),
	HX_HCSTRING("_startTime","\x50","\xc1","\x92","\x61"),
	HX_HCSTRING("_accumulator","\x47","\xf7","\xa7","\x3a"),
	HX_HCSTRING("_elapsedMS","\x63","\xde","\xe6","\xb9"),
	HX_HCSTRING("_stepMS","\x51","\xa7","\x14","\x77"),
	HX_HCSTRING("_stepSeconds","\x94","\x66","\xe1","\xd2"),
	HX_HCSTRING("_maxAccumulation","\x8a","\x43","\xd9","\xcd"),
	HX_HCSTRING("_lostFocus","\x15","\x47","\x9b","\xcd"),
	HX_HCSTRING("_filters","\x3c","\xfb","\xfe","\x42"),
	HX_HCSTRING("_onFocusFiredOnce","\x75","\x65","\x64","\xfb"),
	HX_HCSTRING("_focusLostScreen","\xe9","\xc0","\x3c","\x2c"),
	HX_HCSTRING("_inputContainer","\x76","\x08","\x99","\x47"),
	HX_HCSTRING("_customSoundTray","\xf5","\xfe","\x64","\x5b"),
	HX_HCSTRING("_customFocusLostScreen","\xf8","\xe6","\xa0","\x2d"),
	HX_HCSTRING("_skipSplash","\x65","\x42","\x26","\xfa"),
	HX_HCSTRING("_startFullscreen","\xbe","\x03","\xce","\x18"),
	HX_HCSTRING("_requestedState","\x62","\x56","\x37","\x70"),
	HX_HCSTRING("_resetGame","\x22","\x79","\xed","\xe5"),
	HX_HCSTRING("postProcessLayer","\x62","\xfd","\xc8","\xec"),
	HX_HCSTRING("postProcesses","\x1d","\x84","\xbe","\x80"),
	HX_HCSTRING("setFilters","\x39","\xc6","\x25","\x5c"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("onResize","\x73","\x50","\x28","\xe8"),
	HX_HCSTRING("resizeGame","\x06","\x84","\x99","\xb8"),
	HX_HCSTRING("onEnterFrame","\xf4","\xa5","\x93","\xda"),
	HX_HCSTRING("resetGame","\x61","\xfd","\x4a","\x8a"),
	HX_HCSTRING("switchState","\x7d","\x07","\x8b","\x77"),
	HX_HCSTRING("gameStart","\x10","\x63","\x26","\xb9"),
	HX_HCSTRING("step","\x4c","\xe7","\x5b","\x4c"),
	HX_HCSTRING("handleReplayRequests","\x53","\x56","\x6b","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updateElapsed","\x33","\xfd","\x2e","\x86"),
	HX_HCSTRING("updateInput","\x41","\x2d","\xb6","\xa3"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("getTicks","\x00","\x3e","\x05","\x70"),
	HX_HCSTRING("getTimer","\x4f","\xcf","\x0c","\x70"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGame_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxGame_obj::__mClass;

void FlxGame_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.FlxGame","\x52","\xad","\x0b","\x55");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxGame_obj >;
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
