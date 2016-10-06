#include <hxcpp.h>

#ifndef INCLUDED_Ability
#include <Ability.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

Void Ability_obj::__construct(::flixel::FlxObject Object,::PlayState State)
{
HX_STACK_FRAME("Ability","new",0x3532b77c,"Ability.new","Ability.hx",14,0xaa23cb74)
HX_STACK_THIS(this)
HX_STACK_ARG(Object,"Object")
HX_STACK_ARG(State,"State")
{
	HX_STACK_LINE(15)
	this->Object = Object;
	HX_STACK_LINE(16)
	this->State = State;
}
;
	return null();
}

//Ability_obj::~Ability_obj() { }

Dynamic Ability_obj::__CreateEmpty() { return  new Ability_obj; }
hx::ObjectPtr< Ability_obj > Ability_obj::__new(::flixel::FlxObject Object,::PlayState State)
{  hx::ObjectPtr< Ability_obj > _result_ = new Ability_obj();
	_result_->__construct(Object,State);
	return _result_;}

Dynamic Ability_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Ability_obj > _result_ = new Ability_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Ability_obj::use( Float elapsed){
{
		HX_STACK_FRAME("Ability","use",0x35381363,"Ability.use","Ability.hx",20,0xaa23cb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(21)
		Dynamic tmp = hx::SourceInfo(HX_HCSTRING("Ability.hx","\x74","\xcb","\x23","\xaa"),21,HX_HCSTRING("Ability","\x8a","\x89","\xb2","\x7a"),HX_HCSTRING("use","\x47","\x2c","\x59","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(21)
		::haxe::Log_obj::trace(HX_HCSTRING("Seek strength, other will follow","\x12","\x86","\xe4","\x76"),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Ability_obj,use,(void))


Ability_obj::Ability_obj()
{
}

void Ability_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ability);
	HX_MARK_MEMBER_NAME(Object,"Object");
	HX_MARK_MEMBER_NAME(State,"State");
	HX_MARK_END_CLASS();
}

void Ability_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(Object,"Object");
	HX_VISIT_MEMBER_NAME(State,"State");
}

Dynamic Ability_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"use") ) { return use_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"State") ) { return State; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Object") ) { return Object; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Ability_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"State") ) { State=inValue.Cast< ::PlayState >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Object") ) { Object=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Ability_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("Object","\xdf","\xf2","\xd3","\x49"));
	outFields->push(HX_HCSTRING("State","\xf1","\xe5","\x38","\x17"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxObject*/ ,(int)offsetof(Ability_obj,Object),HX_HCSTRING("Object","\xdf","\xf2","\xd3","\x49")},
	{hx::fsObject /*::PlayState*/ ,(int)offsetof(Ability_obj,State),HX_HCSTRING("State","\xf1","\xe5","\x38","\x17")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("Object","\xdf","\xf2","\xd3","\x49"),
	HX_HCSTRING("State","\xf1","\xe5","\x38","\x17"),
	HX_HCSTRING("use","\x47","\x2c","\x59","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ability_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ability_obj::__mClass,"__mClass");
};

#endif

hx::Class Ability_obj::__mClass;

void Ability_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Ability","\x8a","\x89","\xb2","\x7a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Ability_obj >;
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

