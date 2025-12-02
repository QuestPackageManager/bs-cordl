#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScriptableRenderPassInput.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPassInput_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput::ScriptableRenderPassInput(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput::ScriptableRenderPassInput() {}
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput UnityEngine::Rendering::Universal::ScriptableRenderPassInput::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput UnityEngine::Rendering::Universal::ScriptableRenderPassInput::Depth{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput UnityEngine::Rendering::Universal::ScriptableRenderPassInput::Normal{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput UnityEngine::Rendering::Universal::ScriptableRenderPassInput::Color{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput UnityEngine::Rendering::Universal::ScriptableRenderPassInput::Motion{ static_cast<int32_t>(0x8) };
