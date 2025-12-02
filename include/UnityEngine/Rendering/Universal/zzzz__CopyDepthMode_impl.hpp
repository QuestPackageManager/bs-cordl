#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/CopyDepthMode.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CopyDepthMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::CopyDepthMode::CopyDepthMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::CopyDepthMode::CopyDepthMode() {}
constexpr ::UnityEngine::Rendering::Universal::CopyDepthMode UnityEngine::Rendering::Universal::CopyDepthMode::AfterOpaques{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::CopyDepthMode UnityEngine::Rendering::Universal::CopyDepthMode::AfterTransparents{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::CopyDepthMode UnityEngine::Rendering::Universal::CopyDepthMode::ForcePrepass{ static_cast<int32_t>(0x2) };
