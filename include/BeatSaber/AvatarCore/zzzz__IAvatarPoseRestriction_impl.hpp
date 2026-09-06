#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/IAvatarPoseRestriction.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarPoseRestriction_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::IAvatarPoseRestriction.RestrictPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::IAvatarPoseRestriction::*)(
    ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>,
    ::by_ref<::UnityEngine::Vector3>)>(&::BeatSaber::AvatarCore::IAvatarPoseRestriction::RestrictPose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::IAvatarPoseRestriction*>(), { ::i2c::class_of<::BeatSaber::AvatarCore::IAvatarPoseRestriction*>(), 0 }));
    return ___internal_method;
  }
};
inline void BeatSaber::AvatarCore::IAvatarPoseRestriction::RestrictPose(::UnityEngine::Quaternion headRotation, ::UnityEngine::Vector3 headPosition, ::UnityEngine::Vector3 leftHandPosition,
                                                                        ::UnityEngine::Vector3 rightHandPosition, ::by_ref<::UnityEngine::Vector3> newHeadPosition,
                                                                        ::by_ref<::UnityEngine::Vector3> newLeftHandPosition, ::by_ref<::UnityEngine::Vector3> newRightHandPosition) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::AvatarCore::IAvatarPoseRestriction*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headRotation, headPosition, leftHandPosition, rightHandPosition, newHeadPosition, newLeftHandPosition,
                                                   newRightHandPosition);
}
