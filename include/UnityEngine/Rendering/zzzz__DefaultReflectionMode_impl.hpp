#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DefaultReflectionMode.hpp"
#include "UnityEngine/Rendering/zzzz__DefaultReflectionMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::DefaultReflectionMode::DefaultReflectionMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DefaultReflectionMode::DefaultReflectionMode() {}
constexpr ::UnityEngine::Rendering::DefaultReflectionMode UnityEngine::Rendering::DefaultReflectionMode::Skybox{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::DefaultReflectionMode UnityEngine::Rendering::DefaultReflectionMode::Custom{ static_cast<int32_t>(0x1) };
