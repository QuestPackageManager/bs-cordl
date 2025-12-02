#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IProbeVolumeEnabledRenderPipeline.hpp"
#include "UnityEngine/Rendering/zzzz__IProbeVolumeEnabledRenderPipeline_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeSHBands_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeSceneData_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline.get_supportProbeVolume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline::*)()>(
    &::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline::get_supportProbeVolume)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline.get_maxSHBands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ProbeVolumeSHBands (::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline::*)()>(
    &::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline::get_maxSHBands)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline.get_probeVolumeSceneData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ProbeVolumeSceneData* (::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline::*)()>(
    &::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline::get_probeVolumeSceneData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline*>::get(), 2));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline::get_supportProbeVolume() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeVolumeSHBands UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline::get_maxSHBands() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeVolumeSHBands, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeVolumeSceneData* UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline::get_probeVolumeSceneData() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeVolumeSceneData*, false>(this, ___internal_method);
}
