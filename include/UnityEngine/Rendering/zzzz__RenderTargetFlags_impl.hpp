#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderTargetFlags.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderTargetFlags::RenderTargetFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderTargetFlags::RenderTargetFlags() {}
constexpr ::UnityEngine::Rendering::RenderTargetFlags UnityEngine::Rendering::RenderTargetFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::RenderTargetFlags UnityEngine::Rendering::RenderTargetFlags::ReadOnlyDepth{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::RenderTargetFlags UnityEngine::Rendering::RenderTargetFlags::ReadOnlyStencil{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::RenderTargetFlags UnityEngine::Rendering::RenderTargetFlags::ReadOnlyDepthStencil{ static_cast<int32_t>(0x3) };
