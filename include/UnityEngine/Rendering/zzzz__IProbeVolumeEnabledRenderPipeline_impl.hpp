#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\IProbeVolumeEnabledRenderPipeline.hpp"
#include "UnityEngine/Rendering/zzzz__IProbeVolumeEnabledRenderPipeline_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeSHBands_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeSceneData_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline.get_supportProbeVolume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline::*)()>(
    &::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline::get_supportProbeVolume)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline.get_maxSHBands
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ProbeVolumeSHBands (::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline::*)()>(
    &::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline::get_maxSHBands)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline.get_probeVolumeSceneData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ProbeVolumeSceneData* (::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline::*)()>(
    &::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline::get_probeVolumeSceneData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline*>(), 2 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline::get_supportProbeVolume() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeVolumeSHBands UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline::get_maxSHBands() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeVolumeSHBands>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeVolumeSceneData* UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline::get_probeVolumeSceneData() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeVolumeSceneData*>(this, ___internal_method);
}
