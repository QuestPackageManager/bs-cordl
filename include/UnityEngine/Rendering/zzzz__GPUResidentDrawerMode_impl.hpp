#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUResidentDrawerMode.hpp"
#include "UnityEngine/Rendering/zzzz__GPUResidentDrawerMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUResidentDrawerMode::GPUResidentDrawerMode(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUResidentDrawerMode::GPUResidentDrawerMode() {}
constexpr ::UnityEngine::Rendering::GPUResidentDrawerMode UnityEngine::Rendering::GPUResidentDrawerMode::Disabled{ static_cast<uint8_t>(0x0u) };
constexpr ::UnityEngine::Rendering::GPUResidentDrawerMode UnityEngine::Rendering::GPUResidentDrawerMode::InstancedDrawing{ static_cast<uint8_t>(0x1u) };
