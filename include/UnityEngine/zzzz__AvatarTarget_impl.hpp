#pragma once
// IWYU pragma private; include "UnityEngine/AvatarTarget.hpp"
#include "UnityEngine/zzzz__AvatarTarget_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AvatarTarget::AvatarTarget(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AvatarTarget::AvatarTarget() {}
constexpr ::UnityEngine::AvatarTarget UnityEngine::AvatarTarget::Root{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::AvatarTarget UnityEngine::AvatarTarget::Body{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::AvatarTarget UnityEngine::AvatarTarget::LeftFoot{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::AvatarTarget UnityEngine::AvatarTarget::RightFoot{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::AvatarTarget UnityEngine::AvatarTarget::LeftHand{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::AvatarTarget UnityEngine::AvatarTarget::RightHand{ static_cast<int32_t>(0x5) };
