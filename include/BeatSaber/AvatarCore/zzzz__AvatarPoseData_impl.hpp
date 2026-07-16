#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/AvatarPoseData.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarPoseData_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarPoseData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::AvatarPoseData::*)(::UnityEngine::Pose, ::UnityEngine::Pose, ::UnityEngine::Pose)>(
    &::BeatSaber::AvatarCore::AvatarPoseData::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x326aac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarPoseData>(),
                                                { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::AvatarCore::AvatarPoseData::_ctor(::UnityEngine::Pose headPose, ::UnityEngine::Pose leftHandPose, ::UnityEngine::Pose rightHandPose) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarPoseData>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, headPose, leftHandPose, rightHandPose);
}
// Ctor Parameters [CppParam { name: "headPose", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftHandPose", ty: "::UnityEngine::Pose", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "rightHandPose", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::AvatarCore::AvatarPoseData::AvatarPoseData(::UnityEngine::Pose headPose, ::UnityEngine::Pose leftHandPose, ::UnityEngine::Pose rightHandPose) noexcept {
  this->headPose = headPose;
  this->leftHandPose = leftHandPose;
  this->rightHandPose = rightHandPose;
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::AvatarPoseData::AvatarPoseData() {}
