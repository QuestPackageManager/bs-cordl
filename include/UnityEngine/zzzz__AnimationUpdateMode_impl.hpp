#pragma once
// IWYU pragma private; include "UnityEngine/AnimationUpdateMode.hpp"
#include "UnityEngine/zzzz__AnimationUpdateMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AnimationUpdateMode::AnimationUpdateMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AnimationUpdateMode::AnimationUpdateMode() {}
constexpr ::UnityEngine::AnimationUpdateMode UnityEngine::AnimationUpdateMode::Normal{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::AnimationUpdateMode UnityEngine::AnimationUpdateMode::Fixed{ static_cast<int32_t>(0x1) };
