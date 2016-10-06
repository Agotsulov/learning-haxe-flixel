#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_IAssetCache
#include <openfl/_legacy/IAssetCache.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GL
#include <openfl/_legacy/gl/GL.h>
#endif
namespace flixel{
namespace _system{
namespace frontEnds{

Void BitmapFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","new",0x0f2331ed,"flixel.system.frontEnds.BitmapFrontEnd.new","flixel/system/frontEnds/BitmapFrontEnd.hx",38,0x91a05ae2)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(38)
	this->clearCache();
}
;
	return null();
}

//BitmapFrontEnd_obj::~BitmapFrontEnd_obj() { }

Dynamic BitmapFrontEnd_obj::__CreateEmpty() { return  new BitmapFrontEnd_obj; }
hx::ObjectPtr< BitmapFrontEnd_obj > BitmapFrontEnd_obj::__new()
{  hx::ObjectPtr< BitmapFrontEnd_obj > _result_ = new BitmapFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Dynamic BitmapFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapFrontEnd_obj > _result_ = new BitmapFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Void BitmapFrontEnd_obj::onAssetsReload( Dynamic _){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","onAssetsReload",0x7811d38e,"flixel.system.frontEnds.BitmapFrontEnd.onAssetsReload","flixel/system/frontEnds/BitmapFrontEnd.hx",42,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(43)
		::haxe::ds::StringMap tmp = this->_cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(43)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(45)
				::haxe::ds::StringMap tmp2 = this->_cache;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(45)
				::String tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(45)
				::flixel::graphics::FlxGraphic tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(45)
				::flixel::graphics::FlxGraphic obj = tmp4;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(46)
				bool tmp5 = (obj != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(46)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(46)
				if ((tmp5)){
					HX_STACK_LINE(46)
					bool tmp7 = (obj->assetsClass != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(46)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(46)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(46)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(46)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(46)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(46)
					if ((tmp12)){
						HX_STACK_LINE(46)
						tmp6 = (obj->assetsKey != null());
					}
					else{
						HX_STACK_LINE(46)
						tmp6 = true;
					}
				}
				else{
					HX_STACK_LINE(46)
					tmp6 = false;
				}
				HX_STACK_LINE(46)
				if ((tmp6)){
					HX_STACK_LINE(48)
					obj->onAssetsReload();
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,onAssetsReload,(void))

Void BitmapFrontEnd_obj::onContext( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","onContext",0x0e82d7dd,"flixel.system.frontEnds.BitmapFrontEnd.onContext","flixel/system/frontEnds/BitmapFrontEnd.hx",58,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(59)
		::haxe::ds::StringMap tmp = this->_cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(61)
				::haxe::ds::StringMap tmp2 = this->_cache;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(61)
				::String tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(61)
				::flixel::graphics::FlxGraphic tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(61)
				::flixel::graphics::FlxGraphic obj = tmp4;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(62)
				bool tmp5 = (obj != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(62)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(62)
				if ((tmp5)){
					HX_STACK_LINE(62)
					tmp6 = obj->isDumped;
				}
				else{
					HX_STACK_LINE(62)
					tmp6 = false;
				}
				HX_STACK_LINE(62)
				if ((tmp6)){
					HX_STACK_LINE(64)
					obj->onContext();
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,onContext,(void))

Void BitmapFrontEnd_obj::dumpCache( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","dumpCache",0xf899b9bb,"flixel.system.frontEnds.BitmapFrontEnd.dumpCache","flixel/system/frontEnds/BitmapFrontEnd.hx",74,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(76)
		::haxe::ds::StringMap tmp = this->_cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(78)
				::haxe::ds::StringMap tmp2 = this->_cache;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(78)
				::String tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(78)
				::flixel::graphics::FlxGraphic tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(78)
				::flixel::graphics::FlxGraphic obj = tmp4;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(79)
				bool tmp5 = (obj != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(79)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(79)
				if ((tmp5)){
					HX_STACK_LINE(79)
					bool tmp7 = (obj->assetsClass != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(79)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(79)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(79)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(79)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(79)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(79)
					if ((tmp12)){
						HX_STACK_LINE(79)
						tmp6 = (obj->assetsKey != null());
					}
					else{
						HX_STACK_LINE(79)
						tmp6 = true;
					}
				}
				else{
					HX_STACK_LINE(79)
					tmp6 = false;
				}
				HX_STACK_LINE(79)
				if ((tmp6)){
					HX_STACK_LINE(81)
					obj->dump();
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,dumpCache,(void))

Void BitmapFrontEnd_obj::undumpCache( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","undumpCache",0xfe6eed82,"flixel.system.frontEnds.BitmapFrontEnd.undumpCache","flixel/system/frontEnds/BitmapFrontEnd.hx",91,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(93)
		::haxe::ds::StringMap tmp = this->_cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(95)
				::haxe::ds::StringMap tmp2 = this->_cache;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(95)
				::String tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(95)
				::flixel::graphics::FlxGraphic tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(95)
				::flixel::graphics::FlxGraphic obj = tmp4;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(96)
				bool tmp5 = (obj != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(96)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(96)
				if ((tmp5)){
					HX_STACK_LINE(96)
					tmp6 = obj->isDumped;
				}
				else{
					HX_STACK_LINE(96)
					tmp6 = false;
				}
				HX_STACK_LINE(96)
				if ((tmp6)){
					HX_STACK_LINE(98)
					obj->undump();
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,undumpCache,(void))

bool BitmapFrontEnd_obj::checkCache( ::String Key){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","checkCache",0xe81c366d,"flixel.system.frontEnds.BitmapFrontEnd.checkCache","flixel/system/frontEnds/BitmapFrontEnd.hx",111,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Key,"Key")
	HX_STACK_LINE(112)
	::haxe::ds::StringMap tmp = this->_cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	::String tmp1 = Key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(112)
	::String tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(112)
	bool tmp3 = tmp->exists(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(112)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(112)
	if ((tmp3)){
		HX_STACK_LINE(112)
		::haxe::ds::StringMap tmp5 = this->_cache;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(112)
		::haxe::ds::StringMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(112)
		::String tmp7 = Key;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(112)
		::String tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(112)
		::flixel::graphics::FlxGraphic tmp9 = tmp6->get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(112)
		::flixel::graphics::FlxGraphic tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(112)
		::flixel::graphics::FlxGraphic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(112)
		tmp4 = (tmp11 != null());
	}
	else{
		HX_STACK_LINE(112)
		tmp4 = false;
	}
	HX_STACK_LINE(112)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,checkCache,return )

::flixel::graphics::FlxGraphic BitmapFrontEnd_obj::create( int Width,int Height,int Color,hx::Null< bool >  __o_Unique,::String Key){
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","create",0xd385bb8f,"flixel.system.frontEnds.BitmapFrontEnd.create","flixel/system/frontEnds/BitmapFrontEnd.hx",126,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(127)
		int tmp = Width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(127)
		int tmp1 = Height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(127)
		int tmp2 = Color;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(127)
		bool tmp3 = Unique;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(127)
		::String tmp4 = Key;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(127)
		::flixel::graphics::FlxGraphic tmp5 = ::flixel::graphics::FlxGraphic_obj::fromRectangle(tmp,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(127)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapFrontEnd_obj,create,return )

::flixel::graphics::FlxGraphic BitmapFrontEnd_obj::add( Dynamic Graphic,hx::Null< bool >  __o_Unique,::String Key){
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","add",0x0f1953ae,"flixel.system.frontEnds.BitmapFrontEnd.add","flixel/system/frontEnds/BitmapFrontEnd.hx",142,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(143)
		Dynamic tmp = Graphic;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(143)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::flixel::graphics::FlxGraphic >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(143)
		if ((tmp1)){
			HX_STACK_LINE(145)
			::flixel::graphics::FlxGraphic tmp2 = ((::flixel::graphics::FlxGraphic)(Graphic));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(145)
			bool tmp3 = Unique;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(145)
			::String tmp4 = Key;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(145)
			::flixel::graphics::FlxGraphic tmp5 = ::flixel::graphics::FlxGraphic_obj::fromGraphic(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(145)
			return tmp5;
		}
		else{
			HX_STACK_LINE(147)
			Dynamic tmp2 = Graphic;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(147)
			bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::openfl::_legacy::display::BitmapData >());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(147)
			if ((tmp3)){
				HX_STACK_LINE(149)
				::openfl::_legacy::display::BitmapData tmp4 = ((::openfl::_legacy::display::BitmapData)(Graphic));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(149)
				bool tmp5 = Unique;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(149)
				::String tmp6 = Key;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(149)
				::flixel::graphics::FlxGraphic tmp7 = ::flixel::graphics::FlxGraphic_obj::fromBitmapData(tmp4,tmp5,tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(149)
				return tmp7;
			}
		}
		HX_STACK_LINE(153)
		Dynamic tmp2 = Graphic;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(153)
		::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(153)
		bool tmp4 = Unique;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(153)
		::String tmp5 = Key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(153)
		::flixel::graphics::FlxGraphic tmp6 = ::flixel::graphics::FlxGraphic_obj::fromAssetKey(tmp3,tmp4,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(153)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapFrontEnd_obj,add,return )

::flixel::graphics::FlxGraphic BitmapFrontEnd_obj::addGraphic( ::flixel::graphics::FlxGraphic graphic){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","addGraphic",0x72a9209a,"flixel.system.frontEnds.BitmapFrontEnd.addGraphic","flixel/system/frontEnds/BitmapFrontEnd.hx",163,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_LINE(164)
	::haxe::ds::StringMap tmp = this->_cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	::String tmp1 = graphic->key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(164)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(164)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(164)
	if ((tmp3)){
		HX_STACK_LINE(166)
		::haxe::ds::StringMap tmp4 = this->_cache;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(166)
		::String tmp5 = graphic->key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(166)
		::flixel::graphics::FlxGraphic tmp6 = graphic;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(166)
		tmp4->set(tmp5,tmp6);
	}
	HX_STACK_LINE(168)
	::flixel::graphics::FlxGraphic tmp4 = graphic;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(168)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,addGraphic,return )

::flixel::graphics::FlxGraphic BitmapFrontEnd_obj::get( ::String key){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","get",0x0f1de223,"flixel.system.frontEnds.BitmapFrontEnd.get","flixel/system/frontEnds/BitmapFrontEnd.hx",177,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(178)
	::haxe::ds::StringMap tmp = this->_cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	::String tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(178)
	::flixel::graphics::FlxGraphic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(178)
	::flixel::graphics::FlxGraphic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(178)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,get,return )

::String BitmapFrontEnd_obj::findKeyForBitmap( ::openfl::_legacy::display::BitmapData bmd){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","findKeyForBitmap",0x03085a65,"flixel.system.frontEnds.BitmapFrontEnd.findKeyForBitmap","flixel/system/frontEnds/BitmapFrontEnd.hx",188,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bmd,"bmd")
	HX_STACK_LINE(189)
	::haxe::ds::StringMap tmp = this->_cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(189)
	Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(189)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
		::String key = __it->next();
		{
			HX_STACK_LINE(191)
			::haxe::ds::StringMap tmp2 = this->_cache;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(191)
			::String tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(191)
			::flixel::graphics::FlxGraphic tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(191)
			::openfl::_legacy::display::BitmapData tmp5 = tmp4->bitmap;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(191)
			::openfl::_legacy::display::BitmapData tmp6 = bmd;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(191)
			bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(191)
			if ((tmp7)){
				HX_STACK_LINE(192)
				::String tmp8 = key;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(192)
				return tmp8;
			}
		}
;
	}
	HX_STACK_LINE(194)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,findKeyForBitmap,return )

::String BitmapFrontEnd_obj::getKeyForClass( ::hx::Class source){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","getKeyForClass",0x26696fcb,"flixel.system.frontEnds.BitmapFrontEnd.getKeyForClass","flixel/system/frontEnds/BitmapFrontEnd.hx",204,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_LINE(205)
	::hx::Class tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(205)
	::String tmp1 = ::Type_obj::getClassName(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(205)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,getKeyForClass,return )

::String BitmapFrontEnd_obj::generateKey( ::String systemKey,::String userKey,hx::Null< bool >  __o_unique){
bool unique = __o_unique.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","generateKey",0xe3b3c7f7,"flixel.system.frontEnds.BitmapFrontEnd.generateKey","flixel/system/frontEnds/BitmapFrontEnd.hx",217,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(systemKey,"systemKey")
	HX_STACK_ARG(userKey,"userKey")
	HX_STACK_ARG(unique,"unique")
{
		HX_STACK_LINE(218)
		::String key = userKey;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(219)
		bool tmp = (key == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(219)
		if ((tmp)){
			HX_STACK_LINE(220)
			key = systemKey;
		}
		HX_STACK_LINE(222)
		bool tmp1 = unique;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(222)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(222)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(222)
		if ((tmp2)){
			HX_STACK_LINE(222)
			tmp3 = (key == null());
		}
		else{
			HX_STACK_LINE(222)
			tmp3 = true;
		}
		HX_STACK_LINE(222)
		if ((tmp3)){
			HX_STACK_LINE(223)
			::String tmp4 = key;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(223)
			::String tmp5 = this->getUniqueKey(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(223)
			key = tmp5;
		}
		HX_STACK_LINE(225)
		::String tmp4 = key;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(225)
		return tmp4;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapFrontEnd_obj,generateKey,return )

::String BitmapFrontEnd_obj::getUniqueKey( ::String baseKey){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","getUniqueKey",0x2898506b,"flixel.system.frontEnds.BitmapFrontEnd.getUniqueKey","flixel/system/frontEnds/BitmapFrontEnd.hx",235,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(baseKey,"baseKey")
	HX_STACK_LINE(236)
	bool tmp = (baseKey == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	if ((tmp)){
		HX_STACK_LINE(237)
		baseKey = HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c");
	}
	HX_STACK_LINE(239)
	::haxe::ds::StringMap tmp1 = this->_cache;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(239)
	::String tmp2 = baseKey;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(239)
	::String tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(239)
	bool tmp4 = tmp1->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(239)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(239)
	if ((tmp4)){
		HX_STACK_LINE(239)
		::haxe::ds::StringMap tmp6 = this->_cache;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(239)
		::haxe::ds::StringMap tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(239)
		::String tmp8 = baseKey;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(239)
		::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(239)
		::flixel::graphics::FlxGraphic tmp10 = tmp7->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(239)
		::flixel::graphics::FlxGraphic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(239)
		::flixel::graphics::FlxGraphic tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(239)
		tmp5 = (tmp12 != null());
	}
	else{
		HX_STACK_LINE(239)
		tmp5 = false;
	}
	HX_STACK_LINE(239)
	if ((tmp5)){
		HX_STACK_LINE(241)
		int inc = (int)0;		HX_STACK_VAR(inc,"inc");
		HX_STACK_LINE(242)
		::String ukey;		HX_STACK_VAR(ukey,"ukey");
		HX_STACK_LINE(243)
		while((true)){
			HX_STACK_LINE(245)
			::String tmp6 = baseKey;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(245)
			int tmp7 = (inc)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(245)
			::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(245)
			ukey = tmp8;
			HX_STACK_LINE(247)
			::haxe::ds::StringMap tmp9 = this->_cache;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(247)
			::String tmp10 = ukey;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(247)
			::String tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(247)
			bool tmp12 = tmp9->exists(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(247)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(247)
			if ((tmp12)){
				HX_STACK_LINE(247)
				::haxe::ds::StringMap tmp14 = this->_cache;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(247)
				::haxe::ds::StringMap tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(247)
				::String tmp16 = ukey;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(247)
				::String tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(247)
				::flixel::graphics::FlxGraphic tmp18 = tmp15->get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(247)
				::flixel::graphics::FlxGraphic tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(247)
				::flixel::graphics::FlxGraphic tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(247)
				tmp13 = (tmp20 != null());
			}
			else{
				HX_STACK_LINE(247)
				tmp13 = false;
			}
			HX_STACK_LINE(247)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(243)
			if ((tmp14)){
				HX_STACK_LINE(243)
				break;
			}
		}
		HX_STACK_LINE(248)
		baseKey = ukey;
	}
	HX_STACK_LINE(250)
	::String tmp6 = baseKey;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(250)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,getUniqueKey,return )

::String BitmapFrontEnd_obj::getKeyWithSpacesAndBorders( ::String baseKey,::flixel::math::FlxPoint frameSize,::flixel::math::FlxPoint frameSpacing,::flixel::math::FlxPoint frameBorder,::flixel::math::FlxRect region){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","getKeyWithSpacesAndBorders",0x04327ebf,"flixel.system.frontEnds.BitmapFrontEnd.getKeyWithSpacesAndBorders","flixel/system/frontEnds/BitmapFrontEnd.hx",264,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(baseKey,"baseKey")
	HX_STACK_ARG(frameSize,"frameSize")
	HX_STACK_ARG(frameSpacing,"frameSpacing")
	HX_STACK_ARG(frameBorder,"frameBorder")
	HX_STACK_ARG(region,"region")
	HX_STACK_LINE(265)
	::String result = baseKey;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(267)
	bool tmp = (region != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(267)
	if ((tmp)){
		HX_STACK_LINE(268)
		::String tmp1 = (HX_HCSTRING("_Region:","\x27","\x96","\xa5","\x81") + region->x);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(268)
		::String tmp2 = (tmp1 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(268)
		Float tmp3 = region->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(268)
		::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(268)
		::String tmp5 = (tmp4 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(268)
		Float tmp6 = region->width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(268)
		::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(268)
		::String tmp8 = (tmp7 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(268)
		Float tmp9 = region->height;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(268)
		::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(268)
		hx::AddEq(result,tmp10);
	}
	HX_STACK_LINE(270)
	bool tmp1 = (frameSize != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(270)
	if ((tmp1)){
		HX_STACK_LINE(271)
		::String tmp2 = (HX_HCSTRING("_FrameSize:","\x2b","\x0e","\x3a","\x29") + frameSize->x);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(271)
		::String tmp3 = (tmp2 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(271)
		Float tmp4 = frameSize->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(271)
		::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(271)
		hx::AddEq(result,tmp5);
	}
	HX_STACK_LINE(273)
	bool tmp2 = (frameSpacing != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(273)
	if ((tmp2)){
		HX_STACK_LINE(274)
		::String tmp3 = (HX_HCSTRING("_Spaces:","\x0e","\xb0","\xc1","\x98") + frameSpacing->x);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(274)
		::String tmp4 = (tmp3 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(274)
		Float tmp5 = frameSpacing->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(274)
		::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(274)
		hx::AddEq(result,tmp6);
	}
	HX_STACK_LINE(276)
	bool tmp3 = (frameBorder != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(276)
	if ((tmp3)){
		HX_STACK_LINE(277)
		::String tmp4 = (HX_HCSTRING("_Border:","\x2f","\x83","\xf2","\x39") + frameBorder->x);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(277)
		::String tmp5 = (tmp4 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(277)
		Float tmp6 = frameBorder->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(277)
		::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(277)
		hx::AddEq(result,tmp7);
	}
	HX_STACK_LINE(279)
	::String tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(279)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapFrontEnd_obj,getKeyWithSpacesAndBorders,return )

Void BitmapFrontEnd_obj::remove( ::flixel::graphics::FlxGraphic graphic){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","remove",0x5bfef0d7,"flixel.system.frontEnds.BitmapFrontEnd.remove","flixel/system/frontEnds/BitmapFrontEnd.hx",287,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphic,"graphic")
		HX_STACK_LINE(288)
		bool tmp = (graphic != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(288)
		if ((tmp)){
			HX_STACK_LINE(289)
			::String tmp1 = graphic->key;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(289)
			this->removeByKey(tmp1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,remove,(void))

Void BitmapFrontEnd_obj::removeByKey( ::String key){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","removeByKey",0x593bffb1,"flixel.system.frontEnds.BitmapFrontEnd.removeByKey","flixel/system/frontEnds/BitmapFrontEnd.hx",297,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_LINE(298)
		bool tmp = (key != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(298)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(298)
		if ((tmp)){
			HX_STACK_LINE(298)
			::haxe::ds::StringMap tmp2 = this->_cache;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(298)
			::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(298)
			::String tmp4 = key;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(298)
			::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(298)
			tmp1 = tmp3->exists(tmp5);
		}
		else{
			HX_STACK_LINE(298)
			tmp1 = false;
		}
		HX_STACK_LINE(298)
		if ((tmp1)){
			HX_STACK_LINE(300)
			::haxe::ds::StringMap tmp2 = this->_cache;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(300)
			::String tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(300)
			::flixel::graphics::FlxGraphic tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(300)
			::flixel::graphics::FlxGraphic obj = tmp4;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(301)
			::openfl::_legacy::IAssetCache tmp5 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(301)
			::String tmp6 = key;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(301)
			tmp5->removeBitmapData(tmp6);
			HX_STACK_LINE(302)
			::haxe::ds::StringMap tmp7 = this->_cache;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(302)
			::String tmp8 = key;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(302)
			tmp7->remove(tmp8);
			HX_STACK_LINE(303)
			obj->destroy();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,removeByKey,(void))

Void BitmapFrontEnd_obj::removeIfNoUse( ::flixel::graphics::FlxGraphic graphic){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","removeIfNoUse",0x6b036552,"flixel.system.frontEnds.BitmapFrontEnd.removeIfNoUse","flixel/system/frontEnds/BitmapFrontEnd.hx",308,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphic,"graphic")
		HX_STACK_LINE(309)
		bool tmp = (graphic != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(309)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(309)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(309)
		if ((tmp1)){
			HX_STACK_LINE(309)
			int tmp3 = graphic->get_useCount();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(309)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(309)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(309)
			tmp2 = (tmp5 == (int)0);
		}
		else{
			HX_STACK_LINE(309)
			tmp2 = false;
		}
		HX_STACK_LINE(309)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(309)
		if ((tmp2)){
			HX_STACK_LINE(309)
			bool tmp4 = graphic->persist;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(309)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(309)
			tmp3 = !(tmp5);
		}
		else{
			HX_STACK_LINE(309)
			tmp3 = false;
		}
		HX_STACK_LINE(309)
		if ((tmp3)){
			HX_STACK_LINE(310)
			::flixel::graphics::FlxGraphic tmp4 = graphic;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(310)
			this->remove(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,removeIfNoUse,(void))

Void BitmapFrontEnd_obj::clearCache( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","clearCache",0xad367388,"flixel.system.frontEnds.BitmapFrontEnd.clearCache","flixel/system/frontEnds/BitmapFrontEnd.hx",318,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(319)
		::haxe::ds::StringMap tmp = this->_cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(319)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(319)
		if ((tmp1)){
			HX_STACK_LINE(320)
			::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(320)
			{
				HX_STACK_LINE(320)
				::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(320)
				::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(320)
				tmp2 = tmp4;
			}
			HX_STACK_LINE(320)
			this->_cache = tmp2;
		}
		HX_STACK_LINE(322)
		::haxe::ds::StringMap tmp2 = this->_cache;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(322)
		Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(322)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(324)
				::haxe::ds::StringMap tmp4 = this->_cache;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(324)
				::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(324)
				::flixel::graphics::FlxGraphic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(324)
				::flixel::graphics::FlxGraphic obj = tmp6;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(325)
				bool tmp7 = (obj != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(325)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(325)
				if ((tmp7)){
					HX_STACK_LINE(325)
					bool tmp9 = obj->persist;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(325)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(325)
					tmp8 = !(tmp10);
				}
				else{
					HX_STACK_LINE(325)
					tmp8 = false;
				}
				HX_STACK_LINE(325)
				if ((tmp8)){
					HX_STACK_LINE(327)
					::String tmp9 = key;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(327)
					this->removeByKey(tmp9);
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,clearCache,(void))

Void BitmapFrontEnd_obj::clearUnused( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","clearUnused",0x9cfedd10,"flixel.system.frontEnds.BitmapFrontEnd.clearUnused","flixel/system/frontEnds/BitmapFrontEnd.hx",337,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(338)
		::haxe::ds::StringMap tmp = this->_cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(338)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(338)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(340)
				::haxe::ds::StringMap tmp2 = this->_cache;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(340)
				::String tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(340)
				::flixel::graphics::FlxGraphic tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(340)
				::flixel::graphics::FlxGraphic obj = tmp4;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(341)
				bool tmp5 = (obj != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(341)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(341)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(341)
				if ((tmp6)){
					HX_STACK_LINE(341)
					int tmp8 = obj->get_useCount();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(341)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(341)
					int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(341)
					tmp7 = (tmp10 <= (int)0);
				}
				else{
					HX_STACK_LINE(341)
					tmp7 = false;
				}
				HX_STACK_LINE(341)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(341)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(341)
				if ((tmp8)){
					HX_STACK_LINE(341)
					bool tmp10 = obj->persist;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(341)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(341)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(341)
					tmp9 = !(tmp12);
				}
				else{
					HX_STACK_LINE(341)
					tmp9 = false;
				}
				HX_STACK_LINE(341)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(341)
				if ((tmp9)){
					HX_STACK_LINE(341)
					tmp10 = obj->get_destroyOnNoUse();
				}
				else{
					HX_STACK_LINE(341)
					tmp10 = false;
				}
				HX_STACK_LINE(341)
				if ((tmp10)){
					HX_STACK_LINE(343)
					::String tmp11 = key;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(343)
					this->removeByKey(tmp11);
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,clearUnused,(void))

int BitmapFrontEnd_obj::get_maxTextureSize( ){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","get_maxTextureSize",0x8d42ecd4,"flixel.system.frontEnds.BitmapFrontEnd.get_maxTextureSize","flixel/system/frontEnds/BitmapFrontEnd.hx",350,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(351)
	Dynamic tmp = ::openfl::_legacy::gl::GL_obj::lime_gl_get_parameter((int)3379);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(351)
	int tmp1 = ((int)(tmp));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(351)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,get_maxTextureSize,return )

::flixel::graphics::frames::FlxFrame BitmapFrontEnd_obj::get_whitePixel( ){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","get_whitePixel",0xa476cef9,"flixel.system.frontEnds.BitmapFrontEnd.get_whitePixel","flixel/system/frontEnds/BitmapFrontEnd.hx",356,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(357)
	::flixel::graphics::frames::FlxFrame tmp = this->_whitePixel;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(357)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(357)
	if ((tmp1)){
		HX_STACK_LINE(359)
		::openfl::_legacy::display::BitmapData tmp2 = ::openfl::_legacy::display::BitmapData_obj::__new((int)10,(int)10,true,(int)-1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(359)
		::openfl::_legacy::display::BitmapData bd = tmp2;		HX_STACK_VAR(bd,"bd");
		HX_STACK_LINE(360)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp3 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(360)
		::openfl::_legacy::display::BitmapData tmp4 = bd;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(360)
		::flixel::graphics::FlxGraphic tmp5 = tmp3->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp4,true,HX_HCSTRING("whitePixels","\xb6","\x92","\xba","\x9e"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(360)
		::flixel::graphics::FlxGraphic graphic = tmp5;		HX_STACK_VAR(graphic,"graphic");
		HX_STACK_LINE(361)
		graphic->persist = true;
		HX_STACK_LINE(362)
		::flixel::graphics::frames::FlxImageFrame tmp6 = graphic->get_imageFrame();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(362)
		::flixel::graphics::frames::FlxFrame tmp7 = tmp6->get_frame();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(362)
		this->_whitePixel = tmp7;
	}
	HX_STACK_LINE(365)
	::flixel::graphics::frames::FlxFrame tmp2 = this->_whitePixel;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(365)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,get_whitePixel,return )


BitmapFrontEnd_obj::BitmapFrontEnd_obj()
{
}

void BitmapFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapFrontEnd);
	HX_MARK_MEMBER_NAME(_cache,"_cache");
	HX_MARK_MEMBER_NAME(_whitePixel,"_whitePixel");
	HX_MARK_END_CLASS();
}

void BitmapFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_cache,"_cache");
	HX_VISIT_MEMBER_NAME(_whitePixel,"_whitePixel");
}

Dynamic BitmapFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_cache") ) { return _cache; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onContext") ) { return onContext_dyn(); }
		if (HX_FIELD_EQ(inName,"dumpCache") ) { return dumpCache_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"whitePixel") ) { if (inCallProp == hx::paccAlways) return get_whitePixel(); }
		if (HX_FIELD_EQ(inName,"checkCache") ) { return checkCache_dyn(); }
		if (HX_FIELD_EQ(inName,"addGraphic") ) { return addGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"clearCache") ) { return clearCache_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_whitePixel") ) { return _whitePixel; }
		if (HX_FIELD_EQ(inName,"undumpCache") ) { return undumpCache_dyn(); }
		if (HX_FIELD_EQ(inName,"generateKey") ) { return generateKey_dyn(); }
		if (HX_FIELD_EQ(inName,"removeByKey") ) { return removeByKey_dyn(); }
		if (HX_FIELD_EQ(inName,"clearUnused") ) { return clearUnused_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getUniqueKey") ) { return getUniqueKey_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeIfNoUse") ) { return removeIfNoUse_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"maxTextureSize") ) { if (inCallProp == hx::paccAlways) return get_maxTextureSize(); }
		if (HX_FIELD_EQ(inName,"onAssetsReload") ) { return onAssetsReload_dyn(); }
		if (HX_FIELD_EQ(inName,"getKeyForClass") ) { return getKeyForClass_dyn(); }
		if (HX_FIELD_EQ(inName,"get_whitePixel") ) { return get_whitePixel_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"findKeyForBitmap") ) { return findKeyForBitmap_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_maxTextureSize") ) { return get_maxTextureSize_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getKeyWithSpacesAndBorders") ) { return getKeyWithSpacesAndBorders_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_cache") ) { _cache=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_whitePixel") ) { _whitePixel=inValue.Cast< ::flixel::graphics::frames::FlxFrame >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("maxTextureSize","\xf8","\xa6","\x7c","\x0a"));
	outFields->push(HX_HCSTRING("whitePixel","\x1d","\xa7","\xf7","\x19"));
	outFields->push(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"));
	outFields->push(HX_HCSTRING("_whitePixel","\x3c","\x74","\x81","\xec"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(BitmapFrontEnd_obj,_cache),HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c")},
	{hx::fsObject /*::flixel::graphics::frames::FlxFrame*/ ,(int)offsetof(BitmapFrontEnd_obj,_whitePixel),HX_HCSTRING("_whitePixel","\x3c","\x74","\x81","\xec")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"),
	HX_HCSTRING("_whitePixel","\x3c","\x74","\x81","\xec"),
	HX_HCSTRING("onAssetsReload","\xfb","\x33","\x88","\x63"),
	HX_HCSTRING("onContext","\x90","\x4e","\x22","\xf1"),
	HX_HCSTRING("dumpCache","\x6e","\x30","\x39","\xdb"),
	HX_HCSTRING("undumpCache","\xf5","\xb6","\xdf","\x60"),
	HX_HCSTRING("checkCache","\x5a","\x9c","\x04","\x51"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("addGraphic","\x87","\x86","\x91","\xdb"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("findKeyForBitmap","\x12","\x70","\x29","\x81"),
	HX_HCSTRING("getKeyForClass","\x38","\xd0","\xdf","\x11"),
	HX_HCSTRING("generateKey","\x6a","\x91","\x24","\x46"),
	HX_HCSTRING("getUniqueKey","\x98","\xcb","\xd7","\xe8"),
	HX_HCSTRING("getKeyWithSpacesAndBorders","\xac","\x4e","\xae","\x2a"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("removeByKey","\x24","\xc9","\xac","\xbb"),
	HX_HCSTRING("removeIfNoUse","\x85","\xb1","\x4f","\xe2"),
	HX_HCSTRING("clearCache","\x75","\xd9","\x1e","\x16"),
	HX_HCSTRING("clearUnused","\x83","\xa6","\x6f","\xff"),
	HX_HCSTRING("get_maxTextureSize","\xc1","\x87","\x16","\xa6"),
	HX_HCSTRING("get_whitePixel","\x66","\x2f","\xed","\x8f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class BitmapFrontEnd_obj::__mClass;

void BitmapFrontEnd_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.BitmapFrontEnd","\x7b","\xb7","\xf6","\x16");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapFrontEnd_obj >;
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
} // end namespace frontEnds
