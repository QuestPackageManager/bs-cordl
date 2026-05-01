#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/MSAASamples.hpp"
#include "UnityEngine/Rendering/zzzz__MSAASamples_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::MSAASamples::MSAASamples(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::MSAASamples::MSAASamples() {}
constexpr ::UnityEngine::Rendering::MSAASamples UnityEngine::Rendering::MSAASamples::None{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::MSAASamples UnityEngine::Rendering::MSAASamples::MSAA2x{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::MSAASamples UnityEngine::Rendering::MSAASamples::MSAA4x{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::MSAASamples UnityEngine::Rendering::MSAASamples::MSAA8x{ static_cast<int32_t>(0x8) };
