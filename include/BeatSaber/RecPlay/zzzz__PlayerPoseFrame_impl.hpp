#pragma once
// IWYU pragma private; include "BeatSaber/RecPlay/PlayerPoseFrame.hpp"
#include "BeatSaber/RecPlay/zzzz__PlayerPose_impl.hpp"
#include "BeatSaber/RecPlay/zzzz__PlayerPoseFrame_def.hpp"
// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pose", ty: "::BeatSaber::RecPlay::PlayerPose", modifiers: "", def_value:
// Some("{}") }]
constexpr ::BeatSaber::RecPlay::PlayerPoseFrame::PlayerPoseFrame(float_t time, ::BeatSaber::RecPlay::PlayerPose pose) noexcept {
  this->time = time;
  this->pose = pose;
}
// Ctor Parameters []
constexpr ::BeatSaber::RecPlay::PlayerPoseFrame::PlayerPoseFrame() {}
