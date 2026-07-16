#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CommandBufferHelpers.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBufferHelpers_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ComputeCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__UnsafeCommandBuffer_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXCameraXRSettings_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBufferHelpers.GetRasterCommandBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RasterCommandBuffer* (*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::CommandBufferHelpers::GetRasterCommandBuffer)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6749370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CommandBufferHelpers>(),
                                                                                           { "GetRasterCommandBuffer", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBufferHelpers.GetComputeCommandBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ComputeCommandBuffer* (*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::CommandBufferHelpers::GetComputeCommandBuffer)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x67493dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CommandBufferHelpers>(),
                                                                                           { "GetComputeCommandBuffer", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBufferHelpers.GetUnsafeCommandBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnsafeCommandBuffer* (*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::CommandBufferHelpers::GetUnsafeCommandBuffer)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6749448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CommandBufferHelpers>(),
                                                                                           { "GetUnsafeCommandBuffer", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBufferHelpers.GetNativeCommandBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CommandBuffer* (*)(::UnityEngine::Rendering::UnsafeCommandBuffer*)>(
    &::UnityEngine::Rendering::CommandBufferHelpers::GetNativeCommandBuffer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67494b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CommandBufferHelpers>(),
                                                                                           { "GetNativeCommandBuffer", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnsafeCommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBufferHelpers.VFXManager_ProcessCameraCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::UnsafeCommandBuffer*, ::UnityEngine::VFX::VFXCameraXRSettings,
                                                                ::UnityEngine::Rendering::CullingResults)>(&::UnityEngine::Rendering::CommandBufferHelpers::VFXManager_ProcessCameraCommand)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x67494c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CommandBufferHelpers>(),
                                                             { "VFXManager_ProcessCameraCommand",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::UnsafeCommandBuffer*>(),
                                                                 ::i2c::type_of<::UnityEngine::VFX::VFXCameraXRSettings>(), ::i2c::type_of<::UnityEngine::Rendering::CullingResults>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::CommandBufferHelpers::setStaticF_rasterCmd(::UnityEngine::Rendering::RasterCommandBuffer* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RasterCommandBuffer*, "rasterCmd", ::UnityEngine::Rendering::CommandBufferHelpers>(
      std::forward<::UnityEngine::Rendering::RasterCommandBuffer*>(value));
}
inline ::UnityEngine::Rendering::RasterCommandBuffer* UnityEngine::Rendering::CommandBufferHelpers::getStaticF_rasterCmd() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RasterCommandBuffer*, "rasterCmd", ::UnityEngine::Rendering::CommandBufferHelpers>();
}
inline void UnityEngine::Rendering::CommandBufferHelpers::setStaticF_computeCmd(::UnityEngine::Rendering::ComputeCommandBuffer* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ComputeCommandBuffer*, "computeCmd", ::UnityEngine::Rendering::CommandBufferHelpers>(
      std::forward<::UnityEngine::Rendering::ComputeCommandBuffer*>(value));
}
inline ::UnityEngine::Rendering::ComputeCommandBuffer* UnityEngine::Rendering::CommandBufferHelpers::getStaticF_computeCmd() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ComputeCommandBuffer*, "computeCmd", ::UnityEngine::Rendering::CommandBufferHelpers>();
}
inline void UnityEngine::Rendering::CommandBufferHelpers::setStaticF_unsafeCmd(::UnityEngine::Rendering::UnsafeCommandBuffer* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::UnsafeCommandBuffer*, "unsafeCmd", ::UnityEngine::Rendering::CommandBufferHelpers>(
      std::forward<::UnityEngine::Rendering::UnsafeCommandBuffer*>(value));
}
inline ::UnityEngine::Rendering::UnsafeCommandBuffer* UnityEngine::Rendering::CommandBufferHelpers::getStaticF_unsafeCmd() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::UnsafeCommandBuffer*, "unsafeCmd", ::UnityEngine::Rendering::CommandBufferHelpers>();
}
inline ::UnityEngine::Rendering::RasterCommandBuffer* UnityEngine::Rendering::CommandBufferHelpers::GetRasterCommandBuffer(::UnityEngine::Rendering::CommandBuffer* baseBuffer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CommandBufferHelpers>(),
                                                                                         { "GetRasterCommandBuffer", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RasterCommandBuffer*>(nullptr, ___internal_method, baseBuffer);
}
inline ::UnityEngine::Rendering::ComputeCommandBuffer* UnityEngine::Rendering::CommandBufferHelpers::GetComputeCommandBuffer(::UnityEngine::Rendering::CommandBuffer* baseBuffer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CommandBufferHelpers>(),
                                                                                         { "GetComputeCommandBuffer", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ComputeCommandBuffer*>(nullptr, ___internal_method, baseBuffer);
}
inline ::UnityEngine::Rendering::UnsafeCommandBuffer* UnityEngine::Rendering::CommandBufferHelpers::GetUnsafeCommandBuffer(::UnityEngine::Rendering::CommandBuffer* baseBuffer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CommandBufferHelpers>(),
                                                                                         { "GetUnsafeCommandBuffer", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnsafeCommandBuffer*>(nullptr, ___internal_method, baseBuffer);
}
inline ::UnityEngine::Rendering::CommandBuffer* UnityEngine::Rendering::CommandBufferHelpers::GetNativeCommandBuffer(::UnityEngine::Rendering::UnsafeCommandBuffer* baseBuffer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CommandBufferHelpers>(),
                                                                                         { "GetNativeCommandBuffer", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnsafeCommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CommandBuffer*>(nullptr, ___internal_method, baseBuffer);
}
inline void UnityEngine::Rendering::CommandBufferHelpers::VFXManager_ProcessCameraCommand(::UnityEngine::Camera* cam, ::UnityEngine::Rendering::UnsafeCommandBuffer* cmd,
                                                                                          ::UnityEngine::VFX::VFXCameraXRSettings camXRSettings, ::UnityEngine::Rendering::CullingResults results) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CommandBufferHelpers>(),
                                                           { "VFXManager_ProcessCameraCommand",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::UnsafeCommandBuffer*>(),
                                                               ::i2c::type_of<::UnityEngine::VFX::VFXCameraXRSettings>(), ::i2c::type_of<::UnityEngine::Rendering::CullingResults>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cam, cmd, camXRSettings, results);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CommandBufferHelpers::CommandBufferHelpers() {}
