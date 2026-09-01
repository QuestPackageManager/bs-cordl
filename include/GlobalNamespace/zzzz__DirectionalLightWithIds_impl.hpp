#pragma once
// IWYU pragma private; include "GlobalNamespace\DirectionalLightWithIds.hpp"
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__DirectionalLightWithIds_def.hpp"
#include "GlobalNamespace/zzzz__DirectionalLight_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DirectionalLightWithIds.ColorWasSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DirectionalLightWithIds::*)(::UnityEngine::Color)>(&::GlobalNamespace::DirectionalLightWithIds::ColorWasSet)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x586cb8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::DirectionalLightWithIds*>(), { ::i2c::class_of<::GlobalNamespace::DirectionalLightWithIds*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DirectionalLightWithIds._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DirectionalLightWithIds::*)()>(&::GlobalNamespace::DirectionalLightWithIds::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x586cbd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DirectionalLightWithIds*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::DirectionalLight>& GlobalNamespace::DirectionalLightWithIds::__cordl_internal_get__directionalLight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLight;
}
constexpr ::UnityW<::GlobalNamespace::DirectionalLight> const& GlobalNamespace::DirectionalLightWithIds::__cordl_internal_get__directionalLight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLight;
}
constexpr void GlobalNamespace::DirectionalLightWithIds::__cordl_internal_set__directionalLight(::UnityW<::GlobalNamespace::DirectionalLight> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____directionalLight = value;
}
constexpr bool& GlobalNamespace::DirectionalLightWithIds::__cordl_internal_get__setIntensityOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setIntensityOnly;
}
constexpr bool const& GlobalNamespace::DirectionalLightWithIds::__cordl_internal_get__setIntensityOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setIntensityOnly;
}
constexpr void GlobalNamespace::DirectionalLightWithIds::__cordl_internal_set__setIntensityOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setIntensityOnly = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::DirectionalLightWithIds::__cordl_internal_get__defaultColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::DirectionalLightWithIds::__cordl_internal_get__defaultColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultColor;
}
constexpr void GlobalNamespace::DirectionalLightWithIds::__cordl_internal_set__defaultColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultColor = value;
}
inline void GlobalNamespace::DirectionalLightWithIds::ColorWasSet(::UnityEngine::Color color) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::DirectionalLightWithIds*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::DirectionalLightWithIds::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DirectionalLightWithIds*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DirectionalLightWithIds* GlobalNamespace::DirectionalLightWithIds::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DirectionalLightWithIds*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DirectionalLightWithIds::DirectionalLightWithIds() {}
