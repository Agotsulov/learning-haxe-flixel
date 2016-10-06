#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_watch_WatchEntryData
#include <flixel/system/debug/watch/WatchEntryData.h>
#endif
namespace flixel{
namespace _system{
namespace debug{
namespace watch{

::flixel::_system::debug::watch::WatchEntryData  WatchEntryData_obj::EXPRESSION(::String expression)
	{ return hx::CreateEnum< WatchEntryData_obj >(HX_HCSTRING("EXPRESSION","\x98","\x85","\xa8","\x20"),2,hx::DynamicArray(0,1).Add(expression)); }

::flixel::_system::debug::watch::WatchEntryData  WatchEntryData_obj::FIELD(Dynamic object,::String field)
	{ return hx::CreateEnum< WatchEntryData_obj >(HX_HCSTRING("FIELD","\x9a","\xcc","\x81","\x7e"),0,hx::DynamicArray(0,2).Add(object).Add(field)); }

::flixel::_system::debug::watch::WatchEntryData  WatchEntryData_obj::QUICK(::String value)
	{ return hx::CreateEnum< WatchEntryData_obj >(HX_HCSTRING("QUICK","\xcd","\xbe","\xdb","\xdb"),1,hx::DynamicArray(0,1).Add(value)); }

HX_DEFINE_CREATE_ENUM(WatchEntryData_obj)

int WatchEntryData_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("EXPRESSION","\x98","\x85","\xa8","\x20")) return 2;
	if (inName==HX_HCSTRING("FIELD","\x9a","\xcc","\x81","\x7e")) return 0;
	if (inName==HX_HCSTRING("QUICK","\xcd","\xbe","\xdb","\xdb")) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(WatchEntryData_obj,EXPRESSION,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(WatchEntryData_obj,FIELD,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(WatchEntryData_obj,QUICK,return)

int WatchEntryData_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("EXPRESSION","\x98","\x85","\xa8","\x20")) return 1;
	if (inName==HX_HCSTRING("FIELD","\x9a","\xcc","\x81","\x7e")) return 2;
	if (inName==HX_HCSTRING("QUICK","\xcd","\xbe","\xdb","\xdb")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic WatchEntryData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("EXPRESSION","\x98","\x85","\xa8","\x20")) return EXPRESSION_dyn();
	if (inName==HX_HCSTRING("FIELD","\x9a","\xcc","\x81","\x7e")) return FIELD_dyn();
	if (inName==HX_HCSTRING("QUICK","\xcd","\xbe","\xdb","\xdb")) return QUICK_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("FIELD","\x9a","\xcc","\x81","\x7e"),
	HX_HCSTRING("QUICK","\xcd","\xbe","\xdb","\xdb"),
	HX_HCSTRING("EXPRESSION","\x98","\x85","\xa8","\x20"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WatchEntryData_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class WatchEntryData_obj::__mClass;

Dynamic __Create_WatchEntryData_obj() { return new WatchEntryData_obj; }

void WatchEntryData_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("flixel.system.debug.watch.WatchEntryData","\x54","\x23","\x6d","\xa5"), hx::TCanCast< WatchEntryData_obj >,sStaticFields,sMemberFields,
	&__Create_WatchEntryData_obj, &__Create,
	&super::__SGetClass(), &CreateWatchEntryData_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void WatchEntryData_obj::__boot()
{
}


} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch
