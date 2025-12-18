#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeDilationSettings.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeDilationSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeBakingProcessSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeDilationSettings.SetDefaults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeDilationSettings::*)()>(
    &::UnityEngine::Rendering::ProbeDilationSettings::SetDefaults)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65dab6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeDilationSettings>::get(),
                                                                               "SetDefaults", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeDilationSettings.UpgradeFromTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeDilationSettings::*)(
    ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion, ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion)>(
    &::UnityEngine::Rendering::ProbeDilationSettings::UpgradeFromTo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65dab8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeDilationSettings>::get(), "UpgradeFromTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ProbeDilationSettings::SetDefaults() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeDilationSettings>::get(),
                                                                             "SetDefaults", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeDilationSettings::UpgradeFromTo(::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion from,
                                                                         ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion to) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeDilationSettings>::get(), "UpgradeFromTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, from, to);
}
// Ctor Parameters [CppParam { name: "enableDilation", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "dilationDistance", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "dilationValidityThreshold", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "dilationIterations", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "squaredDistWeighting", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ProbeDilationSettings::ProbeDilationSettings(bool enableDilation, float_t dilationDistance, float_t dilationValidityThreshold, int32_t dilationIterations,
                                                                                 bool squaredDistWeighting) noexcept {
  this->enableDilation = enableDilation;
  this->dilationDistance = dilationDistance;
  this->dilationValidityThreshold = dilationValidityThreshold;
  this->dilationIterations = dilationIterations;
  this->squaredDistWeighting = squaredDistWeighting;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeDilationSettings::ProbeDilationSettings() {}
