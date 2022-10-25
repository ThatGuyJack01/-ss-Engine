#ifndef INCLUDED_flixel_addons_display_FlxMouseSpring
#define INCLUDED_flixel_addons_display_FlxMouseSpring

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,display,FlxExtendedSprite)
HX_DECLARE_CLASS3(flixel,addons,display,FlxMouseSpring)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace display{


class HXCPP_CLASS_ATTRIBUTES FlxMouseSpring_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxMouseSpring_obj OBJ_;
		FlxMouseSpring_obj();

	public:
		enum { _hx_ClassId = 0x4d452333 };

		void __construct( ::flixel::addons::display::FlxExtendedSprite Sprite,::hx::Null< bool >  __o_RetainVelocity,::hx::Null< Float >  __o_Tension,::hx::Null< Float >  __o_Friction,::hx::Null< Float >  __o_Gravity);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.display.FlxMouseSpring")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.display.FlxMouseSpring"); }
		static ::hx::ObjectPtr< FlxMouseSpring_obj > __new( ::flixel::addons::display::FlxExtendedSprite Sprite,::hx::Null< bool >  __o_RetainVelocity,::hx::Null< Float >  __o_Tension,::hx::Null< Float >  __o_Friction,::hx::Null< Float >  __o_Gravity);
		static ::hx::ObjectPtr< FlxMouseSpring_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::display::FlxExtendedSprite Sprite,::hx::Null< bool >  __o_RetainVelocity,::hx::Null< Float >  __o_Tension,::hx::Null< Float >  __o_Friction,::hx::Null< Float >  __o_Gravity);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxMouseSpring_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxMouseSpring",a0,c3,a5,17); }

		 ::flixel::addons::display::FlxExtendedSprite sprite;
		Float tension;
		Float friction;
		Float gravity;
		bool _retainVelocity;
		Float _vx;
		Float _vy;
		Float _dx;
		Float _dy;
		Float _ax;
		Float _ay;
		void update(Float elapsed);
		::Dynamic update_dyn();

		void reset();
		::Dynamic reset_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace display

#endif /* INCLUDED_flixel_addons_display_FlxMouseSpring */ 