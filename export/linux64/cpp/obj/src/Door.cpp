#include <hxcpp.h>

#ifndef INCLUDED_Door
#include <Door.h>
#endif
#ifndef INCLUDED_Entity
#include <Entity.h>
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
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
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

Void Door_obj::__construct(int X,int Y,::PlayState play,::String folderpath)
{
HX_STACK_FRAME("Door","new",0x5d3b9d80,"Door.new","Door.hx",11,0xa24891f0)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(play,"play")
HX_STACK_ARG(folderpath,"folderpath")
{
	HX_STACK_LINE(12)
	int tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	int tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12)
	::PlayState tmp2 = play;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(12)
	super::__construct(tmp,tmp1,tmp2,null(),null());
	HX_STACK_LINE(13)
	this->folderpath = folderpath;
	HX_STACK_LINE(14)
	this->loadGraphic(HX_HCSTRING("assets/images/door.png","\x54","\xd8","\xb6","\x41"),true,(int)16,(int)32,null(),null());
	HX_STACK_LINE(15)
	this->setSize((int)16,(int)32);
}
;
	return null();
}

//Door_obj::~Door_obj() { }

Dynamic Door_obj::__CreateEmpty() { return  new Door_obj; }
hx::ObjectPtr< Door_obj > Door_obj::__new(int X,int Y,::PlayState play,::String folderpath)
{  hx::ObjectPtr< Door_obj > _result_ = new Door_obj();
	_result_->__construct(X,Y,play,folderpath);
	return _result_;}

Dynamic Door_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Door_obj > _result_ = new Door_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void Door_obj::collide( ::Entity o1,::Entity o2){
{
		HX_STACK_FRAME("Door","collide",0xdb888c9e,"Door.collide","Door.hx",19,0xa24891f0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(o1,"o1")
		HX_STACK_ARG(o2,"o2")
		HX_STACK_LINE(21)
		bool tmp = (o1->name == HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(21)
		if ((tmp)){
			HX_STACK_LINE(23)
			::PlayState tmp1 = this->play;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(23)
			::String tmp2 = this->folderpath;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(23)
			tmp1->loadLevel(tmp2);
		}
		else{
			HX_STACK_LINE(24)
			bool tmp1 = (o2->name == HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(24)
			if ((tmp1)){
				HX_STACK_LINE(26)
				::PlayState tmp2 = this->play;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(26)
				::String tmp3 = this->folderpath;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(26)
				tmp2->loadLevel(tmp3);
			}
		}
	}
return null();
}



Door_obj::Door_obj()
{
}

void Door_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Door);
	HX_MARK_MEMBER_NAME(folderpath,"folderpath");
	::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Door_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(folderpath,"folderpath");
	::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Door_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"collide") ) { return collide_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"folderpath") ) { return folderpath; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Door_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"folderpath") ) { folderpath=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Door_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("folderpath","\x53","\x4b","\x0e","\xc4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Door_obj,folderpath),HX_HCSTRING("folderpath","\x53","\x4b","\x0e","\xc4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("folderpath","\x53","\x4b","\x0e","\xc4"),
	HX_HCSTRING("collide","\x7e","\xaf","\x63","\xed"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Door_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Door_obj::__mClass,"__mClass");
};

#endif

hx::Class Door_obj::__mClass;

void Door_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Door","\x8e","\x1d","\x47","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Door_obj >;
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

