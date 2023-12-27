#pragma once
#include "GlobalNamespace/zzzz__ZenjectSafeBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SongAutopilot_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__PlayerVRControllersManager_def.hpp"
#include "GlobalNamespace/zzzz__FloatSO_def.hpp"
#include "GlobalNamespace/zzzz__Vector3SO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapObjectSpawnController_def.hpp"
#include "GlobalNamespace/zzzz__SongAutopilot_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SongAutopilot__Frame._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SongAutopilot__Frame::*)(float_t, ::UnityEngine::Pose)>(
    &::GlobalNamespace::__SongAutopilot__Frame::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x226db90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongAutopilot__Frame>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__SongAutopilot__Frame::_ctor(float_t time, ::UnityEngine::Pose pose) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongAutopilot__Frame>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time, pose);
}
// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pose", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SongAutopilot__Frame::__SongAutopilot__Frame(float_t time, ::UnityEngine::Pose pose) noexcept {
  this->time = time;
  this->pose = pose;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SongAutopilot__Frame::__SongAutopilot__Frame() {}
//  Writing Method size for method: ::GlobalNamespace::SongAutopilot._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongAutopilot::*)()>(&::GlobalNamespace::SongAutopilot::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x226db50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongAutopilot*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::SongAutopilot::__get__cutAngle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cutAngle;
}
constexpr float_t const& GlobalNamespace::SongAutopilot::__get__cutAngle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cutAngle;
}
constexpr void GlobalNamespace::SongAutopilot::__set__cutAngle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____cutAngle = value;
}
constexpr float_t& GlobalNamespace::SongAutopilot::__get__cutStartOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cutStartOffset;
}
constexpr float_t const& GlobalNamespace::SongAutopilot::__get__cutStartOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cutStartOffset;
}
constexpr void GlobalNamespace::SongAutopilot::__set__cutStartOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____cutStartOffset = value;
}
constexpr float_t& GlobalNamespace::SongAutopilot::__get__cutEndOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cutEndOffset;
}
constexpr float_t const& GlobalNamespace::SongAutopilot::__get__cutEndOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cutEndOffset;
}
constexpr void GlobalNamespace::SongAutopilot::__set__cutEndOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____cutEndOffset = value;
}
constexpr float_t& GlobalNamespace::SongAutopilot::__get_saberYOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___saberYOffset;
}
constexpr float_t const& GlobalNamespace::SongAutopilot::__get_saberYOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___saberYOffset;
}
constexpr void GlobalNamespace::SongAutopilot::__set_saberYOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___saberYOffset = value;
}
constexpr ::GlobalNamespace::Vector3SO*& GlobalNamespace::SongAutopilot::__get__controllerPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____controllerPosition;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> const& GlobalNamespace::SongAutopilot::__get__controllerPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____controllerPosition;
}
constexpr void GlobalNamespace::SongAutopilot::__set__controllerPosition(::GlobalNamespace::Vector3SO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____controllerPosition)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::Vector3SO*& GlobalNamespace::SongAutopilot::__get__controllerRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____controllerRotation;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> const& GlobalNamespace::SongAutopilot::__get__controllerRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____controllerRotation;
}
constexpr void GlobalNamespace::SongAutopilot::__set__controllerRotation(::GlobalNamespace::Vector3SO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____controllerRotation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::Vector3SO*& GlobalNamespace::SongAutopilot::__get__roomCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____roomCenter;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> const& GlobalNamespace::SongAutopilot::__get__roomCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____roomCenter;
}
constexpr void GlobalNamespace::SongAutopilot::__set__roomCenter(::GlobalNamespace::Vector3SO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____roomCenter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::FloatSO*& GlobalNamespace::SongAutopilot::__get__roomRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____roomRotation;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& GlobalNamespace::SongAutopilot::__get__roomRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____roomRotation;
}
constexpr void GlobalNamespace::SongAutopilot::__set__roomRotation(::GlobalNamespace::FloatSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____roomRotation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::SongAutopilot::__get__drawHitTimeline() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____drawHitTimeline;
}
constexpr bool const& GlobalNamespace::SongAutopilot::__get__drawHitTimeline() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____drawHitTimeline;
}
constexpr void GlobalNamespace::SongAutopilot::__set__drawHitTimeline(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____drawHitTimeline = value;
}
constexpr float_t& GlobalNamespace::SongAutopilot::__get__drawAheadTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____drawAheadTime;
}
constexpr float_t const& GlobalNamespace::SongAutopilot::__get__drawAheadTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____drawAheadTime;
}
constexpr void GlobalNamespace::SongAutopilot::__set__drawAheadTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____drawAheadTime = value;
}
constexpr float_t& GlobalNamespace::SongAutopilot::__get__drawAfterTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____drawAfterTime;
}
constexpr float_t const& GlobalNamespace::SongAutopilot::__get__drawAfterTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____drawAfterTime;
}
constexpr void GlobalNamespace::SongAutopilot::__set__drawAfterTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____drawAfterTime = value;
}
constexpr float_t& GlobalNamespace::SongAutopilot::__get__bobFrequency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bobFrequency;
}
constexpr float_t const& GlobalNamespace::SongAutopilot::__get__bobFrequency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bobFrequency;
}
constexpr void GlobalNamespace::SongAutopilot::__set__bobFrequency(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____bobFrequency = value;
}
constexpr float_t& GlobalNamespace::SongAutopilot::__get__bobAmplitude() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bobAmplitude;
}
constexpr float_t const& GlobalNamespace::SongAutopilot::__get__bobAmplitude() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bobAmplitude;
}
constexpr void GlobalNamespace::SongAutopilot::__set__bobAmplitude(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____bobAmplitude = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SongAutopilot::__get__cameraLocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cameraLocation;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SongAutopilot::__get__cameraLocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cameraLocation;
}
constexpr void GlobalNamespace::SongAutopilot::__set__cameraLocation(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____cameraLocation = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SongAutopilot::__get__cameraRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cameraRotation;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SongAutopilot::__get__cameraRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cameraRotation;
}
constexpr void GlobalNamespace::SongAutopilot::__set__cameraRotation(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____cameraRotation = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::SongAutopilot::__get__cameraMovementRange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cameraMovementRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::SongAutopilot::__get__cameraMovementRange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cameraMovementRange;
}
constexpr void GlobalNamespace::SongAutopilot::__set__cameraMovementRange(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____cameraMovementRange = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::SongAutopilot::__get__cameraRotationRange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cameraRotationRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::SongAutopilot::__get__cameraRotationRange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cameraRotationRange;
}
constexpr void GlobalNamespace::SongAutopilot::__set__cameraRotationRange(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____cameraRotationRange = value;
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& GlobalNamespace::SongAutopilot::__get__sceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____sceneSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> const& GlobalNamespace::SongAutopilot::__get__sceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____sceneSetupData;
}
constexpr void GlobalNamespace::SongAutopilot::__set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sceneSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerVRControllersManager*& GlobalNamespace::SongAutopilot::__get__playerVRControllersManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playerVRControllersManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerVRControllersManager*> const& GlobalNamespace::SongAutopilot::__get__playerVRControllersManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playerVRControllersManager;
}
constexpr void GlobalNamespace::SongAutopilot::__set__playerVRControllersManager(::GlobalNamespace::PlayerVRControllersManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerVRControllersManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IBeatmapObjectSpawnController*& GlobalNamespace::SongAutopilot::__get__beatmapObjectSpawnController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapObjectSpawnController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapObjectSpawnController*> const& GlobalNamespace::SongAutopilot::__get__beatmapObjectSpawnController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapObjectSpawnController;
}
constexpr void GlobalNamespace::SongAutopilot::__set__beatmapObjectSpawnController(::GlobalNamespace::IBeatmapObjectSpawnController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectSpawnController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::SongAutopilot::__get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& GlobalNamespace::SongAutopilot::__get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::SongAutopilot::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IVRPlatformHelper*& GlobalNamespace::SongAutopilot::__get__vrPlatformHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____vrPlatformHelper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& GlobalNamespace::SongAutopilot::__get__vrPlatformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____vrPlatformHelper;
}
constexpr void GlobalNamespace::SongAutopilot::__set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vrPlatformHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Camera*& GlobalNamespace::SongAutopilot::__get__hmdCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hmdCamera;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& GlobalNamespace::SongAutopilot::__get__hmdCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hmdCamera;
}
constexpr void GlobalNamespace::SongAutopilot::__set__hmdCamera(::UnityEngine::Camera* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hmdCamera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::SongAutopilot* GlobalNamespace::SongAutopilot::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SongAutopilot*>());
}
inline void GlobalNamespace::SongAutopilot::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongAutopilot*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongAutopilot::SongAutopilot() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
