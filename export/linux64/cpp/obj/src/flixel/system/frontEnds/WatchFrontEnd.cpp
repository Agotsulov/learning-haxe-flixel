#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntryData
#include <flixel/system/debug/watch/WatchEntryData.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_WatchFrontEnd
#include <flixel/system/frontEnds/WatchFrontEnd.h>
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
namespace flixel{
namespace _system{
namespace frontEnds{

Void WatchFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.WatchFrontEnd","new",0xbd21d019,"flixel.system.frontEnds.WatchFrontEnd.new","flixel/system/frontEnds/WatchFrontEnd.hx",7,0xd7ade198)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//WatchFrontEnd_obj::~WatchFrontEnd_obj() { }

Dynamic WatchFrontEnd_obj::__CreateEmpty() { return  new WatchFrontEnd_obj; }
hx::ObjectPtr< WatchFrontEnd_obj > WatchFrontEnd_obj::__new()
{  hx::ObjectPtr< WatchFrontEnd_obj > _result_ = new WatchFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Dynamic WatchFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WatchFrontEnd_obj > _result_ = new WatchFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Void WatchFrontEnd_obj::add( Dynamic object,::String field,::String displayName){
{
		HX_STACK_FRAME("flixel.system.frontEnds.WatchFrontEnd","add",0xbd17f1da,"flixel.system.frontEnds.WatchFrontEnd.add","flixel/system/frontEnds/WatchFrontEnd.hx",18,0xd7ade198)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_ARG(field,"field")
		HX_STACK_ARG(displayName,"displayName")
		HX_STACK_LINE(20)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(20)
		::flixel::_system::debug::watch::Watch tmp1 = tmp->debugger->__Field(HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(20)
		::String tmp2 = displayName;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(20)
		Dynamic tmp3 = object;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(20)
		::String tmp4 = field;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(20)
		::flixel::_system::debug::watch::WatchEntryData tmp5 = ::flixel::_system::debug::watch::WatchEntryData_obj::FIELD(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(20)
		tmp1->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp2,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(WatchFrontEnd_obj,add,(void))

Void WatchFrontEnd_obj::remove( Dynamic object,::String field){
{
		HX_STACK_FRAME("flixel.system.frontEnds.WatchFrontEnd","remove",0x8d8c762b,"flixel.system.frontEnds.WatchFrontEnd.remove","flixel/system/frontEnds/WatchFrontEnd.hx",31,0xd7ade198)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_ARG(field,"field")
		HX_STACK_LINE(33)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		::flixel::_system::debug::watch::Watch tmp1 = tmp->debugger->__Field(HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		Dynamic tmp2 = object;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		::String tmp3 = field;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		::flixel::_system::debug::watch::WatchEntryData tmp4 = ::flixel::_system::debug::watch::WatchEntryData_obj::FIELD(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(33)
		tmp1->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(null(),tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(WatchFrontEnd_obj,remove,(void))

Void WatchFrontEnd_obj::addQuick( ::String displayName,Dynamic value){
{
		HX_STACK_FRAME("flixel.system.frontEnds.WatchFrontEnd","addQuick",0x8c660eb3,"flixel.system.frontEnds.WatchFrontEnd.addQuick","flixel/system/frontEnds/WatchFrontEnd.hx",46,0xd7ade198)
		HX_STACK_THIS(this)
		HX_STACK_ARG(displayName,"displayName")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(48)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		::flixel::_system::debug::watch::Watch tmp1 = tmp->debugger->__Field(HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		::String tmp2 = displayName;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(48)
		Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(48)
		::flixel::_system::debug::watch::WatchEntryData tmp4 = ::flixel::_system::debug::watch::WatchEntryData_obj::QUICK(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(48)
		tmp1->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp2,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(WatchFrontEnd_obj,addQuick,(void))

Void WatchFrontEnd_obj::removeQuick( ::String displayName){
{
		HX_STACK_FRAME("flixel.system.frontEnds.WatchFrontEnd","removeQuick",0x15fb44c2,"flixel.system.frontEnds.WatchFrontEnd.removeQuick","flixel/system/frontEnds/WatchFrontEnd.hx",58,0xd7ade198)
		HX_STACK_THIS(this)
		HX_STACK_ARG(displayName,"displayName")
		HX_STACK_LINE(60)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		::flixel::_system::debug::watch::Watch tmp1 = tmp->debugger->__Field(HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(60)
		::String tmp2 = displayName;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(60)
		::flixel::_system::debug::watch::WatchEntryData tmp3 = ::flixel::_system::debug::watch::WatchEntryData_obj::QUICK(null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		tmp1->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WatchFrontEnd_obj,removeQuick,(void))

Void WatchFrontEnd_obj::addExpression( ::String expression,::String displayName){
{
		HX_STACK_FRAME("flixel.system.frontEnds.WatchFrontEnd","addExpression",0xe5869c12,"flixel.system.frontEnds.WatchFrontEnd.addExpression","flixel/system/frontEnds/WatchFrontEnd.hx",72,0xd7ade198)
		HX_STACK_THIS(this)
		HX_STACK_ARG(expression,"expression")
		HX_STACK_ARG(displayName,"displayName")
		HX_STACK_LINE(74)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		::flixel::_system::debug::watch::Watch tmp1 = tmp->debugger->__Field(HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		::String tmp2 = displayName;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		::String tmp3 = expression;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(74)
		::flixel::_system::debug::watch::WatchEntryData tmp4 = ::flixel::_system::debug::watch::WatchEntryData_obj::EXPRESSION(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(74)
		tmp1->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp2,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(WatchFrontEnd_obj,addExpression,(void))

Void WatchFrontEnd_obj::removeExpression( ::String expression){
{
		HX_STACK_FRAME("flixel.system.frontEnds.WatchFrontEnd","removeExpression",0xc4a80fa3,"flixel.system.frontEnds.WatchFrontEnd.removeExpression","flixel/system/frontEnds/WatchFrontEnd.hx",84,0xd7ade198)
		HX_STACK_THIS(this)
		HX_STACK_ARG(expression,"expression")
		HX_STACK_LINE(86)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(86)
		::flixel::_system::debug::watch::Watch tmp1 = tmp->debugger->__Field(HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		::String tmp2 = expression;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(86)
		::flixel::_system::debug::watch::WatchEntryData tmp3 = ::flixel::_system::debug::watch::WatchEntryData_obj::EXPRESSION(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(86)
		tmp1->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(null(),tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WatchFrontEnd_obj,removeExpression,(void))

Void WatchFrontEnd_obj::addMouse( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.WatchFrontEnd","addMouse",0x3add9deb,"flixel.system.frontEnds.WatchFrontEnd.addMouse","flixel/system/frontEnds/WatchFrontEnd.hx",97,0xd7ade198)
		HX_STACK_THIS(this)
		HX_STACK_LINE(97)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(97)
		::flixel::_system::debug::watch::Watch tmp1 = tmp->debugger->__Field(HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(97)
		::flixel::_system::debug::watch::WatchEntryData tmp2 = ::flixel::_system::debug::watch::WatchEntryData_obj::FIELD(hx::ClassOf< ::flixel::FlxG >(),HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(97)
		tmp1->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(HX_HCSTRING("Mouse Position","\x44","\x8e","\x3a","\x9d"),tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchFrontEnd_obj,addMouse,(void))

Void WatchFrontEnd_obj::removeMouse( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.WatchFrontEnd","removeMouse",0xc472d3fa,"flixel.system.frontEnds.WatchFrontEnd.removeMouse","flixel/system/frontEnds/WatchFrontEnd.hx",107,0xd7ade198)
		HX_STACK_THIS(this)
		HX_STACK_LINE(107)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		::flixel::_system::debug::watch::Watch tmp1 = tmp->debugger->__Field(HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		::flixel::_system::debug::watch::WatchEntryData tmp2 = ::flixel::_system::debug::watch::WatchEntryData_obj::FIELD(hx::ClassOf< ::flixel::FlxG >(),HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(107)
		tmp1->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(null(),tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchFrontEnd_obj,removeMouse,(void))


WatchFrontEnd_obj::WatchFrontEnd_obj()
{
}

Dynamic WatchFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addQuick") ) { return addQuick_dyn(); }
		if (HX_FIELD_EQ(inName,"addMouse") ) { return addMouse_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeQuick") ) { return removeQuick_dyn(); }
		if (HX_FIELD_EQ(inName,"removeMouse") ) { return removeMouse_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addExpression") ) { return addExpression_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removeExpression") ) { return removeExpression_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("addQuick","\x0c","\xad","\x4a","\xd7"),
	HX_HCSTRING("removeQuick","\x09","\x64","\x21","\x5c"),
	HX_HCSTRING("addExpression","\x19","\x5b","\xe8","\x98"),
	HX_HCSTRING("removeExpression","\xfc","\x2e","\x48","\xe8"),
	HX_HCSTRING("addMouse","\x44","\x3c","\xc2","\x85"),
	HX_HCSTRING("removeMouse","\x41","\xf3","\x98","\x0a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WatchFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WatchFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class WatchFrontEnd_obj::__mClass;

void WatchFrontEnd_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.WatchFrontEnd","\xa7","\xcf","\xe7","\x84");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WatchFrontEnd_obj >;
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
