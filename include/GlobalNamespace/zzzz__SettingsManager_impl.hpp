#pragma once
// IWYU pragma private; include "GlobalNamespace/SettingsManager.hpp"
#include "BeatSaber/Settings/zzzz__Settings_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "BeatSaber/Settings/zzzz__Settings_def.hpp"
#include "GlobalNamespace/zzzz__HardwareCategory_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SettingsManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsManager::*)()>(&::GlobalNamespace::SettingsManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226ce98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.CreateUninitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SettingsManager* (*)()>(&::GlobalNamespace::SettingsManager::CreateUninitialized)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x226cea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(),
                                                                               "CreateUninitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.CreateInstanceWithCurrentPlatformPreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SettingsManager* (*)()>(
    &::GlobalNamespace::SettingsManager::CreateInstanceWithCurrentPlatformPreset)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x226cef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "CreateInstanceWithCurrentPlatformPreset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.AdjustPlatformSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::BeatSaber::Settings::Settings>, ::GlobalNamespace::HardwareCategory)>(
    &::GlobalNamespace::SettingsManager::AdjustPlatformSettings)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x226a2fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "AdjustPlatformSettings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::BeatSaber::Settings::Settings>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HardwareCategory>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.GetPlatformPreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::BeatSaber::Settings::Settings> (*)(::GlobalNamespace::HardwareCategory)>(
    &::GlobalNamespace::SettingsManager::GetPlatformPreset)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x226a050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "GetPlatformPreset", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HardwareCategory>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsManager.GetCurrentPlatformPreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::BeatSaber::Settings::Settings> (*)()>(&::GlobalNamespace::SettingsManager::GetCurrentPlatformPreset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x226cf80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(),
                                                                               "GetCurrentPlatformPreset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  ::cordl_internals::setStaticField<bool, "skipValidation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::SettingsManager::getStaticF_skipValidation() {
  return ::cordl_internals::getStaticField<bool, "skipValidation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get>();
}
inline void GlobalNamespace::SettingsManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SettingsManager* GlobalNamespace::SettingsManager::CreateUninitialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "CreateUninitialized",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SettingsManager*, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::SettingsManager* GlobalNamespace::SettingsManager::CreateInstanceWithCurrentPlatformPreset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "CreateInstanceWithCurrentPlatformPreset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SettingsManager*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SettingsManager::AdjustPlatformSettings(::ByRef<::BeatSaber::Settings::Settings> settings, ::GlobalNamespace::HardwareCategory platform) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "AdjustPlatformSettings", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::BeatSaber::Settings::Settings>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HardwareCategory>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, settings, platform);
}
inline ::ByRef<::BeatSaber::Settings::Settings> GlobalNamespace::SettingsManager::GetPlatformPreset(::GlobalNamespace::HardwareCategory platform) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(), "GetPlatformPreset", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HardwareCategory>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::BeatSaber::Settings::Settings>, false>(nullptr, ___internal_method, platform);
}
inline ::ByRef<::BeatSaber::Settings::Settings> GlobalNamespace::SettingsManager::GetCurrentPlatformPreset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsManager*>::get(),
                                                                             "GetCurrentPlatformPreset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::BeatSaber::Settings::Settings>, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::SettingsManager* GlobalNamespace::SettingsManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SettingsManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SettingsManager::SettingsManager() {}
