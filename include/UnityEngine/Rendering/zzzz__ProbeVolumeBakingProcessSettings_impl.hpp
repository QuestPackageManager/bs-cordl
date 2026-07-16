#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeBakingProcessSettings.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeDilationSettings_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VirtualOffsetSettings_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeBakingProcessSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeDilationSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeBakingProcessSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__VirtualOffsetSettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion::ProbeVolumeBakingProcessSettings_SettingsVersion(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion::ProbeVolumeBakingProcessSettings_SettingsVersion() {}
constexpr ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion::Initial{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion::ThreadedVirtualOffset{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion::Max{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion::Current{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings.get_Default
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings (*)()>(&::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings::get_Default)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x678c524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings>(), { "get_Default", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings::*)(
    ::UnityEngine::Rendering::ProbeDilationSettings, ::UnityEngine::Rendering::VirtualOffsetSettings)>(&::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x678c5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings>(),
                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeDilationSettings>(), ::i2c::type_of<::UnityEngine::Rendering::VirtualOffsetSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings.SetDefaults
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings::SetDefaults)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x678c56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings>(), { "SetDefaults", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings.Upgrade
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings::*)()>(&::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings::Upgrade)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x678c5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings>(), { "Upgrade", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings UnityEngine::Rendering::ProbeVolumeBakingProcessSettings::get_Default() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings>(), { "get_Default", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingProcessSettings::_ctor(::UnityEngine::Rendering::ProbeDilationSettings dilationSettings,
                                                                            ::UnityEngine::Rendering::VirtualOffsetSettings virtualOffsetSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings>(),
                                       { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeDilationSettings>(), ::i2c::type_of<::UnityEngine::Rendering::VirtualOffsetSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dilationSettings, virtualOffsetSettings);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingProcessSettings::SetDefaults() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings>(), { "SetDefaults", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingProcessSettings::Upgrade() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings>(), { "Upgrade", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Version", ty: "::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "dilationSettings", ty: "::UnityEngine::Rendering::ProbeDilationSettings", modifiers: "", def_value: Some("{}") }, CppParam { name: "virtualOffsetSettings", ty:
// "::UnityEngine::Rendering::VirtualOffsetSettings", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings::ProbeVolumeBakingProcessSettings(::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion m_Version,
                                                                                                       ::UnityEngine::Rendering::ProbeDilationSettings dilationSettings,
                                                                                                       ::UnityEngine::Rendering::VirtualOffsetSettings virtualOffsetSettings) noexcept {
  this->m_Version = m_Version;
  this->dilationSettings = dilationSettings;
  this->virtualOffsetSettings = virtualOffsetSettings;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings::ProbeVolumeBakingProcessSettings() {}
