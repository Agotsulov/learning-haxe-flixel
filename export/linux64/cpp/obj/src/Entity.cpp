#include <hxcpp.h>

#ifndef INCLUDED_Entity
#include <Entity.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
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

Void Entity_obj::__construct(int X,int Y,::PlayState play,::String __o_name,hx::Null< Float >  __o_hurtCooldown)
{
HX_STACK_FRAME("Entity","new",0x9c9485b5,"Entity.new","Entity.hx",7,0x5c8a675b)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(play,"play")
HX_STACK_ARG(__o_name,"name")
HX_STACK_ARG(__o_hurtCooldown,"hurtCooldown")
::String name = __o_name.Default(HX_HCSTRING("null","\x87","\x9e","\x0e","\x49"));
Float hurtCooldown = __o_hurtCooldown.Default(((Float)0.05));
{
	HX_STACK_LINE(14)
	this->canHurt = true;
	HX_STACK_LINE(13)
	this->lastHurt = ((Float)0);
	HX_STACK_LINE(12)
	this->hurtCooldown = ((Float)1);
	HX_STACK_LINE(19)
	int tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	int tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(20)
	::List tmp2 = ::List_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	this->tags = tmp2;
	HX_STACK_LINE(21)
	::List tmp3 = this->tags;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(21)
	::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(21)
	tmp3->add(tmp4);
	HX_STACK_LINE(22)
	this->play = play;
	HX_STACK_LINE(23)
	::List tmp5 = this->tags;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(23)
	::String tmp6 = tmp5->first();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(23)
	this->name = tmp6;
	HX_STACK_LINE(24)
	this->hurtCooldown = hurtCooldown;
}
;
	return null();
}

//Entity_obj::~Entity_obj() { }

Dynamic Entity_obj::__CreateEmpty() { return  new Entity_obj; }
hx::ObjectPtr< Entity_obj > Entity_obj::__new(int X,int Y,::PlayState play,::String __o_name,hx::Null< Float >  __o_hurtCooldown)
{  hx::ObjectPtr< Entity_obj > _result_ = new Entity_obj();
	_result_->__construct(X,Y,play,__o_name,__o_hurtCooldown);
	return _result_;}

