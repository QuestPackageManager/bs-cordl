#pragma once
// IWYU pragma private; include "GlobalNamespace\LightIdColorPair.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__LightIdColorPair_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightIdColorPair.get_lightColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::LightIdColorPair::*)()>(&::GlobalNamespace::LightIdColorPair::get_lightColor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5a308e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightIdColorPair*>(), { "get_lightColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightIdColorPair.get_useScriptableObjectColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LightIdColorPair::*)()>(&::GlobalNamespace::LightIdColorPair::get_useScriptableObjectColor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a30928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightIdColorPair*>(), { "get_useScriptableObjectColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightIdColorPair.set_useScriptableObjectColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightIdColorPair::*)(bool)>(&::GlobalNamespace::LightIdColorPair::set_useScriptableObjectColor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a30930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightIdColorPair*>(), { "set_useScriptableObjectColor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightIdColorPair._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightIdColorPair::*)()>(&::GlobalNamespace::LightIdColorPair::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a30938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightIdColorPair*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LightIdColorPair::__cordl_internal_get_lightId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightId;
}
constexpr int32_t const& GlobalNamespace::LightIdColorPair::__cordl_internal_get_lightId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightId;
}
constexpr void GlobalNamespace::LightIdColorPair::__cordl_internal_set_lightId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightId = value;
}
constexpr bool& GlobalNamespace::LightIdColorPair::__cordl_internal_get__useScriptableObjectColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useScriptableObjectColor;
}
constexpr bool const& GlobalNamespace::LightIdColorPair::__cordl_internal_get__useScriptableObjectColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useScriptableObjectColor;
}
constexpr void GlobalNamespace::LightIdColorPair::__cordl_internal_set__useScriptableObjectColor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useScriptableObjectColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::LightIdColorPair::__cordl_internal_get_color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LightIdColorPair::__cordl_internal_get_color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr void GlobalNamespace::LightIdColorPair::__cordl_internal_set_color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___color = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO>& GlobalNamespace::LightIdColorPair::__cordl_internal_get_baseColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseColor;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& GlobalNamespace::LightIdColorPair::__cordl_internal_get_baseColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseColor;
}
constexpr void GlobalNamespace::LightIdColorPair::__cordl_internal_set_baseColor(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___baseColor = value;
}
constexpr float_t& GlobalNamespace::LightIdColorPair::__cordl_internal_get_intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intensity;
}
constexpr float_t const& GlobalNamespace::LightIdColorPair::__cordl_internal_get_intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intensity;
}
constexpr void GlobalNamespace::LightIdColorPair::__cordl_internal_set_intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___intensity = value;
}
inline ::UnityEngine::Color GlobalNamespace::LightIdColorPair::get_lightColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightIdColorPair*>(), { "get_lightColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline bool GlobalNamespace::LightIdColorPair::get_useScriptableObjectColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightIdColorPair*>(), { "get_useScriptableObjectColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::LightIdColorPair::set_useScriptableObjectColor(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightIdColorPair*>(), { "set_useScriptableObjectColor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LightIdColorPair::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightIdColorPair*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightIdColorPair* GlobalNamespace::LightIdColorPair::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightIdColorPair*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightIdColorPair::LightIdColorPair() {}
