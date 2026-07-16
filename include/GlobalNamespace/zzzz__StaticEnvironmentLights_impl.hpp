#pragma once
// IWYU pragma private; include "GlobalNamespace/StaticEnvironmentLights.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StaticEnvironmentLights_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StaticEnvironmentLights.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StaticEnvironmentLights::*)()>(&::GlobalNamespace::StaticEnvironmentLights::Awake)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x59a1d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticEnvironmentLights*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StaticEnvironmentLights._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StaticEnvironmentLights::*)()>(&::GlobalNamespace::StaticEnvironmentLights::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59a1dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticEnvironmentLights*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Color>& GlobalNamespace::StaticEnvironmentLights::__cordl_internal_get__lightColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColors;
}
constexpr ::ArrayW<::UnityEngine::Color> const& GlobalNamespace::StaticEnvironmentLights::__cordl_internal_get__lightColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColors;
}
constexpr void GlobalNamespace::StaticEnvironmentLights::__cordl_internal_set__lightColors(::ArrayW<::UnityEngine::Color> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightColors = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& GlobalNamespace::StaticEnvironmentLights::__cordl_internal_get__materials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& GlobalNamespace::StaticEnvironmentLights::__cordl_internal_get__materials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materials;
}
constexpr void GlobalNamespace::StaticEnvironmentLights::__cordl_internal_set__materials(::ArrayW<::UnityW<::UnityEngine::Material>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materials = value;
}
inline void GlobalNamespace::StaticEnvironmentLights::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticEnvironmentLights*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StaticEnvironmentLights::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticEnvironmentLights*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StaticEnvironmentLights* GlobalNamespace::StaticEnvironmentLights::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StaticEnvironmentLights*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StaticEnvironmentLights::StaticEnvironmentLights() {}
