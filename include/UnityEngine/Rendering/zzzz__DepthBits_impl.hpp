#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DepthBits.hpp"
#include "UnityEngine/Rendering/zzzz__DepthBits_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::DepthBits::DepthBits(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DepthBits::DepthBits() {}
constexpr ::UnityEngine::Rendering::DepthBits UnityEngine::Rendering::DepthBits::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::DepthBits UnityEngine::Rendering::DepthBits::Depth8{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::Rendering::DepthBits UnityEngine::Rendering::DepthBits::Depth16{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::Rendering::DepthBits UnityEngine::Rendering::DepthBits::Depth24{ static_cast<int32_t>(0x18) };
constexpr ::UnityEngine::Rendering::DepthBits UnityEngine::Rendering::DepthBits::Depth32{ static_cast<int32_t>(0x20) };
