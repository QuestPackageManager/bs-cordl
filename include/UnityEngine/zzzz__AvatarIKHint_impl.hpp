#pragma once
// IWYU pragma private; include "UnityEngine/AvatarIKHint.hpp"
#include "UnityEngine/zzzz__AvatarIKHint_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AvatarIKHint::AvatarIKHint(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AvatarIKHint::AvatarIKHint() {}
constexpr ::UnityEngine::AvatarIKHint UnityEngine::AvatarIKHint::LeftKnee{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::AvatarIKHint UnityEngine::AvatarIKHint::RightKnee{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::AvatarIKHint UnityEngine::AvatarIKHint::LeftElbow{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::AvatarIKHint UnityEngine::AvatarIKHint::RightElbow{ static_cast<int32_t>(0x3) };
