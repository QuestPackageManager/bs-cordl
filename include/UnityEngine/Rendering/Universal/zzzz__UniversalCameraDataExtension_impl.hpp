#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\UniversalCameraDataExtension.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraDataExtension_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraDataExtension.GetGPUProjectionMatrixRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Rendering::Universal::UniversalCameraData*, int32_t)>(
    &::UnityEngine::Rendering::Universal::UniversalCameraDataExtension::GetGPUProjectionMatrixRenderGraph)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x683ce58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraDataExtension*>(),
                                         { "GetGPUProjectionMatrixRenderGraph", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::Universal::UniversalCameraDataExtension::GetGPUProjectionMatrixRenderGraph(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                                                                   int32_t viewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraDataExtension*>(),
                                       { "GetGPUProjectionMatrixRenderGraph", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, cameraData, viewIndex);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraDataExtension::UniversalCameraDataExtension() {}
