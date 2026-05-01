#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/TemporalAAQuality.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TemporalAAQuality_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::TemporalAAQuality::TemporalAAQuality(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::TemporalAAQuality::TemporalAAQuality() {}
constexpr ::UnityEngine::Rendering::Universal::TemporalAAQuality UnityEngine::Rendering::Universal::TemporalAAQuality::VeryLow{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::TemporalAAQuality UnityEngine::Rendering::Universal::TemporalAAQuality::Low{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::TemporalAAQuality UnityEngine::Rendering::Universal::TemporalAAQuality::Medium{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::TemporalAAQuality UnityEngine::Rendering::Universal::TemporalAAQuality::High{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::Universal::TemporalAAQuality UnityEngine::Rendering::Universal::TemporalAAQuality::VeryHigh{ static_cast<int32_t>(0x4) };
