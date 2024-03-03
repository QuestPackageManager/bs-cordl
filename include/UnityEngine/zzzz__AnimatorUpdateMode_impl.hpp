#pragma once
#include "UnityEngine/zzzz__AnimatorUpdateMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AnimatorUpdateMode::AnimatorUpdateMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AnimatorUpdateMode::AnimatorUpdateMode() {}
constexpr ::UnityEngine::AnimatorUpdateMode UnityEngine::AnimatorUpdateMode::Normal{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::AnimatorUpdateMode UnityEngine::AnimatorUpdateMode::AnimatePhysics{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::AnimatorUpdateMode UnityEngine::AnimatorUpdateMode::UnscaledTime{ static_cast<int32_t>(0x2) };
