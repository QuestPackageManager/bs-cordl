#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/BloomFilterMode.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__BloomFilterMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::Universal::BloomFilterMode::BloomFilterMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::BloomFilterMode::BloomFilterMode() {}
constexpr ::UnityEngine::Rendering::Universal::BloomFilterMode UnityEngine::Rendering::Universal::BloomFilterMode::Gaussian{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::BloomFilterMode UnityEngine::Rendering::Universal::BloomFilterMode::Dual{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::BloomFilterMode UnityEngine::Rendering::Universal::BloomFilterMode::Kawase{ static_cast<int32_t>(0x2) };
