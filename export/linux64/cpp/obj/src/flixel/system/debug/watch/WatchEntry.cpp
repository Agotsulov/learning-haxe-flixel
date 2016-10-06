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
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#include <flixel/system/debug/DebuggerUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicCloseButton
#include <flixel/system/debug/GraphicCloseButton.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_EditableTextField
#include <flixel/system/debug/watch/EditableTextField.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntry
#include <flixel/system/debug/watch/WatchEntry.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntryData
#include <flixel/system/debug/watch/WatchEntryData.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
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
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFieldAutoSize
#include <openfl/_legacy/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
namespace flixel{
namespace _system{
namespace debug{
namespace watch{

Void WatchEntry_obj::__construct(::String displayName,::flixel::_system::debug::watch::WatchEntryData data,Dynamic removeEntry)
{
HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","new",0x96ec41fc,"flixel.system.debug.watch.WatchEntry.new","flixel/system/debug/watch/WatchEntry.hx",32,0x2bd112d2)
HX_STACK_THIS(this)
HX_STACK_ARG(displayName,"displayName")
HX_STACK_ARG(data,"data")
HX_STACK_ARG(removeEntry,"removeEntry")
{
	HX_STACK_LINE(33)
	super::__construct();
	HX_STACK_LINE(35)
	this->displayName = displayName;
	HX_STACK_LINE(36)
	this->data = data;
	HX_STACK_LINE(38)
	::String tmp = ::flixel::_system::FlxAssets_obj::FONT_DEBUGGER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	int tmp1 = this->getTextColor();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	::openfl::_legacy::text::TextFormat tmp2 = ::openfl::_legacy::text::TextFormat_obj::__new(tmp,(int)12,tmp1,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	this->defaultFormat = tmp2;
	HX_STACK_LINE(39)
	::openfl::_legacy::text::TextField tmp3 = ::flixel::_system::debug::DebuggerUtil_obj::createTextField(null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(39)
	::openfl::_legacy::text::TextField tmp4 = this->initTextField(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(39)
	this->nameText = tmp4;
	HX_STACK_LINE(41)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(41)
	switch( (int)(data->__Index())){
		case (int)0: {
			HX_STACK_LINE(41)
			tmp5 = true;
		}
		;break;
		default: {
			HX_STACK_LINE(41)
			tmp5 = false;
		}
	}
	HX_STACK_LINE(41)
	::openfl::_legacy::text::TextFormat tmp6 = this->defaultFormat;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(41)
	Dynamic tmp7 = this->submitValue_dyn();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(41)
	::flixel::_system::debug::watch::EditableTextField tmp8 = ::flixel::_system::debug::watch::EditableTextField_obj::__new(tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(40)
	::flixel::_system::debug::watch::EditableTextField tmp9 = ::flixel::_system::debug::DebuggerUtil_obj::initTextField(tmp8,null(),null(),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(40)
	::flixel::_system::debug::watch::EditableTextField tmp10 = this->initTextField(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(40)
	this->valueText = tmp10;
	HX_STACK_LINE(43)
	this->updateName();
	HX_STACK_LINE(45)
	::flixel::_system::debug::GraphicCloseButton tmp11 = ::flixel::_system::debug::GraphicCloseButton_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(45)
	Dynamic tmp12 = removeEntry;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(45)
	Dynamic tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		Dynamic f = tmp12;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(45)
		::flixel::_system::debug::watch::WatchEntry a1 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(a1,"a1");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::flixel::_system::debug::watch::WatchEntry,a1,Dynamic,f)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","flixel/system/debug/watch/WatchEntry.hx",45,0x2bd112d2)
			{
				HX_STACK_LINE(45)
				::flixel::_system::debug::watch::WatchEntry tmp14 = a1;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(45)
				f(tmp14).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(45)
		tmp13 =  Dynamic(new _Function_2_1(a1,f));
	}
	HX_STACK_LINE(45)
	::flixel::_system::ui::FlxSystemButton tmp14 = ::flixel::_system::ui::FlxSystemButton_obj::__new(tmp11,tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(45)
	::flixel::_system::ui::FlxSystemButton tmp15 = this->removeButton = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(45)
	this->addChild(tmp15);
	HX_STACK_LINE(46)
	::flixel::_system::ui::FlxSystemButton tmp16 = this->removeButton;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(46)
	::flixel::_system::ui::FlxSystemButton tmp17 = this->removeButton;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(46)
	Float tmp18 = tmp17->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(46)
	Float tmp19 = ((int)20 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(46)
	Float tmp20 = (Float(tmp19) / Float((int)2));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(46)
	tmp16->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp20);
	HX_STACK_LINE(47)
	::flixel::_system::ui::FlxSystemButton tmp21 = this->removeButton;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(47)
	tmp21->__Field(HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"), hx::paccDynamic )(((Float)0.3));
}
;
	return null();
}

//WatchEntry_obj::~WatchEntry_obj() { }

Dynamic WatchEntry_obj::__CreateEmpty() { return  new WatchEntry_obj; }
hx::ObjectPtr< WatchEntry_obj > WatchEntry_obj::__new(::String displayName,::flixel::_system::debug::watch::WatchEntryData data,Dynamic removeEntry)
{  hx::ObjectPtr< WatchEntry_obj > _result_ = new WatchEntry_obj();
	_result_->__construct(displayName,data,removeEntry);
	return _result_;}

Dynamic WatchEntry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WatchEntry_obj > _result_ = new WatchEntry_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

hx::Object *WatchEntry_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

WatchEntry_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< WatchEntry_obj >(this); }
int WatchEntry_obj::getTextColor( ){
	HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","getTextColor",0xd55318e4,"flixel.system.debug.watch.WatchEntry.getTextColor","flixel/system/debug/watch/WatchEntry.hx",51,0x2bd112d2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(52)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	{
		HX_STACK_LINE(52)
		::flixel::_system::debug::watch::WatchEntryData tmp1 = this->data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		::flixel::_system::debug::watch::WatchEntryData _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(52)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(54)
				tmp = (int)16777215;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(55)
				tmp = (int)10875373;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(56)
				tmp = (int)12910211;
			}
			;break;
		}
	}
	HX_STACK_LINE(52)
	return tmp;
	HX_STACK_LINE(52)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,getTextColor,return )

Dynamic WatchEntry_obj::initTextField( Dynamic textField){
	HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","initTextField",0x8df9f439,"flixel.system.debug.watch.WatchEntry.initTextField","flixel/system/debug/watch/WatchEntry.hx",61,0x2bd112d2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_LINE(62)
	textField->__Field(HX_HCSTRING("set_selectable","\x53","\x27","\x40","\x5a"), hx::paccDynamic )(true);
	HX_STACK_LINE(63)
	::openfl::_legacy::text::TextFormat tmp = this->defaultFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	textField->__Field(HX_HCSTRING("set_defaultTextFormat","\xc8","\x98","\x97","\xdd"), hx::paccDynamic )(tmp);
	HX_STACK_LINE(64)
	textField->__Field(HX_HCSTRING("set_autoSize","\x4d","\x67","\x8c","\xf9"), hx::paccDynamic )(::openfl::_legacy::text::TextFieldAutoSize_obj::NONE);
	HX_STACK_LINE(65)
	textField->__Field(HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"), hx::paccDynamic )((int)20);
	HX_STACK_LINE(66)
	Dynamic tmp1 = textField;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(66)
	this->addChild(tmp1);
	HX_STACK_LINE(67)
	Dynamic tmp2 = textField;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(67)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(WatchEntry_obj,initTextField,return )

Void WatchEntry_obj::updateSize( Float nameWidth,Float windowWidth){
{
		HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","updateSize",0x108dc54e,"flixel.system.debug.watch.WatchEntry.updateSize","flixel/system/debug/watch/WatchEntry.hx",71,0x2bd112d2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(nameWidth,"nameWidth")
		HX_STACK_ARG(windowWidth,"windowWidth")
		HX_STACK_LINE(72)
		Float tmp = windowWidth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		::flixel::_system::ui::FlxSystemButton tmp1 = this->removeButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		Float tmp2 = tmp1->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		Float tmp3 = (tmp - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(72)
		Float tmp4 = (tmp3 - (int)4);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(72)
		Float textWidth = tmp4;		HX_STACK_VAR(textWidth,"textWidth");
		HX_STACK_LINE(74)
		::openfl::_legacy::text::TextField tmp5 = this->nameText;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(74)
		Float tmp6 = nameWidth;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(74)
		tmp5->set_width(tmp6);
		HX_STACK_LINE(75)
		::flixel::_system::debug::watch::EditableTextField tmp7 = this->valueText;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(75)
		Float tmp8 = (nameWidth + (int)4);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(75)
		tmp7->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp8);
		HX_STACK_LINE(76)
		::flixel::_system::debug::watch::EditableTextField tmp9 = this->valueText;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(76)
		Float tmp10 = (textWidth - nameWidth);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(76)
		Float tmp11 = (tmp10 - (int)4);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(76)
		tmp9->__Field(HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"), hx::paccDynamic )(tmp11);
		HX_STACK_LINE(77)
		::flixel::_system::ui::FlxSystemButton tmp12 = this->removeButton;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(77)
		Float tmp13 = textWidth;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(77)
		tmp12->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp13);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(WatchEntry_obj,updateSize,(void))

Void WatchEntry_obj::updateName( ){
{
		HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","updateName",0x0d3996d8,"flixel.system.debug.watch.WatchEntry.updateName","flixel/system/debug/watch/WatchEntry.hx",81,0x2bd112d2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(82)
		::String tmp = this->displayName;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		if ((tmp1)){
			HX_STACK_LINE(84)
			::String tmp2 = this->displayName;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(84)
			this->setNameText(tmp2);
			HX_STACK_LINE(85)
			return null();
		}
		HX_STACK_LINE(88)
		{
			HX_STACK_LINE(88)
			::flixel::_system::debug::watch::WatchEntryData tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(88)
			::flixel::_system::debug::watch::WatchEntryData _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(88)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(88)
					::String tmp3 = (::flixel::_system::debug::watch::WatchEntryData(_g))->__Param(1);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(88)
					::String field = tmp3;		HX_STACK_VAR(field,"field");
					HX_STACK_LINE(88)
					Dynamic tmp4 = (::flixel::_system::debug::watch::WatchEntryData(_g))->__Param(0);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(88)
					Dynamic object = tmp4;		HX_STACK_VAR(object,"object");
					HX_STACK_LINE(90)
					{
						HX_STACK_LINE(91)
						::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(91)
						{
							HX_STACK_LINE(91)
							::hx::Class cl;		HX_STACK_VAR(cl,"cl");
							HX_STACK_LINE(91)
							Dynamic tmp6 = object;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(91)
							bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(91)
							if ((tmp7)){
								HX_STACK_LINE(91)
								cl = ((::hx::Class)(object));
							}
							else{
								HX_STACK_LINE(91)
								Dynamic tmp8 = object;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(91)
								::hx::Class tmp9 = ::Type_obj::getClass(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(91)
								cl = tmp9;
							}
							HX_STACK_LINE(91)
							::hx::Class tmp8 = cl;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(91)
							::String tmp9 = ::Type_obj::getClassName(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(91)
							::String s = tmp9;		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(91)
							bool tmp10 = (s != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(91)
							if ((tmp10)){
								HX_STACK_LINE(91)
								::String tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(91)
								::String tmp12 = ::StringTools_obj::replace(tmp11,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(91)
								s = tmp12;
								HX_STACK_LINE(91)
								{
									HX_STACK_LINE(91)
									int tmp13 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(91)
									int tmp14 = (tmp13 + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(91)
									::String tmp15 = s.substr(tmp14,null());		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(91)
									s = tmp15;
								}
							}
							HX_STACK_LINE(91)
							tmp5 = s;
						}
						HX_STACK_LINE(91)
						::String tmp6 = (tmp5 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(91)
						::String tmp7 = field;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(91)
						::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(91)
						this->setNameText(tmp8);
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(88)
					::String tmp3 = (::flixel::_system::debug::watch::WatchEntryData(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(88)
					::String expression = tmp3;		HX_STACK_VAR(expression,"expression");
					HX_STACK_LINE(92)
					{
						HX_STACK_LINE(93)
						::String tmp4 = expression;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(93)
						this->setNameText(tmp4);
					}
				}
				;break;
				case (int)1: {
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,updateName,(void))

Void WatchEntry_obj::setNameText( ::String name){
{
		HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","setNameText",0x82ef23f6,"flixel.system.debug.watch.WatchEntry.setNameText","flixel/system/debug/watch/WatchEntry.hx",99,0x2bd112d2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(100)
		::openfl::_legacy::text::TextField tmp = this->nameText;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(100)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(100)
		tmp->set_text(tmp1);
		HX_STACK_LINE(101)
		::openfl::_legacy::text::TextField tmp2 = this->nameText;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(101)
		Float tmp3 = tmp2->get_textWidth();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(101)
		Float tmp4 = (tmp3 + (int)4);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(101)
		Float currentWidth = tmp4;		HX_STACK_VAR(currentWidth,"currentWidth");
		HX_STACK_LINE(102)
		::openfl::_legacy::text::TextField tmp5 = this->nameText;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(102)
		Float tmp6 = currentWidth;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(102)
		Float tmp7 = ::Math_obj::min(tmp6,(int)125);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(102)
		tmp5->set_width(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WatchEntry_obj,setNameText,(void))

::String WatchEntry_obj::getValue( ){
	HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","getValue",0xc769c7df,"flixel.system.debug.watch.WatchEntry.getValue","flixel/system/debug/watch/WatchEntry.hx",106,0x2bd112d2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(107)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(107)
	{
		HX_STACK_LINE(107)
		::flixel::_system::debug::watch::WatchEntryData tmp1 = this->data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		::flixel::_system::debug::watch::WatchEntryData _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(107)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(107)
				::String tmp2 = (::flixel::_system::debug::watch::WatchEntryData(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(107)
				::String field = tmp2;		HX_STACK_VAR(field,"field");
				HX_STACK_LINE(107)
				Dynamic tmp3 = (::flixel::_system::debug::watch::WatchEntryData(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(107)
				Dynamic object = tmp3;		HX_STACK_VAR(object,"object");
				HX_STACK_LINE(109)
				{
					HX_STACK_LINE(110)
					Dynamic tmp4 = object;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(110)
					::String tmp5 = field;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(110)
					tmp = ::Reflect_obj::getProperty(tmp4,tmp5);
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(107)
				::String tmp2 = (::flixel::_system::debug::watch::WatchEntryData(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(107)
				::String expression = tmp2;		HX_STACK_VAR(expression,"expression");
				HX_STACK_LINE(115)
				tmp = HX_HCSTRING("hscript is not installed","\x84","\x84","\xf9","\x28");
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(107)
				::String tmp2 = (::flixel::_system::debug::watch::WatchEntryData(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(107)
				::String value = tmp2;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(118)
				tmp = value;
			}
			;break;
		}
	}
	HX_STACK_LINE(107)
	Dynamic value = tmp;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(121)
	Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(121)
	bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::Float >());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(121)
	if ((tmp2)){
		HX_STACK_LINE(122)
		Float tmp3 = ((Float)(value));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(122)
		::flixel::_system::frontEnds::DebuggerFrontEnd tmp4 = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(122)
		int tmp5 = tmp4->__Field(HX_HCSTRING("precision","\x3e","\xd5","\xc7","\x80"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(122)
		Float tmp6 = ::flixel::math::FlxMath_obj::roundDecimal(tmp3,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(122)
		value = tmp6;
	}
	HX_STACK_LINE(123)
	Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(123)
	::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(123)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,getValue,return )

Void WatchEntry_obj::submitValue( ::String value){
{
		HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","submitValue",0x1e7eadd5,"flixel.system.debug.watch.WatchEntry.submitValue","flixel/system/debug/watch/WatchEntry.hx",128,0x2bd112d2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(128)
		{
			HX_STACK_LINE(128)
			::flixel::_system::debug::watch::WatchEntryData tmp = this->data;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(128)
			::flixel::_system::debug::watch::WatchEntryData _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(128)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(128)
					::String tmp1 = (::flixel::_system::debug::watch::WatchEntryData(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(128)
					::String field = tmp1;		HX_STACK_VAR(field,"field");
					HX_STACK_LINE(128)
					Dynamic tmp2 = (::flixel::_system::debug::watch::WatchEntryData(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(128)
					Dynamic object = tmp2;		HX_STACK_VAR(object,"object");
					HX_STACK_LINE(130)
					{
						HX_STACK_LINE(131)
						Dynamic tmp3 = object;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(131)
						::String tmp4 = field;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(131)
						::String tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(131)
						::Reflect_obj::setProperty(tmp3,tmp4,tmp5);
					}
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WatchEntry_obj,submitValue,(void))

Void WatchEntry_obj::updateValue( ){
{
		HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","updateValue",0x205e5644,"flixel.system.debug.watch.WatchEntry.updateValue","flixel/system/debug/watch/WatchEntry.hx",137,0x2bd112d2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		::flixel::_system::debug::watch::EditableTextField tmp = this->valueText;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(138)
		bool tmp1 = tmp->__Field(HX_HCSTRING("isEditing","\x4e","\x22","\xb6","\x29"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(138)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(138)
		if ((tmp2)){
			HX_STACK_LINE(139)
			::flixel::_system::debug::watch::EditableTextField tmp3 = this->valueText;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(139)
			::String tmp4 = this->getValue();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(139)
			tmp3->__Field(HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"), hx::paccDynamic )(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,updateValue,(void))

Float WatchEntry_obj::getNameWidth( ){
	HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","getNameWidth",0xb6209b29,"flixel.system.debug.watch.WatchEntry.getNameWidth","flixel/system/debug/watch/WatchEntry.hx",143,0x2bd112d2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(144)
	::openfl::_legacy::text::TextField tmp = this->nameText;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(144)
	Float tmp1 = tmp->get_width();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(144)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,getNameWidth,return )

Float WatchEntry_obj::getMinWidth( ){
	HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","getMinWidth",0xf09b5366,"flixel.system.debug.watch.WatchEntry.getMinWidth","flixel/system/debug/watch/WatchEntry.hx",148,0x2bd112d2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(149)
	::flixel::_system::debug::watch::EditableTextField tmp = this->valueText;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(149)
	Float tmp1 = tmp->__Field(HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(149)
	int tmp2 = (int)8;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(149)
	Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(149)
	::flixel::_system::ui::FlxSystemButton tmp4 = this->removeButton;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(149)
	Float tmp5 = tmp4->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(149)
	Float tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(149)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,getMinWidth,return )

Void WatchEntry_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","destroy",0x012d9c96,"flixel.system.debug.watch.WatchEntry.destroy","flixel/system/debug/watch/WatchEntry.hx",153,0x2bd112d2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(154)
		::openfl::_legacy::text::TextField tmp = this->nameText;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(154)
		::openfl::_legacy::text::TextField tmp1 = ::flixel::util::FlxDestroyUtil_obj::removeChild(hx::ObjectPtr<OBJ_>(this),tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(154)
		this->nameText = tmp1;
		HX_STACK_LINE(155)
		::flixel::_system::debug::watch::EditableTextField tmp2 = this->valueText;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(155)
		::flixel::util::FlxDestroyUtil_obj::destroy(tmp2);
		HX_STACK_LINE(156)
		::flixel::_system::debug::watch::EditableTextField tmp3 = this->valueText;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(156)
		::flixel::_system::debug::watch::EditableTextField tmp4 = ::flixel::util::FlxDestroyUtil_obj::removeChild(hx::ObjectPtr<OBJ_>(this),tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(156)
		this->valueText = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,destroy,(void))

int WatchEntry_obj::GUTTER;

int WatchEntry_obj::TEXT_HEIGHT;

int WatchEntry_obj::MAX_NAME_WIDTH;


WatchEntry_obj::WatchEntry_obj()
{
}

void WatchEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WatchEntry);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(displayName,"displayName");
	HX_MARK_MEMBER_NAME(nameText,"nameText");
	HX_MARK_MEMBER_NAME(valueText,"valueText");
	HX_MARK_MEMBER_NAME(removeButton,"removeButton");
	HX_MARK_MEMBER_NAME(defaultFormat,"defaultFormat");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WatchEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(displayName,"displayName");
	HX_VISIT_MEMBER_NAME(nameText,"nameText");
	HX_VISIT_MEMBER_NAME(valueText,"valueText");
	HX_VISIT_MEMBER_NAME(removeButton,"removeButton");
	HX_VISIT_MEMBER_NAME(defaultFormat,"defaultFormat");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic WatchEntry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nameText") ) { return nameText; }
		if (HX_FIELD_EQ(inName,"getValue") ) { return getValue_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"valueText") ) { return valueText; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateSize") ) { return updateSize_dyn(); }
		if (HX_FIELD_EQ(inName,"updateName") ) { return updateName_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"displayName") ) { return displayName; }
		if (HX_FIELD_EQ(inName,"setNameText") ) { return setNameText_dyn(); }
		if (HX_FIELD_EQ(inName,"submitValue") ) { return submitValue_dyn(); }
		if (HX_FIELD_EQ(inName,"updateValue") ) { return updateValue_dyn(); }
		if (HX_FIELD_EQ(inName,"getMinWidth") ) { return getMinWidth_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"removeButton") ) { return removeButton; }
		if (HX_FIELD_EQ(inName,"getTextColor") ) { return getTextColor_dyn(); }
		if (HX_FIELD_EQ(inName,"getNameWidth") ) { return getNameWidth_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultFormat") ) { return defaultFormat; }
		if (HX_FIELD_EQ(inName,"initTextField") ) { return initTextField_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WatchEntry_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::flixel::_system::debug::watch::WatchEntryData >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nameText") ) { nameText=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"valueText") ) { valueText=inValue.Cast< ::flixel::_system::debug::watch::EditableTextField >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"displayName") ) { displayName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"removeButton") ) { removeButton=inValue.Cast< ::flixel::_system::ui::FlxSystemButton >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultFormat") ) { defaultFormat=inValue.Cast< ::openfl::_legacy::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WatchEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("displayName","\xad","\x11","\xf2","\x30"));
	outFields->push(HX_HCSTRING("nameText","\x98","\xec","\x80","\x49"));
	outFields->push(HX_HCSTRING("valueText","\xbe","\x84","\x7e","\x99"));
	outFields->push(HX_HCSTRING("removeButton","\x56","\xfd","\x0d","\x49"));
	outFields->push(HX_HCSTRING("defaultFormat","\xd8","\x62","\x07","\xf8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::_system::debug::watch::WatchEntryData*/ ,(int)offsetof(WatchEntry_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsString,(int)offsetof(WatchEntry_obj,displayName),HX_HCSTRING("displayName","\xad","\x11","\xf2","\x30")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(WatchEntry_obj,nameText),HX_HCSTRING("nameText","\x98","\xec","\x80","\x49")},
	{hx::fsObject /*::flixel::_system::debug::watch::EditableTextField*/ ,(int)offsetof(WatchEntry_obj,valueText),HX_HCSTRING("valueText","\xbe","\x84","\x7e","\x99")},
	{hx::fsObject /*::flixel::_system::ui::FlxSystemButton*/ ,(int)offsetof(WatchEntry_obj,removeButton),HX_HCSTRING("removeButton","\x56","\xfd","\x0d","\x49")},
	{hx::fsObject /*::openfl::_legacy::text::TextFormat*/ ,(int)offsetof(WatchEntry_obj,defaultFormat),HX_HCSTRING("defaultFormat","\xd8","\x62","\x07","\xf8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &WatchEntry_obj::GUTTER,HX_HCSTRING("GUTTER","\x1b","\xd3","\x2b","\x8c")},
	{hx::fsInt,(void *) &WatchEntry_obj::TEXT_HEIGHT,HX_HCSTRING("TEXT_HEIGHT","\x79","\xd0","\xdc","\x87")},
	{hx::fsInt,(void *) &WatchEntry_obj::MAX_NAME_WIDTH,HX_HCSTRING("MAX_NAME_WIDTH","\xcd","\x26","\x03","\x84")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("displayName","\xad","\x11","\xf2","\x30"),
	HX_HCSTRING("nameText","\x98","\xec","\x80","\x49"),
	HX_HCSTRING("valueText","\xbe","\x84","\x7e","\x99"),
	HX_HCSTRING("removeButton","\x56","\xfd","\x0d","\x49"),
	HX_HCSTRING("defaultFormat","\xd8","\x62","\x07","\xf8"),
	HX_HCSTRING("getTextColor","\x00","\x9e","\xa0","\xf2"),
	HX_HCSTRING("initTextField","\x9d","\xe7","\x80","\x14"),
	HX_HCSTRING("updateSize","\x6a","\x8b","\x08","\x05"),
	HX_HCSTRING("updateName","\xf4","\x5c","\xb4","\x01"),
	HX_HCSTRING("setNameText","\x5a","\xb6","\xe1","\x79"),
	HX_HCSTRING("getValue","\xfb","\x8e","\x8f","\x91"),
	HX_HCSTRING("submitValue","\x39","\x40","\x71","\x15"),
	HX_HCSTRING("updateValue","\xa8","\xe8","\x50","\x17"),
	HX_HCSTRING("getNameWidth","\x45","\x20","\x6e","\xd3"),
	HX_HCSTRING("getMinWidth","\xca","\xe5","\x8d","\xe7"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WatchEntry_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(WatchEntry_obj::GUTTER,"GUTTER");
	HX_MARK_MEMBER_NAME(WatchEntry_obj::TEXT_HEIGHT,"TEXT_HEIGHT");
	HX_MARK_MEMBER_NAME(WatchEntry_obj::MAX_NAME_WIDTH,"MAX_NAME_WIDTH");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WatchEntry_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(WatchEntry_obj::GUTTER,"GUTTER");
	HX_VISIT_MEMBER_NAME(WatchEntry_obj::TEXT_HEIGHT,"TEXT_HEIGHT");
	HX_VISIT_MEMBER_NAME(WatchEntry_obj::MAX_NAME_WIDTH,"MAX_NAME_WIDTH");
};

#endif

hx::Class WatchEntry_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("GUTTER","\x1b","\xd3","\x2b","\x8c"),
	HX_HCSTRING("TEXT_HEIGHT","\x79","\xd0","\xdc","\x87"),
	HX_HCSTRING("MAX_NAME_WIDTH","\xcd","\x26","\x03","\x84"),
	::String(null()) };

void WatchEntry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.watch.WatchEntry","\x0a","\xd4","\x34","\x19");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WatchEntry_obj >;
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

void WatchEntry_obj::__boot()
{
	GUTTER= (int)4;
	TEXT_HEIGHT= (int)20;
	MAX_NAME_WIDTH= (int)125;
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch
