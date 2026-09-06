#pragma once
// IWYU pragma private; include "BeatSaber/RecPlay/PlayerPose.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "BeatSaber/RecPlay/zzzz__PlayerPose_def.hpp"
// Ctor Parameters [CppParam { name: "head", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "leftHand", ty: "::UnityEngine::Pose", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "rightHand", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::BeatSaber::RecPlay::PlayerPose::PlayerPose(::UnityEngine::Pose head, ::UnityEngine::Pose leftHand, ::UnityEngine::Pose rightHand) noexcept {
  this->head = head;
  this->leftHand = leftHand;
  this->rightHand = rightHand;
}
// Ctor Parameters []
constexpr ::BeatSaber::RecPlay::PlayerPose::PlayerPose() {}
