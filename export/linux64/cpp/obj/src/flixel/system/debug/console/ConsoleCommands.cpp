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
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
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
#ifndef INCLUDED_flixel_system_debug_console_ConsoleCommands
#include <flixel/system/debug/console/ConsoleCommands.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleHistory
#include <flixel/system/debug/console/ConsoleHistory.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleUtil
#include <flixel/system/debug/console/ConsoleUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntryData
#include <flixel/system/debug/watch/WatchEntryData.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapLogFrontEnd
#include <flixel/system/frontEnds/BitmapLogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_WatchFrontEnd
#include <flixel/system/frontEnds/WatchFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
namespace debug{
namespace console{

Void ConsoleCommands_obj::__construct(::flixel::_system::debug::console::Console console)
{
HX_STACK_FRAME("flixel.system.debug.console.ConsoleCommands","new",0xbec7c572,"flixel.system.debug.console.ConsoleCommands.new","flixel/system/debug/console/ConsoleCommands.hx",11,0x8e0df1e0)
HX_STACK_THIS(this)
HX_STACK_ARG(console,"console")
{
	HX_STACK_LINE(17)
	this->_watchingMouse = false;
	HX_STACK_LINE(22)
	this->_console = console;
	HX_STACK_LINE(24)
	{
		HX_STACK_LINE(24)
		{
			HX_STACK_LINE(24)
			Dynamic tmp = this->help_dyn();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(24)
			Dynamic value = tmp;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(24)
			Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(24)
			console->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("help","\xc1","\x32","\x0b","\x45"),tmp1);
		}
		HX_STACK_LINE(24)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		if ((tmp)){
			HX_STACK_LINE(24)
			console->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("help","\xc1","\x32","\x0b","\x45"),HX_HCSTRING("Displays the help text of a registered object or function. See \"help\".","\x74","\x09","\xe6","\x6d"));
		}
	}
	HX_STACK_LINE(25)
	{
		HX_STACK_LINE(25)
		{
			HX_STACK_LINE(25)
			Dynamic tmp = this->close_dyn();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(25)
			Dynamic value = tmp;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(25)
			Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(25)
			console->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),tmp1);
		}
		HX_STACK_LINE(25)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		if ((tmp)){
			HX_STACK_LINE(25)
			console->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),HX_HCSTRING("Closes the debugger overlay.","\x09","\xdd","\x14","\xda"));
		}
	}
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		{
			HX_STACK_LINE(27)
			::flixel::_system::debug::console::Console tmp = this->_console;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(27)
			Dynamic tmp1 = tmp->__Field(HX_HCSTRING("history","\x54","\x35","\x47","\x64"), hx::paccDynamic )->__Field(HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(27)
			Dynamic value = tmp1;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(27)
			Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(27)
			console->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("clearHistory","\x47","\xe7","\xc5","\x3f"),tmp2);
		}
		HX_STACK_LINE(27)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		if ((tmp)){
			HX_STACK_LINE(27)
			console->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("clearHistory","\x47","\xe7","\xc5","\x3f"),HX_HCSTRING("Closes the debugger overlay.","\x09","\xdd","\x14","\xda"));
		}
	}
	HX_STACK_LINE(28)
	{
		HX_STACK_LINE(28)
		{
			HX_STACK_LINE(28)
			::flixel::_system::frontEnds::LogFrontEnd tmp = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(28)
			Dynamic value = tmp->__Field(HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"), hx::paccDynamic );		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(28)
			Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(28)
			console->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("clearLog","\xf7","\x50","\x0e","\x31"),tmp1);
		}
		HX_STACK_LINE(28)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		if ((tmp)){
			HX_STACK_LINE(28)
			console->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("clearLog","\xf7","\x50","\x0e","\x31"),HX_HCSTRING("Clears the command history.","\x58","\xc6","\xe5","\x46"));
		}
	}
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		{
			HX_STACK_LINE(30)
			Dynamic tmp = this->fields_dyn();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(30)
			Dynamic value = tmp;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(30)
			Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(30)
			console->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"),tmp1);
		}
		HX_STACK_LINE(30)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		if ((tmp)){
			HX_STACK_LINE(30)
			console->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"),HX_HCSTRING("Lists the fields of a class or instance","\x6f","\xdd","\x83","\x14"));
		}
	}
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		{
			HX_STACK_LINE(32)
			Dynamic tmp = this->listObjects_dyn();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(32)
			Dynamic value = tmp;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(32)
			Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(32)
			console->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("listObjects","\x16","\xdc","\x4e","\x39"),tmp1);
		}
		HX_STACK_LINE(32)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		if ((tmp)){
			HX_STACK_LINE(32)
			console->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("listObjects","\x16","\xdc","\x4e","\x39"),HX_HCSTRING("Lists the aliases of all registered objects.","\x6c","\x4a","\x89","\xe2"));
		}
	}
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		{
			HX_STACK_LINE(33)
			Dynamic tmp = this->listFunctions_dyn();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(33)
			Dynamic value = tmp;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(33)
			Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(33)
			console->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("listFunctions","\x1d","\x52","\x37","\xc0"),tmp1);
		}
		HX_STACK_LINE(33)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		if ((tmp)){
			HX_STACK_LINE(33)
			console->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("listFunctions","\x1d","\x52","\x37","\xc0"),HX_HCSTRING("Lists the aliases of all registered functions.","\x85","\x07","\x62","\x7a"));
		}
	}
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		{
			HX_STACK_LINE(35)
			Dynamic tmp = this->pause_dyn();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(35)
			Dynamic value = tmp;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(35)
			Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(35)
			console->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),tmp1);
		}
		HX_STACK_LINE(35)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		if ((tmp)){
			HX_STACK_LINE(35)
			console->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),HX_HCSTRING("Toggles the game between paused and unpaused.","\x42","\x15","\xb4","\xfb"));
		}
	}
	HX_STACK_LINE(37)
	{
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			::flixel::_system::frontEnds::BitmapLogFrontEnd tmp = ::flixel::FlxG_obj::bitmapLog;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(37)
			Dynamic value = tmp->__Field(HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"), hx::paccDynamic );		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(37)
			Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(37)
			console->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("clearBitmapLog","\x88","\xb0","\xe0","\x84"),tmp1);
		}
		HX_STACK_LINE(37)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		if ((tmp)){
			HX_STACK_LINE(37)
			console->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("clearBitmapLog","\x88","\xb0","\xe0","\x84"),HX_HCSTRING("Clears the bitmapLog window.","\x4a","\x2e","\xfa","\xed"));
		}
	}
	HX_STACK_LINE(38)
	{
		HX_STACK_LINE(38)
		{
			HX_STACK_LINE(38)
			::flixel::_system::frontEnds::BitmapLogFrontEnd tmp = ::flixel::FlxG_obj::bitmapLog;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(38)
			Dynamic value = tmp->__Field(HX_HCSTRING("viewCache","\x9d","\x09","\xa9","\x81"), hx::paccDynamic );		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(38)
			Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(38)
			console->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("viewCache","\x9d","\x09","\xa9","\x81"),tmp1);
		}
		HX_STACK_LINE(38)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		if ((tmp)){
			HX_STACK_LINE(38)
			console->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("viewCache","\x9d","\x09","\xa9","\x81"),HX_HCSTRING("Adds the cache to the bitmapLog window.","\x9a","\x4b","\xf4","\xec"));
		}
	}
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			Dynamic tmp = this->create_dyn();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(40)
			Dynamic value = tmp;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(40)
			Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(40)
			console->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),tmp1);
		}
		HX_STACK_LINE(40)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		if ((tmp)){
			HX_STACK_LINE(40)
			console->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),HX_HCSTRING("Creates a new FlxObject and registers it - by default at the mouse position. \"create(ObjClass:Class<T>, PlaceAtMouse:Bool, ExtraParams:Array<Dynamic>)\" Ex: \"create(FlxSprite, false, [100, 100])\"","\xe1","\x71","\x2c","\x4a"));
		}
	}
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			::flixel::_system::frontEnds::WatchFrontEnd tmp = ::flixel::FlxG_obj::watch;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(42)
			Dynamic value = tmp->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic );		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(42)
			Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(42)
			console->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"),tmp1);
		}
		HX_STACK_LINE(42)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		if ((tmp)){
			HX_STACK_LINE(42)
			console->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"),HX_HCSTRING("Adds the specified field of an object to the watch window.","\x3d","\x3d","\xb8","\x00"));
		}
	}
	HX_STACK_LINE(43)
	{
		HX_STACK_LINE(43)
		{
			HX_STACK_LINE(43)
			::flixel::_system::frontEnds::WatchFrontEnd tmp = ::flixel::FlxG_obj::watch;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(43)
			Dynamic value = tmp->__Field(HX_HCSTRING("addExpression","\x19","\x5b","\xe8","\x98"), hx::paccDynamic );		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(43)
			Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(43)
			console->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("watchExpression","\xc7","\xc4","\x8f","\x8c"),tmp1);
		}
		HX_STACK_LINE(43)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		if ((tmp)){
			HX_STACK_LINE(43)
			console->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("watchExpression","\xc7","\xc4","\x8f","\x8c"),HX_HCSTRING("Adds the specified expression to the watch window. Be sure any objects, functions, and classes used are registered!","\x28","\x72","\x30","\xfe"));
		}
	}
	HX_STACK_LINE(44)
	{
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			Dynamic tmp = this->watchMouse_dyn();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(44)
			Dynamic value = tmp;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(44)
			Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(44)
			console->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("watchMouse","\x56","\x31","\x6f","\x84"),tmp1);
		}
		HX_STACK_LINE(44)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		if ((tmp)){
			HX_STACK_LINE(44)
			console->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("watchMouse","\x56","\x31","\x6f","\x84"),HX_HCSTRING("Adds the mouse coordinates to the watch window.","\x16","\x85","\x0c","\x85"));
		}
	}
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		{
			HX_STACK_LINE(45)
			::flixel::_system::frontEnds::DebuggerFrontEnd tmp = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(45)
			Dynamic value = tmp->__Field(HX_HCSTRING("track","\x8b","\x8e","\x1f","\x16"), hx::paccDynamic );		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(45)
			Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(45)
			console->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("track","\x8b","\x8e","\x1f","\x16"),tmp1);
		}
		HX_STACK_LINE(45)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		if ((tmp)){
			HX_STACK_LINE(45)
			console->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("track","\x8b","\x8e","\x1f","\x16"),HX_HCSTRING("Adds a tracker window for the specified object or class.","\xa3","\xa1","\xe4","\x47"));
		}
	}
	HX_STACK_LINE(48)
	{
		HX_STACK_LINE(48)
		::hx::Class cl = hx::ClassOf< ::Math >();		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			::String tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(48)
			{
				HX_STACK_LINE(48)
				::hx::Class cl1;		HX_STACK_VAR(cl1,"cl1");
				HX_STACK_LINE(48)
				::hx::Class tmp1 = cl;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(48)
				bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(48)
				if ((tmp2)){
					HX_STACK_LINE(48)
					cl1 = cl;
				}
				else{
					HX_STACK_LINE(48)
					::hx::Class tmp3 = cl;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(48)
					::hx::Class tmp4 = ::Type_obj::getClass(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(48)
					cl1 = tmp4;
				}
				HX_STACK_LINE(48)
				::hx::Class tmp3 = cl1;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(48)
				::String tmp4 = ::Type_obj::getClassName(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(48)
				::String s = tmp4;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(48)
				bool tmp5 = (s != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(48)
				if ((tmp5)){
					HX_STACK_LINE(48)
					::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(48)
					::String tmp7 = ::StringTools_obj::replace(tmp6,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(48)
					s = tmp7;
					HX_STACK_LINE(48)
					int tmp8 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(48)
					int tmp9 = (tmp8 + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(48)
					::String tmp10 = s.substr(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(48)
					s = tmp10;
				}
				HX_STACK_LINE(48)
				tmp = s;
			}
			HX_STACK_LINE(48)
			::String objectAlias = tmp;		HX_STACK_VAR(objectAlias,"objectAlias");
			HX_STACK_LINE(48)
			{
				HX_STACK_LINE(48)
				Dynamic value = cl;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(48)
				::String tmp1 = objectAlias;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(48)
				Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(48)
				console->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp1,tmp2);
			}
		}
	}
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(49)
		::hx::Class cl = hx::ClassOf< ::Reflect >();		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(49)
			::String tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(49)
			{
				HX_STACK_LINE(49)
				::hx::Class cl1;		HX_STACK_VAR(cl1,"cl1");
				HX_STACK_LINE(49)
				::hx::Class tmp1 = cl;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(49)
				bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(49)
				if ((tmp2)){
					HX_STACK_LINE(49)
					cl1 = cl;
				}
				else{
					HX_STACK_LINE(49)
					::hx::Class tmp3 = cl;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(49)
					::hx::Class tmp4 = ::Type_obj::getClass(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(49)
					cl1 = tmp4;
				}
				HX_STACK_LINE(49)
				::hx::Class tmp3 = cl1;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(49)
				::String tmp4 = ::Type_obj::getClassName(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(49)
				::String s = tmp4;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(49)
				bool tmp5 = (s != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(49)
				if ((tmp5)){
					HX_STACK_LINE(49)
					::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(49)
					::String tmp7 = ::StringTools_obj::replace(tmp6,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(49)
					s = tmp7;
					HX_STACK_LINE(49)
					int tmp8 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(49)
					int tmp9 = (tmp8 + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(49)
					::String tmp10 = s.substr(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(49)
					s = tmp10;
				}
				HX_STACK_LINE(49)
				tmp = s;
			}
			HX_STACK_LINE(49)
			::String objectAlias = tmp;		HX_STACK_VAR(objectAlias,"objectAlias");
			HX_STACK_LINE(49)
			{
				HX_STACK_LINE(49)
				Dynamic value = cl;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(49)
				::String tmp1 = objectAlias;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(49)
				Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(49)
				console->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp1,tmp2);
			}
		}
	}
	HX_STACK_LINE(50)
	{
		HX_STACK_LINE(50)
		::hx::Class cl = hx::ClassOf< ::Std >();		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			::String tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(50)
			{
				HX_STACK_LINE(50)
				::hx::Class cl1;		HX_STACK_VAR(cl1,"cl1");
				HX_STACK_LINE(50)
				::hx::Class tmp1 = cl;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(50)
				bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(50)
				if ((tmp2)){
					HX_STACK_LINE(50)
					cl1 = cl;
				}
				else{
					HX_STACK_LINE(50)
					::hx::Class tmp3 = cl;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(50)
					::hx::Class tmp4 = ::Type_obj::getClass(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(50)
					cl1 = tmp4;
				}
				HX_STACK_LINE(50)
				::hx::Class tmp3 = cl1;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(50)
				::String tmp4 = ::Type_obj::getClassName(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(50)
				::String s = tmp4;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(50)
				bool tmp5 = (s != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(50)
				if ((tmp5)){
					HX_STACK_LINE(50)
					::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(50)
					::String tmp7 = ::StringTools_obj::replace(tmp6,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(50)
					s = tmp7;
					HX_STACK_LINE(50)
					int tmp8 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(50)
					int tmp9 = (tmp8 + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(50)
					::String tmp10 = s.substr(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(50)
					s = tmp10;
				}
				HX_STACK_LINE(50)
				tmp = s;
			}
			HX_STACK_LINE(50)
			::String objectAlias = tmp;		HX_STACK_VAR(objectAlias,"objectAlias");
			HX_STACK_LINE(50)
			{
				HX_STACK_LINE(50)
				Dynamic value = cl;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(50)
				::String tmp1 = objectAlias;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(50)
				Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(50)
				console->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp1,tmp2);
			}
		}
	}
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		::hx::Class cl = hx::ClassOf< ::StringTools >();		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			::String tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(51)
			{
				HX_STACK_LINE(51)
				::hx::Class cl1;		HX_STACK_VAR(cl1,"cl1");
				HX_STACK_LINE(51)
				::hx::Class tmp1 = cl;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(51)
				bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(51)
				if ((tmp2)){
					HX_STACK_LINE(51)
					cl1 = cl;
				}
				else{
					HX_STACK_LINE(51)
					::hx::Class tmp3 = cl;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(51)
					::hx::Class tmp4 = ::Type_obj::getClass(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(51)
					cl1 = tmp4;
				}
				HX_STACK_LINE(51)
				::hx::Class tmp3 = cl1;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(51)
				::String tmp4 = ::Type_obj::getClassName(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(51)
				::String s = tmp4;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(51)
				bool tmp5 = (s != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(51)
				if ((tmp5)){
					HX_STACK_LINE(51)
					::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(51)
					::String tmp7 = ::StringTools_obj::replace(tmp6,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(51)
					s = tmp7;
					HX_STACK_LINE(51)
					int tmp8 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(51)
					int tmp9 = (tmp8 + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(51)
					::String tmp10 = s.substr(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(51)
					s = tmp10;
				}
				HX_STACK_LINE(51)
				tmp = s;
			}
			HX_STACK_LINE(51)
			::String objectAlias = tmp;		HX_STACK_VAR(objectAlias,"objectAlias");
			HX_STACK_LINE(51)
			{
				HX_STACK_LINE(51)
				Dynamic value = cl;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(51)
				::String tmp1 = objectAlias;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(51)
				Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(51)
				console->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp1,tmp2);
			}
		}
	}
	HX_STACK_LINE(53)
	{
		HX_STACK_LINE(53)
		::hx::Class cl = hx::ClassOf< ::Sys >();		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			::String tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(53)
			{
				HX_STACK_LINE(53)
				::hx::Class cl1;		HX_STACK_VAR(cl1,"cl1");
				HX_STACK_LINE(53)
				::hx::Class tmp1 = cl;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(53)
				bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(53)
				if ((tmp2)){
					HX_STACK_LINE(53)
					cl1 = cl;
				}
				else{
					HX_STACK_LINE(53)
					::hx::Class tmp3 = cl;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(53)
					::hx::Class tmp4 = ::Type_obj::getClass(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(53)
					cl1 = tmp4;
				}
				HX_STACK_LINE(53)
				::hx::Class tmp3 = cl1;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(53)
				::String tmp4 = ::Type_obj::getClassName(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(53)
				::String s = tmp4;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(53)
				bool tmp5 = (s != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(53)
				if ((tmp5)){
					HX_STACK_LINE(53)
					::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(53)
					::String tmp7 = ::StringTools_obj::replace(tmp6,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(53)
					s = tmp7;
					HX_STACK_LINE(53)
					int tmp8 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(53)
					int tmp9 = (tmp8 + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(53)
					::String tmp10 = s.substr(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(53)
					s = tmp10;
				}
				HX_STACK_LINE(53)
				tmp = s;
			}
			HX_STACK_LINE(53)
			::String objectAlias = tmp;		HX_STACK_VAR(objectAlias,"objectAlias");
			HX_STACK_LINE(53)
			{
				HX_STACK_LINE(53)
				Dynamic value = cl;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(53)
				::String tmp1 = objectAlias;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(53)
				Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(53)
				console->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp1,tmp2);
			}
		}
	}
	HX_STACK_LINE(55)
	{
		HX_STACK_LINE(55)
		::hx::Class cl = hx::ClassOf< ::Type >();		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			::String tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(55)
			{
				HX_STACK_LINE(55)
				::hx::Class cl1;		HX_STACK_VAR(cl1,"cl1");
				HX_STACK_LINE(55)
				::hx::Class tmp1 = cl;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(55)
				bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(55)
				if ((tmp2)){
					HX_STACK_LINE(55)
					cl1 = cl;
				}
				else{
					HX_STACK_LINE(55)
					::hx::Class tmp3 = cl;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(55)
					::hx::Class tmp4 = ::Type_obj::getClass(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(55)
					cl1 = tmp4;
				}
				HX_STACK_LINE(55)
				::hx::Class tmp3 = cl1;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(55)
				::String tmp4 = ::Type_obj::getClassName(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(55)
				::String s = tmp4;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(55)
				bool tmp5 = (s != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(55)
				if ((tmp5)){
					HX_STACK_LINE(55)
					::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(55)
					::String tmp7 = ::StringTools_obj::replace(tmp6,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(55)
					s = tmp7;
					HX_STACK_LINE(55)
					int tmp8 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(55)
					int tmp9 = (tmp8 + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(55)
					::String tmp10 = s.substr(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(55)
					s = tmp10;
				}
				HX_STACK_LINE(55)
				tmp = s;
			}
			HX_STACK_LINE(55)
			::String objectAlias = tmp;		HX_STACK_VAR(objectAlias,"objectAlias");
			HX_STACK_LINE(55)
			{
				HX_STACK_LINE(55)
				Dynamic value = cl;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(55)
				::String tmp1 = objectAlias;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(55)
				Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(55)
				console->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp1,tmp2);
			}
		}
	}
	HX_STACK_LINE(57)
	{
		HX_STACK_LINE(57)
		::hx::Class cl = hx::ClassOf< ::flixel::FlxG >();		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			::String tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				::hx::Class cl1;		HX_STACK_VAR(cl1,"cl1");
				HX_STACK_LINE(57)
				::hx::Class tmp1 = cl;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(57)
				bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(57)
				if ((tmp2)){
					HX_STACK_LINE(57)
					cl1 = cl;
				}
				else{
					HX_STACK_LINE(57)
					::hx::Class tmp3 = cl;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(57)
					::hx::Class tmp4 = ::Type_obj::getClass(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(57)
					cl1 = tmp4;
				}
				HX_STACK_LINE(57)
				::hx::Class tmp3 = cl1;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(57)
				::String tmp4 = ::Type_obj::getClassName(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(57)
				::String s = tmp4;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(57)
				bool tmp5 = (s != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(57)
				if ((tmp5)){
					HX_STACK_LINE(57)
					::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(57)
					::String tmp7 = ::StringTools_obj::replace(tmp6,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(57)
					s = tmp7;
					HX_STACK_LINE(57)
					int tmp8 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(57)
					int tmp9 = (tmp8 + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(57)
					::String tmp10 = s.substr(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(57)
					s = tmp10;
				}
				HX_STACK_LINE(57)
				tmp = s;
			}
			HX_STACK_LINE(57)
			::String objectAlias = tmp;		HX_STACK_VAR(objectAlias,"objectAlias");
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				Dynamic value = cl;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(57)
				::String tmp1 = objectAlias;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(57)
				Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(57)
				console->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp1,tmp2);
			}
		}
	}
	HX_STACK_LINE(58)
	{
		HX_STACK_LINE(58)
		::hx::Class cl = hx::ClassOf< ::flixel::FlxSprite >();		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			::String tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(58)
			{
				HX_STACK_LINE(58)
				::hx::Class cl1;		HX_STACK_VAR(cl1,"cl1");
				HX_STACK_LINE(58)
				::hx::Class tmp1 = cl;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(58)
				bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(58)
				if ((tmp2)){
					HX_STACK_LINE(58)
					cl1 = cl;
				}
				else{
					HX_STACK_LINE(58)
					::hx::Class tmp3 = cl;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(58)
					::hx::Class tmp4 = ::Type_obj::getClass(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(58)
					cl1 = tmp4;
				}
				HX_STACK_LINE(58)
				::hx::Class tmp3 = cl1;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(58)
				::String tmp4 = ::Type_obj::getClassName(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(58)
				::String s = tmp4;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(58)
				bool tmp5 = (s != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(58)
				if ((tmp5)){
					HX_STACK_LINE(58)
					::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(58)
					::String tmp7 = ::StringTools_obj::replace(tmp6,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(58)
					s = tmp7;
					HX_STACK_LINE(58)
					int tmp8 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(58)
					int tmp9 = (tmp8 + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(58)
					::String tmp10 = s.substr(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(58)
					s = tmp10;
				}
				HX_STACK_LINE(58)
				tmp = s;
			}
			HX_STACK_LINE(58)
			::String objectAlias = tmp;		HX_STACK_VAR(objectAlias,"objectAlias");
			HX_STACK_LINE(58)
			{
				HX_STACK_LINE(58)
				Dynamic value = cl;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(58)
				::String tmp1 = objectAlias;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(58)
				Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(58)
				console->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp1,tmp2);
			}
		}
	}
	HX_STACK_LINE(59)
	{
		HX_STACK_LINE(59)
		::hx::Class cl = hx::ClassOf< ::flixel::math::FlxMath >();		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(59)
		{
			HX_STACK_LINE(59)
			::String tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(59)
			{
				HX_STACK_LINE(59)
				::hx::Class cl1;		HX_STACK_VAR(cl1,"cl1");
				HX_STACK_LINE(59)
				::hx::Class tmp1 = cl;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(59)
				bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(59)
				if ((tmp2)){
					HX_STACK_LINE(59)
					cl1 = cl;
				}
				else{
					HX_STACK_LINE(59)
					::hx::Class tmp3 = cl;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(59)
					::hx::Class tmp4 = ::Type_obj::getClass(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(59)
					cl1 = tmp4;
				}
				HX_STACK_LINE(59)
				::hx::Class tmp3 = cl1;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(59)
				::String tmp4 = ::Type_obj::getClassName(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(59)
				::String s = tmp4;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(59)
				bool tmp5 = (s != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(59)
				if ((tmp5)){
					HX_STACK_LINE(59)
					::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(59)
					::String tmp7 = ::StringTools_obj::replace(tmp6,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(59)
					s = tmp7;
					HX_STACK_LINE(59)
					int tmp8 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(59)
					int tmp9 = (tmp8 + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(59)
					::String tmp10 = s.substr(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(59)
					s = tmp10;
				}
				HX_STACK_LINE(59)
				tmp = s;
			}
			HX_STACK_LINE(59)
			::String objectAlias = tmp;		HX_STACK_VAR(objectAlias,"objectAlias");
			HX_STACK_LINE(59)
			{
				HX_STACK_LINE(59)
				Dynamic value = cl;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(59)
				::String tmp1 = objectAlias;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(59)
				Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(59)
				console->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp1,tmp2);
			}
		}
	}
	HX_STACK_LINE(60)
	{
		HX_STACK_LINE(60)
		::hx::Class cl = hx::ClassOf< ::flixel::tweens::FlxTween >();		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			::String tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(60)
			{
				HX_STACK_LINE(60)
				::hx::Class cl1;		HX_STACK_VAR(cl1,"cl1");
				HX_STACK_LINE(60)
				::hx::Class tmp1 = cl;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(60)
				bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(60)
				if ((tmp2)){
					HX_STACK_LINE(60)
					cl1 = cl;
				}
				else{
					HX_STACK_LINE(60)
					::hx::Class tmp3 = cl;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(60)
					::hx::Class tmp4 = ::Type_obj::getClass(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(60)
					cl1 = tmp4;
				}
				HX_STACK_LINE(60)
				::hx::Class tmp3 = cl1;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(60)
				::String tmp4 = ::Type_obj::getClassName(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(60)
				::String s = tmp4;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(60)
				bool tmp5 = (s != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(60)
				if ((tmp5)){
					HX_STACK_LINE(60)
					::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(60)
					::String tmp7 = ::StringTools_obj::replace(tmp6,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(60)
					s = tmp7;
					HX_STACK_LINE(60)
					int tmp8 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(60)
					int tmp9 = (tmp8 + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(60)
					::String tmp10 = s.substr(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(60)
					s = tmp10;
				}
				HX_STACK_LINE(60)
				tmp = s;
			}
			HX_STACK_LINE(60)
			::String objectAlias = tmp;		HX_STACK_VAR(objectAlias,"objectAlias");
			HX_STACK_LINE(60)
			{
				HX_STACK_LINE(60)
				Dynamic value = cl;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(60)
				::String tmp1 = objectAlias;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(60)
				Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(60)
				console->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp1,tmp2);
			}
		}
	}
}
;
	return null();
}

//ConsoleCommands_obj::~ConsoleCommands_obj() { }

Dynamic ConsoleCommands_obj::__CreateEmpty() { return  new ConsoleCommands_obj; }
hx::ObjectPtr< ConsoleCommands_obj > ConsoleCommands_obj::__new(::flixel::_system::debug::console::Console console)
{  hx::ObjectPtr< ConsoleCommands_obj > _result_ = new ConsoleCommands_obj();
	_result_->__construct(console);
	return _result_;}

Dynamic ConsoleCommands_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ConsoleCommands_obj > _result_ = new ConsoleCommands_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String ConsoleCommands_obj::help( ::String Alias){
	HX_STACK_FRAME("flixel.system.debug.console.ConsoleCommands","help",0x2c0dad6f,"flixel.system.debug.console.ConsoleCommands.help","flixel/system/debug/console/ConsoleCommands.hx",65,0x8e0df1e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Alias,"Alias")
	HX_STACK_LINE(66)
	bool tmp = (Alias == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(66)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(66)
	if ((tmp1)){
		HX_STACK_LINE(66)
		tmp2 = (Alias.length == (int)0);
	}
	else{
		HX_STACK_LINE(66)
		tmp2 = true;
	}
	HX_STACK_LINE(66)
	if ((tmp2)){
		HX_STACK_LINE(68)
		::String output = HX_HCSTRING("System classes and commands: ","\x42","\x07","\x6a","\xe4");		HX_STACK_VAR(output,"output");
		HX_STACK_LINE(69)
		::flixel::_system::debug::console::Console tmp3 = this->_console;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(69)
		Dynamic tmp4 = tmp3->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(69)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp4);  __it->hasNext(); ){
			::String obj = __it->next();
			{
				HX_STACK_LINE(71)
				::String tmp5 = (obj + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(71)
				hx::AddEq(output,tmp5);
			}
;
		}
		HX_STACK_LINE(73)
		::flixel::_system::debug::console::Console tmp5 = this->_console;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(73)
		Dynamic tmp6 = tmp5->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"), hx::paccDynamic )();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(73)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp6);  __it->hasNext(); ){
			::String func = __it->next();
			{
				HX_STACK_LINE(75)
				::String tmp7 = (func + HX_HCSTRING("(), ","\xb5","\xcb","\x8f","\x1a"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(75)
				hx::AddEq(output,tmp7);
			}
;
		}
		HX_STACK_LINE(77)
		::String tmp7 = (output + HX_HCSTRING("\nTry 'help(\"command\")' for more information about a specific command.","\xcf","\x42","\x2c","\x8a"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(77)
		return tmp7;
	}
	else{
		HX_STACK_LINE(81)
		::flixel::_system::debug::console::Console tmp3 = this->_console;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(81)
		::String tmp4 = Alias;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(81)
		bool tmp5 = tmp3->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(81)
		if ((tmp5)){
			HX_STACK_LINE(83)
			::String tmp6 = Alias;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(83)
			::flixel::_system::debug::console::Console tmp7 = this->_console;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(83)
			::String tmp8 = Alias;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(83)
			bool tmp9 = tmp7->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(83)
			::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(83)
			if ((tmp9)){
				HX_STACK_LINE(83)
				tmp10 = HX_HCSTRING("()","\x01","\x23","\x00","\x00");
			}
			else{
				HX_STACK_LINE(83)
				tmp10 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			}
			HX_STACK_LINE(83)
			::String tmp11 = (tmp6 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(83)
			::String tmp12 = (tmp11 + HX_HCSTRING(": ","\xa6","\x32","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(83)
			::flixel::_system::debug::console::Console tmp13 = this->_console;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(83)
			::String tmp14 = Alias;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(83)
			::String tmp15 = tmp13->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(83)
			::String tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(83)
			::String tmp17 = (tmp12 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(83)
			return tmp17;
		}
		else{
			HX_STACK_LINE(88)
			{
				HX_STACK_LINE(88)
				::flixel::_system::frontEnds::LogFrontEnd tmp6 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(88)
				::String tmp7 = (HX_HCSTRING("Help: The command '","\x5c","\xdd","\x57","\x6e") + Alias);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(88)
				::String tmp8 = (tmp7 + HX_HCSTRING("' does not have help text.","\x1f","\x16","\x65","\x26"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(88)
				::flixel::_system::debug::log::LogStyle tmp9 = ::flixel::_system::debug::log::LogStyle_obj::ERROR;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(88)
				tmp6->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp8,tmp9,true);
			}
			HX_STACK_LINE(89)
			return null();
		}
	}
	HX_STACK_LINE(66)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleCommands_obj,help,return )

Void ConsoleCommands_obj::close( ){
{
		HX_STACK_FRAME("flixel.system.debug.console.ConsoleCommands","close",0x838bf54a,"flixel.system.debug.console.ConsoleCommands.close","flixel/system/debug/console/ConsoleCommands.hx",96,0x8e0df1e0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(97)
		::flixel::_system::frontEnds::DebuggerFrontEnd tmp = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(97)
		tmp->__Field(HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"), hx::paccDynamic )(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,close,(void))

Void ConsoleCommands_obj::create( ::hx::Class ObjClass,hx::Null< bool >  __o_MousePos,cpp::ArrayBase Params){
bool MousePos = __o_MousePos.Default(true);
	HX_STACK_FRAME("flixel.system.debug.console.ConsoleCommands","create",0x04a8692a,"flixel.system.debug.console.ConsoleCommands.create","flixel/system/debug/console/ConsoleCommands.hx",101,0x8e0df1e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjClass,"ObjClass")
	HX_STACK_ARG(MousePos,"MousePos")
	HX_STACK_ARG(Params,"Params")
{
		HX_STACK_LINE(102)
		bool tmp = (Params == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		if ((tmp)){
			HX_STACK_LINE(103)
			Params = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(105)
		::hx::Class tmp1 = ObjClass;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(105)
		Dynamic tmp2 = ::Type_obj::createInstance(tmp1,Params);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(105)
		::flixel::FlxObject obj = tmp2;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(107)
		bool tmp3 = (obj == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(107)
		if ((tmp3)){
			HX_STACK_LINE(107)
			return null();
		}
		HX_STACK_LINE(109)
		bool tmp4 = MousePos;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(109)
		if ((tmp4)){
			HX_STACK_LINE(111)
			::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(111)
			Float tmp6 = tmp5->get_mouseX();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(111)
			obj->set_x(tmp6);
			HX_STACK_LINE(112)
			::flixel::FlxGame tmp7 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(112)
			Float tmp8 = tmp7->get_mouseY();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(112)
			obj->set_y(tmp8);
		}
		HX_STACK_LINE(115)
		::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(115)
		::flixel::FlxObject tmp6 = obj;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(115)
		tmp5->_state->add(tmp6);
		HX_STACK_LINE(117)
		bool tmp7 = (Params->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(117)
		if ((tmp7)){
			HX_STACK_LINE(118)
			::flixel::_system::frontEnds::LogFrontEnd tmp8 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(118)
			::hx::Class tmp9 = ObjClass;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(118)
			::String tmp10 = ::Std_obj::string(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(118)
			::String tmp11 = (HX_HCSTRING("create: New ","\x82","\xf9","\x21","\xbf") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(118)
			::String tmp12 = (tmp11 + HX_HCSTRING(" created at X = ","\x00","\xf4","\xdf","\x3b"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(118)
			Float tmp13 = obj->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(118)
			::String tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(118)
			::String tmp15 = (tmp14 + HX_HCSTRING(" Y = ","\xca","\x0a","\xbf","\xa7"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(118)
			Float tmp16 = obj->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(118)
			::String tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(118)
			::flixel::_system::debug::log::LogStyle tmp18 = ::flixel::_system::debug::log::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(118)
			tmp8->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(tmp17),tmp18,null());
		}
		else{
			HX_STACK_LINE(120)
			::flixel::_system::frontEnds::LogFrontEnd tmp8 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(120)
			::hx::Class tmp9 = ObjClass;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(120)
			::String tmp10 = ::Std_obj::string(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(120)
			::String tmp11 = (HX_HCSTRING("create: New ","\x82","\xf9","\x21","\xbf") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(120)
			::String tmp12 = (tmp11 + HX_HCSTRING(" created at X = ","\x00","\xf4","\xdf","\x3b"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(120)
			Float tmp13 = obj->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(120)
			::String tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(120)
			::String tmp15 = (tmp14 + HX_HCSTRING(" Y = ","\xca","\x0a","\xbf","\xa7"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(120)
			Float tmp16 = obj->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(120)
			::String tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(120)
			::String tmp18 = (tmp17 + HX_HCSTRING(" with params ","\x20","\xc2","\x85","\xfb"));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(120)
			::String tmp19 = ::Std_obj::string(Params);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(120)
			::String tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(120)
			::flixel::_system::debug::log::LogStyle tmp21 = ::flixel::_system::debug::log::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(120)
			tmp8->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(tmp20),tmp21,null());
		}
		HX_STACK_LINE(122)
		::flixel::_system::debug::console::Console tmp8 = this->_console;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(122)
		::flixel::FlxObject tmp9 = obj;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(122)
		tmp8->__Field(HX_HCSTRING("objectStack","\x09","\x84","\x3a","\xf3"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp9);
		HX_STACK_LINE(124)
		::flixel::_system::debug::console::Console tmp10 = this->_console;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(124)
		int tmp11 = tmp10->__Field(HX_HCSTRING("objectStack","\x09","\x84","\x3a","\xf3"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(124)
		::String tmp12 = (HX_HCSTRING("Object_","\xa0","\x90","\xa0","\x4f") + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(124)
		::String name = tmp12;		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			Dynamic value = obj;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(125)
			::flixel::_system::debug::console::Console tmp13 = this->_console;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(125)
			::String tmp14 = name;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(125)
			Dynamic tmp15 = value;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(125)
			tmp13->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp14,tmp15);
		}
		HX_STACK_LINE(127)
		{
			HX_STACK_LINE(127)
			::flixel::_system::frontEnds::LogFrontEnd tmp13 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(127)
			::hx::Class tmp14 = ObjClass;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(127)
			::String tmp15 = ::Std_obj::string(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(127)
			::String tmp16 = (HX_HCSTRING("create: ","\xa2","\x50","\xf4","\x2b") + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(127)
			::String tmp17 = (tmp16 + HX_HCSTRING(" registered as '","\xb7","\xf0","\xb7","\xdc"));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(127)
			::String tmp18 = name;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(127)
			::String tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(127)
			::String tmp20 = (tmp19 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(127)
			::flixel::_system::debug::log::LogStyle tmp21 = ::flixel::_system::debug::log::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(127)
			tmp13->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(tmp20),tmp21,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ConsoleCommands_obj,create,(void))

::String ConsoleCommands_obj::fields( Dynamic Object){
	HX_STACK_FRAME("flixel.system.debug.console.ConsoleCommands","fields",0x092790a7,"flixel.system.debug.console.ConsoleCommands.fields","flixel/system/debug/console/ConsoleCommands.hx",131,0x8e0df1e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_LINE(132)
	Dynamic tmp = Object;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(132)
	::String tmp1 = ::Type_obj::getClassName(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(132)
	::String tmp2 = (HX_HCSTRING("Fields of ","\x22","\x2a","\x96","\x7d") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(132)
	::String tmp3 = (tmp2 + HX_HCSTRING(":\n","\x90","\x32","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(133)
	Dynamic tmp4 = Object;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(133)
	::String tmp5 = ::flixel::_system::debug::console::ConsoleUtil_obj::getFields(tmp4)->join(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(133)
	::String tmp6 = ::StringTools_obj::trim(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(132)
	::String tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(132)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleCommands_obj,fields,return )

Void ConsoleCommands_obj::listObjects( ){
{
		HX_STACK_FRAME("flixel.system.debug.console.ConsoleCommands","listObjects",0x01393328,"flixel.system.debug.console.ConsoleCommands.listObjects","flixel/system/debug/console/ConsoleCommands.hx",138,0x8e0df1e0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		::String tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(138)
		{
			HX_STACK_LINE(138)
			::String string = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(string,"string");
			HX_STACK_LINE(138)
			::flixel::_system::debug::console::Console tmp1 = this->_console;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(138)
			Dynamic tmp2 = tmp1->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(138)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp2);  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(138)
					::String tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(138)
					::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(138)
					hx::AddEq(string,tmp4);
					HX_STACK_LINE(138)
					hx::AddEq(string,HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
				}
;
			}
			HX_STACK_LINE(138)
			int tmp3 = (string.length - (int)2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(138)
			tmp = string.substring((int)0,tmp3);
		}
		HX_STACK_LINE(138)
		::String tmp1 = (HX_HCSTRING("Objects registered: \n","\xf6","\xad","\x0c","\xd4") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(138)
		Dynamic Text = tmp1;		HX_STACK_VAR(Text,"Text");
		HX_STACK_LINE(138)
		::flixel::_system::frontEnds::LogFrontEnd tmp2 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(138)
		::flixel::_system::debug::log::LogStyle tmp3 = ::flixel::_system::debug::log::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(138)
		tmp2->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(Text),tmp3,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,listObjects,(void))

Void ConsoleCommands_obj::listFunctions( ){
{
		HX_STACK_FRAME("flixel.system.debug.console.ConsoleCommands","listFunctions",0x18b311af,"flixel.system.debug.console.ConsoleCommands.listFunctions","flixel/system/debug/console/ConsoleCommands.hx",143,0x8e0df1e0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(143)
		::String tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(143)
		{
			HX_STACK_LINE(143)
			::String string = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(string,"string");
			HX_STACK_LINE(143)
			::flixel::_system::debug::console::Console tmp1 = this->_console;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(143)
			Dynamic tmp2 = tmp1->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(143)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp2);  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(143)
					::String tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(143)
					::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(143)
					hx::AddEq(string,tmp4);
					HX_STACK_LINE(143)
					hx::AddEq(string,HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
				}
;
			}
			HX_STACK_LINE(143)
			int tmp3 = (string.length - (int)2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(143)
			tmp = string.substring((int)0,tmp3);
		}
		HX_STACK_LINE(143)
		::String tmp1 = (HX_HCSTRING("Functions registered: \n","\xbd","\x05","\x3d","\x78") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(143)
		Dynamic Text = tmp1;		HX_STACK_VAR(Text,"Text");
		HX_STACK_LINE(143)
		::flixel::_system::frontEnds::LogFrontEnd tmp2 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(143)
		::flixel::_system::debug::log::LogStyle tmp3 = ::flixel::_system::debug::log::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(143)
		tmp2->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(Text),tmp3,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,listFunctions,(void))

Void ConsoleCommands_obj::watchMouse( ){
{
		HX_STACK_FRAME("flixel.system.debug.console.ConsoleCommands","watchMouse",0x171fe284,"flixel.system.debug.console.ConsoleCommands.watchMouse","flixel/system/debug/console/ConsoleCommands.hx",147,0x8e0df1e0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(148)
		bool tmp = this->_watchingMouse;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(148)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(148)
		if ((tmp1)){
			HX_STACK_LINE(150)
			{
				HX_STACK_LINE(150)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(150)
				::flixel::_system::debug::watch::Watch tmp3 = tmp2->debugger->__Field(HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(150)
				::flixel::_system::debug::watch::WatchEntryData tmp4 = ::flixel::_system::debug::watch::WatchEntryData_obj::FIELD(hx::ClassOf< ::flixel::FlxG >(),HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(150)
				tmp3->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(HX_HCSTRING("Mouse Position","\x44","\x8e","\x3a","\x9d"),tmp4);
			}
			HX_STACK_LINE(151)
			{
				HX_STACK_LINE(151)
				::flixel::_system::frontEnds::LogFrontEnd tmp2 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(151)
				::flixel::_system::debug::log::LogStyle tmp3 = ::flixel::_system::debug::log::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(151)
				tmp2->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("watchMouse: Mouse position added to watch window","\x86","\x9c","\xf8","\x24")),tmp3,null());
			}
		}
		else{
			HX_STACK_LINE(155)
			{
				HX_STACK_LINE(155)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(155)
				::flixel::_system::debug::watch::Watch tmp3 = tmp2->debugger->__Field(HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(155)
				::flixel::_system::debug::watch::WatchEntryData tmp4 = ::flixel::_system::debug::watch::WatchEntryData_obj::FIELD(hx::ClassOf< ::flixel::FlxG >(),HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(155)
				tmp3->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(null(),tmp4);
			}
			HX_STACK_LINE(156)
			{
				HX_STACK_LINE(156)
				::flixel::_system::frontEnds::LogFrontEnd tmp2 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(156)
				::flixel::_system::debug::log::LogStyle tmp3 = ::flixel::_system::debug::log::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(156)
				tmp2->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("watchMouse: Mouse position removed from watch window","\x17","\xfe","\x23","\x1d")),tmp3,null());
			}
		}
		HX_STACK_LINE(159)
		bool tmp2 = this->_watchingMouse;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(159)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(159)
		this->_watchingMouse = tmp3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,watchMouse,(void))

Void ConsoleCommands_obj::pause( ){
{
		HX_STACK_FRAME("flixel.system.debug.console.ConsoleCommands","pause",0xf880b488,"flixel.system.debug.console.ConsoleCommands.pause","flixel/system/debug/console/ConsoleCommands.hx",163,0x8e0df1e0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(164)
		::flixel::_system::frontEnds::VCRFrontEnd tmp = ::flixel::FlxG_obj::vcr;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(164)
		bool tmp1 = tmp->__Field(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(164)
		if ((tmp1)){
			HX_STACK_LINE(166)
			::flixel::_system::frontEnds::VCRFrontEnd tmp2 = ::flixel::FlxG_obj::vcr;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(166)
			tmp2->__Field(HX_HCSTRING("resume","\xad","\x69","\x84","\x08"), hx::paccDynamic )();
			HX_STACK_LINE(167)
			{
				HX_STACK_LINE(167)
				::flixel::_system::frontEnds::LogFrontEnd tmp3 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(167)
				::flixel::_system::debug::log::LogStyle tmp4 = ::flixel::_system::debug::log::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(167)
				tmp3->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("pause: Game unpaused","\xf9","\xe8","\xd5","\xeb")),tmp4,null());
			}
		}
		else{
			HX_STACK_LINE(171)
			::flixel::_system::frontEnds::VCRFrontEnd tmp2 = ::flixel::FlxG_obj::vcr;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(171)
			tmp2->__Field(HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"), hx::paccDynamic )();
			HX_STACK_LINE(172)
			{
				HX_STACK_LINE(172)
				::flixel::_system::frontEnds::LogFrontEnd tmp3 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(172)
				::flixel::_system::debug::log::LogStyle tmp4 = ::flixel::_system::debug::log::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(172)
				tmp3->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("pause: Game paused","\x60","\xa9","\xdd","\x91")),tmp4,null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,pause,(void))


ConsoleCommands_obj::ConsoleCommands_obj()
{
}

void ConsoleCommands_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ConsoleCommands);
	HX_MARK_MEMBER_NAME(_console,"_console");
	HX_MARK_MEMBER_NAME(_watchingMouse,"_watchingMouse");
	HX_MARK_END_CLASS();
}

void ConsoleCommands_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_console,"_console");
	HX_VISIT_MEMBER_NAME(_watchingMouse,"_watchingMouse");
}

Dynamic ConsoleCommands_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"help") ) { return help_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"fields") ) { return fields_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_console") ) { return _console; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"watchMouse") ) { return watchMouse_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"listObjects") ) { return listObjects_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"listFunctions") ) { return listFunctions_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_watchingMouse") ) { return _watchingMouse; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ConsoleCommands_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_console") ) { _console=inValue.Cast< ::flixel::_system::debug::console::Console >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_watchingMouse") ) { _watchingMouse=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ConsoleCommands_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_console","\xd8","\x44","\x8e","\x52"));
	outFields->push(HX_HCSTRING("_watchingMouse","\x73","\xf3","\x3a","\x2a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::_system::debug::console::Console*/ ,(int)offsetof(ConsoleCommands_obj,_console),HX_HCSTRING("_console","\xd8","\x44","\x8e","\x52")},
	{hx::fsBool,(int)offsetof(ConsoleCommands_obj,_watchingMouse),HX_HCSTRING("_watchingMouse","\x73","\xf3","\x3a","\x2a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_console","\xd8","\x44","\x8e","\x52"),
	HX_HCSTRING("_watchingMouse","\x73","\xf3","\x3a","\x2a"),
	HX_HCSTRING("help","\xc1","\x32","\x0b","\x45"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"),
	HX_HCSTRING("listObjects","\x16","\xdc","\x4e","\x39"),
	HX_HCSTRING("listFunctions","\x1d","\x52","\x37","\xc0"),
	HX_HCSTRING("watchMouse","\x56","\x31","\x6f","\x84"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConsoleCommands_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConsoleCommands_obj::__mClass,"__mClass");
};

#endif

hx::Class ConsoleCommands_obj::__mClass;

void ConsoleCommands_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.console.ConsoleCommands","\x80","\xe4","\xff","\xa4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ConsoleCommands_obj >;
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
} // end namespace debug
} // end namespace console
