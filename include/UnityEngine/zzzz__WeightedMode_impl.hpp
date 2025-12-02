#pragma once
// IWYU pragma private; include "UnityEngine/WeightedMode.hpp"
#include "UnityEngine/zzzz__WeightedMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::WeightedMode::WeightedMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::WeightedMode::WeightedMode() {}
constexpr ::UnityEngine::WeightedMode UnityEngine::WeightedMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::WeightedMode UnityEngine::WeightedMode::In{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::WeightedMode UnityEngine::WeightedMode::Out{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::WeightedMode UnityEngine::WeightedMode::Both{ static_cast<int32_t>(0x3) };
