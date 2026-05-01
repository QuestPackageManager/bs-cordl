#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShaderPropertyType.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderPropertyType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ShaderPropertyType::ShaderPropertyType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ShaderPropertyType::ShaderPropertyType() {}
constexpr ::UnityEngine::Rendering::ShaderPropertyType UnityEngine::Rendering::ShaderPropertyType::Color{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::ShaderPropertyType UnityEngine::Rendering::ShaderPropertyType::Vector{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::ShaderPropertyType UnityEngine::Rendering::ShaderPropertyType::Float{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::ShaderPropertyType UnityEngine::Rendering::ShaderPropertyType::Range{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::ShaderPropertyType UnityEngine::Rendering::ShaderPropertyType::Texture{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::ShaderPropertyType UnityEngine::Rendering::ShaderPropertyType::Int{ static_cast<int32_t>(0x5) };
