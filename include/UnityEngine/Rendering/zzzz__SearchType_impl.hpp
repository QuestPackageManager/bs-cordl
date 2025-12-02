#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SearchType.hpp"
#include "UnityEngine/Rendering/zzzz__SearchType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::SearchType::SearchType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SearchType::SearchType() {}
constexpr ::UnityEngine::Rendering::SearchType UnityEngine::Rendering::SearchType::ProjectPath{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::SearchType UnityEngine::Rendering::SearchType::BuiltinPath{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::SearchType UnityEngine::Rendering::SearchType::BuiltinExtraPath{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::SearchType UnityEngine::Rendering::SearchType::ShaderName{ static_cast<int32_t>(0x3) };
