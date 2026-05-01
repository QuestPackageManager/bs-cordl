#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/MotionBlurMode.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MotionBlurMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::MotionBlurMode::MotionBlurMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::MotionBlurMode::MotionBlurMode() {}
constexpr ::UnityEngine::Rendering::Universal::MotionBlurMode UnityEngine::Rendering::Universal::MotionBlurMode::CameraOnly{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::MotionBlurMode UnityEngine::Rendering::Universal::MotionBlurMode::CameraAndObjects{ static_cast<int32_t>(0x1) };
