#pragma once
// IWYU pragma private; include "UnityEngine/SimulationMode.hpp"
#include "UnityEngine/zzzz__SimulationMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SimulationMode::SimulationMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::SimulationMode::SimulationMode() {}
constexpr ::UnityEngine::SimulationMode UnityEngine::SimulationMode::FixedUpdate{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::SimulationMode UnityEngine::SimulationMode::Update{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::SimulationMode UnityEngine::SimulationMode::Script{ static_cast<int32_t>(0x2) };
