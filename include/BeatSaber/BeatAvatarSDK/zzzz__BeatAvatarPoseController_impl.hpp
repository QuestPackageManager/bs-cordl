#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarSDK/BeatAvatarPoseController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__BeatAvatarPoseController_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__HeadBodyOffsetSO_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController.get_bodyWorldPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::*)()>(
    &::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::get_bodyWorldPosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x327c098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*>(), { "get_bodyWorldPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController.UpdateTransforms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3,
                                                                                                                      ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(
    &::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::UpdateTransforms)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x327c0b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*>(),
                                                { "UpdateTransforms",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                    ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController.UpdateBodyPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::*)()>(&::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::UpdateBodyPosition)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x327c17c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*>(), { "UpdateBodyPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::*)()>(&::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x327c334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__cordl_internal_get__headTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__cordl_internal_get__headTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTransform;
}
constexpr void BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__cordl_internal_set__headTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__cordl_internal_get__leftHandTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__cordl_internal_get__leftHandTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandTransform;
}
constexpr void BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__cordl_internal_set__leftHandTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftHandTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__cordl_internal_get__rightHandTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__cordl_internal_get__rightHandTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandTransform;
}
constexpr void BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__cordl_internal_set__rightHandTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightHandTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__cordl_internal_get__bodyTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bodyTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__cordl_internal_get__bodyTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bodyTransform;
}
constexpr void BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__cordl_internal_set__bodyTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bodyTransform = value;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO>& BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__cordl_internal_get__headBodyOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headBodyOffset;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO> const& BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__cordl_internal_get__headBodyOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headBodyOffset;
}
constexpr void BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::__cordl_internal_set__headBodyOffset(::UnityW<::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headBodyOffset = value;
}
inline ::UnityEngine::Vector3 BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::get_bodyWorldPosition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*>(), { "get_bodyWorldPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::UpdateTransforms(::UnityEngine::Vector3 headPosition, ::UnityEngine::Vector3 leftHandPosition, ::UnityEngine::Vector3 rightHandPosition,
                                                                                 ::UnityEngine::Quaternion headRotation, ::UnityEngine::Quaternion leftHandRotation,
                                                                                 ::UnityEngine::Quaternion rightHandRotation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*>(),
                                              { "UpdateTransforms",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                  ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headPosition, leftHandPosition, rightHandPosition, headRotation, leftHandRotation, rightHandRotation);
}
inline void BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::UpdateBodyPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*>(), { "UpdateBodyPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController* BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController::BeatAvatarPoseController() {}
