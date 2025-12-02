#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VirtualOffsetSettings.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VirtualOffsetSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeBakingProcessSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::VirtualOffsetSettings.SetDefaults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VirtualOffsetSettings::*)()>(
    &::UnityEngine::Rendering::VirtualOffsetSettings::SetDefaults)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6573004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VirtualOffsetSettings>::get(),
                                                                               "SetDefaults", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VirtualOffsetSettings.UpgradeFromTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VirtualOffsetSettings::*)(
    ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion, ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion)>(
    &::UnityEngine::Rendering::VirtualOffsetSettings::UpgradeFromTo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6573024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VirtualOffsetSettings>::get(), "UpgradeFromTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::VirtualOffsetSettings::SetDefaults() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VirtualOffsetSettings>::get(),
                                                                             "SetDefaults", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VirtualOffsetSettings::UpgradeFromTo(::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion from,
                                                                         ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion to) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VirtualOffsetSettings>::get(), "UpgradeFromTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, from, to);
}
// Ctor Parameters [CppParam { name: "useVirtualOffset", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "validityThreshold", ty: "float_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "outOfGeoOffset", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "searchMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "rayOriginBias", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "collisionMask", ty: "::UnityEngine::LayerMask", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::VirtualOffsetSettings::VirtualOffsetSettings(bool useVirtualOffset, float_t validityThreshold, float_t outOfGeoOffset, float_t searchMultiplier,
                                                                                 float_t rayOriginBias, ::UnityEngine::LayerMask collisionMask) noexcept {
  this->useVirtualOffset = useVirtualOffset;
  this->validityThreshold = validityThreshold;
  this->outOfGeoOffset = outOfGeoOffset;
  this->searchMultiplier = searchMultiplier;
  this->rayOriginBias = rayOriginBias;
  this->collisionMask = collisionMask;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::VirtualOffsetSettings::VirtualOffsetSettings() {}
