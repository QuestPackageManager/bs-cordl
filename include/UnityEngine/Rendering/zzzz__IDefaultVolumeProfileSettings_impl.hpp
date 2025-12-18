#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IDefaultVolumeProfileSettings.hpp"
#include "UnityEngine/Rendering/zzzz__IDefaultVolumeProfileSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeProfile_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::IDefaultVolumeProfileSettings.UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::IDefaultVolumeProfileSettings::*)()>(
    &::UnityEngine::Rendering::IDefaultVolumeProfileSettings::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65ebdd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IDefaultVolumeProfileSettings*>::get(),
                                                                               "UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IDefaultVolumeProfileSettings.get_volumeProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Rendering::VolumeProfile> (::UnityEngine::Rendering::IDefaultVolumeProfileSettings::*)()>(
    &::UnityEngine::Rendering::IDefaultVolumeProfileSettings::get_volumeProfile)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IDefaultVolumeProfileSettings*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IDefaultVolumeProfileSettings*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IDefaultVolumeProfileSettings.set_volumeProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::IDefaultVolumeProfileSettings::*)(::UnityEngine::Rendering::VolumeProfile*)>(
    &::UnityEngine::Rendering::IDefaultVolumeProfileSettings::set_volumeProfile)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IDefaultVolumeProfileSettings*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IDefaultVolumeProfileSettings*>::get(), 2));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::IDefaultVolumeProfileSettings::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IDefaultVolumeProfileSettings*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rendering::VolumeProfile> UnityEngine::Rendering::IDefaultVolumeProfileSettings::get_volumeProfile() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IDefaultVolumeProfileSettings*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::VolumeProfile>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::IDefaultVolumeProfileSettings::set_volumeProfile(::UnityEngine::Rendering::VolumeProfile* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IDefaultVolumeProfileSettings*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr UnityEngine::Rendering::IDefaultVolumeProfileSettings::operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* UnityEngine::Rendering::IDefaultVolumeProfileSettings::i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
