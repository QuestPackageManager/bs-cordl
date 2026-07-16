#pragma once
// IWYU pragma private; include "BeatSaber/RecPlay/PoseOffsets.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "BeatSaber/RecPlay/zzzz__PoseOffsets_def.hpp"
#include "BeatSaber/RecPlay/zzzz__PlayerPose_def.hpp"
//  Writing Method size for method: ::BeatSaber::RecPlay::PoseOffsets.Adjust
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::RecPlay::PoseOffsets::*)(::by_ref<::BeatSaber::RecPlay::PlayerPose>)>(&::BeatSaber::RecPlay::PoseOffsets::Adjust)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x32c3dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::PoseOffsets>(), { "Adjust", {}, { ::i2c::type_of<::by_ref<::BeatSaber::RecPlay::PlayerPose>>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::RecPlay::PoseOffsets::setStaticF_kDefault(::BeatSaber::RecPlay::PoseOffsets value) {
  ::cordl_internals::setStaticField<::BeatSaber::RecPlay::PoseOffsets, "kDefault", ::BeatSaber::RecPlay::PoseOffsets>(std::forward<::BeatSaber::RecPlay::PoseOffsets>(value));
}
inline ::BeatSaber::RecPlay::PoseOffsets BeatSaber::RecPlay::PoseOffsets::getStaticF_kDefault() {
  return ::cordl_internals::getStaticField<::BeatSaber::RecPlay::PoseOffsets, "kDefault", ::BeatSaber::RecPlay::PoseOffsets>();
}
inline void BeatSaber::RecPlay::PoseOffsets::Adjust(::by_ref<::BeatSaber::RecPlay::PlayerPose> pose) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::PoseOffsets>(), { "Adjust", {}, { ::i2c::type_of<::by_ref<::BeatSaber::RecPlay::PlayerPose>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pose);
}
// Ctor Parameters [CppParam { name: "room", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftController", ty: "::UnityEngine::Pose", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "rightController", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::RecPlay::PoseOffsets::PoseOffsets(::UnityEngine::Pose room, ::UnityEngine::Pose leftController, ::UnityEngine::Pose rightController) noexcept {
  this->room = room;
  this->leftController = leftController;
  this->rightController = rightController;
}
// Ctor Parameters []
constexpr ::BeatSaber::RecPlay::PoseOffsets::PoseOffsets() {}
