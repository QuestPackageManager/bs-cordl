#pragma once
// IWYU pragma private; include "GlobalNamespace/MixedLightsColorSetterRuntimeLightWithIds.hpp"
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_impl.hpp"
#include "GlobalNamespace/zzzz__MixedLightsColorSetterRuntimeLightWithIds_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockColorSetter_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds.ColorWasSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::ColorWasSet)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x58722c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::*)()>(
    &::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58722f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter>& GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::__cordl_internal_get__materialPropertyBlockColorSetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockColorSetter;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter> const&
GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::__cordl_internal_get__materialPropertyBlockColorSetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockColorSetter;
}
constexpr void GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::__cordl_internal_set__materialPropertyBlockColorSetter(::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialPropertyBlockColorSetter = value;
}
constexpr float_t& GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::__cordl_internal_get__lightMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightMultiplier;
}
constexpr float_t const& GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::__cordl_internal_get__lightMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightMultiplier;
}
constexpr void GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::__cordl_internal_set__lightMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightMultiplier = value;
}
inline void GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::ColorWasSet(::UnityEngine::Color color) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds* GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::MixedLightsColorSetterRuntimeLightWithIds() {}
