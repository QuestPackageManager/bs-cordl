#pragma once
// IWYU pragma private; include "UnityEngine/SimulationOption.hpp"
#include "UnityEngine/zzzz__SimulationOption_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SimulationOption::SimulationOption(uint16_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::SimulationOption::SimulationOption() {}
constexpr ::UnityEngine::SimulationOption UnityEngine::SimulationOption::None{ static_cast<uint16_t>(0x0u) };
constexpr ::UnityEngine::SimulationOption UnityEngine::SimulationOption::SyncTransforms{ static_cast<uint16_t>(0x1u) };
constexpr ::UnityEngine::SimulationOption UnityEngine::SimulationOption::IgnoreEmptyScenes{ static_cast<uint16_t>(0x2u) };
constexpr ::UnityEngine::SimulationOption UnityEngine::SimulationOption::All{ static_cast<uint16_t>(0x3u) };
