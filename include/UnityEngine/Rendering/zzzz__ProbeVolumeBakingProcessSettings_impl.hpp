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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings (*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings::get_Default)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6573048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings>::get(), "get_Default",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings::*)(
    ::UnityEngine::Rendering::ProbeDilationSettings, ::UnityEngine::Rendering::VirtualOffsetSettings)>(&::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x65730cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeDilationSettings>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VirtualOffsetSettings>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings.SetDefaults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings::SetDefaults)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6573090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings>::get(), "SetDefaults",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings.Upgrade
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings::Upgrade)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x65730f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings>::get(), "Upgrade",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings UnityEngine::Rendering::ProbeVolumeBakingProcessSettings::get_Default() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings>::get(),
                                                                             "get_Default", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingProcessSettings::_ctor(::UnityEngine::Rendering::ProbeDilationSettings dilationSettings,
                                                                            ::UnityEngine::Rendering::VirtualOffsetSettings virtualOffsetSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeDilationSettings>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VirtualOffsetSettings>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dilationSettings, virtualOffsetSettings);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingProcessSettings::SetDefaults() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings>::get(),
                                                                             "SetDefaults", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeBakingProcessSettings::Upgrade() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings>::get(),
                                                                             "Upgrade", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
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
