#pragma once
// IWYU pragma private; include "GlobalNamespace/SettingsManager.hpp"
#include "BeatSaber/Settings/zzzz__Settings_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "BeatSaber/Settings/zzzz__Settings_def.hpp"
#include "GlobalNamespace/zzzz__HardwareCategory_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SettingsManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsManager::*)()>(&::GlobalNamespace::SettingsManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3290a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.CreateUninitialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SettingsManager* (*)()>(&::GlobalNamespace::SettingsManager::CreateUninitialized)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3290a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsManager*>(), { "CreateUninitialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.CreateInstanceWithCurrentPlatformPreset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SettingsManager* (*)()>(&::GlobalNamespace::SettingsManager::CreateInstanceWithCurrentPlatformPreset)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3290a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsManager*>(), { "CreateInstanceWithCurrentPlatformPreset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.AdjustPlatformSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::BeatSaber::Settings::Settings>, ::GlobalNamespace::HardwareCategory)>(
    &::GlobalNamespace::SettingsManager::AdjustPlatformSettings)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x328dc28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsManager*>(),
                                         { "AdjustPlatformSettings", {}, { ::i2c::type_of<::by_ref<::BeatSaber::Settings::Settings>>(), ::i2c::type_of<::GlobalNamespace::HardwareCategory>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.GetPlatformPreset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::BeatSaber::Settings::Settings> (*)(::GlobalNamespace::HardwareCategory)>(&::GlobalNamespace::SettingsManager::GetPlatformPreset)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x328da18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsManager*>(), { "GetPlatformPreset", {}, { ::i2c::type_of<::GlobalNamespace::HardwareCategory>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.GetCurrentPlatformPreset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::BeatSaber::Settings::Settings> (*)()>(&::GlobalNamespace::SettingsManager::GetCurrentPlatformPreset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3290ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsManager*>(), { "GetCurrentPlatformPreset", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Settings::Settings& GlobalNamespace::SettingsManager::__cordl_internal_get_settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr ::BeatSaber::Settings::Settings const& GlobalNamespace::SettingsManager::__cordl_internal_get_settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr void GlobalNamespace::SettingsManager::__cordl_internal_set_settings(::BeatSaber::Settings::Settings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___settings = value;
}
inline void GlobalNamespace::SettingsManager::setStaticF_skipValidation(bool value) {
  ::cordl_internals::setStaticField<bool, "skipValidation", ::GlobalNamespace::SettingsManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::SettingsManager::getStaticF_skipValidation() {
  return ::cordl_internals::getStaticField<bool, "skipValidation", ::GlobalNamespace::SettingsManager*>();
}
inline void GlobalNamespace::SettingsManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SettingsManager* GlobalNamespace::SettingsManager::CreateUninitialized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsManager*>(), { "CreateUninitialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SettingsManager*>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::SettingsManager* GlobalNamespace::SettingsManager::CreateInstanceWithCurrentPlatformPreset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsManager*>(), { "CreateInstanceWithCurrentPlatformPreset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SettingsManager*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SettingsManager::AdjustPlatformSettings(::by_ref<::BeatSaber::Settings::Settings> settings, ::GlobalNamespace::HardwareCategory platform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsManager*>(),
                                       { "AdjustPlatformSettings", {}, { ::i2c::type_of<::by_ref<::BeatSaber::Settings::Settings>>(), ::i2c::type_of<::GlobalNamespace::HardwareCategory>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, settings, platform);
}
inline ::by_ref<::BeatSaber::Settings::Settings> GlobalNamespace::SettingsManager::GetPlatformPreset(::GlobalNamespace::HardwareCategory platform) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsManager*>(), { "GetPlatformPreset", {}, { ::i2c::type_of<::GlobalNamespace::HardwareCategory>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::BeatSaber::Settings::Settings>>(nullptr, ___internal_method, platform);
}
inline ::by_ref<::BeatSaber::Settings::Settings> GlobalNamespace::SettingsManager::GetCurrentPlatformPreset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsManager*>(), { "GetCurrentPlatformPreset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::BeatSaber::Settings::Settings>>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::SettingsManager* GlobalNamespace::SettingsManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SettingsManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SettingsManager::SettingsManager() {}
