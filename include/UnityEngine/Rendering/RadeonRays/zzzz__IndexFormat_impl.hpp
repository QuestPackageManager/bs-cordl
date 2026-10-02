#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/IndexFormat.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__IndexFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RadeonRays::IndexFormat::IndexFormat(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RadeonRays::IndexFormat::IndexFormat() {}
constexpr ::UnityEngine::Rendering::RadeonRays::IndexFormat UnityEngine::Rendering::RadeonRays::IndexFormat::Int32{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::RadeonRays::IndexFormat UnityEngine::Rendering::RadeonRays::IndexFormat::Int16{ static_cast<int32_t>(0x1) };