Dynamic Entity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Entity_obj > _result_ = new Entity_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void Entity_obj::update( Float elapsed){
{
		HX_STACK_FRAME("Entity","update",0xee9313d4,"Entity.update","Entity.hx",27,0x5c8a675b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(28)
		hx::AddEq(this->lastHurt,elapsed);
		HX_STACK_LINE(29)
		Float tmp = this->lastHurt;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		Float tmp1 = this->hurtCooldown;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(29)
		if ((tmp2)){
			HX_STACK_LINE(30)
			this->lastHurt = (int)0;
			HX_STACK_LINE(31)
			this->canHurt = true;
		}
		HX_STACK_LINE(33)
		Float tmp3 = this->health;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		bool tmp4 = (tmp3 <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(33)
		if ((tmp4)){
			HX_STACK_LINE(33)
			this->kill();
		}
		HX_STACK_LINE(34)
		Float tmp5 = elapsed;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(34)
		this->super::update(tmp5);
	}
return null();
}


Void Entity_obj::hurt( Float Damage){
{
		HX_STACK_FRAME("Entity","hurt",0x6175511a,"Entity.hurt","Entity.hx",38,0x5c8a675b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Damage,"Damage")
		HX_STACK_LINE(39)
		bool tmp = this->canHurt;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		if ((tmp)){
			HX_STACK_LINE(40)
			hx::SubEq(this->health,Damage);
			HX_STACK_LINE(41)
			this->canHurt = false;
		}
	}
return null();
}


Void Entity_obj::collide( ::Entity o1,::Entity o2){
{
		HX_STACK_FRAME("Entity","collide",0x21b23353,"Entity.collide","Entity.hx",46,0x5c8a675b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(o1,"o1")
		HX_STACK_ARG(o2,"o2")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,collide,(void))

Void Entity_obj::addTag( ::String str){
{
		HX_STACK_FRAME("Entity","addTag",0x0696f884,"Entity.addTag","Entity.hx",51,0x5c8a675b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(str,"str")
		HX_STACK_LINE(52)
		::List tmp = this->tags;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		::String tmp1 = str;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		tmp->add(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,addTag,(void))

bool Entity_obj::checkTag( ::String str){
	HX_STACK_FRAME("Entity","checkTag",0x3d4ffcfd,"Entity.checkTag","Entity.hx",56,0x5c8a675b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(57)
	{
		HX_STACK_LINE(57)
		::List tmp = this->tags;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(57)
		::_List::ListIterator tmp1 = ::_List::ListIterator_obj::__new(tmp->h);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(57)
		::_List::ListIterator _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(57)
		while((true)){
			HX_STACK_LINE(57)
			bool tmp2 = (_g->head != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(57)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(57)
			if ((tmp3)){
				HX_STACK_LINE(57)
				break;
			}
			HX_STACK_LINE(57)
			Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				Dynamic tmp5 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(57)
				_g->val = tmp5;
				HX_STACK_LINE(57)
				Dynamic tmp6 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(57)
				_g->head = tmp6;
				HX_STACK_LINE(57)
				tmp4 = _g->val;
			}
			HX_STACK_LINE(57)
			::String tag = ((::String)(tmp4));		HX_STACK_VAR(tag,"tag");
			HX_STACK_LINE(58)
			bool tmp5 = (tag == str);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(58)
			if ((tmp5)){
				HX_STACK_LINE(58)
				return true;
			}
		}
	}
	HX_STACK_LINE(60)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,checkTag,return )


Entity_obj::Entity_obj()
{
}

void Entity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Entity);
	HX_MARK_MEMBER_NAME(play,"play");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(hurtCooldown,"hurtCooldown");
	HX_MARK_MEMBER_NAME(lastHurt,"lastHurt");
	HX_MARK_MEMBER_NAME(canHurt,"canHurt");
	HX_MARK_MEMBER_NAME(tags,"tags");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Entity_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(play,"play");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(hurtCooldown,"hurtCooldown");
	HX_VISIT_MEMBER_NAME(lastHurt,"lastHurt");
	HX_VISIT_MEMBER_NAME(canHurt,"canHurt");
	HX_VISIT_MEMBER_NAME(tags,"tags");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Entity_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return play; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"tags") ) { return tags; }
		if (HX_FIELD_EQ(inName,"hurt") ) { return hurt_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"addTag") ) { return addTag_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"canHurt") ) { return canHurt; }
		if (HX_FIELD_EQ(inName,"collide") ) { return collide_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastHurt") ) { return lastHurt; }
		if (HX_FIELD_EQ(inName,"checkTag") ) { return checkTag_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hurtCooldown") ) { return hurtCooldown; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Entity_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { play=inValue.Cast< ::PlayState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tags") ) { tags=inValue.Cast< ::List >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"canHurt") ) { canHurt=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastHurt") ) { lastHurt=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hurtCooldown") ) { hurtCooldown=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Entity_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("hurtCooldown","\xda","\x8a","\x4c","\xa5"));
	outFields->push(HX_HCSTRING("lastHurt","\x85","\x75","\x60","\xd8"));
	outFields->push(HX_HCSTRING("canHurt","\x3f","\x44","\x6f","\x63"));
	outFields->push(HX_HCSTRING("tags","\xd9","\xb4","\xf6","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::PlayState*/ ,(int)offsetof(Entity_obj,play),HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a")},
	{hx::fsString,(int)offsetof(Entity_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsFloat,(int)offsetof(Entity_obj,hurtCooldown),HX_HCSTRING("hurtCooldown","\xda","\x8a","\x4c","\xa5")},
	{hx::fsFloat,(int)offsetof(Entity_obj,lastHurt),HX_HCSTRING("lastHurt","\x85","\x75","\x60","\xd8")},
	{hx::fsBool,(int)offsetof(Entity_obj,canHurt),HX_HCSTRING("canHurt","\x3f","\x44","\x6f","\x63")},
	{hx::fsObject /*::List*/ ,(int)offsetof(Entity_obj,tags),HX_HCSTRING("tags","\xd9","\xb4","\xf6","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("hurtCooldown","\xda","\x8a","\x4c","\xa5"),
	HX_HCSTRING("lastHurt","\x85","\x75","\x60","\xd8"),
	HX_HCSTRING("canHurt","\x3f","\x44","\x6f","\x63"),
	HX_HCSTRING("tags","\xd9","\xb4","\xf6","\x4c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("hurt","\x0f","\x5c","\x17","\x45"),
	HX_HCSTRING("collide","\x7e","\xaf","\x63","\xed"),
	HX_HCSTRING("addTag","\xb9","\x6a","\x09","\x9f"),
	HX_HCSTRING("checkTag","\x72","\x26","\xeb","\xac"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
};

#endif

hx::Class Entity_obj::__mClass;

void Entity_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Entity","\x43","\x87","\xb0","\x39");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Entity_obj >;
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

