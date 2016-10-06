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
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxAtlas
#include <flixel/graphics/atlas/FlxAtlas.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxNode
#include <flixel/graphics/atlas/FlxNode.h>
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
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxButton_FlxButtonEvent
#include <flixel/ui/_FlxButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
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
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
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
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
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
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
namespace flixel{
namespace ui{

Void FlxTypedButton_flixel_text_FlxText_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic OnClick)
{
HX_STACK_FRAME("flixel.ui.FlxTypedButton_flixel_text_FlxText","new",0x2ea82fd5,"flixel.ui.FlxTypedButton_flixel_text_FlxText.new","flixel/ui/FlxButton.hx",113,0xc64cf442)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(OnClick,"OnClick")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(192)
	this->lastStatus = (int)-1;
	HX_STACK_LINE(149)
	this->maxInputMovement = ::Math_obj::POSITIVE_INFINITY;
	HX_STACK_LINE(142)
	this->mouseButtons = Array_obj< int >::__new().Add((int)-1);
	HX_STACK_LINE(137)
	this->allowSwiping = true;
	HX_STACK_LINE(132)
	this->statusAnimations = Array_obj< ::String >::__new().Add(HX_HCSTRING("normal","\x27","\x72","\x69","\x30")).Add(HX_HCSTRING("highlight","\x34","\x56","\x00","\xed")).Add(HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"));
	HX_STACK_LINE(127)
	this->labelAlphas = Array_obj< Float >::__new().Add(((Float)0.8)).Add(((Float)1.0)).Add(((Float)0.5));
	struct _Function_1_1{
		inline static Array< ::Dynamic > Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/ui/FlxButton.hx",122,0xc64cf442)
			{
				HX_STACK_LINE(122)
				::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(122)
				{
					HX_STACK_LINE(122)
					Float X = (int)0;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(122)
					Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(122)
					::flixel::util::FlxPool_flixel_math_FlxPoint tmp1 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(122)
					::flixel::math::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(122)
					Float tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(122)
					Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(122)
					::flixel::math::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(122)
					::flixel::math::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(122)
					point->_inPool = false;
					HX_STACK_LINE(122)
					tmp = point;
				}
				HX_STACK_LINE(122)
				::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(122)
				{
					HX_STACK_LINE(122)
					Float X = (int)0;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(122)
					Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(122)
					::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(122)
					::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(122)
					Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(122)
					Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(122)
					::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(122)
					::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(122)
					point->_inPool = false;
					HX_STACK_LINE(122)
					tmp1 = point;
				}
				HX_STACK_LINE(122)
				::flixel::math::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(122)
				{
					HX_STACK_LINE(122)
					::flixel::util::FlxPool_flixel_math_FlxPoint tmp3 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(122)
					::flixel::math::FlxPoint tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(122)
					::flixel::math::FlxPoint tmp5 = tmp4->set((int)0,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(122)
					::flixel::math::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(122)
					point->_inPool = false;
					HX_STACK_LINE(122)
					tmp2 = point;
				}
				HX_STACK_LINE(122)
				return Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp2);
			}
			return null();
		}
	};
	HX_STACK_LINE(122)
	this->labelOffsets = _Function_1_1::Block();
	HX_STACK_LINE(203)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(203)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(203)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(205)
	this->loadDefaultGraphic();
	HX_STACK_LINE(207)
	::flixel::ui::_FlxButton::FlxButtonEvent tmp2 = ::flixel::ui::_FlxButton::FlxButtonEvent_obj::__new(OnClick,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(207)
	this->onUp = tmp2;
	HX_STACK_LINE(208)
	::flixel::ui::_FlxButton::FlxButtonEvent tmp3 = ::flixel::ui::_FlxButton::FlxButtonEvent_obj::__new(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(208)
	this->onDown = tmp3;
	HX_STACK_LINE(209)
	::flixel::ui::_FlxButton::FlxButtonEvent tmp4 = ::flixel::ui::_FlxButton::FlxButtonEvent_obj::__new(null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(209)
	this->onOver = tmp4;
	HX_STACK_LINE(210)
	::flixel::ui::_FlxButton::FlxButtonEvent tmp5 = ::flixel::ui::_FlxButton::FlxButtonEvent_obj::__new(null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(210)
	this->onOut = tmp5;
	HX_STACK_LINE(212)
	this->set_status((int)0);
	HX_STACK_LINE(215)
	::flixel::math::FlxPoint tmp6 = this->scrollFactor;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(215)
	tmp6->set(null(),null());
	HX_STACK_LINE(218)
	::openfl::_legacy::display::MovieClip tmp7 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(218)
	::openfl::_legacy::display::Stage tmp8 = tmp7->get_stage();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(218)
	::String tmp9 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(218)
	Dynamic tmp10 = this->onUpEventListener_dyn();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(218)
	tmp8->addEventListener(tmp9,tmp10,null(),null(),null());
	HX_STACK_LINE(226)
	::flixel::input::FlxInput tmp11 = ::flixel::input::FlxInput_obj::__new((int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(226)
	this->input = tmp11;
}
;
	return null();
}

//FlxTypedButton_flixel_text_FlxText_obj::~FlxTypedButton_flixel_text_FlxText_obj() { }

Dynamic FlxTypedButton_flixel_text_FlxText_obj::__CreateEmpty() { return  new FlxTypedButton_flixel_text_FlxText_obj; }
hx::ObjectPtr< FlxTypedButton_flixel_text_FlxText_obj > FlxTypedButton_flixel_text_FlxText_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic OnClick)
{  hx::ObjectPtr< FlxTypedButton_flixel_text_FlxText_obj > _result_ = new FlxTypedButton_flixel_text_FlxText_obj();
	_result_->__construct(__o_X,__o_Y,OnClick);
	return _result_;}

Dynamic FlxTypedButton_flixel_text_FlxText_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypedButton_flixel_text_FlxText_obj > _result_ = new FlxTypedButton_flixel_text_FlxText_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

hx::Object *FlxTypedButton_flixel_text_FlxText_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::input::IFlxInput_obj)) return operator ::flixel::input::IFlxInput_obj *();
	return super::__ToInterface(inType);
}

FlxTypedButton_flixel_text_FlxText_obj::operator ::flixel::input::IFlxInput_obj *()
	{ return new ::flixel::input::IFlxInput_delegate_< FlxTypedButton_flixel_text_FlxText_obj >(this); }
Void FlxTypedButton_flixel_text_FlxText_obj::graphicLoaded( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton_flixel_text_FlxText","graphicLoaded",0x64e8a882,"flixel.ui.FlxTypedButton_flixel_text_FlxText.graphicLoaded","flixel/ui/FlxButton.hx",230,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(231)
		this->super::graphicLoaded();
		HX_STACK_LINE(233)
		this->setupAnimation(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"),(int)0);
		HX_STACK_LINE(234)
		this->setupAnimation(HX_HCSTRING("highlight","\x34","\x56","\x00","\xed"),(int)1);
		HX_STACK_LINE(235)
		this->setupAnimation(HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"),(int)2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_flixel_text_FlxText_obj,graphicLoaded,(void))

Void FlxTypedButton_flixel_text_FlxText_obj::loadDefaultGraphic( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton_flixel_text_FlxText","loadDefaultGraphic",0x7b7964d8,"flixel.ui.FlxTypedButton_flixel_text_FlxText.loadDefaultGraphic","flixel/ui/FlxButton.hx",240,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(240)
		this->loadGraphic(HX_HCSTRING("flixel/images/ui/button.png","\x44","\xee","\x2f","\x34"),true,(int)80,(int)20,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_flixel_text_FlxText_obj,loadDefaultGraphic,(void))

Void FlxTypedButton_flixel_text_FlxText_obj::setupAnimation( ::String animationName,int frameIndex){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton_flixel_text_FlxText","setupAnimation",0x57260372,"flixel.ui.FlxTypedButton_flixel_text_FlxText.setupAnimation","flixel/ui/FlxButton.hx",244,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_ARG(animationName,"animationName")
		HX_STACK_ARG(frameIndex,"frameIndex")
		HX_STACK_LINE(246)
		int tmp = frameIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(246)
		::flixel::animation::FlxAnimationController tmp1 = this->animation;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(246)
		int tmp2 = tmp1->_sprite->numFrames;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(246)
		int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(246)
		Float tmp4 = ::Math_obj::min(tmp,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(246)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(246)
		frameIndex = tmp5;
		HX_STACK_LINE(247)
		::flixel::animation::FlxAnimationController tmp6 = this->animation;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(247)
		::String tmp7 = animationName;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(247)
		tmp6->add(tmp7,Array_obj< int >::__new().Add(frameIndex),null(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedButton_flixel_text_FlxText_obj,setupAnimation,(void))

Void FlxTypedButton_flixel_text_FlxText_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton_flixel_text_FlxText","destroy",0x7bd7eaef,"flixel.ui.FlxTypedButton_flixel_text_FlxText.destroy","flixel/ui/FlxButton.hx",254,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(255)
		::flixel::text::FlxText tmp = this->label;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(255)
		::flixel::text::FlxText tmp1 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(255)
		this->set_label(tmp1);
		HX_STACK_LINE(256)
		this->_spriteLabel = null();
		HX_STACK_LINE(258)
		::flixel::ui::_FlxButton::FlxButtonEvent tmp2 = this->onUp;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(258)
		::flixel::ui::_FlxButton::FlxButtonEvent tmp3 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(258)
		this->onUp = tmp3;
		HX_STACK_LINE(259)
		::flixel::ui::_FlxButton::FlxButtonEvent tmp4 = this->onDown;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(259)
		::flixel::ui::_FlxButton::FlxButtonEvent tmp5 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(259)
		this->onDown = tmp5;
		HX_STACK_LINE(260)
		::flixel::ui::_FlxButton::FlxButtonEvent tmp6 = this->onOver;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(260)
		::flixel::ui::_FlxButton::FlxButtonEvent tmp7 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(260)
		this->onOver = tmp7;
		HX_STACK_LINE(261)
		::flixel::ui::_FlxButton::FlxButtonEvent tmp8 = this->onOut;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(261)
		::flixel::ui::_FlxButton::FlxButtonEvent tmp9 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(261)
		this->onOut = tmp9;
		HX_STACK_LINE(263)
		this->labelOffsets = ::flixel::util::FlxDestroyUtil_obj::putArray(this->labelOffsets);
		HX_STACK_LINE(265)
		this->labelAlphas = null();
		HX_STACK_LINE(266)
		this->currentInput = null();
		HX_STACK_LINE(267)
		this->input = null();
		HX_STACK_LINE(270)
		::openfl::_legacy::display::MovieClip tmp10 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(270)
		::openfl::_legacy::display::Stage tmp11 = tmp10->get_stage();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(270)
		::String tmp12 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(270)
		Dynamic tmp13 = this->onUpEventListener_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(270)
		tmp11->removeEventListener(tmp12,tmp13,null());
		HX_STACK_LINE(273)
		this->super::destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_flixel_text_FlxText_obj,destroy,(void))

Void FlxTypedButton_flixel_text_FlxText_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton_flixel_text_FlxText","update",0x1dcc7db4,"flixel.ui.FlxTypedButton_flixel_text_FlxText.update","flixel/ui/FlxButton.hx",280,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(281)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(281)
		this->super::update(tmp);
		HX_STACK_LINE(283)
		::flixel::input::FlxInput tmp1 = this->input;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(283)
		tmp1->update();
		HX_STACK_LINE(285)
		bool tmp2 = this->visible;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(285)
		if ((tmp2)){
			HX_STACK_LINE(289)
			this->updateButton();
			HX_STACK_LINE(293)
			int tmp3 = this->lastStatus;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(293)
			int tmp4 = this->status;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(293)
			bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(293)
			if ((tmp5)){
				HX_STACK_LINE(295)
				this->updateStatusAnimation();
				HX_STACK_LINE(296)
				int tmp6 = this->status;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(296)
				this->lastStatus = tmp6;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_flixel_text_FlxText_obj,update,(void))

Void FlxTypedButton_flixel_text_FlxText_obj::updateStatusAnimation( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton_flixel_text_FlxText","updateStatusAnimation",0xca93861e,"flixel.ui.FlxTypedButton_flixel_text_FlxText.updateStatusAnimation","flixel/ui/FlxButton.hx",302,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(303)
		::flixel::animation::FlxAnimationController tmp = this->animation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(303)
		int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(303)
		::String tmp2 = this->statusAnimations->__get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(303)
		tmp->play(tmp2,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_flixel_text_FlxText_obj,updateStatusAnimation,(void))

Void FlxTypedButton_flixel_text_FlxText_obj::draw( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton_flixel_text_FlxText","draw",0x9def52ef,"flixel.ui.FlxTypedButton_flixel_text_FlxText.draw","flixel/ui/FlxButton.hx",310,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(311)
		this->super::draw();
		HX_STACK_LINE(313)
		::flixel::FlxSprite tmp = this->_spriteLabel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(313)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(313)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(313)
		if ((tmp1)){
			HX_STACK_LINE(313)
			::flixel::FlxSprite tmp3 = this->_spriteLabel;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(313)
			::flixel::FlxSprite tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(313)
			tmp2 = tmp4->visible;
		}
		else{
			HX_STACK_LINE(313)
			tmp2 = false;
		}
		HX_STACK_LINE(313)
		if ((tmp2)){
			HX_STACK_LINE(315)
			::flixel::FlxSprite tmp3 = this->_spriteLabel;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(315)
			tmp3->set_cameras(this->get_cameras());
			HX_STACK_LINE(316)
			::flixel::FlxSprite tmp4 = this->_spriteLabel;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(316)
			tmp4->draw();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_flixel_text_FlxText_obj,draw,(void))

Void FlxTypedButton_flixel_text_FlxText_obj::drawDebug( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton_flixel_text_FlxText","drawDebug",0xbcdf6ce4,"flixel.ui.FlxTypedButton_flixel_text_FlxText.drawDebug","flixel/ui/FlxButton.hx",325,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(326)
		this->super::drawDebug();
		HX_STACK_LINE(328)
		::flixel::FlxSprite tmp = this->_spriteLabel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(328)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(328)
		if ((tmp1)){
			HX_STACK_LINE(330)
			::flixel::FlxSprite tmp2 = this->_spriteLabel;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(330)
			tmp2->drawDebug();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_flixel_text_FlxText_obj,drawDebug,(void))

bool FlxTypedButton_flixel_text_FlxText_obj::stampOnAtlas( ::flixel::graphics::atlas::FlxAtlas atlas){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton_flixel_text_FlxText","stampOnAtlas",0x16f683d4,"flixel.ui.FlxTypedButton_flixel_text_FlxText.stampOnAtlas","flixel/ui/FlxButton.hx",344,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_ARG(atlas,"atlas")
	HX_STACK_LINE(345)
	::flixel::graphics::FlxGraphic tmp = this->graphic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(345)
	::openfl::_legacy::display::BitmapData tmp1 = tmp->bitmap;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(345)
	::flixel::graphics::FlxGraphic tmp2 = this->graphic;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(345)
	::String tmp3 = tmp2->key;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(345)
	::flixel::graphics::atlas::FlxNode tmp4 = atlas->addNode(tmp1,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(345)
	::flixel::graphics::atlas::FlxNode buttonNode = tmp4;		HX_STACK_VAR(buttonNode,"buttonNode");
	HX_STACK_LINE(346)
	bool tmp5 = (buttonNode != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(346)
	bool result = tmp5;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(348)
	bool tmp6 = (buttonNode != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(348)
	if ((tmp6)){
		HX_STACK_LINE(350)
		::flixel::graphics::frames::FlxFramesCollection tmp7 = this->frames;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(350)
		::flixel::graphics::frames::FlxTileFrames buttonFrames = ((::flixel::graphics::frames::FlxTileFrames)(tmp7));		HX_STACK_VAR(buttonFrames,"buttonFrames");
		HX_STACK_LINE(351)
		::flixel::math::FlxPoint tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(351)
		{
			HX_STACK_LINE(351)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp9 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(351)
			::flixel::math::FlxPoint tmp10 = tmp9->get();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(351)
			Float tmp11 = buttonFrames->tileSize->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(351)
			Float tmp12 = buttonFrames->tileSize->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(351)
			::flixel::math::FlxPoint tmp13 = tmp10->set(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(351)
			::flixel::math::FlxPoint point = tmp13;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(351)
			point->_inPool = false;
			HX_STACK_LINE(351)
			tmp8 = point;
		}
		HX_STACK_LINE(351)
		::flixel::math::FlxPoint tileSize = tmp8;		HX_STACK_VAR(tileSize,"tileSize");
		HX_STACK_LINE(352)
		::flixel::math::FlxPoint tmp9 = tileSize;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(352)
		::flixel::graphics::frames::FlxTileFrames tmp10 = buttonNode->getTileFrames(tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(352)
		::flixel::graphics::frames::FlxTileFrames tileFrames = tmp10;		HX_STACK_VAR(tileFrames,"tileFrames");
		HX_STACK_LINE(353)
		::flixel::graphics::frames::FlxTileFrames tmp11 = tileFrames;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(353)
		this->set_frames(tmp11);
	}
	HX_STACK_LINE(356)
	bool tmp7 = result;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(356)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(356)
	if ((tmp7)){
		HX_STACK_LINE(356)
		::flixel::text::FlxText tmp9 = this->label;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(356)
		::flixel::text::FlxText tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(356)
		tmp8 = (tmp10 != null());
	}
	else{
		HX_STACK_LINE(356)
		tmp8 = false;
	}
	HX_STACK_LINE(356)
	if ((tmp8)){
		HX_STACK_LINE(358)
		::flixel::text::FlxText tmp9 = this->label;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(358)
		::openfl::_legacy::display::BitmapData tmp10 = tmp9->graphic->bitmap;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(358)
		::flixel::text::FlxText tmp11 = this->label;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(358)
		::String tmp12 = tmp11->graphic->key;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(358)
		::flixel::graphics::atlas::FlxNode tmp13 = atlas->addNode(tmp10,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(358)
		::flixel::graphics::atlas::FlxNode labelNode = tmp13;		HX_STACK_VAR(labelNode,"labelNode");
		HX_STACK_LINE(359)
		bool tmp14 = result;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(359)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(359)
		if ((tmp14)){
			HX_STACK_LINE(359)
			tmp15 = (labelNode != null());
		}
		else{
			HX_STACK_LINE(359)
			tmp15 = false;
		}
		HX_STACK_LINE(359)
		result = tmp15;
		HX_STACK_LINE(361)
		bool tmp16 = (labelNode != null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(361)
		if ((tmp16)){
			HX_STACK_LINE(363)
			::flixel::text::FlxText tmp17 = this->label;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(363)
			::flixel::graphics::frames::FlxImageFrame tmp18 = labelNode->getImageFrame();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(363)
			tmp17->set_frames(tmp18);
		}
	}
	HX_STACK_LINE(367)
	bool tmp9 = result;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(367)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_flixel_text_FlxText_obj,stampOnAtlas,return )

Void FlxTypedButton_flixel_text_FlxText_obj::updateButton( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton_flixel_text_FlxText","updateButton",0xc55492c6,"flixel.ui.FlxTypedButton_flixel_text_FlxText.updateButton","flixel/ui/FlxButton.hx",375,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(377)
		bool tmp = this->checkMouseOverlap();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(377)
		bool overlapFound = tmp;		HX_STACK_VAR(overlapFound,"overlapFound");
		HX_STACK_LINE(378)
		bool tmp1 = overlapFound;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(378)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(378)
		if ((tmp2)){
			HX_STACK_LINE(379)
			bool tmp3 = this->checkTouchOverlap();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(379)
			overlapFound = tmp3;
		}
		HX_STACK_LINE(388)
		int tmp3 = this->status;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(388)
		bool tmp4 = (tmp3 != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(388)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(388)
		if ((tmp4)){
			HX_STACK_LINE(389)
			bool tmp6 = overlapFound;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(389)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(389)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(389)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(389)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(389)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(389)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(389)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(389)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(389)
			if ((tmp14)){
				HX_STACK_LINE(389)
				::flixel::input::IFlxInput tmp15 = this->currentInput;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(389)
				::flixel::input::IFlxInput tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(389)
				::flixel::input::IFlxInput tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(389)
				bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(389)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(389)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(389)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(389)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(389)
				if ((tmp22)){
					HX_STACK_LINE(389)
					::flixel::input::IFlxInput tmp23 = this->currentInput;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(389)
					::flixel::input::IFlxInput tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(389)
					::flixel::input::IFlxInput tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(389)
					::flixel::input::IFlxInput tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(389)
					tmp5 = tmp26->get_justReleased();
				}
				else{
					HX_STACK_LINE(389)
					tmp5 = false;
				}
			}
			else{
				HX_STACK_LINE(389)
				tmp5 = true;
			}
		}
		else{
			HX_STACK_LINE(388)
			tmp5 = false;
		}
		HX_STACK_LINE(388)
		if ((tmp5)){
			HX_STACK_LINE(391)
			this->onOutHandler();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_flixel_text_FlxText_obj,updateButton,(void))

bool FlxTypedButton_flixel_text_FlxText_obj::checkMouseOverlap( ){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton_flixel_text_FlxText","checkMouseOverlap",0xab0126ff,"flixel.ui.FlxTypedButton_flixel_text_FlxText.checkMouseOverlap","flixel/ui/FlxButton.hx",396,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_LINE(398)
	{
		HX_STACK_LINE(398)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(398)
		Array< ::Dynamic > _g1 = this->get_cameras();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(398)
		while((true)){
			HX_STACK_LINE(398)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(398)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(398)
			if ((tmp1)){
				HX_STACK_LINE(398)
				break;
			}
			HX_STACK_LINE(398)
			::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(398)
			::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(398)
			++(_g);
			HX_STACK_LINE(400)
			{
				HX_STACK_LINE(400)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(400)
				Array< int > _g3 = this->mouseButtons;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(400)
				while((true)){
					HX_STACK_LINE(400)
					bool tmp3 = (_g2 < _g3->length);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(400)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(400)
					if ((tmp4)){
						HX_STACK_LINE(400)
						break;
					}
					HX_STACK_LINE(400)
					int tmp5 = _g3->__get(_g2);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(400)
					int buttonID = tmp5;		HX_STACK_VAR(buttonID,"buttonID");
					HX_STACK_LINE(400)
					++(_g2);
					HX_STACK_LINE(402)
					int tmp6 = buttonID;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(402)
					::flixel::input::mouse::FlxMouseButton tmp7 = ::flixel::input::mouse::FlxMouseButton_obj::getByID(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(402)
					::flixel::input::mouse::FlxMouseButton button = tmp7;		HX_STACK_VAR(button,"button");
					HX_STACK_LINE(403)
					bool tmp8 = (button != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(403)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(403)
					if ((tmp8)){
						HX_STACK_LINE(403)
						::flixel::input::mouse::FlxMouse tmp10 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(403)
						::flixel::input::mouse::FlxMouse tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(403)
						::flixel::input::mouse::FlxMouseButton tmp12 = button;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(403)
						::flixel::math::FlxPoint tmp13 = button->justPressedPosition;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(403)
						::flixel::FlxCamera tmp14 = camera;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(403)
						::flixel::input::mouse::FlxMouse tmp15 = tmp11;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(403)
						::flixel::input::mouse::FlxMouseButton tmp16 = tmp12;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(403)
						::flixel::math::FlxPoint tmp17 = tmp13;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(403)
						::flixel::FlxCamera tmp18 = tmp14;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(403)
						tmp9 = this->checkInput(tmp15,tmp16,tmp17,tmp18);
					}
					else{
						HX_STACK_LINE(403)
						tmp9 = false;
					}
					HX_STACK_LINE(403)
					if ((tmp9)){
						HX_STACK_LINE(405)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(411)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_flixel_text_FlxText_obj,checkMouseOverlap,return )

bool FlxTypedButton_flixel_text_FlxText_obj::checkTouchOverlap( ){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton_flixel_text_FlxText","checkTouchOverlap",0xf3bdeca5,"flixel.ui.FlxTypedButton_flixel_text_FlxText.checkTouchOverlap","flixel/ui/FlxButton.hx",429,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_LINE(429)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_flixel_text_FlxText_obj,checkTouchOverlap,return )

bool FlxTypedButton_flixel_text_FlxText_obj::checkInput( ::flixel::input::FlxPointer pointer,::flixel::input::IFlxInput input,::flixel::math::FlxPoint justPressedPosition,::flixel::FlxCamera camera){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton_flixel_text_FlxText","checkInput",0xaea16f4d,"flixel.ui.FlxTypedButton_flixel_text_FlxText.checkInput","flixel/ui/FlxButton.hx",433,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pointer,"pointer")
	HX_STACK_ARG(input,"input")
	HX_STACK_ARG(justPressedPosition,"justPressedPosition")
	HX_STACK_ARG(camera,"camera")
	HX_STACK_LINE(434)
	Float tmp = this->maxInputMovement;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(434)
	Float tmp1 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(434)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(434)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(434)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(434)
	if ((tmp3)){
		HX_STACK_LINE(435)
		::flixel::math::FlxPoint tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(435)
		{
			HX_STACK_LINE(435)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(435)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(435)
			::flixel::math::FlxPoint tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(435)
			{
				HX_STACK_LINE(435)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp7 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(435)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(435)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(435)
				::flixel::math::FlxPoint tmp10 = tmp9->get();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(435)
				::flixel::math::FlxPoint tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(435)
				::flixel::math::FlxPoint tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(435)
				Float tmp13 = X;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(435)
				Float tmp14 = Y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(435)
				Float tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(435)
				Float tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(435)
				Float tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(435)
				Float tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(435)
				::flixel::math::FlxPoint tmp19 = tmp12->set(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(435)
				::flixel::math::FlxPoint tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(435)
				::flixel::math::FlxPoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(435)
				::flixel::math::FlxPoint point = tmp21;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(435)
				point->_inPool = false;
				HX_STACK_LINE(435)
				tmp6 = point;
			}
			HX_STACK_LINE(435)
			::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(435)
			point->_weak = true;
			HX_STACK_LINE(435)
			tmp5 = point;
		}
		HX_STACK_LINE(435)
		::flixel::math::FlxPoint tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(435)
		::flixel::math::FlxPoint tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(435)
		::flixel::math::FlxPoint tmp8 = pointer->getScreenPosition(null(),tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(435)
		::flixel::math::FlxPoint tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(435)
		::flixel::math::FlxPoint tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(435)
		::flixel::math::FlxPoint tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(435)
		::flixel::math::FlxPoint tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(435)
		Float tmp13 = justPressedPosition->distanceTo(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(435)
		Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(435)
		Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(435)
		Float tmp16 = this->maxInputMovement;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(435)
		Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(435)
		Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(435)
		tmp4 = (tmp15 > tmp18);
	}
	else{
		HX_STACK_LINE(434)
		tmp4 = false;
	}
	HX_STACK_LINE(434)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(434)
	if ((tmp4)){
		HX_STACK_LINE(436)
		::flixel::input::IFlxInput tmp6 = input;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(436)
		::flixel::input::IFlxInput tmp7 = this->currentInput;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(436)
		::flixel::input::IFlxInput tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(436)
		tmp5 = (tmp6 == tmp8);
	}
	else{
		HX_STACK_LINE(434)
		tmp5 = false;
	}
	HX_STACK_LINE(434)
	if ((tmp5)){
		HX_STACK_LINE(438)
		::flixel::input::IFlxInput tmp6 = this->currentInput;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(438)
		(tmp6 == null());
	}
	else{
		HX_STACK_LINE(440)
		::flixel::FlxCamera tmp6 = camera;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(440)
		::flixel::math::FlxPoint tmp7 = this->_point;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(440)
		::flixel::math::FlxPoint tmp8 = pointer->getWorldPosition(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(440)
		::flixel::FlxCamera tmp9 = camera;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(440)
		bool tmp10 = this->overlapsPoint(tmp8,true,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(440)
		if ((tmp10)){
			HX_STACK_LINE(442)
			::flixel::input::IFlxInput tmp11 = input;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(442)
			this->updateStatus(tmp11);
			HX_STACK_LINE(443)
			return true;
		}
	}
	HX_STACK_LINE(446)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedButton_flixel_text_FlxText_obj,checkInput,return )

Void FlxTypedButton_flixel_text_FlxText_obj::updateStatus( ::flixel::input::IFlxInput input){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton_flixel_text_FlxText","updateStatus",0xf1701806,"flixel.ui.FlxTypedButton_flixel_text_FlxText.updateStatus","flixel/ui/FlxButton.hx",453,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_ARG(input,"input")
		HX_STACK_LINE(454)
		bool tmp = input->get_justPressed();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(454)
		if ((tmp)){
			HX_STACK_LINE(456)
			this->currentInput = input;
			HX_STACK_LINE(457)
			this->onDownHandler();
		}
		else{
			HX_STACK_LINE(459)
			int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(459)
			bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(459)
			if ((tmp2)){
				HX_STACK_LINE(462)
				bool tmp3 = this->allowSwiping;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(462)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(462)
				if ((tmp3)){
					HX_STACK_LINE(462)
					tmp4 = input->get_pressed();
				}
				else{
					HX_STACK_LINE(462)
					tmp4 = false;
				}
				HX_STACK_LINE(462)
				if ((tmp4)){
					HX_STACK_LINE(464)
					this->onDownHandler();
				}
				else{
					HX_STACK_LINE(468)
					this->onOverHandler();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_flixel_text_FlxText_obj,updateStatus,(void))

Void FlxTypedButton_flixel_text_FlxText_obj::updateLabelPosition( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton_flixel_text_FlxText","updateLabelPosition",0x2a00d069,"flixel.ui.FlxTypedButton_flixel_text_FlxText.updateLabelPosition","flixel/ui/FlxButton.hx",474,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(475)
		::flixel::FlxSprite tmp = this->_spriteLabel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(475)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(475)
		if ((tmp1)){
			HX_STACK_LINE(477)
			::flixel::FlxSprite tmp2 = this->_spriteLabel;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(477)
			bool tmp3 = this->pixelPerfectPosition;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(477)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(477)
			if ((tmp3)){
				HX_STACK_LINE(477)
				Float tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(477)
				tmp4 = ::Math_obj::floor(tmp5);
			}
			else{
				HX_STACK_LINE(477)
				tmp4 = this->x;
			}
			HX_STACK_LINE(477)
			int tmp5 = this->status;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(477)
			::flixel::math::FlxPoint tmp6 = this->labelOffsets->__get(tmp5).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(477)
			Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(477)
			Float tmp8 = (tmp4 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(477)
			tmp2->set_x(tmp8);
			HX_STACK_LINE(478)
			::flixel::FlxSprite tmp9 = this->_spriteLabel;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(478)
			bool tmp10 = this->pixelPerfectPosition;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(478)
			Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(478)
			if ((tmp10)){
				HX_STACK_LINE(478)
				Float tmp12 = this->y;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(478)
				tmp11 = ::Math_obj::floor(tmp12);
			}
			else{
				HX_STACK_LINE(478)
				tmp11 = this->y;
			}
			HX_STACK_LINE(478)
			int tmp12 = this->status;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(478)
			::flixel::math::FlxPoint tmp13 = this->labelOffsets->__get(tmp12).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(478)
			Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(478)
			Float tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(478)
			tmp9->set_y(tmp15);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_flixel_text_FlxText_obj,updateLabelPosition,(void))

Void FlxTypedButton_flixel_text_FlxText_obj::updateLabelAlpha( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton_flixel_text_FlxText","updateLabelAlpha",0x3fb91f9e,"flixel.ui.FlxTypedButton_flixel_text_FlxText.updateLabelAlpha","flixel/ui/FlxButton.hx",483,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(484)
		::flixel::FlxSprite tmp = this->_spriteLabel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(484)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(484)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(484)
		if ((tmp1)){
			HX_STACK_LINE(484)
			int tmp3 = this->labelAlphas->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(484)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(484)
			int tmp5 = this->status;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(484)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(484)
			tmp2 = (tmp4 > tmp6);
		}
		else{
			HX_STACK_LINE(484)
			tmp2 = false;
		}
		HX_STACK_LINE(484)
		if ((tmp2)){
			HX_STACK_LINE(486)
			::flixel::FlxSprite tmp3 = this->_spriteLabel;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(486)
			Float tmp4 = this->alpha;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(486)
			int tmp5 = this->status;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(486)
			Float tmp6 = this->labelAlphas->__get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(486)
			Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(486)
			tmp3->set_alpha(tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_flixel_text_FlxText_obj,updateLabelAlpha,(void))

Void FlxTypedButton_flixel_text_FlxText_obj::onUpEventListener( Dynamic _){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton_flixel_text_FlxText","onUpEventListener",0xcc8c5f29,"flixel.ui.FlxTypedButton_flixel_text_FlxText.onUpEventListener","flixel/ui/FlxButton.hx",496,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(497)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(497)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(497)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(497)
		if ((tmp1)){
			HX_STACK_LINE(497)
			tmp2 = this->exists;
		}
		else{
			HX_STACK_LINE(497)
			tmp2 = false;
		}
		HX_STACK_LINE(497)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(497)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(497)
		if ((tmp3)){
			HX_STACK_LINE(497)
			tmp4 = this->active;
		}
		else{
			HX_STACK_LINE(497)
			tmp4 = false;
		}
		HX_STACK_LINE(497)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(497)
		if ((tmp4)){
			HX_STACK_LINE(497)
			int tmp6 = this->status;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(497)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(497)
			tmp5 = (tmp7 == (int)2);
		}
		else{
			HX_STACK_LINE(497)
			tmp5 = false;
		}
		HX_STACK_LINE(497)
		if ((tmp5)){
			HX_STACK_LINE(499)
			this->onUpHandler();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_flixel_text_FlxText_obj,onUpEventListener,(void))

Void FlxTypedButton_flixel_text_FlxText_obj::onUpHandler( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton_flixel_text_FlxText","onUpHandler",0x44710205,"flixel.ui.FlxTypedButton_flixel_text_FlxText.onUpHandler","flixel/ui/FlxButton.hx",508,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(509)
		this->set_status((int)0);
		HX_STACK_LINE(510)
		::flixel::input::FlxInput tmp = this->input;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(510)
		tmp->release();
		HX_STACK_LINE(511)
		this->currentInput = null();
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			::flixel::ui::_FlxButton::FlxButtonEvent tmp1 = this->onUp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(513)
			::flixel::ui::_FlxButton::FlxButtonEvent _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(513)
			bool tmp2 = (_this->callback != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(513)
			if ((tmp2)){
				HX_STACK_LINE(513)
				_this->callback();
			}
			HX_STACK_LINE(513)
			bool tmp3 = (_this->sound != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(513)
			if ((tmp3)){
				HX_STACK_LINE(513)
				_this->sound->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(true,null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_flixel_text_FlxText_obj,onUpHandler,(void))

Void FlxTypedButton_flixel_text_FlxText_obj::onDownHandler( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton_flixel_text_FlxText","onDownHandler",0x1de9d05e,"flixel.ui.FlxTypedButton_flixel_text_FlxText.onDownHandler","flixel/ui/FlxButton.hx",520,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(521)
		this->set_status((int)2);
		HX_STACK_LINE(522)
		::flixel::input::FlxInput tmp = this->input;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(522)
		tmp->press();
		HX_STACK_LINE(524)
		{
			HX_STACK_LINE(524)
			::flixel::ui::_FlxButton::FlxButtonEvent tmp1 = this->onDown;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(524)
			::flixel::ui::_FlxButton::FlxButtonEvent _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(524)
			bool tmp2 = (_this->callback != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(524)
			if ((tmp2)){
				HX_STACK_LINE(524)
				_this->callback();
			}
			HX_STACK_LINE(524)
			bool tmp3 = (_this->sound != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(524)
			if ((tmp3)){
				HX_STACK_LINE(524)
				_this->sound->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(true,null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_flixel_text_FlxText_obj,onDownHandler,(void))

Void FlxTypedButton_flixel_text_FlxText_obj::onOverHandler( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton_flixel_text_FlxText","onOverHandler",0xf95219ac,"flixel.ui.FlxTypedButton_flixel_text_FlxText.onOverHandler","flixel/ui/FlxButton.hx",531,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(532)
		this->set_status((int)1);
		HX_STACK_LINE(534)
		{
			HX_STACK_LINE(534)
			::flixel::ui::_FlxButton::FlxButtonEvent tmp = this->onOver;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(534)
			::flixel::ui::_FlxButton::FlxButtonEvent _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(534)
			bool tmp1 = (_this->callback != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(534)
			if ((tmp1)){
				HX_STACK_LINE(534)
				_this->callback();
			}
			HX_STACK_LINE(534)
			bool tmp2 = (_this->sound != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(534)
			if ((tmp2)){
				HX_STACK_LINE(534)
				_this->sound->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(true,null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_flixel_text_FlxText_obj,onOverHandler,(void))

Void FlxTypedButton_flixel_text_FlxText_obj::onOutHandler( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton_flixel_text_FlxText","onOutHandler",0x8a95b0c6,"flixel.ui.FlxTypedButton_flixel_text_FlxText.onOutHandler","flixel/ui/FlxButton.hx",541,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(542)
		this->set_status((int)0);
		HX_STACK_LINE(543)
		::flixel::input::FlxInput tmp = this->input;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(543)
		tmp->release();
		HX_STACK_LINE(545)
		{
			HX_STACK_LINE(545)
			::flixel::ui::_FlxButton::FlxButtonEvent tmp1 = this->onOut;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(545)
			::flixel::ui::_FlxButton::FlxButtonEvent _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(545)
			bool tmp2 = (_this->callback != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(545)
			if ((tmp2)){
				HX_STACK_LINE(545)
				_this->callback();
			}
			HX_STACK_LINE(545)
			bool tmp3 = (_this->sound != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(545)
			if ((tmp3)){
				HX_STACK_LINE(545)
				_this->sound->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(true,null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_flixel_text_FlxText_obj,onOutHandler,(void))

::flixel::text::FlxText FlxTypedButton_flixel_text_FlxText_obj::set_label( ::flixel::text::FlxText Value){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton_flixel_text_FlxText","set_label",0xb45e3b8c,"flixel.ui.FlxTypedButton_flixel_text_FlxText.set_label","flixel/ui/FlxButton.hx",549,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(550)
	bool tmp = (Value != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(550)
	if ((tmp)){
		HX_STACK_LINE(553)
		Value->scrollFactor->put();
		HX_STACK_LINE(554)
		::flixel::math::FlxPoint tmp1 = this->scrollFactor;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(554)
		Value->scrollFactor = tmp1;
	}
	HX_STACK_LINE(557)
	this->label = Value;
	HX_STACK_LINE(558)
	::flixel::text::FlxText tmp1 = this->label;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(558)
	this->_spriteLabel = tmp1;
	HX_STACK_LINE(560)
	this->updateLabelPosition();
	HX_STACK_LINE(562)
	::flixel::text::FlxText tmp2 = Value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(562)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_flixel_text_FlxText_obj,set_label,return )

int FlxTypedButton_flixel_text_FlxText_obj::set_status( int Value){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton_flixel_text_FlxText","set_status",0xda949e9a,"flixel.ui.FlxTypedButton_flixel_text_FlxText.set_status","flixel/ui/FlxButton.hx",566,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(567)
	this->status = Value;
	HX_STACK_LINE(568)
	this->updateLabelAlpha();
	HX_STACK_LINE(569)
	int tmp = this->status;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(569)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_flixel_text_FlxText_obj,set_status,return )

Float FlxTypedButton_flixel_text_FlxText_obj::set_alpha( Float Value){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton_flixel_text_FlxText","set_alpha",0x6645d4f6,"flixel.ui.FlxTypedButton_flixel_text_FlxText.set_alpha","flixel/ui/FlxButton.hx",573,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(574)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(574)
	this->super::set_alpha(tmp);
	HX_STACK_LINE(575)
	this->updateLabelAlpha();
	HX_STACK_LINE(576)
	Float tmp1 = this->alpha;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(576)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_flixel_text_FlxText_obj,set_alpha,return )

Float FlxTypedButton_flixel_text_FlxText_obj::set_x( Float Value){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton_flixel_text_FlxText","set_x",0x2df28210,"flixel.ui.FlxTypedButton_flixel_text_FlxText.set_x","flixel/ui/FlxButton.hx",580,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(581)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(581)
	this->super::set_x(tmp);
	HX_STACK_LINE(582)
	this->updateLabelPosition();
	HX_STACK_LINE(583)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(583)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_flixel_text_FlxText_obj,set_x,return )

Float FlxTypedButton_flixel_text_FlxText_obj::set_y( Float Value){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton_flixel_text_FlxText","set_y",0x2df28211,"flixel.ui.FlxTypedButton_flixel_text_FlxText.set_y","flixel/ui/FlxButton.hx",587,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(588)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(588)
	this->super::set_y(tmp);
	HX_STACK_LINE(589)
	this->updateLabelPosition();
	HX_STACK_LINE(590)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(590)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_flixel_text_FlxText_obj,set_y,return )

bool FlxTypedButton_flixel_text_FlxText_obj::get_justReleased( ){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton_flixel_text_FlxText","get_justReleased",0x234d62fd,"flixel.ui.FlxTypedButton_flixel_text_FlxText.get_justReleased","flixel/ui/FlxButton.hx",594,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_LINE(595)
	::flixel::input::FlxInput tmp = this->input;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(595)
	int tmp1 = tmp->current;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(595)
	bool tmp2 = (tmp1 == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(595)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_flixel_text_FlxText_obj,get_justReleased,return )

bool FlxTypedButton_flixel_text_FlxText_obj::get_released( ){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton_flixel_text_FlxText","get_released",0x17b1c6b1,"flixel.ui.FlxTypedButton_flixel_text_FlxText.get_released","flixel/ui/FlxButton.hx",599,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_LINE(600)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(600)
	{
		HX_STACK_LINE(600)
		::flixel::input::FlxInput tmp1 = this->input;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(600)
		::flixel::input::FlxInput _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(600)
		bool tmp2 = (_this->current == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(600)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(600)
		if ((tmp3)){
			HX_STACK_LINE(600)
			tmp = (_this->current == (int)-1);
		}
		else{
			HX_STACK_LINE(600)
			tmp = true;
		}
	}
	HX_STACK_LINE(600)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_flixel_text_FlxText_obj,get_released,return )

bool FlxTypedButton_flixel_text_FlxText_obj::get_pressed( ){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton_flixel_text_FlxText","get_pressed",0x60818f2e,"flixel.ui.FlxTypedButton_flixel_text_FlxText.get_pressed","flixel/ui/FlxButton.hx",604,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_LINE(605)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(605)
	{
		HX_STACK_LINE(605)
		::flixel::input::FlxInput tmp1 = this->input;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(605)
		::flixel::input::FlxInput _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(605)
		bool tmp2 = (_this->current == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(605)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(605)
		if ((tmp3)){
			HX_STACK_LINE(605)
			tmp = (_this->current == (int)2);
		}
		else{
			HX_STACK_LINE(605)
			tmp = true;
		}
	}
	HX_STACK_LINE(605)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_flixel_text_FlxText_obj,get_pressed,return )

bool FlxTypedButton_flixel_text_FlxText_obj::get_justPressed( ){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton_flixel_text_FlxText","get_justPressed",0x5f690062,"flixel.ui.FlxTypedButton_flixel_text_FlxText.get_justPressed","flixel/ui/FlxButton.hx",609,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_LINE(610)
	::flixel::input::FlxInput tmp = this->input;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(610)
	int tmp1 = tmp->current;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(610)
	bool tmp2 = (tmp1 == (int)2);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(610)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_flixel_text_FlxText_obj,get_justPressed,return )


FlxTypedButton_flixel_text_FlxText_obj::FlxTypedButton_flixel_text_FlxText_obj()
{
}

void FlxTypedButton_flixel_text_FlxText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedButton_flixel_text_FlxText);
	HX_MARK_MEMBER_NAME(label,"label");
	HX_MARK_MEMBER_NAME(labelOffsets,"labelOffsets");
	HX_MARK_MEMBER_NAME(labelAlphas,"labelAlphas");
	HX_MARK_MEMBER_NAME(statusAnimations,"statusAnimations");
	HX_MARK_MEMBER_NAME(allowSwiping,"allowSwiping");
	HX_MARK_MEMBER_NAME(mouseButtons,"mouseButtons");
	HX_MARK_MEMBER_NAME(maxInputMovement,"maxInputMovement");
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_MEMBER_NAME(onUp,"onUp");
	HX_MARK_MEMBER_NAME(onDown,"onDown");
	HX_MARK_MEMBER_NAME(onOver,"onOver");
	HX_MARK_MEMBER_NAME(onOut,"onOut");
	HX_MARK_MEMBER_NAME(_spriteLabel,"_spriteLabel");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(currentInput,"currentInput");
	HX_MARK_MEMBER_NAME(lastStatus,"lastStatus");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypedButton_flixel_text_FlxText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(label,"label");
	HX_VISIT_MEMBER_NAME(labelOffsets,"labelOffsets");
	HX_VISIT_MEMBER_NAME(labelAlphas,"labelAlphas");
	HX_VISIT_MEMBER_NAME(statusAnimations,"statusAnimations");
	HX_VISIT_MEMBER_NAME(allowSwiping,"allowSwiping");
	HX_VISIT_MEMBER_NAME(mouseButtons,"mouseButtons");
	HX_VISIT_MEMBER_NAME(maxInputMovement,"maxInputMovement");
	HX_VISIT_MEMBER_NAME(status,"status");
	HX_VISIT_MEMBER_NAME(onUp,"onUp");
	HX_VISIT_MEMBER_NAME(onDown,"onDown");
	HX_VISIT_MEMBER_NAME(onOver,"onOver");
	HX_VISIT_MEMBER_NAME(onOut,"onOut");
	HX_VISIT_MEMBER_NAME(_spriteLabel,"_spriteLabel");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(currentInput,"currentInput");
	HX_VISIT_MEMBER_NAME(lastStatus,"lastStatus");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTypedButton_flixel_text_FlxText_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"onUp") ) { return onUp; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return label; }
		if (HX_FIELD_EQ(inName,"onOut") ) { return onOut; }
		if (HX_FIELD_EQ(inName,"input") ) { return input; }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { return status; }
		if (HX_FIELD_EQ(inName,"onDown") ) { return onDown; }
		if (HX_FIELD_EQ(inName,"onOver") ) { return onOver; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { if (inCallProp == hx::paccAlways) return get_pressed(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"released") ) { if (inCallProp == hx::paccAlways) return get_released(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawDebug") ) { return drawDebug_dyn(); }
		if (HX_FIELD_EQ(inName,"set_label") ) { return set_label_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lastStatus") ) { return lastStatus; }
		if (HX_FIELD_EQ(inName,"checkInput") ) { return checkInput_dyn(); }
		if (HX_FIELD_EQ(inName,"set_status") ) { return set_status_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"labelAlphas") ) { return labelAlphas; }
		if (HX_FIELD_EQ(inName,"justPressed") ) { if (inCallProp == hx::paccAlways) return get_justPressed(); }
		if (HX_FIELD_EQ(inName,"onUpHandler") ) { return onUpHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pressed") ) { return get_pressed_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"labelOffsets") ) { return labelOffsets; }
		if (HX_FIELD_EQ(inName,"allowSwiping") ) { return allowSwiping; }
		if (HX_FIELD_EQ(inName,"mouseButtons") ) { return mouseButtons; }
		if (HX_FIELD_EQ(inName,"justReleased") ) { if (inCallProp == hx::paccAlways) return get_justReleased(); }
		if (HX_FIELD_EQ(inName,"_spriteLabel") ) { return _spriteLabel; }
		if (HX_FIELD_EQ(inName,"currentInput") ) { return currentInput; }
		if (HX_FIELD_EQ(inName,"stampOnAtlas") ) { return stampOnAtlas_dyn(); }
		if (HX_FIELD_EQ(inName,"updateButton") ) { return updateButton_dyn(); }
		if (HX_FIELD_EQ(inName,"updateStatus") ) { return updateStatus_dyn(); }
		if (HX_FIELD_EQ(inName,"onOutHandler") ) { return onOutHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"get_released") ) { return get_released_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"graphicLoaded") ) { return graphicLoaded_dyn(); }
		if (HX_FIELD_EQ(inName,"onDownHandler") ) { return onDownHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"onOverHandler") ) { return onOverHandler_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setupAnimation") ) { return setupAnimation_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_justPressed") ) { return get_justPressed_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"statusAnimations") ) { return statusAnimations; }
		if (HX_FIELD_EQ(inName,"maxInputMovement") ) { return maxInputMovement; }
		if (HX_FIELD_EQ(inName,"updateLabelAlpha") ) { return updateLabelAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_justReleased") ) { return get_justReleased_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"checkMouseOverlap") ) { return checkMouseOverlap_dyn(); }
		if (HX_FIELD_EQ(inName,"checkTouchOverlap") ) { return checkTouchOverlap_dyn(); }
		if (HX_FIELD_EQ(inName,"onUpEventListener") ) { return onUpEventListener_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loadDefaultGraphic") ) { return loadDefaultGraphic_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateLabelPosition") ) { return updateLabelPosition_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"updateStatusAnimation") ) { return updateStatusAnimation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTypedButton_flixel_text_FlxText_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"onUp") ) { onUp=inValue.Cast< ::flixel::ui::_FlxButton::FlxButtonEvent >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { if (inCallProp == hx::paccAlways) return set_label(inValue);label=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onOut") ) { onOut=inValue.Cast< ::flixel::ui::_FlxButton::FlxButtonEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::flixel::input::FlxInput >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { if (inCallProp == hx::paccAlways) return set_status(inValue);status=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onDown") ) { onDown=inValue.Cast< ::flixel::ui::_FlxButton::FlxButtonEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onOver") ) { onOver=inValue.Cast< ::flixel::ui::_FlxButton::FlxButtonEvent >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lastStatus") ) { lastStatus=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"labelAlphas") ) { labelAlphas=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"labelOffsets") ) { labelOffsets=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowSwiping") ) { allowSwiping=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseButtons") ) { mouseButtons=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_spriteLabel") ) { _spriteLabel=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentInput") ) { currentInput=inValue.Cast< ::flixel::input::IFlxInput >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"statusAnimations") ) { statusAnimations=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxInputMovement") ) { maxInputMovement=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedButton_flixel_text_FlxText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"));
	outFields->push(HX_HCSTRING("labelOffsets","\xec","\x89","\xc7","\x2c"));
	outFields->push(HX_HCSTRING("labelAlphas","\x69","\x3c","\x3c","\x8d"));
	outFields->push(HX_HCSTRING("statusAnimations","\xc1","\xd2","\xc0","\xc5"));
	outFields->push(HX_HCSTRING("allowSwiping","\xae","\x3a","\x40","\x43"));
	outFields->push(HX_HCSTRING("mouseButtons","\x9c","\xa2","\x1a","\xac"));
	outFields->push(HX_HCSTRING("maxInputMovement","\x15","\x8e","\xe1","\x5a"));
	outFields->push(HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"));
	outFields->push(HX_HCSTRING("onUp","\x5a","\x71","\xb2","\x49"));
	outFields->push(HX_HCSTRING("onDown","\x21","\x01","\xf8","\xe4"));
	outFields->push(HX_HCSTRING("onOver","\x13","\x9a","\x42","\xec"));
	outFields->push(HX_HCSTRING("onOut","\xaf","\x34","\x6c","\x32"));
	outFields->push(HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66"));
	outFields->push(HX_HCSTRING("released","\xbd","\x88","\xe7","\x76"));
	outFields->push(HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"));
	outFields->push(HX_HCSTRING("justPressed","\xd6","\x0d","\xa7","\xf2"));
	outFields->push(HX_HCSTRING("_spriteLabel","\xb0","\x9d","\x5b","\x0c"));
	outFields->push(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));
	outFields->push(HX_HCSTRING("currentInput","\x11","\xa9","\x29","\x05"));
	outFields->push(HX_HCSTRING("lastStatus","\x28","\xca","\xd6","\xd0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(FlxTypedButton_flixel_text_FlxText_obj,label),HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTypedButton_flixel_text_FlxText_obj,labelOffsets),HX_HCSTRING("labelOffsets","\xec","\x89","\xc7","\x2c")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxTypedButton_flixel_text_FlxText_obj,labelAlphas),HX_HCSTRING("labelAlphas","\x69","\x3c","\x3c","\x8d")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(FlxTypedButton_flixel_text_FlxText_obj,statusAnimations),HX_HCSTRING("statusAnimations","\xc1","\xd2","\xc0","\xc5")},
	{hx::fsBool,(int)offsetof(FlxTypedButton_flixel_text_FlxText_obj,allowSwiping),HX_HCSTRING("allowSwiping","\xae","\x3a","\x40","\x43")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxTypedButton_flixel_text_FlxText_obj,mouseButtons),HX_HCSTRING("mouseButtons","\x9c","\xa2","\x1a","\xac")},
	{hx::fsFloat,(int)offsetof(FlxTypedButton_flixel_text_FlxText_obj,maxInputMovement),HX_HCSTRING("maxInputMovement","\x15","\x8e","\xe1","\x5a")},
	{hx::fsInt,(int)offsetof(FlxTypedButton_flixel_text_FlxText_obj,status),HX_HCSTRING("status","\x32","\xe7","\xfb","\x05")},
	{hx::fsObject /*::flixel::ui::_FlxButton::FlxButtonEvent*/ ,(int)offsetof(FlxTypedButton_flixel_text_FlxText_obj,onUp),HX_HCSTRING("onUp","\x5a","\x71","\xb2","\x49")},
	{hx::fsObject /*::flixel::ui::_FlxButton::FlxButtonEvent*/ ,(int)offsetof(FlxTypedButton_flixel_text_FlxText_obj,onDown),HX_HCSTRING("onDown","\x21","\x01","\xf8","\xe4")},
	{hx::fsObject /*::flixel::ui::_FlxButton::FlxButtonEvent*/ ,(int)offsetof(FlxTypedButton_flixel_text_FlxText_obj,onOver),HX_HCSTRING("onOver","\x13","\x9a","\x42","\xec")},
	{hx::fsObject /*::flixel::ui::_FlxButton::FlxButtonEvent*/ ,(int)offsetof(FlxTypedButton_flixel_text_FlxText_obj,onOut),HX_HCSTRING("onOut","\xaf","\x34","\x6c","\x32")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxTypedButton_flixel_text_FlxText_obj,_spriteLabel),HX_HCSTRING("_spriteLabel","\xb0","\x9d","\x5b","\x0c")},
	{hx::fsObject /*::flixel::input::FlxInput*/ ,(int)offsetof(FlxTypedButton_flixel_text_FlxText_obj,input),HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsObject /*::flixel::input::IFlxInput*/ ,(int)offsetof(FlxTypedButton_flixel_text_FlxText_obj,currentInput),HX_HCSTRING("currentInput","\x11","\xa9","\x29","\x05")},
	{hx::fsInt,(int)offsetof(FlxTypedButton_flixel_text_FlxText_obj,lastStatus),HX_HCSTRING("lastStatus","\x28","\xca","\xd6","\xd0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"),
	HX_HCSTRING("labelOffsets","\xec","\x89","\xc7","\x2c"),
	HX_HCSTRING("labelAlphas","\x69","\x3c","\x3c","\x8d"),
	HX_HCSTRING("statusAnimations","\xc1","\xd2","\xc0","\xc5"),
	HX_HCSTRING("allowSwiping","\xae","\x3a","\x40","\x43"),
	HX_HCSTRING("mouseButtons","\x9c","\xa2","\x1a","\xac"),
	HX_HCSTRING("maxInputMovement","\x15","\x8e","\xe1","\x5a"),
	HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"),
	HX_HCSTRING("onUp","\x5a","\x71","\xb2","\x49"),
	HX_HCSTRING("onDown","\x21","\x01","\xf8","\xe4"),
	HX_HCSTRING("onOver","\x13","\x9a","\x42","\xec"),
	HX_HCSTRING("onOut","\xaf","\x34","\x6c","\x32"),
	HX_HCSTRING("_spriteLabel","\xb0","\x9d","\x5b","\x0c"),
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("currentInput","\x11","\xa9","\x29","\x05"),
	HX_HCSTRING("lastStatus","\x28","\xca","\xd6","\xd0"),
	HX_HCSTRING("graphicLoaded","\xcd","\x84","\x20","\x16"),
	HX_HCSTRING("loadDefaultGraphic","\xad","\x18","\x08","\x83"),
	HX_HCSTRING("setupAnimation","\xc7","\xe8","\xce","\xb6"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updateStatusAnimation","\x69","\x25","\xc1","\x4d"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("drawDebug","\xaf","\x87","\x2a","\x9f"),
	HX_HCSTRING("stampOnAtlas","\xe9","\xf9","\x45","\x2b"),
	HX_HCSTRING("updateButton","\xdb","\x08","\xa4","\xd9"),
	HX_HCSTRING("checkMouseOverlap","\xca","\x84","\x64","\x1a"),
	HX_HCSTRING("checkTouchOverlap","\x70","\x4a","\x21","\x63"),
	HX_HCSTRING("checkInput","\x22","\xc6","\x0d","\xce"),
	HX_HCSTRING("updateStatus","\x1b","\x8e","\xbf","\x05"),
	HX_HCSTRING("updateLabelPosition","\xf4","\x76","\x4f","\xbf"),
	HX_HCSTRING("updateLabelAlpha","\x33","\xc4","\x65","\x87"),
	HX_HCSTRING("onUpEventListener","\xf4","\xbc","\xef","\x3b"),
	HX_HCSTRING("onUpHandler","\x90","\xa5","\xd0","\xa3"),
	HX_HCSTRING("onDownHandler","\xa9","\xac","\x21","\xcf"),
	HX_HCSTRING("onOverHandler","\xf7","\xf5","\x89","\xaa"),
	HX_HCSTRING("onOutHandler","\xdb","\x26","\xe5","\x9e"),
	HX_HCSTRING("set_label","\x57","\x56","\xa9","\x96"),
	HX_HCSTRING("set_status","\x6f","\xf5","\x00","\xfa"),
	HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_justReleased","\x92","\x07","\xfa","\x6a"),
	HX_HCSTRING("get_released","\xc6","\x3c","\x01","\x2c"),
	HX_HCSTRING("get_pressed","\xb9","\x32","\xe1","\xbf"),
	HX_HCSTRING("get_justPressed","\x6d","\xc5","\x88","\xb3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypedButton_flixel_text_FlxText_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypedButton_flixel_text_FlxText_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTypedButton_flixel_text_FlxText_obj::__mClass;

void FlxTypedButton_flixel_text_FlxText_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.ui.FlxTypedButton_flixel_text_FlxText","\x63","\xa1","\xdc","\x6d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTypedButton_flixel_text_FlxText_obj >;
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
