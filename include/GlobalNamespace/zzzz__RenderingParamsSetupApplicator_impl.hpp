#pragma once
// IWYU pragma private; include "GlobalNamespace\RenderingParamsSetupApplicator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RenderingParamsSetupApplicator_def.hpp"
#include "GlobalNamespace/zzzz__IRenderingParamsApplicator_def.hpp"
#include "GlobalNamespace/zzzz__SceneType_def.hpp"
#include "GlobalNamespace/zzzz__SettingsApplicatorSO_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RenderingParamsSetupApplicator.Apply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RenderingParamsSetupApplicator::*)(::GlobalNamespace::SceneType, ::StringW)>(
    &::GlobalNamespace::RenderingParamsSetupApplicator::Apply)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5901ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RenderingParamsSetupApplicator*>(),
                                                                                           { "Apply", {}, { ::i2c::type_of<::GlobalNamespace::SceneType>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RenderingParamsSetupApplicator.ApplyMainSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RenderingParamsSetupApplicator::*)()>(&::GlobalNamespace::RenderingParamsSetupApplicator::ApplyMainSettings)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5901b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RenderingParamsSetupApplicator*>(), { "ApplyMainSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RenderingParamsSetupApplicator.ApplyGraphicsSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RenderingParamsSetupApplicator::*)(::GlobalNamespace::SceneType, ::StringW)>(
    &::GlobalNamespace::RenderingParamsSetupApplicator::ApplyGraphicsSettings)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5901aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RenderingParamsSetupApplicator*>(),
                                                             { "ApplyGraphicsSettings", {}, { ::i2c::type_of<::GlobalNamespace::SceneType>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RenderingParamsSetupApplicator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RenderingParamsSetupApplicator::*)()>(&::GlobalNamespace::RenderingParamsSetupApplicator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5901c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RenderingParamsSetupApplicator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::RenderingParamsSetupApplicator::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::RenderingParamsSetupApplicator::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::RenderingParamsSetupApplicator::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO>& GlobalNamespace::RenderingParamsSetupApplicator::__cordl_internal_get__settingsApplicator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsApplicator;
}
constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO> const& GlobalNamespace::RenderingParamsSetupApplicator::__cordl_internal_get__settingsApplicator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsApplicator;
}
constexpr void GlobalNamespace::RenderingParamsSetupApplicator::__cordl_internal_set__settingsApplicator(::UnityW<::GlobalNamespace::SettingsApplicatorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsApplicator = value;
}
inline void GlobalNamespace::RenderingParamsSetupApplicator::Apply(::GlobalNamespace::SceneType sceneType, ::StringW optionalEnvironmentSerializedName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RenderingParamsSetupApplicator*>(),
                                                                                         { "Apply", {}, { ::i2c::type_of<::GlobalNamespace::SceneType>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneType, optionalEnvironmentSerializedName);
}
inline void GlobalNamespace::RenderingParamsSetupApplicator::ApplyMainSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RenderingParamsSetupApplicator*>(), { "ApplyMainSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RenderingParamsSetupApplicator::ApplyGraphicsSettings(::GlobalNamespace::SceneType sceneType, ::StringW optionalEnvironmentSerializedName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RenderingParamsSetupApplicator*>(),
                                                           { "ApplyGraphicsSettings", {}, { ::i2c::type_of<::GlobalNamespace::SceneType>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneType, optionalEnvironmentSerializedName);
}
inline void GlobalNamespace::RenderingParamsSetupApplicator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RenderingParamsSetupApplicator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RenderingParamsSetupApplicator* GlobalNamespace::RenderingParamsSetupApplicator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RenderingParamsSetupApplicator*>());
}
/// @brief Convert operator to "::GlobalNamespace::IRenderingParamsApplicator"
constexpr GlobalNamespace::RenderingParamsSetupApplicator::operator ::GlobalNamespace::IRenderingParamsApplicator*() noexcept {
  return static_cast<::GlobalNamespace::IRenderingParamsApplicator*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IRenderingParamsApplicator"
constexpr ::GlobalNamespace::IRenderingParamsApplicator* GlobalNamespace::RenderingParamsSetupApplicator::i___GlobalNamespace__IRenderingParamsApplicator() noexcept {
  return static_cast<::GlobalNamespace::IRenderingParamsApplicator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RenderingParamsSetupApplicator::RenderingParamsSetupApplicator() {}
