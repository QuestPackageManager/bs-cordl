#pragma once
// IWYU pragma private; include "GlobalNamespace/PointLightWithIds.hpp"
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_impl.hpp"
#include "GlobalNamespace/zzzz__PointLightWithIds_def.hpp"
#include "GlobalNamespace/zzzz__PointLight_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PointLightWithIds.ColorWasSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PointLightWithIds::*)(::UnityEngine::Color)>(&::GlobalNamespace::PointLightWithIds::ColorWasSet)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x587278c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PointLightWithIds*>(), { ::i2c::class_of<::GlobalNamespace::PointLightWithIds*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PointLightWithIds._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PointLightWithIds::*)()>(&::GlobalNamespace::PointLightWithIds::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58727a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PointLightWithIds*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PointLight>& GlobalNamespace::PointLightWithIds::__cordl_internal_get__pointLight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointLight;
}
constexpr ::UnityW<::GlobalNamespace::PointLight> const& GlobalNamespace::PointLightWithIds::__cordl_internal_get__pointLight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointLight;
}
constexpr void GlobalNamespace::PointLightWithIds::__cordl_internal_set__pointLight(::UnityW<::GlobalNamespace::PointLight> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pointLight = value;
}
inline void GlobalNamespace::PointLightWithIds::ColorWasSet(::UnityEngine::Color color) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PointLightWithIds*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::PointLightWithIds::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PointLightWithIds*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PointLightWithIds* GlobalNamespace::PointLightWithIds::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PointLightWithIds*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PointLightWithIds::PointLightWithIds() {}
