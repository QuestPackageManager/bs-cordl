#pragma once
#include "UnityEngine/zzzz__AvatarIKGoal_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AvatarIKGoal::AvatarIKGoal(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AvatarIKGoal::AvatarIKGoal() {}
constexpr ::UnityEngine::AvatarIKGoal UnityEngine::AvatarIKGoal::LeftFoot{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::AvatarIKGoal UnityEngine::AvatarIKGoal::RightFoot{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::AvatarIKGoal UnityEngine::AvatarIKGoal::LeftHand{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::AvatarIKGoal UnityEngine::AvatarIKGoal::RightHand{ static_cast<int32_t>(0x3) };
