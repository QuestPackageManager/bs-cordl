#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RendererOverrideOption.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RendererOverrideOption_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::RendererOverrideOption::RendererOverrideOption(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::RendererOverrideOption::RendererOverrideOption() {}
constexpr ::UnityEngine::Rendering::Universal::RendererOverrideOption UnityEngine::Rendering::Universal::RendererOverrideOption::Custom{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::RendererOverrideOption UnityEngine::Rendering::Universal::RendererOverrideOption::UsePipelineSettings{ static_cast<int32_t>(0x1) };
