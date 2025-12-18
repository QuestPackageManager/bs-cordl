#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMixedReality.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMixedReality_def.hpp"
#include "GlobalNamespace/zzzz__OVRComposition_def.hpp"
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
#include "GlobalNamespace/zzzz__OVRMixedRealityCaptureConfiguration_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRMixedReality.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GameObject*, ::UnityEngine::Camera*, ::GlobalNamespace::OVRMixedRealityCaptureConfiguration*,
                                                                                           ::GlobalNamespace::OVRManager_TrackingOrigin)>(&::GlobalNamespace::OVRMixedReality::Update)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x5cc3618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMixedReality*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_TrackingOrigin>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedReality.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::OVRMixedReality::Cleanup)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5cc3b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMixedReality*>::get(), "Cleanup",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedReality.RecenterPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::OVRMixedReality::RecenterPose)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5cc5248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMixedReality*>::get(), "RecenterPose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRMixedReality::setStaticF_useFakeExternalCamera(bool value) {
  ::cordl_internals::setStaticField<bool, "useFakeExternalCamera", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMixedReality*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRMixedReality::getStaticF_useFakeExternalCamera() {
  return ::cordl_internals::getStaticField<bool, "useFakeExternalCamera", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMixedReality*>::get>();
}
inline void GlobalNamespace::OVRMixedReality::setStaticF_fakeCameraFloorLevelPosition(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "fakeCameraFloorLevelPosition", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMixedReality*>::get>(
      std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRMixedReality::getStaticF_fakeCameraFloorLevelPosition() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "fakeCameraFloorLevelPosition", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMixedReality*>::get>();
}
inline void GlobalNamespace::OVRMixedReality::setStaticF_fakeCameraEyeLevelPosition(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "fakeCameraEyeLevelPosition", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMixedReality*>::get>(
      std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRMixedReality::getStaticF_fakeCameraEyeLevelPosition() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "fakeCameraEyeLevelPosition", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMixedReality*>::get>();
}
inline void GlobalNamespace::OVRMixedReality::setStaticF_fakeCameraRotation(::UnityEngine::Quaternion value) {
  ::cordl_internals::setStaticField<::UnityEngine::Quaternion, "fakeCameraRotation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMixedReality*>::get>(
      std::forward<::UnityEngine::Quaternion>(value));
}
inline ::UnityEngine::Quaternion GlobalNamespace::OVRMixedReality::getStaticF_fakeCameraRotation() {
  return ::cordl_internals::getStaticField<::UnityEngine::Quaternion, "fakeCameraRotation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMixedReality*>::get>();
}
inline void GlobalNamespace::OVRMixedReality::setStaticF_fakeCameraFov(float_t value) {
  ::cordl_internals::setStaticField<float_t, "fakeCameraFov", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMixedReality*>::get>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRMixedReality::getStaticF_fakeCameraFov() {
  return ::cordl_internals::getStaticField<float_t, "fakeCameraFov", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMixedReality*>::get>();
}
inline void GlobalNamespace::OVRMixedReality::setStaticF_fakeCameraAspect(float_t value) {
  ::cordl_internals::setStaticField<float_t, "fakeCameraAspect", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMixedReality*>::get>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRMixedReality::getStaticF_fakeCameraAspect() {
  return ::cordl_internals::getStaticField<float_t, "fakeCameraAspect", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMixedReality*>::get>();
}
inline void GlobalNamespace::OVRMixedReality::setStaticF_currentComposition(::GlobalNamespace::OVRComposition* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRComposition*, "currentComposition", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMixedReality*>::get>(
      std::forward<::GlobalNamespace::OVRComposition*>(value));
}
inline ::GlobalNamespace::OVRComposition* GlobalNamespace::OVRMixedReality::getStaticF_currentComposition() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRComposition*, "currentComposition",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMixedReality*>::get>();
}
inline void GlobalNamespace::OVRMixedReality::Update(::UnityEngine::GameObject* parentObject, ::UnityEngine::Camera* mainCamera, ::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration,
                                                     ::GlobalNamespace::OVRManager_TrackingOrigin trackingOrigin) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMixedReality*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_TrackingOrigin>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, parentObject, mainCamera, configuration, trackingOrigin);
}
inline void GlobalNamespace::OVRMixedReality::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMixedReality*>::get(), "Cleanup",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRMixedReality::RecenterPose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMixedReality*>::get(), "RecenterPose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMixedReality::OVRMixedReality() {}
