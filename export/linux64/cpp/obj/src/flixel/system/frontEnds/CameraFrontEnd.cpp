#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace _system{
namespace frontEnds{

Void CameraFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","new",0xc6f5a1a3,"flixel.system.frontEnds.CameraFrontEnd.new","flixel/system/frontEnds/CameraFrontEnd.hx",9,0x7a57d3ec)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(30)
	this->_cameraRect = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(26)
	this->useBufferLocking = false;
	HX_STACK_LINE(15)
	this->list = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(160)
	::flixel::FlxCamera_obj::defaultCameras = this->list;
}
;
	return null();
}

//CameraFrontEnd_obj::~CameraFrontEnd_obj() { }

Dynamic CameraFrontEnd_obj::__CreateEmpty() { return  new CameraFrontEnd_obj; }
hx::ObjectPtr< CameraFrontEnd_obj > CameraFrontEnd_obj::__new()
{  hx::ObjectPtr< CameraFrontEnd_obj > _result_ = new CameraFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Dynamic CameraFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CameraFrontEnd_obj > _result_ = new CameraFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Dynamic CameraFrontEnd_obj::add( Dynamic NewCamera){
	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","add",0xc6ebc364,"flixel.system.frontEnds.CameraFrontEnd.add","flixel/system/frontEnds/CameraFrontEnd.hx",40,0x7a57d3ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewCamera,"NewCamera")
	HX_STACK_LINE(41)
	::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	::openfl::_legacy::display::Sprite tmp1 = NewCamera->__Field(HX_HCSTRING("flashSprite","\xd5","\xe9","\x0d","\xf4"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	::flixel::FlxGame tmp3 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(41)
	::openfl::_legacy::display::Sprite tmp4 = tmp3->_inputContainer;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(41)
	int tmp5 = tmp2->getChildIndex(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(41)
	tmp->addChildAt(tmp1,tmp5);
	HX_STACK_LINE(42)
	::flixel::_system::frontEnds::CameraFrontEnd tmp6 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(42)
	Dynamic tmp7 = NewCamera;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(42)
	tmp6->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
	HX_STACK_LINE(43)
	::flixel::_system::frontEnds::CameraFrontEnd tmp8 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(43)
	int tmp9 = tmp8->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(43)
	int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(43)
	NewCamera->__FieldRef(HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00")) = tmp10;
	HX_STACK_LINE(44)
	Dynamic tmp11 = NewCamera;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(44)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,add,return )

Void CameraFrontEnd_obj::remove( ::flixel::FlxCamera Camera,hx::Null< bool >  __o_Destroy){
bool Destroy = __o_Destroy.Default(true);
	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","remove",0xaa68b6e1,"flixel.system.frontEnds.CameraFrontEnd.remove","flixel/system/frontEnds/CameraFrontEnd.hx",54,0x7a57d3ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_ARG(Destroy,"Destroy")
{
		HX_STACK_LINE(55)
		::flixel::FlxCamera tmp = Camera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		int tmp1 = this->list->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		int index = tmp1;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(56)
		bool tmp2 = (Camera != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(56)
		if ((tmp2)){
			HX_STACK_LINE(56)
			tmp3 = (index != (int)-1);
		}
		else{
			HX_STACK_LINE(56)
			tmp3 = false;
		}
		HX_STACK_LINE(56)
		if ((tmp3)){
			HX_STACK_LINE(58)
			::flixel::FlxGame tmp4 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(58)
			::openfl::_legacy::display::Sprite tmp5 = Camera->flashSprite;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(58)
			tmp4->removeChild(tmp5);
			HX_STACK_LINE(59)
			int tmp6 = index;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(59)
			this->list->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp6,(int)1);
		}
		else{
			HX_STACK_LINE(63)
			::flixel::_system::frontEnds::LogFrontEnd tmp4 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(63)
			::flixel::_system::debug::log::LogStyle tmp5 = ::flixel::_system::debug::log::LogStyle_obj::WARNING;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(63)
			tmp4->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(HX_HCSTRING("FlxG.cameras.remove(): The camera you attemped to remove is not a part of the game.","\xf7","\xd7","\x5b","\xc5"),tmp5,true);
		}
		HX_STACK_LINE(66)
		bool tmp4 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(66)
		if ((tmp4)){
			HX_STACK_LINE(68)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(68)
			int tmp5 = this->list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(68)
			int _g = tmp5;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(68)
			while((true)){
				HX_STACK_LINE(68)
				bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(68)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(68)
				if ((tmp7)){
					HX_STACK_LINE(68)
					break;
				}
				HX_STACK_LINE(68)
				int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(68)
				int i = tmp8;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(70)
				::flixel::FlxCamera tmp9 = this->list->__GetItem(i);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(70)
				tmp9->ID = i;
			}
		}
		HX_STACK_LINE(74)
		bool tmp5 = Destroy;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(74)
		if ((tmp5)){
			HX_STACK_LINE(76)
			Camera->destroy();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CameraFrontEnd_obj,remove,(void))

Void CameraFrontEnd_obj::reset( ::flixel::FlxCamera NewCamera){
{
		HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","reset",0xf67331d2,"flixel.system.frontEnds.CameraFrontEnd.reset","flixel/system/frontEnds/CameraFrontEnd.hx",87,0x7a57d3ec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(NewCamera,"NewCamera")
		HX_STACK_LINE(88)
		{
			HX_STACK_LINE(88)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(88)
			Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(88)
			while((true)){
				HX_STACK_LINE(88)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(88)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(88)
				if ((tmp1)){
					HX_STACK_LINE(88)
					break;
				}
				HX_STACK_LINE(88)
				::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(88)
				::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(88)
				++(_g);
				HX_STACK_LINE(90)
				::flixel::FlxGame tmp3 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(90)
				::openfl::_legacy::display::Sprite tmp4 = camera->flashSprite;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(90)
				tmp3->removeChild(tmp4);
				HX_STACK_LINE(91)
				camera->destroy();
			}
		}
		HX_STACK_LINE(94)
		int tmp = this->list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		this->list->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp);
		HX_STACK_LINE(96)
		bool tmp1 = (NewCamera == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(96)
		if ((tmp1)){
			HX_STACK_LINE(98)
			int tmp2 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(98)
			int tmp3 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(98)
			::flixel::FlxCamera tmp4 = ::flixel::FlxCamera_obj::__new((int)0,(int)0,tmp2,tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(98)
			NewCamera = tmp4;
		}
		HX_STACK_LINE(101)
		::flixel::FlxCamera tmp2 = NewCamera;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(101)
		::flixel::FlxCamera tmp3 = this->add(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(101)
		::flixel::FlxG_obj::camera = tmp3;
		HX_STACK_LINE(102)
		NewCamera->ID = (int)0;
		HX_STACK_LINE(104)
		::flixel::FlxCamera_obj::defaultCameras = this->list;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,reset,(void))

Void CameraFrontEnd_obj::flash( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-1);
Float Duration = __o_Duration.Default(1);
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","flash",0x12371db3,"flixel.system.frontEnds.CameraFrontEnd.flash","flixel/system/frontEnds/CameraFrontEnd.hx",117,0x7a57d3ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(117)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(117)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(117)
		while((true)){
			HX_STACK_LINE(117)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(117)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(117)
			if ((tmp1)){
				HX_STACK_LINE(117)
				break;
			}
			HX_STACK_LINE(117)
			::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(117)
			::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(117)
			++(_g);
			HX_STACK_LINE(119)
			int tmp3 = Color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(119)
			Float tmp4 = Duration;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(119)
			Dynamic tmp5 = OnComplete;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(119)
			bool tmp6 = Force;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(119)
			camera->flash(tmp3,tmp4,tmp5,tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CameraFrontEnd_obj,flash,(void))

Void CameraFrontEnd_obj::fade( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,hx::Null< bool >  __o_FadeIn,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-16777216);
Float Duration = __o_Duration.Default(1);
bool FadeIn = __o_FadeIn.Default(false);
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","fade",0x4aaafed9,"flixel.system.frontEnds.CameraFrontEnd.fade","flixel/system/frontEnds/CameraFrontEnd.hx",134,0x7a57d3ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(FadeIn,"FadeIn")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(134)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(134)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(134)
		while((true)){
			HX_STACK_LINE(134)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(134)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(134)
			if ((tmp1)){
				HX_STACK_LINE(134)
				break;
			}
			HX_STACK_LINE(134)
			::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(134)
			::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(134)
			++(_g);
			HX_STACK_LINE(136)
			int tmp3 = Color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(136)
			Float tmp4 = Duration;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(136)
			bool tmp5 = FadeIn;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(136)
			Dynamic tmp6 = OnComplete;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(136)
			bool tmp7 = Force;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(136)
			camera->fade(tmp3,tmp4,tmp5,tmp6,tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(CameraFrontEnd_obj,fade,(void))

Void CameraFrontEnd_obj::shake( hx::Null< Float >  __o_Intensity,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force,::flixel::util::FlxAxes Axes){
Float Intensity = __o_Intensity.Default(((Float)0.05));
Float Duration = __o_Duration.Default(((Float)0.5));
bool Force = __o_Force.Default(true);
	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","shake",0x8bc7c6c9,"flixel.system.frontEnds.CameraFrontEnd.shake","flixel/system/frontEnds/CameraFrontEnd.hx",151,0x7a57d3ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Intensity,"Intensity")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
	HX_STACK_ARG(Axes,"Axes")
{
		HX_STACK_LINE(151)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(151)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(151)
		while((true)){
			HX_STACK_LINE(151)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(151)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(151)
			if ((tmp1)){
				HX_STACK_LINE(151)
				break;
			}
			HX_STACK_LINE(151)
			::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(151)
			::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(151)
			++(_g);
			HX_STACK_LINE(153)
			Float tmp3 = Intensity;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(153)
			Float tmp4 = Duration;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(153)
			Dynamic tmp5 = OnComplete;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(153)
			bool tmp6 = Force;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(153)
			::flixel::util::FlxAxes tmp7 = Axes;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(153)
			camera->shake(tmp3,tmp4,tmp5,tmp6,tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(CameraFrontEnd_obj,shake,(void))

Void CameraFrontEnd_obj::lock( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","lock",0x4eace548,"flixel.system.frontEnds.CameraFrontEnd.lock","flixel/system/frontEnds/CameraFrontEnd.hx",169,0x7a57d3ec)
		HX_STACK_THIS(this)
		HX_STACK_LINE(169)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(169)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(169)
		while((true)){
			HX_STACK_LINE(169)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(169)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(169)
			if ((tmp1)){
				HX_STACK_LINE(169)
				break;
			}
			HX_STACK_LINE(169)
			::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(169)
			::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(169)
			++(_g);
			HX_STACK_LINE(171)
			bool tmp3 = (camera == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(171)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(171)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(171)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(171)
			if ((tmp5)){
				HX_STACK_LINE(171)
				bool tmp7 = camera->exists;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(171)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(171)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(171)
				tmp6 = !(tmp9);
			}
			else{
				HX_STACK_LINE(171)
				tmp6 = true;
			}
			HX_STACK_LINE(171)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(171)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(171)
			if ((tmp7)){
				HX_STACK_LINE(171)
				bool tmp9 = camera->visible;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(171)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(171)
				tmp8 = !(tmp10);
			}
			else{
				HX_STACK_LINE(171)
				tmp8 = true;
			}
			HX_STACK_LINE(171)
			if ((tmp8)){
				HX_STACK_LINE(173)
				continue;
			}
			HX_STACK_LINE(176)
			bool tmp9 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(176)
			if ((tmp9)){
				HX_STACK_LINE(178)
				camera->checkResize();
				HX_STACK_LINE(180)
				bool tmp10 = this->useBufferLocking;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(180)
				if ((tmp10)){
					HX_STACK_LINE(182)
					camera->buffer->lock();
				}
			}
			HX_STACK_LINE(186)
			bool tmp10 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(186)
			if ((tmp10)){
				HX_STACK_LINE(188)
				camera->clearDrawStack();
				HX_STACK_LINE(189)
				::openfl::_legacy::display::Graphics tmp11 = camera->canvas->get_graphics();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(189)
				tmp11->clear();
				HX_STACK_LINE(192)
				::openfl::_legacy::display::Graphics tmp12 = camera->debugLayer->get_graphics();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(192)
				tmp12->clear();
			}
			HX_STACK_LINE(196)
			bool tmp11 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(196)
			if ((tmp11)){
				HX_STACK_LINE(198)
				int tmp12 = camera->bgColor;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(198)
				bool tmp13 = camera->useBgAlphaBlending;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(198)
				camera->fill(tmp12,tmp13,null(),null());
				HX_STACK_LINE(199)
				camera->screen->dirty = true;
			}
			else{
				HX_STACK_LINE(203)
				int tmp12 = (int(camera->bgColor) & int((int)16777215));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(203)
				int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(203)
				bool tmp14 = camera->useBgAlphaBlending;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(203)
				int tmp15 = (int(camera->bgColor) >> int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(203)
				int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(203)
				Float tmp17 = (Float(tmp16) / Float((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(203)
				camera->fill(tmp13,tmp14,tmp17,null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,lock,(void))

Void CameraFrontEnd_obj::render( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","render",0xab0985f3,"flixel.system.frontEnds.CameraFrontEnd.render","flixel/system/frontEnds/CameraFrontEnd.hx",210,0x7a57d3ec)
		HX_STACK_THIS(this)
		HX_STACK_LINE(211)
		bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(211)
		if ((tmp)){
			HX_STACK_LINE(213)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(213)
			Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(213)
			while((true)){
				HX_STACK_LINE(213)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(213)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(213)
				if ((tmp2)){
					HX_STACK_LINE(213)
					break;
				}
				HX_STACK_LINE(213)
				::flixel::FlxCamera tmp3 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(213)
				::flixel::FlxCamera camera = tmp3;		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(213)
				++(_g);
				HX_STACK_LINE(215)
				bool tmp4 = (camera != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(215)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(215)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(215)
				if ((tmp5)){
					HX_STACK_LINE(215)
					tmp6 = camera->exists;
				}
				else{
					HX_STACK_LINE(215)
					tmp6 = false;
				}
				HX_STACK_LINE(215)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(215)
				if ((tmp6)){
					HX_STACK_LINE(215)
					tmp7 = camera->visible;
				}
				else{
					HX_STACK_LINE(215)
					tmp7 = false;
				}
				HX_STACK_LINE(215)
				if ((tmp7)){
					HX_STACK_LINE(217)
					camera->render();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,render,(void))

Void CameraFrontEnd_obj::unlock( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","unlock",0x0b6cbd61,"flixel.system.frontEnds.CameraFrontEnd.unlock","flixel/system/frontEnds/CameraFrontEnd.hx",229,0x7a57d3ec)
		HX_STACK_THIS(this)
		HX_STACK_LINE(229)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(229)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(229)
		while((true)){
			HX_STACK_LINE(229)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(229)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(229)
			if ((tmp1)){
				HX_STACK_LINE(229)
				break;
			}
			HX_STACK_LINE(229)
			::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(229)
			::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(229)
			++(_g);
			HX_STACK_LINE(231)
			bool tmp3 = (camera == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(231)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(231)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(231)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(231)
			if ((tmp5)){
				HX_STACK_LINE(231)
				bool tmp7 = camera->exists;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(231)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(231)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(231)
				tmp6 = !(tmp9);
			}
			else{
				HX_STACK_LINE(231)
				tmp6 = true;
			}
			HX_STACK_LINE(231)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(231)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(231)
			if ((tmp7)){
				HX_STACK_LINE(231)
				bool tmp9 = camera->visible;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(231)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(231)
				tmp8 = !(tmp10);
			}
			else{
				HX_STACK_LINE(231)
				tmp8 = true;
			}
			HX_STACK_LINE(231)
			if ((tmp8)){
				HX_STACK_LINE(233)
				continue;
			}
			HX_STACK_LINE(236)
			camera->drawFX();
			HX_STACK_LINE(238)
			bool tmp9 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(238)
			if ((tmp9)){
				HX_STACK_LINE(240)
				bool tmp10 = this->useBufferLocking;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(240)
				if ((tmp10)){
					HX_STACK_LINE(242)
					camera->buffer->unlock(null());
				}
				HX_STACK_LINE(245)
				camera->screen->dirty = true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,unlock,(void))

Void CameraFrontEnd_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","update",0x2ce5a0a6,"flixel.system.frontEnds.CameraFrontEnd.update","flixel/system/frontEnds/CameraFrontEnd.hx",256,0x7a57d3ec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(256)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(256)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(256)
		while((true)){
			HX_STACK_LINE(256)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(256)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(256)
			if ((tmp1)){
				HX_STACK_LINE(256)
				break;
			}
			HX_STACK_LINE(256)
			::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(256)
			::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(256)
			++(_g);
			HX_STACK_LINE(258)
			bool tmp3 = (camera != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(258)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(258)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(258)
			if ((tmp4)){
				HX_STACK_LINE(258)
				tmp5 = camera->exists;
			}
			else{
				HX_STACK_LINE(258)
				tmp5 = false;
			}
			HX_STACK_LINE(258)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(258)
			if ((tmp5)){
				HX_STACK_LINE(258)
				tmp6 = camera->active;
			}
			else{
				HX_STACK_LINE(258)
				tmp6 = false;
			}
			HX_STACK_LINE(258)
			if ((tmp6)){
				HX_STACK_LINE(260)
				Float tmp7 = elapsed;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(260)
				camera->update(tmp7);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,update,(void))

Void CameraFrontEnd_obj::resize( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","resize",0xae5b7491,"flixel.system.frontEnds.CameraFrontEnd.resize","flixel/system/frontEnds/CameraFrontEnd.hx",271,0x7a57d3ec)
		HX_STACK_THIS(this)
		HX_STACK_LINE(271)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(271)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(271)
		while((true)){
			HX_STACK_LINE(271)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(271)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(271)
			if ((tmp1)){
				HX_STACK_LINE(271)
				break;
			}
			HX_STACK_LINE(271)
			::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(271)
			::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(271)
			++(_g);
			HX_STACK_LINE(273)
			camera->onResize();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,resize,(void))

int CameraFrontEnd_obj::get_bgColor( ){
	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","get_bgColor",0x99072db8,"flixel.system.frontEnds.CameraFrontEnd.get_bgColor","flixel/system/frontEnds/CameraFrontEnd.hx",278,0x7a57d3ec)
	HX_STACK_THIS(this)
	HX_STACK_LINE(279)
	::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(279)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(279)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(279)
	if ((tmp1)){
		HX_STACK_LINE(279)
		tmp2 = (int)-16777216;
	}
	else{
		HX_STACK_LINE(279)
		::flixel::FlxCamera tmp3 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(279)
		tmp2 = tmp3->bgColor;
	}
	HX_STACK_LINE(279)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,get_bgColor,return )

int CameraFrontEnd_obj::set_bgColor( int Color){
	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","set_bgColor",0xa37434c4,"flixel.system.frontEnds.CameraFrontEnd.set_bgColor","flixel/system/frontEnds/CameraFrontEnd.hx",283,0x7a57d3ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(284)
	{
		HX_STACK_LINE(284)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(284)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(284)
		while((true)){
			HX_STACK_LINE(284)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(284)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(284)
			if ((tmp1)){
				HX_STACK_LINE(284)
				break;
			}
			HX_STACK_LINE(284)
			::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(284)
			::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(284)
			++(_g);
			HX_STACK_LINE(286)
			camera->bgColor = Color;
		}
	}
	HX_STACK_LINE(289)
	int tmp = Color;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(289)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,set_bgColor,return )


CameraFrontEnd_obj::CameraFrontEnd_obj()
{
}

void CameraFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CameraFrontEnd);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(useBufferLocking,"useBufferLocking");
	HX_MARK_MEMBER_NAME(_cameraRect,"_cameraRect");
	HX_MARK_END_CLASS();
}

void CameraFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(useBufferLocking,"useBufferLocking");
	HX_VISIT_MEMBER_NAME(_cameraRect,"_cameraRect");
}

Dynamic CameraFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		if (HX_FIELD_EQ(inName,"fade") ) { return fade_dyn(); }
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"flash") ) { return flash_dyn(); }
		if (HX_FIELD_EQ(inName,"shake") ) { return shake_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return unlock_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { if (inCallProp == hx::paccAlways) return get_bgColor(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_cameraRect") ) { return _cameraRect; }
		if (HX_FIELD_EQ(inName,"get_bgColor") ) { return get_bgColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bgColor") ) { return set_bgColor_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"useBufferLocking") ) { return useBufferLocking; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CameraFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { if (inCallProp == hx::paccAlways) return set_bgColor(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_cameraRect") ) { _cameraRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"useBufferLocking") ) { useBufferLocking=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CameraFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	outFields->push(HX_HCSTRING("bgColor","\x5e","\x81","\x83","\xf7"));
	outFields->push(HX_HCSTRING("useBufferLocking","\xf0","\x43","\x3c","\x76"));
	outFields->push(HX_HCSTRING("_cameraRect","\x88","\x43","\x4f","\x84"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CameraFrontEnd_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsBool,(int)offsetof(CameraFrontEnd_obj,useBufferLocking),HX_HCSTRING("useBufferLocking","\xf0","\x43","\x3c","\x76")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(CameraFrontEnd_obj,_cameraRect),HX_HCSTRING("_cameraRect","\x88","\x43","\x4f","\x84")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("useBufferLocking","\xf0","\x43","\x3c","\x76"),
	HX_HCSTRING("_cameraRect","\x88","\x43","\x4f","\x84"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("flash","\xb0","\x35","\x8c","\x02"),
	HX_HCSTRING("fade","\x7c","\xb5","\xb5","\x43"),
	HX_HCSTRING("shake","\xc6","\xde","\x1c","\x7c"),
	HX_HCSTRING("lock","\xeb","\x9b","\xb7","\x47"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("unlock","\xc4","\xa2","\x8c","\x65"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("get_bgColor","\x75","\xe1","\x7d","\x7d"),
	HX_HCSTRING("set_bgColor","\x81","\xe8","\xea","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CameraFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CameraFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class CameraFrontEnd_obj::__mClass;

void CameraFrontEnd_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.CameraFrontEnd","\x31","\x94","\x3d","\x41");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CameraFrontEnd_obj >;
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
} // end namespace system
} // end namespace frontEnds
