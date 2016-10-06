#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxAtlas
#include <flixel/graphics/atlas/FlxAtlas.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxNode
#include <flixel/graphics/atlas/FlxNode.h>
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
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextFormat
#include <flixel/text/FlxTextFormat.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextFormatMarkerPair
#include <flixel/text/FlxTextFormatMarkerPair.h>
#endif
#ifndef INCLUDED_flixel_text__FlxText_FlxTextAlign_Impl_
#include <flixel/text/_FlxText/FlxTextAlign_Impl_.h>
#endif
#ifndef INCLUDED_flixel_text__FlxText_FlxTextFormatRange
#include <flixel/text/_FlxText/FlxTextFormatRange.h>
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
#ifndef INCLUDED_flixel_util_helpers_FlxRange
#include <flixel/util/helpers/FlxRange.h>
#endif
#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
#ifndef INCLUDED_openfl__legacy_AssetType
#include <openfl/_legacy/AssetType.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
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
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_Font
#include <openfl/_legacy/text/Font.h>
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
namespace text{

Void FlxText_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_FieldWidth,::String Text,hx::Null< int >  __o_Size,hx::Null< bool >  __o_EmbeddedFont)
{
HX_STACK_FRAME("flixel.text.FlxText","new",0x8fca03a2,"flixel.text.FlxText.new","flixel/text/FlxText.hx",36,0xdf165a6e)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_FieldWidth,"FieldWidth")
HX_STACK_ARG(Text,"Text")
HX_STACK_ARG(__o_Size,"Size")
HX_STACK_ARG(__o_EmbeddedFont,"EmbeddedFont")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float FieldWidth = __o_FieldWidth.Default(0);
int Size = __o_Size.Default(8);
bool EmbeddedFont = __o_EmbeddedFont.Default(true);
{
	HX_STACK_LINE(162)
	this->_hasBorderAlpha = false;
	HX_STACK_LINE(153)
	this->_regen = true;
	HX_STACK_LINE(146)
	this->_formatRanges = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(111)
	this->borderQuality = ((Float)1);
	HX_STACK_LINE(104)
	this->borderSize = ((Float)1);
	HX_STACK_LINE(99)
	this->borderColor = (int)0;
	HX_STACK_LINE(94)
	this->borderStyle = ::flixel::text::FlxTextBorderStyle_obj::NONE;
	HX_STACK_LINE(46)
	this->text = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(184)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(184)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(184)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(186)
	bool tmp2 = (Text == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(186)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(186)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(186)
	if ((tmp3)){
		HX_STACK_LINE(186)
		tmp4 = (Text == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(186)
		tmp4 = true;
	}
	HX_STACK_LINE(186)
	if ((tmp4)){
		HX_STACK_LINE(190)
		this->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		HX_STACK_LINE(191)
		Text = HX_HCSTRING(" ","\x20","\x00","\x00","\x00");
	}
	else{
		HX_STACK_LINE(195)
		::String tmp5 = Text;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(195)
		this->set_text(tmp5);
	}
	HX_STACK_LINE(198)
	::openfl::_legacy::text::TextField tmp5 = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(198)
	this->textField = tmp5;
	HX_STACK_LINE(199)
	::openfl::_legacy::text::TextField tmp6 = this->textField;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(199)
	tmp6->set_selectable(false);
	HX_STACK_LINE(200)
	::openfl::_legacy::text::TextField tmp7 = this->textField;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(200)
	tmp7->set_multiline(true);
	HX_STACK_LINE(201)
	::openfl::_legacy::text::TextField tmp8 = this->textField;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(201)
	tmp8->set_wordWrap(true);
	HX_STACK_LINE(202)
	::openfl::_legacy::text::TextFormat tmp9 = ::openfl::_legacy::text::TextFormat_obj::__new(null(),Size,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(202)
	this->_defaultFormat = tmp9;
	HX_STACK_LINE(203)
	::String tmp10 = ::flixel::_system::FlxAssets_obj::FONT_DEFAULT;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(203)
	this->set_font(tmp10);
	HX_STACK_LINE(204)
	::openfl::_legacy::text::TextFormat tmp11 = ::openfl::_legacy::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(204)
	this->_formatAdjusted = tmp11;
	HX_STACK_LINE(205)
	::openfl::_legacy::text::TextField tmp12 = this->textField;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(205)
	::openfl::_legacy::text::TextFormat tmp13 = this->_defaultFormat;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(205)
	tmp12->set_defaultTextFormat(tmp13);
	HX_STACK_LINE(206)
	::openfl::_legacy::text::TextField tmp14 = this->textField;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(206)
	::String tmp15 = Text;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(206)
	tmp14->set_text(tmp15);
	HX_STACK_LINE(207)
	Float tmp16 = FieldWidth;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(207)
	this->set_fieldWidth(tmp16);
	HX_STACK_LINE(208)
	::openfl::_legacy::text::TextField tmp17 = this->textField;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(208)
	bool tmp18 = EmbeddedFont;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(208)
	tmp17->set_embedFonts(tmp18);
	HX_STACK_LINE(214)
	::openfl::_legacy::text::TextField tmp19 = this->textField;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(214)
	bool tmp20 = (Text.length <= (int)0);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(214)
	Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(214)
	if ((tmp20)){
		HX_STACK_LINE(214)
		tmp21 = (int)1;
	}
	else{
		HX_STACK_LINE(214)
		tmp21 = (int)10;
	}
	HX_STACK_LINE(214)
	tmp19->set_height(tmp21);
	HX_STACK_LINE(216)
	this->set_allowCollisions((int)0);
	HX_STACK_LINE(217)
	this->set_moves(false);
	HX_STACK_LINE(219)
	this->drawFrame(null());
	HX_STACK_LINE(221)
	::flixel::math::FlxPoint tmp22;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(221)
	{
		HX_STACK_LINE(221)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp23 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(221)
		::flixel::math::FlxPoint tmp24 = tmp23->get();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(221)
		::flixel::math::FlxPoint tmp25 = tmp24->set((int)1,(int)1);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(221)
		::flixel::math::FlxPoint point = tmp25;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(221)
		point->_inPool = false;
		HX_STACK_LINE(221)
		tmp22 = point;
	}
	HX_STACK_LINE(221)
	this->shadowOffset = tmp22;
}
;
	return null();
}

//FlxText_obj::~FlxText_obj() { }

Dynamic FlxText_obj::__CreateEmpty() { return  new FlxText_obj; }
hx::ObjectPtr< FlxText_obj > FlxText_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_FieldWidth,::String Text,hx::Null< int >  __o_Size,hx::Null< bool >  __o_EmbeddedFont)
{  hx::ObjectPtr< FlxText_obj > _result_ = new FlxText_obj();
	_result_->__construct(__o_X,__o_Y,__o_FieldWidth,Text,__o_Size,__o_EmbeddedFont);
	return _result_;}

Dynamic FlxText_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxText_obj > _result_ = new FlxText_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

Void FlxText_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","destroy",0x1704293c,"flixel.text.FlxText.destroy","flixel/text/FlxText.hx",228,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(229)
		this->textField = null();
		HX_STACK_LINE(230)
		this->_font = null();
		HX_STACK_LINE(231)
		this->_defaultFormat = null();
		HX_STACK_LINE(232)
		this->_formatAdjusted = null();
		HX_STACK_LINE(233)
		::flixel::math::FlxPoint tmp = this->shadowOffset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(233)
		::flixel::math::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(233)
		this->shadowOffset = tmp1;
		HX_STACK_LINE(234)
		this->super::destroy();
	}
return null();
}


Void FlxText_obj::drawFrame( hx::Null< bool >  __o_Force){
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.text.FlxText","drawFrame",0xd9b5be4b,"flixel.text.FlxText.drawFrame","flixel/text/FlxText.hx",238,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(239)
		bool tmp = this->_regen;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(239)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(239)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(239)
		if ((tmp1)){
			HX_STACK_LINE(239)
			tmp2 = Force;
		}
		else{
			HX_STACK_LINE(239)
			tmp2 = true;
		}
		HX_STACK_LINE(239)
		this->_regen = tmp2;
		HX_STACK_LINE(240)
		bool tmp3 = this->_regen;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(240)
		this->super::drawFrame(tmp3);
	}
return null();
}


