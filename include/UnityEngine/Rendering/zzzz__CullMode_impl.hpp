#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CullMode.hpp"
#include "UnityEngine/Rendering/zzzz__CullMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::CullMode::CullMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CullMode::CullMode() {}
constexpr ::UnityEngine::Rendering::CullMode UnityEngine::Rendering::CullMode::Off{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::CullMode UnityEngine::Rendering::CullMode::Front{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::CullMode UnityEngine::Rendering::CullMode::Back{ static_cast<int32_t>(0x2) };
