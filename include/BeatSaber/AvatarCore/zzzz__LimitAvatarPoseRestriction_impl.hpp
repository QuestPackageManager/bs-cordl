#pragma once
// IWYU pragma private; include "BeatSaber\AvatarCore\LimitAvatarPoseRestriction.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__LimitAvatarPoseRestriction_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarPoseRestriction_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__LimitAvatarPoseRestriction_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters::*)()>(
    &::BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x326f8c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters::__cordl_internal_get_maxHeadSquareDistanceFromCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxHeadSquareDistanceFromCenter;
}
constexpr float_t const& BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters::__cordl_internal_get_maxHeadSquareDistanceFromCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxHeadSquareDistanceFromCenter;
}
constexpr void BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters::__cordl_internal_set_maxHeadSquareDistanceFromCenter(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxHeadSquareDistanceFromCenter = value;
}
constexpr float_t& BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters::__cordl_internal_get_minHeadYPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minHeadYPos;
}
constexpr float_t const& BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters::__cordl_internal_get_minHeadYPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minHeadYPos;
}
constexpr void BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters::__cordl_internal_set_minHeadYPos(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minHeadYPos = value;
}
constexpr float_t& BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters::__cordl_internal_get_maxHeadYPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxHeadYPos;
}
constexpr float_t const& BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters::__cordl_internal_get_maxHeadYPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxHeadYPos;
}
constexpr void BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters::__cordl_internal_set_maxHeadYPos(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxHeadYPos = value;
}
constexpr float_t& BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters::__cordl_internal_get_minHandXZSquareDistanceFromHeadCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minHandXZSquareDistanceFromHeadCenter;
}
constexpr float_t const& BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters::__cordl_internal_get_minHandXZSquareDistanceFromHeadCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minHandXZSquareDistanceFromHeadCenter;
}
constexpr void BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters::__cordl_internal_set_minHandXZSquareDistanceFromHeadCenter(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minHandXZSquareDistanceFromHeadCenter = value;
}
constexpr float_t& BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters::__cordl_internal_get_maxHandXZSquareDistanceFromHeadCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxHandXZSquareDistanceFromHeadCenter;
}
constexpr float_t const& BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters::__cordl_internal_get_maxHandXZSquareDistanceFromHeadCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxHandXZSquareDistanceFromHeadCenter;
}
constexpr void BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters::__cordl_internal_set_maxHandXZSquareDistanceFromHeadCenter(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxHandXZSquareDistanceFromHeadCenter = value;
}
constexpr float_t& BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters::__cordl_internal_get_minHandYDistanceFromHeadCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minHandYDistanceFromHeadCenter;
}
constexpr float_t const& BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters::__cordl_internal_get_minHandYDistanceFromHeadCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minHandYDistanceFromHeadCenter;
}
constexpr void BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters::__cordl_internal_set_minHandYDistanceFromHeadCenter(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minHandYDistanceFromHeadCenter = value;
}
constexpr float_t& BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters::__cordl_internal_get_maxHandYDistanceFromHeadCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxHandYDistanceFromHeadCenter;
}
constexpr float_t const& BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters::__cordl_internal_get_maxHandYDistanceFromHeadCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxHandYDistanceFromHeadCenter;
}
constexpr void BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters::__cordl_internal_set_maxHandYDistanceFromHeadCenter(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxHandYDistanceFromHeadCenter = value;
}
constexpr bool& BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters::__cordl_internal_get_forceHeadPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceHeadPosition;
}
constexpr bool const& BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters::__cordl_internal_get_forceHeadPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceHeadPosition;
}
constexpr void BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters::__cordl_internal_set_forceHeadPosition(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forceHeadPosition = value;
}
constexpr ::UnityEngine::Vector3& BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters::__cordl_internal_get_centerHeadOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___centerHeadOffset;
}
constexpr ::UnityEngine::Vector3 const& BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters::__cordl_internal_get_centerHeadOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___centerHeadOffset;
}
constexpr void BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters::__cordl_internal_set_centerHeadOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___centerHeadOffset = value;
}
inline void BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters* BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters::LimitAvatarPoseRestriction_Parameters() {}
//  Writing Method size for method: ::BeatSaber::AvatarCore::LimitAvatarPoseRestriction.RestrictPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::LimitAvatarPoseRestriction::*)(
    ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>,
    ::by_ref<::UnityEngine::Vector3>)>(&::BeatSaber::AvatarCore::LimitAvatarPoseRestriction::RestrictPose)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x326f620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::LimitAvatarPoseRestriction*>(),
                                                             { "RestrictPose",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::LimitAvatarPoseRestriction.LimitHandPositionRelativeToHead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::BeatSaber::AvatarCore::LimitAvatarPoseRestriction::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::BeatSaber::AvatarCore::LimitAvatarPoseRestriction::LimitHandPositionRelativeToHead)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x326f820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::LimitAvatarPoseRestriction*>(),
                                                             { "LimitHandPositionRelativeToHead", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::LimitAvatarPoseRestriction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::LimitAvatarPoseRestriction::*)()>(&::BeatSaber::AvatarCore::LimitAvatarPoseRestriction::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x326f8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::LimitAvatarPoseRestriction*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters*& BeatSaber::AvatarCore::LimitAvatarPoseRestriction::__cordl_internal_get__parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameters;
}
constexpr ::BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters* const& BeatSaber::AvatarCore::LimitAvatarPoseRestriction::__cordl_internal_get__parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameters;
}
constexpr void BeatSaber::AvatarCore::LimitAvatarPoseRestriction::__cordl_internal_set__parameters(::BeatSaber::AvatarCore::LimitAvatarPoseRestriction_Parameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parameters = value;
}
inline void BeatSaber::AvatarCore::LimitAvatarPoseRestriction::RestrictPose(::UnityEngine::Quaternion headRotation, ::UnityEngine::Vector3 headPosition, ::UnityEngine::Vector3 leftHandPosition,
                                                                            ::UnityEngine::Vector3 rightHandPosition, ::by_ref<::UnityEngine::Vector3> newHeadPosition,
                                                                            ::by_ref<::UnityEngine::Vector3> newLeftHandPosition, ::by_ref<::UnityEngine::Vector3> newRightHandPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::LimitAvatarPoseRestriction*>(),
                          { "RestrictPose",
                            {},
                            { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headRotation, headPosition, leftHandPosition, rightHandPosition, newHeadPosition, newLeftHandPosition,
                                                   newRightHandPosition);
}
inline ::UnityEngine::Vector3 BeatSaber::AvatarCore::LimitAvatarPoseRestriction::LimitHandPositionRelativeToHead(::UnityEngine::Vector3 handPosition, ::UnityEngine::Vector3 headCenter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::LimitAvatarPoseRestriction*>(),
                                                           { "LimitHandPositionRelativeToHead", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, handPosition, headCenter);
}
inline void BeatSaber::AvatarCore::LimitAvatarPoseRestriction::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::LimitAvatarPoseRestriction*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::LimitAvatarPoseRestriction* BeatSaber::AvatarCore::LimitAvatarPoseRestriction::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::AvatarCore::LimitAvatarPoseRestriction*>());
}
/// @brief Convert operator to "::BeatSaber::AvatarCore::IAvatarPoseRestriction"
constexpr BeatSaber::AvatarCore::LimitAvatarPoseRestriction::operator ::BeatSaber::AvatarCore::IAvatarPoseRestriction*() noexcept {
  return static_cast<::BeatSaber::AvatarCore::IAvatarPoseRestriction*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::AvatarCore::IAvatarPoseRestriction"
constexpr ::BeatSaber::AvatarCore::IAvatarPoseRestriction* BeatSaber::AvatarCore::LimitAvatarPoseRestriction::i___BeatSaber__AvatarCore__IAvatarPoseRestriction() noexcept {
  return static_cast<::BeatSaber::AvatarCore::IAvatarPoseRestriction*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::LimitAvatarPoseRestriction::LimitAvatarPoseRestriction() {}
