#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\CameraExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraExtensions_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalAdditionalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__VolumeFrameworkUpdateMode_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraExtensions.GetUniversalAdditionalCameraData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData> (*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::Universal::CameraExtensions::GetUniversalAdditionalCameraData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x68c7c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraExtensions*>(),
                                                                                           { "GetUniversalAdditionalCameraData", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraExtensions.GetVolumeFrameworkUpdateMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode (*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::Universal::CameraExtensions::GetVolumeFrameworkUpdateMode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x68c7ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraExtensions*>(),
                                                                                           { "GetVolumeFrameworkUpdateMode", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraExtensions.SetVolumeFrameworkUpdateMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode)>(
    &::UnityEngine::Rendering::Universal::CameraExtensions::SetVolumeFrameworkUpdateMode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x68c7d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraExtensions*>(),
                            { "SetVolumeFrameworkUpdateMode", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraExtensions.UpdateVolumeStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*)>(&::UnityEngine::Rendering::Universal::CameraExtensions::UpdateVolumeStack)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x68c7f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraExtensions*>(), { "UpdateVolumeStack", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraExtensions.UpdateVolumeStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*)>(
    &::UnityEngine::Rendering::Universal::CameraExtensions::UpdateVolumeStack)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x68c7df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraExtensions*>(),
                            { "UpdateVolumeStack", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraExtensions.DestroyVolumeStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*)>(&::UnityEngine::Rendering::Universal::CameraExtensions::DestroyVolumeStack)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x68c8288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraExtensions*>(), { "DestroyVolumeStack", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraExtensions.DestroyVolumeStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*)>(
    &::UnityEngine::Rendering::Universal::CameraExtensions::DestroyVolumeStack)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x68c829c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraExtensions*>(),
                            { "DestroyVolumeStack", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraExtensions.GetVolumeLayerMaskAndTrigger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*, ::by_ref<::UnityEngine::LayerMask>,
                                                                ::by_ref<::UnityEngine::Transform*>)>(&::UnityEngine::Rendering::Universal::CameraExtensions::GetVolumeLayerMaskAndTrigger)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x68c80ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraExtensions*>(),
                                                             { "GetVolumeLayerMaskAndTrigger",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::LayerMask>>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>() } })));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData>
UnityEngine::Rendering::Universal::CameraExtensions::GetUniversalAdditionalCameraData(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraExtensions*>(),
                                                                                         { "GetUniversalAdditionalCameraData", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData>>(nullptr, ___internal_method, camera);
}
inline ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode UnityEngine::Rendering::Universal::CameraExtensions::GetVolumeFrameworkUpdateMode(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraExtensions*>(),
                                                                                         { "GetVolumeFrameworkUpdateMode", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode>(nullptr, ___internal_method, camera);
}
inline void UnityEngine::Rendering::Universal::CameraExtensions::SetVolumeFrameworkUpdateMode(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode mode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraExtensions*>(),
                          { "SetVolumeFrameworkUpdateMode", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera, mode);
}
inline void UnityEngine::Rendering::Universal::CameraExtensions::UpdateVolumeStack(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraExtensions*>(), { "UpdateVolumeStack", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera);
}
inline void UnityEngine::Rendering::Universal::CameraExtensions::UpdateVolumeStack(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* cameraData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraExtensions*>(),
                          { "UpdateVolumeStack", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera, cameraData);
}
inline void UnityEngine::Rendering::Universal::CameraExtensions::DestroyVolumeStack(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraExtensions*>(), { "DestroyVolumeStack", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera);
}
inline void UnityEngine::Rendering::Universal::CameraExtensions::DestroyVolumeStack(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* cameraData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraExtensions*>(),
                          { "DestroyVolumeStack", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera, cameraData);
}
inline void UnityEngine::Rendering::Universal::CameraExtensions::GetVolumeLayerMaskAndTrigger(::UnityEngine::Camera* camera,
                                                                                              ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* cameraData,
                                                                                              ::by_ref<::UnityEngine::LayerMask> layerMask, ::by_ref<::UnityEngine::Transform*> trigger) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraExtensions*>(),
                                                           { "GetVolumeLayerMaskAndTrigger",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::LayerMask>>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera, cameraData, layerMask, trigger);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::CameraExtensions::CameraExtensions() {}
