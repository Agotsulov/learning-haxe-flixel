#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxAtlas
#include <flixel/graphics/atlas/FlxAtlas.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxNode
#include <flixel/graphics/atlas/FlxNode.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxTileFrames
#include <flixel/graphics/frames/FlxTileFrames.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxBitmapDataUtil
#include <flixel/util/FlxBitmapDataUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace graphics{
namespace atlas{

Void FlxAtlas_obj::__construct(::String name,hx::Null< bool >  __o_powerOfTwo,hx::Null< int >  __o_border,hx::Null< bool >  __o_rotate,::flixel::math::FlxPoint minSize,::flixel::math::FlxPoint maxSize)
{
HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","new",0xc05046bf,"flixel.graphics.atlas.FlxAtlas.new","flixel/graphics/atlas/FlxAtlas.hx",25,0x03972f50)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(__o_powerOfTwo,"powerOfTwo")
HX_STACK_ARG(__o_border,"border")
HX_STACK_ARG(__o_rotate,"rotate")
HX_STACK_ARG(minSize,"minSize")
HX_STACK_ARG(maxSize,"maxSize")
bool powerOfTwo = __o_powerOfTwo.Default(false);
int border = __o_border.Default(1);
bool rotate = __o_rotate.Default(false);
{
	HX_STACK_LINE(100)
	this->powerOfTwo = false;
	HX_STACK_LINE(95)
	this->allowRotation = false;
	HX_STACK_LINE(90)
	this->maxHeight = (int)1024;
	HX_STACK_LINE(86)
	this->maxWidth = (int)1024;
	HX_STACK_LINE(81)
	this->minHeight = (int)128;
	HX_STACK_LINE(77)
	this->minWidth = (int)128;
	HX_STACK_LINE(60)
	this->border = (int)1;
	HX_STACK_LINE(120)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	{
		HX_STACK_LINE(120)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(120)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(120)
		tmp = tmp2;
	}
	HX_STACK_LINE(120)
	this->nodes = tmp;
	HX_STACK_LINE(121)
	this->name = name;
	HX_STACK_LINE(122)
	bool tmp1 = powerOfTwo;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(122)
	this->set_powerOfTwo(tmp1);
	HX_STACK_LINE(123)
	this->border = border;
	HX_STACK_LINE(125)
	bool tmp2 = (minSize != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(125)
	::flixel::math::FlxPoint tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(125)
	if ((tmp2)){
		HX_STACK_LINE(125)
		tmp3 = minSize;
	}
	else{
		HX_STACK_LINE(125)
		tmp3 = ::flixel::graphics::atlas::FlxAtlas_obj::defaultMinSize;
	}
	HX_STACK_LINE(125)
	minSize = tmp3;
	HX_STACK_LINE(126)
	bool tmp4 = (maxSize != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(126)
	::flixel::math::FlxPoint tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(126)
	if ((tmp4)){
		HX_STACK_LINE(126)
		tmp5 = maxSize;
	}
	else{
		HX_STACK_LINE(126)
		tmp5 = ::flixel::graphics::atlas::FlxAtlas_obj::defaultMaxSize;
	}
	HX_STACK_LINE(126)
	maxSize = tmp5;
	HX_STACK_LINE(128)
	Float tmp6 = minSize->x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(128)
	int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(128)
	this->set_minWidth(tmp7);
	HX_STACK_LINE(129)
	Float tmp8 = minSize->y;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(129)
	int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(129)
	this->set_minHeight(tmp9);
	HX_STACK_LINE(130)
	bool tmp10 = (maxSize->x > minSize->x);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(130)
	int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(130)
	if ((tmp10)){
		HX_STACK_LINE(130)
		Float tmp12 = maxSize->x;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(130)
		tmp11 = ::Std_obj::_int(tmp12);
	}
	else{
		HX_STACK_LINE(130)
		tmp11 = this->minWidth;
	}
	HX_STACK_LINE(130)
	this->set_maxWidth(tmp11);
	HX_STACK_LINE(131)
	bool tmp12 = (maxSize->y > minSize->x);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(131)
	int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(131)
	if ((tmp12)){
		HX_STACK_LINE(131)
		Float tmp14 = maxSize->y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(131)
		tmp13 = ::Std_obj::_int(tmp14);
	}
	else{
		HX_STACK_LINE(131)
		tmp13 = this->minHeight;
	}
	HX_STACK_LINE(131)
	this->set_maxHeight(tmp13);
	HX_STACK_LINE(132)
	this->allowRotation = rotate;
	HX_STACK_LINE(134)
	this->initRoot();
}
;
	return null();
}

//FlxAtlas_obj::~FlxAtlas_obj() { }

Dynamic FlxAtlas_obj::__CreateEmpty() { return  new FlxAtlas_obj; }
hx::ObjectPtr< FlxAtlas_obj > FlxAtlas_obj::__new(::String name,hx::Null< bool >  __o_powerOfTwo,hx::Null< int >  __o_border,hx::Null< bool >  __o_rotate,::flixel::math::FlxPoint minSize,::flixel::math::FlxPoint maxSize)
{  hx::ObjectPtr< FlxAtlas_obj > _result_ = new FlxAtlas_obj();
	_result_->__construct(name,__o_powerOfTwo,__o_border,__o_rotate,minSize,maxSize);
	return _result_;}

Dynamic FlxAtlas_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAtlas_obj > _result_ = new FlxAtlas_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

hx::Object *FlxAtlas_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxAtlas_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxAtlas_obj >(this); }
Void FlxAtlas_obj::initRoot( ){
{
		HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","initRoot",0x37652e93,"flixel.graphics.atlas.FlxAtlas.initRoot","flixel/graphics/atlas/FlxAtlas.hx",138,0x03972f50)
		HX_STACK_THIS(this)
		HX_STACK_LINE(139)
		int tmp = this->minWidth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		int rootWidth = tmp;		HX_STACK_VAR(rootWidth,"rootWidth");
		HX_STACK_LINE(140)
		int tmp1 = this->minHeight;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		int rootHeight = tmp1;		HX_STACK_VAR(rootHeight,"rootHeight");
		HX_STACK_LINE(142)
		bool tmp2 = this->powerOfTwo;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(142)
		if ((tmp2)){
			HX_STACK_LINE(144)
			int tmp3 = rootWidth;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(144)
			int tmp4 = this->getNextPowerOfTwo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(144)
			rootWidth = tmp4;
			HX_STACK_LINE(145)
			int tmp5 = rootHeight;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(145)
			int tmp6 = this->getNextPowerOfTwo(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(145)
			rootHeight = tmp6;
		}
		HX_STACK_LINE(148)
		::flixel::math::FlxRect tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(148)
		{
			HX_STACK_LINE(148)
			::flixel::math::FlxRect tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(148)
			{
				HX_STACK_LINE(148)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp5 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(148)
				::flixel::math::FlxRect tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(148)
				::flixel::math::FlxRect _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(148)
				_this->x = (int)0;
				HX_STACK_LINE(148)
				_this->y = (int)0;
				HX_STACK_LINE(148)
				_this->width = rootWidth;
				HX_STACK_LINE(148)
				_this->height = rootHeight;
				HX_STACK_LINE(148)
				tmp4 = _this;
			}
			HX_STACK_LINE(148)
			::flixel::math::FlxRect rect = tmp4;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(148)
			rect->_inPool = false;
			HX_STACK_LINE(148)
			tmp3 = rect;
		}
		HX_STACK_LINE(148)
		::flixel::graphics::atlas::FlxNode tmp4 = ::flixel::graphics::atlas::FlxNode_obj::__new(tmp3,hx::ObjectPtr<OBJ_>(this),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(148)
		this->root = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,initRoot,(void))

::flixel::graphics::atlas::FlxNode FlxAtlas_obj::addNode( Dynamic Graphic,::String Key){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","addNode",0xeec7dea2,"flixel.graphics.atlas.FlxAtlas.addNode","flixel/graphics/atlas/FlxAtlas.hx",158,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Key,"Key")
	HX_STACK_LINE(159)
	Dynamic tmp = Graphic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(159)
	::String tmp1 = Key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(159)
	::String tmp2 = ::flixel::_system::FlxAssets_obj::resolveKey(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(159)
	::String key = tmp2;		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(161)
	bool tmp3 = (key == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(161)
	if ((tmp3)){
		HX_STACK_LINE(164)
		HX_STACK_DO_THROW(HX_HCSTRING("addNode can't find the key for specified bitmapdata. Please provide not null value as a Key argument.","\x92","\x54","\x24","\x2b"));
		HX_STACK_LINE(166)
		return null();
	}
	HX_STACK_LINE(169)
	::String tmp4 = key;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(169)
	bool tmp5 = this->hasNodeWithName(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(169)
	if ((tmp5)){
		HX_STACK_LINE(170)
		::haxe::ds::StringMap tmp6 = this->nodes;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(170)
		::String tmp7 = key;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(170)
		::flixel::graphics::atlas::FlxNode tmp8 = tmp6->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(170)
		::flixel::graphics::atlas::FlxNode tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(170)
		return tmp9;
	}
	HX_STACK_LINE(172)
	Dynamic tmp6 = Graphic;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(172)
	::openfl::_legacy::display::BitmapData tmp7 = ::flixel::_system::FlxAssets_obj::resolveBitmapData(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(172)
	::openfl::_legacy::display::BitmapData data = tmp7;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(174)
	bool tmp8 = (data == null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(174)
	if ((tmp8)){
		HX_STACK_LINE(177)
		Dynamic tmp9 = Graphic;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(177)
		::String tmp10 = ::Std_obj::string(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(177)
		::String tmp11 = (HX_HCSTRING("addNode can't find bitmapdata with specified key: ","\xbb","\x33","\x14","\x9a") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(177)
		::String tmp12 = (tmp11 + HX_HCSTRING(". Please provide valid value.","\x84","\xe6","\x88","\x32"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(177)
		HX_STACK_DO_THROW(tmp12);
		HX_STACK_LINE(179)
		return null();
	}
	HX_STACK_LINE(183)
	::flixel::graphics::atlas::FlxNode tmp9 = this->root;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(183)
	::flixel::graphics::atlas::FlxNode tmp10 = tmp9->left;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(183)
	bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(183)
	if ((tmp11)){
		HX_STACK_LINE(184)
		::openfl::_legacy::display::BitmapData tmp12 = data;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(184)
		::String tmp13 = key;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(184)
		::flixel::graphics::atlas::FlxNode tmp14 = this->insertFirstNodeInRoot(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(184)
		return tmp14;
	}
	HX_STACK_LINE(186)
	::flixel::graphics::atlas::FlxNode tmp12 = this->root;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(186)
	::flixel::graphics::atlas::FlxNode tmp13 = tmp12->right;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(186)
	bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(186)
	if ((tmp14)){
		HX_STACK_LINE(188)
		::openfl::_legacy::display::BitmapData tmp15 = data;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(188)
		::String tmp16 = key;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(188)
		::flixel::graphics::atlas::FlxNode tmp17 = this->expand(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(188)
		return tmp17;
	}
	HX_STACK_LINE(192)
	::openfl::_legacy::display::BitmapData tmp15 = data;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(192)
	::String tmp16 = key;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(192)
	::flixel::graphics::atlas::FlxNode tmp17 = this->tryInsert(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(192)
	::flixel::graphics::atlas::FlxNode inserted = tmp17;		HX_STACK_VAR(inserted,"inserted");
	HX_STACK_LINE(193)
	bool tmp18 = (inserted != null());		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(193)
	if ((tmp18)){
		HX_STACK_LINE(194)
		::flixel::graphics::atlas::FlxNode tmp19 = inserted;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(194)
		return tmp19;
	}
	HX_STACK_LINE(197)
	this->wrapRoot();
	HX_STACK_LINE(198)
	::openfl::_legacy::display::BitmapData tmp19 = data;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(198)
	::String tmp20 = key;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(198)
	::flixel::graphics::atlas::FlxNode tmp21 = this->expand(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(198)
	return tmp21;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlas_obj,addNode,return )

Void FlxAtlas_obj::wrapRoot( ){
{
		HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","wrapRoot",0x7e08124d,"flixel.graphics.atlas.FlxAtlas.wrapRoot","flixel/graphics/atlas/FlxAtlas.hx",202,0x03972f50)
		HX_STACK_THIS(this)
		HX_STACK_LINE(203)
		::flixel::graphics::atlas::FlxNode tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(203)
		::flixel::graphics::atlas::FlxNode temp = tmp;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(204)
		::flixel::math::FlxRect tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(204)
		{
			HX_STACK_LINE(204)
			Float tmp2 = temp->rect->width;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(204)
			int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(204)
			Float Width = tmp3;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(204)
			Float tmp4 = temp->rect->height;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(204)
			int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(204)
			Float Height = tmp5;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(204)
			::flixel::math::FlxRect tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(204)
			{
				HX_STACK_LINE(204)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp7 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(204)
				::flixel::math::FlxRect tmp8 = tmp7->get();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(204)
				::flixel::math::FlxRect _this = tmp8;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(204)
				_this->x = (int)0;
				HX_STACK_LINE(204)
				_this->y = (int)0;
				HX_STACK_LINE(204)
				_this->width = Width;
				HX_STACK_LINE(204)
				_this->height = Height;
				HX_STACK_LINE(204)
				tmp6 = _this;
			}
			HX_STACK_LINE(204)
			::flixel::math::FlxRect rect = tmp6;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(204)
			rect->_inPool = false;
			HX_STACK_LINE(204)
			tmp1 = rect;
		}
		HX_STACK_LINE(204)
		::flixel::graphics::atlas::FlxNode tmp2 = ::flixel::graphics::atlas::FlxNode_obj::__new(tmp1,hx::ObjectPtr<OBJ_>(this),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(204)
		this->root = tmp2;
		HX_STACK_LINE(205)
		::flixel::graphics::atlas::FlxNode tmp3 = this->root;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(205)
		tmp3->left = temp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,wrapRoot,(void))

::flixel::graphics::atlas::FlxNode FlxAtlas_obj::tryInsert( ::openfl::_legacy::display::BitmapData data,::String key){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","tryInsert",0xc0214673,"flixel.graphics.atlas.FlxAtlas.tryInsert","flixel/graphics/atlas/FlxAtlas.hx",209,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(210)
	int tmp = data->get_width();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(210)
	int tmp1 = this->border;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(210)
	int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(210)
	int insertWidth = tmp2;		HX_STACK_VAR(insertWidth,"insertWidth");
	HX_STACK_LINE(211)
	int tmp3 = data->get_height();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(211)
	int tmp4 = this->border;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(211)
	int tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(211)
	int insertHeight = tmp5;		HX_STACK_VAR(insertHeight,"insertHeight");
	HX_STACK_LINE(213)
	bool rotateNode = false;		HX_STACK_VAR(rotateNode,"rotateNode");
	HX_STACK_LINE(214)
	int tmp6 = insertWidth;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(214)
	int tmp7 = insertHeight;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(214)
	::flixel::graphics::atlas::FlxNode tmp8 = this->findNodeToInsert(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(214)
	::flixel::graphics::atlas::FlxNode nodeToInsert = tmp8;		HX_STACK_VAR(nodeToInsert,"nodeToInsert");
	HX_STACK_LINE(216)
	bool tmp9 = this->allowRotation;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(216)
	if ((tmp9)){
		HX_STACK_LINE(218)
		int tmp10 = insertHeight;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(218)
		int tmp11 = insertWidth;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(218)
		::flixel::graphics::atlas::FlxNode tmp12 = this->findNodeToInsert(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(218)
		::flixel::graphics::atlas::FlxNode nodeToInsertWithRotation = tmp12;		HX_STACK_VAR(nodeToInsertWithRotation,"nodeToInsertWithRotation");
		HX_STACK_LINE(220)
		bool tmp13 = (nodeToInsertWithRotation != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(220)
		if ((tmp13)){
			HX_STACK_LINE(222)
			Float tmp14 = nodeToInsertWithRotation->rect->width;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(222)
			int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(222)
			Float tmp16 = nodeToInsertWithRotation->rect->height;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(222)
			int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(222)
			int tmp18 = (tmp15 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(222)
			int nodeWithRotationArea = tmp18;		HX_STACK_VAR(nodeWithRotationArea,"nodeWithRotationArea");
			HX_STACK_LINE(224)
			bool tmp19 = (nodeToInsert == null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(224)
			bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(224)
			bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(224)
			if ((tmp20)){
				HX_STACK_LINE(224)
				bool tmp22 = (nodeToInsert != null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(224)
				bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(224)
				bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(224)
				if ((tmp24)){
					HX_STACK_LINE(224)
					Float tmp25 = nodeToInsert->rect->width;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(224)
					Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(224)
					Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(224)
					Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(224)
					Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(224)
					int tmp30 = ::Std_obj::_int(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(224)
					int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(224)
					int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(224)
					Float tmp33 = nodeToInsert->rect->height;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(224)
					Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(224)
					Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(224)
					Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(224)
					Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(224)
					int tmp38 = ::Std_obj::_int(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(224)
					int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(224)
					int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(224)
					int tmp41 = (tmp32 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(224)
					int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(224)
					int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(224)
					int tmp44 = nodeWithRotationArea;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(224)
					tmp21 = (tmp43 > tmp44);
				}
				else{
					HX_STACK_LINE(224)
					tmp21 = false;
				}
			}
			else{
				HX_STACK_LINE(224)
				tmp21 = true;
			}
			HX_STACK_LINE(224)
			if ((tmp21)){
				HX_STACK_LINE(226)
				nodeToInsert = nodeToInsertWithRotation;
				HX_STACK_LINE(227)
				rotateNode = true;
				HX_STACK_LINE(228)
				int temp = insertWidth;		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(229)
				insertWidth = insertHeight;
				HX_STACK_LINE(230)
				insertHeight = temp;
			}
		}
	}
	HX_STACK_LINE(235)
	bool tmp10 = (nodeToInsert != null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(235)
	if ((tmp10)){
		HX_STACK_LINE(237)
		::flixel::graphics::atlas::FlxNode tmp11 = nodeToInsert;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(237)
		int tmp12 = insertWidth;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(237)
		int tmp13 = insertHeight;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(237)
		bool tmp14 = this->needToDivideHorizontally(tmp11,tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(237)
		bool horizontally = tmp14;		HX_STACK_VAR(horizontally,"horizontally");
		HX_STACK_LINE(238)
		::flixel::graphics::atlas::FlxNode tmp15 = nodeToInsert;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(238)
		int tmp16 = insertWidth;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(238)
		int tmp17 = insertHeight;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(238)
		bool tmp18 = horizontally;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(238)
		::openfl::_legacy::display::BitmapData tmp19 = data;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(238)
		::String tmp20 = key;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(238)
		bool tmp21 = rotateNode;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(238)
		::flixel::graphics::atlas::FlxNode tmp22 = this->divideNode(tmp15,tmp16,tmp17,tmp18,tmp19,tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(238)
		return tmp22;
	}
	HX_STACK_LINE(241)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlas_obj,tryInsert,return )

bool FlxAtlas_obj::needToDivideHorizontally( ::flixel::graphics::atlas::FlxNode nodeToDivide,int insertWidth,int insertHeight){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","needToDivideHorizontally",0x28a8e09c,"flixel.graphics.atlas.FlxAtlas.needToDivideHorizontally","flixel/graphics/atlas/FlxAtlas.hx",245,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(nodeToDivide,"nodeToDivide")
	HX_STACK_ARG(insertWidth,"insertWidth")
	HX_STACK_ARG(insertHeight,"insertHeight")
	HX_STACK_LINE(246)
	Float tmp = nodeToDivide->rect->width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(246)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(246)
	int tmp2 = insertWidth;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(246)
	int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(246)
	int dw = tmp3;		HX_STACK_VAR(dw,"dw");
	HX_STACK_LINE(247)
	Float tmp4 = nodeToDivide->rect->height;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(247)
	int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(247)
	int tmp6 = insertHeight;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(247)
	int tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(247)
	int dh = tmp7;		HX_STACK_VAR(dh,"dh");
	HX_STACK_LINE(249)
	bool tmp8 = (dw > dh);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(249)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxAtlas_obj,needToDivideHorizontally,return )

::flixel::graphics::atlas::FlxNode FlxAtlas_obj::divideNode( ::flixel::graphics::atlas::FlxNode nodeToDivide,int insertWidth,int insertHeight,bool divideHorizontally,::openfl::_legacy::display::BitmapData firstGrandChildData,::String firstGrandChildKey,hx::Null< bool >  __o_firstGrandChildRotated){
bool firstGrandChildRotated = __o_firstGrandChildRotated.Default(false);
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","divideNode",0x568bb99c,"flixel.graphics.atlas.FlxAtlas.divideNode","flixel/graphics/atlas/FlxAtlas.hx",253,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(nodeToDivide,"nodeToDivide")
	HX_STACK_ARG(insertWidth,"insertWidth")
	HX_STACK_ARG(insertHeight,"insertHeight")
	HX_STACK_ARG(divideHorizontally,"divideHorizontally")
	HX_STACK_ARG(firstGrandChildData,"firstGrandChildData")
	HX_STACK_ARG(firstGrandChildKey,"firstGrandChildKey")
	HX_STACK_ARG(firstGrandChildRotated,"firstGrandChildRotated")
{
		HX_STACK_LINE(254)
		bool tmp = (nodeToDivide != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(254)
		if ((tmp)){
			HX_STACK_LINE(256)
			::flixel::graphics::atlas::FlxNode firstChild = null();		HX_STACK_VAR(firstChild,"firstChild");
			HX_STACK_LINE(257)
			::flixel::graphics::atlas::FlxNode secondChild = null();		HX_STACK_VAR(secondChild,"secondChild");
			HX_STACK_LINE(258)
			::flixel::graphics::atlas::FlxNode firstGrandChild = null();		HX_STACK_VAR(firstGrandChild,"firstGrandChild");
			HX_STACK_LINE(259)
			::flixel::graphics::atlas::FlxNode secondGrandChild = null();		HX_STACK_VAR(secondGrandChild,"secondGrandChild");
			HX_STACK_LINE(260)
			bool tmp1 = (firstGrandChildKey != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(260)
			bool firstGrandChildFilled = tmp1;		HX_STACK_VAR(firstGrandChildFilled,"firstGrandChildFilled");
			HX_STACK_LINE(262)
			bool tmp2 = divideHorizontally;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(262)
			if ((tmp2)){
				HX_STACK_LINE(264)
				::flixel::math::FlxRect tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(264)
				{
					HX_STACK_LINE(264)
					Float tmp4 = nodeToDivide->rect->x;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(264)
					int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(264)
					Float X = tmp5;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(264)
					Float tmp6 = nodeToDivide->rect->y;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(264)
					int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(264)
					Float Y = tmp7;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(264)
					Float tmp8 = nodeToDivide->rect->height;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(264)
					int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(264)
					Float Height = tmp9;		HX_STACK_VAR(Height,"Height");
					HX_STACK_LINE(264)
					::flixel::math::FlxRect tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(264)
					{
						HX_STACK_LINE(264)
						::flixel::util::FlxPool_flixel_math_FlxRect tmp11 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(264)
						::flixel::math::FlxRect tmp12 = tmp11->get();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(264)
						::flixel::math::FlxRect _this = tmp12;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(264)
						_this->x = X;
						HX_STACK_LINE(264)
						_this->y = Y;
						HX_STACK_LINE(264)
						_this->width = insertWidth;
						HX_STACK_LINE(264)
						_this->height = Height;
						HX_STACK_LINE(264)
						tmp10 = _this;
					}
					HX_STACK_LINE(264)
					::flixel::math::FlxRect rect = tmp10;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(264)
					rect->_inPool = false;
					HX_STACK_LINE(264)
					tmp3 = rect;
				}
				HX_STACK_LINE(264)
				::flixel::graphics::atlas::FlxNode tmp4 = ::flixel::graphics::atlas::FlxNode_obj::__new(tmp3,hx::ObjectPtr<OBJ_>(this),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(264)
				firstChild = tmp4;
				HX_STACK_LINE(266)
				Float tmp5 = nodeToDivide->rect->width;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(266)
				int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(266)
				int tmp7 = insertWidth;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(266)
				int tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(266)
				bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(266)
				if ((tmp9)){
					HX_STACK_LINE(268)
					::flixel::math::FlxRect tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(268)
					{
						HX_STACK_LINE(268)
						Float tmp11 = nodeToDivide->rect->x;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(268)
						int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(268)
						int tmp13 = insertWidth;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(268)
						int tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(268)
						Float X = tmp14;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(268)
						Float tmp15 = nodeToDivide->rect->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(268)
						int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(268)
						Float Y = tmp16;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(268)
						Float tmp17 = nodeToDivide->rect->width;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(268)
						int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(268)
						int tmp19 = insertWidth;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(268)
						int tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(268)
						Float Width = tmp20;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(268)
						Float tmp21 = nodeToDivide->rect->height;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(268)
						int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(268)
						Float Height = tmp22;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(268)
						::flixel::math::FlxRect tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(268)
						{
							HX_STACK_LINE(268)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp24 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(268)
							::flixel::math::FlxRect tmp25 = tmp24->get();		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(268)
							::flixel::math::FlxRect _this = tmp25;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(268)
							_this->x = X;
							HX_STACK_LINE(268)
							_this->y = Y;
							HX_STACK_LINE(268)
							_this->width = Width;
							HX_STACK_LINE(268)
							_this->height = Height;
							HX_STACK_LINE(268)
							tmp23 = _this;
						}
						HX_STACK_LINE(268)
						::flixel::math::FlxRect rect = tmp23;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(268)
						rect->_inPool = false;
						HX_STACK_LINE(268)
						tmp10 = rect;
					}
					HX_STACK_LINE(268)
					::flixel::graphics::atlas::FlxNode tmp11 = ::flixel::graphics::atlas::FlxNode_obj::__new(tmp10,hx::ObjectPtr<OBJ_>(this),null(),null(),null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(268)
					secondChild = tmp11;
				}
				HX_STACK_LINE(271)
				::flixel::math::FlxRect tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(271)
				{
					HX_STACK_LINE(271)
					Float tmp11 = firstChild->rect->x;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(271)
					int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(271)
					Float X = tmp12;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(271)
					Float tmp13 = firstChild->rect->y;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(271)
					int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(271)
					Float Y = tmp14;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(271)
					::flixel::math::FlxRect tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(271)
					{
						HX_STACK_LINE(271)
						::flixel::util::FlxPool_flixel_math_FlxRect tmp16 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(271)
						::flixel::math::FlxRect tmp17 = tmp16->get();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(271)
						::flixel::math::FlxRect _this = tmp17;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(271)
						_this->x = X;
						HX_STACK_LINE(271)
						_this->y = Y;
						HX_STACK_LINE(271)
						_this->width = insertWidth;
						HX_STACK_LINE(271)
						_this->height = insertHeight;
						HX_STACK_LINE(271)
						tmp15 = _this;
					}
					HX_STACK_LINE(271)
					::flixel::math::FlxRect rect = tmp15;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(271)
					rect->_inPool = false;
					HX_STACK_LINE(271)
					tmp10 = rect;
				}
				HX_STACK_LINE(271)
				bool tmp11 = firstGrandChildFilled;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(271)
				::String tmp12 = firstGrandChildKey;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(271)
				bool tmp13 = firstGrandChildRotated;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(271)
				::flixel::graphics::atlas::FlxNode tmp14 = ::flixel::graphics::atlas::FlxNode_obj::__new(tmp10,hx::ObjectPtr<OBJ_>(this),tmp11,tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(271)
				firstGrandChild = tmp14;
				HX_STACK_LINE(273)
				Float tmp15 = firstChild->rect->height;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(273)
				int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(273)
				int tmp17 = insertHeight;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(273)
				int tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(273)
				bool tmp19 = (tmp18 > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(273)
				if ((tmp19)){
					HX_STACK_LINE(275)
					::flixel::math::FlxRect tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(275)
					{
						HX_STACK_LINE(275)
						Float tmp21 = firstChild->rect->x;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(275)
						int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(275)
						Float X = tmp22;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(275)
						Float tmp23 = firstChild->rect->y;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(275)
						int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(275)
						int tmp25 = insertHeight;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(275)
						int tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(275)
						Float Y = tmp26;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(275)
						Float tmp27 = firstChild->rect->height;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(275)
						int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(275)
						int tmp29 = insertHeight;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(275)
						int tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(275)
						Float Height = tmp30;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(275)
						::flixel::math::FlxRect tmp31;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(275)
						{
							HX_STACK_LINE(275)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp32 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(275)
							::flixel::math::FlxRect tmp33 = tmp32->get();		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(275)
							::flixel::math::FlxRect _this = tmp33;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(275)
							_this->x = X;
							HX_STACK_LINE(275)
							_this->y = Y;
							HX_STACK_LINE(275)
							_this->width = insertWidth;
							HX_STACK_LINE(275)
							_this->height = Height;
							HX_STACK_LINE(275)
							tmp31 = _this;
						}
						HX_STACK_LINE(275)
						::flixel::math::FlxRect rect = tmp31;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(275)
						rect->_inPool = false;
						HX_STACK_LINE(275)
						tmp20 = rect;
					}
					HX_STACK_LINE(275)
					::flixel::graphics::atlas::FlxNode tmp21 = ::flixel::graphics::atlas::FlxNode_obj::__new(tmp20,hx::ObjectPtr<OBJ_>(this),null(),null(),null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(275)
					secondGrandChild = tmp21;
				}
			}
			else{
				HX_STACK_LINE(281)
				::flixel::math::FlxRect tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(281)
				{
					HX_STACK_LINE(281)
					Float tmp4 = nodeToDivide->rect->x;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(281)
					int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(281)
					Float X = tmp5;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(281)
					Float tmp6 = nodeToDivide->rect->y;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(281)
					int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(281)
					Float Y = tmp7;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(281)
					Float tmp8 = nodeToDivide->rect->width;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(281)
					int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(281)
					Float Width = tmp9;		HX_STACK_VAR(Width,"Width");
					HX_STACK_LINE(281)
					::flixel::math::FlxRect tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(281)
					{
						HX_STACK_LINE(281)
						::flixel::util::FlxPool_flixel_math_FlxRect tmp11 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(281)
						::flixel::math::FlxRect tmp12 = tmp11->get();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(281)
						::flixel::math::FlxRect _this = tmp12;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(281)
						_this->x = X;
						HX_STACK_LINE(281)
						_this->y = Y;
						HX_STACK_LINE(281)
						_this->width = Width;
						HX_STACK_LINE(281)
						_this->height = insertHeight;
						HX_STACK_LINE(281)
						tmp10 = _this;
					}
					HX_STACK_LINE(281)
					::flixel::math::FlxRect rect = tmp10;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(281)
					rect->_inPool = false;
					HX_STACK_LINE(281)
					tmp3 = rect;
				}
				HX_STACK_LINE(281)
				::flixel::graphics::atlas::FlxNode tmp4 = ::flixel::graphics::atlas::FlxNode_obj::__new(tmp3,hx::ObjectPtr<OBJ_>(this),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(281)
				firstChild = tmp4;
				HX_STACK_LINE(283)
				Float tmp5 = nodeToDivide->rect->height;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(283)
				int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(283)
				int tmp7 = insertHeight;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(283)
				int tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(283)
				bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(283)
				if ((tmp9)){
					HX_STACK_LINE(285)
					::flixel::math::FlxRect tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(285)
					{
						HX_STACK_LINE(285)
						Float tmp11 = nodeToDivide->rect->x;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(285)
						int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(285)
						Float X = tmp12;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(285)
						Float tmp13 = nodeToDivide->rect->y;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(285)
						int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(285)
						int tmp15 = insertHeight;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(285)
						int tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(285)
						Float Y = tmp16;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(285)
						Float tmp17 = nodeToDivide->rect->width;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(285)
						int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(285)
						Float Width = tmp18;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(285)
						Float tmp19 = nodeToDivide->rect->height;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(285)
						int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(285)
						int tmp21 = insertHeight;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(285)
						int tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(285)
						Float Height = tmp22;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(285)
						::flixel::math::FlxRect tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(285)
						{
							HX_STACK_LINE(285)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp24 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(285)
							::flixel::math::FlxRect tmp25 = tmp24->get();		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(285)
							::flixel::math::FlxRect _this = tmp25;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(285)
							_this->x = X;
							HX_STACK_LINE(285)
							_this->y = Y;
							HX_STACK_LINE(285)
							_this->width = Width;
							HX_STACK_LINE(285)
							_this->height = Height;
							HX_STACK_LINE(285)
							tmp23 = _this;
						}
						HX_STACK_LINE(285)
						::flixel::math::FlxRect rect = tmp23;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(285)
						rect->_inPool = false;
						HX_STACK_LINE(285)
						tmp10 = rect;
					}
					HX_STACK_LINE(285)
					::flixel::graphics::atlas::FlxNode tmp11 = ::flixel::graphics::atlas::FlxNode_obj::__new(tmp10,hx::ObjectPtr<OBJ_>(this),null(),null(),null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(285)
					secondChild = tmp11;
				}
				HX_STACK_LINE(288)
				::flixel::math::FlxRect tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(288)
				{
					HX_STACK_LINE(288)
					Float tmp11 = firstChild->rect->x;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(288)
					int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(288)
					Float X = tmp12;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(288)
					Float tmp13 = firstChild->rect->y;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(288)
					int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(288)
					Float Y = tmp14;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(288)
					::flixel::math::FlxRect tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(288)
					{
						HX_STACK_LINE(288)
						::flixel::util::FlxPool_flixel_math_FlxRect tmp16 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(288)
						::flixel::math::FlxRect tmp17 = tmp16->get();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(288)
						::flixel::math::FlxRect _this = tmp17;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(288)
						_this->x = X;
						HX_STACK_LINE(288)
						_this->y = Y;
						HX_STACK_LINE(288)
						_this->width = insertWidth;
						HX_STACK_LINE(288)
						_this->height = insertHeight;
						HX_STACK_LINE(288)
						tmp15 = _this;
					}
					HX_STACK_LINE(288)
					::flixel::math::FlxRect rect = tmp15;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(288)
					rect->_inPool = false;
					HX_STACK_LINE(288)
					tmp10 = rect;
				}
				HX_STACK_LINE(288)
				bool tmp11 = firstGrandChildFilled;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(288)
				::String tmp12 = firstGrandChildKey;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(288)
				bool tmp13 = firstGrandChildRotated;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(288)
				::flixel::graphics::atlas::FlxNode tmp14 = ::flixel::graphics::atlas::FlxNode_obj::__new(tmp10,hx::ObjectPtr<OBJ_>(this),tmp11,tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(288)
				firstGrandChild = tmp14;
				HX_STACK_LINE(290)
				Float tmp15 = firstChild->rect->width;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(290)
				int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(290)
				int tmp17 = insertWidth;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(290)
				int tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(290)
				bool tmp19 = (tmp18 > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(290)
				if ((tmp19)){
					HX_STACK_LINE(292)
					::flixel::math::FlxRect tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(292)
					{
						HX_STACK_LINE(292)
						Float tmp21 = firstChild->rect->x;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(292)
						int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(292)
						int tmp23 = insertWidth;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(292)
						int tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(292)
						Float X = tmp24;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(292)
						Float tmp25 = firstChild->rect->y;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(292)
						int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(292)
						Float Y = tmp26;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(292)
						Float tmp27 = firstChild->rect->width;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(292)
						int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(292)
						int tmp29 = insertWidth;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(292)
						int tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(292)
						Float Width = tmp30;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(292)
						::flixel::math::FlxRect tmp31;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(292)
						{
							HX_STACK_LINE(292)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp32 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(292)
							::flixel::math::FlxRect tmp33 = tmp32->get();		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(292)
							::flixel::math::FlxRect _this = tmp33;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(292)
							_this->x = X;
							HX_STACK_LINE(292)
							_this->y = Y;
							HX_STACK_LINE(292)
							_this->width = Width;
							HX_STACK_LINE(292)
							_this->height = insertHeight;
							HX_STACK_LINE(292)
							tmp31 = _this;
						}
						HX_STACK_LINE(292)
						::flixel::math::FlxRect rect = tmp31;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(292)
						rect->_inPool = false;
						HX_STACK_LINE(292)
						tmp20 = rect;
					}
					HX_STACK_LINE(292)
					::flixel::graphics::atlas::FlxNode tmp21 = ::flixel::graphics::atlas::FlxNode_obj::__new(tmp20,hx::ObjectPtr<OBJ_>(this),null(),null(),null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(292)
					secondGrandChild = tmp21;
				}
			}
			HX_STACK_LINE(296)
			firstChild->left = firstGrandChild;
			HX_STACK_LINE(297)
			firstChild->right = secondGrandChild;
			HX_STACK_LINE(299)
			nodeToDivide->left = firstChild;
			HX_STACK_LINE(300)
			nodeToDivide->right = secondChild;
			HX_STACK_LINE(303)
			bool tmp3 = (firstGrandChildKey != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(303)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(303)
			if ((tmp3)){
				HX_STACK_LINE(303)
				tmp4 = (firstGrandChildData != null());
			}
			else{
				HX_STACK_LINE(303)
				tmp4 = false;
			}
			HX_STACK_LINE(303)
			if ((tmp4)){
				HX_STACK_LINE(305)
				this->expandBitmapData();
				HX_STACK_LINE(307)
				bool tmp5 = firstGrandChildRotated;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(307)
				if ((tmp5)){
					HX_STACK_LINE(309)
					::openfl::_legacy::geom::Matrix tmp6 = ::flixel::graphics::atlas::FlxAtlas_obj::matrix;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(309)
					tmp6->identity();
					HX_STACK_LINE(310)
					::openfl::_legacy::geom::Matrix tmp7 = ::flixel::graphics::atlas::FlxAtlas_obj::matrix;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(310)
					Float tmp8 = ::Math_obj::PI;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(310)
					Float tmp9 = (Float(tmp8) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(310)
					tmp7->rotate(tmp9);
					HX_STACK_LINE(311)
					::openfl::_legacy::geom::Matrix tmp10 = ::flixel::graphics::atlas::FlxAtlas_obj::matrix;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(311)
					int tmp11 = firstGrandChildData->get_height();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(311)
					Float tmp12 = firstGrandChild->rect->x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(311)
					int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(311)
					int tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(311)
					Float tmp15 = firstGrandChild->rect->y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(311)
					int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(311)
					tmp10->translate(tmp14,tmp16);
					HX_STACK_LINE(312)
					::openfl::_legacy::display::BitmapData tmp17 = this->_bitmapData;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(312)
					::openfl::_legacy::display::BitmapData tmp18 = firstGrandChildData;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(312)
					::openfl::_legacy::geom::Matrix tmp19 = ::flixel::graphics::atlas::FlxAtlas_obj::matrix;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(312)
					tmp17->draw(tmp18,tmp19,null(),null(),null(),null());
				}
				else{
					HX_STACK_LINE(316)
					::openfl::_legacy::geom::Point tmp6 = ::flixel::graphics::atlas::FlxAtlas_obj::point;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(316)
					Float tmp7 = firstGrandChild->rect->x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(316)
					int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(316)
					Float tmp9 = firstGrandChild->rect->y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(316)
					int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(316)
					tmp6->setTo(tmp8,tmp10);
					HX_STACK_LINE(317)
					::openfl::_legacy::display::BitmapData tmp11 = this->_bitmapData;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(317)
					::openfl::_legacy::display::BitmapData tmp12 = firstGrandChildData;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(317)
					::openfl::_legacy::geom::Rectangle tmp13 = firstGrandChildData->get_rect();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(317)
					::openfl::_legacy::geom::Point tmp14 = ::flixel::graphics::atlas::FlxAtlas_obj::point;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(317)
					tmp11->copyPixels(tmp12,tmp13,tmp14,null(),null(),null());
				}
				HX_STACK_LINE(320)
				::flixel::graphics::atlas::FlxNode tmp6 = firstGrandChild;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(320)
				this->addNodeToAtlasFrames(tmp6);
				HX_STACK_LINE(321)
				::haxe::ds::StringMap tmp7 = this->nodes;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(321)
				::String tmp8 = firstGrandChildKey;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(321)
				::flixel::graphics::atlas::FlxNode tmp9 = firstGrandChild;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(321)
				tmp7->set(tmp8,tmp9);
			}
			HX_STACK_LINE(324)
			::flixel::graphics::atlas::FlxNode tmp5 = firstGrandChild;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(324)
			return tmp5;
		}
		HX_STACK_LINE(327)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC7(FlxAtlas_obj,divideNode,return )

::flixel::graphics::atlas::FlxNode FlxAtlas_obj::insertFirstNodeInRoot( ::openfl::_legacy::display::BitmapData data,::String key){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","insertFirstNodeInRoot",0xea82177f,"flixel.graphics.atlas.FlxAtlas.insertFirstNodeInRoot","flixel/graphics/atlas/FlxAtlas.hx",331,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(332)
	::flixel::graphics::atlas::FlxNode tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(332)
	::flixel::graphics::atlas::FlxNode tmp1 = tmp->left;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(332)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(332)
	if ((tmp2)){
		HX_STACK_LINE(334)
		int tmp3 = data->get_width();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(334)
		int tmp4 = this->border;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(334)
		int tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(334)
		int insertWidth = tmp5;		HX_STACK_VAR(insertWidth,"insertWidth");
		HX_STACK_LINE(335)
		int tmp6 = data->get_height();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(335)
		int tmp7 = this->border;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(335)
		int tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(335)
		int insertHeight = tmp8;		HX_STACK_VAR(insertHeight,"insertHeight");
		HX_STACK_LINE(337)
		int rootWidth = insertWidth;		HX_STACK_VAR(rootWidth,"rootWidth");
		HX_STACK_LINE(338)
		int rootHeight = insertHeight;		HX_STACK_VAR(rootHeight,"rootHeight");
		HX_STACK_LINE(340)
		bool tmp9 = this->powerOfTwo;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(340)
		if ((tmp9)){
			HX_STACK_LINE(342)
			int tmp10 = rootWidth;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(342)
			int tmp11 = this->getNextPowerOfTwo(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(342)
			rootWidth = tmp11;
			HX_STACK_LINE(343)
			int tmp12 = rootHeight;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(343)
			int tmp13 = this->getNextPowerOfTwo(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(343)
			rootHeight = tmp13;
		}
		HX_STACK_LINE(346)
		int tmp10 = this->minWidth;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(346)
		int tmp11 = rootWidth;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(346)
		bool tmp12 = (tmp10 > tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(346)
		int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(346)
		if ((tmp12)){
			HX_STACK_LINE(346)
			tmp13 = this->minWidth;
		}
		else{
			HX_STACK_LINE(346)
			tmp13 = rootWidth;
		}
		HX_STACK_LINE(346)
		rootWidth = tmp13;
		HX_STACK_LINE(347)
		int tmp14 = this->minHeight;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(347)
		int tmp15 = rootHeight;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(347)
		bool tmp16 = (tmp14 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(347)
		int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(347)
		if ((tmp16)){
			HX_STACK_LINE(347)
			tmp17 = this->minHeight;
		}
		else{
			HX_STACK_LINE(347)
			tmp17 = rootHeight;
		}
		HX_STACK_LINE(347)
		rootHeight = tmp17;
		HX_STACK_LINE(349)
		bool tmp18 = this->powerOfTwo;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(349)
		if ((tmp18)){
			HX_STACK_LINE(351)
			int tmp19 = rootWidth;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(351)
			int tmp20 = this->getNextPowerOfTwo(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(351)
			rootWidth = tmp20;
			HX_STACK_LINE(352)
			int tmp21 = rootHeight;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(352)
			int tmp22 = this->getNextPowerOfTwo(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(352)
			rootHeight = tmp22;
		}
		HX_STACK_LINE(355)
		int tmp19 = this->maxWidth;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(355)
		bool tmp20 = (tmp19 > (int)0);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(355)
		bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(355)
		bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(355)
		if ((tmp21)){
			HX_STACK_LINE(355)
			int tmp23 = rootWidth;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(355)
			int tmp24 = this->maxWidth;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(355)
			int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(355)
			int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(355)
			tmp22 = (tmp23 > tmp26);
		}
		else{
			HX_STACK_LINE(355)
			tmp22 = false;
		}
		HX_STACK_LINE(355)
		bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(355)
		bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(355)
		if ((tmp23)){
			HX_STACK_LINE(355)
			int tmp25 = this->maxHeight;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(355)
			int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(355)
			bool tmp27 = (tmp26 > (int)0);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(355)
			bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(355)
			bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(355)
			if ((tmp29)){
				HX_STACK_LINE(355)
				int tmp30 = rootHeight;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(355)
				int tmp31 = this->maxHeight;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(355)
				int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(355)
				int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(355)
				tmp24 = (tmp30 > tmp33);
			}
			else{
				HX_STACK_LINE(355)
				tmp24 = false;
			}
		}
		else{
			HX_STACK_LINE(355)
			tmp24 = true;
		}
		HX_STACK_LINE(355)
		if ((tmp24)){
			HX_STACK_LINE(358)
			::String tmp25 = (HX_HCSTRING("Can't insert node ","\x5a","\xc7","\x4d","\x53") + key);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(358)
			::String tmp26 = (tmp25 + HX_HCSTRING(" with the size of (","\xb5","\x20","\xc2","\x55"));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(358)
			int tmp27 = data->get_width();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(358)
			::String tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(358)
			::String tmp29 = (tmp28 + HX_HCSTRING("; ","\x85","\x33","\x00","\x00"));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(358)
			int tmp30 = data->get_height();		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(358)
			::String tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(358)
			::String tmp32 = (tmp31 + HX_HCSTRING(") in atlas ","\x99","\x70","\x14","\xd3"));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(358)
			::String tmp33 = this->name;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(358)
			::String tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(358)
			::String tmp35 = (tmp34 + HX_HCSTRING(" with the max size of (","\xb9","\xb3","\x66","\x74"));		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(358)
			int tmp36 = this->maxWidth;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(358)
			::String tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(358)
			::String tmp38 = (tmp37 + HX_HCSTRING("; ","\x85","\x33","\x00","\x00"));		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(358)
			int tmp39 = this->maxHeight;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(358)
			::String tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(358)
			::String tmp41 = (tmp40 + HX_HCSTRING(") and powerOfTwo: ","\xd6","\x69","\x4d","\x94"));		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(358)
			bool tmp42 = this->powerOfTwo;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(358)
			::String tmp43 = ::Std_obj::string(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(358)
			::String tmp44 = (tmp41 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(358)
			HX_STACK_DO_THROW(tmp44);
			HX_STACK_LINE(360)
			return null();
		}
		HX_STACK_LINE(363)
		::flixel::graphics::atlas::FlxNode tmp25 = this->root;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(363)
		int tmp26 = rootWidth;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(363)
		tmp25->set_width(tmp26);
		HX_STACK_LINE(364)
		::flixel::graphics::atlas::FlxNode tmp27 = this->root;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(364)
		int tmp28 = rootHeight;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(364)
		tmp27->set_height(tmp28);
		HX_STACK_LINE(366)
		::flixel::graphics::atlas::FlxNode tmp29 = this->root;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(366)
		int tmp30 = insertWidth;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(366)
		int tmp31 = insertHeight;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(366)
		bool tmp32 = this->needToDivideHorizontally(tmp29,tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(366)
		bool horizontally = tmp32;		HX_STACK_VAR(horizontally,"horizontally");
		HX_STACK_LINE(367)
		::flixel::graphics::atlas::FlxNode tmp33 = this->root;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(367)
		int tmp34 = insertWidth;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(367)
		int tmp35 = insertHeight;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(367)
		bool tmp36 = horizontally;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(367)
		::openfl::_legacy::display::BitmapData tmp37 = data;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(367)
		::String tmp38 = key;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(367)
		::flixel::graphics::atlas::FlxNode tmp39 = this->divideNode(tmp33,tmp34,tmp35,tmp36,tmp37,tmp38,null());		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(367)
		return tmp39;
	}
	HX_STACK_LINE(370)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlas_obj,insertFirstNodeInRoot,return )

::flixel::graphics::atlas::FlxNode FlxAtlas_obj::expand( ::openfl::_legacy::display::BitmapData data,::String key){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","expand",0x67ef7d5b,"flixel.graphics.atlas.FlxAtlas.expand","flixel/graphics/atlas/FlxAtlas.hx",374,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(375)
	::flixel::graphics::atlas::FlxNode tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(375)
	::flixel::graphics::atlas::FlxNode tmp1 = tmp->right;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(375)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(375)
	if ((tmp2)){
		HX_STACK_LINE(377)
		int tmp3 = data->get_width();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(377)
		int tmp4 = this->border;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(377)
		int tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(377)
		int insertWidth = tmp5;		HX_STACK_VAR(insertWidth,"insertWidth");
		HX_STACK_LINE(378)
		int tmp6 = data->get_height();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(378)
		int tmp7 = this->border;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(378)
		int tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(378)
		int insertHeight = tmp8;		HX_STACK_VAR(insertHeight,"insertHeight");
		HX_STACK_LINE(381)
		::flixel::graphics::atlas::FlxNode tmp9 = this->root;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(381)
		Float tmp10 = tmp9->rect->width;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(381)
		int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(381)
		int tmp12 = insertWidth;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(381)
		int tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(381)
		int addRightWidth = tmp13;		HX_STACK_VAR(addRightWidth,"addRightWidth");
		HX_STACK_LINE(382)
		::flixel::graphics::atlas::FlxNode tmp14 = this->root;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(382)
		Float tmp15 = tmp14->rect->height;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(382)
		int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(382)
		int tmp17 = insertHeight;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(382)
		Float tmp18 = ::Math_obj::max(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(382)
		int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(382)
		int addRightHeight = tmp19;		HX_STACK_VAR(addRightHeight,"addRightHeight");
		HX_STACK_LINE(384)
		::flixel::graphics::atlas::FlxNode tmp20 = this->root;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(384)
		Float tmp21 = tmp20->rect->width;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(384)
		int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(384)
		int tmp23 = insertWidth;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(384)
		Float tmp24 = ::Math_obj::max(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(384)
		int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(384)
		int addBottomWidth = tmp25;		HX_STACK_VAR(addBottomWidth,"addBottomWidth");
		HX_STACK_LINE(385)
		::flixel::graphics::atlas::FlxNode tmp26 = this->root;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(385)
		Float tmp27 = tmp26->rect->height;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(385)
		int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(385)
		int tmp29 = insertHeight;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(385)
		int tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(385)
		int addBottomHeight = tmp30;		HX_STACK_VAR(addBottomHeight,"addBottomHeight");
		HX_STACK_LINE(387)
		int addRightWidthRotate = addRightWidth;		HX_STACK_VAR(addRightWidthRotate,"addRightWidthRotate");
		HX_STACK_LINE(388)
		int addRightHeightRotate = addRightHeight;		HX_STACK_VAR(addRightHeightRotate,"addRightHeightRotate");
		HX_STACK_LINE(390)
		int addBottomWidthRotate = addBottomWidth;		HX_STACK_VAR(addBottomWidthRotate,"addBottomWidthRotate");
		HX_STACK_LINE(391)
		int addBottomHeightRotate = addBottomHeight;		HX_STACK_VAR(addBottomHeightRotate,"addBottomHeightRotate");
		HX_STACK_LINE(393)
		bool tmp31 = this->allowRotation;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(393)
		if ((tmp31)){
			HX_STACK_LINE(395)
			::flixel::graphics::atlas::FlxNode tmp32 = this->root;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(395)
			Float tmp33 = tmp32->rect->width;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(395)
			int tmp34 = ::Std_obj::_int(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(395)
			int tmp35 = insertHeight;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(395)
			int tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(395)
			addRightWidthRotate = tmp36;
			HX_STACK_LINE(396)
			::flixel::graphics::atlas::FlxNode tmp37 = this->root;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(396)
			Float tmp38 = tmp37->rect->height;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(396)
			int tmp39 = ::Std_obj::_int(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(396)
			int tmp40 = insertWidth;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(396)
			Float tmp41 = ::Math_obj::max(tmp39,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(396)
			int tmp42 = ::Std_obj::_int(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(396)
			addRightHeightRotate = tmp42;
			HX_STACK_LINE(398)
			::flixel::graphics::atlas::FlxNode tmp43 = this->root;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(398)
			Float tmp44 = tmp43->rect->width;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(398)
			int tmp45 = ::Std_obj::_int(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(398)
			int tmp46 = insertHeight;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(398)
			Float tmp47 = ::Math_obj::max(tmp45,tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(398)
			int tmp48 = ::Std_obj::_int(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(398)
			addBottomWidthRotate = tmp48;
			HX_STACK_LINE(399)
			::flixel::graphics::atlas::FlxNode tmp49 = this->root;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(399)
			Float tmp50 = tmp49->rect->height;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(399)
			int tmp51 = ::Std_obj::_int(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(399)
			int tmp52 = insertWidth;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(399)
			int tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(399)
			addBottomHeightRotate = tmp53;
		}
		HX_STACK_LINE(402)
		bool tmp32 = this->powerOfTwo;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(402)
		if ((tmp32)){
			HX_STACK_LINE(404)
			int tmp33 = addRightWidth;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(404)
			int tmp34 = this->getNextPowerOfTwo(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(404)
			int tmp35 = addRightWidth = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(404)
			addRightWidthRotate = tmp35;
			HX_STACK_LINE(405)
			int tmp36 = addRightHeight;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(405)
			int tmp37 = this->getNextPowerOfTwo(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(405)
			int tmp38 = addRightHeight = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(405)
			addRightHeightRotate = tmp38;
			HX_STACK_LINE(406)
			int tmp39 = addBottomWidth;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(406)
			int tmp40 = this->getNextPowerOfTwo(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(406)
			int tmp41 = addBottomWidth = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(406)
			addBottomWidthRotate = tmp41;
			HX_STACK_LINE(407)
			int tmp42 = addBottomHeight;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(407)
			int tmp43 = this->getNextPowerOfTwo(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(407)
			int tmp44 = addBottomHeight = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(407)
			addBottomHeightRotate = tmp44;
			HX_STACK_LINE(409)
			bool tmp45 = this->allowRotation;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(409)
			if ((tmp45)){
				HX_STACK_LINE(411)
				int tmp46 = addRightWidthRotate;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(411)
				int tmp47 = this->getNextPowerOfTwo(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(411)
				addRightWidthRotate = tmp47;
				HX_STACK_LINE(412)
				int tmp48 = addRightHeightRotate;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(412)
				int tmp49 = this->getNextPowerOfTwo(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(412)
				addRightHeightRotate = tmp49;
				HX_STACK_LINE(413)
				int tmp50 = addBottomWidthRotate;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(413)
				int tmp51 = this->getNextPowerOfTwo(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(413)
				addBottomWidthRotate = tmp51;
				HX_STACK_LINE(414)
				int tmp52 = addBottomHeightRotate;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(414)
				int tmp53 = this->getNextPowerOfTwo(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(414)
				addBottomHeightRotate = tmp53;
			}
		}
		HX_STACK_LINE(419)
		bool canExpandRight = true;		HX_STACK_VAR(canExpandRight,"canExpandRight");
		HX_STACK_LINE(420)
		bool canExpandBottom = true;		HX_STACK_VAR(canExpandBottom,"canExpandBottom");
		HX_STACK_LINE(422)
		bool tmp33 = this->allowRotation;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(422)
		bool canExpandRightRotate = tmp33;		HX_STACK_VAR(canExpandRightRotate,"canExpandRightRotate");
		HX_STACK_LINE(423)
		bool tmp34 = this->allowRotation;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(423)
		bool canExpandBottomRotate = tmp34;		HX_STACK_VAR(canExpandBottomRotate,"canExpandBottomRotate");
		HX_STACK_LINE(425)
		int tmp35 = this->maxWidth;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(425)
		bool tmp36 = (tmp35 > (int)0);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(425)
		bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(425)
		bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(425)
		if ((tmp37)){
			HX_STACK_LINE(425)
			int tmp39 = addRightWidth;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(425)
			int tmp40 = this->maxWidth;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(425)
			int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(425)
			int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(425)
			tmp38 = (tmp39 > tmp42);
		}
		else{
			HX_STACK_LINE(425)
			tmp38 = false;
		}
		HX_STACK_LINE(425)
		bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(425)
		bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(425)
		if ((tmp39)){
			HX_STACK_LINE(425)
			int tmp41 = this->maxHeight;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(425)
			int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(425)
			bool tmp43 = (tmp42 > (int)0);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(425)
			bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(425)
			bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(425)
			if ((tmp45)){
				HX_STACK_LINE(425)
				int tmp46 = addRightHeight;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(425)
				int tmp47 = this->maxHeight;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(425)
				int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(425)
				int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(425)
				tmp40 = (tmp46 > tmp49);
			}
			else{
				HX_STACK_LINE(425)
				tmp40 = false;
			}
		}
		else{
			HX_STACK_LINE(425)
			tmp40 = true;
		}
		HX_STACK_LINE(425)
		if ((tmp40)){
			HX_STACK_LINE(426)
			canExpandRight = false;
		}
		HX_STACK_LINE(428)
		int tmp41 = this->maxWidth;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(428)
		bool tmp42 = (tmp41 > (int)0);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(428)
		bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(428)
		bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(428)
		if ((tmp43)){
			HX_STACK_LINE(428)
			int tmp45 = addBottomWidth;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(428)
			int tmp46 = this->maxWidth;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(428)
			int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(428)
			int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(428)
			tmp44 = (tmp45 > tmp48);
		}
		else{
			HX_STACK_LINE(428)
			tmp44 = false;
		}
		HX_STACK_LINE(428)
		bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(428)
		bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(428)
		if ((tmp45)){
			HX_STACK_LINE(428)
			int tmp47 = this->maxHeight;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(428)
			int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(428)
			bool tmp49 = (tmp48 > (int)0);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(428)
			bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(428)
			bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(428)
			if ((tmp51)){
				HX_STACK_LINE(428)
				int tmp52 = addBottomHeight;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(428)
				int tmp53 = this->maxHeight;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(428)
				int tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(428)
				int tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(428)
				tmp46 = (tmp52 > tmp55);
			}
			else{
				HX_STACK_LINE(428)
				tmp46 = false;
			}
		}
		else{
			HX_STACK_LINE(428)
			tmp46 = true;
		}
		HX_STACK_LINE(428)
		if ((tmp46)){
			HX_STACK_LINE(429)
			canExpandBottom = false;
		}
		HX_STACK_LINE(431)
		int tmp47 = this->maxWidth;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(431)
		bool tmp48 = (tmp47 > (int)0);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(431)
		bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(431)
		bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(431)
		if ((tmp49)){
			HX_STACK_LINE(431)
			int tmp51 = addRightWidthRotate;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(431)
			int tmp52 = this->maxWidth;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(431)
			int tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(431)
			int tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(431)
			tmp50 = (tmp51 > tmp54);
		}
		else{
			HX_STACK_LINE(431)
			tmp50 = false;
		}
		HX_STACK_LINE(431)
		bool tmp51 = !(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(431)
		bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(431)
		if ((tmp51)){
			HX_STACK_LINE(431)
			int tmp53 = this->maxHeight;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(431)
			int tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(431)
			bool tmp55 = (tmp54 > (int)0);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(431)
			bool tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(431)
			bool tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(431)
			if ((tmp57)){
				HX_STACK_LINE(431)
				int tmp58 = addRightHeightRotate;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(431)
				int tmp59 = this->maxHeight;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(431)
				int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(431)
				int tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(431)
				tmp52 = (tmp58 > tmp61);
			}
			else{
				HX_STACK_LINE(431)
				tmp52 = false;
			}
		}
		else{
			HX_STACK_LINE(431)
			tmp52 = true;
		}
		HX_STACK_LINE(431)
		if ((tmp52)){
			HX_STACK_LINE(432)
			canExpandRightRotate = false;
		}
		HX_STACK_LINE(434)
		int tmp53 = this->maxWidth;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(434)
		bool tmp54 = (tmp53 > (int)0);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(434)
		bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(434)
		bool tmp56;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(434)
		if ((tmp55)){
			HX_STACK_LINE(434)
			int tmp57 = addBottomWidthRotate;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(434)
			int tmp58 = this->maxWidth;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(434)
			int tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(434)
			int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(434)
			tmp56 = (tmp57 > tmp60);
		}
		else{
			HX_STACK_LINE(434)
			tmp56 = false;
		}
		HX_STACK_LINE(434)
		bool tmp57 = !(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(434)
		bool tmp58;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(434)
		if ((tmp57)){
			HX_STACK_LINE(434)
			int tmp59 = this->maxHeight;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(434)
			int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(434)
			bool tmp61 = (tmp60 > (int)0);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(434)
			bool tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(434)
			bool tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(434)
			if ((tmp63)){
				HX_STACK_LINE(434)
				int tmp64 = addBottomHeightRotate;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(434)
				int tmp65 = this->maxHeight;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(434)
				int tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(434)
				int tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(434)
				tmp58 = (tmp64 > tmp67);
			}
			else{
				HX_STACK_LINE(434)
				tmp58 = false;
			}
		}
		else{
			HX_STACK_LINE(434)
			tmp58 = true;
		}
		HX_STACK_LINE(434)
		if ((tmp58)){
			HX_STACK_LINE(435)
			canExpandBottomRotate = false;
		}
		HX_STACK_LINE(437)
		bool tmp59 = canExpandRight;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(437)
		bool tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(437)
		bool tmp61 = !(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(437)
		bool tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(437)
		bool tmp63;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(437)
		if ((tmp62)){
			HX_STACK_LINE(437)
			bool tmp64 = canExpandBottom;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(437)
			bool tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(437)
			bool tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(437)
			tmp63 = !(tmp66);
		}
		else{
			HX_STACK_LINE(437)
			tmp63 = false;
		}
		HX_STACK_LINE(437)
		bool tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(437)
		bool tmp65;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(437)
		if ((tmp64)){
			HX_STACK_LINE(437)
			bool tmp66 = canExpandRightRotate;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(437)
			bool tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(437)
			bool tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(437)
			tmp65 = !(tmp68);
		}
		else{
			HX_STACK_LINE(437)
			tmp65 = false;
		}
		HX_STACK_LINE(437)
		bool tmp66;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(437)
		if ((tmp65)){
			HX_STACK_LINE(437)
			bool tmp67 = canExpandBottomRotate;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(437)
			bool tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(437)
			tmp66 = !(tmp68);
		}
		else{
			HX_STACK_LINE(437)
			tmp66 = false;
		}
		HX_STACK_LINE(437)
		if ((tmp66)){
			HX_STACK_LINE(440)
			::String tmp67 = (HX_HCSTRING("Can't insert node ","\x5a","\xc7","\x4d","\x53") + key);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(440)
			::String tmp68 = (tmp67 + HX_HCSTRING(" with the size of (","\xb5","\x20","\xc2","\x55"));		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(440)
			int tmp69 = data->get_width();		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(440)
			::String tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(440)
			::String tmp71 = (tmp70 + HX_HCSTRING("; ","\x85","\x33","\x00","\x00"));		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(440)
			int tmp72 = data->get_height();		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(440)
			::String tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(440)
			::String tmp74 = (tmp73 + HX_HCSTRING(") in atlas ","\x99","\x70","\x14","\xd3"));		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(440)
			::String tmp75 = this->name;		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(440)
			::String tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(440)
			::String tmp77 = (tmp76 + HX_HCSTRING(" with the max size of (","\xb9","\xb3","\x66","\x74"));		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(440)
			int tmp78 = this->maxWidth;		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(440)
			::String tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(440)
			::String tmp80 = (tmp79 + HX_HCSTRING("; ","\x85","\x33","\x00","\x00"));		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(440)
			int tmp81 = this->maxHeight;		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(440)
			::String tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(440)
			::String tmp83 = (tmp82 + HX_HCSTRING(") and powerOfTwo: ","\xd6","\x69","\x4d","\x94"));		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(440)
			bool tmp84 = this->powerOfTwo;		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(440)
			::String tmp85 = ::Std_obj::string(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(440)
			::String tmp86 = (tmp83 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(440)
			HX_STACK_DO_THROW(tmp86);
			HX_STACK_LINE(442)
			return null();
		}
		HX_STACK_LINE(447)
		int tmp67 = (addRightWidth * addRightHeight);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(447)
		int addRightArea = tmp67;		HX_STACK_VAR(addRightArea,"addRightArea");
		HX_STACK_LINE(448)
		int tmp68 = (addBottomWidth * addBottomHeight);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(448)
		int addBottomArea = tmp68;		HX_STACK_VAR(addBottomArea,"addBottomArea");
		HX_STACK_LINE(450)
		int tmp69 = (addRightWidthRotate * addRightHeightRotate);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(450)
		int addRightAreaRotate = tmp69;		HX_STACK_VAR(addRightAreaRotate,"addRightAreaRotate");
		HX_STACK_LINE(451)
		int tmp70 = (addBottomWidthRotate * addBottomHeightRotate);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(451)
		int addBottomAreaRotate = tmp70;		HX_STACK_VAR(addBottomAreaRotate,"addBottomAreaRotate");
		HX_STACK_LINE(453)
		bool rotateRight = false;		HX_STACK_VAR(rotateRight,"rotateRight");
		HX_STACK_LINE(454)
		bool rotateBottom = false;		HX_STACK_VAR(rotateBottom,"rotateBottom");
		HX_STACK_LINE(455)
		bool rotateNode = false;		HX_STACK_VAR(rotateNode,"rotateNode");
		HX_STACK_LINE(457)
		bool tmp71 = canExpandRight;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(457)
		bool tmp72 = tmp71;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(457)
		bool tmp73;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(457)
		if ((tmp72)){
			HX_STACK_LINE(457)
			tmp73 = canExpandRightRotate;
		}
		else{
			HX_STACK_LINE(457)
			tmp73 = false;
		}
		HX_STACK_LINE(457)
		bool tmp74 = tmp73;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(457)
		bool tmp75;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(457)
		if ((tmp74)){
			HX_STACK_LINE(457)
			tmp75 = (addRightArea > addRightAreaRotate);
		}
		else{
			HX_STACK_LINE(457)
			tmp75 = false;
		}
		HX_STACK_LINE(457)
		bool tmp76 = !(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(457)
		bool tmp77;		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(457)
		if ((tmp76)){
			HX_STACK_LINE(457)
			bool tmp78 = canExpandRight;		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(457)
			bool tmp79 = tmp78;		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(457)
			bool tmp80 = tmp79;		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(457)
			bool tmp81 = !(tmp80);		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(457)
			bool tmp82 = tmp81;		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(457)
			bool tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(457)
			if ((tmp83)){
				HX_STACK_LINE(457)
				tmp77 = canExpandRightRotate;
			}
			else{
				HX_STACK_LINE(457)
				tmp77 = false;
			}
		}
		else{
			HX_STACK_LINE(457)
			tmp77 = true;
		}
		HX_STACK_LINE(457)
		if ((tmp77)){
			HX_STACK_LINE(459)
			addRightArea = addBottomAreaRotate;
			HX_STACK_LINE(460)
			addRightWidth = addRightWidthRotate;
			HX_STACK_LINE(461)
			addRightHeight = addRightHeightRotate;
			HX_STACK_LINE(462)
			canExpandRight = true;
			HX_STACK_LINE(463)
			rotateRight = true;
		}
		HX_STACK_LINE(466)
		bool tmp78 = canExpandBottom;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(466)
		bool tmp79 = tmp78;		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(466)
		bool tmp80;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(466)
		if ((tmp79)){
			HX_STACK_LINE(466)
			tmp80 = canExpandBottomRotate;
		}
		else{
			HX_STACK_LINE(466)
			tmp80 = false;
		}
		HX_STACK_LINE(466)
		bool tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(466)
		bool tmp82;		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(466)
		if ((tmp81)){
			HX_STACK_LINE(466)
			tmp82 = (addBottomArea > addBottomAreaRotate);
		}
		else{
			HX_STACK_LINE(466)
			tmp82 = false;
		}
		HX_STACK_LINE(466)
		bool tmp83 = !(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(466)
		bool tmp84;		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(466)
		if ((tmp83)){
			HX_STACK_LINE(466)
			bool tmp85 = canExpandBottom;		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(466)
			bool tmp86 = tmp85;		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(466)
			bool tmp87 = tmp86;		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(466)
			bool tmp88 = !(tmp87);		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(466)
			bool tmp89 = tmp88;		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(466)
			bool tmp90 = tmp89;		HX_STACK_VAR(tmp90,"tmp90");
			HX_STACK_LINE(466)
			if ((tmp90)){
				HX_STACK_LINE(466)
				tmp84 = canExpandBottomRotate;
			}
			else{
				HX_STACK_LINE(466)
				tmp84 = false;
			}
		}
		else{
			HX_STACK_LINE(466)
			tmp84 = true;
		}
		HX_STACK_LINE(466)
		if ((tmp84)){
			HX_STACK_LINE(468)
			addBottomArea = addBottomAreaRotate;
			HX_STACK_LINE(469)
			addBottomWidth = addBottomWidthRotate;
			HX_STACK_LINE(470)
			addBottomHeight = addBottomHeightRotate;
			HX_STACK_LINE(471)
			canExpandBottom = true;
			HX_STACK_LINE(472)
			rotateBottom = true;
		}
		HX_STACK_LINE(475)
		bool tmp85 = canExpandRight;		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(475)
		bool tmp86 = tmp85;		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(475)
		bool tmp87 = !(tmp86);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(475)
		bool tmp88;		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(475)
		if ((tmp87)){
			HX_STACK_LINE(475)
			tmp88 = canExpandBottom;
		}
		else{
			HX_STACK_LINE(475)
			tmp88 = false;
		}
		HX_STACK_LINE(475)
		if ((tmp88)){
			HX_STACK_LINE(477)
			int tmp89 = (addBottomArea + (int)1);		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(477)
			addRightArea = tmp89;
			HX_STACK_LINE(478)
			rotateNode = rotateRight;
		}
		else{
			HX_STACK_LINE(480)
			bool tmp89 = canExpandRight;		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(480)
			bool tmp90;		HX_STACK_VAR(tmp90,"tmp90");
			HX_STACK_LINE(480)
			if ((tmp89)){
				HX_STACK_LINE(480)
				bool tmp91 = canExpandBottom;		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(480)
				bool tmp92 = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
				HX_STACK_LINE(480)
				tmp90 = !(tmp92);
			}
			else{
				HX_STACK_LINE(480)
				tmp90 = false;
			}
			HX_STACK_LINE(480)
			if ((tmp90)){
				HX_STACK_LINE(482)
				int tmp91 = (addRightArea + (int)1);		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(482)
				addBottomArea = tmp91;
				HX_STACK_LINE(483)
				rotateNode = rotateBottom;
			}
		}
		HX_STACK_LINE(486)
		::flixel::graphics::atlas::FlxNode dataNode = null();		HX_STACK_VAR(dataNode,"dataNode");
		HX_STACK_LINE(487)
		::flixel::graphics::atlas::FlxNode tmp89 = this->root;		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(487)
		::flixel::graphics::atlas::FlxNode temp = tmp89;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(488)
		int insertNodeWidth = insertWidth;		HX_STACK_VAR(insertNodeWidth,"insertNodeWidth");
		HX_STACK_LINE(489)
		int insertNodeHeight = insertHeight;		HX_STACK_VAR(insertNodeHeight,"insertNodeHeight");
		HX_STACK_LINE(492)
		bool tmp90 = (addBottomArea >= addRightArea);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(492)
		if ((tmp90)){
			HX_STACK_LINE(494)
			bool tmp91 = rotateRight;		HX_STACK_VAR(tmp91,"tmp91");
			HX_STACK_LINE(494)
			if ((tmp91)){
				HX_STACK_LINE(496)
				insertNodeWidth = insertHeight;
				HX_STACK_LINE(497)
				insertNodeHeight = insertWidth;
			}
			HX_STACK_LINE(500)
			Float tmp92 = temp->rect->width;		HX_STACK_VAR(tmp92,"tmp92");
			HX_STACK_LINE(500)
			int tmp93 = ::Std_obj::_int(tmp92);		HX_STACK_VAR(tmp93,"tmp93");
			HX_STACK_LINE(500)
			int tmp94 = insertNodeWidth;		HX_STACK_VAR(tmp94,"tmp94");
			HX_STACK_LINE(500)
			int tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
			HX_STACK_LINE(500)
			Float tmp96 = temp->rect->height;		HX_STACK_VAR(tmp96,"tmp96");
			HX_STACK_LINE(500)
			int tmp97 = ::Std_obj::_int(tmp96);		HX_STACK_VAR(tmp97,"tmp97");
			HX_STACK_LINE(500)
			int tmp98 = insertNodeHeight;		HX_STACK_VAR(tmp98,"tmp98");
			HX_STACK_LINE(500)
			Float tmp99 = ::Math_obj::max(tmp97,tmp98);		HX_STACK_VAR(tmp99,"tmp99");
			HX_STACK_LINE(500)
			this->expandRoot(tmp95,tmp99,true,null());
			HX_STACK_LINE(501)
			::flixel::graphics::atlas::FlxNode tmp100 = this->root;		HX_STACK_VAR(tmp100,"tmp100");
			HX_STACK_LINE(501)
			::flixel::graphics::atlas::FlxNode tmp101 = tmp100->right;		HX_STACK_VAR(tmp101,"tmp101");
			HX_STACK_LINE(501)
			int tmp102 = insertNodeWidth;		HX_STACK_VAR(tmp102,"tmp102");
			HX_STACK_LINE(501)
			int tmp103 = insertNodeHeight;		HX_STACK_VAR(tmp103,"tmp103");
			HX_STACK_LINE(501)
			::openfl::_legacy::display::BitmapData tmp104 = data;		HX_STACK_VAR(tmp104,"tmp104");
			HX_STACK_LINE(501)
			::String tmp105 = key;		HX_STACK_VAR(tmp105,"tmp105");
			HX_STACK_LINE(501)
			bool tmp106 = rotateRight;		HX_STACK_VAR(tmp106,"tmp106");
			HX_STACK_LINE(501)
			::flixel::graphics::atlas::FlxNode tmp107 = this->divideNode(tmp101,tmp102,tmp103,true,tmp104,tmp105,tmp106);		HX_STACK_VAR(tmp107,"tmp107");
			HX_STACK_LINE(501)
			dataNode = tmp107;
			HX_STACK_LINE(502)
			int tmp108 = addRightWidth;		HX_STACK_VAR(tmp108,"tmp108");
			HX_STACK_LINE(502)
			int tmp109 = addRightHeight;		HX_STACK_VAR(tmp109,"tmp109");
			HX_STACK_LINE(502)
			this->expandRoot(tmp108,tmp109,false,true);
		}
		else{
			HX_STACK_LINE(506)
			bool tmp91 = rotateBottom;		HX_STACK_VAR(tmp91,"tmp91");
			HX_STACK_LINE(506)
			if ((tmp91)){
				HX_STACK_LINE(508)
				insertNodeWidth = insertHeight;
				HX_STACK_LINE(509)
				insertNodeHeight = insertWidth;
			}
			HX_STACK_LINE(512)
			Float tmp92 = temp->rect->width;		HX_STACK_VAR(tmp92,"tmp92");
			HX_STACK_LINE(512)
			int tmp93 = ::Std_obj::_int(tmp92);		HX_STACK_VAR(tmp93,"tmp93");
			HX_STACK_LINE(512)
			int tmp94 = insertNodeWidth;		HX_STACK_VAR(tmp94,"tmp94");
			HX_STACK_LINE(512)
			Float tmp95 = ::Math_obj::max(tmp93,tmp94);		HX_STACK_VAR(tmp95,"tmp95");
			HX_STACK_LINE(512)
			Float tmp96 = temp->rect->height;		HX_STACK_VAR(tmp96,"tmp96");
			HX_STACK_LINE(512)
			int tmp97 = ::Std_obj::_int(tmp96);		HX_STACK_VAR(tmp97,"tmp97");
			HX_STACK_LINE(512)
			int tmp98 = insertNodeHeight;		HX_STACK_VAR(tmp98,"tmp98");
			HX_STACK_LINE(512)
			int tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
			HX_STACK_LINE(512)
			this->expandRoot(tmp95,tmp99,false,null());
			HX_STACK_LINE(513)
			::flixel::graphics::atlas::FlxNode tmp100 = this->root;		HX_STACK_VAR(tmp100,"tmp100");
			HX_STACK_LINE(513)
			::flixel::graphics::atlas::FlxNode tmp101 = tmp100->right;		HX_STACK_VAR(tmp101,"tmp101");
			HX_STACK_LINE(513)
			int tmp102 = insertNodeWidth;		HX_STACK_VAR(tmp102,"tmp102");
			HX_STACK_LINE(513)
			int tmp103 = insertNodeHeight;		HX_STACK_VAR(tmp103,"tmp103");
			HX_STACK_LINE(513)
			::openfl::_legacy::display::BitmapData tmp104 = data;		HX_STACK_VAR(tmp104,"tmp104");
			HX_STACK_LINE(513)
			::String tmp105 = key;		HX_STACK_VAR(tmp105,"tmp105");
			HX_STACK_LINE(513)
			bool tmp106 = rotateBottom;		HX_STACK_VAR(tmp106,"tmp106");
			HX_STACK_LINE(513)
			::flixel::graphics::atlas::FlxNode tmp107 = this->divideNode(tmp101,tmp102,tmp103,true,tmp104,tmp105,tmp106);		HX_STACK_VAR(tmp107,"tmp107");
			HX_STACK_LINE(513)
			dataNode = tmp107;
			HX_STACK_LINE(514)
			int tmp108 = addBottomWidth;		HX_STACK_VAR(tmp108,"tmp108");
			HX_STACK_LINE(514)
			int tmp109 = addBottomHeight;		HX_STACK_VAR(tmp109,"tmp109");
			HX_STACK_LINE(514)
			this->expandRoot(tmp108,tmp109,false,true);
		}
		HX_STACK_LINE(517)
		::flixel::graphics::atlas::FlxNode tmp91 = dataNode;		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(517)
		return tmp91;
	}
	HX_STACK_LINE(520)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlas_obj,expand,return )

Void FlxAtlas_obj::expandRoot( Float newWidth,Float newHeight,bool divideHorizontally,hx::Null< bool >  __o_decideHowToDivide){
bool decideHowToDivide = __o_decideHowToDivide.Default(false);
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","expandRoot",0x3df0e11d,"flixel.graphics.atlas.FlxAtlas.expandRoot","flixel/graphics/atlas/FlxAtlas.hx",524,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newWidth,"newWidth")
	HX_STACK_ARG(newHeight,"newHeight")
	HX_STACK_ARG(divideHorizontally,"divideHorizontally")
	HX_STACK_ARG(decideHowToDivide,"decideHowToDivide")
{
		HX_STACK_LINE(525)
		Float tmp = newWidth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(525)
		::flixel::graphics::atlas::FlxNode tmp1 = this->root;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(525)
		Float tmp2 = tmp1->rect->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(525)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(525)
		bool tmp4 = (tmp > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(525)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(525)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(525)
		if ((tmp5)){
			HX_STACK_LINE(525)
			Float tmp7 = newHeight;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(525)
			::flixel::graphics::atlas::FlxNode tmp8 = this->root;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(525)
			::flixel::graphics::atlas::FlxNode tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(525)
			Float tmp10 = tmp9->rect->height;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(525)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(525)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(525)
			int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(525)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(525)
			tmp6 = (tmp7 > tmp14);
		}
		else{
			HX_STACK_LINE(525)
			tmp6 = true;
		}
		HX_STACK_LINE(525)
		if ((tmp6)){
			HX_STACK_LINE(527)
			::flixel::graphics::atlas::FlxNode tmp7 = this->root;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(527)
			::flixel::graphics::atlas::FlxNode temp = tmp7;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(528)
			::flixel::math::FlxRect tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(528)
			{
				HX_STACK_LINE(528)
				::flixel::math::FlxRect tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(528)
				{
					HX_STACK_LINE(528)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp10 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(528)
					::flixel::math::FlxRect tmp11 = tmp10->get();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(528)
					::flixel::math::FlxRect _this = tmp11;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(528)
					_this->x = (int)0;
					HX_STACK_LINE(528)
					_this->y = (int)0;
					HX_STACK_LINE(528)
					_this->width = newWidth;
					HX_STACK_LINE(528)
					_this->height = newHeight;
					HX_STACK_LINE(528)
					tmp9 = _this;
				}
				HX_STACK_LINE(528)
				::flixel::math::FlxRect rect = tmp9;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(528)
				rect->_inPool = false;
				HX_STACK_LINE(528)
				tmp8 = rect;
			}
			HX_STACK_LINE(528)
			::flixel::graphics::atlas::FlxNode tmp9 = ::flixel::graphics::atlas::FlxNode_obj::__new(tmp8,hx::ObjectPtr<OBJ_>(this),null(),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(528)
			this->root = tmp9;
			HX_STACK_LINE(530)
			bool tmp10 = decideHowToDivide;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(530)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(530)
			if ((tmp10)){
				HX_STACK_LINE(530)
				::flixel::graphics::atlas::FlxNode tmp12 = this->root;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(530)
				Float tmp13 = temp->rect->width;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(530)
				int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(530)
				Float tmp15 = temp->rect->height;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(530)
				int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(530)
				tmp11 = this->needToDivideHorizontally(tmp12,tmp14,tmp16);
			}
			else{
				HX_STACK_LINE(530)
				tmp11 = divideHorizontally;
			}
			HX_STACK_LINE(530)
			divideHorizontally = tmp11;
			HX_STACK_LINE(532)
			::flixel::graphics::atlas::FlxNode tmp12 = this->root;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(532)
			Float tmp13 = temp->rect->width;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(532)
			int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(532)
			Float tmp15 = temp->rect->height;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(532)
			int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(532)
			bool tmp17 = divideHorizontally;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(532)
			this->divideNode(tmp12,tmp14,tmp16,tmp17,null(),null(),null());
			HX_STACK_LINE(533)
			::flixel::graphics::atlas::FlxNode tmp18 = this->root;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(533)
			tmp18->left->left = temp;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxAtlas_obj,expandRoot,(void))

Void FlxAtlas_obj::expandBitmapData( ){
{
		HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","expandBitmapData",0xdc8f96f4,"flixel.graphics.atlas.FlxAtlas.expandBitmapData","flixel/graphics/atlas/FlxAtlas.hx",538,0x03972f50)
		HX_STACK_THIS(this)
		HX_STACK_LINE(539)
		::openfl::_legacy::display::BitmapData tmp = this->_bitmapData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(539)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(539)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(539)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(539)
		if ((tmp2)){
			HX_STACK_LINE(539)
			::openfl::_legacy::display::BitmapData tmp4 = this->_bitmapData;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(539)
			::openfl::_legacy::display::BitmapData tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(539)
			::openfl::_legacy::display::BitmapData tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(539)
			int tmp7 = tmp6->get_width();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(539)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(539)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(539)
			::flixel::graphics::atlas::FlxNode tmp10 = this->root;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(539)
			::flixel::graphics::atlas::FlxNode tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(539)
			::flixel::graphics::atlas::FlxNode tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(539)
			Float tmp13 = tmp12->rect->width;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(539)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(539)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(539)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(539)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(539)
			int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(539)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(539)
			int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(539)
			tmp3 = (tmp9 == tmp20);
		}
		else{
			HX_STACK_LINE(539)
			tmp3 = false;
		}
		HX_STACK_LINE(539)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(539)
		if ((tmp3)){
			HX_STACK_LINE(539)
			::openfl::_legacy::display::BitmapData tmp5 = this->_bitmapData;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(539)
			::openfl::_legacy::display::BitmapData tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(539)
			int tmp7 = tmp6->get_height();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(539)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(539)
			::flixel::graphics::atlas::FlxNode tmp9 = this->root;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(539)
			::flixel::graphics::atlas::FlxNode tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(539)
			Float tmp11 = tmp10->rect->height;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(539)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(539)
			Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(539)
			int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(539)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(539)
			tmp4 = (tmp8 == tmp15);
		}
		else{
			HX_STACK_LINE(539)
			tmp4 = false;
		}
		HX_STACK_LINE(539)
		if ((tmp4)){
			HX_STACK_LINE(541)
			return null();
		}
		HX_STACK_LINE(544)
		::flixel::graphics::atlas::FlxNode tmp5 = this->root;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(544)
		Float tmp6 = tmp5->rect->width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(544)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(544)
		::flixel::graphics::atlas::FlxNode tmp8 = this->root;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(544)
		Float tmp9 = tmp8->rect->height;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(544)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(544)
		::openfl::_legacy::display::BitmapData tmp11 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp7,tmp10,true,(int)0,null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(544)
		::openfl::_legacy::display::BitmapData newBitmapData = tmp11;		HX_STACK_VAR(newBitmapData,"newBitmapData");
		HX_STACK_LINE(545)
		::openfl::_legacy::display::BitmapData tmp12 = this->_bitmapData;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(545)
		bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(545)
		if ((tmp13)){
			HX_STACK_LINE(547)
			::openfl::_legacy::geom::Point tmp14 = ::flixel::graphics::atlas::FlxAtlas_obj::point;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(547)
			tmp14->setTo((int)0,(int)0);
			HX_STACK_LINE(548)
			::openfl::_legacy::display::BitmapData tmp15 = this->_bitmapData;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(548)
			::openfl::_legacy::display::BitmapData tmp16 = this->_bitmapData;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(548)
			::openfl::_legacy::geom::Rectangle tmp17 = tmp16->get_rect();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(548)
			::openfl::_legacy::geom::Point tmp18 = ::flixel::graphics::atlas::FlxAtlas_obj::point;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(548)
			newBitmapData->copyPixels(tmp15,tmp17,tmp18,null(),null(),null());
		}
		HX_STACK_LINE(551)
		::openfl::_legacy::display::BitmapData tmp14 = this->_bitmapData;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(551)
		::openfl::_legacy::display::BitmapData tmp15 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(551)
		this->_bitmapData = tmp15;
		HX_STACK_LINE(552)
		::openfl::_legacy::display::BitmapData tmp16 = newBitmapData;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(552)
		this->set_bitmapData(tmp16);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,expandBitmapData,(void))

int FlxAtlas_obj::getNextPowerOfTwo( Float number){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","getNextPowerOfTwo",0x3bc20318,"flixel.graphics.atlas.FlxAtlas.getNextPowerOfTwo","flixel/graphics/atlas/FlxAtlas.hx",556,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(number,"number")
	HX_STACK_LINE(557)
	Float tmp = number;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(557)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(557)
	int n = tmp1;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(558)
	bool tmp2 = (n > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(558)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(558)
	if ((tmp2)){
		HX_STACK_LINE(558)
		int tmp4 = n;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(558)
		int tmp5 = (n - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(558)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(558)
		int tmp7 = (int(tmp4) & int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(558)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(558)
		tmp3 = (tmp8 == (int)0);
	}
	else{
		HX_STACK_LINE(558)
		tmp3 = false;
	}
	HX_STACK_LINE(558)
	if ((tmp3)){
		HX_STACK_LINE(560)
		int tmp4 = n;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(560)
		return tmp4;
	}
	HX_STACK_LINE(563)
	int result = (int)1;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(564)
	while((true)){
		HX_STACK_LINE(564)
		bool tmp4 = (result < n);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(564)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(564)
		if ((tmp5)){
			HX_STACK_LINE(564)
			break;
		}
		HX_STACK_LINE(564)
		hx::ShlEq(result,(int)1);
	}
	HX_STACK_LINE(565)
	int tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(565)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,getNextPowerOfTwo,return )

::flixel::graphics::frames::FlxTileFrames FlxAtlas_obj::addNodeWithSpacesAndBorders( Dynamic Graphic,::String Key,::flixel::math::FlxPoint tileSize,::flixel::math::FlxPoint tileSpacing,::flixel::math::FlxPoint tileBorder,::flixel::math::FlxRect region){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","addNodeWithSpacesAndBorders",0x375b9d25,"flixel.graphics.atlas.FlxAtlas.addNodeWithSpacesAndBorders","flixel/graphics/atlas/FlxAtlas.hx",581,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Key,"Key")
	HX_STACK_ARG(tileSize,"tileSize")
	HX_STACK_ARG(tileSpacing,"tileSpacing")
	HX_STACK_ARG(tileBorder,"tileBorder")
	HX_STACK_ARG(region,"region")
	HX_STACK_LINE(582)
	Dynamic tmp = Graphic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(582)
	::String tmp1 = Key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(582)
	::String tmp2 = ::flixel::_system::FlxAssets_obj::resolveKey(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(582)
	::String key = tmp2;		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(584)
	bool tmp3 = (key == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(584)
	if ((tmp3)){
		HX_STACK_LINE(587)
		HX_STACK_DO_THROW(HX_HCSTRING("addNodeWithSpacings can't find the key for specified bitmapdata. Please provide not null value as a Key argument.","\x68","\x27","\x93","\x19"));
		HX_STACK_LINE(589)
		return null();
	}
	HX_STACK_LINE(592)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp4 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(592)
	::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(592)
	::flixel::math::FlxPoint tmp6 = tileSize;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(592)
	::flixel::math::FlxPoint tmp7 = tileSpacing;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(592)
	::flixel::math::FlxPoint tmp8 = tileBorder;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(592)
	::flixel::math::FlxRect tmp9 = region;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(592)
	::String tmp10 = tmp4->__Field(HX_HCSTRING("getKeyWithSpacesAndBorders","\xac","\x4e","\xae","\x2a"), hx::paccDynamic )(tmp5,tmp6,tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(592)
	key = tmp10;
	HX_STACK_LINE(594)
	::String tmp11 = key;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(594)
	bool tmp12 = this->hasNodeWithName(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(594)
	if ((tmp12)){
		HX_STACK_LINE(595)
		::haxe::ds::StringMap tmp13 = this->nodes;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(595)
		::String tmp14 = key;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(595)
		::flixel::graphics::atlas::FlxNode tmp15 = tmp13->get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(595)
		::flixel::math::FlxPoint tmp16 = tileSize;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(595)
		::flixel::math::FlxPoint tmp17 = tileSpacing;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(595)
		::flixel::math::FlxPoint tmp18 = tileBorder;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(595)
		::flixel::graphics::frames::FlxTileFrames tmp19 = tmp15->getTileFrames(tmp16,tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(595)
		return tmp19;
	}
	HX_STACK_LINE(597)
	Dynamic tmp13 = Graphic;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(597)
	::openfl::_legacy::display::BitmapData tmp14 = ::flixel::_system::FlxAssets_obj::resolveBitmapData(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(597)
	::openfl::_legacy::display::BitmapData data = tmp14;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(599)
	bool tmp15 = (data == null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(599)
	if ((tmp15)){
		HX_STACK_LINE(602)
		Dynamic tmp16 = Graphic;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(602)
		::String tmp17 = ::Std_obj::string(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(602)
		::String tmp18 = (HX_HCSTRING("addNodeWithSpacings can't find bitmapdata with specified key: ","\x25","\x03","\x32","\x92") + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(602)
		::String tmp19 = (tmp18 + HX_HCSTRING(". Please provide valid value.","\x84","\xe6","\x88","\x32"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(602)
		HX_STACK_DO_THROW(tmp19);
		HX_STACK_LINE(604)
		return null();
	}
	HX_STACK_LINE(607)
	::openfl::_legacy::display::BitmapData tmp16 = data;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(607)
	::flixel::math::FlxPoint tmp17 = tileSize;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(607)
	::flixel::math::FlxPoint tmp18 = tileSpacing;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(607)
	::flixel::math::FlxPoint tmp19 = tileBorder;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(607)
	::flixel::math::FlxRect tmp20 = region;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(607)
	::openfl::_legacy::display::BitmapData tmp21 = ::flixel::util::FlxBitmapDataUtil_obj::addSpacesAndBorders(tmp16,tmp17,tmp18,tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(607)
	::openfl::_legacy::display::BitmapData nodeData = tmp21;		HX_STACK_VAR(nodeData,"nodeData");
	HX_STACK_LINE(608)
	::openfl::_legacy::display::BitmapData tmp22 = nodeData;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(608)
	::String tmp23 = key;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(608)
	::flixel::graphics::atlas::FlxNode tmp24 = this->addNode(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(608)
	::flixel::graphics::atlas::FlxNode node = tmp24;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(610)
	bool tmp25 = (node == null());		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(610)
	if ((tmp25)){
		HX_STACK_LINE(613)
		Dynamic tmp26 = Graphic;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(613)
		::String tmp27 = ::Std_obj::string(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(613)
		::String tmp28 = (HX_HCSTRING("addNodeWithSpacings can't insert provided image: ","\xa1","\x49","\x3a","\x35") + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(613)
		::String tmp29 = (tmp28 + HX_HCSTRING(") in atlas. It's probably too big.","\xa7","\x39","\x69","\x92"));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(613)
		HX_STACK_DO_THROW(tmp29);
		HX_STACK_LINE(615)
		return null();
	}
	HX_STACK_LINE(618)
	bool tmp26 = (tileBorder != null());		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(618)
	if ((tmp26)){
		HX_STACK_LINE(620)
		{
			HX_STACK_LINE(620)
			::flixel::math::FlxPoint _g = tileSize;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(620)
			Float tmp27 = _g->x;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(620)
			Float tmp28 = ((int)2 * tileBorder->x);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(620)
			Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(620)
			_g->set_x(tmp29);
		}
		HX_STACK_LINE(620)
		{
			HX_STACK_LINE(620)
			::flixel::math::FlxPoint _g = tileSize;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(620)
			Float tmp27 = _g->y;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(620)
			Float tmp28 = ((int)2 * tileBorder->y);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(620)
			Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(620)
			_g->set_y(tmp29);
		}
		HX_STACK_LINE(620)
		tileSize;
	}
	HX_STACK_LINE(623)
	::flixel::math::FlxPoint tmp27 = tileSize;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(623)
	::flixel::math::FlxPoint tmp28 = tileSpacing;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(623)
	::flixel::math::FlxPoint tmp29 = tileBorder;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(623)
	::flixel::graphics::frames::FlxTileFrames tmp30 = node->getTileFrames(tmp27,tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(623)
	return tmp30;
}


HX_DEFINE_DYNAMIC_FUNC6(FlxAtlas_obj,addNodeWithSpacesAndBorders,return )

::flixel::graphics::frames::FlxAtlasFrames FlxAtlas_obj::getAtlasFrames( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","getAtlasFrames",0xe2ec465c,"flixel.graphics.atlas.FlxAtlas.getAtlasFrames","flixel/graphics/atlas/FlxAtlas.hx",632,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(633)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(633)
	::openfl::_legacy::display::BitmapData tmp1 = this->get_bitmapData();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(633)
	::String tmp2 = this->name;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(633)
	::flixel::graphics::FlxGraphic tmp3 = tmp->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp1,false,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(633)
	::flixel::graphics::FlxGraphic graphic = tmp3;		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(635)
	::flixel::graphics::frames::FlxAtlasFrames tmp4 = graphic->get_atlasFrames();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(635)
	::flixel::graphics::frames::FlxAtlasFrames atlasFrames = tmp4;		HX_STACK_VAR(atlasFrames,"atlasFrames");
	HX_STACK_LINE(636)
	::flixel::graphics::frames::FlxAtlasFrames tmp5 = graphic->get_atlasFrames();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(636)
	bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(636)
	if ((tmp6)){
		HX_STACK_LINE(638)
		::flixel::graphics::frames::FlxAtlasFrames tmp7 = ::flixel::graphics::frames::FlxAtlasFrames_obj::__new(graphic,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(638)
		atlasFrames = tmp7;
	}
	HX_STACK_LINE(641)
	::haxe::ds::StringMap tmp7 = this->nodes;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(641)
	Dynamic tmp8 = tmp7->iterator();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(641)
	for(::cpp::FastIterator_obj< ::flixel::graphics::atlas::FlxNode > *__it = ::cpp::CreateFastIterator< ::flixel::graphics::atlas::FlxNode >(tmp8);  __it->hasNext(); ){
		::flixel::graphics::atlas::FlxNode node = __it->next();
		{
			HX_STACK_LINE(642)
			::flixel::graphics::atlas::FlxNode tmp9 = node;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(642)
			this->addNodeToAtlasFrames(tmp9);
		}
;
	}
	HX_STACK_LINE(644)
	::flixel::graphics::frames::FlxAtlasFrames tmp9 = atlasFrames;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(644)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,getAtlasFrames,return )

Void FlxAtlas_obj::addNodeToAtlasFrames( ::flixel::graphics::atlas::FlxNode node){
{
		HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","addNodeToAtlasFrames",0x19696d94,"flixel.graphics.atlas.FlxAtlas.addNodeToAtlasFrames","flixel/graphics/atlas/FlxAtlas.hx",648,0x03972f50)
		HX_STACK_THIS(this)
		HX_STACK_ARG(node,"node")
		HX_STACK_LINE(649)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(649)
		::String tmp1 = this->name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(649)
		::flixel::graphics::FlxGraphic tmp2 = tmp->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(649)
		::flixel::graphics::FlxGraphic graphic = tmp2;		HX_STACK_VAR(graphic,"graphic");
		HX_STACK_LINE(650)
		bool tmp3 = (graphic == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(650)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(650)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(650)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(650)
		if ((tmp5)){
			HX_STACK_LINE(650)
			::flixel::graphics::frames::FlxAtlasFrames tmp7 = graphic->get_atlasFrames();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(650)
			::flixel::graphics::frames::FlxAtlasFrames tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(650)
			::flixel::graphics::frames::FlxAtlasFrames tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(650)
			tmp6 = (tmp9 == null());
		}
		else{
			HX_STACK_LINE(650)
			tmp6 = true;
		}
		HX_STACK_LINE(650)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(650)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(650)
		if ((tmp7)){
			HX_STACK_LINE(650)
			tmp8 = (node == null());
		}
		else{
			HX_STACK_LINE(650)
			tmp8 = true;
		}
		HX_STACK_LINE(650)
		if ((tmp8)){
			HX_STACK_LINE(651)
			return null();
		}
		HX_STACK_LINE(653)
		::flixel::graphics::frames::FlxAtlasFrames tmp9 = graphic->get_atlasFrames();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(653)
		::flixel::graphics::frames::FlxAtlasFrames atlasFrames = tmp9;		HX_STACK_VAR(atlasFrames,"atlasFrames");
		HX_STACK_LINE(655)
		bool tmp10 = node->filled;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(655)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(655)
		if ((tmp10)){
			HX_STACK_LINE(655)
			::String tmp12 = node->key;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(655)
			::String tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(655)
			bool tmp14 = atlasFrames->framesHash->exists(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(655)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(655)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(655)
			tmp11 = !(tmp16);
		}
		else{
			HX_STACK_LINE(655)
			tmp11 = false;
		}
		HX_STACK_LINE(655)
		if ((tmp11)){
			HX_STACK_LINE(657)
			::flixel::math::FlxRect tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(657)
			{
				HX_STACK_LINE(657)
				Float tmp13 = node->rect->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(657)
				int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(657)
				Float X = tmp14;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(657)
				Float tmp15 = node->rect->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(657)
				int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(657)
				Float Y = tmp16;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(657)
				Float tmp17 = node->rect->width;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(657)
				int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(657)
				int tmp19 = this->border;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(657)
				int tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(657)
				Float Width = tmp20;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(657)
				Float tmp21 = node->rect->height;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(657)
				int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(657)
				int tmp23 = this->border;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(657)
				int tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(657)
				Float Height = tmp24;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(657)
				::flixel::math::FlxRect tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(657)
				{
					HX_STACK_LINE(657)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp26 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(657)
					::flixel::math::FlxRect tmp27 = tmp26->get();		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(657)
					::flixel::math::FlxRect _this = tmp27;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(657)
					_this->x = X;
					HX_STACK_LINE(657)
					_this->y = Y;
					HX_STACK_LINE(657)
					_this->width = Width;
					HX_STACK_LINE(657)
					_this->height = Height;
					HX_STACK_LINE(657)
					tmp25 = _this;
				}
				HX_STACK_LINE(657)
				::flixel::math::FlxRect rect = tmp25;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(657)
				rect->_inPool = false;
				HX_STACK_LINE(657)
				tmp12 = rect;
			}
			HX_STACK_LINE(657)
			::flixel::math::FlxRect frame = tmp12;		HX_STACK_VAR(frame,"frame");
			HX_STACK_LINE(658)
			bool tmp13 = node->rotated;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(658)
			::flixel::math::FlxPoint tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(658)
			if ((tmp13)){
				HX_STACK_LINE(658)
				Float tmp15 = node->rect->height;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(658)
				int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(658)
				int tmp17 = this->border;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(658)
				int tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(658)
				Float X = tmp18;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(658)
				Float tmp19 = node->rect->width;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(658)
				int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(658)
				int tmp21 = this->border;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(658)
				int tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(658)
				Float Y = tmp22;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(658)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp23 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(658)
				::flixel::math::FlxPoint tmp24 = tmp23->get();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(658)
				Float tmp25 = X;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(658)
				Float tmp26 = Y;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(658)
				::flixel::math::FlxPoint tmp27 = tmp24->set(tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(658)
				::flixel::math::FlxPoint point = tmp27;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(658)
				point->_inPool = false;
				HX_STACK_LINE(658)
				tmp14 = point;
			}
			else{
				HX_STACK_LINE(658)
				Float tmp15 = node->rect->width;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(658)
				int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(658)
				int tmp17 = this->border;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(658)
				int tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(658)
				Float X = tmp18;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(658)
				Float tmp19 = node->rect->height;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(658)
				int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(658)
				int tmp21 = this->border;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(658)
				int tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(658)
				Float Y = tmp22;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(658)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp23 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(658)
				::flixel::math::FlxPoint tmp24 = tmp23->get();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(658)
				Float tmp25 = X;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(658)
				Float tmp26 = Y;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(658)
				::flixel::math::FlxPoint tmp27 = tmp24->set(tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(658)
				::flixel::math::FlxPoint point = tmp27;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(658)
				point->_inPool = false;
				HX_STACK_LINE(658)
				tmp14 = point;
			}
			HX_STACK_LINE(658)
			::flixel::math::FlxPoint sourceSize = tmp14;		HX_STACK_VAR(sourceSize,"sourceSize");
			HX_STACK_LINE(659)
			::flixel::math::FlxPoint tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(659)
			{
				HX_STACK_LINE(659)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp16 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(659)
				::flixel::math::FlxPoint tmp17 = tmp16->get();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(659)
				::flixel::math::FlxPoint tmp18 = tmp17->set((int)0,(int)0);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(659)
				::flixel::math::FlxPoint point = tmp18;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(659)
				point->_inPool = false;
				HX_STACK_LINE(659)
				tmp15 = point;
			}
			HX_STACK_LINE(659)
			::flixel::math::FlxPoint offset = tmp15;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(660)
			bool tmp16 = node->rotated;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(660)
			int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(660)
			if ((tmp16)){
				HX_STACK_LINE(660)
				tmp17 = (int)-90;
			}
			else{
				HX_STACK_LINE(660)
				tmp17 = (int)0;
			}
			HX_STACK_LINE(660)
			int angle = tmp17;		HX_STACK_VAR(angle,"angle");
			HX_STACK_LINE(661)
			::flixel::math::FlxRect tmp18 = frame;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(661)
			::flixel::math::FlxPoint tmp19 = sourceSize;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(661)
			::flixel::math::FlxPoint tmp20 = offset;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(661)
			::String tmp21 = node->key;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(661)
			int tmp22 = angle;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(661)
			atlasFrames->addAtlasFrame(tmp18,tmp19,tmp20,tmp21,tmp22,null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,addNodeToAtlasFrames,(void))

bool FlxAtlas_obj::hasNodeWithName( ::String nodeName){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","hasNodeWithName",0x3a185aec,"flixel.graphics.atlas.FlxAtlas.hasNodeWithName","flixel/graphics/atlas/FlxAtlas.hx",671,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(nodeName,"nodeName")
	HX_STACK_LINE(672)
	::haxe::ds::StringMap tmp = this->nodes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(672)
	::String tmp1 = nodeName;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(672)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(672)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,hasNodeWithName,return )

::flixel::graphics::atlas::FlxNode FlxAtlas_obj::getNode( ::String key){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","getNode",0x850d4b97,"flixel.graphics.atlas.FlxAtlas.getNode","flixel/graphics/atlas/FlxAtlas.hx",681,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(682)
	::haxe::ds::StringMap tmp = this->nodes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(682)
	::String tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(682)
	::flixel::graphics::atlas::FlxNode tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(682)
	::flixel::graphics::atlas::FlxNode tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(682)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,getNode,return )

::flixel::graphics::atlas::FlxAtlas FlxAtlas_obj::addNodes( Array< ::Dynamic > bitmaps,Array< ::String > keys){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","addNodes",0x001aef91,"flixel.graphics.atlas.FlxAtlas.addNodes","flixel/graphics/atlas/FlxAtlas.hx",693,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmaps,"bitmaps")
	HX_STACK_ARG(keys,"keys")
	HX_STACK_LINE(694)
	int numKeys = keys->length;		HX_STACK_VAR(numKeys,"numKeys");
	HX_STACK_LINE(695)
	int numBitmaps = bitmaps->length;		HX_STACK_VAR(numBitmaps,"numBitmaps");
	HX_STACK_LINE(697)
	bool tmp = (numBitmaps != numKeys);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(697)
	if ((tmp)){
		HX_STACK_LINE(700)
		::String tmp1 = (HX_HCSTRING("The number of bitmaps (","\xcb","\xe8","\xa2","\xa6") + numBitmaps);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(700)
		::String tmp2 = (tmp1 + HX_HCSTRING(") should be equal to number of keys (","\xa0","\x90","\x37","\x97"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(700)
		int tmp3 = numKeys;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(700)
		::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(700)
		::String tmp5 = (tmp4 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(700)
		HX_STACK_DO_THROW(tmp5);
		HX_STACK_LINE(702)
		return null();
	}
	HX_STACK_LINE(705)
	this->_tempStorage = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(706)
	{
		HX_STACK_LINE(706)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(706)
		while((true)){
			HX_STACK_LINE(706)
			bool tmp1 = (_g < numBitmaps);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(706)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(706)
			if ((tmp2)){
				HX_STACK_LINE(706)
				break;
			}
			HX_STACK_LINE(706)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(706)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(708)
			::openfl::_legacy::display::BitmapData tmp4 = bitmaps->__get(i).StaticCast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(708)
			::String tmp5 = keys->__get(i);		HX_STACK_VAR(tmp5,"tmp5");
			struct _Function_3_1{
				inline static Dynamic Block( ::String &tmp5,::openfl::_legacy::display::BitmapData &tmp4){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/atlas/FlxAtlas.hx",708,0x03972f50)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00") , tmp4,false);
						__result->Add(HX_HCSTRING("keyStr","\x52","\x64","\xe2","\x3f") , tmp5,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(708)
			Dynamic tmp6 = _Function_3_1::Block(tmp5,tmp4);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(708)
			this->_tempStorage->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp6);
		}
	}
	HX_STACK_LINE(711)
	this->addFromAtlasObjects(this->_tempStorage);
	HX_STACK_LINE(712)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlas_obj,addNodes,return )

Void FlxAtlas_obj::addFromAtlasObjects( cpp::ArrayBase objects){
{
		HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","addFromAtlasObjects",0xc364fff3,"flixel.graphics.atlas.FlxAtlas.addFromAtlasObjects","flixel/graphics/atlas/FlxAtlas.hx",716,0x03972f50)
		HX_STACK_THIS(this)
		HX_STACK_ARG(objects,"objects")
		HX_STACK_LINE(717)
		Dynamic tmp = this->bitmapSorter_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(717)
		objects->__Field(HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(718)
		int numBitmaps = objects->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(numBitmaps,"numBitmaps");
		HX_STACK_LINE(720)
		{
			HX_STACK_LINE(720)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(720)
			while((true)){
				HX_STACK_LINE(720)
				bool tmp1 = (_g < numBitmaps);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(720)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(720)
				if ((tmp2)){
					HX_STACK_LINE(720)
					break;
				}
				HX_STACK_LINE(720)
				int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(720)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(722)
				Dynamic tmp4 = objects->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(722)
				::openfl::_legacy::display::BitmapData tmp5 = tmp4->__Field(HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(722)
				Dynamic tmp6 = objects->__GetItem(i);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(722)
				::String tmp7 = tmp6->__Field(HX_HCSTRING("keyStr","\x52","\x64","\xe2","\x3f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(722)
				this->addNode(tmp5,tmp7);
			}
		}
		HX_STACK_LINE(725)
		this->_tempStorage = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,addFromAtlasObjects,(void))

int FlxAtlas_obj::bitmapSorter( Dynamic obj1,Dynamic obj2){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","bitmapSorter",0x4abe7a5b,"flixel.graphics.atlas.FlxAtlas.bitmapSorter","flixel/graphics/atlas/FlxAtlas.hx",732,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj1,"obj1")
	HX_STACK_ARG(obj2,"obj2")
	HX_STACK_LINE(733)
	bool tmp = this->allowRotation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(733)
	if ((tmp)){
		HX_STACK_LINE(735)
		int tmp1 = obj1->__Field(HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(735)
		int tmp2 = obj1->__Field(HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(735)
		int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(735)
		int area1 = tmp3;		HX_STACK_VAR(area1,"area1");
		HX_STACK_LINE(736)
		int tmp4 = obj2->__Field(HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(736)
		int tmp5 = obj2->__Field(HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(736)
		int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(736)
		int area2 = tmp6;		HX_STACK_VAR(area2,"area2");
		HX_STACK_LINE(737)
		int tmp7 = (area2 - area1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(737)
		return tmp7;
	}
	HX_STACK_LINE(740)
	int tmp1 = obj2->__Field(HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(740)
	int tmp2 = obj1->__Field(HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(740)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(740)
	if ((tmp3)){
		HX_STACK_LINE(742)
		int tmp4 = obj2->__Field(HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(742)
		int tmp5 = obj1->__Field(HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(742)
		int tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(742)
		return tmp6;
	}
	HX_STACK_LINE(745)
	int tmp4 = obj2->__Field(HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(745)
	int tmp5 = obj1->__Field(HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(745)
	int tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(745)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlas_obj,bitmapSorter,return )

::flixel::graphics::atlas::FlxAtlas FlxAtlas_obj::createQueue( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","createQueue",0x315e3254,"flixel.graphics.atlas.FlxAtlas.createQueue","flixel/graphics/atlas/FlxAtlas.hx",756,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(757)
	this->_tempStorage = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(758)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,createQueue,return )

::flixel::graphics::atlas::FlxAtlas FlxAtlas_obj::addToQueue( ::openfl::_legacy::display::BitmapData data,::String key){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","addToQueue",0x83cfa976,"flixel.graphics.atlas.FlxAtlas.addToQueue","flixel/graphics/atlas/FlxAtlas.hx",767,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(768)
	bool tmp = (this->_tempStorage == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(768)
	if ((tmp)){
		HX_STACK_LINE(770)
		this->_tempStorage = Dynamic( Array_obj<Dynamic>::__new() );
	}
	struct _Function_1_1{
		inline static Dynamic Block( ::openfl::_legacy::display::BitmapData &data,::String &key){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/atlas/FlxAtlas.hx",773,0x03972f50)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00") , data,false);
				__result->Add(HX_HCSTRING("keyStr","\x52","\x64","\xe2","\x3f") , key,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(773)
	Dynamic tmp1 = _Function_1_1::Block(data,key);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(773)
	this->_tempStorage->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
	HX_STACK_LINE(774)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlas_obj,addToQueue,return )

::flixel::graphics::atlas::FlxAtlas FlxAtlas_obj::generateFromQueue( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","generateFromQueue",0x8e4a2871,"flixel.graphics.atlas.FlxAtlas.generateFromQueue","flixel/graphics/atlas/FlxAtlas.hx",781,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(782)
	bool tmp = (this->_tempStorage != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(782)
	if ((tmp)){
		HX_STACK_LINE(784)
		this->addFromAtlasObjects(this->_tempStorage);
	}
	HX_STACK_LINE(787)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,generateFromQueue,return )

Void FlxAtlas_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","destroy",0x8e06bed9,"flixel.graphics.atlas.FlxAtlas.destroy","flixel/graphics/atlas/FlxAtlas.hx",795,0x03972f50)
		HX_STACK_THIS(this)
		HX_STACK_LINE(796)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(796)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp1 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(796)
		::String tmp2 = this->name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(796)
		::flixel::graphics::FlxGraphic tmp3 = tmp1->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(796)
		tmp->__Field(HX_HCSTRING("removeIfNoUse","\x85","\xb1","\x4f","\xe2"), hx::paccDynamic )(tmp3);
		HX_STACK_LINE(797)
		this->_tempStorage = null();
		HX_STACK_LINE(798)
		::flixel::graphics::atlas::FlxNode tmp4 = this->root;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(798)
		this->deleteSubtree(tmp4);
		HX_STACK_LINE(799)
		this->root = null();
		HX_STACK_LINE(800)
		::openfl::_legacy::display::BitmapData tmp5 = this->_bitmapData;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(800)
		::openfl::_legacy::display::BitmapData tmp6 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(800)
		this->_bitmapData = tmp6;
		HX_STACK_LINE(801)
		this->nodes = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,destroy,(void))

Void FlxAtlas_obj::clear( ){
{
		HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","clear",0x59297dac,"flixel.graphics.atlas.FlxAtlas.clear","flixel/graphics/atlas/FlxAtlas.hx",809,0x03972f50)
		HX_STACK_THIS(this)
		HX_STACK_LINE(810)
		::flixel::graphics::atlas::FlxNode tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(810)
		this->deleteSubtree(tmp);
		HX_STACK_LINE(811)
		this->initRoot();
		HX_STACK_LINE(812)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp1 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(812)
		::String tmp2 = this->name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(812)
		tmp1->__Field(HX_HCSTRING("removeByKey","\x24","\xc9","\xac","\xbb"), hx::paccDynamic )(tmp2);
		HX_STACK_LINE(813)
		this->_bitmapData = null();
		HX_STACK_LINE(814)
		::haxe::ds::StringMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(814)
		{
			HX_STACK_LINE(814)
			::haxe::ds::StringMap tmp4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(814)
			::haxe::ds::StringMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(814)
			tmp3 = tmp5;
		}
		HX_STACK_LINE(814)
		this->nodes = tmp3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,clear,(void))

::String FlxAtlas_obj::getLibGdxData( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","getLibGdxData",0x1a9c9615,"flixel.graphics.atlas.FlxAtlas.getLibGdxData","flixel/graphics/atlas/FlxAtlas.hx",821,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(822)
	::String data = HX_HCSTRING("\n","\x0a","\x00","\x00","\x00");		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(823)
	::String tmp = this->name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(823)
	::String tmp1 = (tmp + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(823)
	hx::AddEq(data,tmp1);
	HX_STACK_LINE(824)
	hx::AddEq(data,HX_HCSTRING("format: RGBA8888\n","\x99","\x1f","\xed","\xc2"));
	HX_STACK_LINE(825)
	hx::AddEq(data,HX_HCSTRING("filter: Linear,Linear\n","\x9c","\x47","\x05","\x72"));
	HX_STACK_LINE(826)
	hx::AddEq(data,HX_HCSTRING("repeat: none\n","\xf1","\x9b","\x51","\xee"));
	HX_STACK_LINE(828)
	::haxe::ds::StringMap tmp2 = this->nodes;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(828)
	Dynamic tmp3 = tmp2->iterator();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(828)
	for(::cpp::FastIterator_obj< ::flixel::graphics::atlas::FlxNode > *__it = ::cpp::CreateFastIterator< ::flixel::graphics::atlas::FlxNode >(tmp3);  __it->hasNext(); ){
		::flixel::graphics::atlas::FlxNode node = __it->next();
		{
			HX_STACK_LINE(830)
			::String tmp4 = (node->key + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(830)
			hx::AddEq(data,tmp4);
			HX_STACK_LINE(831)
			bool tmp5 = node->rotated;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(831)
			::String tmp6 = ::Std_obj::string(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(831)
			::String tmp7 = (HX_HCSTRING("  rotate: ","\xc1","\x21","\xff","\x6f") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(831)
			::String tmp8 = (tmp7 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(831)
			hx::AddEq(data,tmp8);
			HX_STACK_LINE(832)
			Float tmp9 = node->rect->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(832)
			int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(832)
			::String tmp11 = (HX_HCSTRING("  xy: ","\xe7","\xb9","\xeb","\x87") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(832)
			::String tmp12 = (tmp11 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(832)
			Float tmp13 = node->rect->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(832)
			int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(832)
			::String tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(832)
			::String tmp16 = (tmp15 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(832)
			hx::AddEq(data,tmp16);
			HX_STACK_LINE(834)
			bool tmp17 = this->allowRotation;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(834)
			if ((tmp17)){
				HX_STACK_LINE(836)
				Float tmp18 = node->rect->height;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(836)
				int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(836)
				::String tmp20 = (HX_HCSTRING("size: ","\xa7","\x45","\x0e","\xc1") + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(836)
				::String tmp21 = (tmp20 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(836)
				Float tmp22 = node->rect->width;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(836)
				int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(836)
				::String tmp24 = (tmp21 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(836)
				::String tmp25 = (tmp24 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(836)
				hx::AddEq(data,tmp25);
				HX_STACK_LINE(837)
				Float tmp26 = node->rect->height;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(837)
				int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(837)
				::String tmp28 = (HX_HCSTRING("orig: ","\xa7","\xf0","\x00","\x4b") + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(837)
				::String tmp29 = (tmp28 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(837)
				Float tmp30 = node->rect->width;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(837)
				int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(837)
				::String tmp32 = (tmp29 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(837)
				::String tmp33 = (tmp32 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(837)
				hx::AddEq(data,tmp33);
			}
			else{
				HX_STACK_LINE(841)
				Float tmp18 = node->rect->width;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(841)
				int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(841)
				::String tmp20 = (HX_HCSTRING("size: ","\xa7","\x45","\x0e","\xc1") + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(841)
				::String tmp21 = (tmp20 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(841)
				Float tmp22 = node->rect->height;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(841)
				int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(841)
				::String tmp24 = (tmp21 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(841)
				::String tmp25 = (tmp24 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(841)
				hx::AddEq(data,tmp25);
				HX_STACK_LINE(842)
				Float tmp26 = node->rect->width;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(842)
				int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(842)
				::String tmp28 = (HX_HCSTRING("orig: ","\xa7","\xf0","\x00","\x4b") + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(842)
				::String tmp29 = (tmp28 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(842)
				Float tmp30 = node->rect->height;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(842)
				int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(842)
				::String tmp32 = (tmp29 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(842)
				::String tmp33 = (tmp32 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(842)
				hx::AddEq(data,tmp33);
			}
			HX_STACK_LINE(845)
			hx::AddEq(data,HX_HCSTRING("  offset: 0, 0\n","\xe5","\x55","\xb9","\x3b"));
			HX_STACK_LINE(846)
			hx::AddEq(data,HX_HCSTRING("  index: -1\n","\xee","\xe8","\x07","\x0b"));
		}
;
	}
	HX_STACK_LINE(849)
	::String tmp4 = data;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(849)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,getLibGdxData,return )

Void FlxAtlas_obj::deleteSubtree( ::flixel::graphics::atlas::FlxNode node){
{
		HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","deleteSubtree",0xf9ad5912,"flixel.graphics.atlas.FlxAtlas.deleteSubtree","flixel/graphics/atlas/FlxAtlas.hx",853,0x03972f50)
		HX_STACK_THIS(this)
		HX_STACK_ARG(node,"node")
		HX_STACK_LINE(854)
		bool tmp = (node != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(854)
		if ((tmp)){
			HX_STACK_LINE(856)
			bool tmp1 = (node->left != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(856)
			if ((tmp1)){
				HX_STACK_LINE(856)
				::flixel::graphics::atlas::FlxNode tmp2 = node->left;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(856)
				this->deleteSubtree(tmp2);
			}
			HX_STACK_LINE(857)
			bool tmp2 = (node->right != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(857)
			if ((tmp2)){
				HX_STACK_LINE(857)
				::flixel::graphics::atlas::FlxNode tmp3 = node->right;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(857)
				this->deleteSubtree(tmp3);
			}
			HX_STACK_LINE(858)
			{
				HX_STACK_LINE(858)
				node->key = null();
				HX_STACK_LINE(858)
				node->left = null();
				HX_STACK_LINE(858)
				node->right = null();
				HX_STACK_LINE(858)
				node->rect = null();
				HX_STACK_LINE(858)
				node->atlas = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,deleteSubtree,(void))

::flixel::graphics::atlas::FlxNode FlxAtlas_obj::findNodeToInsert( int insertWidth,int insertHeight){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","findNodeToInsert",0x513a4b50,"flixel.graphics.atlas.FlxAtlas.findNodeToInsert","flixel/graphics/atlas/FlxAtlas.hx",864,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(insertWidth,"insertWidth")
	HX_STACK_ARG(insertHeight,"insertHeight")
	HX_STACK_LINE(866)
	Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
	HX_STACK_LINE(868)
	::flixel::graphics::atlas::FlxNode tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(868)
	::flixel::graphics::atlas::FlxNode current = tmp;		HX_STACK_VAR(current,"current");
	HX_STACK_LINE(870)
	Array< ::Dynamic > emptyNodes = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(emptyNodes,"emptyNodes");
	HX_STACK_LINE(872)
	bool canPlaceRight = false;		HX_STACK_VAR(canPlaceRight,"canPlaceRight");
	HX_STACK_LINE(873)
	bool canPlaceLeft = false;		HX_STACK_VAR(canPlaceLeft,"canPlaceLeft");
	HX_STACK_LINE(875)
	bool looping = true;		HX_STACK_VAR(looping,"looping");
	HX_STACK_LINE(877)
	::flixel::graphics::atlas::FlxNode result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(878)
	int tmp1 = this->maxWidth;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(878)
	int tmp2 = this->maxHeight;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(878)
	int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(878)
	int tmp4 = (tmp3 + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(878)
	int minArea = tmp4;		HX_STACK_VAR(minArea,"minArea");
	HX_STACK_LINE(879)
	int nodeArea;		HX_STACK_VAR(nodeArea,"nodeArea");
	HX_STACK_LINE(882)
	while((true)){
		HX_STACK_LINE(882)
		bool tmp5 = looping;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(882)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(882)
		if ((tmp6)){
			HX_STACK_LINE(882)
			break;
		}
		HX_STACK_LINE(885)
		bool tmp7 = current->filled;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(885)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(885)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(885)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(885)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(885)
		if ((tmp10)){
			HX_STACK_LINE(885)
			tmp11 = (current->left == null());
		}
		else{
			HX_STACK_LINE(885)
			tmp11 = false;
		}
		HX_STACK_LINE(885)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(885)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(885)
		if ((tmp12)){
			HX_STACK_LINE(885)
			tmp13 = (current->right == null());
		}
		else{
			HX_STACK_LINE(885)
			tmp13 = false;
		}
		HX_STACK_LINE(885)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(885)
		if ((tmp13)){
			HX_STACK_LINE(885)
			Float tmp15 = current->rect->width;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(885)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(885)
			int tmp17 = insertWidth;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(885)
			bool tmp18 = (tmp16 >= tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(885)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(885)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(885)
			if ((tmp20)){
				HX_STACK_LINE(885)
				Float tmp21 = current->rect->height;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(885)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(885)
				Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(885)
				int tmp24 = insertHeight;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(885)
				tmp14 = (tmp23 >= tmp24);
			}
			else{
				HX_STACK_LINE(885)
				tmp14 = false;
			}
		}
		else{
			HX_STACK_LINE(885)
			tmp14 = false;
		}
		HX_STACK_LINE(885)
		if ((tmp14)){
			HX_STACK_LINE(887)
			Float tmp15 = current->rect->width;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(887)
			int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(887)
			Float tmp17 = current->rect->height;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(887)
			int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(887)
			int tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(887)
			nodeArea = tmp19;
			HX_STACK_LINE(889)
			bool tmp20 = (nodeArea < minArea);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(889)
			if ((tmp20)){
				HX_STACK_LINE(891)
				minArea = nodeArea;
				HX_STACK_LINE(892)
				result = current;
			}
		}
		HX_STACK_LINE(896)
		bool tmp15 = (current->right != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(896)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(896)
		if ((tmp15)){
			HX_STACK_LINE(896)
			::flixel::graphics::atlas::FlxNode _this = current->right;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(896)
			Float tmp17 = _this->rect->width;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(896)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(896)
			int tmp19 = insertWidth;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(896)
			bool tmp20 = (tmp18 >= tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(896)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(896)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(896)
			if ((tmp22)){
				HX_STACK_LINE(896)
				Float tmp23 = _this->rect->height;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(896)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(896)
				Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(896)
				int tmp26 = insertHeight;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(896)
				tmp16 = (tmp25 >= tmp26);
			}
			else{
				HX_STACK_LINE(896)
				tmp16 = false;
			}
		}
		else{
			HX_STACK_LINE(896)
			tmp16 = false;
		}
		HX_STACK_LINE(896)
		canPlaceRight = tmp16;
		HX_STACK_LINE(897)
		bool tmp17 = (current->left != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(897)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(897)
		if ((tmp17)){
			HX_STACK_LINE(897)
			::flixel::graphics::atlas::FlxNode _this = current->left;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(897)
			Float tmp19 = _this->rect->width;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(897)
			Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(897)
			int tmp21 = insertWidth;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(897)
			bool tmp22 = (tmp20 >= tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(897)
			bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(897)
			bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(897)
			if ((tmp24)){
				HX_STACK_LINE(897)
				Float tmp25 = _this->rect->height;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(897)
				Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(897)
				Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(897)
				int tmp28 = insertHeight;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(897)
				tmp18 = (tmp27 >= tmp28);
			}
			else{
				HX_STACK_LINE(897)
				tmp18 = false;
			}
		}
		else{
			HX_STACK_LINE(897)
			tmp18 = false;
		}
		HX_STACK_LINE(897)
		canPlaceLeft = tmp18;
		HX_STACK_LINE(898)
		bool tmp19 = canPlaceRight;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(898)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(898)
		if ((tmp19)){
			HX_STACK_LINE(898)
			tmp20 = canPlaceLeft;
		}
		else{
			HX_STACK_LINE(898)
			tmp20 = false;
		}
		HX_STACK_LINE(898)
		if ((tmp20)){
			HX_STACK_LINE(900)
			::flixel::graphics::atlas::FlxNode tmp21 = current->right;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(900)
			stack->push(tmp21);
			HX_STACK_LINE(901)
			current = current->left;
		}
		else{
			HX_STACK_LINE(903)
			bool tmp21 = canPlaceLeft;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(903)
			if ((tmp21)){
				HX_STACK_LINE(905)
				current = current->left;
			}
			else{
				HX_STACK_LINE(907)
				bool tmp22 = canPlaceRight;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(907)
				if ((tmp22)){
					HX_STACK_LINE(909)
					current = current->right;
				}
				else{
					HX_STACK_LINE(913)
					bool tmp23 = (stack->length > (int)0);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(913)
					if ((tmp23)){
						HX_STACK_LINE(916)
						::flixel::graphics::atlas::FlxNode tmp24 = stack->pop().StaticCast< ::flixel::graphics::atlas::FlxNode >();		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(916)
						current = tmp24;
					}
					else{
						HX_STACK_LINE(921)
						looping = false;
					}
				}
			}
		}
	}
	HX_STACK_LINE(926)
	::flixel::graphics::atlas::FlxNode tmp5 = result;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(926)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlas_obj,findNodeToInsert,return )

::openfl::_legacy::display::BitmapData FlxAtlas_obj::get_bitmapData( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","get_bitmapData",0xd5cb3603,"flixel.graphics.atlas.FlxAtlas.get_bitmapData","flixel/graphics/atlas/FlxAtlas.hx",930,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(931)
	::openfl::_legacy::display::BitmapData tmp = this->_bitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(931)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,get_bitmapData,return )

::openfl::_legacy::display::BitmapData FlxAtlas_obj::set_bitmapData( ::openfl::_legacy::display::BitmapData value){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","set_bitmapData",0xf5eb1e77,"flixel.graphics.atlas.FlxAtlas.set_bitmapData","flixel/graphics/atlas/FlxAtlas.hx",935,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(936)
	bool tmp = (value != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(936)
	if ((tmp)){
		HX_STACK_LINE(939)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp1 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(939)
		::String tmp2 = this->name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(939)
		::flixel::graphics::FlxGraphic tmp3 = tmp1->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(939)
		::flixel::graphics::FlxGraphic graphic = tmp3;		HX_STACK_VAR(graphic,"graphic");
		HX_STACK_LINE(940)
		bool tmp4 = (graphic != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(940)
		if ((tmp4)){
			HX_STACK_LINE(942)
			::openfl::_legacy::display::BitmapData tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(942)
			graphic->set_bitmap(tmp5);
		}
	}
	HX_STACK_LINE(946)
	::openfl::_legacy::display::BitmapData tmp1 = this->_bitmapData = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(946)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_bitmapData,return )

int FlxAtlas_obj::set_minWidth( int value){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","set_minWidth",0x9b144052,"flixel.graphics.atlas.FlxAtlas.set_minWidth","flixel/graphics/atlas/FlxAtlas.hx",950,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(951)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(951)
	int tmp1 = this->maxWidth;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(951)
	bool tmp2 = (tmp <= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(951)
	if ((tmp2)){
		HX_STACK_LINE(953)
		this->minWidth = value;
		HX_STACK_LINE(955)
		int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(955)
		int tmp4 = this->get_width();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(955)
		bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(955)
		if ((tmp5)){
			HX_STACK_LINE(957)
			int tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(957)
			this->set_width(tmp6);
		}
	}
	HX_STACK_LINE(961)
	int tmp3 = this->minWidth;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(961)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_minWidth,return )

int FlxAtlas_obj::set_minHeight( int value){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","set_minHeight",0xccf3801b,"flixel.graphics.atlas.FlxAtlas.set_minHeight","flixel/graphics/atlas/FlxAtlas.hx",965,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(966)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(966)
	int tmp1 = this->maxHeight;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(966)
	bool tmp2 = (tmp <= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(966)
	if ((tmp2)){
		HX_STACK_LINE(968)
		this->minHeight = value;
		HX_STACK_LINE(970)
		int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(970)
		int tmp4 = this->get_height();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(970)
		bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(970)
		if ((tmp5)){
			HX_STACK_LINE(972)
			int tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(972)
			this->set_height(tmp6);
		}
	}
	HX_STACK_LINE(976)
	int tmp3 = this->minHeight;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(976)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_minHeight,return )

int FlxAtlas_obj::get_width( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","get_width",0x463c19fc,"flixel.graphics.atlas.FlxAtlas.get_width","flixel/graphics/atlas/FlxAtlas.hx",980,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(981)
	::flixel::graphics::atlas::FlxNode tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(981)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(981)
	if ((tmp1)){
		HX_STACK_LINE(983)
		::flixel::graphics::atlas::FlxNode tmp2 = this->root;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(983)
		Float tmp3 = tmp2->rect->width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(983)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(983)
		return tmp4;
	}
	HX_STACK_LINE(986)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,get_width,return )

int FlxAtlas_obj::set_width( int value){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","set_width",0x298d0608,"flixel.graphics.atlas.FlxAtlas.set_width","flixel/graphics/atlas/FlxAtlas.hx",990,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(991)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(991)
	int tmp1 = this->get_width();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(991)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(991)
	if ((tmp2)){
		HX_STACK_LINE(993)
		bool tmp3 = this->powerOfTwo;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(993)
		if ((tmp3)){
			HX_STACK_LINE(995)
			int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(995)
			int tmp5 = this->getNextPowerOfTwo(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(995)
			value = tmp5;
		}
		HX_STACK_LINE(998)
		int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(998)
		int tmp5 = this->maxWidth;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(998)
		bool tmp6 = (tmp4 <= tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(998)
		if ((tmp6)){
			HX_STACK_LINE(1000)
			::flixel::graphics::atlas::FlxNode tmp7 = this->root;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1000)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1000)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1000)
			if ((tmp8)){
				HX_STACK_LINE(1000)
				::flixel::graphics::atlas::FlxNode tmp10 = this->root;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1000)
				::flixel::graphics::atlas::FlxNode tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1000)
				Float tmp12 = tmp11->rect->width;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1000)
				Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1000)
				Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1000)
				int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1000)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1000)
				int tmp17 = value;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1000)
				tmp9 = (tmp16 < tmp17);
			}
			else{
				HX_STACK_LINE(1000)
				tmp9 = false;
			}
			HX_STACK_LINE(1000)
			if ((tmp9)){
				HX_STACK_LINE(1002)
				int tmp10 = value;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1002)
				::flixel::graphics::atlas::FlxNode tmp11 = this->root;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1002)
				Float tmp12 = tmp11->rect->height;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1002)
				int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1002)
				::flixel::graphics::atlas::FlxNode tmp14 = this->root;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1002)
				::flixel::graphics::atlas::FlxNode tmp15 = this->root;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1002)
				Float tmp16 = tmp15->rect->width;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1002)
				int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1002)
				::flixel::graphics::atlas::FlxNode tmp18 = this->root;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1002)
				Float tmp19 = tmp18->rect->height;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1002)
				int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1002)
				bool tmp21 = this->needToDivideHorizontally(tmp14,tmp17,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1002)
				this->expandRoot(tmp10,tmp13,tmp21,null());
			}
		}
	}
	HX_STACK_LINE(1007)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1007)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_width,return )

int FlxAtlas_obj::get_height( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","get_height",0xe4aa1b31,"flixel.graphics.atlas.FlxAtlas.get_height","flixel/graphics/atlas/FlxAtlas.hx",1011,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1012)
	::flixel::graphics::atlas::FlxNode tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1012)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1012)
	if ((tmp1)){
		HX_STACK_LINE(1014)
		::flixel::graphics::atlas::FlxNode tmp2 = this->root;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1014)
		Float tmp3 = tmp2->rect->height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1014)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1014)
		return tmp4;
	}
	HX_STACK_LINE(1017)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,get_height,return )

int FlxAtlas_obj::set_height( int value){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","set_height",0xe827b9a5,"flixel.graphics.atlas.FlxAtlas.set_height","flixel/graphics/atlas/FlxAtlas.hx",1021,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1022)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1022)
	int tmp1 = this->get_height();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1022)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1022)
	if ((tmp2)){
		HX_STACK_LINE(1024)
		bool tmp3 = this->powerOfTwo;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1024)
		if ((tmp3)){
			HX_STACK_LINE(1026)
			int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1026)
			int tmp5 = this->getNextPowerOfTwo(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1026)
			value = tmp5;
		}
		HX_STACK_LINE(1029)
		int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1029)
		int tmp5 = this->maxHeight;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1029)
		bool tmp6 = (tmp4 <= tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1029)
		if ((tmp6)){
			HX_STACK_LINE(1031)
			::flixel::graphics::atlas::FlxNode tmp7 = this->root;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1031)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1031)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1031)
			if ((tmp8)){
				HX_STACK_LINE(1031)
				::flixel::graphics::atlas::FlxNode tmp10 = this->root;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1031)
				::flixel::graphics::atlas::FlxNode tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1031)
				Float tmp12 = tmp11->rect->height;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1031)
				Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1031)
				Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1031)
				int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1031)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1031)
				int tmp17 = value;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1031)
				tmp9 = (tmp16 < tmp17);
			}
			else{
				HX_STACK_LINE(1031)
				tmp9 = false;
			}
			HX_STACK_LINE(1031)
			if ((tmp9)){
				HX_STACK_LINE(1033)
				::flixel::graphics::atlas::FlxNode tmp10 = this->root;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1033)
				Float tmp11 = tmp10->rect->width;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1033)
				int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1033)
				int tmp13 = value;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1033)
				::flixel::graphics::atlas::FlxNode tmp14 = this->root;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1033)
				::flixel::graphics::atlas::FlxNode tmp15 = this->root;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1033)
				Float tmp16 = tmp15->rect->width;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1033)
				int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1033)
				::flixel::graphics::atlas::FlxNode tmp18 = this->root;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1033)
				Float tmp19 = tmp18->rect->height;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1033)
				int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1033)
				bool tmp21 = this->needToDivideHorizontally(tmp14,tmp17,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1033)
				this->expandRoot(tmp12,tmp13,tmp21,null());
			}
		}
	}
	HX_STACK_LINE(1038)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1038)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_height,return )

int FlxAtlas_obj::set_maxWidth( int value){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","set_maxWidth",0x4dfa2600,"flixel.graphics.atlas.FlxAtlas.set_maxWidth","flixel/graphics/atlas/FlxAtlas.hx",1042,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1043)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1043)
	int tmp1 = this->minWidth;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1043)
	bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1043)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1043)
	if ((tmp2)){
		HX_STACK_LINE(1043)
		::flixel::graphics::atlas::FlxNode tmp4 = this->root;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1043)
		::flixel::graphics::atlas::FlxNode tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1043)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1043)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1043)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1043)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1043)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1043)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1043)
		if ((tmp11)){
			HX_STACK_LINE(1043)
			int tmp12 = value;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1043)
			int tmp13 = this->get_width();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1043)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1043)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1043)
			tmp3 = (tmp12 >= tmp15);
		}
		else{
			HX_STACK_LINE(1043)
			tmp3 = true;
		}
	}
	else{
		HX_STACK_LINE(1043)
		tmp3 = false;
	}
	HX_STACK_LINE(1043)
	if ((tmp3)){
		HX_STACK_LINE(1045)
		this->maxWidth = value;
	}
	HX_STACK_LINE(1048)
	int tmp4 = this->maxWidth;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1048)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_maxWidth,return )

int FlxAtlas_obj::set_maxHeight( int value){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","set_maxHeight",0xa33692ad,"flixel.graphics.atlas.FlxAtlas.set_maxHeight","flixel/graphics/atlas/FlxAtlas.hx",1052,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1053)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1053)
	int tmp1 = this->minHeight;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1053)
	bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1053)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1053)
	if ((tmp2)){
		HX_STACK_LINE(1053)
		::flixel::graphics::atlas::FlxNode tmp4 = this->root;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1053)
		::flixel::graphics::atlas::FlxNode tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1053)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1053)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1053)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1053)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1053)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1053)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1053)
		if ((tmp11)){
			HX_STACK_LINE(1053)
			int tmp12 = value;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1053)
			int tmp13 = this->get_height();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1053)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1053)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1053)
			tmp3 = (tmp12 >= tmp15);
		}
		else{
			HX_STACK_LINE(1053)
			tmp3 = true;
		}
	}
	else{
		HX_STACK_LINE(1053)
		tmp3 = false;
	}
	HX_STACK_LINE(1053)
	if ((tmp3)){
		HX_STACK_LINE(1055)
		this->maxHeight = value;
	}
	HX_STACK_LINE(1058)
	int tmp4 = this->maxHeight;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1058)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_maxHeight,return )

bool FlxAtlas_obj::set_powerOfTwo( bool value){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","set_powerOfTwo",0xacd9272e,"flixel.graphics.atlas.FlxAtlas.set_powerOfTwo","flixel/graphics/atlas/FlxAtlas.hx",1062,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1063)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1063)
	bool tmp1 = this->powerOfTwo;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1063)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1063)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1063)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1063)
	if ((tmp3)){
		HX_STACK_LINE(1063)
		tmp4 = value;
	}
	else{
		HX_STACK_LINE(1063)
		tmp4 = false;
	}
	HX_STACK_LINE(1063)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1063)
	if ((tmp4)){
		HX_STACK_LINE(1063)
		::flixel::graphics::atlas::FlxNode tmp6 = this->root;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1063)
		::flixel::graphics::atlas::FlxNode tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1063)
		tmp5 = (tmp7 != null());
	}
	else{
		HX_STACK_LINE(1063)
		tmp5 = false;
	}
	HX_STACK_LINE(1063)
	if ((tmp5)){
		HX_STACK_LINE(1065)
		::flixel::graphics::atlas::FlxNode tmp6 = this->root;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1065)
		Float tmp7 = tmp6->rect->width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1065)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1065)
		int tmp9 = this->getNextPowerOfTwo(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1065)
		int nextWidth = tmp9;		HX_STACK_VAR(nextWidth,"nextWidth");
		HX_STACK_LINE(1066)
		::flixel::graphics::atlas::FlxNode tmp10 = this->root;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1066)
		Float tmp11 = tmp10->rect->height;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1066)
		int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1066)
		int tmp13 = this->getNextPowerOfTwo(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1066)
		int nextHeight = tmp13;		HX_STACK_VAR(nextHeight,"nextHeight");
		HX_STACK_LINE(1068)
		int tmp14 = nextWidth;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1068)
		::flixel::graphics::atlas::FlxNode tmp15 = this->root;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1068)
		Float tmp16 = tmp15->rect->width;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1068)
		int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1068)
		bool tmp18 = (tmp14 != tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1068)
		bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1068)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1068)
		if ((tmp19)){
			HX_STACK_LINE(1068)
			int tmp21 = nextHeight;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1068)
			::flixel::graphics::atlas::FlxNode tmp22 = this->root;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1068)
			::flixel::graphics::atlas::FlxNode tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1068)
			Float tmp24 = tmp23->rect->height;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1068)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1068)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1068)
			int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1068)
			int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1068)
			tmp20 = (tmp21 != tmp28);
		}
		else{
			HX_STACK_LINE(1068)
			tmp20 = true;
		}
		HX_STACK_LINE(1068)
		if ((tmp20)){
			HX_STACK_LINE(1070)
			int tmp21 = this->maxWidth;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1070)
			bool tmp22 = (tmp21 > (int)0);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1070)
			bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1070)
			bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1070)
			if ((tmp23)){
				HX_STACK_LINE(1070)
				int tmp25 = nextWidth;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1070)
				int tmp26 = this->maxWidth;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1070)
				int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1070)
				int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1070)
				tmp24 = (tmp25 > tmp28);
			}
			else{
				HX_STACK_LINE(1070)
				tmp24 = false;
			}
			HX_STACK_LINE(1070)
			bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1070)
			bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1070)
			if ((tmp25)){
				HX_STACK_LINE(1070)
				int tmp27 = this->maxHeight;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1070)
				int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1070)
				bool tmp29 = (tmp28 > (int)0);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1070)
				bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1070)
				bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1070)
				if ((tmp31)){
					HX_STACK_LINE(1070)
					int tmp32 = nextHeight;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1070)
					int tmp33 = this->maxHeight;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1070)
					int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1070)
					int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1070)
					tmp26 = (tmp32 > tmp35);
				}
				else{
					HX_STACK_LINE(1070)
					tmp26 = false;
				}
			}
			else{
				HX_STACK_LINE(1070)
				tmp26 = true;
			}
			HX_STACK_LINE(1070)
			if ((tmp26)){
				HX_STACK_LINE(1073)
				HX_STACK_DO_THROW(HX_HCSTRING("Can't set powerOfTwo property to true, since it requires to increase atlas size which is bigger that max size","\x9a","\x7f","\x9f","\xbb"));
				HX_STACK_LINE(1075)
				return false;
			}
			HX_STACK_LINE(1078)
			::flixel::graphics::atlas::FlxNode tmp27 = this->root;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1078)
			::flixel::graphics::atlas::FlxNode temp = tmp27;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(1079)
			::flixel::math::FlxRect tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1079)
			{
				HX_STACK_LINE(1079)
				::flixel::math::FlxRect tmp29;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1079)
				{
					HX_STACK_LINE(1079)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp30 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1079)
					::flixel::math::FlxRect tmp31 = tmp30->get();		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1079)
					::flixel::math::FlxRect _this = tmp31;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1079)
					_this->x = (int)0;
					HX_STACK_LINE(1079)
					_this->y = (int)0;
					HX_STACK_LINE(1079)
					_this->width = nextWidth;
					HX_STACK_LINE(1079)
					_this->height = nextHeight;
					HX_STACK_LINE(1079)
					tmp29 = _this;
				}
				HX_STACK_LINE(1079)
				::flixel::math::FlxRect rect = tmp29;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(1079)
				rect->_inPool = false;
				HX_STACK_LINE(1079)
				tmp28 = rect;
			}
			HX_STACK_LINE(1079)
			::flixel::graphics::atlas::FlxNode tmp29 = ::flixel::graphics::atlas::FlxNode_obj::__new(tmp28,hx::ObjectPtr<OBJ_>(this),null(),null(),null());		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1079)
			this->root = tmp29;
			HX_STACK_LINE(1081)
			bool tmp30 = (temp->left != null());		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1081)
			if ((tmp30)){
				HX_STACK_LINE(1083)
				::flixel::graphics::atlas::FlxNode tmp31 = this->root;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1083)
				Float tmp32 = temp->rect->width;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1083)
				int tmp33 = ::Std_obj::_int(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1083)
				Float tmp34 = temp->rect->height;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1083)
				int tmp35 = ::Std_obj::_int(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1083)
				::flixel::graphics::atlas::FlxNode tmp36 = this->root;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1083)
				Float tmp37 = temp->rect->width;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1083)
				int tmp38 = ::Std_obj::_int(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1083)
				Float tmp39 = temp->rect->height;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1083)
				int tmp40 = ::Std_obj::_int(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1083)
				bool tmp41 = this->needToDivideHorizontally(tmp36,tmp38,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1083)
				this->divideNode(tmp31,tmp33,tmp35,tmp41,null(),null(),null());
				HX_STACK_LINE(1084)
				::flixel::graphics::atlas::FlxNode tmp42 = this->root;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1084)
				tmp42->left->left = temp;
			}
		}
	}
	HX_STACK_LINE(1089)
	bool tmp6 = this->powerOfTwo = value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1089)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_powerOfTwo,return )

::openfl::_legacy::geom::Point FlxAtlas_obj::point;

::openfl::_legacy::geom::Matrix FlxAtlas_obj::matrix;

::flixel::math::FlxPoint FlxAtlas_obj::defaultMinSize;

::flixel::math::FlxPoint FlxAtlas_obj::defaultMaxSize;


FlxAtlas_obj::FlxAtlas_obj()
{
}

void FlxAtlas_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxAtlas);
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(nodes,"nodes");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(minWidth,"minWidth");
	HX_MARK_MEMBER_NAME(minHeight,"minHeight");
	HX_MARK_MEMBER_NAME(maxWidth,"maxWidth");
	HX_MARK_MEMBER_NAME(maxHeight,"maxHeight");
	HX_MARK_MEMBER_NAME(allowRotation,"allowRotation");
	HX_MARK_MEMBER_NAME(powerOfTwo,"powerOfTwo");
	HX_MARK_MEMBER_NAME(_bitmapData,"_bitmapData");
	HX_MARK_MEMBER_NAME(_tempStorage,"_tempStorage");
	HX_MARK_END_CLASS();
}

void FlxAtlas_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(root,"root");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(nodes,"nodes");
	HX_VISIT_MEMBER_NAME(border,"border");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(minWidth,"minWidth");
	HX_VISIT_MEMBER_NAME(minHeight,"minHeight");
	HX_VISIT_MEMBER_NAME(maxWidth,"maxWidth");
	HX_VISIT_MEMBER_NAME(maxHeight,"maxHeight");
	HX_VISIT_MEMBER_NAME(allowRotation,"allowRotation");
	HX_VISIT_MEMBER_NAME(powerOfTwo,"powerOfTwo");
	HX_VISIT_MEMBER_NAME(_bitmapData,"_bitmapData");
	HX_VISIT_MEMBER_NAME(_tempStorage,"_tempStorage");
}

Dynamic FlxAtlas_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return root; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { return nodes; }
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp == hx::paccAlways ? get_width() : width; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { return border; }
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp == hx::paccAlways ? get_height() : height; }
		if (HX_FIELD_EQ(inName,"expand") ) { return expand_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addNode") ) { return addNode_dyn(); }
		if (HX_FIELD_EQ(inName,"getNode") ) { return getNode_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"minWidth") ) { return minWidth; }
		if (HX_FIELD_EQ(inName,"maxWidth") ) { return maxWidth; }
		if (HX_FIELD_EQ(inName,"initRoot") ) { return initRoot_dyn(); }
		if (HX_FIELD_EQ(inName,"wrapRoot") ) { return wrapRoot_dyn(); }
		if (HX_FIELD_EQ(inName,"addNodes") ) { return addNodes_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"minHeight") ) { return minHeight; }
		if (HX_FIELD_EQ(inName,"maxHeight") ) { return maxHeight; }
		if (HX_FIELD_EQ(inName,"tryInsert") ) { return tryInsert_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { if (inCallProp == hx::paccAlways) return get_bitmapData(); }
		if (HX_FIELD_EQ(inName,"powerOfTwo") ) { return powerOfTwo; }
		if (HX_FIELD_EQ(inName,"divideNode") ) { return divideNode_dyn(); }
		if (HX_FIELD_EQ(inName,"expandRoot") ) { return expandRoot_dyn(); }
		if (HX_FIELD_EQ(inName,"addToQueue") ) { return addToQueue_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bitmapData") ) { return _bitmapData; }
		if (HX_FIELD_EQ(inName,"createQueue") ) { return createQueue_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_tempStorage") ) { return _tempStorage; }
		if (HX_FIELD_EQ(inName,"bitmapSorter") ) { return bitmapSorter_dyn(); }
		if (HX_FIELD_EQ(inName,"set_minWidth") ) { return set_minWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxWidth") ) { return set_maxWidth_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"allowRotation") ) { return allowRotation; }
		if (HX_FIELD_EQ(inName,"getLibGdxData") ) { return getLibGdxData_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteSubtree") ) { return deleteSubtree_dyn(); }
		if (HX_FIELD_EQ(inName,"set_minHeight") ) { return set_minHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxHeight") ) { return set_maxHeight_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getAtlasFrames") ) { return getAtlasFrames_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bitmapData") ) { return get_bitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bitmapData") ) { return set_bitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"set_powerOfTwo") ) { return set_powerOfTwo_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hasNodeWithName") ) { return hasNodeWithName_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"expandBitmapData") ) { return expandBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"findNodeToInsert") ) { return findNodeToInsert_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getNextPowerOfTwo") ) { return getNextPowerOfTwo_dyn(); }
		if (HX_FIELD_EQ(inName,"generateFromQueue") ) { return generateFromQueue_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addFromAtlasObjects") ) { return addFromAtlasObjects_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"addNodeToAtlasFrames") ) { return addNodeToAtlasFrames_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"insertFirstNodeInRoot") ) { return insertFirstNodeInRoot_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"needToDivideHorizontally") ) { return needToDivideHorizontally_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"addNodeWithSpacesAndBorders") ) { return addNodeWithSpacesAndBorders_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxAtlas_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { outValue = point; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { outValue = matrix; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultMinSize") ) { outValue = defaultMinSize; return true;  }
		if (HX_FIELD_EQ(inName,"defaultMaxSize") ) { outValue = defaultMaxSize; return true;  }
	}
	return false;
}

Dynamic FlxAtlas_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< ::flixel::graphics::atlas::FlxNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { nodes=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue);width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue);height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"minWidth") ) { if (inCallProp == hx::paccAlways) return set_minWidth(inValue);minWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxWidth") ) { if (inCallProp == hx::paccAlways) return set_maxWidth(inValue);maxWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"minHeight") ) { if (inCallProp == hx::paccAlways) return set_minHeight(inValue);minHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxHeight") ) { if (inCallProp == hx::paccAlways) return set_maxHeight(inValue);maxHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { if (inCallProp == hx::paccAlways) return set_bitmapData(inValue); }
		if (HX_FIELD_EQ(inName,"powerOfTwo") ) { if (inCallProp == hx::paccAlways) return set_powerOfTwo(inValue);powerOfTwo=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bitmapData") ) { _bitmapData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_tempStorage") ) { _tempStorage=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"allowRotation") ) { allowRotation=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxAtlas_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { point=ioValue.Cast< ::openfl::_legacy::geom::Point >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=ioValue.Cast< ::openfl::_legacy::geom::Matrix >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultMinSize") ) { defaultMinSize=ioValue.Cast< ::flixel::math::FlxPoint >(); return true; }
		if (HX_FIELD_EQ(inName,"defaultMaxSize") ) { defaultMaxSize=ioValue.Cast< ::flixel::math::FlxPoint >(); return true; }
	}
	return false;
}

void FlxAtlas_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("nodes","\x31","\xb8","\xbe","\x9f"));
	outFields->push(HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"));
	outFields->push(HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("minWidth","\x14","\x23","\x9a","\xc1"));
	outFields->push(HX_HCSTRING("minHeight","\x19","\x07","\x94","\x5b"));
	outFields->push(HX_HCSTRING("maxWidth","\xc2","\x08","\x80","\x74"));
	outFields->push(HX_HCSTRING("maxHeight","\xab","\x19","\xd7","\x31"));
	outFields->push(HX_HCSTRING("allowRotation","\xe7","\xce","\x40","\xd9"));
	outFields->push(HX_HCSTRING("powerOfTwo","\x70","\xbe","\xae","\xea"));
	outFields->push(HX_HCSTRING("_bitmapData","\xd8","\x82","\x4a","\x06"));
	outFields->push(HX_HCSTRING("_tempStorage","\x88","\x3c","\x09","\x91"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::graphics::atlas::FlxNode*/ ,(int)offsetof(FlxAtlas_obj,root),HX_HCSTRING("root","\x22","\xee","\xae","\x4b")},
	{hx::fsString,(int)offsetof(FlxAtlas_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxAtlas_obj,nodes),HX_HCSTRING("nodes","\x31","\xb8","\xbe","\x9f")},
	{hx::fsInt,(int)offsetof(FlxAtlas_obj,border),HX_HCSTRING("border","\xec","\x4c","\x1a","\x64")},
	{hx::fsInt,(int)offsetof(FlxAtlas_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(FlxAtlas_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(FlxAtlas_obj,minWidth),HX_HCSTRING("minWidth","\x14","\x23","\x9a","\xc1")},
	{hx::fsInt,(int)offsetof(FlxAtlas_obj,minHeight),HX_HCSTRING("minHeight","\x19","\x07","\x94","\x5b")},
	{hx::fsInt,(int)offsetof(FlxAtlas_obj,maxWidth),HX_HCSTRING("maxWidth","\xc2","\x08","\x80","\x74")},
	{hx::fsInt,(int)offsetof(FlxAtlas_obj,maxHeight),HX_HCSTRING("maxHeight","\xab","\x19","\xd7","\x31")},
	{hx::fsBool,(int)offsetof(FlxAtlas_obj,allowRotation),HX_HCSTRING("allowRotation","\xe7","\xce","\x40","\xd9")},
	{hx::fsBool,(int)offsetof(FlxAtlas_obj,powerOfTwo),HX_HCSTRING("powerOfTwo","\x70","\xbe","\xae","\xea")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxAtlas_obj,_bitmapData),HX_HCSTRING("_bitmapData","\xd8","\x82","\x4a","\x06")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(FlxAtlas_obj,_tempStorage),HX_HCSTRING("_tempStorage","\x88","\x3c","\x09","\x91")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(void *) &FlxAtlas_obj::point,HX_HCSTRING("point","\x50","\xb4","\x8f","\xc6")},
	{hx::fsObject /*::openfl::_legacy::geom::Matrix*/ ,(void *) &FlxAtlas_obj::matrix,HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(void *) &FlxAtlas_obj::defaultMinSize,HX_HCSTRING("defaultMinSize","\xb2","\x68","\x9d","\x6c")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(void *) &FlxAtlas_obj::defaultMaxSize,HX_HCSTRING("defaultMaxSize","\xc4","\x52","\xc4","\xfb")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("root","\x22","\xee","\xae","\x4b"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("nodes","\x31","\xb8","\xbe","\x9f"),
	HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("minWidth","\x14","\x23","\x9a","\xc1"),
	HX_HCSTRING("minHeight","\x19","\x07","\x94","\x5b"),
	HX_HCSTRING("maxWidth","\xc2","\x08","\x80","\x74"),
	HX_HCSTRING("maxHeight","\xab","\x19","\xd7","\x31"),
	HX_HCSTRING("allowRotation","\xe7","\xce","\x40","\xd9"),
	HX_HCSTRING("powerOfTwo","\x70","\xbe","\xae","\xea"),
	HX_HCSTRING("_bitmapData","\xd8","\x82","\x4a","\x06"),
	HX_HCSTRING("_tempStorage","\x88","\x3c","\x09","\x91"),
	HX_HCSTRING("initRoot","\x52","\x1d","\x66","\x50"),
	HX_HCSTRING("addNode","\xc3","\x4c","\x47","\x85"),
	HX_HCSTRING("wrapRoot","\x0c","\x01","\x09","\x97"),
	HX_HCSTRING("tryInsert","\xd4","\x3e","\xf1","\x87"),
	HX_HCSTRING("needToDivideHorizontally","\x5b","\x7d","\xcf","\xa2"),
	HX_HCSTRING("divideNode","\x1b","\x16","\xb5","\x64"),
	HX_HCSTRING("insertFirstNodeInRoot","\x60","\x9d","\x55","\x94"),
	HX_HCSTRING("expand","\x5a","\xee","\x72","\xc4"),
	HX_HCSTRING("expandRoot","\x9c","\x3d","\x1a","\x4c"),
	HX_HCSTRING("expandBitmapData","\xb3","\xdc","\x4b","\xc7"),
	HX_HCSTRING("getNextPowerOfTwo","\x79","\xc4","\xc2","\xb5"),
	HX_HCSTRING("addNodeWithSpacesAndBorders","\xc6","\x41","\x7e","\xb4"),
	HX_HCSTRING("getAtlasFrames","\x5b","\x4e","\xd7","\xb6"),
	HX_HCSTRING("addNodeToAtlasFrames","\xd3","\xfe","\xb4","\xb1"),
	HX_HCSTRING("hasNodeWithName","\x0d","\x52","\xd4","\xd3"),
	HX_HCSTRING("getNode","\xb8","\xb9","\x8c","\x1b"),
	HX_HCSTRING("addNodes","\x50","\xde","\x1b","\x19"),
	HX_HCSTRING("addFromAtlasObjects","\x94","\x9b","\x21","\x50"),
	HX_HCSTRING("bitmapSorter","\x9a","\x34","\x57","\x3b"),
	HX_HCSTRING("createQueue","\xf5","\xc4","\x65","\x87"),
	HX_HCSTRING("addToQueue","\xf5","\x05","\xf9","\x91"),
	HX_HCSTRING("generateFromQueue","\xd2","\xe9","\x4a","\x08"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("getLibGdxData","\xf6","\xd2","\xa6","\xaf"),
	HX_HCSTRING("deleteSubtree","\xf3","\x95","\xb7","\x8e"),
	HX_HCSTRING("findNodeToInsert","\x0f","\x91","\xf6","\x3b"),
	HX_HCSTRING("get_bitmapData","\x02","\x3e","\xb6","\xa9"),
	HX_HCSTRING("set_bitmapData","\x76","\x26","\xd6","\xc9"),
	HX_HCSTRING("set_minWidth","\x91","\xfa","\xac","\x8b"),
	HX_HCSTRING("set_minHeight","\xfc","\xbc","\xfd","\x61"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("set_maxWidth","\x3f","\xe0","\x92","\x3e"),
	HX_HCSTRING("set_maxHeight","\x8e","\xcf","\x40","\x38"),
	HX_HCSTRING("set_powerOfTwo","\x2d","\x2f","\xc4","\x80"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAtlas_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxAtlas_obj::point,"point");
	HX_MARK_MEMBER_NAME(FlxAtlas_obj::matrix,"matrix");
	HX_MARK_MEMBER_NAME(FlxAtlas_obj::defaultMinSize,"defaultMinSize");
	HX_MARK_MEMBER_NAME(FlxAtlas_obj::defaultMaxSize,"defaultMaxSize");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAtlas_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxAtlas_obj::point,"point");
	HX_VISIT_MEMBER_NAME(FlxAtlas_obj::matrix,"matrix");
	HX_VISIT_MEMBER_NAME(FlxAtlas_obj::defaultMinSize,"defaultMinSize");
	HX_VISIT_MEMBER_NAME(FlxAtlas_obj::defaultMaxSize,"defaultMaxSize");
};

#endif

hx::Class FlxAtlas_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("point","\x50","\xb4","\x8f","\xc6"),
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("defaultMinSize","\xb2","\x68","\x9d","\x6c"),
	HX_HCSTRING("defaultMaxSize","\xc4","\x52","\xc4","\xfb"),
	::String(null()) };

void FlxAtlas_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.graphics.atlas.FlxAtlas","\x4d","\x7b","\x60","\x52");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxAtlas_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxAtlas_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxAtlas_obj >;
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

void FlxAtlas_obj::__boot()
{
	point= ::openfl::_legacy::geom::Point_obj::__new(null(),null());
	matrix= ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	defaultMinSize= ::flixel::math::FlxPoint_obj::__new((int)128,(int)128);
	defaultMaxSize= ::flixel::math::FlxPoint_obj::__new((int)1024,(int)1024);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace atlas
