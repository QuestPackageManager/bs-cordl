#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DrawRendererFlags.hpp"
#include "UnityEngine/Rendering/zzzz__DrawRendererFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::DrawRendererFlags::DrawRendererFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DrawRendererFlags::DrawRendererFlags() {}
constexpr ::UnityEngine::Rendering::DrawRendererFlags UnityEngine::Rendering::DrawRendererFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::DrawRendererFlags UnityEngine::Rendering::DrawRendererFlags::EnableDynamicBatching{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::DrawRendererFlags UnityEngine::Rendering::DrawRendererFlags::EnableInstancing{ static_cast<int32_t>(0x2) };
