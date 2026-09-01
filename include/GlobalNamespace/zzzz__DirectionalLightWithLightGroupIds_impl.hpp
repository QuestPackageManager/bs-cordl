#pragma once
// IWYU pragma private; include "GlobalNamespace\DirectionalLightWithLightGroupIds.hpp"
#include "GlobalNamespace/zzzz__RuntimeLightWithLightGroupIds_impl.hpp"
#include "GlobalNamespace/zzzz__DirectionalLightWithLightGroupIds_def.hpp"
#include "GlobalNamespace/zzzz__DirectionalLight_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DirectionalLightWithLightGroupIds.ColorWasSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DirectionalLightWithLightGroupIds::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::DirectionalLightWithLightGroupIds::ColorWasSet)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x586cc48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::DirectionalLightWithLightGroupIds*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::DirectionalLightWithLightGroupIds*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DirectionalLightWithLightGroupIds._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DirectionalLightWithLightGroupIds::*)()>(&::GlobalNamespace::DirectionalLightWithLightGroupIds::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x586cc64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DirectionalLightWithLightGroupIds*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::DirectionalLight>& GlobalNamespace::DirectionalLightWithLightGroupIds::__cordl_internal_get__directionalLight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLight;
}
constexpr ::UnityW<::GlobalNamespace::DirectionalLight> const& GlobalNamespace::DirectionalLightWithLightGroupIds::__cordl_internal_get__directionalLight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLight;
}
constexpr void GlobalNamespace::DirectionalLightWithLightGroupIds::__cordl_internal_set__directionalLight(::UnityW<::GlobalNamespace::DirectionalLight> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____directionalLight = value;
}
inline void GlobalNamespace::DirectionalLightWithLightGroupIds::ColorWasSet(::UnityEngine::Color color) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::DirectionalLightWithLightGroupIds*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::DirectionalLightWithLightGroupIds::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DirectionalLightWithLightGroupIds*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DirectionalLightWithLightGroupIds* GlobalNamespace::DirectionalLightWithLightGroupIds::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DirectionalLightWithLightGroupIds*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DirectionalLightWithLightGroupIds::DirectionalLightWithLightGroupIds() {}
