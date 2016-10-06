#ifndef INCLUDED_flixel_system_debug_watch_WatchEntryData
#define INCLUDED_flixel_system_debug_watch_WatchEntryData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,_system,debug,watch,WatchEntryData)
namespace flixel{
namespace _system{
namespace debug{
namespace watch{


class WatchEntryData_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef WatchEntryData_obj OBJ_;

	public:
		WatchEntryData_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("flixel.system.debug.watch.WatchEntryData","\x54","\x23","\x6d","\xa5"); }
		::String __ToString() const { return HX_HCSTRING("WatchEntryData.","\x01","\xe4","\xe7","\x77") + tag; }

		static ::flixel::_system::debug::watch::WatchEntryData EXPRESSION(::String expression);
		static Dynamic EXPRESSION_dyn();
		static ::flixel::_system::debug::watch::WatchEntryData FIELD(Dynamic object,::String field);
		static Dynamic FIELD_dyn();
		static ::flixel::_system::debug::watch::WatchEntryData QUICK(::String value);
		static Dynamic QUICK_dyn();
};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch

#endif /* INCLUDED_flixel_system_debug_watch_WatchEntryData */ 
