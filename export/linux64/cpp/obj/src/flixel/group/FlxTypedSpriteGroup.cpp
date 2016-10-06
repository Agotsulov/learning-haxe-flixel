#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxCallbackPoint
#include <flixel/math/FlxCallbackPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
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
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
namespace flixel{
namespace group{

Void FlxTypedSpriteGroup_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_MaxSize)
{
HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","new",0x9fa77753,"flixel.group.FlxTypedSpriteGroup.new","flixel/group/FlxSpriteGroup.hx",26,0xeb1fa7f3)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_MaxSize,"MaxSize")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
int MaxSize = __o_MaxSize.Default(0);
{
	HX_STACK_LINE(58)
	this->_isDrawnDebug = false;
	HX_STACK_LINE(52)
	this->_skipTransformChildren = false;
	HX_STACK_LINE(74)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(75)
	::flixel::group::FlxTypedGroup tmp2 = ::flixel::group::FlxTypedGroup_obj::__new(MaxSize);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(75)
	this->group = tmp2;
	HX_STACK_LINE(76)
	::flixel::group::FlxTypedGroup tmp3 = this->group;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(76)
	this->_sprites = ((Array< ::Dynamic >)(tmp3->members));
}
;
	return null();
}

//FlxTypedSpriteGroup_obj::~FlxTypedSpriteGroup_obj() { }

Dynamic FlxTypedSpriteGroup_obj::__CreateEmpty() { return  new FlxTypedSpriteGroup_obj; }
hx::ObjectPtr< FlxTypedSpriteGroup_obj > FlxTypedSpriteGroup_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_MaxSize)
{  hx::ObjectPtr< FlxTypedSpriteGroup_obj > _result_ = new FlxTypedSpriteGroup_obj();
	_result_->__construct(__o_X,__o_Y,__o_MaxSize);
	return _result_;}

