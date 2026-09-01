#pragma once
// IWYU pragma private; include "GlobalNamespace\ColorStyle.hpp"
#include "GlobalNamespace/zzzz__GradientDirection_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__ColorStyle_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "GlobalNamespace/zzzz__GradientDirection_def.hpp"
#include "GlobalNamespace/zzzz__GradientSO_def.hpp"
#include "GlobalNamespace/zzzz__IReadOnlyColorStyle_def.hpp"
#include "GlobalNamespace/zzzz__LerpMask_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorStyle.get_useScriptableObjectColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ColorStyle::*)()>(&::GlobalNamespace::ColorStyle::get_useScriptableObjectColor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36f7af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "get_useScriptableObjectColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorStyle.set_useScriptableObjectColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorStyle::*)(bool)>(&::GlobalNamespace::ColorStyle::set_useScriptableObjectColor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36f7afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "set_useScriptableObjectColor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorStyle.get_color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::ColorStyle::*)()>(&::GlobalNamespace::ColorStyle::get_color)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x36f7b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "get_color", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorStyle.set_color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorStyle::*)(::UnityEngine::Color)>(&::GlobalNamespace::ColorStyle::set_color)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x36f7b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "set_color", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorStyle.get_globalLightTintIntensity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ColorStyle::*)()>(&::GlobalNamespace::ColorStyle::get_globalLightTintIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36f7b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "get_globalLightTintIntensity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorStyle.set_globalLightTintIntensity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorStyle::*)(float_t)>(&::GlobalNamespace::ColorStyle::set_globalLightTintIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36f7ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "set_globalLightTintIntensity", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorStyle.get_gradient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ColorStyle::*)()>(&::GlobalNamespace::ColorStyle::get_gradient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36f7ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "get_gradient", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorStyle.set_gradient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorStyle::*)(bool)>(&::GlobalNamespace::ColorStyle::set_gradient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36f7bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "set_gradient", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorStyle.get_color0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::ColorStyle::*)()>(&::GlobalNamespace::ColorStyle::get_color0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x36f7bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "get_color0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorStyle.set_color0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorStyle::*)(::UnityEngine::Color)>(&::GlobalNamespace::ColorStyle::set_color0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x36f7c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "set_color0", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorStyle.get_color1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::ColorStyle::*)()>(&::GlobalNamespace::ColorStyle::get_color1)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x36f7c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "get_color1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorStyle.set_color1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorStyle::*)(::UnityEngine::Color)>(&::GlobalNamespace::ColorStyle::set_color1)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x36f7cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "set_color1", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorStyle.get_gradientDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GradientDirection (::GlobalNamespace::ColorStyle::*)()>(&::GlobalNamespace::ColorStyle::get_gradientDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36f7ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "get_gradientDirection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorStyle.set_gradientDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorStyle::*)(::GlobalNamespace::GradientDirection)>(&::GlobalNamespace::ColorStyle::set_gradientDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36f7ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "set_gradientDirection", {}, { ::i2c::type_of<::GlobalNamespace::GradientDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorStyle.get_flipGradientColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ColorStyle::*)()>(&::GlobalNamespace::ColorStyle::get_flipGradientColors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36f7cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "get_flipGradientColors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorStyle.get_useMultiStepGradient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ColorStyle::*)()>(&::GlobalNamespace::ColorStyle::get_useMultiStepGradient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36f7cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "get_useMultiStepGradient", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorStyle.set_useMultiStepGradient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorStyle::*)(bool)>(&::GlobalNamespace::ColorStyle::set_useMultiStepGradient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36f7d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "set_useMultiStepGradient", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorStyle.get_multiStepGradient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Gradient* (::GlobalNamespace::ColorStyle::*)()>(&::GlobalNamespace::ColorStyle::get_multiStepGradient)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x36f7d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "get_multiStepGradient", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorStyle.set_multiStepGradient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorStyle::*)(::UnityEngine::Gradient*)>(&::GlobalNamespace::ColorStyle::set_multiStepGradient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36f7e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "set_multiStepGradient", {}, { ::i2c::type_of<::UnityEngine::Gradient*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorStyle.Lerp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorStyle::*)(::GlobalNamespace::IReadOnlyColorStyle*, ::GlobalNamespace::IReadOnlyColorStyle*, float_t,
                                                                                               ::GlobalNamespace::LerpMask)>(&::GlobalNamespace::ColorStyle::Lerp)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x36f7e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "Lerp",
                                                                                 {},
                                                                                 { ::i2c::type_of<::GlobalNamespace::IReadOnlyColorStyle*>(), ::i2c::type_of<::GlobalNamespace::IReadOnlyColorStyle*>(),
                                                                                   ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::LerpMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorStyle.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ColorStyle::*)()>(&::GlobalNamespace::ColorStyle::Clone)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x36f82dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorStyle.CloneGradient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Gradient* (*)(::UnityEngine::Gradient*)>(&::GlobalNamespace::ColorStyle::CloneGradient)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x36f843c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "CloneGradient", {}, { ::i2c::type_of<::UnityEngine::Gradient*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorStyle.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ColorStyle* (::GlobalNamespace::ColorStyle::*)()>(&::GlobalNamespace::ColorStyle::Copy)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x36f8520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "Copy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorStyle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorStyle::*)()>(&::GlobalNamespace::ColorStyle::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x36f83a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::ColorStyle::__cordl_internal_get__useScriptableObjectColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useScriptableObjectColor;
}
constexpr bool const& GlobalNamespace::ColorStyle::__cordl_internal_get__useScriptableObjectColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useScriptableObjectColor;
}
constexpr void GlobalNamespace::ColorStyle::__cordl_internal_set__useScriptableObjectColor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useScriptableObjectColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::ColorStyle::__cordl_internal_get__color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ColorStyle::__cordl_internal_get__color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr void GlobalNamespace::ColorStyle::__cordl_internal_set__color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO>& GlobalNamespace::ColorStyle::__cordl_internal_get__colorSo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSo;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& GlobalNamespace::ColorStyle::__cordl_internal_get__colorSo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSo;
}
constexpr void GlobalNamespace::ColorStyle::__cordl_internal_set__colorSo(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorSo = value;
}
constexpr float_t& GlobalNamespace::ColorStyle::__cordl_internal_get__globalLightTintIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalLightTintIntensity;
}
constexpr float_t const& GlobalNamespace::ColorStyle::__cordl_internal_get__globalLightTintIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalLightTintIntensity;
}
constexpr void GlobalNamespace::ColorStyle::__cordl_internal_set__globalLightTintIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____globalLightTintIntensity = value;
}
constexpr bool& GlobalNamespace::ColorStyle::__cordl_internal_get__gradient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gradient;
}
constexpr bool const& GlobalNamespace::ColorStyle::__cordl_internal_get__gradient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gradient;
}
constexpr void GlobalNamespace::ColorStyle::__cordl_internal_set__gradient(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gradient = value;
}
constexpr bool& GlobalNamespace::ColorStyle::__cordl_internal_get__useScriptableObjectGradientColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useScriptableObjectGradientColors;
}
constexpr bool const& GlobalNamespace::ColorStyle::__cordl_internal_get__useScriptableObjectGradientColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useScriptableObjectGradientColors;
}
constexpr void GlobalNamespace::ColorStyle::__cordl_internal_set__useScriptableObjectGradientColors(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useScriptableObjectGradientColors = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::ColorStyle::__cordl_internal_get__color0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color0;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ColorStyle::__cordl_internal_get__color0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color0;
}
constexpr void GlobalNamespace::ColorStyle::__cordl_internal_set__color0(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color0 = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::ColorStyle::__cordl_internal_get__color1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color1;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ColorStyle::__cordl_internal_get__color1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color1;
}
constexpr void GlobalNamespace::ColorStyle::__cordl_internal_set__color1(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color1 = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO>& GlobalNamespace::ColorStyle::__cordl_internal_get__color0So() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color0So;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& GlobalNamespace::ColorStyle::__cordl_internal_get__color0So() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color0So;
}
constexpr void GlobalNamespace::ColorStyle::__cordl_internal_set__color0So(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color0So = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO>& GlobalNamespace::ColorStyle::__cordl_internal_get__color1So() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color1So;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& GlobalNamespace::ColorStyle::__cordl_internal_get__color1So() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color1So;
}
constexpr void GlobalNamespace::ColorStyle::__cordl_internal_set__color1So(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color1So = value;
}
constexpr ::GlobalNamespace::GradientDirection& GlobalNamespace::ColorStyle::__cordl_internal_get__gradientDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gradientDirection;
}
constexpr ::GlobalNamespace::GradientDirection const& GlobalNamespace::ColorStyle::__cordl_internal_get__gradientDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gradientDirection;
}
constexpr void GlobalNamespace::ColorStyle::__cordl_internal_set__gradientDirection(::GlobalNamespace::GradientDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gradientDirection = value;
}
constexpr bool& GlobalNamespace::ColorStyle::__cordl_internal_get__flipGradientColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flipGradientColors;
}
constexpr bool const& GlobalNamespace::ColorStyle::__cordl_internal_get__flipGradientColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flipGradientColors;
}
constexpr void GlobalNamespace::ColorStyle::__cordl_internal_set__flipGradientColors(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flipGradientColors = value;
}
constexpr bool& GlobalNamespace::ColorStyle::__cordl_internal_get__useMultiStepGradient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useMultiStepGradient;
}
constexpr bool const& GlobalNamespace::ColorStyle::__cordl_internal_get__useMultiStepGradient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useMultiStepGradient;
}
constexpr void GlobalNamespace::ColorStyle::__cordl_internal_set__useMultiStepGradient(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useMultiStepGradient = value;
}
constexpr ::UnityEngine::Gradient*& GlobalNamespace::ColorStyle::__cordl_internal_get__multiStepGradient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiStepGradient;
}
constexpr ::UnityEngine::Gradient* const& GlobalNamespace::ColorStyle::__cordl_internal_get__multiStepGradient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiStepGradient;
}
constexpr void GlobalNamespace::ColorStyle::__cordl_internal_set__multiStepGradient(::UnityEngine::Gradient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiStepGradient = value;
}
constexpr bool& GlobalNamespace::ColorStyle::__cordl_internal_get__useScriptableObjectMultiStepGradient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useScriptableObjectMultiStepGradient;
}
constexpr bool const& GlobalNamespace::ColorStyle::__cordl_internal_get__useScriptableObjectMultiStepGradient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useScriptableObjectMultiStepGradient;
}
constexpr void GlobalNamespace::ColorStyle::__cordl_internal_set__useScriptableObjectMultiStepGradient(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useScriptableObjectMultiStepGradient = value;
}
constexpr ::UnityW<::GlobalNamespace::GradientSO>& GlobalNamespace::ColorStyle::__cordl_internal_get__multiStepGradientSo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiStepGradientSo;
}
constexpr ::UnityW<::GlobalNamespace::GradientSO> const& GlobalNamespace::ColorStyle::__cordl_internal_get__multiStepGradientSo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiStepGradientSo;
}
constexpr void GlobalNamespace::ColorStyle::__cordl_internal_set__multiStepGradientSo(::UnityW<::GlobalNamespace::GradientSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiStepGradientSo = value;
}
inline bool GlobalNamespace::ColorStyle::get_useScriptableObjectColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "get_useScriptableObjectColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::ColorStyle::set_useScriptableObjectColor(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "set_useScriptableObjectColor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color GlobalNamespace::ColorStyle::get_color() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "get_color", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::ColorStyle::set_color(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "set_color", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::ColorStyle::get_globalLightTintIntensity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "get_globalLightTintIntensity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::ColorStyle::set_globalLightTintIntensity(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "set_globalLightTintIntensity", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::ColorStyle::get_gradient() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "get_gradient", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::ColorStyle::set_gradient(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "set_gradient", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color GlobalNamespace::ColorStyle::get_color0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "get_color0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::ColorStyle::set_color0(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "set_color0", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color GlobalNamespace::ColorStyle::get_color1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "get_color1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::ColorStyle::set_color1(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "set_color1", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GradientDirection GlobalNamespace::ColorStyle::get_gradientDirection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "get_gradientDirection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GradientDirection>(this, ___internal_method);
}
inline void GlobalNamespace::ColorStyle::set_gradientDirection(::GlobalNamespace::GradientDirection value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "set_gradientDirection", {}, { ::i2c::type_of<::GlobalNamespace::GradientDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::ColorStyle::get_flipGradientColors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "get_flipGradientColors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::ColorStyle::get_useMultiStepGradient() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "get_useMultiStepGradient", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::ColorStyle::set_useMultiStepGradient(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "set_useMultiStepGradient", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Gradient* GlobalNamespace::ColorStyle::get_multiStepGradient() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "get_multiStepGradient", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Gradient*>(this, ___internal_method);
}
inline void GlobalNamespace::ColorStyle::set_multiStepGradient(::UnityEngine::Gradient* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "set_multiStepGradient", {}, { ::i2c::type_of<::UnityEngine::Gradient*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ColorStyle::Lerp(::GlobalNamespace::IReadOnlyColorStyle* from, ::GlobalNamespace::IReadOnlyColorStyle* to, float_t t, ::GlobalNamespace::LerpMask mask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "Lerp",
                                                                               {},
                                                                               { ::i2c::type_of<::GlobalNamespace::IReadOnlyColorStyle*>(), ::i2c::type_of<::GlobalNamespace::IReadOnlyColorStyle*>(),
                                                                                 ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::LerpMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to, t, mask);
}
inline ::System::Object* GlobalNamespace::ColorStyle::Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::UnityEngine::Gradient* GlobalNamespace::ColorStyle::CloneGradient(::UnityEngine::Gradient* gradient) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "CloneGradient", {}, { ::i2c::type_of<::UnityEngine::Gradient*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Gradient*>(nullptr, ___internal_method, gradient);
}
inline ::GlobalNamespace::ColorStyle* GlobalNamespace::ColorStyle::Copy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { "Copy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorStyle*>(this, ___internal_method);
}
inline void GlobalNamespace::ColorStyle::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorStyle*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorStyle* GlobalNamespace::ColorStyle::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ColorStyle*>());
}
/// @brief Convert operator to "::GlobalNamespace::IReadOnlyColorStyle"
constexpr GlobalNamespace::ColorStyle::operator ::GlobalNamespace::IReadOnlyColorStyle*() noexcept {
  return static_cast<::GlobalNamespace::IReadOnlyColorStyle*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IReadOnlyColorStyle"
constexpr ::GlobalNamespace::IReadOnlyColorStyle* GlobalNamespace::ColorStyle::i___GlobalNamespace__IReadOnlyColorStyle() noexcept {
  return static_cast<::GlobalNamespace::IReadOnlyColorStyle*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr GlobalNamespace::ColorStyle::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* GlobalNamespace::ColorStyle::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorStyle::ColorStyle() {}
