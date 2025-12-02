#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/HDRACESPreset.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__HDRACESPreset_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::HDRACESPreset::HDRACESPreset(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::HDRACESPreset::HDRACESPreset() {}
constexpr ::UnityEngine::Rendering::Universal::HDRACESPreset UnityEngine::Rendering::Universal::HDRACESPreset::ACES1000Nits{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::Universal::HDRACESPreset UnityEngine::Rendering::Universal::HDRACESPreset::ACES2000Nits{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::Universal::HDRACESPreset UnityEngine::Rendering::Universal::HDRACESPreset::ACES4000Nits{ static_cast<int32_t>(0x5) };
