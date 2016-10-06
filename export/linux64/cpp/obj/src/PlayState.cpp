#include <hxcpp.h>

#ifndef INCLUDED_Entity
#include <Entity.h>
#endif
#ifndef INCLUDED_MapLoader
#include <MapLoader.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",10,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(10)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10)
	super::__construct(tmp);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > _result_ = new PlayState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > _result_ = new PlayState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",17,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(18)
		this->loadLevel(HX_HCSTRING("assets/levels/map1/","\xe6","\x31","\xff","\x67"));
		HX_STACK_LINE(20)
		this->super::create();
	}
return null();
}


Void PlayState_obj::update( Float elapsed){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",24,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(25)
		::MapLoader tmp = this->loader;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		::flixel::group::FlxTypedGroup tmp1 = tmp->actors;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		::MapLoader tmp2 = this->loader;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		::flixel::tile::FlxTilemap tmp3 = tmp2->map;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(25)
		Dynamic tmp4 = ::flixel::FlxObject_obj::separate_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(25)
		::flixel::FlxG_obj::overlap(tmp1,tmp3,null(),tmp4);
		HX_STACK_LINE(26)
		Float tmp5 = elapsed;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(26)
		this->super::update(tmp5);
		HX_STACK_LINE(27)
		{
			HX_STACK_LINE(27)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(27)
			::MapLoader tmp6 = this->loader;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(27)
			Array< ::Dynamic > _g1 = tmp6->actors->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(27)
			while((true)){
				HX_STACK_LINE(27)
				bool tmp7 = (_g < _g1->length);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(27)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(27)
				if ((tmp8)){
					HX_STACK_LINE(27)
					break;
				}
				HX_STACK_LINE(27)
				::flixel::FlxBasic tmp9 = _g1->__get(_g).StaticCast< ::flixel::FlxBasic >();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(27)
				::flixel::FlxBasic entity1 = tmp9;		HX_STACK_VAR(entity1,"entity1");
				HX_STACK_LINE(27)
				++(_g);
				HX_STACK_LINE(28)
				{
					HX_STACK_LINE(28)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(28)
					::MapLoader tmp10 = this->loader;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(28)
					Array< ::Dynamic > _g3 = tmp10->actors->members;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(28)
					while((true)){
						HX_STACK_LINE(28)
						bool tmp11 = (_g2 < _g3->length);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(28)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(28)
						if ((tmp12)){
							HX_STACK_LINE(28)
							break;
						}
						HX_STACK_LINE(28)
						::flixel::FlxBasic tmp13 = _g3->__get(_g2).StaticCast< ::flixel::FlxBasic >();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(28)
						::flixel::FlxBasic entity2 = tmp13;		HX_STACK_VAR(entity2,"entity2");
						HX_STACK_LINE(28)
						++(_g2);
						HX_STACK_LINE(29)
						::Entity e1 = ((::Entity)(entity1));		HX_STACK_VAR(e1,"e1");
						HX_STACK_LINE(30)
						::Entity e2 = ((::Entity)(entity2));		HX_STACK_VAR(e2,"e2");
						HX_STACK_LINE(31)
						bool tmp14 = (e1 != e2);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(31)
						if ((tmp14)){
							HX_STACK_LINE(31)
							::Entity tmp15 = e1;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(31)
							::Entity tmp16 = e2;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(31)
							Dynamic tmp17 = e1->collide_dyn();		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(31)
							::flixel::FlxG_obj::overlap(tmp15,tmp16,tmp17,null());
						}
					}
				}
			}
		}
		HX_STACK_LINE(34)
		::flixel::input::keyboard::FlxKeyboard tmp6 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(34)
		bool tmp7 = tmp6->checkKeyArrayState(Array_obj< int >::__new().Add((int)82),(int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(34)
		if ((tmp7)){
			HX_STACK_LINE(36)
			::MapLoader tmp8 = this->loader;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(36)
			::String tmp9 = tmp8->path;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(36)
			this->loadLevel(tmp9);
		}
	}
return null();
}


Void PlayState_obj::loadLevel( ::String path){
{
		HX_STACK_FRAME("PlayState","loadLevel",0xc9ed252d,"PlayState.loadLevel","PlayState.hx",45,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_LINE(46)
		this->clear();
		HX_STACK_LINE(47)
		::MapLoader tmp = ::MapLoader_obj::__new(path,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		this->loader = tmp;
		HX_STACK_LINE(48)
		::MapLoader tmp1 = this->loader;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		::flixel::tile::FlxTilemap tmp2 = tmp1->background;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(48)
		this->add(tmp2);
		HX_STACK_LINE(49)
		::MapLoader tmp3 = this->loader;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		::flixel::tile::FlxTilemap tmp4 = tmp3->map;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		this->add(tmp4);
		HX_STACK_LINE(50)
		::MapLoader tmp5 = this->loader;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		::flixel::group::FlxTypedGroup tmp6 = tmp5->actors;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(50)
		this->add(tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,loadLevel,(void))

Void PlayState_obj::addActor( ::Entity actor){
{
		HX_STACK_FRAME("PlayState","addActor",0x43c77845,"PlayState.addActor","PlayState.hx",54,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(actor,"actor")
		HX_STACK_LINE(55)
		::Entity tmp = actor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		this->add(tmp);
		HX_STACK_LINE(56)
		::MapLoader tmp1 = this->loader;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(56)
		::Entity tmp2 = actor;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		tmp1->actors->add(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,addActor,(void))


PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(loader,"loader");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(loader,"loader");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"loader") ) { return loader; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addActor") ) { return addActor_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadLevel") ) { return loadLevel_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::Player >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loader") ) { loader=inValue.Cast< ::MapLoader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));
	outFields->push(HX_HCSTRING("loader","\x13","\x48","\x6f","\x58"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Player*/ ,(int)offsetof(PlayState_obj,player),HX_HCSTRING("player","\x61","\xeb","\xb8","\x37")},
	{hx::fsObject /*::MapLoader*/ ,(int)offsetof(PlayState_obj,loader),HX_HCSTRING("loader","\x13","\x48","\x6f","\x58")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),
	HX_HCSTRING("loader","\x13","\x48","\x6f","\x58"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("loadLevel","\x7e","\x61","\x9a","\x8d"),
	HX_HCSTRING("addActor","\x14","\xf1","\x03","\x95"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#endif

hx::Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("PlayState","\x5d","\x83","\xc2","\x46");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PlayState_obj >;
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

