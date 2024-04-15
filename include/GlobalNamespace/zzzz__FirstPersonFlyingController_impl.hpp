#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__StereoTargetEyeMask_impl.hpp"
#include "GlobalNamespace/zzzz__FirstPersonFlyingController_def.hpp"
#include "GlobalNamespace/zzzz__MouseLook_def.hpp"
#include "GlobalNamespace/zzzz__VRCenterAdjust_def.hpp"
#include "GlobalNamespace/zzzz__VRController_def.hpp"
#include "UnityEngine/SpatialTracking/zzzz__TrackedPoseDriver_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FirstPersonFlyingController.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FirstPersonFlyingController::*)()>(
    &::GlobalNamespace::FirstPersonFlyingController::OnEnable)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x257f9c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FirstPersonFlyingController*>::get(),
                                                                               "OnEnable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FirstPersonFlyingController.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FirstPersonFlyingController::*)()>(
    &::GlobalNamespace::FirstPersonFlyingController::OnDisable)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x257fcd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FirstPersonFlyingController*>::get(),
                                                                               "OnDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FirstPersonFlyingController.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FirstPersonFlyingController::*)()>(
    &::GlobalNamespace::FirstPersonFlyingController::Update)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x257ff2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FirstPersonFlyingController*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FirstPersonFlyingController.Inject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FirstPersonFlyingController::*)(
    ::UnityEngine::Camera*, ::GlobalNamespace::VRCenterAdjust*, ::GlobalNamespace::VRController*, ::GlobalNamespace::VRController*, ::UnityEngine::SpatialTracking::TrackedPoseDriver*)>(
    &::GlobalNamespace::FirstPersonFlyingController::Inject)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2580630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FirstPersonFlyingController*>::get(), "Inject", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VRCenterAdjust*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VRController*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VRController*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FirstPersonFlyingController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FirstPersonFlyingController::*)()>(&::GlobalNamespace::FirstPersonFlyingController::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2580758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FirstPersonFlyingController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::FirstPersonFlyingController::__cordl_internal_get__moveSensitivity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveSensitivity;
}
constexpr float_t const& GlobalNamespace::FirstPersonFlyingController::__cordl_internal_get__moveSensitivity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveSensitivity;
}
constexpr void GlobalNamespace::FirstPersonFlyingController::__cordl_internal_set__moveSensitivity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____moveSensitivity = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::FirstPersonFlyingController::__cordl_internal_get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::FirstPersonFlyingController::__cordl_internal_get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr void GlobalNamespace::FirstPersonFlyingController::__cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::FirstPersonFlyingController::__cordl_internal_get__camera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::FirstPersonFlyingController::__cordl_internal_get__camera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____camera;
}
constexpr void GlobalNamespace::FirstPersonFlyingController::__cordl_internal_set__camera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____camera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::FirstPersonFlyingController::__cordl_internal_get__cameraFov() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraFov;
}
constexpr float_t const& GlobalNamespace::FirstPersonFlyingController::__cordl_internal_get__cameraFov() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraFov;
}
constexpr void GlobalNamespace::FirstPersonFlyingController::__cordl_internal_set__cameraFov(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cameraFov = value;
}
constexpr ::UnityW<::GlobalNamespace::VRCenterAdjust>& GlobalNamespace::FirstPersonFlyingController::__cordl_internal_get__centerAdjust() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerAdjust;
}
constexpr ::UnityW<::GlobalNamespace::VRCenterAdjust> const& GlobalNamespace::FirstPersonFlyingController::__cordl_internal_get__centerAdjust() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerAdjust;
}
constexpr void GlobalNamespace::FirstPersonFlyingController::__cordl_internal_set__centerAdjust(::UnityW<::GlobalNamespace::VRCenterAdjust> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____centerAdjust)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::VRController>& GlobalNamespace::FirstPersonFlyingController::__cordl_internal_get__controller0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controller0;
}
constexpr ::UnityW<::GlobalNamespace::VRController> const& GlobalNamespace::FirstPersonFlyingController::__cordl_internal_get__controller0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controller0;
}
constexpr void GlobalNamespace::FirstPersonFlyingController::__cordl_internal_set__controller0(::UnityW<::GlobalNamespace::VRController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____controller0)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::VRController>& GlobalNamespace::FirstPersonFlyingController::__cordl_internal_get__controller1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controller1;
}
constexpr ::UnityW<::GlobalNamespace::VRController> const& GlobalNamespace::FirstPersonFlyingController::__cordl_internal_get__controller1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controller1;
}
constexpr void GlobalNamespace::FirstPersonFlyingController::__cordl_internal_set__controller1(::UnityW<::GlobalNamespace::VRController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____controller1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& GlobalNamespace::FirstPersonFlyingController::__cordl_internal_get__controllerModels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controllerModels;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const&
GlobalNamespace::FirstPersonFlyingController::__cordl_internal_get__controllerModels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controllerModels;
}
constexpr void
GlobalNamespace::FirstPersonFlyingController::__cordl_internal_set__controllerModels(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____controllerModels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MouseLook*& GlobalNamespace::FirstPersonFlyingController::__cordl_internal_get__mouseLook() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mouseLook;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MouseLook*> const& GlobalNamespace::FirstPersonFlyingController::__cordl_internal_get__mouseLook() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mouseLook;
}
constexpr void GlobalNamespace::FirstPersonFlyingController::__cordl_internal_set__mouseLook(::GlobalNamespace::MouseLook* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mouseLook)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::SpatialTracking::TrackedPoseDriver>& GlobalNamespace::FirstPersonFlyingController::__cordl_internal_get__trackedPoseDriver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackedPoseDriver;
}
constexpr ::UnityW<::UnityEngine::SpatialTracking::TrackedPoseDriver> const& GlobalNamespace::FirstPersonFlyingController::__cordl_internal_get__trackedPoseDriver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackedPoseDriver;
}
constexpr void GlobalNamespace::FirstPersonFlyingController::__cordl_internal_set__trackedPoseDriver(::UnityW<::UnityEngine::SpatialTracking::TrackedPoseDriver> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____trackedPoseDriver)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::FirstPersonFlyingController::__cordl_internal_get__cameraTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::FirstPersonFlyingController::__cordl_internal_get__cameraTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraTransform;
}
constexpr void GlobalNamespace::FirstPersonFlyingController::__cordl_internal_set__cameraTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cameraTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::StereoTargetEyeMask& GlobalNamespace::FirstPersonFlyingController::__cordl_internal_get__originalStereoTargetEyeMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalStereoTargetEyeMask;
}
constexpr ::UnityEngine::StereoTargetEyeMask const& GlobalNamespace::FirstPersonFlyingController::__cordl_internal_get__originalStereoTargetEyeMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalStereoTargetEyeMask;
}
constexpr void GlobalNamespace::FirstPersonFlyingController::__cordl_internal_set__originalStereoTargetEyeMask(::UnityEngine::StereoTargetEyeMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____originalStereoTargetEyeMask = value;
}
constexpr float_t& GlobalNamespace::FirstPersonFlyingController::__cordl_internal_get__originalCameraFov() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalCameraFov;
}
constexpr float_t const& GlobalNamespace::FirstPersonFlyingController::__cordl_internal_get__originalCameraFov() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalCameraFov;
}
constexpr void GlobalNamespace::FirstPersonFlyingController::__cordl_internal_set__originalCameraFov(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____originalCameraFov = value;
}
inline void GlobalNamespace::FirstPersonFlyingController::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FirstPersonFlyingController*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FirstPersonFlyingController::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FirstPersonFlyingController*>::get(),
                                                                             "OnDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FirstPersonFlyingController::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FirstPersonFlyingController*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FirstPersonFlyingController::Inject(::UnityEngine::Camera* camera, ::GlobalNamespace::VRCenterAdjust* centerAdjust, ::GlobalNamespace::VRController* controller0,
                                                                 ::GlobalNamespace::VRController* controller1, ::UnityEngine::SpatialTracking::TrackedPoseDriver* trackedPoseDriver) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FirstPersonFlyingController*>::get(), "Inject", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VRCenterAdjust*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VRController*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VRController*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpatialTracking::TrackedPoseDriver*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, camera, centerAdjust, controller0, controller1, trackedPoseDriver);
}
inline ::GlobalNamespace::FirstPersonFlyingController* GlobalNamespace::FirstPersonFlyingController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FirstPersonFlyingController*>());
}
inline void GlobalNamespace::FirstPersonFlyingController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FirstPersonFlyingController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FirstPersonFlyingController::FirstPersonFlyingController() {}
