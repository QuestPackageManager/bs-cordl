#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/APVLeakReductionMode.hpp"
#include "UnityEngine/Rendering/zzzz__APVLeakReductionMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::APVLeakReductionMode::APVLeakReductionMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::APVLeakReductionMode::APVLeakReductionMode() {}
constexpr ::UnityEngine::Rendering::APVLeakReductionMode UnityEngine::Rendering::APVLeakReductionMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::APVLeakReductionMode UnityEngine::Rendering::APVLeakReductionMode::Performance{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::APVLeakReductionMode UnityEngine::Rendering::APVLeakReductionMode::Quality{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::APVLeakReductionMode UnityEngine::Rendering::APVLeakReductionMode::ValidityBased{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::APVLeakReductionMode UnityEngine::Rendering::APVLeakReductionMode::ValidityAndNormalBased{ static_cast<int32_t>(0x2) };
