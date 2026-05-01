#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalNormalBlend.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalNormalBlend_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::DecalNormalBlend::DecalNormalBlend(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalNormalBlend::DecalNormalBlend() {}
constexpr ::UnityEngine::Rendering::Universal::DecalNormalBlend UnityEngine::Rendering::Universal::DecalNormalBlend::Low{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::DecalNormalBlend UnityEngine::Rendering::Universal::DecalNormalBlend::Medium{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::DecalNormalBlend UnityEngine::Rendering::Universal::DecalNormalBlend::High{ static_cast<int32_t>(0x2) };
