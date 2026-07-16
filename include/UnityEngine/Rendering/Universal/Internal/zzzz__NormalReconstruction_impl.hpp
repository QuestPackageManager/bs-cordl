#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/NormalReconstruction.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__NormalReconstruction_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::NormalReconstruction.SetupProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::Rendering::Universal::CameraData>)>(
    &::UnityEngine::Rendering::Universal::Internal::NormalReconstruction::SetupProperties)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x68f2c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::NormalReconstruction*>(),
                            { "SetupProperties", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::NormalReconstruction.SetupProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::by_ref<::UnityEngine::Rendering::Universal::CameraData>)>(
    &::UnityEngine::Rendering::Universal::Internal::NormalReconstruction::SetupProperties)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68f2cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::NormalReconstruction*>(),
            { "SetupProperties", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::NormalReconstruction.SetupProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::Internal::NormalReconstruction::SetupProperties)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x68f2fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::NormalReconstruction*>(),
                            { "SetupProperties", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::NormalReconstruction.SetupProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraData*>)>(
    &::UnityEngine::Rendering::Universal::Internal::NormalReconstruction::SetupProperties)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x68f2d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::NormalReconstruction*>(),
            { "SetupProperties", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraData*>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::Internal::NormalReconstruction::setStaticF_s_NormalReconstructionMatrixID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_NormalReconstructionMatrixID", ::UnityEngine::Rendering::Universal::Internal::NormalReconstruction*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::NormalReconstruction::getStaticF_s_NormalReconstructionMatrixID() {
  return ::cordl_internals::getStaticField<int32_t, "s_NormalReconstructionMatrixID", ::UnityEngine::Rendering::Universal::Internal::NormalReconstruction*>();
}
inline void UnityEngine::Rendering::Universal::Internal::NormalReconstruction::setStaticF_s_NormalReconstructionMatrix(::ArrayW<::UnityEngine::Matrix4x4> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Matrix4x4>, "s_NormalReconstructionMatrix", ::UnityEngine::Rendering::Universal::Internal::NormalReconstruction*>(
      std::forward<::ArrayW<::UnityEngine::Matrix4x4>>(value));
}
inline ::ArrayW<::UnityEngine::Matrix4x4> UnityEngine::Rendering::Universal::Internal::NormalReconstruction::getStaticF_s_NormalReconstructionMatrix() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Matrix4x4>, "s_NormalReconstructionMatrix", ::UnityEngine::Rendering::Universal::Internal::NormalReconstruction*>();
}
inline void UnityEngine::Rendering::Universal::Internal::NormalReconstruction::SetupProperties(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                               ::by_ref<::UnityEngine::Rendering::Universal::CameraData> cameraData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::NormalReconstruction*>(),
                          { "SetupProperties", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, cameraData);
}
inline void UnityEngine::Rendering::Universal::Internal::NormalReconstruction::SetupProperties(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                               ::by_ref<::UnityEngine::Rendering::Universal::CameraData> cameraData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::NormalReconstruction*>(),
                       { "SetupProperties", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, cameraData);
}
inline void UnityEngine::Rendering::Universal::Internal::NormalReconstruction::SetupProperties(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                               ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::NormalReconstruction*>(),
                          { "SetupProperties", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, cameraData);
}
inline void UnityEngine::Rendering::Universal::Internal::NormalReconstruction::SetupProperties(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                               ::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraData*> cameraData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::NormalReconstruction*>(),
          { "SetupProperties", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, cameraData);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::NormalReconstruction::NormalReconstruction() {}
