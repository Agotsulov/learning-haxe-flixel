#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntry
#include <flixel/system/debug/watch/WatchEntry.h>
#endif
#ifndef INCLUDED_flixel_system_replay_FrameRecord
#include <flixel/system/replay/FrameRecord.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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
namespace util{

Void FlxArrayUtil_obj::__construct()
{
	return null();
}

//FlxArrayUtil_obj::~FlxArrayUtil_obj() { }

Dynamic FlxArrayUtil_obj::__CreateEmpty() { return  new FlxArrayUtil_obj; }
hx::ObjectPtr< FlxArrayUtil_obj > FlxArrayUtil_obj::__new()
{  hx::ObjectPtr< FlxArrayUtil_obj > _result_ = new FlxArrayUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxArrayUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxArrayUtil_obj > _result_ = new FlxArrayUtil_obj();
	_result_->__construct();
	return _result_;}

Array< ::Dynamic > FlxArrayUtil_obj::setLength_flixel_system_replay_FrameRecord( Array< ::Dynamic > array,int newLength){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","setLength_flixel_system_replay_FrameRecord",0x79844eb5,"flixel.util.FlxArrayUtil.setLength_flixel_system_replay_FrameRecord","flixel/util/FlxArrayUtil.hx",16,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(newLength,"newLength")
	HX_STACK_LINE(17)
	bool tmp = (newLength < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	if ((tmp)){
		HX_STACK_LINE(18)
		return array;
	}
	HX_STACK_LINE(20)
	int oldLength = array->length;		HX_STACK_VAR(oldLength,"oldLength");
	HX_STACK_LINE(21)
	int tmp1 = (newLength - oldLength);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	int diff = tmp1;		HX_STACK_VAR(diff,"diff");
	HX_STACK_LINE(22)
	bool tmp2 = (diff >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	if ((tmp2)){
		HX_STACK_LINE(23)
		return array;
	}
	HX_STACK_LINE(28)
	int tmp3 = diff;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	int tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(28)
	diff = tmp4;
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(29)
		while((true)){
			HX_STACK_LINE(29)
			bool tmp5 = (_g < diff);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(29)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(29)
			if ((tmp6)){
				HX_STACK_LINE(29)
				break;
			}
			HX_STACK_LINE(29)
			int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(29)
			int i = tmp7;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(30)
			array->pop().StaticCast< ::flixel::_system::replay::FrameRecord >();
		}
	}
	HX_STACK_LINE(33)
	return array;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,setLength_flixel_system_replay_FrameRecord,return )

Array< int > FlxArrayUtil_obj::setLength_Int( Array< int > array,int newLength){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","setLength_Int",0x3efc372d,"flixel.util.FlxArrayUtil.setLength_Int","flixel/util/FlxArrayUtil.hx",16,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(newLength,"newLength")
	HX_STACK_LINE(17)
	bool tmp = (newLength < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	if ((tmp)){
		HX_STACK_LINE(18)
		return array;
	}
	HX_STACK_LINE(20)
	int oldLength = array->length;		HX_STACK_VAR(oldLength,"oldLength");
	HX_STACK_LINE(21)
	int tmp1 = (newLength - oldLength);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	int diff = tmp1;		HX_STACK_VAR(diff,"diff");
	HX_STACK_LINE(22)
	bool tmp2 = (diff >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	if ((tmp2)){
		HX_STACK_LINE(23)
		return array;
	}
	HX_STACK_LINE(28)
	int tmp3 = diff;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	int tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(28)
	diff = tmp4;
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(29)
		while((true)){
			HX_STACK_LINE(29)
			bool tmp5 = (_g < diff);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(29)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(29)
			if ((tmp6)){
				HX_STACK_LINE(29)
				break;
			}
			HX_STACK_LINE(29)
			int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(29)
			int i = tmp7;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(30)
			array->pop();
		}
	}
	HX_STACK_LINE(33)
	return array;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,setLength_Int,return )

Array< int > FlxArrayUtil_obj::flatten2DArray_Int( Array< ::Dynamic > array){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","flatten2DArray_Int",0x9867551e,"flixel.util.FlxArrayUtil.flatten2DArray_Int","flixel/util/FlxArrayUtil.hx",120,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(121)
	Array< int > result = Array_obj< int >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(122)
	{
		HX_STACK_LINE(122)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(122)
		while((true)){
			HX_STACK_LINE(122)
			bool tmp = (_g < array->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(122)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(122)
			if ((tmp1)){
				HX_STACK_LINE(122)
				break;
			}
			HX_STACK_LINE(122)
			Array< int > innerArray = array->__get(_g).StaticCast< Array< int > >();		HX_STACK_VAR(innerArray,"innerArray");
			HX_STACK_LINE(122)
			++(_g);
			HX_STACK_LINE(123)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(123)
			while((true)){
				HX_STACK_LINE(123)
				bool tmp2 = (_g1 < innerArray->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(123)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(123)
				if ((tmp3)){
					HX_STACK_LINE(123)
					break;
				}
				HX_STACK_LINE(123)
				int tmp4 = innerArray->__get(_g1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(123)
				int element = tmp4;		HX_STACK_VAR(element,"element");
				HX_STACK_LINE(123)
				++(_g1);
				HX_STACK_LINE(124)
				int tmp5 = element;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(124)
				result->push(tmp5);
			}
		}
	}
	HX_STACK_LINE(125)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxArrayUtil_obj,flatten2DArray_Int,return )

cpp::ArrayBase FlxArrayUtil_obj::setLength_flixel_group_FlxTypedGroup_T( cpp::ArrayBase array,int newLength){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","setLength_flixel_group_FlxTypedGroup_T",0x1139627b,"flixel.util.FlxArrayUtil.setLength_flixel_group_FlxTypedGroup_T","flixel/util/FlxArrayUtil.hx",16,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(newLength,"newLength")
	HX_STACK_LINE(17)
	bool tmp = (newLength < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	if ((tmp)){
		HX_STACK_LINE(18)
		return array;
	}
	HX_STACK_LINE(20)
	int oldLength = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(oldLength,"oldLength");
	HX_STACK_LINE(21)
	int tmp1 = (newLength - oldLength);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	int diff = tmp1;		HX_STACK_VAR(diff,"diff");
	HX_STACK_LINE(22)
	bool tmp2 = (diff >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	if ((tmp2)){
		HX_STACK_LINE(23)
		return array;
	}
	HX_STACK_LINE(28)
	int tmp3 = diff;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	int tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(28)
	diff = tmp4;
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(29)
		while((true)){
			HX_STACK_LINE(29)
			bool tmp5 = (_g < diff);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(29)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(29)
			if ((tmp6)){
				HX_STACK_LINE(29)
				break;
			}
			HX_STACK_LINE(29)
			int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(29)
			int i = tmp7;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(30)
			array->__Field(HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"), hx::paccDynamic )();
		}
	}
	HX_STACK_LINE(33)
	return array;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,setLength_flixel_group_FlxTypedGroup_T,return )

Array< ::Dynamic > FlxArrayUtil_obj::fastSplice_flixel_system_debug_Window( Array< ::Dynamic > array,::flixel::_system::debug::Window element){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","fastSplice_flixel_system_debug_Window",0x3304bcc5,"flixel.util.FlxArrayUtil.fastSplice_flixel_system_debug_Window","flixel/util/FlxArrayUtil.hx",47,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(element,"element")
	HX_STACK_LINE(48)
	::flixel::_system::debug::Window tmp = element;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	int tmp1 = array->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	int index = tmp1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(49)
	bool tmp2 = (index != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	if ((tmp2)){
		HX_STACK_LINE(50)
		int tmp3 = (array->length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		::flixel::_system::debug::Window tmp4 = array->__get(tmp3).StaticCast< ::flixel::_system::debug::Window >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		array[index] = tmp4;
		HX_STACK_LINE(50)
		array->pop().StaticCast< ::flixel::_system::debug::Window >();
		HX_STACK_LINE(50)
		return array;
	}
	HX_STACK_LINE(51)
	return array;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,fastSplice_flixel_system_debug_Window,return )

Array< ::Dynamic > FlxArrayUtil_obj::fastSplice_flixel_system_debug_watch_WatchEntry( Array< ::Dynamic > array,::flixel::_system::debug::watch::WatchEntry element){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","fastSplice_flixel_system_debug_watch_WatchEntry",0xa8936be8,"flixel.util.FlxArrayUtil.fastSplice_flixel_system_debug_watch_WatchEntry","flixel/util/FlxArrayUtil.hx",47,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(element,"element")
	HX_STACK_LINE(48)
	::flixel::_system::debug::watch::WatchEntry tmp = element;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	int tmp1 = array->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	int index = tmp1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(49)
	bool tmp2 = (index != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	if ((tmp2)){
		HX_STACK_LINE(50)
		int tmp3 = (array->length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		::flixel::_system::debug::watch::WatchEntry tmp4 = array->__get(tmp3).StaticCast< ::flixel::_system::debug::watch::WatchEntry >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		array[index] = tmp4;
		HX_STACK_LINE(50)
		array->pop().StaticCast< ::flixel::_system::debug::watch::WatchEntry >();
		HX_STACK_LINE(50)
		return array;
	}
	HX_STACK_LINE(51)
	return array;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,fastSplice_flixel_system_debug_watch_WatchEntry,return )

Array< ::Dynamic > FlxArrayUtil_obj::fastSplice_flixel_tweens_FlxTween( Array< ::Dynamic > array,::flixel::tweens::FlxTween element){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","fastSplice_flixel_tweens_FlxTween",0x134d3569,"flixel.util.FlxArrayUtil.fastSplice_flixel_tweens_FlxTween","flixel/util/FlxArrayUtil.hx",47,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(element,"element")
	HX_STACK_LINE(48)
	::flixel::tweens::FlxTween tmp = element;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	int tmp1 = array->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	int index = tmp1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(49)
	bool tmp2 = (index != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	if ((tmp2)){
		HX_STACK_LINE(50)
		int tmp3 = (array->length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		::flixel::tweens::FlxTween tmp4 = array->__get(tmp3).StaticCast< ::flixel::tweens::FlxTween >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		array[index] = tmp4;
		HX_STACK_LINE(50)
		array->pop().StaticCast< ::flixel::tweens::FlxTween >();
		HX_STACK_LINE(50)
		return array;
	}
	HX_STACK_LINE(51)
	return array;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,fastSplice_flixel_tweens_FlxTween,return )

Array< ::Dynamic > FlxArrayUtil_obj::fastSplice_flixel_util_FlxTimer( Array< ::Dynamic > array,::flixel::util::FlxTimer element){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","fastSplice_flixel_util_FlxTimer",0x46676ae9,"flixel.util.FlxArrayUtil.fastSplice_flixel_util_FlxTimer","flixel/util/FlxArrayUtil.hx",47,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(element,"element")
	HX_STACK_LINE(48)
	::flixel::util::FlxTimer tmp = element;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	int tmp1 = array->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	int index = tmp1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(49)
	bool tmp2 = (index != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	if ((tmp2)){
		HX_STACK_LINE(50)
		int tmp3 = (array->length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		::flixel::util::FlxTimer tmp4 = array->__get(tmp3).StaticCast< ::flixel::util::FlxTimer >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		array[index] = tmp4;
		HX_STACK_LINE(50)
		array->pop().StaticCast< ::flixel::util::FlxTimer >();
		HX_STACK_LINE(50)
		return array;
	}
	HX_STACK_LINE(51)
	return array;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,fastSplice_flixel_util_FlxTimer,return )

cpp::ArrayBase FlxArrayUtil_obj::swapAndPop_fastSplice_T( cpp::ArrayBase array,int index){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","swapAndPop_fastSplice_T",0xfdfa2694,"flixel.util.FlxArrayUtil.swapAndPop_fastSplice_T","flixel/util/FlxArrayUtil.hx",77,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(78)
	int tmp = (array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) - (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	Dynamic tmp1 = array->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	hx::IndexRef((array).mPtr,index) = tmp1;
	HX_STACK_LINE(79)
	array->__Field(HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"), hx::paccDynamic )();
	HX_STACK_LINE(80)
	return array;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,swapAndPop_fastSplice_T,return )

cpp::ArrayBase FlxArrayUtil_obj::clearArray( cpp::ArrayBase array,hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","clearArray",0xac755a77,"flixel.util.FlxArrayUtil.clearArray","flixel/util/FlxArrayUtil.hx",92,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(93)
		bool tmp = (array == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		if ((tmp)){
			HX_STACK_LINE(94)
			return array;
		}
		HX_STACK_LINE(96)
		bool tmp1 = recursive;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(96)
		if ((tmp1)){
			HX_STACK_LINE(98)
			while((true)){
				HX_STACK_LINE(98)
				bool tmp2 = (array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(98)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(98)
				if ((tmp3)){
					HX_STACK_LINE(98)
					break;
				}
				HX_STACK_LINE(100)
				Dynamic tmp4 = array->__Field(HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(100)
				Dynamic thing = tmp4;		HX_STACK_VAR(thing,"thing");
				HX_STACK_LINE(101)
				Dynamic tmp5 = thing;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(101)
				bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(101)
				if ((tmp6)){
					HX_STACK_LINE(102)
					bool tmp7 = recursive;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(102)
					::flixel::util::FlxArrayUtil_obj::clearArray(array,tmp7);
				}
			}
		}
		else{
			HX_STACK_LINE(107)
			while((true)){
				HX_STACK_LINE(107)
				bool tmp2 = (array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(107)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(107)
				if ((tmp3)){
					HX_STACK_LINE(107)
					break;
				}
				HX_STACK_LINE(108)
				array->__Field(HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"), hx::paccDynamic )();
			}
		}
		HX_STACK_LINE(111)
		return array;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,clearArray,return )

bool FlxArrayUtil_obj::equals( cpp::ArrayBase array1,cpp::ArrayBase array2){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","equals",0x2985aa6a,"flixel.util.FlxArrayUtil.equals","flixel/util/FlxArrayUtil.hx",133,0xa0dc755b)
	HX_STACK_ARG(array1,"array1")
	HX_STACK_ARG(array2,"array2")
	HX_STACK_LINE(134)
	bool tmp = (array1 == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(134)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(134)
	if ((tmp)){
		HX_STACK_LINE(134)
		tmp1 = (array2 == null());
	}
	else{
		HX_STACK_LINE(134)
		tmp1 = false;
	}
	HX_STACK_LINE(134)
	if ((tmp1)){
		HX_STACK_LINE(135)
		return true;
	}
	HX_STACK_LINE(136)
	bool tmp2 = (array1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(136)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(136)
	if ((tmp2)){
		HX_STACK_LINE(136)
		tmp3 = (array2 != null());
	}
	else{
		HX_STACK_LINE(136)
		tmp3 = false;
	}
	HX_STACK_LINE(136)
	if ((tmp3)){
		HX_STACK_LINE(137)
		return false;
	}
	HX_STACK_LINE(138)
	bool tmp4 = (array1 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(138)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(138)
	if ((tmp4)){
		HX_STACK_LINE(138)
		tmp5 = (array2 == null());
	}
	else{
		HX_STACK_LINE(138)
		tmp5 = false;
	}
	HX_STACK_LINE(138)
	if ((tmp5)){
		HX_STACK_LINE(139)
		return false;
	}
	HX_STACK_LINE(140)
	bool tmp6 = (array1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) != array2->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(140)
	if ((tmp6)){
		HX_STACK_LINE(141)
		return false;
	}
	HX_STACK_LINE(143)
	{
		HX_STACK_LINE(143)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(143)
		int _g = array1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(143)
		while((true)){
			HX_STACK_LINE(143)
			bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(143)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(143)
			if ((tmp8)){
				HX_STACK_LINE(143)
				break;
			}
			HX_STACK_LINE(143)
			int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(143)
			int i = tmp9;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(144)
			Dynamic tmp10 = array1->__GetItem(i);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(144)
			Dynamic tmp11 = array2->__GetItem(i);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(144)
			bool tmp12 = (tmp10 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(144)
			if ((tmp12)){
				HX_STACK_LINE(145)
				return false;
			}
		}
	}
	HX_STACK_LINE(147)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,equals,return )

Dynamic FlxArrayUtil_obj::last( cpp::ArrayBase array){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","last",0x58e5d5c1,"flixel.util.FlxArrayUtil.last","flixel/util/FlxArrayUtil.hx",154,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(155)
	bool tmp = (array == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(155)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(155)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(155)
	if ((tmp1)){
		HX_STACK_LINE(155)
		tmp2 = (array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) == (int)0);
	}
	else{
		HX_STACK_LINE(155)
		tmp2 = true;
	}
	HX_STACK_LINE(155)
	if ((tmp2)){
		HX_STACK_LINE(156)
		return null();
	}
	HX_STACK_LINE(157)
	int tmp3 = (array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(157)
	Dynamic tmp4 = array->__GetItem(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(157)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxArrayUtil_obj,last,return )

bool FlxArrayUtil_obj::contains( cpp::ArrayBase array,Dynamic element){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","contains",0x2d55b70a,"flixel.util.FlxArrayUtil.contains","flixel/util/FlxArrayUtil.hx",161,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(element,"element")
	HX_STACK_LINE(162)
	Dynamic tmp = element;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	int tmp1 = array->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(162)
	bool tmp2 = (tmp1 != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(162)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,contains,return )


FlxArrayUtil_obj::FlxArrayUtil_obj()
{
}

bool FlxArrayUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { outValue = last_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { outValue = equals_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { outValue = contains_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearArray") ) { outValue = clearArray_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setLength_Int") ) { outValue = setLength_Int_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"flatten2DArray_Int") ) { outValue = flatten2DArray_Int_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"swapAndPop_fastSplice_T") ) { outValue = swapAndPop_fastSplice_T_dyn(); return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"fastSplice_flixel_util_FlxTimer") ) { outValue = fastSplice_flixel_util_FlxTimer_dyn(); return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"fastSplice_flixel_tweens_FlxTween") ) { outValue = fastSplice_flixel_tweens_FlxTween_dyn(); return true;  }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"fastSplice_flixel_system_debug_Window") ) { outValue = fastSplice_flixel_system_debug_Window_dyn(); return true;  }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"setLength_flixel_group_FlxTypedGroup_T") ) { outValue = setLength_flixel_group_FlxTypedGroup_T_dyn(); return true;  }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"setLength_flixel_system_replay_FrameRecord") ) { outValue = setLength_flixel_system_replay_FrameRecord_dyn(); return true;  }
		break;
	case 47:
		if (HX_FIELD_EQ(inName,"fastSplice_flixel_system_debug_watch_WatchEntry") ) { outValue = fastSplice_flixel_system_debug_watch_WatchEntry_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxArrayUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxArrayUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxArrayUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("setLength_flixel_system_replay_FrameRecord","\x0a","\x15","\xae","\x16"),
	HX_HCSTRING("setLength_Int","\xf8","\x47","\x06","\xcb"),
	HX_HCSTRING("flatten2DArray_Int","\x73","\x84","\x55","\x08"),
	HX_HCSTRING("setLength_flixel_group_FlxTypedGroup_T","\x50","\x1a","\xe2","\x41"),
	HX_HCSTRING("fastSplice_flixel_system_debug_Window","\x90","\x96","\x7a","\xa9"),
	HX_HCSTRING("fastSplice_flixel_system_debug_watch_WatchEntry","\x73","\x91","\x91","\x5c"),
	HX_HCSTRING("fastSplice_flixel_tweens_FlxTween","\xb4","\x8d","\xa9","\xb9"),
	HX_HCSTRING("fastSplice_flixel_util_FlxTimer","\x74","\x8a","\x94","\x6f"),
	HX_HCSTRING("swapAndPop_fastSplice_T","\x1f","\x43","\x97","\xd1"),
	HX_HCSTRING("clearArray","\xcc","\xac","\x99","\xfa"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("last","\x56","\x0a","\xad","\x47"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	::String(null()) };

void FlxArrayUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxArrayUtil","\xe3","\x4c","\x85","\x6b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxArrayUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxArrayUtil_obj >;
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
} // end namespace util