Dynamic FlxTypedSpriteGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypedSpriteGroup_obj > _result_ = new FlxTypedSpriteGroup_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void FlxTypedSpriteGroup_obj::transformChildren_openfl__legacy_display_BlendMode( Dynamic Function,::openfl::_legacy::display::BlendMode Value){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","transformChildren_openfl__legacy_display_BlendMode",0x65952a52,"flixel.group.FlxTypedSpriteGroup.transformChildren_openfl__legacy_display_BlendMode","flixel/group/FlxSpriteGroup.hx",552,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Function,"Function")
		HX_STACK_ARG(Value,"Value")
		HX_STACK_LINE(553)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(553)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(553)
		if ((tmp1)){
			HX_STACK_LINE(555)
			return null();
		}
		HX_STACK_LINE(558)
		{
			HX_STACK_LINE(558)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(558)
			Array< ::Dynamic > _g1 = this->_sprites;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(558)
			while((true)){
				HX_STACK_LINE(558)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(558)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(558)
				if ((tmp3)){
					HX_STACK_LINE(558)
					break;
				}
				HX_STACK_LINE(558)
				::flixel::FlxSprite tmp4 = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(558)
				::flixel::FlxSprite sprite = tmp4;		HX_STACK_VAR(sprite,"sprite");
				HX_STACK_LINE(558)
				++(_g);
				HX_STACK_LINE(560)
				bool tmp5 = (sprite != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(560)
				if ((tmp5)){
					HX_STACK_LINE(562)
					Dynamic tmp6 = ((Dynamic)(sprite));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(562)
					::openfl::_legacy::display::BlendMode tmp7 = Value;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(562)
					Function(tmp6,tmp7).Cast< Void >();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,transformChildren_openfl__legacy_display_BlendMode,(void))

Void FlxTypedSpriteGroup_obj::transformChildren_Int( Dynamic Function,int Value){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","transformChildren_Int",0x8f3579ce,"flixel.group.FlxTypedSpriteGroup.transformChildren_Int","flixel/group/FlxSpriteGroup.hx",552,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Function,"Function")
		HX_STACK_ARG(Value,"Value")
		HX_STACK_LINE(553)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(553)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(553)
		if ((tmp1)){
			HX_STACK_LINE(555)
			return null();
		}
		HX_STACK_LINE(558)
		{
			HX_STACK_LINE(558)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(558)
			Array< ::Dynamic > _g1 = this->_sprites;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(558)
			while((true)){
				HX_STACK_LINE(558)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(558)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(558)
				if ((tmp3)){
					HX_STACK_LINE(558)
					break;
				}
				HX_STACK_LINE(558)
				::flixel::FlxSprite tmp4 = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(558)
				::flixel::FlxSprite sprite = tmp4;		HX_STACK_VAR(sprite,"sprite");
				HX_STACK_LINE(558)
				++(_g);
				HX_STACK_LINE(560)
				bool tmp5 = (sprite != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(560)
				if ((tmp5)){
					HX_STACK_LINE(562)
					Dynamic tmp6 = ((Dynamic)(sprite));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(562)
					int tmp7 = Value;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(562)
					Function(tmp6,tmp7).Cast< Void >();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,transformChildren_Int,(void))

Void FlxTypedSpriteGroup_obj::transformChildren_Float( Dynamic Function,Float Value){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","transformChildren_Float",0x2758683b,"flixel.group.FlxTypedSpriteGroup.transformChildren_Float","flixel/group/FlxSpriteGroup.hx",552,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Function,"Function")
		HX_STACK_ARG(Value,"Value")
		HX_STACK_LINE(553)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(553)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(553)
		if ((tmp1)){
			HX_STACK_LINE(555)
			return null();
		}
		HX_STACK_LINE(558)
		{
			HX_STACK_LINE(558)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(558)
			Array< ::Dynamic > _g1 = this->_sprites;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(558)
			while((true)){
				HX_STACK_LINE(558)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(558)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(558)
				if ((tmp3)){
					HX_STACK_LINE(558)
					break;
				}
				HX_STACK_LINE(558)
				::flixel::FlxSprite tmp4 = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(558)
				::flixel::FlxSprite sprite = tmp4;		HX_STACK_VAR(sprite,"sprite");
				HX_STACK_LINE(558)
				++(_g);
				HX_STACK_LINE(560)
				bool tmp5 = (sprite != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(560)
				if ((tmp5)){
					HX_STACK_LINE(562)
					Dynamic tmp6 = ((Dynamic)(sprite));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(562)
					Float tmp7 = Value;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(562)
					Function(tmp6,tmp7).Cast< Void >();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,transformChildren_Float,(void))

Void FlxTypedSpriteGroup_obj::transformChildren_Bool( Dynamic Function,bool Value){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","transformChildren_Bool",0xbaf55a6b,"flixel.group.FlxTypedSpriteGroup.transformChildren_Bool","flixel/group/FlxSpriteGroup.hx",552,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Function,"Function")
		HX_STACK_ARG(Value,"Value")
		HX_STACK_LINE(553)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(553)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(553)
		if ((tmp1)){
			HX_STACK_LINE(555)
			return null();
		}
		HX_STACK_LINE(558)
		{
			HX_STACK_LINE(558)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(558)
			Array< ::Dynamic > _g1 = this->_sprites;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(558)
			while((true)){
				HX_STACK_LINE(558)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(558)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(558)
				if ((tmp3)){
					HX_STACK_LINE(558)
					break;
				}
				HX_STACK_LINE(558)
				::flixel::FlxSprite tmp4 = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(558)
				::flixel::FlxSprite sprite = tmp4;		HX_STACK_VAR(sprite,"sprite");
				HX_STACK_LINE(558)
				++(_g);
				HX_STACK_LINE(560)
				bool tmp5 = (sprite != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(560)
				if ((tmp5)){
					HX_STACK_LINE(562)
					Dynamic tmp6 = ((Dynamic)(sprite));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(562)
					bool tmp7 = Value;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(562)
					Function(tmp6,tmp7).Cast< Void >();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,transformChildren_Bool,(void))

Void FlxTypedSpriteGroup_obj::transformChildren_Array_flixel_FlxCamera( Dynamic Function,Array< ::Dynamic > Value){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","transformChildren_Array_flixel_FlxCamera",0x8df728db,"flixel.group.FlxTypedSpriteGroup.transformChildren_Array_flixel_FlxCamera","flixel/group/FlxSpriteGroup.hx",552,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Function,"Function")
		HX_STACK_ARG(Value,"Value")
		HX_STACK_LINE(553)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(553)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(553)
		if ((tmp1)){
			HX_STACK_LINE(555)
			return null();
		}
		HX_STACK_LINE(558)
		{
			HX_STACK_LINE(558)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(558)
			Array< ::Dynamic > _g1 = this->_sprites;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(558)
			while((true)){
				HX_STACK_LINE(558)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(558)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(558)
				if ((tmp3)){
					HX_STACK_LINE(558)
					break;
				}
				HX_STACK_LINE(558)
				::flixel::FlxSprite tmp4 = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(558)
				::flixel::FlxSprite sprite = tmp4;		HX_STACK_VAR(sprite,"sprite");
				HX_STACK_LINE(558)
				++(_g);
				HX_STACK_LINE(560)
				bool tmp5 = (sprite != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(560)
				if ((tmp5)){
					HX_STACK_LINE(562)
					Dynamic tmp6 = ((Dynamic)(sprite));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(562)
					Function(tmp6,Value).Cast< Void >();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,transformChildren_Array_flixel_FlxCamera,(void))

Void FlxTypedSpriteGroup_obj::multiTransformChildren_Float( cpp::ArrayBase FunctionArray,Array< Float > ValueArray){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","multiTransformChildren_Float",0x31c44efc,"flixel.group.FlxTypedSpriteGroup.multiTransformChildren_Float","flixel/group/FlxSpriteGroup.hx",575,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FunctionArray,"FunctionArray")
		HX_STACK_ARG(ValueArray,"ValueArray")
		HX_STACK_LINE(576)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(576)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(576)
		if ((tmp1)){
			HX_STACK_LINE(578)
			return null();
		}
		HX_STACK_LINE(581)
		int numProps = FunctionArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(numProps,"numProps");
		HX_STACK_LINE(582)
		bool tmp2 = (numProps > ValueArray->length);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(582)
		if ((tmp2)){
			HX_STACK_LINE(584)
			return null();
		}
		HX_STACK_LINE(587)
		Dynamic lambda;		HX_STACK_VAR(lambda,"lambda");
		HX_STACK_LINE(588)
		{
			HX_STACK_LINE(588)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(588)
			Array< ::Dynamic > _g1 = this->_sprites;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(588)
			while((true)){
				HX_STACK_LINE(588)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(588)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(588)
				if ((tmp4)){
					HX_STACK_LINE(588)
					break;
				}
				HX_STACK_LINE(588)
				::flixel::FlxSprite tmp5 = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(588)
				::flixel::FlxSprite sprite = tmp5;		HX_STACK_VAR(sprite,"sprite");
				HX_STACK_LINE(588)
				++(_g);
				HX_STACK_LINE(590)
				bool tmp6 = (sprite != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(590)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(590)
				if ((tmp6)){
					HX_STACK_LINE(590)
					tmp7 = sprite->exists;
				}
				else{
					HX_STACK_LINE(590)
					tmp7 = false;
				}
				HX_STACK_LINE(590)
				if ((tmp7)){
					HX_STACK_LINE(592)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(592)
					while((true)){
						HX_STACK_LINE(592)
						bool tmp8 = (_g2 < numProps);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(592)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(592)
						if ((tmp9)){
							HX_STACK_LINE(592)
							break;
						}
						HX_STACK_LINE(592)
						int tmp10 = (_g2)++;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(592)
						int i = tmp10;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(594)
						Dynamic tmp11 = FunctionArray->__GetItem(i);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(594)
						lambda = tmp11;
						HX_STACK_LINE(595)
						Dynamic tmp12 = ((Dynamic)(sprite));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(595)
						Float tmp13 = ValueArray->__get(i);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(595)
						lambda(tmp12,tmp13).Cast< Void >();
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,multiTransformChildren_Float,(void))

Void FlxTypedSpriteGroup_obj::transformChildren_flixel_math_FlxPoint( Dynamic Function,::flixel::math::FlxPoint Value){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","transformChildren_flixel_math_FlxPoint",0xcdc8d2f3,"flixel.group.FlxTypedSpriteGroup.transformChildren_flixel_math_FlxPoint","flixel/group/FlxSpriteGroup.hx",552,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Function,"Function")
		HX_STACK_ARG(Value,"Value")
		HX_STACK_LINE(553)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(553)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(553)
		if ((tmp1)){
			HX_STACK_LINE(555)
			return null();
		}
		HX_STACK_LINE(558)
		{
			HX_STACK_LINE(558)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(558)
			Array< ::Dynamic > _g1 = this->_sprites;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(558)
			while((true)){
				HX_STACK_LINE(558)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(558)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(558)
				if ((tmp3)){
					HX_STACK_LINE(558)
					break;
				}
				HX_STACK_LINE(558)
				::flixel::FlxSprite tmp4 = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(558)
				::flixel::FlxSprite sprite = tmp4;		HX_STACK_VAR(sprite,"sprite");
				HX_STACK_LINE(558)
				++(_g);
				HX_STACK_LINE(560)
				bool tmp5 = (sprite != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(560)
				if ((tmp5)){
					HX_STACK_LINE(562)
					Dynamic tmp6 = ((Dynamic)(sprite));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(562)
					::flixel::math::FlxPoint tmp7 = Value;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(562)
					Function(tmp6,tmp7).Cast< Void >();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,transformChildren_flixel_math_FlxPoint,(void))

Void FlxTypedSpriteGroup_obj::initVars( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","initVars",0xad6ba309,"flixel.group.FlxTypedSpriteGroup.initVars","flixel/group/FlxSpriteGroup.hx",85,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(86)
		this->flixelType = (int)4;
		HX_STACK_LINE(88)
		Dynamic tmp = this->offsetCallback_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		::flixel::math::FlxCallbackPoint tmp1 = ::flixel::math::FlxCallbackPoint_obj::__new(tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		this->offset = tmp1;
		HX_STACK_LINE(89)
		Dynamic tmp2 = this->originCallback_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(89)
		::flixel::math::FlxCallbackPoint tmp3 = ::flixel::math::FlxCallbackPoint_obj::__new(tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(89)
		this->origin = tmp3;
		HX_STACK_LINE(90)
		Dynamic tmp4 = this->scaleCallback_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(90)
		::flixel::math::FlxCallbackPoint tmp5 = ::flixel::math::FlxCallbackPoint_obj::__new(tmp4,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(90)
		this->scale = tmp5;
		HX_STACK_LINE(91)
		Dynamic tmp6 = this->scrollFactorCallback_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(91)
		::flixel::math::FlxCallbackPoint tmp7 = ::flixel::math::FlxCallbackPoint_obj::__new(tmp6,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(91)
		this->scrollFactor = tmp7;
		HX_STACK_LINE(93)
		::flixel::math::FlxPoint tmp8 = this->scale;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(93)
		tmp8->set((int)1,(int)1);
		HX_STACK_LINE(94)
		::flixel::math::FlxPoint tmp9 = this->scrollFactor;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(94)
		tmp9->set((int)1,(int)1);
		HX_STACK_LINE(96)
		{
			HX_STACK_LINE(96)
			::flixel::math::FlxPoint tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(96)
			{
				HX_STACK_LINE(96)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(96)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(96)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp11 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(96)
				::flixel::math::FlxPoint tmp12 = tmp11->get();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(96)
				Float tmp13 = X;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(96)
				Float tmp14 = Y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(96)
				::flixel::math::FlxPoint tmp15 = tmp12->set(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(96)
				::flixel::math::FlxPoint point = tmp15;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(96)
				point->_inPool = false;
				HX_STACK_LINE(96)
				tmp10 = point;
			}
			HX_STACK_LINE(96)
			this->velocity = tmp10;
			HX_STACK_LINE(96)
			::flixel::math::FlxPoint tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(96)
			{
				HX_STACK_LINE(96)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(96)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(96)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp12 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(96)
				::flixel::math::FlxPoint tmp13 = tmp12->get();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(96)
				Float tmp14 = X;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(96)
				Float tmp15 = Y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(96)
				::flixel::math::FlxPoint tmp16 = tmp13->set(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(96)
				::flixel::math::FlxPoint point = tmp16;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(96)
				point->_inPool = false;
				HX_STACK_LINE(96)
				tmp11 = point;
			}
			HX_STACK_LINE(96)
			this->acceleration = tmp11;
			HX_STACK_LINE(96)
			::flixel::math::FlxPoint tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(96)
			{
				HX_STACK_LINE(96)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(96)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(96)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp13 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(96)
				::flixel::math::FlxPoint tmp14 = tmp13->get();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(96)
				Float tmp15 = X;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(96)
				Float tmp16 = Y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(96)
				::flixel::math::FlxPoint tmp17 = tmp14->set(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(96)
				::flixel::math::FlxPoint point = tmp17;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(96)
				point->_inPool = false;
				HX_STACK_LINE(96)
				tmp12 = point;
			}
			HX_STACK_LINE(96)
			this->drag = tmp12;
			HX_STACK_LINE(96)
			::flixel::math::FlxPoint tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(96)
			{
				HX_STACK_LINE(96)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp14 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(96)
				::flixel::math::FlxPoint tmp15 = tmp14->get();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(96)
				::flixel::math::FlxPoint tmp16 = tmp15->set((int)10000,(int)10000);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(96)
				::flixel::math::FlxPoint point = tmp16;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(96)
				point->_inPool = false;
				HX_STACK_LINE(96)
				tmp13 = point;
			}
			HX_STACK_LINE(96)
			this->maxVelocity = tmp13;
		}
	}
return null();
}


Void FlxTypedSpriteGroup_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","destroy",0xd803c96d,"flixel.group.FlxTypedSpriteGroup.destroy","flixel/group/FlxSpriteGroup.hx",104,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		::flixel::math::FlxPoint tmp = this->offset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(106)
		::flixel::math::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		this->offset = tmp1;
		HX_STACK_LINE(107)
		::flixel::math::FlxPoint tmp2 = this->origin;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(107)
		::flixel::math::FlxPoint tmp3 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(107)
		this->origin = tmp3;
		HX_STACK_LINE(108)
		::flixel::math::FlxPoint tmp4 = this->scale;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(108)
		::flixel::math::FlxPoint tmp5 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(108)
		this->scale = tmp5;
		HX_STACK_LINE(109)
		::flixel::math::FlxPoint tmp6 = this->scrollFactor;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(109)
		::flixel::math::FlxPoint tmp7 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(109)
		this->scrollFactor = tmp7;
		HX_STACK_LINE(111)
		::flixel::group::FlxTypedGroup tmp8 = this->group;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(111)
		::flixel::group::FlxTypedGroup tmp9 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(111)
		this->group = tmp9;
		HX_STACK_LINE(112)
		this->_sprites = null();
		HX_STACK_LINE(114)
		this->super::destroy();
	}
return null();
}


::flixel::FlxSprite FlxTypedSpriteGroup_obj::clone( ){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","clone",0x21249d10,"flixel.group.FlxTypedSpriteGroup.clone","flixel/group/FlxSpriteGroup.hx",122,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(123)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(123)
	::flixel::group::FlxTypedGroup tmp2 = this->group;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(123)
	int tmp3 = tmp2->maxSize;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(123)
	::flixel::group::FlxTypedSpriteGroup tmp4 = ::flixel::group::FlxTypedSpriteGroup_obj::__new(tmp,tmp1,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(123)
	::flixel::group::FlxTypedSpriteGroup newGroup = tmp4;		HX_STACK_VAR(newGroup,"newGroup");
	HX_STACK_LINE(124)
	{
		HX_STACK_LINE(124)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(124)
		::flixel::group::FlxTypedGroup tmp5 = this->group;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(124)
		cpp::ArrayBase _g1 = tmp5->members;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(124)
		while((true)){
			HX_STACK_LINE(124)
			bool tmp6 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(124)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(124)
			if ((tmp7)){
				HX_STACK_LINE(124)
				break;
			}
			HX_STACK_LINE(124)
			Dynamic tmp8 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(124)
			Dynamic sprite = tmp8;		HX_STACK_VAR(sprite,"sprite");
			HX_STACK_LINE(124)
			++(_g);
			HX_STACK_LINE(126)
			bool tmp9 = (sprite != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(126)
			if ((tmp9)){
				HX_STACK_LINE(128)
				::flixel::FlxSprite tmp10 = sprite->__Field(HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"), hx::paccDynamic )();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(128)
				Dynamic tmp11 = ((Dynamic)(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(128)
				newGroup->add(tmp11);
			}
		}
	}
	HX_STACK_LINE(131)
	::flixel::group::FlxTypedSpriteGroup tmp5 = newGroup;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(131)
	return tmp5;
}


bool FlxTypedSpriteGroup_obj::isOnScreen( ::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","isOnScreen",0xe3a8b162,"flixel.group.FlxTypedSpriteGroup.isOnScreen","flixel/group/FlxSpriteGroup.hx",141,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(142)
	{
		HX_STACK_LINE(142)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(142)
		Array< ::Dynamic > _g1 = this->_sprites;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(142)
		while((true)){
			HX_STACK_LINE(142)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(142)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(142)
			if ((tmp1)){
				HX_STACK_LINE(142)
				break;
			}
			HX_STACK_LINE(142)
			::flixel::FlxSprite tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(142)
			::flixel::FlxSprite sprite = tmp2;		HX_STACK_VAR(sprite,"sprite");
			HX_STACK_LINE(142)
			++(_g);
			HX_STACK_LINE(144)
			bool tmp3 = (sprite != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(144)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(144)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(144)
			if ((tmp4)){
				HX_STACK_LINE(144)
				tmp5 = sprite->exists;
			}
			else{
				HX_STACK_LINE(144)
				tmp5 = false;
			}
			HX_STACK_LINE(144)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(144)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(144)
			if ((tmp6)){
				HX_STACK_LINE(144)
				tmp7 = sprite->visible;
			}
			else{
				HX_STACK_LINE(144)
				tmp7 = false;
			}
			HX_STACK_LINE(144)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(144)
			if ((tmp7)){
				HX_STACK_LINE(144)
				::flixel::FlxCamera tmp9 = Camera;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(144)
				::flixel::FlxCamera tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(144)
				tmp8 = sprite->isOnScreen(tmp10);
			}
			else{
				HX_STACK_LINE(144)
				tmp8 = false;
			}
			HX_STACK_LINE(144)
			if ((tmp8)){
				HX_STACK_LINE(146)
				return true;
			}
		}
	}
	HX_STACK_LINE(150)
	return false;
}


bool FlxTypedSpriteGroup_obj::overlapsPoint( ::flixel::math::FlxPoint point,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","overlapsPoint",0xe77cba57,"flixel.group.FlxTypedSpriteGroup.overlapsPoint","flixel/group/FlxSpriteGroup.hx",162,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(163)
		bool result = false;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(164)
		{
			HX_STACK_LINE(164)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(164)
			Array< ::Dynamic > _g1 = this->_sprites;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(164)
			while((true)){
				HX_STACK_LINE(164)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(164)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(164)
				if ((tmp1)){
					HX_STACK_LINE(164)
					break;
				}
				HX_STACK_LINE(164)
				::flixel::FlxSprite tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(164)
				::flixel::FlxSprite sprite = tmp2;		HX_STACK_VAR(sprite,"sprite");
				HX_STACK_LINE(164)
				++(_g);
				HX_STACK_LINE(166)
				bool tmp3 = (sprite != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(166)
				bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(166)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(166)
				if ((tmp4)){
					HX_STACK_LINE(166)
					tmp5 = sprite->exists;
				}
				else{
					HX_STACK_LINE(166)
					tmp5 = false;
				}
				HX_STACK_LINE(166)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(166)
				if ((tmp5)){
					HX_STACK_LINE(166)
					tmp6 = sprite->visible;
				}
				else{
					HX_STACK_LINE(166)
					tmp6 = false;
				}
				HX_STACK_LINE(166)
				if ((tmp6)){
					HX_STACK_LINE(168)
					bool tmp7 = result;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(168)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(168)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(168)
					if ((tmp8)){
						HX_STACK_LINE(168)
						::flixel::math::FlxPoint tmp10 = point;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(168)
						bool tmp11 = InScreenSpace;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(168)
						::flixel::FlxCamera tmp12 = Camera;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(168)
						::flixel::math::FlxPoint tmp13 = tmp10;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(168)
						bool tmp14 = tmp11;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(168)
						::flixel::FlxCamera tmp15 = tmp12;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(168)
						tmp9 = sprite->overlapsPoint(tmp13,tmp14,tmp15);
					}
					else{
						HX_STACK_LINE(168)
						tmp9 = true;
					}
					HX_STACK_LINE(168)
					result = tmp9;
				}
			}
		}
		HX_STACK_LINE(172)
		bool tmp = result;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(172)
		return tmp;
	}
}


bool FlxTypedSpriteGroup_obj::pixelsOverlapPoint( ::flixel::math::FlxPoint point,hx::Null< int >  __o_Mask,::flixel::FlxCamera Camera){
int Mask = __o_Mask.Default(255);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","pixelsOverlapPoint",0xc3b2a483,"flixel.group.FlxTypedSpriteGroup.pixelsOverlapPoint","flixel/group/FlxSpriteGroup.hx",185,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(Mask,"Mask")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(186)
		bool result = false;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(187)
		{
			HX_STACK_LINE(187)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(187)
			Array< ::Dynamic > _g1 = this->_sprites;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(187)
			while((true)){
				HX_STACK_LINE(187)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(187)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(187)
				if ((tmp1)){
					HX_STACK_LINE(187)
					break;
				}
				HX_STACK_LINE(187)
				::flixel::FlxSprite tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(187)
				::flixel::FlxSprite sprite = tmp2;		HX_STACK_VAR(sprite,"sprite");
				HX_STACK_LINE(187)
				++(_g);
				HX_STACK_LINE(189)
				bool tmp3 = (sprite != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(189)
				bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(189)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(189)
				if ((tmp4)){
					HX_STACK_LINE(189)
					tmp5 = sprite->exists;
				}
				else{
					HX_STACK_LINE(189)
					tmp5 = false;
				}
				HX_STACK_LINE(189)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(189)
				if ((tmp5)){
					HX_STACK_LINE(189)
					tmp6 = sprite->visible;
				}
				else{
					HX_STACK_LINE(189)
					tmp6 = false;
				}
				HX_STACK_LINE(189)
				if ((tmp6)){
					HX_STACK_LINE(191)
					bool tmp7 = result;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(191)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(191)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(191)
					if ((tmp8)){
						HX_STACK_LINE(191)
						::flixel::math::FlxPoint tmp10 = point;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(191)
						int tmp11 = Mask;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(191)
						::flixel::FlxCamera tmp12 = Camera;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(191)
						::flixel::math::FlxPoint tmp13 = tmp10;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(191)
						int tmp14 = tmp11;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(191)
						::flixel::FlxCamera tmp15 = tmp12;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(191)
						tmp9 = sprite->pixelsOverlapPoint(tmp13,tmp14,tmp15);
					}
					else{
						HX_STACK_LINE(191)
						tmp9 = true;
					}
					HX_STACK_LINE(191)
					result = tmp9;
				}
			}
		}
		HX_STACK_LINE(195)
		bool tmp = result;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(195)
		return tmp;
	}
}


Void FlxTypedSpriteGroup_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","update",0x579c78f6,"flixel.group.FlxTypedSpriteGroup.update","flixel/group/FlxSpriteGroup.hx",199,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(200)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(200)
		Float tmp1 = elapsed;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(200)
		tmp->update(tmp1);
		HX_STACK_LINE(202)
		bool tmp2 = this->moves;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(202)
		if ((tmp2)){
			HX_STACK_LINE(204)
			Float tmp3 = elapsed;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(204)
			this->updateMotion(tmp3);
		}
	}
return null();
}


Void FlxTypedSpriteGroup_obj::draw( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","draw",0x0c4e99b1,"flixel.group.FlxTypedSpriteGroup.draw","flixel/group/FlxSpriteGroup.hx",209,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(210)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(210)
		tmp->draw();
		HX_STACK_LINE(212)
		this->_isDrawnDebug = false;
	}
return null();
}


Array< ::Dynamic > FlxTypedSpriteGroup_obj::replaceColor( int _tmp_Color,int _tmp_NewColor,hx::Null< bool >  __o_FetchPositions){
bool FetchPositions = __o_FetchPositions.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","replaceColor",0x6ca2bf3c,"flixel.group.FlxTypedSpriteGroup.replaceColor","flixel/group/FlxSpriteGroup.hx",225,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_tmp_Color,"_tmp_Color")
	HX_STACK_ARG(_tmp_NewColor,"_tmp_NewColor")
	HX_STACK_ARG(FetchPositions,"FetchPositions")
{
		HX_STACK_LINE(226)
		int Color = _tmp_Color;		HX_STACK_VAR(Color,"Color");
		HX_STACK_LINE(226)
		int NewColor = _tmp_NewColor;		HX_STACK_VAR(NewColor,"NewColor");
		HX_STACK_LINE(226)
		Array< ::Dynamic > positions = null();		HX_STACK_VAR(positions,"positions");
		HX_STACK_LINE(227)
		bool tmp = FetchPositions;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(227)
		if ((tmp)){
			HX_STACK_LINE(229)
			positions = Array_obj< ::Dynamic >::__new();
		}
		HX_STACK_LINE(232)
		Array< ::Dynamic > spritePositions;		HX_STACK_VAR(spritePositions,"spritePositions");
		HX_STACK_LINE(233)
		{
			HX_STACK_LINE(233)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(233)
			Array< ::Dynamic > _g1 = this->_sprites;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(233)
			while((true)){
				HX_STACK_LINE(233)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(233)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(233)
				if ((tmp2)){
					HX_STACK_LINE(233)
					break;
				}
				HX_STACK_LINE(233)
				::flixel::FlxSprite tmp3 = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(233)
				::flixel::FlxSprite sprite = tmp3;		HX_STACK_VAR(sprite,"sprite");
				HX_STACK_LINE(233)
				++(_g);
				HX_STACK_LINE(235)
				bool tmp4 = (sprite != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(235)
				if ((tmp4)){
					HX_STACK_LINE(237)
					int tmp5 = Color;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(237)
					int tmp6 = NewColor;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(237)
					bool tmp7 = FetchPositions;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(237)
					spritePositions = sprite->replaceColor(tmp5,tmp6,tmp7);
					HX_STACK_LINE(238)
					bool tmp8 = FetchPositions;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(238)
					if ((tmp8)){
						HX_STACK_LINE(240)
						positions = positions->concat(spritePositions);
					}
				}
			}
		}
		HX_STACK_LINE(245)
		return positions;
	}
}


Dynamic FlxTypedSpriteGroup_obj::add( Dynamic Sprite){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","add",0x9f9d9914,"flixel.group.FlxTypedSpriteGroup.add","flixel/group/FlxSpriteGroup.hx",255,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_LINE(256)
	::flixel::FlxSprite sprite = ((::flixel::FlxSprite)(Sprite));		HX_STACK_VAR(sprite,"sprite");
	HX_STACK_LINE(257)
	{
		HX_STACK_LINE(257)
		::flixel::FlxSprite _g = sprite;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(257)
		Float tmp = _g->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(257)
		Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(257)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(257)
		_g->set_x(tmp2);
	}
	HX_STACK_LINE(258)
	{
		HX_STACK_LINE(258)
		::flixel::FlxSprite _g = sprite;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(258)
		Float tmp = _g->y;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(258)
		Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(258)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(258)
		_g->set_y(tmp2);
	}
	HX_STACK_LINE(259)
	{
		HX_STACK_LINE(259)
		::flixel::FlxSprite _g = sprite;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(259)
		Float tmp = _g->alpha;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(259)
		Float tmp1 = this->alpha;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(259)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(259)
		_g->set_alpha(tmp2);
	}
	HX_STACK_LINE(260)
	{
		HX_STACK_LINE(260)
		::flixel::math::FlxPoint _this = sprite->scrollFactor;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(260)
		::flixel::math::FlxPoint tmp = this->scrollFactor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(260)
		::flixel::math::FlxPoint point = tmp;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(260)
		Float tmp1 = point->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(260)
		_this->set_x(tmp1);
		HX_STACK_LINE(260)
		Float tmp2 = point->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(260)
		_this->set_y(tmp2);
		HX_STACK_LINE(260)
		{
			HX_STACK_LINE(260)
			bool tmp3 = point->_weak;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(260)
			if ((tmp3)){
				HX_STACK_LINE(260)
				point->put();
			}
		}
		HX_STACK_LINE(260)
		_this;
	}
	HX_STACK_LINE(261)
	sprite->set_cameras(this->_cameras);
	HX_STACK_LINE(262)
	::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(262)
	Dynamic tmp1 = Sprite;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(262)
	Dynamic tmp2 = tmp->add(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(262)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSpriteGroup_obj,add,return )

Dynamic FlxTypedSpriteGroup_obj::recycle( ::hx::Class ObjectClass,Dynamic ObjectFactory,hx::Null< bool >  __o_Force){
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","recycle",0xeb09ac86,"flixel.group.FlxTypedSpriteGroup.recycle","flixel/group/FlxSpriteGroup.hx",274,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectClass,"ObjectClass")
	HX_STACK_ARG(ObjectFactory,"ObjectFactory")
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(275)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(275)
		::hx::Class tmp1 = ObjectClass;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(275)
		Dynamic tmp2 = ObjectFactory;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(275)
		bool tmp3 = Force;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(275)
		Dynamic tmp4 = tmp->recycle(tmp1,tmp2,tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(275)
		return tmp4;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedSpriteGroup_obj,recycle,return )

Dynamic FlxTypedSpriteGroup_obj::remove( Dynamic Sprite,hx::Null< bool >  __o_Splice){
bool Splice = __o_Splice.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","remove",0xd51f8f31,"flixel.group.FlxTypedSpriteGroup.remove","flixel/group/FlxSpriteGroup.hx",286,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(Splice,"Splice")
{
		HX_STACK_LINE(287)
		::flixel::FlxSprite sprite = ((::flixel::FlxSprite)(Sprite));		HX_STACK_VAR(sprite,"sprite");
		HX_STACK_LINE(288)
		{
			HX_STACK_LINE(288)
			::flixel::FlxSprite _g = sprite;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(288)
			Float tmp = _g->x;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(288)
			Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(288)
			Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(288)
			_g->set_x(tmp2);
		}
		HX_STACK_LINE(289)
		{
			HX_STACK_LINE(289)
			::flixel::FlxSprite _g = sprite;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(289)
			Float tmp = _g->y;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(289)
			Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(289)
			Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(289)
			_g->set_y(tmp2);
		}
		HX_STACK_LINE(291)
		sprite->set_cameras(null());
		HX_STACK_LINE(292)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(292)
		Dynamic tmp1 = Sprite;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(292)
		bool tmp2 = Splice;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(292)
		Dynamic tmp3 = tmp->remove(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(292)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,remove,return )

Dynamic FlxTypedSpriteGroup_obj::replace( Dynamic OldObject,Dynamic NewObject){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","replace",0x5ea5e4a7,"flixel.group.FlxTypedSpriteGroup.replace","flixel/group/FlxSpriteGroup.hx",303,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(OldObject,"OldObject")
	HX_STACK_ARG(NewObject,"NewObject")
	HX_STACK_LINE(304)
	::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(304)
	Dynamic tmp1 = OldObject;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(304)
	Dynamic tmp2 = NewObject;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(304)
	Dynamic tmp3 = tmp->replace(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(304)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,replace,return )

Void FlxTypedSpriteGroup_obj::sort( Dynamic Function,hx::Null< int >  __o_Order){
int Order = __o_Order.Default(-1);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","sort",0x1636950b,"flixel.group.FlxTypedSpriteGroup.sort","flixel/group/FlxSpriteGroup.hx",316,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Order,"Order")
{
		HX_STACK_LINE(316)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(316)
		Dynamic tmp1 = Function;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(316)
		int tmp2 = Order;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(316)
		Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(316)
		{
			HX_STACK_LINE(316)
			Dynamic f = tmp1;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(316)
			int a1 = tmp2;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,int,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			int run(Dynamic a2,Dynamic a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","flixel/group/FlxSpriteGroup.hx",316,0xeb1fa7f3)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(316)
					int tmp4 = a1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(316)
					Dynamic tmp5 = a2;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(316)
					Dynamic tmp6 = a3;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(316)
					int tmp7 = f(tmp4,tmp5,tmp6).Cast< int >();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(316)
					return tmp7;
				}
				return null();
			}
			HX_END_LOCAL_FUNC2(return)

			HX_STACK_LINE(316)
			tmp3 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(316)
		tmp->members->__Field(HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"), hx::paccDynamic )(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,sort,(void))

Dynamic FlxTypedSpriteGroup_obj::getFirstAvailable( ::hx::Class ObjectClass,hx::Null< bool >  __o_Force){
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","getFirstAvailable",0x44b6b4e2,"flixel.group.FlxTypedSpriteGroup.getFirstAvailable","flixel/group/FlxSpriteGroup.hx",328,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectClass,"ObjectClass")
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(329)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(329)
		::hx::Class tmp1 = ObjectClass;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(329)
		bool tmp2 = Force;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(329)
		Dynamic tmp3 = tmp->getFirstAvailable(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(329)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,getFirstAvailable,return )

int FlxTypedSpriteGroup_obj::getFirstNull( ){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","getFirstNull",0x3deb1a0e,"flixel.group.FlxTypedSpriteGroup.getFirstNull","flixel/group/FlxSpriteGroup.hx",339,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(340)
	::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(340)
	int tmp1 = tmp->getFirstNull();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(340)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,getFirstNull,return )

Dynamic FlxTypedSpriteGroup_obj::getFirstExisting( ){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","getFirstExisting",0x25cf6192,"flixel.group.FlxTypedSpriteGroup.getFirstExisting","flixel/group/FlxSpriteGroup.hx",350,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(351)
	::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(351)
	Dynamic tmp1 = tmp->getFirstExisting();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(351)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,getFirstExisting,return )

Dynamic FlxTypedSpriteGroup_obj::getFirstAlive( ){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","getFirstAlive",0x6da0fe66,"flixel.group.FlxTypedSpriteGroup.getFirstAlive","flixel/group/FlxSpriteGroup.hx",361,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(362)
	::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(362)
	Dynamic tmp1 = tmp->getFirstAlive();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(362)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,getFirstAlive,return )

Dynamic FlxTypedSpriteGroup_obj::getFirstDead( ){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","getFirstDead",0x3742ca2b,"flixel.group.FlxTypedSpriteGroup.getFirstDead","flixel/group/FlxSpriteGroup.hx",372,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(373)
	::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(373)
	Dynamic tmp1 = tmp->getFirstDead();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(373)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,getFirstDead,return )

int FlxTypedSpriteGroup_obj::countLiving( ){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","countLiving",0xa01b2b4b,"flixel.group.FlxTypedSpriteGroup.countLiving","flixel/group/FlxSpriteGroup.hx",382,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(383)
	::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(383)
	int tmp1 = tmp->countLiving();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(383)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,countLiving,return )

int FlxTypedSpriteGroup_obj::countDead( ){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","countDead",0x17fab246,"flixel.group.FlxTypedSpriteGroup.countDead","flixel/group/FlxSpriteGroup.hx",392,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(393)
	::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(393)
	int tmp1 = tmp->countDead();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(393)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,countDead,return )

Dynamic FlxTypedSpriteGroup_obj::getRandom( hx::Null< int >  __o_StartIndex,hx::Null< int >  __o_Length){
int StartIndex = __o_StartIndex.Default(0);
int Length = __o_Length.Default(0);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","getRandom",0xf7598a6c,"flixel.group.FlxTypedSpriteGroup.getRandom","flixel/group/FlxSpriteGroup.hx",404,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(StartIndex,"StartIndex")
	HX_STACK_ARG(Length,"Length")
{
		HX_STACK_LINE(405)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(405)
		int tmp1 = StartIndex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(405)
		int tmp2 = Length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(405)
		Dynamic tmp3 = tmp->getRandom(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(405)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,getRandom,return )

::flixel::group::FlxTypedGroupIterator FlxTypedSpriteGroup_obj::iterator( Dynamic filter){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","iterator",0xee05921b,"flixel.group.FlxTypedSpriteGroup.iterator","flixel/group/FlxSpriteGroup.hx",414,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(415)
	::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(415)
	::flixel::group::FlxTypedGroupIterator tmp1 = ::flixel::group::FlxTypedGroupIterator_obj::__new(tmp->members,filter);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(415)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSpriteGroup_obj,iterator,return )

Void FlxTypedSpriteGroup_obj::forEach( Dynamic Function,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","forEach",0x783bc61d,"flixel.group.FlxTypedSpriteGroup.forEach","flixel/group/FlxSpriteGroup.hx",425,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Recurse,"Recurse")
{
		HX_STACK_LINE(426)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(426)
		Dynamic tmp1 = Function;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(426)
		bool tmp2 = Recurse;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(426)
		tmp->forEach(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,forEach,(void))

Void FlxTypedSpriteGroup_obj::forEachAlive( Dynamic Function,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","forEachAlive",0xc86ec470,"flixel.group.FlxTypedSpriteGroup.forEachAlive","flixel/group/FlxSpriteGroup.hx",436,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Recurse,"Recurse")
{
		HX_STACK_LINE(437)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(437)
		Dynamic tmp1 = Function;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(437)
		bool tmp2 = Recurse;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(437)
		tmp->forEachAlive(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,forEachAlive,(void))

Void FlxTypedSpriteGroup_obj::forEachDead( Dynamic Function,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","forEachDead",0xe8751361,"flixel.group.FlxTypedSpriteGroup.forEachDead","flixel/group/FlxSpriteGroup.hx",447,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Recurse,"Recurse")
{
		HX_STACK_LINE(448)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(448)
		Dynamic tmp1 = Function;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(448)
		bool tmp2 = Recurse;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(448)
		tmp->forEachDead(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,forEachDead,(void))

Void FlxTypedSpriteGroup_obj::forEachExists( Dynamic Function,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","forEachExists",0x1ab74bd9,"flixel.group.FlxTypedSpriteGroup.forEachExists","flixel/group/FlxSpriteGroup.hx",458,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Recurse,"Recurse")
{
		HX_STACK_LINE(459)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(459)
		Dynamic tmp1 = Function;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(459)
		bool tmp2 = Recurse;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(459)
		tmp->forEachExists(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,forEachExists,(void))

Void FlxTypedSpriteGroup_obj::forEachOfType( ::hx::Class ObjectClass,Dynamic Function,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","forEachOfType",0xaf35856e,"flixel.group.FlxTypedSpriteGroup.forEachOfType","flixel/group/FlxSpriteGroup.hx",470,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectClass,"ObjectClass")
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Recurse,"Recurse")
{
		HX_STACK_LINE(471)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(471)
		::hx::Class tmp1 = ObjectClass;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(471)
		Dynamic tmp2 = Function;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(471)
		bool tmp3 = Recurse;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(471)
		tmp->forEachOfType(tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedSpriteGroup_obj,forEachOfType,(void))

Void FlxTypedSpriteGroup_obj::clear( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","clear",0x211cfb40,"flixel.group.FlxTypedSpriteGroup.clear","flixel/group/FlxSpriteGroup.hx",479,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(480)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(480)
		tmp->clear();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,clear,(void))

Void FlxTypedSpriteGroup_obj::kill( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","kill",0x10e84d4b,"flixel.group.FlxTypedSpriteGroup.kill","flixel/group/FlxSpriteGroup.hx",488,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(489)
		this->super::kill();
		HX_STACK_LINE(490)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(490)
		tmp->kill();
	}
return null();
}


Void FlxTypedSpriteGroup_obj::revive( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","revive",0xdb0ded42,"flixel.group.FlxTypedSpriteGroup.revive","flixel/group/FlxSpriteGroup.hx",497,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(498)
		this->super::revive();
		HX_STACK_LINE(499)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(499)
		tmp->revive();
	}
return null();
}


Void FlxTypedSpriteGroup_obj::reset( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","reset",0xbf89d382,"flixel.group.FlxTypedSpriteGroup.reset","flixel/group/FlxSpriteGroup.hx",510,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(511)
		this->revive();
		HX_STACK_LINE(512)
		Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(512)
		Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(512)
		this->setPosition(tmp,tmp1);
		HX_STACK_LINE(514)
		{
			HX_STACK_LINE(514)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(514)
			Array< ::Dynamic > _g1 = this->_sprites;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(514)
			while((true)){
				HX_STACK_LINE(514)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(514)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(514)
				if ((tmp3)){
					HX_STACK_LINE(514)
					break;
				}
				HX_STACK_LINE(514)
				::flixel::FlxSprite tmp4 = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(514)
				::flixel::FlxSprite sprite = tmp4;		HX_STACK_VAR(sprite,"sprite");
				HX_STACK_LINE(514)
				++(_g);
				HX_STACK_LINE(516)
				bool tmp5 = (sprite != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(516)
				if ((tmp5)){
					HX_STACK_LINE(518)
					Float tmp6 = X;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(518)
					Float tmp7 = Y;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(518)
					sprite->reset(tmp6,tmp7);
				}
			}
		}
	}
return null();
}


Void FlxTypedSpriteGroup_obj::setPosition( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","setPosition",0x6aebbc5e,"flixel.group.FlxTypedSpriteGroup.setPosition","flixel/group/FlxSpriteGroup.hx",531,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(533)
		Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(533)
		Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(533)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(533)
		Float dx = tmp2;		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(534)
		Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(534)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(534)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(534)
		Float dy = tmp5;		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(535)
		Dynamic tmp6 = this->xTransform_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(535)
		Dynamic tmp7 = this->yTransform_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(535)
		this->multiTransformChildren_Float(cpp::ArrayBase_obj::__new().Add(tmp6).Add(tmp7),Array_obj< Float >::__new().Add(dx).Add(dy));
		HX_STACK_LINE(538)
		this->_skipTransformChildren = true;
		HX_STACK_LINE(539)
		Float tmp8 = X;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(539)
		this->set_x(tmp8);
		HX_STACK_LINE(540)
		Float tmp9 = Y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(540)
		this->set_y(tmp9);
		HX_STACK_LINE(541)
		this->_skipTransformChildren = false;
	}
return null();
}


Array< ::Dynamic > FlxTypedSpriteGroup_obj::set_cameras( Array< ::Dynamic > Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_cameras",0xe3294344,"flixel.group.FlxTypedSpriteGroup.set_cameras","flixel/group/FlxSpriteGroup.hx",604,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(605)
	bool tmp = (this->get_cameras() != Value);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(605)
	if ((tmp)){
		HX_STACK_LINE(606)
		Dynamic tmp1 = this->camerasTransform_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(606)
		this->transformChildren_Array_flixel_FlxCamera(tmp1,Value);
	}
	HX_STACK_LINE(607)
	return this->super::set_cameras(Value);
}


bool FlxTypedSpriteGroup_obj::set_exists( bool Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_exists",0xf5d49986,"flixel.group.FlxTypedSpriteGroup.set_exists","flixel/group/FlxSpriteGroup.hx",611,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(612)
	bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(612)
	bool tmp1 = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(612)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(612)
	if ((tmp2)){
		HX_STACK_LINE(613)
		Dynamic tmp3 = this->existsTransform_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(613)
		bool tmp4 = Value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(613)
		this->transformChildren_Bool(tmp3,tmp4);
	}
	HX_STACK_LINE(614)
	bool tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(614)
	bool tmp4 = this->super::set_exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(614)
	return tmp4;
}


bool FlxTypedSpriteGroup_obj::set_visible( bool Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_visible",0xa31c3188,"flixel.group.FlxTypedSpriteGroup.set_visible","flixel/group/FlxSpriteGroup.hx",618,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(619)
	bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(619)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(619)
	if ((tmp)){
		HX_STACK_LINE(619)
		bool tmp2 = this->visible;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(619)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(619)
		bool tmp4 = Value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(619)
		tmp1 = (tmp3 != tmp4);
	}
	else{
		HX_STACK_LINE(619)
		tmp1 = false;
	}
	HX_STACK_LINE(619)
	if ((tmp1)){
		HX_STACK_LINE(620)
		Dynamic tmp2 = this->visibleTransform_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(620)
		bool tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(620)
		this->transformChildren_Bool(tmp2,tmp3);
	}
	HX_STACK_LINE(621)
	bool tmp2 = Value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(621)
	bool tmp3 = this->super::set_visible(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(621)
	return tmp3;
}


bool FlxTypedSpriteGroup_obj::set_active( bool Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_active",0x4c3abd70,"flixel.group.FlxTypedSpriteGroup.set_active","flixel/group/FlxSpriteGroup.hx",625,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(626)
	bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(626)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(626)
	if ((tmp)){
		HX_STACK_LINE(626)
		bool tmp2 = this->active;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(626)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(626)
		bool tmp4 = Value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(626)
		tmp1 = (tmp3 != tmp4);
	}
	else{
		HX_STACK_LINE(626)
		tmp1 = false;
	}
	HX_STACK_LINE(626)
	if ((tmp1)){
		HX_STACK_LINE(627)
		Dynamic tmp2 = this->activeTransform_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(627)
		bool tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(627)
		this->transformChildren_Bool(tmp2,tmp3);
	}
	HX_STACK_LINE(628)
	bool tmp2 = Value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(628)
	bool tmp3 = this->super::set_active(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(628)
	return tmp3;
}


bool FlxTypedSpriteGroup_obj::set_alive( bool Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_alive",0x0bff8b63,"flixel.group.FlxTypedSpriteGroup.set_alive","flixel/group/FlxSpriteGroup.hx",632,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(633)
	bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(633)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(633)
	if ((tmp)){
		HX_STACK_LINE(633)
		bool tmp2 = this->alive;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(633)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(633)
		bool tmp4 = Value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(633)
		tmp1 = (tmp3 != tmp4);
	}
	else{
		HX_STACK_LINE(633)
		tmp1 = false;
	}
	HX_STACK_LINE(633)
	if ((tmp1)){
		HX_STACK_LINE(634)
		Dynamic tmp2 = this->aliveTransform_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(634)
		bool tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(634)
		this->transformChildren_Bool(tmp2,tmp3);
	}
	HX_STACK_LINE(635)
	bool tmp2 = Value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(635)
	bool tmp3 = this->super::set_alive(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(635)
	return tmp3;
}


Float FlxTypedSpriteGroup_obj::set_x( Float Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_x",0x52f1250e,"flixel.group.FlxTypedSpriteGroup.set_x","flixel/group/FlxSpriteGroup.hx",639,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(640)
	bool tmp = this->_skipTransformChildren;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(640)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(640)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(640)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(640)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(640)
	if ((tmp3)){
		HX_STACK_LINE(640)
		tmp4 = this->exists;
	}
	else{
		HX_STACK_LINE(640)
		tmp4 = false;
	}
	HX_STACK_LINE(640)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(640)
	if ((tmp4)){
		HX_STACK_LINE(640)
		Float tmp6 = this->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(640)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(640)
		Float tmp8 = Value;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(640)
		tmp5 = (tmp7 != tmp8);
	}
	else{
		HX_STACK_LINE(640)
		tmp5 = false;
	}
	HX_STACK_LINE(640)
	if ((tmp5)){
		HX_STACK_LINE(642)
		Float tmp6 = Value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(642)
		Float tmp7 = this->x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(642)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(642)
		Float offset = tmp8;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(643)
		Dynamic tmp9 = this->xTransform_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(643)
		Float tmp10 = offset;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(643)
		this->transformChildren_Float(tmp9,tmp10);
	}
	HX_STACK_LINE(646)
	Float tmp6 = this->x = Value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(646)
	return tmp6;
}


Float FlxTypedSpriteGroup_obj::set_y( Float Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_y",0x52f1250f,"flixel.group.FlxTypedSpriteGroup.set_y","flixel/group/FlxSpriteGroup.hx",650,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(651)
	bool tmp = this->_skipTransformChildren;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(651)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(651)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(651)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(651)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(651)
	if ((tmp3)){
		HX_STACK_LINE(651)
		tmp4 = this->exists;
	}
	else{
		HX_STACK_LINE(651)
		tmp4 = false;
	}
	HX_STACK_LINE(651)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(651)
	if ((tmp4)){
		HX_STACK_LINE(651)
		Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(651)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(651)
		Float tmp8 = Value;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(651)
		tmp5 = (tmp7 != tmp8);
	}
	else{
		HX_STACK_LINE(651)
		tmp5 = false;
	}
	HX_STACK_LINE(651)
	if ((tmp5)){
		HX_STACK_LINE(653)
		Float tmp6 = Value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(653)
		Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(653)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(653)
		Float offset = tmp8;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(654)
		Dynamic tmp9 = this->yTransform_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(654)
		Float tmp10 = offset;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(654)
		this->transformChildren_Float(tmp9,tmp10);
	}
	HX_STACK_LINE(657)
	Float tmp6 = this->y = Value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(657)
	return tmp6;
}


Float FlxTypedSpriteGroup_obj::set_angle( Float Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_angle",0x0d506b69,"flixel.group.FlxTypedSpriteGroup.set_angle","flixel/group/FlxSpriteGroup.hx",661,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(662)
	bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(662)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(662)
	if ((tmp)){
		HX_STACK_LINE(662)
		Float tmp2 = this->angle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(662)
		Float tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(662)
		Float tmp4 = Value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(662)
		tmp1 = (tmp3 != tmp4);
	}
	else{
		HX_STACK_LINE(662)
		tmp1 = false;
	}
	HX_STACK_LINE(662)
	if ((tmp1)){
		HX_STACK_LINE(664)
		Float tmp2 = Value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(664)
		Float tmp3 = this->angle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(664)
		Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(664)
		Float offset = tmp4;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(665)
		Dynamic tmp5 = this->angleTransform_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(665)
		Float tmp6 = offset;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(665)
		this->transformChildren_Float(tmp5,tmp6);
	}
	HX_STACK_LINE(667)
	Float tmp2 = this->angle = Value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(667)
	return tmp2;
}


Float FlxTypedSpriteGroup_obj::set_alpha( Float Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_alpha",0x0c04cef4,"flixel.group.FlxTypedSpriteGroup.set_alpha","flixel/group/FlxSpriteGroup.hx",671,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(672)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(672)
	{
		HX_STACK_LINE(672)
		bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(672)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(672)
		if ((tmp1)){
			HX_STACK_LINE(672)
			tmp2 = (Value < (int)0);
		}
		else{
			HX_STACK_LINE(672)
			tmp2 = false;
		}
		HX_STACK_LINE(672)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(672)
		if ((tmp2)){
			HX_STACK_LINE(672)
			tmp3 = (int)0;
		}
		else{
			HX_STACK_LINE(672)
			tmp3 = Value;
		}
		HX_STACK_LINE(672)
		Float lowerBound = tmp3;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(672)
		bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(672)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(672)
		if ((tmp4)){
			HX_STACK_LINE(672)
			tmp5 = (lowerBound > (int)1);
		}
		else{
			HX_STACK_LINE(672)
			tmp5 = false;
		}
		HX_STACK_LINE(672)
		if ((tmp5)){
			HX_STACK_LINE(672)
			tmp = (int)1;
		}
		else{
			HX_STACK_LINE(672)
			tmp = lowerBound;
		}
	}
	HX_STACK_LINE(672)
	Value = ((Float)(tmp));
	HX_STACK_LINE(674)
	bool tmp1 = this->exists;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(674)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(674)
	if ((tmp1)){
		HX_STACK_LINE(674)
		Float tmp3 = this->alpha;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(674)
		Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(674)
		Float tmp5 = Value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(674)
		tmp2 = (tmp4 != tmp5);
	}
	else{
		HX_STACK_LINE(674)
		tmp2 = false;
	}
	HX_STACK_LINE(674)
	if ((tmp2)){
		HX_STACK_LINE(676)
		Float tmp3 = this->alpha;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(676)
		bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(676)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(676)
		if ((tmp4)){
			HX_STACK_LINE(676)
			Float tmp6 = Value;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(676)
			Float tmp7 = this->alpha;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(676)
			tmp5 = (Float(tmp6) / Float(tmp7));
		}
		else{
			HX_STACK_LINE(676)
			tmp5 = (int)0;
		}
		HX_STACK_LINE(676)
		Float factor = tmp5;		HX_STACK_VAR(factor,"factor");
		HX_STACK_LINE(677)
		Dynamic tmp6 = this->alphaTransform_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(677)
		Float tmp7 = factor;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(677)
		this->transformChildren_Float(tmp6,tmp7);
	}
	HX_STACK_LINE(679)
	Float tmp3 = this->alpha = Value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(679)
	return tmp3;
}


int FlxTypedSpriteGroup_obj::set_facing( int Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_facing",0x19f9bac4,"flixel.group.FlxTypedSpriteGroup.set_facing","flixel/group/FlxSpriteGroup.hx",683,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(684)
	bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(684)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(684)
	if ((tmp)){
		HX_STACK_LINE(684)
		int tmp2 = this->facing;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(684)
		int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(684)
		int tmp4 = Value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(684)
		tmp1 = (tmp3 != tmp4);
	}
	else{
		HX_STACK_LINE(684)
		tmp1 = false;
	}
	HX_STACK_LINE(684)
	if ((tmp1)){
		HX_STACK_LINE(685)
		Dynamic tmp2 = this->facingTransform_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(685)
		int tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(685)
		this->transformChildren_Int(tmp2,tmp3);
	}
	HX_STACK_LINE(686)
	int tmp2 = this->facing = Value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(686)
	return tmp2;
}


bool FlxTypedSpriteGroup_obj::set_flipX( bool Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_flipX",0xed006ca1,"flixel.group.FlxTypedSpriteGroup.set_flipX","flixel/group/FlxSpriteGroup.hx",690,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(691)
	bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(691)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(691)
	if ((tmp)){
		HX_STACK_LINE(691)
		bool tmp2 = this->flipX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(691)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(691)
		bool tmp4 = Value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(691)
		tmp1 = (tmp3 != tmp4);
	}
	else{
		HX_STACK_LINE(691)
		tmp1 = false;
	}
	HX_STACK_LINE(691)
	if ((tmp1)){
		HX_STACK_LINE(692)
		Dynamic tmp2 = this->flipXTransform_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(692)
		bool tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(692)
		this->transformChildren_Bool(tmp2,tmp3);
	}
	HX_STACK_LINE(693)
	bool tmp2 = this->flipX = Value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(693)
	return tmp2;
}


bool FlxTypedSpriteGroup_obj::set_flipY( bool Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_flipY",0xed006ca2,"flixel.group.FlxTypedSpriteGroup.set_flipY","flixel/group/FlxSpriteGroup.hx",697,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(698)
	bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(698)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(698)
	if ((tmp)){
		HX_STACK_LINE(698)
		bool tmp2 = this->flipY;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(698)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(698)
		bool tmp4 = Value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(698)
		tmp1 = (tmp3 != tmp4);
	}
	else{
		HX_STACK_LINE(698)
		tmp1 = false;
	}
	HX_STACK_LINE(698)
	if ((tmp1)){
		HX_STACK_LINE(699)
		Dynamic tmp2 = this->flipYTransform_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(699)
		bool tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(699)
		this->transformChildren_Bool(tmp2,tmp3);
	}
	HX_STACK_LINE(700)
	bool tmp2 = this->flipY = Value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(700)
	return tmp2;
}


bool FlxTypedSpriteGroup_obj::set_moves( bool Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_moves",0xf6d3f3d8,"flixel.group.FlxTypedSpriteGroup.set_moves","flixel/group/FlxSpriteGroup.hx",704,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(705)
	bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(705)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(705)
	if ((tmp)){
		HX_STACK_LINE(705)
		bool tmp2 = this->moves;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(705)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(705)
		bool tmp4 = Value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(705)
		tmp1 = (tmp3 != tmp4);
	}
	else{
		HX_STACK_LINE(705)
		tmp1 = false;
	}
	HX_STACK_LINE(705)
	if ((tmp1)){
		HX_STACK_LINE(706)
		Dynamic tmp2 = this->movesTransform_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(706)
		bool tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(706)
		this->transformChildren_Bool(tmp2,tmp3);
	}
	HX_STACK_LINE(707)
	bool tmp2 = this->moves = Value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(707)
	return tmp2;
}


bool FlxTypedSpriteGroup_obj::set_immovable( bool Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_immovable",0xdf98d1a0,"flixel.group.FlxTypedSpriteGroup.set_immovable","flixel/group/FlxSpriteGroup.hx",711,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(712)
	bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(712)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(712)
	if ((tmp)){
		HX_STACK_LINE(712)
		bool tmp2 = this->immovable;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(712)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(712)
		bool tmp4 = Value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(712)
		tmp1 = (tmp3 != tmp4);
	}
	else{
		HX_STACK_LINE(712)
		tmp1 = false;
	}
	HX_STACK_LINE(712)
	if ((tmp1)){
		HX_STACK_LINE(713)
		Dynamic tmp2 = this->immovableTransform_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(713)
		bool tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(713)
		this->transformChildren_Bool(tmp2,tmp3);
	}
	HX_STACK_LINE(714)
	bool tmp2 = this->immovable = Value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(714)
	return tmp2;
}


bool FlxTypedSpriteGroup_obj::set_solid( bool Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_solid",0x6b33dbc1,"flixel.group.FlxTypedSpriteGroup.set_solid","flixel/group/FlxSpriteGroup.hx",718,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(719)
	bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(719)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(719)
	if ((tmp)){
		HX_STACK_LINE(719)
		int tmp2 = this->allowCollisions;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(719)
		int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(719)
		int tmp4 = (int(tmp3) & int((int)4369));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(719)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(719)
		bool tmp6 = (tmp5 > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(719)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(719)
		bool tmp8 = Value;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(719)
		tmp1 = (tmp7 != tmp8);
	}
	else{
		HX_STACK_LINE(719)
		tmp1 = false;
	}
	HX_STACK_LINE(719)
	if ((tmp1)){
		HX_STACK_LINE(720)
		Dynamic tmp2 = this->solidTransform_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(720)
		bool tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(720)
		this->transformChildren_Bool(tmp2,tmp3);
	}
	HX_STACK_LINE(721)
	bool tmp2 = Value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(721)
	bool tmp3 = this->super::set_solid(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(721)
	return tmp3;
}


int FlxTypedSpriteGroup_obj::set_color( int _tmp_Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_color",0x34ca98f9,"flixel.group.FlxTypedSpriteGroup.set_color","flixel/group/FlxSpriteGroup.hx",725,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_tmp_Value,"_tmp_Value")
	HX_STACK_LINE(726)
	int Value = _tmp_Value;		HX_STACK_VAR(Value,"Value");
	HX_STACK_LINE(726)
	bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(726)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(726)
	if ((tmp)){
		HX_STACK_LINE(726)
		int tmp2 = this->color;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(726)
		int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(726)
		int tmp4 = Value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(726)
		tmp1 = (tmp3 != tmp4);
	}
	else{
		HX_STACK_LINE(726)
		tmp1 = false;
	}
	HX_STACK_LINE(726)
	if ((tmp1)){
		HX_STACK_LINE(727)
		Dynamic tmp2 = this->gColorTransform_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(727)
		int tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(727)
		this->transformChildren_Int(tmp2,tmp3);
	}
	HX_STACK_LINE(728)
	int tmp2 = this->color = Value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(728)
	return tmp2;
}


::openfl::_legacy::display::BlendMode FlxTypedSpriteGroup_obj::set_blend( ::openfl::_legacy::display::BlendMode Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_blend",0x9f630fe7,"flixel.group.FlxTypedSpriteGroup.set_blend","flixel/group/FlxSpriteGroup.hx",732,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(733)
	bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(733)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(733)
	if ((tmp)){
		HX_STACK_LINE(733)
		::openfl::_legacy::display::BlendMode tmp2 = this->blend;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(733)
		::openfl::_legacy::display::BlendMode tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(733)
		::openfl::_legacy::display::BlendMode tmp4 = Value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(733)
		tmp1 = (tmp3 != tmp4);
	}
	else{
		HX_STACK_LINE(733)
		tmp1 = false;
	}
	HX_STACK_LINE(733)
	if ((tmp1)){
		HX_STACK_LINE(734)
		Dynamic tmp2 = this->blendTransform_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(734)
		::openfl::_legacy::display::BlendMode tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(734)
		this->transformChildren_openfl__legacy_display_BlendMode(tmp2,tmp3);
	}
	HX_STACK_LINE(735)
	::openfl::_legacy::display::BlendMode tmp2 = this->blend = Value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(735)
	return tmp2;
}


bool FlxTypedSpriteGroup_obj::set_pixelPerfectRender( bool Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_pixelPerfectRender",0x5163ac87,"flixel.group.FlxTypedSpriteGroup.set_pixelPerfectRender","flixel/group/FlxSpriteGroup.hx",739,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(740)
	bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(740)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(740)
	if ((tmp)){
		HX_STACK_LINE(740)
		Dynamic tmp2 = this->pixelPerfectRender;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(740)
		Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(740)
		bool tmp4 = Value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(740)
		tmp1 = (tmp3 != tmp4);
	}
	else{
		HX_STACK_LINE(740)
		tmp1 = false;
	}
	HX_STACK_LINE(740)
	if ((tmp1)){
		HX_STACK_LINE(741)
		Dynamic tmp2 = this->pixelPerfectTransform_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(741)
		bool tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(741)
		this->transformChildren_Bool(tmp2,tmp3);
	}
	HX_STACK_LINE(742)
	bool tmp2 = Value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(742)
	bool tmp3 = this->super::set_pixelPerfectRender(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(742)
	return tmp3;
}


Float FlxTypedSpriteGroup_obj::set_width( Float Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_width",0xb4d0dd9c,"flixel.group.FlxTypedSpriteGroup.set_width","flixel/group/FlxSpriteGroup.hx",749,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(750)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(750)
	return tmp;
}


Float FlxTypedSpriteGroup_obj::get_width( ){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","get_width",0xd17ff190,"flixel.group.FlxTypedSpriteGroup.get_width","flixel/group/FlxSpriteGroup.hx",754,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(755)
	::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(755)
	int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(755)
	bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(755)
	if ((tmp2)){
		HX_STACK_LINE(756)
		return (int)0;
	}
	HX_STACK_LINE(758)
	Float tmp3 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(758)
	Float minX = tmp3;		HX_STACK_VAR(minX,"minX");
	HX_STACK_LINE(759)
	Float tmp4 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(759)
	Float maxX = tmp4;		HX_STACK_VAR(maxX,"maxX");
	HX_STACK_LINE(761)
	{
		HX_STACK_LINE(761)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(761)
		Array< ::Dynamic > _g1 = this->_sprites;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(761)
		while((true)){
			HX_STACK_LINE(761)
			bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(761)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(761)
			if ((tmp6)){
				HX_STACK_LINE(761)
				break;
			}
			HX_STACK_LINE(761)
			::flixel::FlxSprite tmp7 = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(761)
			::flixel::FlxSprite member = tmp7;		HX_STACK_VAR(member,"member");
			HX_STACK_LINE(761)
			++(_g);
			HX_STACK_LINE(763)
			bool tmp8 = (member == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(763)
			if ((tmp8)){
				HX_STACK_LINE(763)
				continue;
			}
			HX_STACK_LINE(764)
			Float minMemberX = member->x;		HX_STACK_VAR(minMemberX,"minMemberX");
			HX_STACK_LINE(765)
			Float tmp9 = minMemberX;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(765)
			Float tmp10 = member->get_width();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(765)
			Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(765)
			Float maxMemberX = tmp11;		HX_STACK_VAR(maxMemberX,"maxMemberX");
			HX_STACK_LINE(767)
			bool tmp12 = (maxMemberX > maxX);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(767)
			if ((tmp12)){
				HX_STACK_LINE(769)
				maxX = maxMemberX;
			}
			HX_STACK_LINE(771)
			bool tmp13 = (minMemberX < minX);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(771)
			if ((tmp13)){
				HX_STACK_LINE(773)
				minX = minMemberX;
			}
		}
	}
	HX_STACK_LINE(776)
	Float tmp5 = (maxX - minX);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(776)
	return tmp5;
}


Float FlxTypedSpriteGroup_obj::set_height( Float Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_height",0x38408391,"flixel.group.FlxTypedSpriteGroup.set_height","flixel/group/FlxSpriteGroup.hx",783,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(784)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(784)
	return tmp;
}


Float FlxTypedSpriteGroup_obj::get_height( ){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","get_height",0x34c2e51d,"flixel.group.FlxTypedSpriteGroup.get_height","flixel/group/FlxSpriteGroup.hx",788,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(789)
	::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(789)
	int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(789)
	bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(789)
	if ((tmp2)){
		HX_STACK_LINE(791)
		return (int)0;
	}
	HX_STACK_LINE(794)
	Float tmp3 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(794)
	Float minY = tmp3;		HX_STACK_VAR(minY,"minY");
	HX_STACK_LINE(795)
	Float tmp4 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(795)
	Float maxY = tmp4;		HX_STACK_VAR(maxY,"maxY");
	HX_STACK_LINE(797)
	{
		HX_STACK_LINE(797)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(797)
		Array< ::Dynamic > _g1 = this->_sprites;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(797)
		while((true)){
			HX_STACK_LINE(797)
			bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(797)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(797)
			if ((tmp6)){
				HX_STACK_LINE(797)
				break;
			}
			HX_STACK_LINE(797)
			::flixel::FlxSprite tmp7 = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(797)
			::flixel::FlxSprite member = tmp7;		HX_STACK_VAR(member,"member");
			HX_STACK_LINE(797)
			++(_g);
			HX_STACK_LINE(799)
			bool tmp8 = (member == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(799)
			if ((tmp8)){
				HX_STACK_LINE(799)
				continue;
			}
			HX_STACK_LINE(800)
			Float minMemberY = member->y;		HX_STACK_VAR(minMemberY,"minMemberY");
			HX_STACK_LINE(801)
			Float tmp9 = minMemberY;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(801)
			Float tmp10 = member->get_height();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(801)
			Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(801)
			Float maxMemberY = tmp11;		HX_STACK_VAR(maxMemberY,"maxMemberY");
			HX_STACK_LINE(803)
			bool tmp12 = (maxMemberY > maxY);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(803)
			if ((tmp12)){
				HX_STACK_LINE(805)
				maxY = maxMemberY;
			}
			HX_STACK_LINE(807)
			bool tmp13 = (minMemberY < minY);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(807)
			if ((tmp13)){
				HX_STACK_LINE(809)
				minY = minMemberY;
			}
		}
	}
	HX_STACK_LINE(812)
	Float tmp5 = (maxY - minY);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(812)
	return tmp5;
}


int FlxTypedSpriteGroup_obj::get_length( ){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","get_length",0xd17e721c,"flixel.group.FlxTypedSpriteGroup.get_length","flixel/group/FlxSpriteGroup.hx",818,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(819)
	::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(819)
	int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(819)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,get_length,return )

int FlxTypedSpriteGroup_obj::get_maxSize( ){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","get_maxSize",0xc20eab8f,"flixel.group.FlxTypedSpriteGroup.get_maxSize","flixel/group/FlxSpriteGroup.hx",823,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(824)
	::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(824)
	int tmp1 = tmp->maxSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(824)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,get_maxSize,return )

int FlxTypedSpriteGroup_obj::set_maxSize( int Size){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_maxSize",0xcc7bb29b,"flixel.group.FlxTypedSpriteGroup.set_maxSize","flixel/group/FlxSpriteGroup.hx",828,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Size,"Size")
	HX_STACK_LINE(829)
	::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(829)
	int tmp1 = Size;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(829)
	int tmp2 = tmp->set_maxSize(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(829)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSpriteGroup_obj,set_maxSize,return )

cpp::ArrayBase FlxTypedSpriteGroup_obj::get_members( ){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","get_members",0x0ffadee3,"flixel.group.FlxTypedSpriteGroup.get_members","flixel/group/FlxSpriteGroup.hx",833,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(834)
	::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(834)
	return tmp->members;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,get_members,return )

Void FlxTypedSpriteGroup_obj::xTransform( ::flixel::FlxSprite Sprite,Float X){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","xTransform",0x4c3dab41,"flixel.group.FlxTypedSpriteGroup.xTransform","flixel/group/FlxSpriteGroup.hx",839,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(X,"X")
		HX_STACK_LINE(839)
		::flixel::FlxSprite _g = Sprite;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(839)
		Float tmp = (_g->x + X);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(839)
		_g->set_x(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,xTransform,(void))

Void FlxTypedSpriteGroup_obj::yTransform( ::flixel::FlxSprite Sprite,Float Y){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","yTransform",0x0c882320,"flixel.group.FlxTypedSpriteGroup.yTransform","flixel/group/FlxSpriteGroup.hx",840,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(840)
		::flixel::FlxSprite _g = Sprite;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(840)
		Float tmp = (_g->y + Y);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(840)
		_g->set_y(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,yTransform,(void))

Void FlxTypedSpriteGroup_obj::angleTransform( ::flixel::FlxSprite Sprite,Float Angle){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","angleTransform",0x285b5f06,"flixel.group.FlxTypedSpriteGroup.angleTransform","flixel/group/FlxSpriteGroup.hx",841,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Angle,"Angle")
		HX_STACK_LINE(841)
		::flixel::FlxSprite _g = Sprite;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(841)
		Float tmp = (_g->angle + Angle);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(841)
		_g->set_angle(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,angleTransform,(void))

Void FlxTypedSpriteGroup_obj::alphaTransform( ::flixel::FlxSprite Sprite,Float Alpha){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","alphaTransform",0xe7f1b21b,"flixel.group.FlxTypedSpriteGroup.alphaTransform","flixel/group/FlxSpriteGroup.hx",842,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Alpha,"Alpha")
		HX_STACK_LINE(842)
		::flixel::FlxSprite _g = Sprite;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(842)
		Float tmp = (_g->alpha * Alpha);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(842)
		_g->set_alpha(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,alphaTransform,(void))

Void FlxTypedSpriteGroup_obj::facingTransform( ::flixel::FlxSprite Sprite,int Facing){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","facingTransform",0x8cbce265,"flixel.group.FlxTypedSpriteGroup.facingTransform","flixel/group/FlxSpriteGroup.hx",843,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Facing,"Facing")
		HX_STACK_LINE(843)
		int tmp = Facing;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(843)
		Sprite->set_facing(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,facingTransform,(void))

Void FlxTypedSpriteGroup_obj::flipXTransform( ::flixel::FlxSprite Sprite,bool FlipX){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","flipXTransform",0x2d6d76ce,"flixel.group.FlxTypedSpriteGroup.flipXTransform","flixel/group/FlxSpriteGroup.hx",844,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(FlipX,"FlipX")
		HX_STACK_LINE(844)
		bool tmp = FlipX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(844)
		Sprite->set_flipX(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,flipXTransform,(void))

Void FlxTypedSpriteGroup_obj::flipYTransform( ::flixel::FlxSprite Sprite,bool FlipY){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","flipYTransform",0xedb7eead,"flixel.group.FlxTypedSpriteGroup.flipYTransform","flixel/group/FlxSpriteGroup.hx",845,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(FlipY,"FlipY")
		HX_STACK_LINE(845)
		bool tmp = FlipY;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(845)
		Sprite->set_flipY(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,flipYTransform,(void))

Void FlxTypedSpriteGroup_obj::movesTransform( ::flixel::FlxSprite Sprite,bool Moves){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","movesTransform",0x6670d0b7,"flixel.group.FlxTypedSpriteGroup.movesTransform","flixel/group/FlxSpriteGroup.hx",846,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Moves,"Moves")
		HX_STACK_LINE(846)
		bool tmp = Moves;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(846)
		Sprite->set_moves(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,movesTransform,(void))

Void FlxTypedSpriteGroup_obj::pixelPerfectTransform( ::flixel::FlxSprite Sprite,bool PixelPerfect){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","pixelPerfectTransform",0x21312cf8,"flixel.group.FlxTypedSpriteGroup.pixelPerfectTransform","flixel/group/FlxSpriteGroup.hx",847,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(PixelPerfect,"PixelPerfect")
		HX_STACK_LINE(847)
		bool tmp = PixelPerfect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(847)
		Sprite->set_pixelPerfectRender(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,pixelPerfectTransform,(void))

Void FlxTypedSpriteGroup_obj::gColorTransform( ::flixel::FlxSprite Sprite,int Color){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","gColorTransform",0x1fbe79c3,"flixel.group.FlxTypedSpriteGroup.gColorTransform","flixel/group/FlxSpriteGroup.hx",848,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Color,"Color")
		HX_STACK_LINE(848)
		int tmp = Color;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(848)
		Sprite->set_color(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,gColorTransform,(void))

Void FlxTypedSpriteGroup_obj::blendTransform( ::flixel::FlxSprite Sprite,::openfl::_legacy::display::BlendMode Blend){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","blendTransform",0x1d7b3ac8,"flixel.group.FlxTypedSpriteGroup.blendTransform","flixel/group/FlxSpriteGroup.hx",849,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Blend,"Blend")
		HX_STACK_LINE(849)
		::openfl::_legacy::display::BlendMode tmp = Blend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(849)
		Sprite->set_blend(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,blendTransform,(void))

Void FlxTypedSpriteGroup_obj::immovableTransform( ::flixel::FlxSprite Sprite,bool Immovable){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","immovableTransform",0x108fd76f,"flixel.group.FlxTypedSpriteGroup.immovableTransform","flixel/group/FlxSpriteGroup.hx",850,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Immovable,"Immovable")
		HX_STACK_LINE(850)
		bool tmp = Immovable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(850)
		Sprite->set_immovable(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,immovableTransform,(void))

Void FlxTypedSpriteGroup_obj::visibleTransform( ::flixel::FlxSprite Sprite,bool Visible){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","visibleTransform",0x807eb3c7,"flixel.group.FlxTypedSpriteGroup.visibleTransform","flixel/group/FlxSpriteGroup.hx",851,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Visible,"Visible")
		HX_STACK_LINE(851)
		bool tmp = Visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(851)
		Sprite->set_visible(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,visibleTransform,(void))

Void FlxTypedSpriteGroup_obj::activeTransform( ::flixel::FlxSprite Sprite,bool Active){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","activeTransform",0x51542a39,"flixel.group.FlxTypedSpriteGroup.activeTransform","flixel/group/FlxSpriteGroup.hx",852,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Active,"Active")
		HX_STACK_LINE(852)
		bool tmp = Active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(852)
		Sprite->set_active(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,activeTransform,(void))

Void FlxTypedSpriteGroup_obj::solidTransform( ::flixel::FlxSprite Sprite,bool Solid){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","solidTransform",0x242323ae,"flixel.group.FlxTypedSpriteGroup.solidTransform","flixel/group/FlxSpriteGroup.hx",853,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Solid,"Solid")
		HX_STACK_LINE(853)
		bool tmp = Solid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(853)
		Sprite->set_solid(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,solidTransform,(void))

Void FlxTypedSpriteGroup_obj::aliveTransform( ::flixel::FlxSprite Sprite,bool Alive){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","aliveTransform",0x29096fcc,"flixel.group.FlxTypedSpriteGroup.aliveTransform","flixel/group/FlxSpriteGroup.hx",854,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Alive,"Alive")
		HX_STACK_LINE(854)
		bool tmp = Alive;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(854)
		Sprite->set_alive(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,aliveTransform,(void))

Void FlxTypedSpriteGroup_obj::existsTransform( ::flixel::FlxSprite Sprite,bool Exists){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","existsTransform",0xb2051b63,"flixel.group.FlxTypedSpriteGroup.existsTransform","flixel/group/FlxSpriteGroup.hx",855,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Exists,"Exists")
		HX_STACK_LINE(855)
		bool tmp = Exists;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(855)
		Sprite->set_exists(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,existsTransform,(void))

Void FlxTypedSpriteGroup_obj::camerasTransform( ::flixel::FlxSprite Sprite,Array< ::Dynamic > Cameras){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","camerasTransform",0x7f778a8b,"flixel.group.FlxTypedSpriteGroup.camerasTransform","flixel/group/FlxSpriteGroup.hx",856,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Cameras,"Cameras")
		HX_STACK_LINE(856)
		Sprite->set_cameras(Cameras);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,camerasTransform,(void))

Void FlxTypedSpriteGroup_obj::offsetTransform( ::flixel::FlxSprite Sprite,::flixel::math::FlxPoint Offset){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","offsetTransform",0x35aa32cc,"flixel.group.FlxTypedSpriteGroup.offsetTransform","flixel/group/FlxSpriteGroup.hx",858,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Offset,"Offset")
		HX_STACK_LINE(858)
		::flixel::math::FlxPoint _this = Sprite->offset;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(858)
		Float tmp = Offset->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(858)
		_this->set_x(tmp);
		HX_STACK_LINE(858)
		Float tmp1 = Offset->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(858)
		_this->set_y(tmp1);
		HX_STACK_LINE(858)
		{
			HX_STACK_LINE(858)
			bool tmp2 = Offset->_weak;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(858)
			if ((tmp2)){
				HX_STACK_LINE(858)
				Offset->put();
			}
		}
		HX_STACK_LINE(858)
		_this;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,offsetTransform,(void))

Void FlxTypedSpriteGroup_obj::originTransform( ::flixel::FlxSprite Sprite,::flixel::math::FlxPoint Origin){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","originTransform",0x93cd4e19,"flixel.group.FlxTypedSpriteGroup.originTransform","flixel/group/FlxSpriteGroup.hx",859,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Origin,"Origin")
		HX_STACK_LINE(859)
		::flixel::math::FlxPoint _this = Sprite->origin;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(859)
		Float tmp = Origin->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(859)
		_this->set_x(tmp);
		HX_STACK_LINE(859)
		Float tmp1 = Origin->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(859)
		_this->set_y(tmp1);
		HX_STACK_LINE(859)
		{
			HX_STACK_LINE(859)
			bool tmp2 = Origin->_weak;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(859)
			if ((tmp2)){
				HX_STACK_LINE(859)
				Origin->put();
			}
		}
		HX_STACK_LINE(859)
		_this;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,originTransform,(void))

Void FlxTypedSpriteGroup_obj::scaleTransform( ::flixel::FlxSprite Sprite,::flixel::math::FlxPoint Scale){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","scaleTransform",0x4ec9456f,"flixel.group.FlxTypedSpriteGroup.scaleTransform","flixel/group/FlxSpriteGroup.hx",860,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(Scale,"Scale")
		HX_STACK_LINE(860)
		::flixel::math::FlxPoint _this = Sprite->scale;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(860)
		Float tmp = Scale->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(860)
		_this->set_x(tmp);
		HX_STACK_LINE(860)
		Float tmp1 = Scale->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(860)
		_this->set_y(tmp1);
		HX_STACK_LINE(860)
		{
			HX_STACK_LINE(860)
			bool tmp2 = Scale->_weak;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(860)
			if ((tmp2)){
				HX_STACK_LINE(860)
				Scale->put();
			}
		}
		HX_STACK_LINE(860)
		_this;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,scaleTransform,(void))

Void FlxTypedSpriteGroup_obj::scrollFactorTransform( ::flixel::FlxSprite Sprite,::flixel::math::FlxPoint ScrollFactor){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","scrollFactorTransform",0x4d8808c3,"flixel.group.FlxTypedSpriteGroup.scrollFactorTransform","flixel/group/FlxSpriteGroup.hx",861,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_ARG(ScrollFactor,"ScrollFactor")
		HX_STACK_LINE(861)
		::flixel::math::FlxPoint _this = Sprite->scrollFactor;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(861)
		Float tmp = ScrollFactor->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(861)
		_this->set_x(tmp);
		HX_STACK_LINE(861)
		Float tmp1 = ScrollFactor->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(861)
		_this->set_y(tmp1);
		HX_STACK_LINE(861)
		{
			HX_STACK_LINE(861)
			bool tmp2 = ScrollFactor->_weak;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(861)
			if ((tmp2)){
				HX_STACK_LINE(861)
				ScrollFactor->put();
			}
		}
		HX_STACK_LINE(861)
		_this;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,scrollFactorTransform,(void))

Void FlxTypedSpriteGroup_obj::offsetCallback( ::flixel::math::FlxPoint Offset){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","offsetCallback",0xeadd6065,"flixel.group.FlxTypedSpriteGroup.offsetCallback","flixel/group/FlxSpriteGroup.hx",864,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Offset,"Offset")
		HX_STACK_LINE(864)
		Dynamic tmp = this->offsetTransform_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(864)
		::flixel::math::FlxPoint tmp1 = Offset;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(864)
		this->transformChildren_flixel_math_FlxPoint(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSpriteGroup_obj,offsetCallback,(void))

Void FlxTypedSpriteGroup_obj::originCallback( ::flixel::math::FlxPoint Origin){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","originCallback",0xfa35edb8,"flixel.group.FlxTypedSpriteGroup.originCallback","flixel/group/FlxSpriteGroup.hx",865,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Origin,"Origin")
		HX_STACK_LINE(865)
		Dynamic tmp = this->originTransform_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(865)
		::flixel::math::FlxPoint tmp1 = Origin;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(865)
		this->transformChildren_flixel_math_FlxPoint(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSpriteGroup_obj,originCallback,(void))

Void FlxTypedSpriteGroup_obj::scaleCallback( ::flixel::math::FlxPoint Scale){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","scaleCallback",0xf9e6b322,"flixel.group.FlxTypedSpriteGroup.scaleCallback","flixel/group/FlxSpriteGroup.hx",866,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Scale,"Scale")
		HX_STACK_LINE(866)
		Dynamic tmp = this->scaleTransform_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(866)
		::flixel::math::FlxPoint tmp1 = Scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(866)
		this->transformChildren_flixel_math_FlxPoint(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSpriteGroup_obj,scaleCallback,(void))

Void FlxTypedSpriteGroup_obj::scrollFactorCallback( ::flixel::math::FlxPoint ScrollFactor){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","scrollFactorCallback",0x26aab64e,"flixel.group.FlxTypedSpriteGroup.scrollFactorCallback","flixel/group/FlxSpriteGroup.hx",867,0xeb1fa7f3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ScrollFactor,"ScrollFactor")
		HX_STACK_LINE(867)
		Dynamic tmp = this->scrollFactorTransform_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(867)
		::flixel::math::FlxPoint tmp1 = ScrollFactor;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(867)
		this->transformChildren_flixel_math_FlxPoint(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSpriteGroup_obj,scrollFactorCallback,(void))

::flixel::FlxSprite FlxTypedSpriteGroup_obj::loadGraphicFromSprite( ::flixel::FlxSprite Sprite){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","loadGraphicFromSprite",0x6f12dc84,"flixel.group.FlxTypedSpriteGroup.loadGraphicFromSprite","flixel/group/FlxSpriteGroup.hx",877,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_LINE(879)
	HX_STACK_DO_THROW(HX_HCSTRING("This function is not supported in FlxSpriteGroup","\xd4","\x53","\x54","\x91"));
	HX_STACK_LINE(881)
	return hx::ObjectPtr<OBJ_>(this);
}


::flixel::FlxSprite FlxTypedSpriteGroup_obj::loadGraphic( Dynamic Graphic,hx::Null< bool >  __o_Animated,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< bool >  __o_Unique,::String Key){
bool Animated = __o_Animated.Default(false);
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","loadGraphic",0xb4356b15,"flixel.group.FlxTypedSpriteGroup.loadGraphic","flixel/group/FlxSpriteGroup.hx",890,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Animated,"Animated")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(890)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


::flixel::FlxSprite FlxTypedSpriteGroup_obj::loadRotatedGraphic( Dynamic Graphic,hx::Null< int >  __o_Rotations,hx::Null< int >  __o_Frame,hx::Null< bool >  __o_AntiAliasing,hx::Null< bool >  __o_AutoBuffer,::String Key){
int Rotations = __o_Rotations.Default(16);
int Frame = __o_Frame.Default(-1);
bool AntiAliasing = __o_AntiAliasing.Default(false);
bool AutoBuffer = __o_AutoBuffer.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","loadRotatedGraphic",0x45e23732,"flixel.group.FlxTypedSpriteGroup.loadRotatedGraphic","flixel/group/FlxSpriteGroup.hx",898,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Rotations,"Rotations")
	HX_STACK_ARG(Frame,"Frame")
	HX_STACK_ARG(AntiAliasing,"AntiAliasing")
	HX_STACK_ARG(AutoBuffer,"AutoBuffer")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(900)
		HX_STACK_DO_THROW(HX_HCSTRING("This function is not supported in FlxSpriteGroup","\xd4","\x53","\x54","\x91"));
		HX_STACK_LINE(902)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


::flixel::FlxSprite FlxTypedSpriteGroup_obj::makeGraphic( int Width,int Height,hx::Null< int >  __o__tmp_Color,hx::Null< bool >  __o_Unique,::String Key){
int _tmp_Color = __o__tmp_Color.Default(-1);
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","makeGraphic",0x27a1d44d,"flixel.group.FlxTypedSpriteGroup.makeGraphic","flixel/group/FlxSpriteGroup.hx",910,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(_tmp_Color,"_tmp_Color")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(912)
		int Color = _tmp_Color;		HX_STACK_VAR(Color,"Color");
		HX_STACK_LINE(912)
		HX_STACK_DO_THROW(HX_HCSTRING("This function is not supported in FlxSpriteGroup","\xd4","\x53","\x54","\x91"));
		HX_STACK_LINE(914)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


::openfl::_legacy::display::BitmapData FlxTypedSpriteGroup_obj::set_pixels( ::openfl::_legacy::display::BitmapData Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_pixels",0xc29e6ad7,"flixel.group.FlxTypedSpriteGroup.set_pixels","flixel/group/FlxSpriteGroup.hx",922,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(923)
	::openfl::_legacy::display::BitmapData tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(923)
	return tmp;
}


::flixel::graphics::frames::FlxFrame FlxTypedSpriteGroup_obj::set_frame( ::flixel::graphics::frames::FlxFrame Value){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_frame",0xf0f19fc3,"flixel.group.FlxTypedSpriteGroup.set_frame","flixel/group/FlxSpriteGroup.hx",931,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(932)
	::flixel::graphics::frames::FlxFrame tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(932)
	return tmp;
}


::openfl::_legacy::display::BitmapData FlxTypedSpriteGroup_obj::get_pixels( ){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","get_pixels",0xbf20cc63,"flixel.group.FlxTypedSpriteGroup.get_pixels","flixel/group/FlxSpriteGroup.hx",941,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(941)
	return null();
}


Void FlxTypedSpriteGroup_obj::calcFrame( hx::Null< bool >  __o_RunOnCpp){
bool RunOnCpp = __o_RunOnCpp.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","calcFrame",0xbd00728b,"flixel.group.FlxTypedSpriteGroup.calcFrame","flixel/group/FlxSpriteGroup.hx",950,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RunOnCpp,"RunOnCpp")
{
	}
return null();
}


Void FlxTypedSpriteGroup_obj::resetHelpers( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","resetHelpers",0x60f4ebe3,"flixel.group.FlxTypedSpriteGroup.resetHelpers","flixel/group/FlxSpriteGroup.hx",957,0xeb1fa7f3)
		HX_STACK_THIS(this)
	}
return null();
}


Void FlxTypedSpriteGroup_obj::stamp( ::flixel::FlxSprite Brush,hx::Null< int >  __o_X,hx::Null< int >  __o_Y){
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","stamp",0x5cccf9b6,"flixel.group.FlxTypedSpriteGroup.stamp","flixel/group/FlxSpriteGroup.hx",962,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Brush,"Brush")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
	}
return null();
}


::flixel::graphics::frames::FlxFramesCollection FlxTypedSpriteGroup_obj::set_frames( ::flixel::graphics::frames::FlxFramesCollection Frames){
	HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","set_frames",0xe27a2b50,"flixel.group.FlxTypedSpriteGroup.set_frames","flixel/group/FlxSpriteGroup.hx",968,0xeb1fa7f3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Frames,"Frames")
	HX_STACK_LINE(969)
	::flixel::graphics::frames::FlxFramesCollection tmp = Frames;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(969)
	return tmp;
}


Void FlxTypedSpriteGroup_obj::updateColorTransform( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedSpriteGroup","updateColorTransform",0x64df671f,"flixel.group.FlxTypedSpriteGroup.updateColorTransform","flixel/group/FlxSpriteGroup.hx",975,0xeb1fa7f3)
		HX_STACK_THIS(this)
	}
return null();
}



FlxTypedSpriteGroup_obj::FlxTypedSpriteGroup_obj()
{
}

void FlxTypedSpriteGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedSpriteGroup);
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_MEMBER_NAME(members,"members");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(_skipTransformChildren,"_skipTransformChildren");
	HX_MARK_MEMBER_NAME(_isDrawnDebug,"_isDrawnDebug");
	HX_MARK_MEMBER_NAME(_sprites,"_sprites");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(group,"group");
	HX_VISIT_MEMBER_NAME(members,"members");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(_skipTransformChildren,"_skipTransformChildren");
	HX_VISIT_MEMBER_NAME(_isDrawnDebug,"_isDrawnDebug");
	HX_VISIT_MEMBER_NAME(_sprites,"_sprites");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTypedSpriteGroup_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"sort") ) { return sort_dyn(); }
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { return group; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"stamp") ) { return stamp_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp == hx::paccAlways ? get_length() : length; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"revive") ) { return revive_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"members") ) { return inCallProp == hx::paccAlways ? get_members() : members; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { if (inCallProp == hx::paccAlways) return get_maxSize(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		if (HX_FIELD_EQ(inName,"replace") ) { return replace_dyn(); }
		if (HX_FIELD_EQ(inName,"forEach") ) { return forEach_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_sprites") ) { return _sprites; }
		if (HX_FIELD_EQ(inName,"initVars") ) { return initVars_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"countDead") ) { return countDead_dyn(); }
		if (HX_FIELD_EQ(inName,"getRandom") ) { return getRandom_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alive") ) { return set_alive_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_flipX") ) { return set_flipX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_flipY") ) { return set_flipY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_moves") ) { return set_moves_dyn(); }
		if (HX_FIELD_EQ(inName,"set_solid") ) { return set_solid_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_blend") ) { return set_blend_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frame") ) { return set_frame_dyn(); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return calcFrame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isOnScreen") ) { return isOnScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"set_exists") ) { return set_exists_dyn(); }
		if (HX_FIELD_EQ(inName,"set_active") ) { return set_active_dyn(); }
		if (HX_FIELD_EQ(inName,"set_facing") ) { return set_facing_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"xTransform") ) { return xTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"yTransform") ) { return yTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pixels") ) { return set_pixels_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pixels") ) { return get_pixels_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frames") ) { return set_frames_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"countLiving") ) { return countLiving_dyn(); }
		if (HX_FIELD_EQ(inName,"forEachDead") ) { return forEachDead_dyn(); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cameras") ) { return set_cameras_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxSize") ) { return get_maxSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxSize") ) { return set_maxSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_members") ) { return get_members_dyn(); }
		if (HX_FIELD_EQ(inName,"loadGraphic") ) { return loadGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"makeGraphic") ) { return makeGraphic_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"replaceColor") ) { return replaceColor_dyn(); }
		if (HX_FIELD_EQ(inName,"getFirstNull") ) { return getFirstNull_dyn(); }
		if (HX_FIELD_EQ(inName,"getFirstDead") ) { return getFirstDead_dyn(); }
		if (HX_FIELD_EQ(inName,"forEachAlive") ) { return forEachAlive_dyn(); }
		if (HX_FIELD_EQ(inName,"resetHelpers") ) { return resetHelpers_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_isDrawnDebug") ) { return _isDrawnDebug; }
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return overlapsPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getFirstAlive") ) { return getFirstAlive_dyn(); }
		if (HX_FIELD_EQ(inName,"forEachExists") ) { return forEachExists_dyn(); }
		if (HX_FIELD_EQ(inName,"forEachOfType") ) { return forEachOfType_dyn(); }
		if (HX_FIELD_EQ(inName,"set_immovable") ) { return set_immovable_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleCallback") ) { return scaleCallback_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"angleTransform") ) { return angleTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"alphaTransform") ) { return alphaTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"flipXTransform") ) { return flipXTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"flipYTransform") ) { return flipYTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"movesTransform") ) { return movesTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"blendTransform") ) { return blendTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"solidTransform") ) { return solidTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"aliveTransform") ) { return aliveTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleTransform") ) { return scaleTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"offsetCallback") ) { return offsetCallback_dyn(); }
		if (HX_FIELD_EQ(inName,"originCallback") ) { return originCallback_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"facingTransform") ) { return facingTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"gColorTransform") ) { return gColorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"activeTransform") ) { return activeTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"existsTransform") ) { return existsTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"offsetTransform") ) { return offsetTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"originTransform") ) { return originTransform_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getFirstExisting") ) { return getFirstExisting_dyn(); }
		if (HX_FIELD_EQ(inName,"visibleTransform") ) { return visibleTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"camerasTransform") ) { return camerasTransform_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getFirstAvailable") ) { return getFirstAvailable_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelsOverlapPoint") ) { return pixelsOverlapPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"immovableTransform") ) { return immovableTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"loadRotatedGraphic") ) { return loadRotatedGraphic_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"scrollFactorCallback") ) { return scrollFactorCallback_dyn(); }
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return updateColorTransform_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"transformChildren_Int") ) { return transformChildren_Int_dyn(); }
		if (HX_FIELD_EQ(inName,"pixelPerfectTransform") ) { return pixelPerfectTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"scrollFactorTransform") ) { return scrollFactorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"loadGraphicFromSprite") ) { return loadGraphicFromSprite_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"transformChildren_Bool") ) { return transformChildren_Bool_dyn(); }
		if (HX_FIELD_EQ(inName,"_skipTransformChildren") ) { return _skipTransformChildren; }
		if (HX_FIELD_EQ(inName,"set_pixelPerfectRender") ) { return set_pixelPerfectRender_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"transformChildren_Float") ) { return transformChildren_Float_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"multiTransformChildren_Float") ) { return multiTransformChildren_Float_dyn(); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"transformChildren_flixel_math_FlxPoint") ) { return transformChildren_flixel_math_FlxPoint_dyn(); }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"transformChildren_Array_flixel_FlxCamera") ) { return transformChildren_Array_flixel_FlxCamera_dyn(); }
		break;
	case 50:
		if (HX_FIELD_EQ(inName,"transformChildren_openfl__legacy_display_BlendMode") ) { return transformChildren_openfl__legacy_display_BlendMode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTypedSpriteGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { group=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"members") ) { members=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { if (inCallProp == hx::paccAlways) return set_maxSize(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_sprites") ) { _sprites=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_isDrawnDebug") ) { _isDrawnDebug=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_skipTransformChildren") ) { _skipTransformChildren=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedSpriteGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"));
	outFields->push(HX_HCSTRING("members","\xd9","\x2c","\x70","\x1a"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("maxSize","\x85","\xf9","\x83","\xcc"));
	outFields->push(HX_HCSTRING("_skipTransformChildren","\x8d","\x52","\xb5","\x7c"));
	outFields->push(HX_HCSTRING("_isDrawnDebug","\x72","\x35","\x4b","\x27"));
	outFields->push(HX_HCSTRING("_sprites","\x4f","\x02","\x43","\x99"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(FlxTypedSpriteGroup_obj,group),HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(FlxTypedSpriteGroup_obj,members),HX_HCSTRING("members","\xd9","\x2c","\x70","\x1a")},
	{hx::fsInt,(int)offsetof(FlxTypedSpriteGroup_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsBool,(int)offsetof(FlxTypedSpriteGroup_obj,_skipTransformChildren),HX_HCSTRING("_skipTransformChildren","\x8d","\x52","\xb5","\x7c")},
	{hx::fsBool,(int)offsetof(FlxTypedSpriteGroup_obj,_isDrawnDebug),HX_HCSTRING("_isDrawnDebug","\x72","\x35","\x4b","\x27")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTypedSpriteGroup_obj,_sprites),HX_HCSTRING("_sprites","\x4f","\x02","\x43","\x99")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("transformChildren_openfl__legacy_display_BlendMode","\xe5","\x33","\xca","\x25"),
	HX_HCSTRING("transformChildren_Int","\x1b","\x1a","\x96","\x58"),
	HX_HCSTRING("transformChildren_Float","\xc8","\x75","\x5b","\x82"),
	HX_HCSTRING("transformChildren_Bool","\x7e","\xfd","\x20","\x26"),
	HX_HCSTRING("transformChildren_Array_flixel_FlxCamera","\xae","\x0c","\xc0","\xd3"),
	HX_HCSTRING("multiTransformChildren_Float","\x4f","\x02","\xe4","\x0f"),
	HX_HCSTRING("transformChildren_flixel_math_FlxPoint","\x06","\x0c","\xc3","\x75"),
	HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"),
	HX_HCSTRING("members","\xd9","\x2c","\x70","\x1a"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("_skipTransformChildren","\x8d","\x52","\xb5","\x7c"),
	HX_HCSTRING("_isDrawnDebug","\x72","\x35","\x4b","\x27"),
	HX_HCSTRING("_sprites","\x4f","\x02","\x43","\x99"),
	HX_HCSTRING("initVars","\xdc","\x5a","\x00","\x53"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("isOnScreen","\xf5","\x43","\xb9","\xa1"),
	HX_HCSTRING("overlapsPoint","\xa4","\xc5","\xbd","\x35"),
	HX_HCSTRING("pixelsOverlapPoint","\x16","\x82","\x44","\xe0"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("replaceColor","\x8f","\x5c","\xeb","\x3d"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("recycle","\x13","\x10","\x8c","\x37"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("replace","\x34","\x48","\x28","\xab"),
	HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"),
	HX_HCSTRING("getFirstAvailable","\xaf","\xea","\xb3","\x05"),
	HX_HCSTRING("getFirstNull","\x61","\xb7","\x33","\x0f"),
	HX_HCSTRING("getFirstExisting","\x65","\xa4","\x6c","\xee"),
	HX_HCSTRING("getFirstAlive","\xb3","\x09","\xe2","\xbb"),
	HX_HCSTRING("getFirstDead","\x7e","\x67","\x8b","\x08"),
	HX_HCSTRING("countLiving","\x58","\xd9","\x8a","\x30"),
	HX_HCSTRING("countDead","\x13","\xd3","\x86","\x54"),
	HX_HCSTRING("getRandom","\x39","\xab","\xe5","\x33"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("forEach","\xaa","\x29","\xbe","\xc4"),
	HX_HCSTRING("forEachAlive","\xc3","\x61","\xb7","\x99"),
	HX_HCSTRING("forEachDead","\x6e","\xc1","\xe4","\x78"),
	HX_HCSTRING("forEachExists","\x26","\x57","\xf8","\x68"),
	HX_HCSTRING("forEachOfType","\xbb","\x90","\x76","\xfd"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	HX_HCSTRING("revive","\x55","\xfa","\x76","\x0a"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("setPosition","\x6b","\x6a","\x5b","\xfb"),
	HX_HCSTRING("set_cameras","\x51","\xf1","\x98","\x73"),
	HX_HCSTRING("set_exists","\x19","\x2c","\xe5","\xb3"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("set_active","\x03","\x50","\x4b","\x0a"),
	HX_HCSTRING("set_alive","\x30","\xac","\x8b","\x48"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_angle","\x36","\x8c","\xdc","\x49"),
	HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"),
	HX_HCSTRING("set_facing","\x57","\x4d","\x0a","\xd8"),
	HX_HCSTRING("set_flipX","\x6e","\x8d","\x8c","\x29"),
	HX_HCSTRING("set_flipY","\x6f","\x8d","\x8c","\x29"),
	HX_HCSTRING("set_moves","\xa5","\x14","\x60","\x33"),
	HX_HCSTRING("set_immovable","\xed","\xdc","\xd9","\x2d"),
	HX_HCSTRING("set_solid","\x8e","\xfc","\xbf","\xa7"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("set_blend","\xb4","\x30","\xef","\xdb"),
	HX_HCSTRING("set_pixelPerfectRender","\x9a","\x4f","\x8f","\xbc"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("get_maxSize","\x9c","\x59","\x7e","\x52"),
	HX_HCSTRING("set_maxSize","\xa8","\x60","\xeb","\x5c"),
	HX_HCSTRING("get_members","\xf0","\x8c","\x6a","\xa0"),
	HX_HCSTRING("xTransform","\xd4","\x3d","\x4e","\x0a"),
	HX_HCSTRING("yTransform","\xb3","\xb5","\x98","\xca"),
	HX_HCSTRING("angleTransform","\x19","\x37","\x04","\x53"),
	HX_HCSTRING("alphaTransform","\x2e","\x8a","\x9a","\x12"),
	HX_HCSTRING("facingTransform","\xf2","\x1a","\xd1","\xb5"),
	HX_HCSTRING("flipXTransform","\xe1","\x4e","\x16","\x58"),
	HX_HCSTRING("flipYTransform","\xc0","\xc6","\x60","\x18"),
	HX_HCSTRING("movesTransform","\xca","\xa8","\x19","\x91"),
	HX_HCSTRING("pixelPerfectTransform","\x45","\xcd","\x91","\xea"),
	HX_HCSTRING("gColorTransform","\x50","\xb2","\xd2","\x48"),
	HX_HCSTRING("blendTransform","\xdb","\x12","\x24","\x48"),
	HX_HCSTRING("immovableTransform","\x02","\xb5","\x21","\x2d"),
	HX_HCSTRING("visibleTransform","\x9a","\xf6","\x1b","\x49"),
	HX_HCSTRING("activeTransform","\xc6","\x62","\x68","\x7a"),
	HX_HCSTRING("solidTransform","\xc1","\xfb","\xcb","\x4e"),
	HX_HCSTRING("aliveTransform","\xdf","\x47","\xb2","\x53"),
	HX_HCSTRING("existsTransform","\xf0","\x53","\x19","\xdb"),
	HX_HCSTRING("camerasTransform","\x5e","\xcd","\x14","\x48"),
	HX_HCSTRING("offsetTransform","\x59","\x6b","\xbe","\x5e"),
	HX_HCSTRING("originTransform","\xa6","\x86","\xe1","\xbc"),
	HX_HCSTRING("scaleTransform","\x82","\x1d","\x72","\x79"),
	HX_HCSTRING("scrollFactorTransform","\x10","\xa9","\xe8","\x16"),
	HX_HCSTRING("offsetCallback","\x78","\x38","\x86","\x15"),
	HX_HCSTRING("originCallback","\xcb","\xc5","\xde","\x24"),
	HX_HCSTRING("scaleCallback","\x6f","\xbe","\x27","\x48"),
	HX_HCSTRING("scrollFactorCallback","\xa1","\x5e","\x9d","\xf1"),
	HX_HCSTRING("loadGraphicFromSprite","\xd1","\x7c","\x73","\x38"),
	HX_HCSTRING("loadGraphic","\x22","\x19","\xa5","\x44"),
	HX_HCSTRING("loadRotatedGraphic","\xc5","\x14","\x74","\x62"),
	HX_HCSTRING("makeGraphic","\x5a","\x82","\x11","\xb8"),
	HX_HCSTRING("set_pixels","\x6a","\xfd","\xae","\x80"),
	HX_HCSTRING("set_frame","\x90","\xc0","\x7d","\x2d"),
	HX_HCSTRING("get_pixels","\xf6","\x5e","\x31","\x7d"),
	HX_HCSTRING("calcFrame","\x58","\x93","\x8c","\xf9"),
	HX_HCSTRING("resetHelpers","\x36","\x89","\x3d","\x32"),
	HX_HCSTRING("stamp","\x03","\x70","\x0b","\x84"),
	HX_HCSTRING("set_frames","\xe3","\xbd","\x8a","\xa0"),
	HX_HCSTRING("updateColorTransform","\x72","\x0f","\xd2","\x2f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypedSpriteGroup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypedSpriteGroup_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTypedSpriteGroup_obj::__mClass;

void FlxTypedSpriteGroup_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.group.FlxTypedSpriteGroup","\xe1","\xd1","\x86","\xf9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTypedSpriteGroup_obj >;
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
} // end namespace group
