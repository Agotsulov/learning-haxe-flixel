#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicWatch
#include <flixel/system/debug/GraphicWatch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntry
#include <flixel/system/debug/watch/WatchEntry.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntryData
#include <flixel/system/debug/watch/WatchEntryData.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
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
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
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
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace _system{
namespace debug{
namespace watch{

Void Watch_obj::__construct(hx::Null< bool >  __o_closable)
{
HX_STACK_FRAME("flixel.system.debug.watch.Watch","new",0xfeaf943a,"flixel.system.debug.watch.Watch.new","flixel/system/debug/watch/Watch.hx",14,0x446c9b58)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_closable,"closable")
bool closable = __o_closable.Default(false);
{
	HX_STACK_LINE(21)
	this->entries = Array_obj< ::Dynamic >::__new();
	struct _Function_1_1{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/watch/Watch.hx",20,0x446c9b58)
			{
				HX_STACK_LINE(20)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(20)
				::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(20)
				::flixel::math::FlxPoint tmp2 = tmp1->set((int)2,(int)15);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(20)
				::flixel::math::FlxPoint point = tmp2;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(20)
				point->_inPool = false;
				HX_STACK_LINE(20)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(20)
	this->entriesContainerOffset = _Function_1_1::Block();
	HX_STACK_LINE(25)
	::flixel::_system::debug::GraphicWatch tmp = ::flixel::_system::debug::GraphicWatch_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	bool tmp1 = closable;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	super::__construct(HX_HCSTRING("Watch","\x2f","\x86","\x52","\x58"),tmp,(int)0,(int)0,true,null(),tmp1);
	HX_STACK_LINE(27)
	::openfl::_legacy::display::Sprite tmp2 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	this->entriesContainer = tmp2;
	HX_STACK_LINE(28)
	::openfl::_legacy::display::Sprite tmp3 = this->entriesContainer;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	::flixel::math::FlxPoint tmp4 = this->entriesContainerOffset;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(28)
	Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(28)
	tmp3->set_x(tmp5);
	HX_STACK_LINE(29)
	::openfl::_legacy::display::Sprite tmp6 = this->entriesContainer;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(29)
	::flixel::math::FlxPoint tmp7 = this->entriesContainerOffset;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(29)
	Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(29)
	tmp6->set_y(tmp8);
	HX_STACK_LINE(30)
	::openfl::_legacy::display::Sprite tmp9 = this->entriesContainer;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(30)
	this->addChild(tmp9);
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		::flixel::_system::frontEnds::SignalFrontEnd tmp10 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(32)
		Dynamic tmp11 = this->removeAll_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(32)
		tmp10->__Field(HX_HCSTRING("stateSwitched","\x84","\x32","\x02","\x37"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp11);
	}
}
;
	return null();
}

//Watch_obj::~Watch_obj() { }

Dynamic Watch_obj::__CreateEmpty() { return  new Watch_obj; }
hx::ObjectPtr< Watch_obj > Watch_obj::__new(hx::Null< bool >  __o_closable)
{  hx::ObjectPtr< Watch_obj > _result_ = new Watch_obj();
	_result_->__construct(__o_closable);
	return _result_;}

Dynamic Watch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Watch_obj > _result_ = new Watch_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Watch_obj::add( ::String displayName,::flixel::_system::debug::watch::WatchEntryData data){
{
		HX_STACK_FRAME("flixel.system.debug.watch.Watch","add",0xfea5b5fb,"flixel.system.debug.watch.Watch.add","flixel/system/debug/watch/Watch.hx",36,0x446c9b58)
		HX_STACK_THIS(this)
		HX_STACK_ARG(displayName,"displayName")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(37)
		::String tmp = displayName;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		::flixel::_system::debug::watch::WatchEntryData tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		bool tmp2 = this->isInvalid(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		if ((tmp2)){
			HX_STACK_LINE(38)
			return null();
		}
		HX_STACK_LINE(40)
		::String tmp3 = displayName;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		::flixel::_system::debug::watch::WatchEntryData tmp4 = data;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(40)
		::flixel::_system::debug::watch::WatchEntry tmp5 = this->getExistingEntry(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(40)
		::flixel::_system::debug::watch::WatchEntry existing = tmp5;		HX_STACK_VAR(existing,"existing");
		HX_STACK_LINE(41)
		bool tmp6 = (existing != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(41)
		if ((tmp6)){
			HX_STACK_LINE(43)
			switch( (int)(data->__Index())){
				case (int)1: {
					HX_STACK_LINE(43)
					::String tmp7 = (::flixel::_system::debug::watch::WatchEntryData(data))->__Param(0);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(43)
					::String value = tmp7;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(46)
					existing->__FieldRef(HX_HCSTRING("data","\x2a","\x56","\x63","\x42")) = data;
				}
				;break;
				default: {
				}
			}
			HX_STACK_LINE(49)
			return null();
		}
		HX_STACK_LINE(52)
		::String tmp7 = displayName;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(52)
		::flixel::_system::debug::watch::WatchEntryData tmp8 = data;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(52)
		this->addEntry(tmp7,tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Watch_obj,add,(void))

bool Watch_obj::isInvalid( ::String displayName,::flixel::_system::debug::watch::WatchEntryData data){
	HX_STACK_FRAME("flixel.system.debug.watch.Watch","isInvalid",0x369d7b87,"flixel.system.debug.watch.Watch.isInvalid","flixel/system/debug/watch/Watch.hx",56,0x446c9b58)
	HX_STACK_THIS(this)
	HX_STACK_ARG(displayName,"displayName")
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(57)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	switch( (int)(data->__Index())){
		case (int)0: {
			HX_STACK_LINE(57)
			::String tmp1 = (::flixel::_system::debug::watch::WatchEntryData(data))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(57)
			::String field = tmp1;		HX_STACK_VAR(field,"field");
			HX_STACK_LINE(57)
			Dynamic tmp2 = (::flixel::_system::debug::watch::WatchEntryData(data))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(57)
			Dynamic object = tmp2;		HX_STACK_VAR(object,"object");
			HX_STACK_LINE(59)
			{
				HX_STACK_LINE(60)
				bool tmp3 = (object == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(60)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(60)
				if ((tmp4)){
					HX_STACK_LINE(60)
					tmp = (field == null());
				}
				else{
					HX_STACK_LINE(60)
					tmp = true;
				}
			}
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(57)
			::String tmp1 = (::flixel::_system::debug::watch::WatchEntryData(data))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(57)
			::String value = tmp1;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(61)
			{
				HX_STACK_LINE(62)
				bool tmp2 = (displayName == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(62)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(62)
				if ((tmp3)){
					HX_STACK_LINE(62)
					tmp = (displayName.length == (int)0);
				}
				else{
					HX_STACK_LINE(62)
					tmp = true;
				}
			}
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(57)
			::String tmp1 = (::flixel::_system::debug::watch::WatchEntryData(data))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(57)
			::String expression = tmp1;		HX_STACK_VAR(expression,"expression");
			HX_STACK_LINE(63)
			{
				HX_STACK_LINE(64)
				bool tmp2 = (expression == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(64)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(64)
				if ((tmp3)){
					HX_STACK_LINE(64)
					tmp = (expression.length == (int)0);
				}
				else{
					HX_STACK_LINE(64)
					tmp = true;
				}
			}
		}
		;break;
	}
	HX_STACK_LINE(57)
	return tmp;
	HX_STACK_LINE(57)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Watch_obj,isInvalid,return )

::flixel::_system::debug::watch::WatchEntry Watch_obj::getExistingEntry( ::String displayName,::flixel::_system::debug::watch::WatchEntryData data){
	HX_STACK_FRAME("flixel.system.debug.watch.Watch","getExistingEntry",0xcc1e3f57,"flixel.system.debug.watch.Watch.getExistingEntry","flixel/system/debug/watch/Watch.hx",69,0x446c9b58)
	HX_STACK_THIS(this)
	HX_STACK_ARG(displayName,"displayName")
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(70)
	{
		HX_STACK_LINE(70)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(70)
		Array< ::Dynamic > _g1 = this->entries;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(70)
		while((true)){
			HX_STACK_LINE(70)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(70)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(70)
			if ((tmp1)){
				HX_STACK_LINE(70)
				break;
			}
			HX_STACK_LINE(70)
			::flixel::_system::debug::watch::WatchEntry tmp2 = _g1->__get(_g).StaticCast< ::flixel::_system::debug::watch::WatchEntry >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(70)
			::flixel::_system::debug::watch::WatchEntry entry = tmp2;		HX_STACK_VAR(entry,"entry");
			HX_STACK_LINE(70)
			++(_g);
			HX_STACK_LINE(72)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(72)
			switch( (int)(data->__Index())){
				case (int)1: {
					HX_STACK_LINE(72)
					tmp3 = true;
				}
				;break;
				default: {
					HX_STACK_LINE(72)
					tmp3 = false;
				}
			}
			HX_STACK_LINE(72)
			if ((tmp3)){
				HX_STACK_LINE(74)
				bool tmp4 = (entry->__Field(HX_HCSTRING("displayName","\xad","\x11","\xf2","\x30"), hx::paccDynamic ) == displayName);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(74)
				if ((tmp4)){
					HX_STACK_LINE(75)
					::flixel::_system::debug::watch::WatchEntry tmp5 = entry;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(75)
					return tmp5;
				}
			}
			else{
				HX_STACK_LINE(77)
				::flixel::_system::debug::watch::WatchEntryData tmp4 = entry->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(77)
				::flixel::_system::debug::watch::WatchEntryData tmp5 = data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(77)
				bool tmp6 = ::Type_obj::enumEq(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(77)
				if ((tmp6)){
					HX_STACK_LINE(78)
					::flixel::_system::debug::watch::WatchEntry tmp7 = entry;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(78)
					return tmp7;
				}
			}
		}
	}
	HX_STACK_LINE(80)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Watch_obj,getExistingEntry,return )

Void Watch_obj::addEntry( ::String displayName,::flixel::_system::debug::watch::WatchEntryData data){
{
		HX_STACK_FRAME("flixel.system.debug.watch.Watch","addEntry",0xc2d1a477,"flixel.system.debug.watch.Watch.addEntry","flixel/system/debug/watch/Watch.hx",84,0x446c9b58)
		HX_STACK_THIS(this)
		HX_STACK_ARG(displayName,"displayName")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(85)
		::String tmp = displayName;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(85)
		::flixel::_system::debug::watch::WatchEntryData tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(85)
		Dynamic tmp2 = this->removeEntry_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(85)
		::flixel::_system::debug::watch::WatchEntry tmp3 = ::flixel::_system::debug::watch::WatchEntry_obj::__new(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(85)
		::flixel::_system::debug::watch::WatchEntry entry = tmp3;		HX_STACK_VAR(entry,"entry");
		HX_STACK_LINE(86)
		::flixel::_system::debug::watch::WatchEntry tmp4 = entry;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(86)
		this->entries->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
		HX_STACK_LINE(87)
		::openfl::_legacy::display::Sprite tmp5 = this->entriesContainer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(87)
		::flixel::_system::debug::watch::WatchEntry tmp6 = entry;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(87)
		tmp5->addChild(tmp6);
		HX_STACK_LINE(88)
		this->resetEntries();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Watch_obj,addEntry,(void))

Void Watch_obj::remove( ::String displayName,::flixel::_system::debug::watch::WatchEntryData data){
{
		HX_STACK_FRAME("flixel.system.debug.watch.Watch","remove",0xa5c13caa,"flixel.system.debug.watch.Watch.remove","flixel/system/debug/watch/Watch.hx",92,0x446c9b58)
		HX_STACK_THIS(this)
		HX_STACK_ARG(displayName,"displayName")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(93)
		::String tmp = displayName;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		::flixel::_system::debug::watch::WatchEntryData tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		::flixel::_system::debug::watch::WatchEntry tmp2 = this->getExistingEntry(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(93)
		::flixel::_system::debug::watch::WatchEntry existing = tmp2;		HX_STACK_VAR(existing,"existing");
		HX_STACK_LINE(94)
		bool tmp3 = (existing != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		if ((tmp3)){
			HX_STACK_LINE(95)
			::flixel::_system::debug::watch::WatchEntry tmp4 = existing;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(95)
			this->removeEntry(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Watch_obj,remove,(void))

Void Watch_obj::removeEntry( ::flixel::_system::debug::watch::WatchEntry entry){
{
		HX_STACK_FRAME("flixel.system.debug.watch.Watch","removeEntry",0x44a48368,"flixel.system.debug.watch.Watch.removeEntry","flixel/system/debug/watch/Watch.hx",99,0x446c9b58)
		HX_STACK_THIS(this)
		HX_STACK_ARG(entry,"entry")
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			Array< ::Dynamic > array = this->entries;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(100)
			::flixel::_system::debug::watch::WatchEntry tmp = entry;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(100)
			int tmp1 = array->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(100)
			int index = tmp1;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(100)
			bool tmp2 = (index != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(100)
			if ((tmp2)){
				HX_STACK_LINE(100)
				int tmp3 = (array->length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(100)
				::flixel::_system::debug::watch::WatchEntry tmp4 = array->__get(tmp3).StaticCast< ::flixel::_system::debug::watch::WatchEntry >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(100)
				array[index] = tmp4;
				HX_STACK_LINE(100)
				array->pop().StaticCast< ::flixel::_system::debug::watch::WatchEntry >();
				HX_STACK_LINE(100)
				array;
			}
			else{
				HX_STACK_LINE(100)
				array;
			}
		}
		HX_STACK_LINE(101)
		::openfl::_legacy::display::Sprite tmp = this->entriesContainer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(101)
		::flixel::_system::debug::watch::WatchEntry tmp1 = entry;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(101)
		tmp->removeChild(tmp1);
		HX_STACK_LINE(102)
		entry->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
		HX_STACK_LINE(103)
		this->resetEntries();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Watch_obj,removeEntry,(void))

Void Watch_obj::removeAll( ){
{
		HX_STACK_FRAME("flixel.system.debug.watch.Watch","removeAll",0xc23c3a97,"flixel.system.debug.watch.Watch.removeAll","flixel/system/debug/watch/Watch.hx",107,0x446c9b58)
		HX_STACK_THIS(this)
		HX_STACK_LINE(108)
		{
			HX_STACK_LINE(108)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(108)
			Array< ::Dynamic > _g1 = this->entries->__Field(HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"), hx::paccDynamic )();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(108)
			while((true)){
				HX_STACK_LINE(108)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(108)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(108)
				if ((tmp1)){
					HX_STACK_LINE(108)
					break;
				}
				HX_STACK_LINE(108)
				::flixel::_system::debug::watch::WatchEntry tmp2 = _g1->__get(_g).StaticCast< ::flixel::_system::debug::watch::WatchEntry >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(108)
				::flixel::_system::debug::watch::WatchEntry entry = tmp2;		HX_STACK_VAR(entry,"entry");
				HX_STACK_LINE(108)
				++(_g);
				HX_STACK_LINE(109)
				::flixel::_system::debug::watch::WatchEntry tmp3 = entry;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(109)
				this->removeEntry(tmp3);
			}
		}
		HX_STACK_LINE(110)
		this->entries = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Watch_obj,removeAll,(void))

Void Watch_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.debug.watch.Watch","update",0x283e266f,"flixel.system.debug.watch.Watch.update","flixel/system/debug/watch/Watch.hx",115,0x446c9b58)
		HX_STACK_THIS(this)
		HX_STACK_LINE(115)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(115)
		Array< ::Dynamic > _g1 = this->entries;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(115)
		while((true)){
			HX_STACK_LINE(115)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(115)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(115)
			if ((tmp1)){
				HX_STACK_LINE(115)
				break;
			}
			HX_STACK_LINE(115)
			::flixel::_system::debug::watch::WatchEntry tmp2 = _g1->__get(_g).StaticCast< ::flixel::_system::debug::watch::WatchEntry >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(115)
			::flixel::_system::debug::watch::WatchEntry entry = tmp2;		HX_STACK_VAR(entry,"entry");
			HX_STACK_LINE(115)
			++(_g);
			HX_STACK_LINE(116)
			entry->__Field(HX_HCSTRING("updateValue","\xa8","\xe8","\x50","\x17"), hx::paccDynamic )();
		}
	}
return null();
}


Void Watch_obj::updateSize( ){
{
		HX_STACK_FRAME("flixel.system.debug.watch.Watch","updateSize",0x79f056d0,"flixel.system.debug.watch.Watch.updateSize","flixel/system/debug/watch/Watch.hx",120,0x446c9b58)
		HX_STACK_THIS(this)
		HX_STACK_LINE(121)
		::openfl::_legacy::geom::Point tmp = this->minSize;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(122)
		Float tmp1 = this->getMaxMinWidth();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(122)
		::flixel::math::FlxPoint tmp2 = this->entriesContainerOffset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(122)
		Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(122)
		Float tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(123)
		::openfl::_legacy::display::Sprite tmp5 = this->entriesContainer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(123)
		Float tmp6 = tmp5->get_height();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(123)
		::flixel::math::FlxPoint tmp7 = this->entriesContainerOffset;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(123)
		Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(123)
		Float tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(121)
		tmp->setTo(tmp4,tmp9);
		HX_STACK_LINE(124)
		this->super::updateSize();
		HX_STACK_LINE(125)
		this->resetEntries();
	}
return null();
}


Void Watch_obj::resetEntries( ){
{
		HX_STACK_FRAME("flixel.system.debug.watch.Watch","resetEntries",0x423b6427,"flixel.system.debug.watch.Watch.resetEntries","flixel/system/debug/watch/Watch.hx",130,0x446c9b58)
		HX_STACK_THIS(this)
		HX_STACK_LINE(130)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(130)
		int tmp = this->entries->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(130)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(130)
		while((true)){
			HX_STACK_LINE(130)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(130)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(130)
			if ((tmp2)){
				HX_STACK_LINE(130)
				break;
			}
			HX_STACK_LINE(130)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(130)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(132)
			::flixel::_system::debug::watch::WatchEntry tmp4 = this->entries->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(132)
			::flixel::_system::debug::watch::WatchEntry entry = tmp4;		HX_STACK_VAR(entry,"entry");
			HX_STACK_LINE(133)
			int tmp5 = (i * (int)15);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(133)
			entry->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp5);
			HX_STACK_LINE(134)
			Float tmp6 = this->getMaxNameWidth();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(134)
			int tmp7 = this->_width;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(134)
			entry->__Field(HX_HCSTRING("updateSize","\x6a","\x8b","\x08","\x05"), hx::paccDynamic )(tmp6,tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Watch_obj,resetEntries,(void))

Float Watch_obj::getMaxNameWidth( ){
	HX_STACK_FRAME("flixel.system.debug.watch.Watch","getMaxNameWidth",0x1ee45d07,"flixel.system.debug.watch.Watch.getMaxNameWidth","flixel/system/debug/watch/Watch.hx",139,0x446c9b58)
	HX_STACK_THIS(this)

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 1; }
	Float run(::flixel::_system::debug::watch::WatchEntry entry){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","flixel/system/debug/watch/Watch.hx",140,0x446c9b58)
		HX_STACK_ARG(entry,"entry")
		{
			HX_STACK_LINE(140)
			Float tmp = entry->__Field(HX_HCSTRING("getNameWidth","\x45","\x20","\x6e","\xd3"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(140)
			return tmp;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(140)
	Float tmp = this->getMax( Dynamic(new _Function_1_1()));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Watch_obj,getMaxNameWidth,return )

Float Watch_obj::getMaxMinWidth( ){
	HX_STACK_FRAME("flixel.system.debug.watch.Watch","getMaxMinWidth",0x4606f748,"flixel.system.debug.watch.Watch.getMaxMinWidth","flixel/system/debug/watch/Watch.hx",144,0x446c9b58)
	HX_STACK_THIS(this)

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 1; }
	Float run(::flixel::_system::debug::watch::WatchEntry entry){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","flixel/system/debug/watch/Watch.hx",145,0x446c9b58)
		HX_STACK_ARG(entry,"entry")
		{
			HX_STACK_LINE(145)
			Float tmp = entry->__Field(HX_HCSTRING("getMinWidth","\xca","\xe5","\x8d","\xe7"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(145)
			return tmp;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(145)
	Float tmp = this->getMax( Dynamic(new _Function_1_1()));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Watch_obj,getMaxMinWidth,return )

Float Watch_obj::getMax( Dynamic getValue){
	HX_STACK_FRAME("flixel.system.debug.watch.Watch","getMax",0x445ae414,"flixel.system.debug.watch.Watch.getMax","flixel/system/debug/watch/Watch.hx",149,0x446c9b58)
	HX_STACK_THIS(this)
	HX_STACK_ARG(getValue,"getValue")
	HX_STACK_LINE(150)
	Float max = ((Float)0.0);		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(151)
	{
		HX_STACK_LINE(151)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(151)
		Array< ::Dynamic > _g1 = this->entries;		HX_STACK_VAR(_g1,"_g1");
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
			::flixel::_system::debug::watch::WatchEntry tmp2 = _g1->__get(_g).StaticCast< ::flixel::_system::debug::watch::WatchEntry >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(151)
			::flixel::_system::debug::watch::WatchEntry entry = tmp2;		HX_STACK_VAR(entry,"entry");
			HX_STACK_LINE(151)
			++(_g);
			HX_STACK_LINE(153)
			::flixel::_system::debug::watch::WatchEntry tmp3 = entry;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(153)
			Float tmp4 = getValue(tmp3).Cast< Float >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(153)
			Float value = tmp4;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(154)
			bool tmp5 = (value > max);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(154)
			if ((tmp5)){
				HX_STACK_LINE(155)
				max = value;
			}
		}
	}
	HX_STACK_LINE(157)
	Float tmp = max;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Watch_obj,getMax,return )

int Watch_obj::LINE_HEIGHT;


Watch_obj::Watch_obj()
{
}

void Watch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Watch);
	HX_MARK_MEMBER_NAME(entriesContainer,"entriesContainer");
	HX_MARK_MEMBER_NAME(entriesContainerOffset,"entriesContainerOffset");
	HX_MARK_MEMBER_NAME(entries,"entries");
	::flixel::_system::debug::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Watch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(entriesContainer,"entriesContainer");
	HX_VISIT_MEMBER_NAME(entriesContainerOffset,"entriesContainerOffset");
	HX_VISIT_MEMBER_NAME(entries,"entries");
	::flixel::_system::debug::Window_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Watch_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"getMax") ) { return getMax_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"entries") ) { return entries; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addEntry") ) { return addEntry_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isInvalid") ) { return isInvalid_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAll") ) { return removeAll_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateSize") ) { return updateSize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeEntry") ) { return removeEntry_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resetEntries") ) { return resetEntries_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getMaxMinWidth") ) { return getMaxMinWidth_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getMaxNameWidth") ) { return getMaxNameWidth_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"entriesContainer") ) { return entriesContainer; }
		if (HX_FIELD_EQ(inName,"getExistingEntry") ) { return getExistingEntry_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"entriesContainerOffset") ) { return entriesContainerOffset; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Watch_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"entries") ) { entries=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"entriesContainer") ) { entriesContainer=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"entriesContainerOffset") ) { entriesContainerOffset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Watch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("entriesContainer","\xd1","\xfd","\x5e","\x72"));
	outFields->push(HX_HCSTRING("entriesContainerOffset","\x44","\xbc","\x14","\xcb"));
	outFields->push(HX_HCSTRING("entries","\x50","\x2d","\x5f","\x79"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(Watch_obj,entriesContainer),HX_HCSTRING("entriesContainer","\xd1","\xfd","\x5e","\x72")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(Watch_obj,entriesContainerOffset),HX_HCSTRING("entriesContainerOffset","\x44","\xbc","\x14","\xcb")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Watch_obj,entries),HX_HCSTRING("entries","\x50","\x2d","\x5f","\x79")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Watch_obj::LINE_HEIGHT,HX_HCSTRING("LINE_HEIGHT","\x12","\x8c","\xb0","\xea")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("entriesContainer","\xd1","\xfd","\x5e","\x72"),
	HX_HCSTRING("entriesContainerOffset","\x44","\xbc","\x14","\xcb"),
	HX_HCSTRING("entries","\x50","\x2d","\x5f","\x79"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("isInvalid","\x2d","\x58","\x46","\x3f"),
	HX_HCSTRING("getExistingEntry","\x71","\xe3","\x3e","\x19"),
	HX_HCSTRING("addEntry","\x91","\x9e","\xe3","\xe9"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("removeEntry","\x8e","\x55","\xba","\x6e"),
	HX_HCSTRING("removeAll","\x3d","\x17","\xe5","\xca"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updateSize","\x6a","\x8b","\x08","\x05"),
	HX_HCSTRING("resetEntries","\x41","\x73","\x3d","\xeb"),
	HX_HCSTRING("getMaxNameWidth","\x2d","\x3a","\x85","\x7e"),
	HX_HCSTRING("getMaxMinWidth","\xe2","\x80","\xfe","\xbe"),
	HX_HCSTRING("getMax","\xae","\x43","\x22","\xa3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Watch_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Watch_obj::LINE_HEIGHT,"LINE_HEIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Watch_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Watch_obj::LINE_HEIGHT,"LINE_HEIGHT");
};

#endif

hx::Class Watch_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("LINE_HEIGHT","\x12","\x8c","\xb0","\xea"),
	::String(null()) };

void Watch_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.watch.Watch","\x48","\xaf","\x96","\x48");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Watch_obj >;
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

void Watch_obj::__boot()
{
	LINE_HEIGHT= (int)15;
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch
