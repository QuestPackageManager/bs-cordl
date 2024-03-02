#pragma once
#include "UnityEngine/zzzz__AnimatorRecorderMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AnimatorRecorderMode::AnimatorRecorderMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AnimatorRecorderMode::AnimatorRecorderMode() {}
constexpr ::UnityEngine::AnimatorRecorderMode UnityEngine::AnimatorRecorderMode::Offline{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::AnimatorRecorderMode UnityEngine::AnimatorRecorderMode::Playback{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::AnimatorRecorderMode UnityEngine::AnimatorRecorderMode::Record{ static_cast<int32_t>(0x2) };
