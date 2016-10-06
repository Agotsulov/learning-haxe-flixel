#include <hxcpp.h>

#ifndef INCLUDED_Coin
#include <Coin.h>
#endif
#ifndef INCLUDED_Door
#include <Door.h>
#endif
#ifndef INCLUDED_Entity
#include <Entity.h>
#endif
#ifndef INCLUDED_JJ
#include <JJ.h>
#endif
#ifndef INCLUDED_JJRed
#include <JJRed.h>
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
#ifndef INCLUDED_Spike
#include <Spike.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapAutoTiling
#include <flixel/tile/FlxTilemapAutoTiling.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif

Void MapLoader_obj::__construct(::String foldername,::PlayState play)
{
HX_STACK_FRAME("MapLoader","new",0xe17a2821,"MapLoader.new","MapLoader.hx",22,0x5841f66f)
HX_STACK_THIS(this)
HX_STACK_ARG(foldername,"foldername")
HX_STACK_ARG(play,"play")
{
	HX_STACK_LINE(23)
	::flixel::tile::FlxTilemap tmp = ::flixel::tile::FlxTilemap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	this->background = tmp;
	HX_STACK_LINE(24)
	::flixel::tile::FlxTilemap tmp1 = ::flixel::tile::FlxTilemap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	this->map = tmp1;
	HX_STACK_LINE(26)
	this->path = foldername;
	HX_STACK_LINE(28)
	::flixel::tile::FlxTilemap tmp2 = this->background;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	::String tmp3 = (foldername + HX_HCSTRING("b.csv","\xba","\x2d","\xf8","\x8b"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	::String tmp4 = (foldername + HX_HCSTRING("tileset.png","\x6f","\x58","\x7b","\xcb"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(28)
	tmp2->loadMapFromCSV(tmp3,tmp4,(int)16,(int)16,::flixel::tile::FlxTilemapAutoTiling_obj::OFF,(int)1,(int)1,null());
	HX_STACK_LINE(29)
	::flixel::tile::FlxTilemap tmp5 = this->map;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(29)
	::String tmp6 = (foldername + HX_HCSTRING("m.csv","\x45","\x8f","\x60","\xe1"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(29)
	::String tmp7 = (foldername + HX_HCSTRING("tileset.png","\x6f","\x58","\x7b","\xcb"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(29)
	tmp5->loadMapFromCSV(tmp6,tmp7,(int)16,(int)16,::flixel::tile::FlxTilemapAutoTiling_obj::OFF,(int)1,(int)1,null());
	HX_STACK_LINE(31)
	::flixel::group::FlxTypedGroup tmp8 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(31)
	this->actors = tmp8;
	HX_STACK_LINE(33)
	Array< ::String > coords;		HX_STACK_VAR(coords,"coords");
	HX_STACK_LINE(34)
	::String tmp9 = (foldername + HX_HCSTRING("a.csv","\x39","\x99","\x91","\xf8"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(34)
	::String tmp10 = ::openfl::_legacy::Assets_obj::getText(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(34)
	Array< ::String > entities = tmp10.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(entities,"entities");
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(36)
		int _g = entities->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(36)
		while((true)){
			HX_STACK_LINE(36)
			bool tmp11 = (_g1 < _g);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(36)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(36)
			if ((tmp12)){
				HX_STACK_LINE(36)
				break;
			}
			HX_STACK_LINE(36)
			int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(36)
			int j = tmp13;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(38)
			::String tmp14 = entities->__get(j);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(38)
			coords = tmp14.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
			HX_STACK_LINE(40)
			::String tmp15 = coords->__get((int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(40)
			bool tmp16 = (tmp15 == HX_HCSTRING("jj","\xc0","\x5c","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(40)
			if ((tmp16)){
				HX_STACK_LINE(41)
				::flixel::group::FlxTypedGroup tmp17 = this->actors;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(41)
				::String tmp18 = coords->__get((int)1);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(41)
				Dynamic tmp19 = ::Std_obj::parseInt(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(41)
				::String tmp20 = coords->__get((int)2);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(41)
				Dynamic tmp21 = ::Std_obj::parseInt(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(41)
				::PlayState tmp22 = play;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(41)
				::JJ tmp23 = ::JJ_obj::__new(tmp19,tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(41)
				tmp17->add(tmp23);
			}
			HX_STACK_LINE(45)
			::String tmp17 = coords->__get((int)0);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(45)
			bool tmp18 = (tmp17 == HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(45)
			if ((tmp18)){
				HX_STACK_LINE(46)
				::String tmp19 = coords->__get((int)1);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(46)
				Dynamic tmp20 = ::Std_obj::parseInt(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(46)
				::String tmp21 = coords->__get((int)2);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(46)
				Dynamic tmp22 = ::Std_obj::parseInt(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(46)
				::PlayState tmp23 = play;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(46)
				::Player tmp24 = ::Player_obj::__new(tmp20,tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(46)
				this->player = tmp24;
				HX_STACK_LINE(47)
				::flixel::group::FlxTypedGroup tmp25 = this->actors;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(47)
				::Player tmp26 = this->player;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(47)
				tmp25->add(tmp26);
				HX_STACK_LINE(48)
				{
					HX_STACK_LINE(48)
					::flixel::math::FlxRect tmp27 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(48)
					::flixel::math::FlxRect _this = tmp27;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(48)
					_this->x = (int)0;
					HX_STACK_LINE(48)
					_this->y = (int)0;
					HX_STACK_LINE(48)
					::flixel::tile::FlxTilemap tmp28 = this->map;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(48)
					int tmp29 = tmp28->widthInTiles;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(48)
					int tmp30 = (tmp29 * (int)16);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(48)
					_this->width = tmp30;
					HX_STACK_LINE(48)
					::flixel::tile::FlxTilemap tmp31 = this->map;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(48)
					int tmp32 = tmp31->heightInTiles;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(48)
					int tmp33 = (tmp32 * (int)16);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(48)
					_this->height = tmp33;
					HX_STACK_LINE(48)
					_this;
				}
				HX_STACK_LINE(49)
				::flixel::FlxCamera tmp27 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(49)
				::Player tmp28 = this->player;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(49)
				tmp27->follow(tmp28,::flixel::FlxCameraFollowStyle_obj::PLATFORMER,(int)1);
			}
			HX_STACK_LINE(52)
			::String tmp19 = coords->__get((int)0);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(52)
			bool tmp20 = (tmp19 == HX_HCSTRING("coin","\x91","\xb5","\xc4","\x41"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(52)
			if ((tmp20)){
				HX_STACK_LINE(53)
				::flixel::group::FlxTypedGroup tmp21 = this->actors;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(53)
				::String tmp22 = coords->__get((int)1);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(53)
				Dynamic tmp23 = ::Std_obj::parseInt(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(53)
				::String tmp24 = coords->__get((int)2);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(53)
				Dynamic tmp25 = ::Std_obj::parseInt(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(53)
				::PlayState tmp26 = play;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(53)
				::Coin tmp27 = ::Coin_obj::__new(tmp23,tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(53)
				tmp21->add(tmp27);
			}
			HX_STACK_LINE(56)
			::String tmp21 = coords->__get((int)0);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(56)
			bool tmp22 = (tmp21 == HX_HCSTRING("spike","\xc6","\xa5","\x6c","\x81"));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(56)
			if ((tmp22)){
				HX_STACK_LINE(57)
				::flixel::group::FlxTypedGroup tmp23 = this->actors;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(57)
				::String tmp24 = coords->__get((int)1);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(57)
				Dynamic tmp25 = ::Std_obj::parseInt(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(57)
				::String tmp26 = coords->__get((int)2);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(57)
				Dynamic tmp27 = ::Std_obj::parseInt(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(57)
				::PlayState tmp28 = play;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(57)
				::Spike tmp29 = ::Spike_obj::__new(tmp25,tmp27,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(57)
				tmp23->add(tmp29);
			}
			HX_STACK_LINE(60)
			::String tmp23 = coords->__get((int)0);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(60)
			bool tmp24 = (tmp23 == HX_HCSTRING("jjred","\x91","\xf4","\xe0","\x4e"));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(60)
			if ((tmp24)){
				HX_STACK_LINE(61)
				::flixel::group::FlxTypedGroup tmp25 = this->actors;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(61)
				::String tmp26 = coords->__get((int)1);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(61)
				Dynamic tmp27 = ::Std_obj::parseInt(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(61)
				::String tmp28 = coords->__get((int)2);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(61)
				Dynamic tmp29 = ::Std_obj::parseInt(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(61)
				::PlayState tmp30 = play;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(61)
				::JJRed tmp31 = ::JJRed_obj::__new(tmp27,tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(61)
				tmp25->add(tmp31);
			}
		}
	}
	HX_STACK_LINE(67)
	Array< ::String > aa;		HX_STACK_VAR(aa,"aa");
	HX_STACK_LINE(68)
	::String tmp11 = (foldername + HX_HCSTRING("d.csv","\xbc","\x56","\xc5","\xb2"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(68)
	::String tmp12 = ::openfl::_legacy::Assets_obj::getText(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(68)
	Array< ::String > doors = tmp12.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(doors,"doors");
	HX_STACK_LINE(70)
	{
		HX_STACK_LINE(70)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(70)
		int _g = doors->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(70)
		while((true)){
			HX_STACK_LINE(70)
			bool tmp13 = (_g1 < _g);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(70)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(70)
			if ((tmp14)){
				HX_STACK_LINE(70)
				break;
			}
			HX_STACK_LINE(70)
			int tmp15 = (_g1)++;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(70)
			int j = tmp15;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(72)
			::String tmp16 = doors->__get(j);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(72)
			aa = tmp16.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
			HX_STACK_LINE(73)
			::String tmp17 = aa->__get((int)2);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(73)
			bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(73)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(73)
			if ((tmp18)){
				HX_STACK_LINE(73)
				::String tmp20 = aa->__get((int)1);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(73)
				::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(73)
				tmp19 = (tmp21 != null());
			}
			else{
				HX_STACK_LINE(73)
				tmp19 = false;
			}
			HX_STACK_LINE(73)
			if ((tmp19)){
				HX_STACK_LINE(73)
				::flixel::group::FlxTypedGroup tmp20 = this->actors;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(73)
				::String tmp21 = aa->__get((int)1);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(73)
				Dynamic tmp22 = ::Std_obj::parseInt(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(73)
				::String tmp23 = aa->__get((int)2);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(73)
				Dynamic tmp24 = ::Std_obj::parseInt(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(73)
				::PlayState tmp25 = play;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(73)
				::String tmp26 = aa->__get((int)0);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(73)
				::Door tmp27 = ::Door_obj::__new(tmp22,tmp24,tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(73)
				tmp20->add(tmp27);
			}
		}
	}
}
;
	return null();
}

//MapLoader_obj::~MapLoader_obj() { }

Dynamic MapLoader_obj::__CreateEmpty() { return  new MapLoader_obj; }
hx::ObjectPtr< MapLoader_obj > MapLoader_obj::__new(::String foldername,::PlayState play)
{  hx::ObjectPtr< MapLoader_obj > _result_ = new MapLoader_obj();
	_result_->__construct(foldername,play);
	return _result_;}

Dynamic MapLoader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MapLoader_obj > _result_ = new MapLoader_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::Entity MapLoader_obj::getEntity( ::String name){
	HX_STACK_FRAME("MapLoader","getEntity",0xe822bada,"MapLoader.getEntity","MapLoader.hx",80,0x5841f66f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(81)
	::flixel::group::FlxTypedGroup tmp = this->actors;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	::flixel::group::FlxTypedGroupIterator tmp1 = ::flixel::group::FlxTypedGroupIterator_obj::__new(tmp->members,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(81)
	for(::cpp::FastIterator_obj< ::flixel::FlxBasic > *__it = ::cpp::CreateFastIterator< ::flixel::FlxBasic >(tmp1);  __it->hasNext(); ){
		::flixel::FlxBasic a = __it->next();
		{
			HX_STACK_LINE(82)
			::Entity e = ((::Entity)(a));		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(83)
			bool tmp2 = (e->name == name);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(83)
			if ((tmp2)){
				HX_STACK_LINE(83)
				::Entity tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(83)
				return tmp3;
			}
		}
;
	}
	HX_STACK_LINE(85)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MapLoader_obj,getEntity,return )


MapLoader_obj::MapLoader_obj()
{
}

void MapLoader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MapLoader);
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(actors,"actors");
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_END_CLASS();
}

void MapLoader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(actors,"actors");
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(path,"path");
}

Dynamic MapLoader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return path; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"actors") ) { return actors; }
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getEntity") ) { return getEntity_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MapLoader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::flixel::tile::FlxTilemap >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"actors") ) { actors=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::Player >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< ::flixel::tile::FlxTilemap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MapLoader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"));
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("actors","\xde","\xcb","\x4a","\x16"));
	outFields->push(HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));
	outFields->push(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::tile::FlxTilemap*/ ,(int)offsetof(MapLoader_obj,background),HX_HCSTRING("background","\xee","\x93","\x1d","\x26")},
	{hx::fsObject /*::flixel::tile::FlxTilemap*/ ,(int)offsetof(MapLoader_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(MapLoader_obj,actors),HX_HCSTRING("actors","\xde","\xcb","\x4a","\x16")},
	{hx::fsObject /*::Player*/ ,(int)offsetof(MapLoader_obj,player),HX_HCSTRING("player","\x61","\xeb","\xb8","\x37")},
	{hx::fsString,(int)offsetof(MapLoader_obj,path),HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("actors","\xde","\xcb","\x4a","\x16"),
	HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),
	HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"),
	HX_HCSTRING("getEntity","\x59","\x9c","\x72","\x81"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MapLoader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MapLoader_obj::__mClass,"__mClass");
};

#endif

hx::Class MapLoader_obj::__mClass;

void MapLoader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("MapLoader","\xaf","\x83","\x21","\xdd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MapLoader_obj >;
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

