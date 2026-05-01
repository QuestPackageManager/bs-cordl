#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RenderingMode.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::RenderingMode::RenderingMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::RenderingMode::RenderingMode() {}
constexpr ::UnityEngine::Rendering::Universal::RenderingMode UnityEngine::Rendering::Universal::RenderingMode::Forward{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::RenderingMode UnityEngine::Rendering::Universal::RenderingMode::ForwardPlus{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::RenderingMode UnityEngine::Rendering::Universal::RenderingMode::Deferred{ static_cast<int32_t>(0x1) };
