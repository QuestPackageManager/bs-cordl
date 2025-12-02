#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/IntermediateTextureMode.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IntermediateTextureMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::IntermediateTextureMode::IntermediateTextureMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::IntermediateTextureMode::IntermediateTextureMode() {}
constexpr ::UnityEngine::Rendering::Universal::IntermediateTextureMode UnityEngine::Rendering::Universal::IntermediateTextureMode::Auto{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::IntermediateTextureMode UnityEngine::Rendering::Universal::IntermediateTextureMode::Always{ static_cast<int32_t>(0x1) };
