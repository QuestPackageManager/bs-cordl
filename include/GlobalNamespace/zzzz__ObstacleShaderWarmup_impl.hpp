#pragma once
// IWYU pragma private; include "GlobalNamespace\ObstacleShaderWarmup.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ObstacleShaderWarmup_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleMaterialSetter_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ObstacleShaderWarmup.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleShaderWarmup::*)()>(&::GlobalNamespace::ObstacleShaderWarmup::Start)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58db604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleShaderWarmup*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleShaderWarmup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleShaderWarmup::*)()>(&::GlobalNamespace::ObstacleShaderWarmup::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58db654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleShaderWarmup*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ObstacleMaterialSetter>& GlobalNamespace::ObstacleShaderWarmup::__cordl_internal_get__obstacleMaterialSetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleMaterialSetter;
}
constexpr ::UnityW<::GlobalNamespace::ObstacleMaterialSetter> const& GlobalNamespace::ObstacleShaderWarmup::__cordl_internal_get__obstacleMaterialSetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleMaterialSetter;
}
constexpr void GlobalNamespace::ObstacleShaderWarmup::__cordl_internal_set__obstacleMaterialSetter(::UnityW<::GlobalNamespace::ObstacleMaterialSetter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstacleMaterialSetter = value;
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::ObstacleShaderWarmup::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::ObstacleShaderWarmup::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::ObstacleShaderWarmup::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
inline void GlobalNamespace::ObstacleShaderWarmup::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleShaderWarmup*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ObstacleShaderWarmup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleShaderWarmup*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ObstacleShaderWarmup* GlobalNamespace::ObstacleShaderWarmup::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ObstacleShaderWarmup*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObstacleShaderWarmup::ObstacleShaderWarmup() {}
