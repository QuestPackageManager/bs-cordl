#pragma once
// IWYU pragma private; include "BeatSaber/RecPlay/PlayerPoseFrames.hpp"
#include "BeatSaber/RecPlay/zzzz__PlayerPoseFrames_def.hpp"
#include "BeatSaber/RecPlay/zzzz__PoseFrame_def.hpp"
// Ctor Parameters [CppParam { name: "head", ty: "::ArrayW<::BeatSaber::RecPlay::PoseFrame,::Array<::BeatSaber::RecPlay::PoseFrame>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "leftHand", ty: "::ArrayW<::BeatSaber::RecPlay::PoseFrame,::Array<::BeatSaber::RecPlay::PoseFrame>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "rightHand", ty:
// "::ArrayW<::BeatSaber::RecPlay::PoseFrame,::Array<::BeatSaber::RecPlay::PoseFrame>*>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::BeatSaber::RecPlay::PlayerPoseFrames::PlayerPoseFrames(::ArrayW<::BeatSaber::RecPlay::PoseFrame, ::Array<::BeatSaber::RecPlay::PoseFrame>*> head,
                                                                   ::ArrayW<::BeatSaber::RecPlay::PoseFrame, ::Array<::BeatSaber::RecPlay::PoseFrame>*> leftHand,
                                                                   ::ArrayW<::BeatSaber::RecPlay::PoseFrame, ::Array<::BeatSaber::RecPlay::PoseFrame>*> rightHand) noexcept {
  this->head = head;
  this->leftHand = leftHand;
  this->rightHand = rightHand;
}
// Ctor Parameters []
constexpr ::BeatSaber::RecPlay::PlayerPoseFrames::PlayerPoseFrames() {}
