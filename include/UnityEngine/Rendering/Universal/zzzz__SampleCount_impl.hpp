#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/SampleCount.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__SampleCount_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::SampleCount::SampleCount(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::SampleCount::SampleCount() {}
constexpr ::UnityEngine::Rendering::Universal::SampleCount UnityEngine::Rendering::Universal::SampleCount::One{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::SampleCount UnityEngine::Rendering::Universal::SampleCount::Two{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::SampleCount UnityEngine::Rendering::Universal::SampleCount::Four{ static_cast<int32_t>(0x4) };
