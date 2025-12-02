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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RasterCommandBuffer* (*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::CommandBufferHelpers::GetRasterCommandBuffer)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x652fe94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBufferHelpers>::get(), "GetRasterCommandBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBufferHelpers.GetComputeCommandBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ComputeCommandBuffer* (*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::CommandBufferHelpers::GetComputeCommandBuffer)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x652ff00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBufferHelpers>::get(), "GetComputeCommandBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBufferHelpers.GetUnsafeCommandBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::UnsafeCommandBuffer* (*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::CommandBufferHelpers::GetUnsafeCommandBuffer)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x652ff6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBufferHelpers>::get(), "GetUnsafeCommandBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBufferHelpers.GetNativeCommandBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::CommandBuffer* (*)(::UnityEngine::Rendering::UnsafeCommandBuffer*)>(
    &::UnityEngine::Rendering::CommandBufferHelpers::GetNativeCommandBuffer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x652ffd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBufferHelpers>::get(), "GetNativeCommandBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBufferHelpers.VFXManager_ProcessCameraCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::UnsafeCommandBuffer*, ::UnityEngine::VFX::VFXCameraXRSettings, ::UnityEngine::Rendering::CullingResults)>(
        &::UnityEngine::Rendering::CommandBufferHelpers::VFXManager_ProcessCameraCommand)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x652ffec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBufferHelpers>::get(), "VFXManager_ProcessCameraCommand", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::VFX::VFXCameraXRSettings>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CullingResults>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::CommandBufferHelpers::setStaticF_rasterCmd(::UnityEngine::Rendering::RasterCommandBuffer* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RasterCommandBuffer*, "rasterCmd",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBufferHelpers>::get>(
      std::forward<::UnityEngine::Rendering::RasterCommandBuffer*>(value));
}
inline ::UnityEngine::Rendering::RasterCommandBuffer* UnityEngine::Rendering::CommandBufferHelpers::getStaticF_rasterCmd() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RasterCommandBuffer*, "rasterCmd",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBufferHelpers>::get>();
}
inline void UnityEngine::Rendering::CommandBufferHelpers::setStaticF_computeCmd(::UnityEngine::Rendering::ComputeCommandBuffer* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ComputeCommandBuffer*, "computeCmd",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBufferHelpers>::get>(
      std::forward<::UnityEngine::Rendering::ComputeCommandBuffer*>(value));
}
inline ::UnityEngine::Rendering::ComputeCommandBuffer* UnityEngine::Rendering::CommandBufferHelpers::getStaticF_computeCmd() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ComputeCommandBuffer*, "computeCmd",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBufferHelpers>::get>();
}
inline void UnityEngine::Rendering::CommandBufferHelpers::setStaticF_unsafeCmd(::UnityEngine::Rendering::UnsafeCommandBuffer* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::UnsafeCommandBuffer*, "unsafeCmd",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBufferHelpers>::get>(
      std::forward<::UnityEngine::Rendering::UnsafeCommandBuffer*>(value));
}
inline ::UnityEngine::Rendering::UnsafeCommandBuffer* UnityEngine::Rendering::CommandBufferHelpers::getStaticF_unsafeCmd() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::UnsafeCommandBuffer*, "unsafeCmd",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBufferHelpers>::get>();
}
inline ::UnityEngine::Rendering::RasterCommandBuffer* UnityEngine::Rendering::CommandBufferHelpers::GetRasterCommandBuffer(::UnityEngine::Rendering::CommandBuffer* baseBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBufferHelpers>::get(), "GetRasterCommandBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RasterCommandBuffer*, false>(nullptr, ___internal_method, baseBuffer);
}
inline ::UnityEngine::Rendering::ComputeCommandBuffer* UnityEngine::Rendering::CommandBufferHelpers::GetComputeCommandBuffer(::UnityEngine::Rendering::CommandBuffer* baseBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBufferHelpers>::get(), "GetComputeCommandBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ComputeCommandBuffer*, false>(nullptr, ___internal_method, baseBuffer);
}
inline ::UnityEngine::Rendering::UnsafeCommandBuffer* UnityEngine::Rendering::CommandBufferHelpers::GetUnsafeCommandBuffer(::UnityEngine::Rendering::CommandBuffer* baseBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBufferHelpers>::get(), "GetUnsafeCommandBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnsafeCommandBuffer*, false>(nullptr, ___internal_method, baseBuffer);
}
inline ::UnityEngine::Rendering::CommandBuffer* UnityEngine::Rendering::CommandBufferHelpers::GetNativeCommandBuffer(::UnityEngine::Rendering::UnsafeCommandBuffer* baseBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBufferHelpers>::get(), "GetNativeCommandBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CommandBuffer*, false>(nullptr, ___internal_method, baseBuffer);
}
inline void UnityEngine::Rendering::CommandBufferHelpers::VFXManager_ProcessCameraCommand(::UnityEngine::Camera* cam, ::UnityEngine::Rendering::UnsafeCommandBuffer* cmd,
                                                                                          ::UnityEngine::VFX::VFXCameraXRSettings camXRSettings, ::UnityEngine::Rendering::CullingResults results) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CommandBufferHelpers>::get(), "VFXManager_ProcessCameraCommand", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::VFX::VFXCameraXRSettings>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CullingResults>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cam, cmd, camXRSettings, results);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CommandBufferHelpers::CommandBufferHelpers() {}
