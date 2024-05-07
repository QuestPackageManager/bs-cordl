#pragma once
// IWYU pragma private; include "BeatSaber/RecPlay/PoseFrame.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "BeatSaber/RecPlay/zzzz__PoseFrame_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pose", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::RecPlay::PoseFrame::PoseFrame(float_t time, ::UnityEngine::Pose pose) noexcept {
  this->time = time;
  this->pose = pose;
}
// Ctor Parameters []
constexpr ::BeatSaber::RecPlay::PoseFrame::PoseFrame() {}