bool FlxText_obj::stampOnAtlas( ::flixel::graphics::atlas::FlxAtlas atlas){
	HX_STACK_FRAME("flixel.text.FlxText","stampOnAtlas",0x66244e67,"flixel.text.FlxText.stampOnAtlas","flixel/text/FlxText.hx",252,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(atlas,"atlas")
	HX_STACK_LINE(253)
	this->regenGraphic();
	HX_STACK_LINE(255)
	::flixel::graphics::FlxGraphic tmp = this->graphic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(255)
	::openfl::_legacy::display::BitmapData tmp1 = tmp->bitmap;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(255)
	::flixel::graphics::FlxGraphic tmp2 = this->graphic;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(255)
	::String tmp3 = tmp2->key;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(255)
	::flixel::graphics::atlas::FlxNode tmp4 = atlas->addNode(tmp1,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(255)
	::flixel::graphics::atlas::FlxNode node = tmp4;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(256)
	bool tmp5 = (node != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(256)
	bool result = tmp5;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(258)
	bool tmp6 = (node != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(258)
	if ((tmp6)){
		HX_STACK_LINE(260)
		::flixel::graphics::frames::FlxImageFrame tmp7 = node->getImageFrame();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(260)
		this->set_frames(tmp7);
	}
	HX_STACK_LINE(263)
	bool tmp7 = result;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(263)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,stampOnAtlas,return )

::flixel::text::FlxText FlxText_obj::applyMarkup( ::String input,Array< ::Dynamic > rules){
	HX_STACK_FRAME("flixel.text.FlxText","applyMarkup",0x660988f8,"flixel.text.FlxText.applyMarkup","flixel/text/FlxText.hx",284,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(input,"input")
	HX_STACK_ARG(rules,"rules")
	HX_STACK_LINE(285)
	bool tmp = (rules == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(285)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(285)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(285)
	if ((tmp1)){
		HX_STACK_LINE(285)
		tmp2 = (rules->length == (int)0);
	}
	else{
		HX_STACK_LINE(285)
		tmp2 = true;
	}
	HX_STACK_LINE(285)
	if ((tmp2)){
		HX_STACK_LINE(287)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(290)
	this->clearFormats();
	HX_STACK_LINE(292)
	Array< int > rangeStarts = Array_obj< int >::__new();		HX_STACK_VAR(rangeStarts,"rangeStarts");
	HX_STACK_LINE(293)
	Array< int > rangeEnds = Array_obj< int >::__new();		HX_STACK_VAR(rangeEnds,"rangeEnds");
	HX_STACK_LINE(294)
	Array< ::Dynamic > rulesToApply = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(rulesToApply,"rulesToApply");
	HX_STACK_LINE(296)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(297)
	{
		HX_STACK_LINE(297)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(297)
		while((true)){
			HX_STACK_LINE(297)
			bool tmp3 = (_g < rules->length);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(297)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(297)
			if ((tmp4)){
				HX_STACK_LINE(297)
				break;
			}
			HX_STACK_LINE(297)
			::flixel::text::FlxTextFormatMarkerPair tmp5 = rules->__get(_g).StaticCast< ::flixel::text::FlxTextFormatMarkerPair >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(297)
			::flixel::text::FlxTextFormatMarkerPair rule = tmp5;		HX_STACK_VAR(rule,"rule");
			HX_STACK_LINE(297)
			++(_g);
			HX_STACK_LINE(299)
			bool tmp6 = (rule->marker != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(299)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(299)
			if ((tmp6)){
				HX_STACK_LINE(299)
				tmp7 = (rule->format != null());
			}
			else{
				HX_STACK_LINE(299)
				tmp7 = false;
			}
			HX_STACK_LINE(299)
			if ((tmp7)){
				HX_STACK_LINE(301)
				bool start = false;		HX_STACK_VAR(start,"start");
				HX_STACK_LINE(302)
				::String tmp8 = rule->marker;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(302)
				int tmp9 = input.indexOf(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(302)
				bool tmp10 = (tmp9 != (int)-1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(302)
				if ((tmp10)){
					HX_STACK_LINE(304)
					{
						HX_STACK_LINE(304)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(304)
						::String tmp11 = input;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(304)
						int tmp12 = ::haxe::Utf8_obj::length(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(304)
						int _g1 = tmp12;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(304)
						while((true)){
							HX_STACK_LINE(304)
							bool tmp13 = (_g2 < _g1);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(304)
							bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(304)
							if ((tmp14)){
								HX_STACK_LINE(304)
								break;
							}
							HX_STACK_LINE(304)
							int tmp15 = (_g2)++;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(304)
							int charIndex = tmp15;		HX_STACK_VAR(charIndex,"charIndex");
							HX_STACK_LINE(306)
							::String tmp16 = input;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(306)
							int tmp17 = charIndex;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(306)
							int tmp18 = ::haxe::Utf8_obj::charCodeAt(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(306)
							int charCode = tmp18;		HX_STACK_VAR(charCode,"charCode");
							HX_STACK_LINE(307)
							int tmp19 = charCode;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(307)
							Dynamic tmp20 = rule->marker.charCodeAt((int)0);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(307)
							bool tmp21 = (tmp19 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(307)
							if ((tmp21)){
								HX_STACK_LINE(309)
								bool tmp22 = start;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(309)
								bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(309)
								if ((tmp23)){
									HX_STACK_LINE(311)
									start = true;
									HX_STACK_LINE(312)
									int tmp24 = charIndex;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(312)
									rangeStarts->push(tmp24);
									HX_STACK_LINE(313)
									::flixel::text::FlxTextFormatMarkerPair tmp25 = rule;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(313)
									rulesToApply->push(tmp25);
								}
								else{
									HX_STACK_LINE(317)
									start = false;
									HX_STACK_LINE(318)
									int tmp24 = charIndex;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(318)
									rangeEnds->push(tmp24);
								}
							}
						}
					}
					HX_STACK_LINE(322)
					bool tmp11 = start;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(322)
					if ((tmp11)){
						HX_STACK_LINE(325)
						rangeEnds->push((int)-1);
					}
				}
				HX_STACK_LINE(328)
				(i)++;
			}
		}
	}
	HX_STACK_LINE(333)
	{
		HX_STACK_LINE(333)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(333)
		while((true)){
			HX_STACK_LINE(333)
			bool tmp3 = (_g < rules->length);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(333)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(333)
			if ((tmp4)){
				HX_STACK_LINE(333)
				break;
			}
			HX_STACK_LINE(333)
			::flixel::text::FlxTextFormatMarkerPair tmp5 = rules->__get(_g).StaticCast< ::flixel::text::FlxTextFormatMarkerPair >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(333)
			::flixel::text::FlxTextFormatMarkerPair rule = tmp5;		HX_STACK_VAR(rule,"rule");
			HX_STACK_LINE(333)
			++(_g);
			HX_STACK_LINE(335)
			while((true)){
				HX_STACK_LINE(335)
				::String tmp6 = rule->marker;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(335)
				int tmp7 = input.indexOf(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(335)
				bool tmp8 = (tmp7 != (int)-1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(335)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(335)
				if ((tmp9)){
					HX_STACK_LINE(335)
					break;
				}
				HX_STACK_LINE(337)
				::String tmp10 = input;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(337)
				::String tmp11 = rule->marker;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(337)
				::String tmp12 = ::StringTools_obj::replace(tmp10,tmp11,HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(337)
				input = tmp12;
			}
		}
	}
	HX_STACK_LINE(342)
	{
		HX_STACK_LINE(342)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(342)
		int _g = rangeStarts->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(342)
		while((true)){
			HX_STACK_LINE(342)
			bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(342)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(342)
			if ((tmp4)){
				HX_STACK_LINE(342)
				break;
			}
			HX_STACK_LINE(342)
			int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(342)
			int i1 = tmp5;		HX_STACK_VAR(i1,"i1");
			HX_STACK_LINE(345)
			int tmp6 = rangeStarts->__get(i1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(345)
			int delIndex = tmp6;		HX_STACK_VAR(delIndex,"delIndex");
			HX_STACK_LINE(347)
			::flixel::text::FlxTextFormatMarkerPair tmp7 = rulesToApply->__get(i1).StaticCast< ::flixel::text::FlxTextFormatMarkerPair >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(347)
			int tmp8 = tmp7->marker.length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(347)
			int markerLength = tmp8;		HX_STACK_VAR(markerLength,"markerLength");
			HX_STACK_LINE(350)
			{
				HX_STACK_LINE(350)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(350)
				int _g2 = rangeStarts->length;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(350)
				while((true)){
					HX_STACK_LINE(350)
					bool tmp9 = (_g3 < _g2);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(350)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(350)
					if ((tmp10)){
						HX_STACK_LINE(350)
						break;
					}
					HX_STACK_LINE(350)
					int tmp11 = (_g3)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(350)
					int j = tmp11;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(352)
					int tmp12 = rangeStarts->__get(j);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(352)
					int tmp13 = delIndex;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(352)
					bool tmp14 = (tmp12 > tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(352)
					if ((tmp14)){
						HX_STACK_LINE(354)
						int tmp15 = markerLength;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(354)
						hx::SubEq(rangeStarts[j],tmp15);
					}
					HX_STACK_LINE(356)
					int tmp15 = rangeEnds->__get(j);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(356)
					int tmp16 = delIndex;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(356)
					bool tmp17 = (tmp15 > tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(356)
					if ((tmp17)){
						HX_STACK_LINE(358)
						int tmp18 = markerLength;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(358)
						hx::SubEq(rangeEnds[j],tmp18);
					}
				}
			}
			HX_STACK_LINE(363)
			int tmp9 = rangeEnds->__get(i1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(363)
			delIndex = tmp9;
			HX_STACK_LINE(366)
			{
				HX_STACK_LINE(366)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(366)
				int _g2 = rangeStarts->length;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(366)
				while((true)){
					HX_STACK_LINE(366)
					bool tmp10 = (_g3 < _g2);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(366)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(366)
					if ((tmp11)){
						HX_STACK_LINE(366)
						break;
					}
					HX_STACK_LINE(366)
					int tmp12 = (_g3)++;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(366)
					int j = tmp12;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(368)
					int tmp13 = rangeStarts->__get(j);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(368)
					int tmp14 = delIndex;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(368)
					bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(368)
					if ((tmp15)){
						HX_STACK_LINE(370)
						int tmp16 = markerLength;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(370)
						hx::SubEq(rangeStarts[j],tmp16);
					}
					HX_STACK_LINE(372)
					int tmp16 = rangeEnds->__get(j);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(372)
					int tmp17 = delIndex;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(372)
					bool tmp18 = (tmp16 > tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(372)
					if ((tmp18)){
						HX_STACK_LINE(374)
						int tmp19 = markerLength;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(374)
						hx::SubEq(rangeEnds[j],tmp19);
					}
				}
			}
		}
	}
	HX_STACK_LINE(380)
	::String tmp3 = input;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(380)
	this->set_text(tmp3);
	HX_STACK_LINE(383)
	{
		HX_STACK_LINE(383)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(383)
		int _g = rangeStarts->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(383)
		while((true)){
			HX_STACK_LINE(383)
			bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(383)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(383)
			if ((tmp5)){
				HX_STACK_LINE(383)
				break;
			}
			HX_STACK_LINE(383)
			int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(383)
			int i1 = tmp6;		HX_STACK_VAR(i1,"i1");
			HX_STACK_LINE(385)
			::flixel::text::FlxTextFormatMarkerPair tmp7 = rulesToApply->__get(i1).StaticCast< ::flixel::text::FlxTextFormatMarkerPair >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(385)
			::flixel::text::FlxTextFormat tmp8 = tmp7->format;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(385)
			int tmp9 = rangeStarts->__get(i1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(385)
			int tmp10 = rangeEnds->__get(i1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(385)
			this->addFormat(tmp8,tmp9,tmp10);
		}
	}
	HX_STACK_LINE(388)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxText_obj,applyMarkup,return )

::flixel::text::FlxText FlxText_obj::addFormat( ::flixel::text::FlxTextFormat Format,hx::Null< int >  __o_Start,hx::Null< int >  __o_End){
int Start = __o_Start.Default(-1);
int End = __o_End.Default(-1);
	HX_STACK_FRAME("flixel.text.FlxText","addFormat",0xc0d9d4fa,"flixel.text.FlxText.addFormat","flixel/text/FlxText.hx",399,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Format,"Format")
	HX_STACK_ARG(Start,"Start")
	HX_STACK_ARG(End,"End")
{
		HX_STACK_LINE(400)
		::flixel::text::_FlxText::FlxTextFormatRange tmp = ::flixel::text::_FlxText::FlxTextFormatRange_obj::__new(Format,Start,End);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(400)
		this->_formatRanges->push(tmp);

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 2; }
		int run(::flixel::text::_FlxText::FlxTextFormatRange left,::flixel::text::_FlxText::FlxTextFormatRange right){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","flixel/text/FlxText.hx",403,0xdf165a6e)
			HX_STACK_ARG(left,"left")
			HX_STACK_ARG(right,"right")
			{
				HX_STACK_LINE(404)
				int tmp1 = left->range->start;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(404)
				int tmp2 = right->range->start;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(404)
				bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(404)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(404)
				if ((tmp3)){
					HX_STACK_LINE(404)
					tmp4 = (int)-1;
				}
				else{
					HX_STACK_LINE(404)
					tmp4 = (int)1;
				}
				HX_STACK_LINE(404)
				return tmp4;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(402)
		this->_formatRanges->sort( Dynamic(new _Function_1_1()));
		HX_STACK_LINE(406)
		this->_regen = true;
		HX_STACK_LINE(408)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxText_obj,addFormat,return )

::flixel::text::FlxText FlxText_obj::removeFormat( ::flixel::text::FlxTextFormat Format,Dynamic Start,Dynamic End){
	HX_STACK_FRAME("flixel.text.FlxText","removeFormat",0xa79a7f19,"flixel.text.FlxText.removeFormat","flixel/text/FlxText.hx",416,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Format,"Format")
	HX_STACK_ARG(Start,"Start")
	HX_STACK_ARG(End,"End")
	HX_STACK_LINE(417)
	{
		HX_STACK_LINE(417)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(417)
		Array< ::Dynamic > _g1 = this->_formatRanges;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(417)
		while((true)){
			HX_STACK_LINE(417)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(417)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(417)
			if ((tmp1)){
				HX_STACK_LINE(417)
				break;
			}
			HX_STACK_LINE(417)
			::flixel::text::_FlxText::FlxTextFormatRange tmp2 = _g1->__get(_g).StaticCast< ::flixel::text::_FlxText::FlxTextFormatRange >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(417)
			::flixel::text::_FlxText::FlxTextFormatRange formatRange = tmp2;		HX_STACK_VAR(formatRange,"formatRange");
			HX_STACK_LINE(417)
			++(_g);
			HX_STACK_LINE(419)
			bool tmp3 = (formatRange->format == Format);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(419)
			if ((tmp3)){
				HX_STACK_LINE(421)
				bool tmp4 = (Start != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(421)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(421)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(421)
				if ((tmp5)){
					HX_STACK_LINE(421)
					tmp6 = (End != null());
				}
				else{
					HX_STACK_LINE(421)
					tmp6 = false;
				}
				HX_STACK_LINE(421)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(421)
				if ((tmp6)){
					HX_STACK_LINE(422)
					Dynamic tmp8 = Start;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(422)
					int tmp9 = formatRange->range->end;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(422)
					int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(422)
					bool tmp11 = (tmp8 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(422)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(422)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(422)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(422)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(422)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(422)
					if ((tmp16)){
						HX_STACK_LINE(422)
						Dynamic tmp17 = End;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(422)
						int tmp18 = formatRange->range->start;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(422)
						int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(422)
						int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(422)
						tmp7 = (tmp17 < tmp20);
					}
					else{
						HX_STACK_LINE(422)
						tmp7 = true;
					}
				}
				else{
					HX_STACK_LINE(421)
					tmp7 = false;
				}
				HX_STACK_LINE(421)
				if ((tmp7)){
					HX_STACK_LINE(424)
					continue;
				}
				HX_STACK_LINE(427)
				::flixel::text::_FlxText::FlxTextFormatRange tmp8 = formatRange;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(427)
				this->_formatRanges->remove(tmp8);
			}
		}
	}
	HX_STACK_LINE(430)
	this->_regen = true;
	HX_STACK_LINE(432)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(FlxText_obj,removeFormat,return )

::flixel::text::FlxText FlxText_obj::clearFormats( ){
	HX_STACK_FRAME("flixel.text.FlxText","clearFormats",0xf58bc7cd,"flixel.text.FlxText.clearFormats","flixel/text/FlxText.hx",439,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(440)
	this->_formatRanges = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(441)
	{
		HX_STACK_LINE(441)
		::openfl::_legacy::text::TextField tmp = this->textField;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(441)
		::openfl::_legacy::text::TextFormat tmp1 = this->_defaultFormat;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(441)
		tmp->set_defaultTextFormat(tmp1);
		HX_STACK_LINE(441)
		::openfl::_legacy::text::TextField tmp2 = this->textField;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(441)
		::openfl::_legacy::text::TextFormat tmp3 = this->_defaultFormat;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(441)
		tmp2->setTextFormat(tmp3,null(),null());
		HX_STACK_LINE(441)
		this->_regen = true;
	}
	HX_STACK_LINE(443)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,clearFormats,return )

::flixel::text::FlxText FlxText_obj::setFormat( ::String Font,hx::Null< int >  __o_Size,hx::Null< int >  __o_Color,::String Alignment,::flixel::text::FlxTextBorderStyle BorderStyle,hx::Null< int >  __o_BorderColor,hx::Null< bool >  __o_Embedded){
int Size = __o_Size.Default(8);
int Color = __o_Color.Default(-1);
int BorderColor = __o_BorderColor.Default(0);
bool Embedded = __o_Embedded.Default(true);
	HX_STACK_FRAME("flixel.text.FlxText","setFormat",0x685d153b,"flixel.text.FlxText.setFormat","flixel/text/FlxText.hx",461,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Font,"Font")
	HX_STACK_ARG(Size,"Size")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Alignment,"Alignment")
	HX_STACK_ARG(BorderStyle,"BorderStyle")
	HX_STACK_ARG(BorderColor,"BorderColor")
	HX_STACK_ARG(Embedded,"Embedded")
{
		HX_STACK_LINE(462)
		bool tmp = (BorderStyle == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(462)
		::flixel::text::FlxTextBorderStyle tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(462)
		if ((tmp)){
			HX_STACK_LINE(462)
			tmp1 = ::flixel::text::FlxTextBorderStyle_obj::NONE;
		}
		else{
			HX_STACK_LINE(462)
			tmp1 = BorderStyle;
		}
		HX_STACK_LINE(462)
		BorderStyle = tmp1;
		HX_STACK_LINE(464)
		bool tmp2 = Embedded;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(464)
		if ((tmp2)){
			HX_STACK_LINE(466)
			::String tmp3 = Font;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(466)
			this->set_font(tmp3);
		}
		else{
			HX_STACK_LINE(468)
			bool tmp3 = (Font != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(468)
			if ((tmp3)){
				HX_STACK_LINE(470)
				::String tmp4 = Font;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(470)
				this->set_systemFont(tmp4);
			}
		}
		HX_STACK_LINE(473)
		int tmp3 = Size;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(473)
		this->set_size(tmp3);
		HX_STACK_LINE(474)
		int tmp4 = Color;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(474)
		this->set_color(tmp4);
		HX_STACK_LINE(475)
		bool tmp5 = (Alignment != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(475)
		if ((tmp5)){
			HX_STACK_LINE(476)
			::String tmp6 = Alignment;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(476)
			this->set_alignment(tmp6);
		}
		HX_STACK_LINE(477)
		{
			HX_STACK_LINE(477)
			Float Size1 = (int)1;		HX_STACK_VAR(Size1,"Size1");
			HX_STACK_LINE(477)
			Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
			HX_STACK_LINE(477)
			::flixel::text::FlxTextBorderStyle tmp6 = BorderStyle;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(477)
			this->set_borderStyle(tmp6);
			HX_STACK_LINE(477)
			int tmp7 = BorderColor;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(477)
			this->set_borderColor(tmp7);
			HX_STACK_LINE(477)
			Float tmp8 = Size1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(477)
			this->set_borderSize(tmp8);
			HX_STACK_LINE(477)
			Float tmp9 = Quality;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(477)
			this->set_borderQuality(tmp9);
			HX_STACK_LINE(477)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(479)
		{
			HX_STACK_LINE(479)
			::openfl::_legacy::text::TextField tmp6 = this->textField;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(479)
			::openfl::_legacy::text::TextFormat tmp7 = this->_defaultFormat;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(479)
			tmp6->set_defaultTextFormat(tmp7);
			HX_STACK_LINE(479)
			::openfl::_legacy::text::TextField tmp8 = this->textField;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(479)
			::openfl::_legacy::text::TextFormat tmp9 = this->_defaultFormat;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(479)
			tmp8->setTextFormat(tmp9,null(),null());
			HX_STACK_LINE(479)
			this->_regen = true;
		}
		HX_STACK_LINE(481)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC7(FlxText_obj,setFormat,return )

::flixel::text::FlxText FlxText_obj::setBorderStyle( ::flixel::text::FlxTextBorderStyle Style,hx::Null< int >  __o_Color,hx::Null< Float >  __o_Size,hx::Null< Float >  __o_Quality){
int Color = __o_Color.Default(0);
Float Size = __o_Size.Default(1);
Float Quality = __o_Quality.Default(1);
	HX_STACK_FRAME("flixel.text.FlxText","setBorderStyle",0x26cf9c21,"flixel.text.FlxText.setBorderStyle","flixel/text/FlxText.hx",493,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Style,"Style")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Size,"Size")
	HX_STACK_ARG(Quality,"Quality")
{
		HX_STACK_LINE(494)
		::flixel::text::FlxTextBorderStyle tmp = Style;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(494)
		this->set_borderStyle(tmp);
		HX_STACK_LINE(495)
		int tmp1 = Color;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(495)
		this->set_borderColor(tmp1);
		HX_STACK_LINE(496)
		Float tmp2 = Size;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(496)
		this->set_borderSize(tmp2);
		HX_STACK_LINE(497)
		Float tmp3 = Quality;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(497)
		this->set_borderQuality(tmp3);
		HX_STACK_LINE(499)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxText_obj,setBorderStyle,return )

Float FlxText_obj::set_fieldWidth( Float value){
	HX_STACK_FRAME("flixel.text.FlxText","set_fieldWidth",0x9c758fa7,"flixel.text.FlxText.set_fieldWidth","flixel/text/FlxText.hx",503,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(504)
	::openfl::_legacy::text::TextField tmp = this->textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(504)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(504)
	if ((tmp1)){
		HX_STACK_LINE(506)
		bool tmp2 = (value <= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(506)
		if ((tmp2)){
			HX_STACK_LINE(508)
			this->set_wordWrap(false);
			HX_STACK_LINE(509)
			this->set_autoSize(true);
		}
		else{
			HX_STACK_LINE(513)
			this->set_autoSize(false);
			HX_STACK_LINE(514)
			this->set_wordWrap(true);
			HX_STACK_LINE(515)
			::openfl::_legacy::text::TextField tmp3 = this->textField;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(515)
			Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(515)
			tmp3->set_width(tmp4);
		}
		HX_STACK_LINE(518)
		this->_regen = true;
	}
	HX_STACK_LINE(521)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(521)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_fieldWidth,return )

Float FlxText_obj::get_fieldWidth( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_fieldWidth",0x7c55a733,"flixel.text.FlxText.get_fieldWidth","flixel/text/FlxText.hx",525,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(526)
	::openfl::_legacy::text::TextField tmp = this->textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(526)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(526)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(526)
	if ((tmp1)){
		HX_STACK_LINE(526)
		::openfl::_legacy::text::TextField tmp3 = this->textField;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(526)
		tmp2 = tmp3->get_width();
	}
	else{
		HX_STACK_LINE(526)
		tmp2 = (int)0;
	}
	HX_STACK_LINE(526)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_fieldWidth,return )

bool FlxText_obj::set_autoSize( bool value){
	HX_STACK_FRAME("flixel.text.FlxText","set_autoSize",0x346abbcb,"flixel.text.FlxText.set_autoSize","flixel/text/FlxText.hx",530,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(531)
	::openfl::_legacy::text::TextField tmp = this->textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(531)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(531)
	if ((tmp1)){
		HX_STACK_LINE(533)
		::openfl::_legacy::text::TextField tmp2 = this->textField;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(533)
		bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(533)
		::openfl::_legacy::text::TextFieldAutoSize tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(533)
		if ((tmp3)){
			HX_STACK_LINE(533)
			tmp4 = ::openfl::_legacy::text::TextFieldAutoSize_obj::LEFT;
		}
		else{
			HX_STACK_LINE(533)
			tmp4 = ::openfl::_legacy::text::TextFieldAutoSize_obj::NONE;
		}
		HX_STACK_LINE(533)
		tmp2->set_autoSize(tmp4);
		HX_STACK_LINE(534)
		this->_regen = true;
	}
	HX_STACK_LINE(537)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(537)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_autoSize,return )

bool FlxText_obj::get_autoSize( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_autoSize",0x1f719857,"flixel.text.FlxText.get_autoSize","flixel/text/FlxText.hx",541,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(542)
	::openfl::_legacy::text::TextField tmp = this->textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(542)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(542)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(542)
	if ((tmp1)){
		HX_STACK_LINE(542)
		::openfl::_legacy::text::TextField tmp3 = this->textField;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(542)
		::openfl::_legacy::text::TextFieldAutoSize tmp4 = tmp3->get_autoSize();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(542)
		tmp2 = (tmp4 != ::openfl::_legacy::text::TextFieldAutoSize_obj::NONE);
	}
	else{
		HX_STACK_LINE(542)
		tmp2 = false;
	}
	HX_STACK_LINE(542)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_autoSize,return )

::String FlxText_obj::set_text( ::String Text){
	HX_STACK_FRAME("flixel.text.FlxText","set_text",0xb6d09f28,"flixel.text.FlxText.set_text","flixel/text/FlxText.hx",546,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Text,"Text")
	HX_STACK_LINE(547)
	this->text = Text;
	HX_STACK_LINE(548)
	::openfl::_legacy::text::TextField tmp = this->textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(548)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(548)
	if ((tmp1)){
		HX_STACK_LINE(550)
		::openfl::_legacy::text::TextField tmp2 = this->textField;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(550)
		::String tmp3 = tmp2->get_text();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(550)
		::String ot = tmp3;		HX_STACK_VAR(ot,"ot");
		HX_STACK_LINE(551)
		::openfl::_legacy::text::TextField tmp4 = this->textField;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(551)
		::String tmp5 = Text;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(551)
		tmp4->set_text(tmp5);
		HX_STACK_LINE(552)
		::openfl::_legacy::text::TextField tmp6 = this->textField;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(552)
		::String tmp7 = tmp6->get_text();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(552)
		::String tmp8 = ot;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(552)
		bool tmp9 = (tmp7 != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(552)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(552)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(552)
		if ((tmp10)){
			HX_STACK_LINE(552)
			tmp11 = this->_regen;
		}
		else{
			HX_STACK_LINE(552)
			tmp11 = true;
		}
		HX_STACK_LINE(552)
		this->_regen = tmp11;
	}
	HX_STACK_LINE(554)
	::String tmp2 = Text;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(554)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_text,return )

int FlxText_obj::get_size( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_size",0x07cd19c8,"flixel.text.FlxText.get_size","flixel/text/FlxText.hx",558,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(559)
	::openfl::_legacy::text::TextFormat tmp = this->_defaultFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(559)
	Dynamic tmp1 = tmp->size;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(559)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(559)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_size,return )

int FlxText_obj::set_size( int Size){
	HX_STACK_FRAME("flixel.text.FlxText","set_size",0xb62a733c,"flixel.text.FlxText.set_size","flixel/text/FlxText.hx",563,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Size,"Size")
	HX_STACK_LINE(564)
	::openfl::_legacy::text::TextFormat tmp = this->_defaultFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(564)
	tmp->size = Size;
	HX_STACK_LINE(565)
	{
		HX_STACK_LINE(565)
		::openfl::_legacy::text::TextField tmp1 = this->textField;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(565)
		::openfl::_legacy::text::TextFormat tmp2 = this->_defaultFormat;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(565)
		tmp1->set_defaultTextFormat(tmp2);
		HX_STACK_LINE(565)
		::openfl::_legacy::text::TextField tmp3 = this->textField;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(565)
		::openfl::_legacy::text::TextFormat tmp4 = this->_defaultFormat;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(565)
		tmp3->setTextFormat(tmp4,null(),null());
		HX_STACK_LINE(565)
		this->_regen = true;
	}
	HX_STACK_LINE(566)
	int tmp1 = Size;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(566)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_size,return )

int FlxText_obj::set_color( int Color){
	HX_STACK_FRAME("flixel.text.FlxText","set_color",0x7c7dca88,"flixel.text.FlxText.set_color","flixel/text/FlxText.hx",570,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(571)
	::openfl::_legacy::text::TextFormat tmp = this->_defaultFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(571)
	Dynamic tmp1 = tmp->color;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(571)
	int tmp2 = (int(Color) & int((int)16777215));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(571)
	int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(571)
	bool tmp4 = (tmp1 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(571)
	if ((tmp4)){
		HX_STACK_LINE(573)
		int tmp5 = Color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(573)
		return tmp5;
	}
	HX_STACK_LINE(575)
	int tmp5 = (int(Color) & int((int)16777215));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(575)
	::openfl::_legacy::text::TextFormat tmp6 = this->_defaultFormat;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(575)
	tmp6->color = tmp5;
	HX_STACK_LINE(576)
	this->color = Color;
	HX_STACK_LINE(577)
	{
		HX_STACK_LINE(577)
		::openfl::_legacy::text::TextField tmp7 = this->textField;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(577)
		::openfl::_legacy::text::TextFormat tmp8 = this->_defaultFormat;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(577)
		tmp7->set_defaultTextFormat(tmp8);
		HX_STACK_LINE(577)
		::openfl::_legacy::text::TextField tmp9 = this->textField;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(577)
		::openfl::_legacy::text::TextFormat tmp10 = this->_defaultFormat;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(577)
		tmp9->setTextFormat(tmp10,null(),null());
		HX_STACK_LINE(577)
		this->_regen = true;
	}
	HX_STACK_LINE(578)
	int tmp7 = Color;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(578)
	return tmp7;
}


::String FlxText_obj::get_font( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_font",0xff39d6d6,"flixel.text.FlxText.get_font","flixel/text/FlxText.hx",582,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(583)
	::String tmp = this->_font;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(583)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_font,return )

::String FlxText_obj::set_font( ::String Font){
	HX_STACK_FRAME("flixel.text.FlxText","set_font",0xad97304a,"flixel.text.FlxText.set_font","flixel/text/FlxText.hx",587,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Font,"Font")
	HX_STACK_LINE(588)
	::openfl::_legacy::text::TextField tmp = this->textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(588)
	tmp->set_embedFonts(true);
	HX_STACK_LINE(590)
	bool tmp1 = (Font != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(590)
	if ((tmp1)){
		HX_STACK_LINE(592)
		::String newFontName = Font;		HX_STACK_VAR(newFontName,"newFontName");
		HX_STACK_LINE(593)
		::String tmp2 = Font;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(593)
		bool tmp3 = ::openfl::_legacy::Assets_obj::exists(tmp2,::openfl::_legacy::AssetType_obj::FONT);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(593)
		if ((tmp3)){
			HX_STACK_LINE(595)
			::String tmp4 = Font;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(595)
			::openfl::_legacy::text::Font tmp5 = ::openfl::_legacy::Assets_obj::getFont(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(595)
			newFontName = tmp5->fontName;
		}
		HX_STACK_LINE(598)
		::openfl::_legacy::text::TextFormat tmp4 = this->_defaultFormat;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(598)
		tmp4->font = newFontName;
	}
	else{
		HX_STACK_LINE(602)
		::String tmp2 = ::flixel::_system::FlxAssets_obj::FONT_DEFAULT;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(602)
		::openfl::_legacy::text::TextFormat tmp3 = this->_defaultFormat;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(602)
		tmp3->font = tmp2;
	}
	HX_STACK_LINE(605)
	{
		HX_STACK_LINE(605)
		::openfl::_legacy::text::TextField tmp2 = this->textField;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(605)
		::openfl::_legacy::text::TextFormat tmp3 = this->_defaultFormat;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(605)
		tmp2->set_defaultTextFormat(tmp3);
		HX_STACK_LINE(605)
		::openfl::_legacy::text::TextField tmp4 = this->textField;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(605)
		::openfl::_legacy::text::TextFormat tmp5 = this->_defaultFormat;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(605)
		tmp4->setTextFormat(tmp5,null(),null());
		HX_STACK_LINE(605)
		this->_regen = true;
	}
	HX_STACK_LINE(606)
	::openfl::_legacy::text::TextFormat tmp2 = this->_defaultFormat;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(606)
	::String tmp3 = this->_font = tmp2->font;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(606)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_font,return )

bool FlxText_obj::get_embedded( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_embedded",0xce5a2211,"flixel.text.FlxText.get_embedded","flixel/text/FlxText.hx",610,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(611)
	::openfl::_legacy::text::TextField tmp = this->textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(611)
	bool tmp1 = tmp->set_embedFonts(true);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(611)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_embedded,return )

::String FlxText_obj::get_systemFont( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_systemFont",0xd6b43ca5,"flixel.text.FlxText.get_systemFont","flixel/text/FlxText.hx",615,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(616)
	::openfl::_legacy::text::TextFormat tmp = this->_defaultFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(616)
	::String tmp1 = tmp->font;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(616)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_systemFont,return )

::String FlxText_obj::set_systemFont( ::String Font){
	HX_STACK_FRAME("flixel.text.FlxText","set_systemFont",0xf6d42519,"flixel.text.FlxText.set_systemFont","flixel/text/FlxText.hx",620,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Font,"Font")
	HX_STACK_LINE(621)
	::openfl::_legacy::text::TextField tmp = this->textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(621)
	tmp->set_embedFonts(false);
	HX_STACK_LINE(622)
	::openfl::_legacy::text::TextFormat tmp1 = this->_defaultFormat;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(622)
	tmp1->font = Font;
	HX_STACK_LINE(623)
	{
		HX_STACK_LINE(623)
		::openfl::_legacy::text::TextField tmp2 = this->textField;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(623)
		::openfl::_legacy::text::TextFormat tmp3 = this->_defaultFormat;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(623)
		tmp2->set_defaultTextFormat(tmp3);
		HX_STACK_LINE(623)
		::openfl::_legacy::text::TextField tmp4 = this->textField;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(623)
		::openfl::_legacy::text::TextFormat tmp5 = this->_defaultFormat;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(623)
		tmp4->setTextFormat(tmp5,null(),null());
		HX_STACK_LINE(623)
		this->_regen = true;
	}
	HX_STACK_LINE(624)
	::String tmp2 = Font;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(624)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_systemFont,return )

bool FlxText_obj::get_bold( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_bold",0xfc94fa8c,"flixel.text.FlxText.get_bold","flixel/text/FlxText.hx",628,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(629)
	::openfl::_legacy::text::TextFormat tmp = this->_defaultFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(629)
	Dynamic tmp1 = tmp->bold;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(629)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_bold,return )

bool FlxText_obj::set_bold( bool value){
	HX_STACK_FRAME("flixel.text.FlxText","set_bold",0xaaf25400,"flixel.text.FlxText.set_bold","flixel/text/FlxText.hx",633,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(634)
	::openfl::_legacy::text::TextFormat tmp = this->_defaultFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(634)
	Dynamic tmp1 = tmp->bold;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(634)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(634)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(634)
	if ((tmp3)){
		HX_STACK_LINE(636)
		::openfl::_legacy::text::TextFormat tmp4 = this->_defaultFormat;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(636)
		tmp4->bold = value;
		HX_STACK_LINE(637)
		{
			HX_STACK_LINE(637)
			::openfl::_legacy::text::TextField tmp5 = this->textField;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(637)
			::openfl::_legacy::text::TextFormat tmp6 = this->_defaultFormat;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(637)
			tmp5->set_defaultTextFormat(tmp6);
			HX_STACK_LINE(637)
			::openfl::_legacy::text::TextField tmp7 = this->textField;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(637)
			::openfl::_legacy::text::TextFormat tmp8 = this->_defaultFormat;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(637)
			tmp7->setTextFormat(tmp8,null(),null());
			HX_STACK_LINE(637)
			this->_regen = true;
		}
	}
	HX_STACK_LINE(639)
	bool tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(639)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_bold,return )

bool FlxText_obj::get_italic( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_italic",0xadf337b7,"flixel.text.FlxText.get_italic","flixel/text/FlxText.hx",643,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(644)
	::openfl::_legacy::text::TextFormat tmp = this->_defaultFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(644)
	Dynamic tmp1 = tmp->italic;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(644)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_italic,return )

bool FlxText_obj::set_italic( bool value){
	HX_STACK_FRAME("flixel.text.FlxText","set_italic",0xb170d62b,"flixel.text.FlxText.set_italic","flixel/text/FlxText.hx",648,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(649)
	::openfl::_legacy::text::TextFormat tmp = this->_defaultFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(649)
	Dynamic tmp1 = tmp->italic;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(649)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(649)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(649)
	if ((tmp3)){
		HX_STACK_LINE(651)
		::openfl::_legacy::text::TextFormat tmp4 = this->_defaultFormat;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(651)
		tmp4->italic = value;
		HX_STACK_LINE(652)
		{
			HX_STACK_LINE(652)
			::openfl::_legacy::text::TextField tmp5 = this->textField;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(652)
			::openfl::_legacy::text::TextFormat tmp6 = this->_defaultFormat;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(652)
			tmp5->set_defaultTextFormat(tmp6);
			HX_STACK_LINE(652)
			::openfl::_legacy::text::TextField tmp7 = this->textField;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(652)
			::openfl::_legacy::text::TextFormat tmp8 = this->_defaultFormat;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(652)
			tmp7->setTextFormat(tmp8,null(),null());
			HX_STACK_LINE(652)
			this->_regen = true;
		}
	}
	HX_STACK_LINE(654)
	bool tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(654)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_italic,return )

bool FlxText_obj::get_wordWrap( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_wordWrap",0xf0d31d3b,"flixel.text.FlxText.get_wordWrap","flixel/text/FlxText.hx",658,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(659)
	::openfl::_legacy::text::TextField tmp = this->textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(659)
	bool tmp1 = tmp->get_wordWrap();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(659)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_wordWrap,return )

bool FlxText_obj::set_wordWrap( bool value){
	HX_STACK_FRAME("flixel.text.FlxText","set_wordWrap",0x05cc40af,"flixel.text.FlxText.set_wordWrap","flixel/text/FlxText.hx",663,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(664)
	::openfl::_legacy::text::TextField tmp = this->textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(664)
	bool tmp1 = tmp->get_wordWrap();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(664)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(664)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(664)
	if ((tmp3)){
		HX_STACK_LINE(666)
		::openfl::_legacy::text::TextField tmp4 = this->textField;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(666)
		bool tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(666)
		tmp4->set_wordWrap(tmp5);
		HX_STACK_LINE(667)
		this->_regen = true;
	}
	HX_STACK_LINE(669)
	bool tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(669)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_wordWrap,return )

::String FlxText_obj::get_alignment( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_alignment",0xf34d507c,"flixel.text.FlxText.get_alignment","flixel/text/FlxText.hx",673,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(674)
	::openfl::_legacy::text::TextFormat tmp = this->_defaultFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(674)
	::String tmp1 = tmp->align;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(674)
	::String tmp2 = ::flixel::text::_FlxText::FlxTextAlign_Impl__obj::fromOpenFL(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(674)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_alignment,return )

::String FlxText_obj::set_alignment( ::String Alignment){
	HX_STACK_FRAME("flixel.text.FlxText","set_alignment",0x38533288,"flixel.text.FlxText.set_alignment","flixel/text/FlxText.hx",678,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Alignment,"Alignment")
	HX_STACK_LINE(679)
	::String tmp = Alignment;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(679)
	::String tmp1 = ::flixel::text::_FlxText::FlxTextAlign_Impl__obj::toOpenFL(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(679)
	::openfl::_legacy::text::TextFormat tmp2 = this->_defaultFormat;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(679)
	tmp2->align = tmp1;
	HX_STACK_LINE(680)
	{
		HX_STACK_LINE(680)
		::openfl::_legacy::text::TextField tmp3 = this->textField;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(680)
		::openfl::_legacy::text::TextFormat tmp4 = this->_defaultFormat;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(680)
		tmp3->set_defaultTextFormat(tmp4);
		HX_STACK_LINE(680)
		::openfl::_legacy::text::TextField tmp5 = this->textField;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(680)
		::openfl::_legacy::text::TextFormat tmp6 = this->_defaultFormat;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(680)
		tmp5->setTextFormat(tmp6,null(),null());
		HX_STACK_LINE(680)
		this->_regen = true;
	}
	HX_STACK_LINE(681)
	::String tmp3 = Alignment;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(681)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_alignment,return )

::flixel::text::FlxTextBorderStyle FlxText_obj::set_borderStyle( ::flixel::text::FlxTextBorderStyle style){
	HX_STACK_FRAME("flixel.text.FlxText","set_borderStyle",0x0a5ab38a,"flixel.text.FlxText.set_borderStyle","flixel/text/FlxText.hx",685,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(style,"style")
	HX_STACK_LINE(686)
	::flixel::text::FlxTextBorderStyle tmp = style;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(686)
	::flixel::text::FlxTextBorderStyle tmp1 = this->borderStyle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(686)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(686)
	if ((tmp2)){
		HX_STACK_LINE(687)
		this->_regen = true;
	}
	HX_STACK_LINE(689)
	::flixel::text::FlxTextBorderStyle tmp3 = this->borderStyle = style;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(689)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderStyle,return )

int FlxText_obj::set_borderColor( int Color){
	HX_STACK_FRAME("flixel.text.FlxText","set_borderColor",0xd0997fbc,"flixel.text.FlxText.set_borderColor","flixel/text/FlxText.hx",693,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(694)
	int tmp = this->borderColor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(694)
	int tmp1 = Color;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(694)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(694)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(694)
	if ((tmp2)){
		HX_STACK_LINE(694)
		::flixel::text::FlxTextBorderStyle tmp4 = this->borderStyle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(694)
		::flixel::text::FlxTextBorderStyle tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(694)
		tmp3 = (tmp5 != ::flixel::text::FlxTextBorderStyle_obj::NONE);
	}
	else{
		HX_STACK_LINE(694)
		tmp3 = false;
	}
	HX_STACK_LINE(694)
	if ((tmp3)){
		HX_STACK_LINE(695)
		this->_regen = true;
	}
	HX_STACK_LINE(696)
	int tmp4 = (int(Color) >> int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(696)
	int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(696)
	Float tmp6 = (Float(tmp5) / Float((int)255));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(696)
	bool tmp7 = (tmp6 < (int)1);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(696)
	this->_hasBorderAlpha = tmp7;
	HX_STACK_LINE(697)
	int tmp8 = this->borderColor = Color;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(697)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderColor,return )

Float FlxText_obj::set_borderSize( Float Value){
	HX_STACK_FRAME("flixel.text.FlxText","set_borderSize",0x0b7e6088,"flixel.text.FlxText.set_borderSize","flixel/text/FlxText.hx",701,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(702)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(702)
	Float tmp1 = this->borderSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(702)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(702)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(702)
	if ((tmp2)){
		HX_STACK_LINE(702)
		::flixel::text::FlxTextBorderStyle tmp4 = this->borderStyle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(702)
		::flixel::text::FlxTextBorderStyle tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(702)
		tmp3 = (tmp5 != ::flixel::text::FlxTextBorderStyle_obj::NONE);
	}
	else{
		HX_STACK_LINE(702)
		tmp3 = false;
	}
	HX_STACK_LINE(702)
	if ((tmp3)){
		HX_STACK_LINE(703)
		this->_regen = true;
	}
	HX_STACK_LINE(705)
	Float tmp4 = this->borderSize = Value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(705)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderSize,return )

Float FlxText_obj::set_borderQuality( Float Value){
	HX_STACK_FRAME("flixel.text.FlxText","set_borderQuality",0x9eac1b58,"flixel.text.FlxText.set_borderQuality","flixel/text/FlxText.hx",709,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(710)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(710)
	{
		HX_STACK_LINE(710)
		bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(710)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(710)
		if ((tmp1)){
			HX_STACK_LINE(710)
			tmp2 = (Value < (int)0);
		}
		else{
			HX_STACK_LINE(710)
			tmp2 = false;
		}
		HX_STACK_LINE(710)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(710)
		if ((tmp2)){
			HX_STACK_LINE(710)
			tmp3 = (int)0;
		}
		else{
			HX_STACK_LINE(710)
			tmp3 = Value;
		}
		HX_STACK_LINE(710)
		Float lowerBound = tmp3;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(710)
		bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(710)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(710)
		if ((tmp4)){
			HX_STACK_LINE(710)
			tmp5 = (lowerBound > (int)1);
		}
		else{
			HX_STACK_LINE(710)
			tmp5 = false;
		}
		HX_STACK_LINE(710)
		if ((tmp5)){
			HX_STACK_LINE(710)
			tmp = (int)1;
		}
		else{
			HX_STACK_LINE(710)
			tmp = lowerBound;
		}
	}
	HX_STACK_LINE(710)
	Value = ((Float)(tmp));
	HX_STACK_LINE(711)
	Float tmp1 = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(711)
	Float tmp2 = this->borderQuality;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(711)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(711)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(711)
	if ((tmp3)){
		HX_STACK_LINE(711)
		::flixel::text::FlxTextBorderStyle tmp5 = this->borderStyle;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(711)
		::flixel::text::FlxTextBorderStyle tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(711)
		tmp4 = (tmp6 != ::flixel::text::FlxTextBorderStyle_obj::NONE);
	}
	else{
		HX_STACK_LINE(711)
		tmp4 = false;
	}
	HX_STACK_LINE(711)
	if ((tmp4)){
		HX_STACK_LINE(712)
		this->_regen = true;
	}
	HX_STACK_LINE(714)
	Float tmp5 = this->borderQuality = Value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(714)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderQuality,return )

::flixel::graphics::FlxGraphic FlxText_obj::set_graphic( ::flixel::graphics::FlxGraphic Value){
	HX_STACK_FRAME("flixel.text.FlxText","set_graphic",0x740d070d,"flixel.text.FlxText.set_graphic","flixel/text/FlxText.hx",718,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(719)
	::flixel::graphics::FlxGraphic tmp = this->graphic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(719)
	::flixel::graphics::FlxGraphic oldGraphic = tmp;		HX_STACK_VAR(oldGraphic,"oldGraphic");
	HX_STACK_LINE(720)
	::flixel::graphics::FlxGraphic tmp1 = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(720)
	::flixel::graphics::FlxGraphic tmp2 = this->super::set_graphic(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(720)
	::flixel::graphics::FlxGraphic graph = tmp2;		HX_STACK_VAR(graph,"graph");
	HX_STACK_LINE(721)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp3 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(721)
	::flixel::graphics::FlxGraphic tmp4 = oldGraphic;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(721)
	tmp3->__Field(HX_HCSTRING("removeIfNoUse","\x85","\xb1","\x4f","\xe2"), hx::paccDynamic )(tmp4);
	HX_STACK_LINE(722)
	::flixel::graphics::FlxGraphic tmp5 = graph;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(722)
	return tmp5;
}


Float FlxText_obj::get_width( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_width",0x1933231f,"flixel.text.FlxText.get_width","flixel/text/FlxText.hx",726,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(727)
	this->regenGraphic();
	HX_STACK_LINE(728)
	Float tmp = this->super::get_width();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(728)
	return tmp;
}


Float FlxText_obj::get_height( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_height",0xa9db10ae,"flixel.text.FlxText.get_height","flixel/text/FlxText.hx",732,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(733)
	this->regenGraphic();
	HX_STACK_LINE(734)
	Float tmp = this->super::get_height();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(734)
	return tmp;
}


Void FlxText_obj::updateColorTransform( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","updateColorTransform",0x81f611f0,"flixel.text.FlxText.updateColorTransform","flixel/text/FlxText.hx",738,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(739)
		::openfl::_legacy::geom::ColorTransform tmp = this->colorTransform;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(739)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(739)
		if ((tmp1)){
			HX_STACK_LINE(740)
			::openfl::_legacy::geom::ColorTransform tmp2 = ::openfl::_legacy::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(740)
			this->colorTransform = tmp2;
		}
		HX_STACK_LINE(742)
		Float tmp2 = this->alpha;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(742)
		bool tmp3 = (tmp2 != (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(742)
		if ((tmp3)){
			HX_STACK_LINE(744)
			Float tmp4 = this->alpha;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(744)
			::openfl::_legacy::geom::ColorTransform tmp5 = this->colorTransform;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(744)
			tmp5->alphaMultiplier = tmp4;
			HX_STACK_LINE(745)
			this->useColorTransform = true;
		}
		else{
			HX_STACK_LINE(749)
			::openfl::_legacy::geom::ColorTransform tmp4 = this->colorTransform;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(749)
			tmp4->alphaMultiplier = (int)1;
			HX_STACK_LINE(750)
			this->useColorTransform = false;
		}
		HX_STACK_LINE(753)
		this->dirty = true;
	}
return null();
}


Void FlxText_obj::regenGraphic( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","regenGraphic",0xc617a9e9,"flixel.text.FlxText.regenGraphic","flixel/text/FlxText.hx",757,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(758)
		::openfl::_legacy::text::TextField tmp = this->textField;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(758)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(758)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(758)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(758)
		if ((tmp2)){
			HX_STACK_LINE(758)
			bool tmp4 = this->_regen;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(758)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(758)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(758)
			tmp3 = !(tmp6);
		}
		else{
			HX_STACK_LINE(758)
			tmp3 = true;
		}
		HX_STACK_LINE(758)
		if ((tmp3)){
			HX_STACK_LINE(759)
			return null();
		}
		HX_STACK_LINE(761)
		int oldWidth = (int)0;		HX_STACK_VAR(oldWidth,"oldWidth");
		HX_STACK_LINE(762)
		int oldHeight = (int)4;		HX_STACK_VAR(oldHeight,"oldHeight");
		HX_STACK_LINE(764)
		::flixel::graphics::FlxGraphic tmp4 = this->graphic;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(764)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(764)
		if ((tmp5)){
			HX_STACK_LINE(766)
			::flixel::graphics::FlxGraphic tmp6 = this->graphic;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(766)
			oldWidth = tmp6->width;
			HX_STACK_LINE(767)
			::flixel::graphics::FlxGraphic tmp7 = this->graphic;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(767)
			oldHeight = tmp7->height;
		}
		HX_STACK_LINE(770)
		::openfl::_legacy::text::TextField tmp6 = this->textField;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(770)
		Float tmp7 = tmp6->get_width();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(770)
		Float newWidth = tmp7;		HX_STACK_VAR(newWidth,"newWidth");
		HX_STACK_LINE(772)
		::openfl::_legacy::text::TextField tmp8 = this->textField;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(772)
		Float tmp9 = tmp8->get_textHeight();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(772)
		Float tmp10 = (tmp9 + (int)4);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(772)
		Float newHeight = tmp10;		HX_STACK_VAR(newHeight,"newHeight");
		HX_STACK_LINE(775)
		::openfl::_legacy::text::TextField tmp11 = this->textField;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(775)
		Float tmp12 = tmp11->get_textHeight();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(775)
		bool tmp13 = (tmp12 == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(775)
		if ((tmp13)){
			HX_STACK_LINE(777)
			newHeight = oldHeight;
		}
		HX_STACK_LINE(780)
		bool tmp14 = (oldWidth != newWidth);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(780)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(780)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(780)
		if ((tmp15)){
			HX_STACK_LINE(780)
			tmp16 = (oldHeight != newHeight);
		}
		else{
			HX_STACK_LINE(780)
			tmp16 = true;
		}
		HX_STACK_LINE(780)
		if ((tmp16)){
			HX_STACK_LINE(783)
			Float tmp17 = newHeight;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(783)
			this->set_height(tmp17);
			HX_STACK_LINE(784)
			::flixel::_system::frontEnds::BitmapFrontEnd tmp18 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(784)
			::String tmp19 = tmp18->__Field(HX_HCSTRING("getUniqueKey","\x98","\xcb","\xd7","\xe8"), hx::paccDynamic )(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(784)
			::String key = tmp19;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(786)
			Float tmp20 = newWidth;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(786)
			int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(786)
			Float tmp22 = newHeight;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(786)
			int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(786)
			::String tmp24 = key;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(786)
			this->makeGraphic(tmp21,tmp23,(int)0,false,tmp24);
			HX_STACK_LINE(787)
			bool tmp25 = this->_hasBorderAlpha;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(787)
			if ((tmp25)){
				HX_STACK_LINE(788)
				::flixel::graphics::FlxGraphic tmp26 = this->graphic;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(788)
				::openfl::_legacy::display::BitmapData tmp27 = tmp26->bitmap->clone();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(788)
				this->_borderPixels = tmp27;
			}
			HX_STACK_LINE(789)
			Float tmp26 = this->get_height();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(789)
			int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(789)
			this->frameHeight = tmp27;
			HX_STACK_LINE(790)
			::openfl::_legacy::text::TextField tmp28 = this->textField;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(790)
			Float tmp29 = this->get_height();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(790)
			Float tmp30 = (tmp29 * ((Float)1.2));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(790)
			tmp28->set_height(tmp30);
			HX_STACK_LINE(791)
			::openfl::_legacy::geom::Rectangle tmp31 = this->_flashRect;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(791)
			tmp31->x = (int)0;
			HX_STACK_LINE(792)
			::openfl::_legacy::geom::Rectangle tmp32 = this->_flashRect;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(792)
			tmp32->y = (int)0;
			HX_STACK_LINE(793)
			::openfl::_legacy::geom::Rectangle tmp33 = this->_flashRect;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(793)
			tmp33->width = newWidth;
			HX_STACK_LINE(794)
			::openfl::_legacy::geom::Rectangle tmp34 = this->_flashRect;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(794)
			tmp34->height = newHeight;
		}
		else{
			HX_STACK_LINE(798)
			::flixel::graphics::FlxGraphic tmp17 = this->graphic;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(798)
			::openfl::_legacy::geom::Rectangle tmp18 = this->_flashRect;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(798)
			tmp17->bitmap->fillRect(tmp18,(int)0);
			HX_STACK_LINE(799)
			bool tmp19 = this->_hasBorderAlpha;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(799)
			if ((tmp19)){
				HX_STACK_LINE(801)
				::openfl::_legacy::display::BitmapData tmp20 = this->_borderPixels;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(801)
				bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(801)
				if ((tmp21)){
					HX_STACK_LINE(802)
					int tmp22 = this->frameWidth;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(802)
					int tmp23 = this->frameHeight;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(802)
					::openfl::_legacy::display::BitmapData tmp24 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp22,tmp23,true,null(),null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(802)
					this->_borderPixels = tmp24;
				}
				else{
					HX_STACK_LINE(804)
					::openfl::_legacy::display::BitmapData tmp22 = this->_borderPixels;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(804)
					::openfl::_legacy::geom::Rectangle tmp23 = this->_flashRect;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(804)
					tmp22->fillRect(tmp23,(int)0);
				}
			}
		}
		HX_STACK_LINE(808)
		::openfl::_legacy::text::TextField tmp17 = this->textField;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(808)
		bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(808)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(808)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(808)
		if ((tmp19)){
			HX_STACK_LINE(808)
			::openfl::_legacy::text::TextField tmp21 = this->textField;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(808)
			::openfl::_legacy::text::TextField tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(808)
			::openfl::_legacy::text::TextField tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(808)
			::String tmp24 = tmp23->get_text();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(808)
			::String tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(808)
			::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(808)
			tmp20 = (tmp26 != null());
		}
		else{
			HX_STACK_LINE(808)
			tmp20 = false;
		}
		HX_STACK_LINE(808)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(808)
		if ((tmp20)){
			HX_STACK_LINE(808)
			::openfl::_legacy::text::TextField tmp22 = this->textField;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(808)
			::openfl::_legacy::text::TextField tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(808)
			::String tmp24 = tmp23->get_text();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(808)
			::String tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(808)
			int tmp26 = tmp25.length;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(808)
			tmp21 = (tmp26 > (int)0);
		}
		else{
			HX_STACK_LINE(808)
			tmp21 = false;
		}
		HX_STACK_LINE(808)
		if ((tmp21)){
			HX_STACK_LINE(811)
			::openfl::_legacy::text::TextFormat tmp22 = this->_defaultFormat;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(811)
			::openfl::_legacy::text::TextFormat tmp23 = this->_formatAdjusted;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(811)
			this->copyTextFormat(tmp22,tmp23,null());
			HX_STACK_LINE(813)
			::flixel::math::FlxMatrix tmp24 = this->_matrix;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(813)
			tmp24->identity();
			HX_STACK_LINE(815)
			this->applyBorderStyle();
			HX_STACK_LINE(816)
			{
				HX_STACK_LINE(816)
				bool tmp25 = this->_hasBorderAlpha;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(816)
				bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(816)
				if ((tmp26)){
					HX_STACK_LINE(816)
					Dynamic();
				}
				else{
					HX_STACK_LINE(816)
					::openfl::_legacy::geom::ColorTransform tmp27 = this->_borderColorTransform;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(816)
					bool tmp28 = (tmp27 == null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(816)
					if ((tmp28)){
						HX_STACK_LINE(816)
						::openfl::_legacy::geom::ColorTransform tmp29 = ::openfl::_legacy::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(816)
						this->_borderColorTransform = tmp29;
					}
					HX_STACK_LINE(816)
					int tmp29 = this->borderColor;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(816)
					int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(816)
					int tmp31 = (int(tmp30) >> int((int)24));		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(816)
					int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(816)
					Float tmp33 = (Float(tmp32) / Float((int)255));		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(816)
					::openfl::_legacy::geom::ColorTransform tmp34 = this->_borderColorTransform;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(816)
					tmp34->alphaMultiplier = tmp33;
					HX_STACK_LINE(816)
					::openfl::_legacy::display::BitmapData tmp35 = this->_borderPixels;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(816)
					::openfl::_legacy::display::BitmapData tmp36 = this->_borderPixels;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(816)
					::openfl::_legacy::geom::Rectangle tmp37 = tmp36->get_rect();		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(816)
					::openfl::_legacy::geom::ColorTransform tmp38 = this->_borderColorTransform;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(816)
					tmp35->colorTransform(tmp37,tmp38);
					HX_STACK_LINE(816)
					::flixel::graphics::FlxGraphic tmp39 = this->graphic;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(816)
					::openfl::_legacy::display::BitmapData tmp40 = this->_borderPixels;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(816)
					tmp39->bitmap->draw(tmp40,null(),null(),null(),null(),null());
				}
			}
			HX_STACK_LINE(817)
			::openfl::_legacy::text::TextFormat tmp25 = this->_formatAdjusted;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(817)
			this->applyFormats(tmp25,false);
			HX_STACK_LINE(819)
			::flixel::graphics::FlxGraphic tmp26 = this->graphic;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(819)
			::openfl::_legacy::display::BitmapData tmp27 = tmp26->bitmap;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(819)
			this->drawTextFieldTo(tmp27);
		}
		HX_STACK_LINE(822)
		this->_regen = false;
		HX_STACK_LINE(823)
		{
			HX_STACK_LINE(823)
			::flixel::graphics::frames::FlxFrame tmp22 = this->frame;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(823)
			this->set_frame(tmp22);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,regenGraphic,(void))

Void FlxText_obj::drawTextFieldTo( ::openfl::_legacy::display::BitmapData graphic){
{
		HX_STACK_FRAME("flixel.text.FlxText","drawTextFieldTo",0xda5cac46,"flixel.text.FlxText.drawTextFieldTo","flixel/text/FlxText.hx",830,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphic,"graphic")
		HX_STACK_LINE(858)
		::openfl::_legacy::text::TextField tmp = this->textField;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(858)
		::flixel::math::FlxMatrix tmp1 = this->_matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(858)
		graphic->draw(tmp,tmp1,null(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,drawTextFieldTo,(void))

Void FlxText_obj::draw( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","draw",0x3a66d282,"flixel.text.FlxText.draw","flixel/text/FlxText.hx",880,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(881)
		this->regenGraphic();
		HX_STACK_LINE(882)
		this->super::draw();
	}
return null();
}


Void FlxText_obj::calcFrame( hx::Null< bool >  __o_RunOnCpp){
bool RunOnCpp = __o_RunOnCpp.Default(false);
	HX_STACK_FRAME("flixel.text.FlxText","calcFrame",0x04b3a41a,"flixel.text.FlxText.calcFrame","flixel/text/FlxText.hx",891,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RunOnCpp,"RunOnCpp")
{
		HX_STACK_LINE(892)
		::openfl::_legacy::text::TextField tmp = this->textField;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(892)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(892)
		if ((tmp1)){
			HX_STACK_LINE(893)
			return null();
		}
		HX_STACK_LINE(895)
		bool tmp2 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(895)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(895)
		if ((tmp2)){
			HX_STACK_LINE(895)
			bool tmp4 = RunOnCpp;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(895)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(895)
			tmp3 = !(tmp5);
		}
		else{
			HX_STACK_LINE(895)
			tmp3 = false;
		}
		HX_STACK_LINE(895)
		if ((tmp3)){
			HX_STACK_LINE(896)
			return null();
		}
		HX_STACK_LINE(898)
		this->regenGraphic();
		HX_STACK_LINE(899)
		bool tmp4 = RunOnCpp;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(899)
		this->super::calcFrame(tmp4);
	}
return null();
}


Void FlxText_obj::applyBorderStyle( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","applyBorderStyle",0x7fb82955,"flixel.text.FlxText.applyBorderStyle","flixel/text/FlxText.hx",903,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(904)
		Float tmp = this->borderSize;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(904)
		Float tmp1 = this->borderQuality;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(904)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(904)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(904)
		int iterations = tmp3;		HX_STACK_VAR(iterations,"iterations");
		HX_STACK_LINE(905)
		bool tmp4 = (iterations <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(905)
		if ((tmp4)){
			HX_STACK_LINE(907)
			iterations = (int)1;
		}
		HX_STACK_LINE(909)
		Float tmp5 = this->borderSize;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(909)
		int tmp6 = iterations;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(909)
		Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(909)
		Float delta = tmp7;		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(911)
		{
			HX_STACK_LINE(911)
			::flixel::text::FlxTextBorderStyle tmp8 = this->borderStyle;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(911)
			::flixel::text::FlxTextBorderStyle _g = tmp8;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(911)
			switch( (int)(_g->__Index())){
				case (int)1: {
					HX_STACK_LINE(916)
					::openfl::_legacy::text::TextFormat tmp9 = this->_formatAdjusted;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(916)
					this->applyFormats(tmp9,true);
					HX_STACK_LINE(918)
					{
						HX_STACK_LINE(918)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(918)
						while((true)){
							HX_STACK_LINE(918)
							bool tmp10 = (_g1 < iterations);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(918)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(918)
							if ((tmp11)){
								HX_STACK_LINE(918)
								break;
							}
							HX_STACK_LINE(918)
							int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(918)
							int i = tmp12;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(920)
							{
								HX_STACK_LINE(920)
								bool tmp13 = this->_hasBorderAlpha;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(920)
								::openfl::_legacy::display::BitmapData tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(920)
								if ((tmp13)){
									HX_STACK_LINE(920)
									tmp14 = this->_borderPixels;
								}
								else{
									HX_STACK_LINE(920)
									::flixel::graphics::FlxGraphic tmp15 = this->graphic;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(920)
									tmp14 = tmp15->bitmap;
								}
								HX_STACK_LINE(920)
								::openfl::_legacy::display::BitmapData graphic = tmp14;		HX_STACK_VAR(graphic,"graphic");
								HX_STACK_LINE(920)
								::flixel::math::FlxMatrix tmp15 = this->_matrix;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(920)
								Float tmp16 = delta;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(920)
								Float tmp17 = delta;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(920)
								tmp15->translate(tmp16,tmp17);
								HX_STACK_LINE(920)
								::openfl::_legacy::display::BitmapData tmp18 = graphic;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(920)
								this->drawTextFieldTo(tmp18);
							}
						}
					}
					HX_STACK_LINE(923)
					::flixel::math::FlxMatrix tmp10 = this->_matrix;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(923)
					::flixel::math::FlxPoint tmp11 = this->shadowOffset;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(923)
					Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(923)
					Float tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(923)
					Float tmp14 = this->borderSize;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(923)
					Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(923)
					::flixel::math::FlxPoint tmp16 = this->shadowOffset;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(923)
					Float tmp17 = tmp16->y;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(923)
					Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(923)
					Float tmp19 = this->borderSize;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(923)
					Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(923)
					tmp10->translate(tmp15,tmp20);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(928)
					::openfl::_legacy::text::TextFormat tmp9 = this->_formatAdjusted;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(928)
					this->applyFormats(tmp9,true);
					HX_STACK_LINE(930)
					Float curDelta = delta;		HX_STACK_VAR(curDelta,"curDelta");
					HX_STACK_LINE(931)
					{
						HX_STACK_LINE(931)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(931)
						while((true)){
							HX_STACK_LINE(931)
							bool tmp10 = (_g1 < iterations);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(931)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(931)
							if ((tmp11)){
								HX_STACK_LINE(931)
								break;
							}
							HX_STACK_LINE(931)
							int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(931)
							int i = tmp12;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(933)
							{
								HX_STACK_LINE(933)
								bool tmp13 = this->_hasBorderAlpha;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(933)
								::openfl::_legacy::display::BitmapData tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(933)
								if ((tmp13)){
									HX_STACK_LINE(933)
									tmp14 = this->_borderPixels;
								}
								else{
									HX_STACK_LINE(933)
									::flixel::graphics::FlxGraphic tmp15 = this->graphic;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(933)
									tmp14 = tmp15->bitmap;
								}
								HX_STACK_LINE(933)
								::openfl::_legacy::display::BitmapData graphic = tmp14;		HX_STACK_VAR(graphic,"graphic");
								HX_STACK_LINE(933)
								::flixel::math::FlxMatrix tmp15 = this->_matrix;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(933)
								Float tmp16 = curDelta;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(933)
								Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(933)
								Float tmp18 = curDelta;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(933)
								Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(933)
								tmp15->translate(tmp17,tmp19);
								HX_STACK_LINE(933)
								::openfl::_legacy::display::BitmapData tmp20 = graphic;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(933)
								this->drawTextFieldTo(tmp20);
							}
							HX_STACK_LINE(934)
							{
								HX_STACK_LINE(934)
								bool tmp13 = this->_hasBorderAlpha;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(934)
								::openfl::_legacy::display::BitmapData tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(934)
								if ((tmp13)){
									HX_STACK_LINE(934)
									tmp14 = this->_borderPixels;
								}
								else{
									HX_STACK_LINE(934)
									::flixel::graphics::FlxGraphic tmp15 = this->graphic;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(934)
									tmp14 = tmp15->bitmap;
								}
								HX_STACK_LINE(934)
								::openfl::_legacy::display::BitmapData graphic = tmp14;		HX_STACK_VAR(graphic,"graphic");
								HX_STACK_LINE(934)
								::flixel::math::FlxMatrix tmp15 = this->_matrix;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(934)
								Float tmp16 = curDelta;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(934)
								tmp15->translate(tmp16,(int)0);
								HX_STACK_LINE(934)
								::openfl::_legacy::display::BitmapData tmp17 = graphic;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(934)
								this->drawTextFieldTo(tmp17);
							}
							HX_STACK_LINE(935)
							{
								HX_STACK_LINE(935)
								bool tmp13 = this->_hasBorderAlpha;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(935)
								::openfl::_legacy::display::BitmapData tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(935)
								if ((tmp13)){
									HX_STACK_LINE(935)
									tmp14 = this->_borderPixels;
								}
								else{
									HX_STACK_LINE(935)
									::flixel::graphics::FlxGraphic tmp15 = this->graphic;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(935)
									tmp14 = tmp15->bitmap;
								}
								HX_STACK_LINE(935)
								::openfl::_legacy::display::BitmapData graphic = tmp14;		HX_STACK_VAR(graphic,"graphic");
								HX_STACK_LINE(935)
								::flixel::math::FlxMatrix tmp15 = this->_matrix;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(935)
								Float tmp16 = curDelta;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(935)
								tmp15->translate(tmp16,(int)0);
								HX_STACK_LINE(935)
								::openfl::_legacy::display::BitmapData tmp17 = graphic;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(935)
								this->drawTextFieldTo(tmp17);
							}
							HX_STACK_LINE(936)
							{
								HX_STACK_LINE(936)
								bool tmp13 = this->_hasBorderAlpha;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(936)
								::openfl::_legacy::display::BitmapData tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(936)
								if ((tmp13)){
									HX_STACK_LINE(936)
									tmp14 = this->_borderPixels;
								}
								else{
									HX_STACK_LINE(936)
									::flixel::graphics::FlxGraphic tmp15 = this->graphic;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(936)
									tmp14 = tmp15->bitmap;
								}
								HX_STACK_LINE(936)
								::openfl::_legacy::display::BitmapData graphic = tmp14;		HX_STACK_VAR(graphic,"graphic");
								HX_STACK_LINE(936)
								::flixel::math::FlxMatrix tmp15 = this->_matrix;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(936)
								Float tmp16 = curDelta;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(936)
								tmp15->translate((int)0,tmp16);
								HX_STACK_LINE(936)
								::openfl::_legacy::display::BitmapData tmp17 = graphic;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(936)
								this->drawTextFieldTo(tmp17);
							}
							HX_STACK_LINE(937)
							{
								HX_STACK_LINE(937)
								bool tmp13 = this->_hasBorderAlpha;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(937)
								::openfl::_legacy::display::BitmapData tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(937)
								if ((tmp13)){
									HX_STACK_LINE(937)
									tmp14 = this->_borderPixels;
								}
								else{
									HX_STACK_LINE(937)
									::flixel::graphics::FlxGraphic tmp15 = this->graphic;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(937)
									tmp14 = tmp15->bitmap;
								}
								HX_STACK_LINE(937)
								::openfl::_legacy::display::BitmapData graphic = tmp14;		HX_STACK_VAR(graphic,"graphic");
								HX_STACK_LINE(937)
								::flixel::math::FlxMatrix tmp15 = this->_matrix;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(937)
								Float tmp16 = curDelta;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(937)
								tmp15->translate((int)0,tmp16);
								HX_STACK_LINE(937)
								::openfl::_legacy::display::BitmapData tmp17 = graphic;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(937)
								this->drawTextFieldTo(tmp17);
							}
							HX_STACK_LINE(938)
							{
								HX_STACK_LINE(938)
								bool tmp13 = this->_hasBorderAlpha;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(938)
								::openfl::_legacy::display::BitmapData tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(938)
								if ((tmp13)){
									HX_STACK_LINE(938)
									tmp14 = this->_borderPixels;
								}
								else{
									HX_STACK_LINE(938)
									::flixel::graphics::FlxGraphic tmp15 = this->graphic;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(938)
									tmp14 = tmp15->bitmap;
								}
								HX_STACK_LINE(938)
								::openfl::_legacy::display::BitmapData graphic = tmp14;		HX_STACK_VAR(graphic,"graphic");
								HX_STACK_LINE(938)
								::flixel::math::FlxMatrix tmp15 = this->_matrix;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(938)
								Float tmp16 = curDelta;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(938)
								Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(938)
								tmp15->translate(tmp17,(int)0);
								HX_STACK_LINE(938)
								::openfl::_legacy::display::BitmapData tmp18 = graphic;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(938)
								this->drawTextFieldTo(tmp18);
							}
							HX_STACK_LINE(939)
							{
								HX_STACK_LINE(939)
								bool tmp13 = this->_hasBorderAlpha;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(939)
								::openfl::_legacy::display::BitmapData tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(939)
								if ((tmp13)){
									HX_STACK_LINE(939)
									tmp14 = this->_borderPixels;
								}
								else{
									HX_STACK_LINE(939)
									::flixel::graphics::FlxGraphic tmp15 = this->graphic;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(939)
									tmp14 = tmp15->bitmap;
								}
								HX_STACK_LINE(939)
								::openfl::_legacy::display::BitmapData graphic = tmp14;		HX_STACK_VAR(graphic,"graphic");
								HX_STACK_LINE(939)
								::flixel::math::FlxMatrix tmp15 = this->_matrix;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(939)
								Float tmp16 = curDelta;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(939)
								Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(939)
								tmp15->translate(tmp17,(int)0);
								HX_STACK_LINE(939)
								::openfl::_legacy::display::BitmapData tmp18 = graphic;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(939)
								this->drawTextFieldTo(tmp18);
							}
							HX_STACK_LINE(940)
							{
								HX_STACK_LINE(940)
								bool tmp13 = this->_hasBorderAlpha;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(940)
								::openfl::_legacy::display::BitmapData tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(940)
								if ((tmp13)){
									HX_STACK_LINE(940)
									tmp14 = this->_borderPixels;
								}
								else{
									HX_STACK_LINE(940)
									::flixel::graphics::FlxGraphic tmp15 = this->graphic;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(940)
									tmp14 = tmp15->bitmap;
								}
								HX_STACK_LINE(940)
								::openfl::_legacy::display::BitmapData graphic = tmp14;		HX_STACK_VAR(graphic,"graphic");
								HX_STACK_LINE(940)
								::flixel::math::FlxMatrix tmp15 = this->_matrix;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(940)
								Float tmp16 = curDelta;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(940)
								Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(940)
								tmp15->translate((int)0,tmp17);
								HX_STACK_LINE(940)
								::openfl::_legacy::display::BitmapData tmp18 = graphic;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(940)
								this->drawTextFieldTo(tmp18);
							}
							HX_STACK_LINE(942)
							::flixel::math::FlxMatrix tmp13 = this->_matrix;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(942)
							Float tmp14 = curDelta;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(942)
							tmp13->translate(tmp14,(int)0);
							HX_STACK_LINE(943)
							hx::AddEq(curDelta,delta);
						}
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(950)
					::openfl::_legacy::text::TextFormat tmp9 = this->_formatAdjusted;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(950)
					this->applyFormats(tmp9,true);
					HX_STACK_LINE(952)
					Float curDelta = delta;		HX_STACK_VAR(curDelta,"curDelta");
					HX_STACK_LINE(953)
					{
						HX_STACK_LINE(953)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(953)
						while((true)){
							HX_STACK_LINE(953)
							bool tmp10 = (_g1 < iterations);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(953)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(953)
							if ((tmp11)){
								HX_STACK_LINE(953)
								break;
							}
							HX_STACK_LINE(953)
							int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(953)
							int i = tmp12;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(955)
							{
								HX_STACK_LINE(955)
								bool tmp13 = this->_hasBorderAlpha;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(955)
								::openfl::_legacy::display::BitmapData tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(955)
								if ((tmp13)){
									HX_STACK_LINE(955)
									tmp14 = this->_borderPixels;
								}
								else{
									HX_STACK_LINE(955)
									::flixel::graphics::FlxGraphic tmp15 = this->graphic;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(955)
									tmp14 = tmp15->bitmap;
								}
								HX_STACK_LINE(955)
								::openfl::_legacy::display::BitmapData graphic = tmp14;		HX_STACK_VAR(graphic,"graphic");
								HX_STACK_LINE(955)
								::flixel::math::FlxMatrix tmp15 = this->_matrix;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(955)
								Float tmp16 = curDelta;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(955)
								Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(955)
								Float tmp18 = curDelta;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(955)
								Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(955)
								tmp15->translate(tmp17,tmp19);
								HX_STACK_LINE(955)
								::openfl::_legacy::display::BitmapData tmp20 = graphic;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(955)
								this->drawTextFieldTo(tmp20);
							}
							HX_STACK_LINE(956)
							{
								HX_STACK_LINE(956)
								bool tmp13 = this->_hasBorderAlpha;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(956)
								::openfl::_legacy::display::BitmapData tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(956)
								if ((tmp13)){
									HX_STACK_LINE(956)
									tmp14 = this->_borderPixels;
								}
								else{
									HX_STACK_LINE(956)
									::flixel::graphics::FlxGraphic tmp15 = this->graphic;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(956)
									tmp14 = tmp15->bitmap;
								}
								HX_STACK_LINE(956)
								::openfl::_legacy::display::BitmapData graphic = tmp14;		HX_STACK_VAR(graphic,"graphic");
								HX_STACK_LINE(956)
								::flixel::math::FlxMatrix tmp15 = this->_matrix;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(956)
								Float tmp16 = (curDelta * (int)2);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(956)
								tmp15->translate(tmp16,(int)0);
								HX_STACK_LINE(956)
								::openfl::_legacy::display::BitmapData tmp17 = graphic;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(956)
								this->drawTextFieldTo(tmp17);
							}
							HX_STACK_LINE(957)
							{
								HX_STACK_LINE(957)
								bool tmp13 = this->_hasBorderAlpha;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(957)
								::openfl::_legacy::display::BitmapData tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(957)
								if ((tmp13)){
									HX_STACK_LINE(957)
									tmp14 = this->_borderPixels;
								}
								else{
									HX_STACK_LINE(957)
									::flixel::graphics::FlxGraphic tmp15 = this->graphic;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(957)
									tmp14 = tmp15->bitmap;
								}
								HX_STACK_LINE(957)
								::openfl::_legacy::display::BitmapData graphic = tmp14;		HX_STACK_VAR(graphic,"graphic");
								HX_STACK_LINE(957)
								::flixel::math::FlxMatrix tmp15 = this->_matrix;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(957)
								Float tmp16 = (curDelta * (int)2);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(957)
								tmp15->translate((int)0,tmp16);
								HX_STACK_LINE(957)
								::openfl::_legacy::display::BitmapData tmp17 = graphic;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(957)
								this->drawTextFieldTo(tmp17);
							}
							HX_STACK_LINE(958)
							{
								HX_STACK_LINE(958)
								bool tmp13 = this->_hasBorderAlpha;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(958)
								::openfl::_legacy::display::BitmapData tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(958)
								if ((tmp13)){
									HX_STACK_LINE(958)
									tmp14 = this->_borderPixels;
								}
								else{
									HX_STACK_LINE(958)
									::flixel::graphics::FlxGraphic tmp15 = this->graphic;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(958)
									tmp14 = tmp15->bitmap;
								}
								HX_STACK_LINE(958)
								::openfl::_legacy::display::BitmapData graphic = tmp14;		HX_STACK_VAR(graphic,"graphic");
								HX_STACK_LINE(958)
								::flixel::math::FlxMatrix tmp15 = this->_matrix;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(958)
								Float tmp16 = curDelta;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(958)
								Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(958)
								Float tmp18 = (tmp17 * (int)2);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(958)
								tmp15->translate(tmp18,(int)0);
								HX_STACK_LINE(958)
								::openfl::_legacy::display::BitmapData tmp19 = graphic;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(958)
								this->drawTextFieldTo(tmp19);
							}
							HX_STACK_LINE(960)
							::flixel::math::FlxMatrix tmp13 = this->_matrix;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(960)
							Float tmp14 = curDelta;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(960)
							Float tmp15 = curDelta;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(960)
							Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(960)
							tmp13->translate(tmp14,tmp16);
							HX_STACK_LINE(961)
							hx::AddEq(curDelta,delta);
						}
					}
				}
				;break;
				case (int)0: {
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,applyBorderStyle,(void))

Void FlxText_obj::applyBorderTransparency( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","applyBorderTransparency",0x59c1b674,"flixel.text.FlxText.applyBorderTransparency","flixel/text/FlxText.hx",969,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(970)
		bool tmp = this->_hasBorderAlpha;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(970)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(970)
		if ((tmp1)){
			HX_STACK_LINE(971)
			return null();
		}
		HX_STACK_LINE(973)
		::openfl::_legacy::geom::ColorTransform tmp2 = this->_borderColorTransform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(973)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(973)
		if ((tmp3)){
			HX_STACK_LINE(974)
			::openfl::_legacy::geom::ColorTransform tmp4 = ::openfl::_legacy::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(974)
			this->_borderColorTransform = tmp4;
		}
		HX_STACK_LINE(976)
		int tmp4 = this->borderColor;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(976)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(976)
		int tmp6 = (int(tmp5) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(976)
		int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(976)
		Float tmp8 = (Float(tmp7) / Float((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(976)
		::openfl::_legacy::geom::ColorTransform tmp9 = this->_borderColorTransform;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(976)
		tmp9->alphaMultiplier = tmp8;
		HX_STACK_LINE(977)
		::openfl::_legacy::display::BitmapData tmp10 = this->_borderPixels;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(977)
		::openfl::_legacy::display::BitmapData tmp11 = this->_borderPixels;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(977)
		::openfl::_legacy::geom::Rectangle tmp12 = tmp11->get_rect();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(977)
		::openfl::_legacy::geom::ColorTransform tmp13 = this->_borderColorTransform;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(977)
		tmp10->colorTransform(tmp12,tmp13);
		HX_STACK_LINE(978)
		::flixel::graphics::FlxGraphic tmp14 = this->graphic;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(978)
		::openfl::_legacy::display::BitmapData tmp15 = this->_borderPixels;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(978)
		tmp14->bitmap->draw(tmp15,null(),null(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,applyBorderTransparency,(void))

Void FlxText_obj::copyTextWithOffset( Float x,Float y){
{
		HX_STACK_FRAME("flixel.text.FlxText","copyTextWithOffset",0x8b535ed9,"flixel.text.FlxText.copyTextWithOffset","flixel/text/FlxText.hx",985,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(986)
		bool tmp = this->_hasBorderAlpha;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(986)
		::openfl::_legacy::display::BitmapData tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(986)
		if ((tmp)){
			HX_STACK_LINE(986)
			tmp1 = this->_borderPixels;
		}
		else{
			HX_STACK_LINE(986)
			::flixel::graphics::FlxGraphic tmp2 = this->graphic;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(986)
			tmp1 = tmp2->bitmap;
		}
		HX_STACK_LINE(986)
		::openfl::_legacy::display::BitmapData graphic = tmp1;		HX_STACK_VAR(graphic,"graphic");
		HX_STACK_LINE(987)
		::flixel::math::FlxMatrix tmp2 = this->_matrix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(987)
		Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(987)
		Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(987)
		tmp2->translate(tmp3,tmp4);
		HX_STACK_LINE(988)
		::openfl::_legacy::display::BitmapData tmp5 = graphic;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(988)
		this->drawTextFieldTo(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxText_obj,copyTextWithOffset,(void))

Void FlxText_obj::applyFormats( ::openfl::_legacy::text::TextFormat FormatAdjusted,hx::Null< bool >  __o_UseBorderColor){
bool UseBorderColor = __o_UseBorderColor.Default(false);
	HX_STACK_FRAME("flixel.text.FlxText","applyFormats",0x597a620c,"flixel.text.FlxText.applyFormats","flixel/text/FlxText.hx",992,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FormatAdjusted,"FormatAdjusted")
	HX_STACK_ARG(UseBorderColor,"UseBorderColor")
{
		HX_STACK_LINE(994)
		::openfl::_legacy::text::TextFormat tmp = this->_defaultFormat;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(994)
		::openfl::_legacy::text::TextFormat tmp1 = FormatAdjusted;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(994)
		this->copyTextFormat(tmp,tmp1,false);
		HX_STACK_LINE(995)
		bool tmp2 = UseBorderColor;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(995)
		Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(995)
		if ((tmp2)){
			HX_STACK_LINE(995)
			int tmp4 = this->borderColor;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(995)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(995)
			int tmp6 = (int(tmp5) & int((int)16777215));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(995)
			tmp3 = tmp6;
		}
		else{
			HX_STACK_LINE(995)
			::openfl::_legacy::text::TextFormat tmp4 = this->_defaultFormat;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(995)
			tmp3 = tmp4->color;
		}
		HX_STACK_LINE(995)
		FormatAdjusted->color = tmp3;
		HX_STACK_LINE(996)
		::openfl::_legacy::text::TextField tmp4 = this->textField;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(996)
		::openfl::_legacy::text::TextFormat tmp5 = FormatAdjusted;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(996)
		tmp4->setTextFormat(tmp5,null(),null());
		HX_STACK_LINE(999)
		{
			HX_STACK_LINE(999)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(999)
			Array< ::Dynamic > _g1 = this->_formatRanges;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(999)
			while((true)){
				HX_STACK_LINE(999)
				bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(999)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(999)
				if ((tmp7)){
					HX_STACK_LINE(999)
					break;
				}
				HX_STACK_LINE(999)
				::flixel::text::_FlxText::FlxTextFormatRange tmp8 = _g1->__get(_g).StaticCast< ::flixel::text::_FlxText::FlxTextFormatRange >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(999)
				::flixel::text::_FlxText::FlxTextFormatRange formatRange = tmp8;		HX_STACK_VAR(formatRange,"formatRange");
				HX_STACK_LINE(999)
				++(_g);
				HX_STACK_LINE(1001)
				::openfl::_legacy::text::TextField tmp9 = this->textField;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1001)
				::String tmp10 = tmp9->get_text();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1001)
				int tmp11 = tmp10.length;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1001)
				int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1001)
				int tmp13 = formatRange->range->start;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1001)
				bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1001)
				if ((tmp14)){
					HX_STACK_LINE(1004)
					break;
				}
				else{
					HX_STACK_LINE(1008)
					::openfl::_legacy::text::TextFormat tmp15 = formatRange->format->format;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1008)
					::openfl::_legacy::text::TextFormat textFormat = tmp15;		HX_STACK_VAR(textFormat,"textFormat");
					HX_STACK_LINE(1009)
					::openfl::_legacy::text::TextFormat tmp16 = textFormat;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1009)
					::openfl::_legacy::text::TextFormat tmp17 = FormatAdjusted;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1009)
					this->copyTextFormat(tmp16,tmp17,false);
					HX_STACK_LINE(1010)
					bool tmp18 = UseBorderColor;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1010)
					Dynamic tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1010)
					if ((tmp18)){
						HX_STACK_LINE(1010)
						int tmp20 = formatRange->format->borderColor;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1010)
						int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1010)
						int tmp22 = (int(tmp21) & int((int)16777215));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1010)
						tmp19 = tmp22;
					}
					else{
						HX_STACK_LINE(1010)
						tmp19 = textFormat->color;
					}
					HX_STACK_LINE(1010)
					FormatAdjusted->color = tmp19;
				}
				HX_STACK_LINE(1013)
				::openfl::_legacy::text::TextField tmp15 = this->textField;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1013)
				::openfl::_legacy::text::TextFormat tmp16 = FormatAdjusted;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1013)
				int tmp17 = formatRange->range->start;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1014)
				int tmp18 = formatRange->range->end;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1014)
				::openfl::_legacy::text::TextField tmp19 = this->textField;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1014)
				::String tmp20 = tmp19->get_text();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1014)
				int tmp21 = tmp20.length;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1014)
				Float tmp22 = ::Math_obj::min(tmp18,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1014)
				int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1013)
				tmp15->setTextFormat(tmp16,tmp17,tmp23);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxText_obj,applyFormats,(void))

Void FlxText_obj::copyTextFormat( ::openfl::_legacy::text::TextFormat from,::openfl::_legacy::text::TextFormat to,hx::Null< bool >  __o_withAlign){
bool withAlign = __o_withAlign.Default(true);
	HX_STACK_FRAME("flixel.text.FlxText","copyTextFormat",0xce0953d7,"flixel.text.FlxText.copyTextFormat","flixel/text/FlxText.hx",1019,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(from,"from")
	HX_STACK_ARG(to,"to")
	HX_STACK_ARG(withAlign,"withAlign")
{
		HX_STACK_LINE(1020)
		to->font = from->font;
		HX_STACK_LINE(1021)
		to->bold = from->bold;
		HX_STACK_LINE(1022)
		to->italic = from->italic;
		HX_STACK_LINE(1023)
		to->size = from->size;
		HX_STACK_LINE(1024)
		to->color = from->color;
		HX_STACK_LINE(1025)
		bool tmp = withAlign;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1025)
		if ((tmp)){
			HX_STACK_LINE(1026)
			to->align = from->align;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxText_obj,copyTextFormat,(void))

::openfl::_legacy::text::TextFormat FlxText_obj::dtfCopy( ){
	HX_STACK_FRAME("flixel.text.FlxText","dtfCopy",0x79c34ded,"flixel.text.FlxText.dtfCopy","flixel/text/FlxText.hx",1035,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1036)
	::openfl::_legacy::text::TextField tmp = this->textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1036)
	::openfl::_legacy::text::TextFormat tmp1 = tmp->get_defaultTextFormat();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1036)
	::openfl::_legacy::text::TextFormat dtf = tmp1;		HX_STACK_VAR(dtf,"dtf");
	HX_STACK_LINE(1037)
	::openfl::_legacy::text::TextFormat tmp2 = ::openfl::_legacy::text::TextFormat_obj::__new(dtf->font,dtf->size,dtf->color,dtf->bold,dtf->italic,dtf->underline,dtf->url,dtf->target,dtf->align,null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1037)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,dtfCopy,return )

Void FlxText_obj::updateDefaultFormat( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","updateDefaultFormat",0x3cb6b251,"flixel.text.FlxText.updateDefaultFormat","flixel/text/FlxText.hx",1041,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1042)
		::openfl::_legacy::text::TextField tmp = this->textField;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1042)
		::openfl::_legacy::text::TextFormat tmp1 = this->_defaultFormat;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1042)
		tmp->set_defaultTextFormat(tmp1);
		HX_STACK_LINE(1043)
		::openfl::_legacy::text::TextField tmp2 = this->textField;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1043)
		::openfl::_legacy::text::TextFormat tmp3 = this->_defaultFormat;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1043)
		tmp2->setTextFormat(tmp3,null(),null());
		HX_STACK_LINE(1044)
		this->_regen = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,updateDefaultFormat,(void))

::flixel::graphics::frames::FlxFramesCollection FlxText_obj::set_frames( ::flixel::graphics::frames::FlxFramesCollection Frames){
	HX_STACK_FRAME("flixel.text.FlxText","set_frames",0x579256e1,"flixel.text.FlxText.set_frames","flixel/text/FlxText.hx",1048,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Frames,"Frames")
	HX_STACK_LINE(1049)
	::flixel::graphics::frames::FlxFramesCollection tmp = Frames;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1049)
	this->super::set_frames(tmp);
	HX_STACK_LINE(1050)
	this->_regen = false;
	HX_STACK_LINE(1051)
	::flixel::graphics::frames::FlxFramesCollection tmp1 = Frames;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1051)
	return tmp1;
}


int FlxText_obj::VERTICAL_GUTTER;


FlxText_obj::FlxText_obj()
{
}

void FlxText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxText);
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(borderStyle,"borderStyle");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(borderSize,"borderSize");
	HX_MARK_MEMBER_NAME(borderQuality,"borderQuality");
	HX_MARK_MEMBER_NAME(textField,"textField");
	HX_MARK_MEMBER_NAME(shadowOffset,"shadowOffset");
	HX_MARK_MEMBER_NAME(_defaultFormat,"_defaultFormat");
	HX_MARK_MEMBER_NAME(_formatAdjusted,"_formatAdjusted");
	HX_MARK_MEMBER_NAME(_formatRanges,"_formatRanges");
	HX_MARK_MEMBER_NAME(_font,"_font");
	HX_MARK_MEMBER_NAME(_regen,"_regen");
	HX_MARK_MEMBER_NAME(_borderPixels,"_borderPixels");
	HX_MARK_MEMBER_NAME(_borderColorTransform,"_borderColorTransform");
	HX_MARK_MEMBER_NAME(_hasBorderAlpha,"_hasBorderAlpha");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(borderStyle,"borderStyle");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(borderSize,"borderSize");
	HX_VISIT_MEMBER_NAME(borderQuality,"borderQuality");
	HX_VISIT_MEMBER_NAME(textField,"textField");
	HX_VISIT_MEMBER_NAME(shadowOffset,"shadowOffset");
	HX_VISIT_MEMBER_NAME(_defaultFormat,"_defaultFormat");
	HX_VISIT_MEMBER_NAME(_formatAdjusted,"_formatAdjusted");
	HX_VISIT_MEMBER_NAME(_formatRanges,"_formatRanges");
	HX_VISIT_MEMBER_NAME(_font,"_font");
	HX_VISIT_MEMBER_NAME(_regen,"_regen");
	HX_VISIT_MEMBER_NAME(_borderPixels,"_borderPixels");
	HX_VISIT_MEMBER_NAME(_borderColorTransform,"_borderColorTransform");
	HX_VISIT_MEMBER_NAME(_hasBorderAlpha,"_hasBorderAlpha");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxText_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return get_size(); }
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp == hx::paccAlways) return get_font(); }
		if (HX_FIELD_EQ(inName,"bold") ) { if (inCallProp == hx::paccAlways) return get_bold(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_font") ) { return _font; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { if (inCallProp == hx::paccAlways) return get_italic(); }
		if (HX_FIELD_EQ(inName,"_regen") ) { return _regen; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"dtfCopy") ) { return dtfCopy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"embedded") ) { if (inCallProp == hx::paccAlways) return get_embedded(); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == hx::paccAlways) return get_wordWrap(); }
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == hx::paccAlways) return get_autoSize(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		if (HX_FIELD_EQ(inName,"get_font") ) { return get_font_dyn(); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return set_font_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bold") ) { return get_bold_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bold") ) { return set_bold_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alignment") ) { if (inCallProp == hx::paccAlways) return get_alignment(); }
		if (HX_FIELD_EQ(inName,"textField") ) { return textField; }
		if (HX_FIELD_EQ(inName,"drawFrame") ) { return drawFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"addFormat") ) { return addFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"setFormat") ) { return setFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return calcFrame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"systemFont") ) { if (inCallProp == hx::paccAlways) return get_systemFont(); }
		if (HX_FIELD_EQ(inName,"borderSize") ) { return borderSize; }
		if (HX_FIELD_EQ(inName,"fieldWidth") ) { if (inCallProp == hx::paccAlways) return get_fieldWidth(); }
		if (HX_FIELD_EQ(inName,"get_italic") ) { return get_italic_dyn(); }
		if (HX_FIELD_EQ(inName,"set_italic") ) { return set_italic_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frames") ) { return set_frames_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderStyle") ) { return borderStyle; }
		if (HX_FIELD_EQ(inName,"borderColor") ) { return borderColor; }
		if (HX_FIELD_EQ(inName,"applyMarkup") ) { return applyMarkup_dyn(); }
		if (HX_FIELD_EQ(inName,"set_graphic") ) { return set_graphic_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shadowOffset") ) { return shadowOffset; }
		if (HX_FIELD_EQ(inName,"stampOnAtlas") ) { return stampOnAtlas_dyn(); }
		if (HX_FIELD_EQ(inName,"removeFormat") ) { return removeFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"clearFormats") ) { return clearFormats_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return set_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_autoSize") ) { return get_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_embedded") ) { return get_embedded_dyn(); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return get_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return set_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"regenGraphic") ) { return regenGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"applyFormats") ) { return applyFormats_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"borderQuality") ) { return borderQuality; }
		if (HX_FIELD_EQ(inName,"_formatRanges") ) { return _formatRanges; }
		if (HX_FIELD_EQ(inName,"_borderPixels") ) { return _borderPixels; }
		if (HX_FIELD_EQ(inName,"get_alignment") ) { return get_alignment_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alignment") ) { return set_alignment_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_defaultFormat") ) { return _defaultFormat; }
		if (HX_FIELD_EQ(inName,"setBorderStyle") ) { return setBorderStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fieldWidth") ) { return set_fieldWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fieldWidth") ) { return get_fieldWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_systemFont") ) { return get_systemFont_dyn(); }
		if (HX_FIELD_EQ(inName,"set_systemFont") ) { return set_systemFont_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderSize") ) { return set_borderSize_dyn(); }
		if (HX_FIELD_EQ(inName,"copyTextFormat") ) { return copyTextFormat_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_formatAdjusted") ) { return _formatAdjusted; }
		if (HX_FIELD_EQ(inName,"_hasBorderAlpha") ) { return _hasBorderAlpha; }
		if (HX_FIELD_EQ(inName,"set_borderStyle") ) { return set_borderStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderColor") ) { return set_borderColor_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTextFieldTo") ) { return drawTextFieldTo_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"applyBorderStyle") ) { return applyBorderStyle_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_borderQuality") ) { return set_borderQuality_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"copyTextWithOffset") ) { return copyTextWithOffset_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateDefaultFormat") ) { return updateDefaultFormat_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return updateColorTransform_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_borderColorTransform") ) { return _borderColorTransform; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"applyBorderTransparency") ) { return applyBorderTransparency_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxText_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue);text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return set_size(inValue); }
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp == hx::paccAlways) return set_font(inValue); }
		if (HX_FIELD_EQ(inName,"bold") ) { if (inCallProp == hx::paccAlways) return set_bold(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_font") ) { _font=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { if (inCallProp == hx::paccAlways) return set_italic(inValue); }
		if (HX_FIELD_EQ(inName,"_regen") ) { _regen=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == hx::paccAlways) return set_wordWrap(inValue); }
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == hx::paccAlways) return set_autoSize(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alignment") ) { if (inCallProp == hx::paccAlways) return set_alignment(inValue); }
		if (HX_FIELD_EQ(inName,"textField") ) { textField=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"systemFont") ) { if (inCallProp == hx::paccAlways) return set_systemFont(inValue); }
		if (HX_FIELD_EQ(inName,"borderSize") ) { if (inCallProp == hx::paccAlways) return set_borderSize(inValue);borderSize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fieldWidth") ) { if (inCallProp == hx::paccAlways) return set_fieldWidth(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderStyle") ) { if (inCallProp == hx::paccAlways) return set_borderStyle(inValue);borderStyle=inValue.Cast< ::flixel::text::FlxTextBorderStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp == hx::paccAlways) return set_borderColor(inValue);borderColor=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shadowOffset") ) { shadowOffset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"borderQuality") ) { if (inCallProp == hx::paccAlways) return set_borderQuality(inValue);borderQuality=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_formatRanges") ) { _formatRanges=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_borderPixels") ) { _borderPixels=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_defaultFormat") ) { _defaultFormat=inValue.Cast< ::openfl::_legacy::text::TextFormat >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_formatAdjusted") ) { _formatAdjusted=inValue.Cast< ::openfl::_legacy::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hasBorderAlpha") ) { _hasBorderAlpha=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_borderColorTransform") ) { _borderColorTransform=inValue.Cast< ::openfl::_legacy::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("embedded","\x8a","\x19","\x62","\xde"));
	outFields->push(HX_HCSTRING("systemFont","\x5e","\xc4","\x43","\xf2"));
	outFields->push(HX_HCSTRING("bold","\x85","\x81","\x1b","\x41"));
	outFields->push(HX_HCSTRING("italic","\xf0","\x2e","\x64","\x06"));
	outFields->push(HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00"));
	outFields->push(HX_HCSTRING("alignment","\xe3","\xe2","\x3d","\xea"));
	outFields->push(HX_HCSTRING("borderStyle","\xa5","\x70","\x96","\x10"));
	outFields->push(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"));
	outFields->push(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06"));
	outFields->push(HX_HCSTRING("borderQuality","\x33","\x95","\x25","\x79"));
	outFields->push(HX_HCSTRING("textField","\xcd","\x24","\x81","\x99"));
	outFields->push(HX_HCSTRING("fieldWidth","\xec","\x2e","\xe5","\x97"));
	outFields->push(HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"));
	outFields->push(HX_HCSTRING("shadowOffset","\x93","\xfb","\x0b","\xdc"));
	outFields->push(HX_HCSTRING("_defaultFormat","\x19","\x53","\x59","\x36"));
	outFields->push(HX_HCSTRING("_formatAdjusted","\xa4","\xc9","\xb6","\x80"));
	outFields->push(HX_HCSTRING("_formatRanges","\x8c","\xb9","\x14","\xd7"));
	outFields->push(HX_HCSTRING("_font","\xae","\x79","\xd1","\xf6"));
	outFields->push(HX_HCSTRING("_regen","\xfe","\x75","\xa6","\xe2"));
	outFields->push(HX_HCSTRING("_borderPixels","\x18","\xbc","\x51","\xcc"));
	outFields->push(HX_HCSTRING("_borderColorTransform","\x74","\x07","\x2f","\x6f"));
	outFields->push(HX_HCSTRING("_hasBorderAlpha","\x37","\xfe","\xf9","\xe8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(FlxText_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsObject /*::flixel::text::FlxTextBorderStyle*/ ,(int)offsetof(FlxText_obj,borderStyle),HX_HCSTRING("borderStyle","\xa5","\x70","\x96","\x10")},
	{hx::fsInt,(int)offsetof(FlxText_obj,borderColor),HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6")},
	{hx::fsFloat,(int)offsetof(FlxText_obj,borderSize),HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06")},
	{hx::fsFloat,(int)offsetof(FlxText_obj,borderQuality),HX_HCSTRING("borderQuality","\x33","\x95","\x25","\x79")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(FlxText_obj,textField),HX_HCSTRING("textField","\xcd","\x24","\x81","\x99")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxText_obj,shadowOffset),HX_HCSTRING("shadowOffset","\x93","\xfb","\x0b","\xdc")},
	{hx::fsObject /*::openfl::_legacy::text::TextFormat*/ ,(int)offsetof(FlxText_obj,_defaultFormat),HX_HCSTRING("_defaultFormat","\x19","\x53","\x59","\x36")},
	{hx::fsObject /*::openfl::_legacy::text::TextFormat*/ ,(int)offsetof(FlxText_obj,_formatAdjusted),HX_HCSTRING("_formatAdjusted","\xa4","\xc9","\xb6","\x80")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxText_obj,_formatRanges),HX_HCSTRING("_formatRanges","\x8c","\xb9","\x14","\xd7")},
	{hx::fsString,(int)offsetof(FlxText_obj,_font),HX_HCSTRING("_font","\xae","\x79","\xd1","\xf6")},
	{hx::fsBool,(int)offsetof(FlxText_obj,_regen),HX_HCSTRING("_regen","\xfe","\x75","\xa6","\xe2")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxText_obj,_borderPixels),HX_HCSTRING("_borderPixels","\x18","\xbc","\x51","\xcc")},
	{hx::fsObject /*::openfl::_legacy::geom::ColorTransform*/ ,(int)offsetof(FlxText_obj,_borderColorTransform),HX_HCSTRING("_borderColorTransform","\x74","\x07","\x2f","\x6f")},
	{hx::fsBool,(int)offsetof(FlxText_obj,_hasBorderAlpha),HX_HCSTRING("_hasBorderAlpha","\x37","\xfe","\xf9","\xe8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxText_obj::VERTICAL_GUTTER,HX_HCSTRING("VERTICAL_GUTTER","\x04","\xb3","\x89","\x07")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("borderStyle","\xa5","\x70","\x96","\x10"),
	HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"),
	HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06"),
	HX_HCSTRING("borderQuality","\x33","\x95","\x25","\x79"),
	HX_HCSTRING("textField","\xcd","\x24","\x81","\x99"),
	HX_HCSTRING("shadowOffset","\x93","\xfb","\x0b","\xdc"),
	HX_HCSTRING("_defaultFormat","\x19","\x53","\x59","\x36"),
	HX_HCSTRING("_formatAdjusted","\xa4","\xc9","\xb6","\x80"),
	HX_HCSTRING("_formatRanges","\x8c","\xb9","\x14","\xd7"),
	HX_HCSTRING("_font","\xae","\x79","\xd1","\xf6"),
	HX_HCSTRING("_regen","\xfe","\x75","\xa6","\xe2"),
	HX_HCSTRING("_borderPixels","\x18","\xbc","\x51","\xcc"),
	HX_HCSTRING("_borderColorTransform","\x74","\x07","\x2f","\x6f"),
	HX_HCSTRING("_hasBorderAlpha","\x37","\xfe","\xf9","\xe8"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("drawFrame","\x89","\xad","\x8e","\xce"),
	HX_HCSTRING("stampOnAtlas","\xe9","\xf9","\x45","\x2b"),
	HX_HCSTRING("applyMarkup","\xb6","\x43","\x6b","\xf6"),
	HX_HCSTRING("addFormat","\x38","\xc4","\xb2","\xb5"),
	HX_HCSTRING("removeFormat","\x9b","\x2a","\xbc","\x6c"),
	HX_HCSTRING("clearFormats","\x4f","\x73","\xad","\xba"),
	HX_HCSTRING("setFormat","\x79","\x04","\x36","\x5d"),
	HX_HCSTRING("setBorderStyle","\x23","\xac","\x54","\xb8"),
	HX_HCSTRING("set_fieldWidth","\xa9","\x9f","\xfa","\x2d"),
	HX_HCSTRING("get_fieldWidth","\x35","\xb7","\xda","\x0d"),
	HX_HCSTRING("set_autoSize","\x4d","\x67","\x8c","\xf9"),
	HX_HCSTRING("get_autoSize","\xd9","\x43","\x93","\xe4"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("get_size","\x4a","\x5c","\x0e","\xcc"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("get_font","\x58","\x19","\x7b","\xc3"),
	HX_HCSTRING("set_font","\xcc","\x72","\xd8","\x71"),
	HX_HCSTRING("get_embedded","\x93","\xcd","\x7b","\x93"),
	HX_HCSTRING("get_systemFont","\xa7","\x4c","\x39","\x68"),
	HX_HCSTRING("set_systemFont","\x1b","\x35","\x59","\x88"),
	HX_HCSTRING("get_bold","\x0e","\x3d","\xd6","\xc0"),
	HX_HCSTRING("set_bold","\x82","\x96","\x33","\x6f"),
	HX_HCSTRING("get_italic","\xb9","\x9e","\xeb","\xf6"),
	HX_HCSTRING("set_italic","\x2d","\x3d","\x69","\xfa"),
	HX_HCSTRING("get_wordWrap","\xbd","\xc8","\xf4","\xb5"),
	HX_HCSTRING("set_wordWrap","\x31","\xec","\xed","\xca"),
	HX_HCSTRING("get_alignment","\xba","\xb6","\xa1","\xab"),
	HX_HCSTRING("set_alignment","\xc6","\x98","\xa7","\xf0"),
	HX_HCSTRING("set_borderStyle","\x48","\xa5","\x43","\xcd"),
	HX_HCSTRING("set_borderColor","\x7a","\x71","\x82","\x93"),
	HX_HCSTRING("set_borderSize","\x8a","\x70","\x03","\x9d"),
	HX_HCSTRING("set_borderQuality","\x96","\x78","\x03","\xa3"),
	HX_HCSTRING("set_graphic","\xcb","\xc1","\x6e","\x04"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("updateColorTransform","\x72","\x0f","\xd2","\x2f"),
	HX_HCSTRING("regenGraphic","\x6b","\x55","\x39","\x8b"),
	HX_HCSTRING("drawTextFieldTo","\x04","\x9e","\x45","\x9d"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("calcFrame","\x58","\x93","\x8c","\xf9"),
	HX_HCSTRING("applyBorderStyle","\xd7","\xbd","\xa2","\x48"),
	HX_HCSTRING("applyBorderTransparency","\x32","\x96","\xaf","\x17"),
	HX_HCSTRING("copyTextWithOffset","\xdb","\x97","\x6d","\x53"),
	HX_HCSTRING("applyFormats","\x8e","\x0d","\x9c","\x1e"),
	HX_HCSTRING("copyTextFormat","\xd9","\x63","\x8e","\x5f"),
	HX_HCSTRING("dtfCopy","\xab","\x51","\x45","\x87"),
	HX_HCSTRING("updateDefaultFormat","\x0f","\x5b","\x8e","\x8b"),
	HX_HCSTRING("set_frames","\xe3","\xbd","\x8a","\xa0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxText_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxText_obj::VERTICAL_GUTTER,"VERTICAL_GUTTER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxText_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxText_obj::VERTICAL_GUTTER,"VERTICAL_GUTTER");
};

#endif

hx::Class FlxText_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("VERTICAL_GUTTER","\x04","\xb3","\x89","\x07"),
	::String(null()) };

void FlxText_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.text.FlxText","\xb0","\x4a","\x1b","\xca");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxText_obj >;
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

void FlxText_obj::__boot()
{
	VERTICAL_GUTTER= (int)4;
}

} // end namespace flixel
} // end namespace text
