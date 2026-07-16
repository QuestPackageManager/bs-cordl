#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRComposition.hpp"
#include "GlobalNamespace/zzzz__OVRPose_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRComposition_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
#include "GlobalNamespace/zzzz__OVRMixedRealityCaptureConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRPose_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRComposition._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRComposition::*)(
    ::UnityEngine::GameObject*, ::UnityEngine::Camera*, ::GlobalNamespace::OVRMixedRealityCaptureConfiguration*)>(&::GlobalNamespace::OVRComposition::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5df1514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::OVRComposition*>(),
            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRComposition.CompositionMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRManager_CompositionMethod (::GlobalNamespace::OVRComposition::*)()>(
    &::GlobalNamespace::OVRComposition::CompositionMethod)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRComposition*>(), { ::i2c::class_of<::GlobalNamespace::OVRComposition*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRComposition.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRComposition::*)(
    ::UnityEngine::GameObject*, ::UnityEngine::Camera*, ::GlobalNamespace::OVRMixedRealityCaptureConfiguration*, ::GlobalNamespace::OVRManager_TrackingOrigin)>(
    &::GlobalNamespace::OVRComposition::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRComposition*>(), { ::i2c::class_of<::GlobalNamespace::OVRComposition*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRComposition.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRComposition::*)()>(&::GlobalNamespace::OVRComposition::Cleanup)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRComposition*>(), { ::i2c::class_of<::GlobalNamespace::OVRComposition*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRComposition.RecenterPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRComposition::*)()>(&::GlobalNamespace::OVRComposition::RecenterPose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5df16ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRComposition*>(), { ::i2c::class_of<::GlobalNamespace::OVRComposition*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRComposition.RefreshCameraRig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRComposition::*)(::UnityEngine::GameObject*, ::UnityEngine::Camera*)>(
    &::GlobalNamespace::OVRComposition::RefreshCameraRig)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5df1518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRComposition*>(),
                                                             { "RefreshCameraRig", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRComposition.ComputeCameraWorldSpacePose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPose (::GlobalNamespace::OVRComposition::*)(::GlobalNamespace::OVRPlugin_CameraExtrinsics, ::UnityEngine::Camera*)>(
    &::GlobalNamespace::OVRComposition::ComputeCameraWorldSpacePose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5df16f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRComposition*>(),
                                                { "ComputeCameraWorldSpacePose", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_CameraExtrinsics>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRComposition.ComputeCameraTrackingSpacePose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPose (::GlobalNamespace::OVRComposition::*)(::GlobalNamespace::OVRPlugin_CameraExtrinsics)>(
    &::GlobalNamespace::OVRComposition::ComputeCameraTrackingSpacePose)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5df175c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRComposition*>(), { "ComputeCameraTrackingSpacePose", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_CameraExtrinsics>() } })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::OVRComposition::__cordl_internal_get_cameraInTrackingSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraInTrackingSpace;
}
constexpr bool const& GlobalNamespace::OVRComposition::__cordl_internal_get_cameraInTrackingSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraInTrackingSpace;
}
constexpr void GlobalNamespace::OVRComposition::__cordl_internal_set_cameraInTrackingSpace(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraInTrackingSpace = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& GlobalNamespace::OVRComposition::__cordl_internal_get_cameraRig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraRig;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& GlobalNamespace::OVRComposition::__cordl_internal_get_cameraRig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraRig;
}
constexpr void GlobalNamespace::OVRComposition::__cordl_internal_set_cameraRig(::UnityW<::GlobalNamespace::OVRCameraRig> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraRig = value;
}
constexpr bool& GlobalNamespace::OVRComposition::__cordl_internal_get_usingLastAttachedNodePose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usingLastAttachedNodePose;
}
constexpr bool const& GlobalNamespace::OVRComposition::__cordl_internal_get_usingLastAttachedNodePose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usingLastAttachedNodePose;
}
constexpr void GlobalNamespace::OVRComposition::__cordl_internal_set_usingLastAttachedNodePose(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___usingLastAttachedNodePose = value;
}
constexpr ::GlobalNamespace::OVRPose& GlobalNamespace::OVRComposition::__cordl_internal_get_lastAttachedNodePose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastAttachedNodePose;
}
constexpr ::GlobalNamespace::OVRPose const& GlobalNamespace::OVRComposition::__cordl_internal_get_lastAttachedNodePose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastAttachedNodePose;
}
constexpr void GlobalNamespace::OVRComposition::__cordl_internal_set_lastAttachedNodePose(::GlobalNamespace::OVRPose value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastAttachedNodePose = value;
}
inline void GlobalNamespace::OVRComposition::_ctor(::UnityEngine::GameObject* parentObject, ::UnityEngine::Camera* mainCamera, ::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::OVRComposition*>(),
          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentObject, mainCamera, configuration);
}
inline ::GlobalNamespace::OVRManager_CompositionMethod GlobalNamespace::OVRComposition::CompositionMethod() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRComposition*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_CompositionMethod>(this, ___internal_method);
}
inline void GlobalNamespace::OVRComposition::Update(::UnityEngine::GameObject* gameObject, ::UnityEngine::Camera* mainCamera, ::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration,
                                                    ::GlobalNamespace::OVRManager_TrackingOrigin trackingOrigin) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRComposition*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameObject, mainCamera, configuration, trackingOrigin);
}
inline void GlobalNamespace::OVRComposition::Cleanup() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRComposition*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRComposition::RecenterPose() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRComposition*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRComposition::RefreshCameraRig(::UnityEngine::GameObject* parentObject, ::UnityEngine::Camera* mainCamera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRComposition*>(),
                                                           { "RefreshCameraRig", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentObject, mainCamera);
}
inline ::GlobalNamespace::OVRPose GlobalNamespace::OVRComposition::ComputeCameraWorldSpacePose(::GlobalNamespace::OVRPlugin_CameraExtrinsics extrinsics, ::UnityEngine::Camera* mainCamera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRComposition*>(),
                                              { "ComputeCameraWorldSpacePose", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_CameraExtrinsics>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPose>(this, ___internal_method, extrinsics, mainCamera);
}
inline ::GlobalNamespace::OVRPose GlobalNamespace::OVRComposition::ComputeCameraTrackingSpacePose(::GlobalNamespace::OVRPlugin_CameraExtrinsics extrinsics) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRComposition*>(), { "ComputeCameraTrackingSpacePose", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_CameraExtrinsics>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPose>(this, ___internal_method, extrinsics);
}
inline ::GlobalNamespace::OVRComposition* GlobalNamespace::OVRComposition::New_ctor(::UnityEngine::GameObject* parentObject, ::UnityEngine::Camera* mainCamera,
                                                                                    ::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRComposition*>(parentObject, mainCamera, configuration));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRComposition::OVRComposition() {}
