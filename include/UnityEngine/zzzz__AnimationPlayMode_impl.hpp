#pragma once
// IWYU pragma private; include "UnityEngine/AnimationPlayMode.hpp"
#include "UnityEngine/zzzz__AnimationPlayMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AnimationPlayMode::AnimationPlayMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AnimationPlayMode::AnimationPlayMode() {}
constexpr ::UnityEngine::AnimationPlayMode UnityEngine::AnimationPlayMode::Stop{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::AnimationPlayMode UnityEngine::AnimationPlayMode::Queue{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::AnimationPlayMode UnityEngine::AnimationPlayMode::Mix{ static_cast<int32_t>(0x2) };
