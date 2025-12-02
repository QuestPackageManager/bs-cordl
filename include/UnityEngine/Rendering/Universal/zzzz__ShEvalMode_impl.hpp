#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ShEvalMode.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShEvalMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::ShEvalMode::ShEvalMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ShEvalMode::ShEvalMode() {}
constexpr ::UnityEngine::Rendering::Universal::ShEvalMode UnityEngine::Rendering::Universal::ShEvalMode::Auto{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::ShEvalMode UnityEngine::Rendering::Universal::ShEvalMode::PerVertex{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::ShEvalMode UnityEngine::Rendering::Universal::ShEvalMode::Mixed{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::ShEvalMode UnityEngine::Rendering::Universal::ShEvalMode::PerPixel{ static_cast<int32_t>(0x3) };
