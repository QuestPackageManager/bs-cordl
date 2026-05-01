#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ReflectionProbeClearFlags.hpp"
#include "UnityEngine/Rendering/zzzz__ReflectionProbeClearFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ReflectionProbeClearFlags::ReflectionProbeClearFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ReflectionProbeClearFlags::ReflectionProbeClearFlags() {}
constexpr ::UnityEngine::Rendering::ReflectionProbeClearFlags UnityEngine::Rendering::ReflectionProbeClearFlags::Skybox{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::ReflectionProbeClearFlags UnityEngine::Rendering::ReflectionProbeClearFlags::SolidColor{ static_cast<int32_t>(0x2) };
