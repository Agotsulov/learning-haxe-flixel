#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_EditableTextField
#include <flixel/system/debug/watch/EditableTextField.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl__legacy_events_KeyboardEvent
#include <openfl/_legacy/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
namespace flixel{
namespace _system{
namespace debug{
namespace watch{

Void EditableTextField_obj::__construct(bool allowEditing,::openfl::_legacy::text::TextFormat defaultFormat,Dynamic submitValue)
{
HX_STACK_FRAME("flixel.system.debug.watch.EditableTextField","new",0xaaedbff4,"flixel.system.debug.watch.EditableTextField.new","flixel/system/debug/watch/EditableTextField.hx",24,0xd7488fde)
HX_STACK_THIS(this)
HX_STACK_ARG(allowEditing,"allowEditing")
HX_STACK_ARG(defaultFormat,"defaultFormat")
HX_STACK_ARG(submitValue,"submitValue")
{
	HX_STACK_LINE(25)
	super::__construct();
	HX_STACK_LINE(26)
	this->allowEditing = allowEditing;
	HX_STACK_LINE(27)
	this->submitValue = submitValue;
	HX_STACK_LINE(28)
	this->defaultFormat = defaultFormat;
	HX_STACK_LINE(30)
	bool tmp = allowEditing;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	if ((tmp)){
		HX_STACK_LINE(32)
		::openfl::_legacy::text::TextFormat tmp1 = ::openfl::_legacy::text::TextFormat_obj::__new(defaultFormat->font,defaultFormat->size,(int)0,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		this->editFormat = tmp1;
		HX_STACK_LINE(34)
		::String tmp2 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_UP;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(34)
		Dynamic tmp3 = this->onKeyUp_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		this->addEventListener(tmp2,tmp3,null(),null(),null());
		HX_STACK_LINE(35)
		::String tmp4 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		Dynamic tmp5 = this->onKeyDown_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(35)
		this->addEventListener(tmp4,tmp5,null(),null(),null());
		HX_STACK_LINE(36)
		::String tmp6 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(36)
		Dynamic tmp7 = this->onMouseUp_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(36)
		this->addEventListener(tmp6,tmp7,null(),null(),null());
		HX_STACK_LINE(37)
		Dynamic tmp8 = this->onFocusLost_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(37)
		this->addEventListener(HX_HCSTRING("focusOut","\x96","\x6f","\x5e","\x11"),tmp8,null(),null(),null());
	}
}
;
	return null();
}

//EditableTextField_obj::~EditableTextField_obj() { }

Dynamic EditableTextField_obj::__CreateEmpty() { return  new EditableTextField_obj; }
hx::ObjectPtr< EditableTextField_obj > EditableTextField_obj::__new(bool allowEditing,::openfl::_legacy::text::TextFormat defaultFormat,Dynamic submitValue)
{  hx::ObjectPtr< EditableTextField_obj > _result_ = new EditableTextField_obj();
	_result_->__construct(allowEditing,defaultFormat,submitValue);
	return _result_;}

Dynamic EditableTextField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EditableTextField_obj > _result_ = new EditableTextField_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

hx::Object *EditableTextField_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

EditableTextField_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< EditableTextField_obj >(this); }
Void EditableTextField_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.watch.EditableTextField","destroy",0x8b91768e,"flixel.system.debug.watch.EditableTextField.destroy","flixel/system/debug/watch/EditableTextField.hx",42,0xd7488fde)
		HX_STACK_THIS(this)
		HX_STACK_LINE(43)
		bool tmp = this->allowEditing;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		if ((tmp)){
			HX_STACK_LINE(45)
			::String tmp1 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_UP;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(45)
			Dynamic tmp2 = this->onKeyUp_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(45)
			this->removeEventListener(tmp1,tmp2,null());
			HX_STACK_LINE(46)
			::String tmp3 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(46)
			Dynamic tmp4 = this->onKeyDown_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(46)
			this->removeEventListener(tmp3,tmp4,null());
			HX_STACK_LINE(47)
			::String tmp5 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(47)
			Dynamic tmp6 = this->onMouseUp_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(47)
			this->removeEventListener(tmp5,tmp6,null());
			HX_STACK_LINE(48)
			Dynamic tmp7 = this->onFocusLost_dyn();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(48)
			this->removeEventListener(HX_HCSTRING("focusOut","\x96","\x6f","\x5e","\x11"),tmp7,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EditableTextField_obj,destroy,(void))

Void EditableTextField_obj::onMouseUp( Dynamic _){
{
		HX_STACK_FRAME("flixel.system.debug.watch.EditableTextField","onMouseUp",0x4fbd8315,"flixel.system.debug.watch.EditableTextField.onMouseUp","flixel/system/debug/watch/EditableTextField.hx",54,0xd7488fde)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(54)
		this->setIsEditing(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EditableTextField_obj,onMouseUp,(void))

Void EditableTextField_obj::onKeyUp( ::openfl::_legacy::events::KeyboardEvent e){
{
		HX_STACK_FRAME("flixel.system.debug.watch.EditableTextField","onKeyUp",0xdc47a1cf,"flixel.system.debug.watch.EditableTextField.onKeyUp","flixel/system/debug/watch/EditableTextField.hx",59,0xd7488fde)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(59)
		int _g = e->keyCode;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(59)
		int tmp = _g;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		switch( (int)(tmp)){
			case (int)13: {
				HX_STACK_LINE(62)
				this->submit();
			}
			;break;
			case (int)27: {
				HX_STACK_LINE(64)
				this->setIsEditing(false);
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EditableTextField_obj,onKeyUp,(void))

Void EditableTextField_obj::onKeyDown( ::openfl::_legacy::events::KeyboardEvent e){
{
		HX_STACK_FRAME("flixel.system.debug.watch.EditableTextField","onKeyDown",0x2b91f8d6,"flixel.system.debug.watch.EditableTextField.onKeyDown","flixel/system/debug/watch/EditableTextField.hx",69,0xd7488fde)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(70)
		Float modifier = ((Float)1.0);		HX_STACK_VAR(modifier,"modifier");
		HX_STACK_LINE(71)
		bool tmp = e->altKey;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		if ((tmp)){
			HX_STACK_LINE(72)
			modifier = ((Float)0.1);
		}
		HX_STACK_LINE(73)
		bool tmp1 = e->shiftKey;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		if ((tmp1)){
			HX_STACK_LINE(74)
			modifier = ((Float)10.0);
		}
		HX_STACK_LINE(76)
		{
			HX_STACK_LINE(76)
			int _g = e->keyCode;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(76)
			int tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(76)
			switch( (int)(tmp2)){
				case (int)38: {
					HX_STACK_LINE(79)
					Float tmp3 = modifier;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(79)
					bool tmp4 = this->modifyNumericValue(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(79)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(79)
					if ((tmp5)){
						HX_STACK_LINE(80)
						this->setSelection((int)0,(int)0);
					}
				}
				;break;
				case (int)40: {
					HX_STACK_LINE(82)
					Float tmp3 = modifier;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(82)
					Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(82)
					bool tmp5 = this->modifyNumericValue(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(82)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(82)
					if ((tmp6)){
						HX_STACK_LINE(83)
						::String tmp7 = this->get_text();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(83)
						int tmp8 = tmp7.length;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(83)
						::String tmp9 = this->get_text();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(83)
						int tmp10 = tmp9.length;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(83)
						this->setSelection(tmp8,tmp10);
					}
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EditableTextField_obj,onKeyDown,(void))

bool EditableTextField_obj::modifyNumericValue( Float modifier){
	HX_STACK_FRAME("flixel.system.debug.watch.EditableTextField","modifyNumericValue",0x3f03abea,"flixel.system.debug.watch.EditableTextField.modifyNumericValue","flixel/system/debug/watch/EditableTextField.hx",88,0xd7488fde)
	HX_STACK_THIS(this)
	HX_STACK_ARG(modifier,"modifier")
	HX_STACK_LINE(89)
	::String tmp = this->get_text();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	Float tmp1 = ::Std_obj::parseFloat(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	Float value = tmp1;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(90)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(90)
	bool tmp3 = ::Math_obj::isNaN(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(90)
	if ((tmp3)){
		HX_STACK_LINE(91)
		return false;
	}
	HX_STACK_LINE(93)
	hx::AddEq(value,modifier);
	HX_STACK_LINE(94)
	Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(94)
	::flixel::_system::frontEnds::DebuggerFrontEnd tmp5 = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(94)
	int tmp6 = tmp5->__Field(HX_HCSTRING("precision","\x3e","\xd5","\xc7","\x80"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(94)
	Float tmp7 = ::flixel::math::FlxMath_obj::roundDecimal(tmp4,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(94)
	value = tmp7;
	HX_STACK_LINE(95)
	Float tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(95)
	::String tmp9 = ::Std_obj::string(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(95)
	this->set_text(tmp9);
	HX_STACK_LINE(96)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(EditableTextField_obj,modifyNumericValue,return )

Void EditableTextField_obj::onFocusLost( Dynamic _){
{
		HX_STACK_FRAME("flixel.system.debug.watch.EditableTextField","onFocusLost",0x01b78851,"flixel.system.debug.watch.EditableTextField.onFocusLost","flixel/system/debug/watch/EditableTextField.hx",101,0xd7488fde)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(101)
		this->setIsEditing(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EditableTextField_obj,onFocusLost,(void))

Void EditableTextField_obj::submit( ){
{
		HX_STACK_FRAME("flixel.system.debug.watch.EditableTextField","submit",0x30df5d04,"flixel.system.debug.watch.EditableTextField.submit","flixel/system/debug/watch/EditableTextField.hx",105,0xd7488fde)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(108)
			::String tmp = this->get_text();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(108)
			this->submitValue(tmp);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
				}
			}
		}
		HX_STACK_LINE(112)
		this->setIsEditing(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EditableTextField_obj,submit,(void))

Void EditableTextField_obj::setIsEditing( bool isEditing){
{
		HX_STACK_FRAME("flixel.system.debug.watch.EditableTextField","setIsEditing",0xb9436038,"flixel.system.debug.watch.EditableTextField.setIsEditing","flixel/system/debug/watch/EditableTextField.hx",116,0xd7488fde)
		HX_STACK_THIS(this)
		HX_STACK_ARG(isEditing,"isEditing")
		HX_STACK_LINE(117)
		this->isEditing = isEditing;
		HX_STACK_LINE(120)
		bool tmp = isEditing;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(120)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(120)
		::flixel::input::keyboard::FlxKeyboard tmp2 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(120)
		tmp2->enabled = tmp1;
		HX_STACK_LINE(123)
		bool tmp3 = isEditing;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(123)
		Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(123)
		if ((tmp3)){
			HX_STACK_LINE(123)
			tmp4 = ((Dynamic)((int)1));
		}
		else{
			HX_STACK_LINE(123)
			tmp4 = ((Dynamic)((int)0));
		}
		HX_STACK_LINE(123)
		this->set_type(tmp4);
		HX_STACK_LINE(124)
		bool tmp5 = isEditing;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(124)
		this->set_background(tmp5);
		HX_STACK_LINE(125)
		bool tmp6 = isEditing;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(125)
		::openfl::_legacy::text::TextFormat tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(125)
		if ((tmp6)){
			HX_STACK_LINE(125)
			tmp7 = this->editFormat;
		}
		else{
			HX_STACK_LINE(125)
			tmp7 = this->defaultFormat;
		}
		HX_STACK_LINE(125)
		this->set_defaultTextFormat(tmp7);
		HX_STACK_LINE(126)
		::openfl::_legacy::text::TextFormat tmp8 = this->get_defaultTextFormat();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(126)
		this->setTextFormat(tmp8,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EditableTextField_obj,setIsEditing,(void))


EditableTextField_obj::EditableTextField_obj()
{
}

void EditableTextField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EditableTextField);
	HX_MARK_MEMBER_NAME(isEditing,"isEditing");
	HX_MARK_MEMBER_NAME(allowEditing,"allowEditing");
	HX_MARK_MEMBER_NAME(submitValue,"submitValue");
	HX_MARK_MEMBER_NAME(defaultFormat,"defaultFormat");
	HX_MARK_MEMBER_NAME(editFormat,"editFormat");
	::openfl::_legacy::text::TextField_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EditableTextField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(isEditing,"isEditing");
	HX_VISIT_MEMBER_NAME(allowEditing,"allowEditing");
	HX_VISIT_MEMBER_NAME(submitValue,"submitValue");
	HX_VISIT_MEMBER_NAME(defaultFormat,"defaultFormat");
	HX_VISIT_MEMBER_NAME(editFormat,"editFormat");
	::openfl::_legacy::text::TextField_obj::__Visit(HX_VISIT_ARG);
}

Dynamic EditableTextField_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"submit") ) { return submit_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isEditing") ) { return isEditing; }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"editFormat") ) { return editFormat; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"submitValue") ) { return submitValue; }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"allowEditing") ) { return allowEditing; }
		if (HX_FIELD_EQ(inName,"setIsEditing") ) { return setIsEditing_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultFormat") ) { return defaultFormat; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"modifyNumericValue") ) { return modifyNumericValue_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EditableTextField_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"isEditing") ) { isEditing=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"editFormat") ) { editFormat=inValue.Cast< ::openfl::_legacy::text::TextFormat >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"submitValue") ) { submitValue=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"allowEditing") ) { allowEditing=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultFormat") ) { defaultFormat=inValue.Cast< ::openfl::_legacy::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EditableTextField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("isEditing","\x4e","\x22","\xb6","\x29"));
	outFields->push(HX_HCSTRING("allowEditing","\x8f","\xbb","\xf0","\x66"));
	outFields->push(HX_HCSTRING("defaultFormat","\xd8","\x62","\x07","\xf8"));
	outFields->push(HX_HCSTRING("editFormat","\xe1","\xf0","\x3b","\xc3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(EditableTextField_obj,isEditing),HX_HCSTRING("isEditing","\x4e","\x22","\xb6","\x29")},
	{hx::fsBool,(int)offsetof(EditableTextField_obj,allowEditing),HX_HCSTRING("allowEditing","\x8f","\xbb","\xf0","\x66")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(EditableTextField_obj,submitValue),HX_HCSTRING("submitValue","\x39","\x40","\x71","\x15")},
	{hx::fsObject /*::openfl::_legacy::text::TextFormat*/ ,(int)offsetof(EditableTextField_obj,defaultFormat),HX_HCSTRING("defaultFormat","\xd8","\x62","\x07","\xf8")},
	{hx::fsObject /*::openfl::_legacy::text::TextFormat*/ ,(int)offsetof(EditableTextField_obj,editFormat),HX_HCSTRING("editFormat","\xe1","\xf0","\x3b","\xc3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("isEditing","\x4e","\x22","\xb6","\x29"),
	HX_HCSTRING("allowEditing","\x8f","\xbb","\xf0","\x66"),
	HX_HCSTRING("submitValue","\x39","\x40","\x71","\x15"),
	HX_HCSTRING("defaultFormat","\xd8","\x62","\x07","\xf8"),
	HX_HCSTRING("editFormat","\xe1","\xf0","\x3b","\xc3"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("onMouseUp","\x81","\xac","\x1d","\x98"),
	HX_HCSTRING("onKeyUp","\x3b","\x58","\x3c","\x75"),
	HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73"),
	HX_HCSTRING("modifyNumericValue","\xfe","\xf4","\x40","\xf7"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("submit","\x18","\x58","\x06","\x9a"),
	HX_HCSTRING("setIsEditing","\x4c","\xe2","\x05","\x4e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EditableTextField_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EditableTextField_obj::__mClass,"__mClass");
};

#endif

hx::Class EditableTextField_obj::__mClass;

void EditableTextField_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.watch.EditableTextField","\x02","\xf6","\x31","\x66");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EditableTextField_obj >;
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
} // end namespace watch
