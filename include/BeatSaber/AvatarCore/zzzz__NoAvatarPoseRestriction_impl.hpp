#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/NoAvatarPoseRestriction.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__NoAvatarPoseRestriction_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarPoseRestriction_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::NoAvatarPoseRestriction.RestrictPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::NoAvatarPoseRestriction::*)(
    ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>,
    ::by_ref<::UnityEngine::Vector3>)>(&::BeatSaber::AvatarCore::NoAvatarPoseRestriction::RestrictPose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x326f5b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::NoAvatarPoseRestriction*>(),
                                                             { "RestrictPose",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::NoAvatarPoseRestriction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::NoAvatarPoseRestriction::*)()>(&::BeatSaber::AvatarCore::NoAvatarPoseRestriction::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x326f5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::NoAvatarPoseRestriction*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void BeatSaber::AvatarCore::NoAvatarPoseRestriction::RestrictPose(::UnityEngine::Quaternion headRotation, ::UnityEngine::Vector3 headPosition, ::UnityEngine::Vector3 leftHandPosition,
                                                                         ::UnityEngine::Vector3 rightHandPosition, ::by_ref<::UnityEngine::Vector3> newHeadPosition,
                                                                         ::by_ref<::UnityEngine::Vector3> newLeftHandPosition, ::by_ref<::UnityEngine::Vector3> newRightHandPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::NoAvatarPoseRestriction*>(),
                          { "RestrictPose",
                            {},
                            { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headRotation, headPosition, leftHandPosition, rightHandPosition, newHeadPosition, newLeftHandPosition,
                                                   newRightHandPosition);
}
inline void BeatSaber::AvatarCore::NoAvatarPoseRestriction::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::NoAvatarPoseRestriction*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::NoAvatarPoseRestriction* BeatSaber::AvatarCore::NoAvatarPoseRestriction::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::AvatarCore::NoAvatarPoseRestriction*>());
}
/// @brief Convert operator to "::BeatSaber::AvatarCore::IAvatarPoseRestriction"
constexpr BeatSaber::AvatarCore::NoAvatarPoseRestriction::operator ::BeatSaber::AvatarCore::IAvatarPoseRestriction*() noexcept {
  return static_cast<::BeatSaber::AvatarCore::IAvatarPoseRestriction*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::AvatarCore::IAvatarPoseRestriction"
constexpr ::BeatSaber::AvatarCore::IAvatarPoseRestriction* BeatSaber::AvatarCore::NoAvatarPoseRestriction::i___BeatSaber__AvatarCore__IAvatarPoseRestriction() noexcept {
  return static_cast<::BeatSaber::AvatarCore::IAvatarPoseRestriction*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::NoAvatarPoseRestriction::NoAvatarPoseRestriction() {}
