#pragma once
#include "UnityEngine/zzzz__AnimatorCullingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AnimatorCullingMode::AnimatorCullingMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AnimatorCullingMode::AnimatorCullingMode() {}
constexpr ::UnityEngine::AnimatorCullingMode UnityEngine::AnimatorCullingMode::AlwaysAnimate{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::AnimatorCullingMode UnityEngine::AnimatorCullingMode::CullUpdateTransforms{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::AnimatorCullingMode UnityEngine::AnimatorCullingMode::CullCompletely{ static_cast<int32_t>(0x2) };
