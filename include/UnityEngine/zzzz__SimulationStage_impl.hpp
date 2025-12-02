#pragma once
// IWYU pragma private; include "UnityEngine/SimulationStage.hpp"
#include "UnityEngine/zzzz__SimulationStage_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SimulationStage::SimulationStage(uint16_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::SimulationStage::SimulationStage() {}
constexpr ::UnityEngine::SimulationStage UnityEngine::SimulationStage::None{ static_cast<uint16_t>(0x0u) };
constexpr ::UnityEngine::SimulationStage UnityEngine::SimulationStage::PrepareSimulation{ static_cast<uint16_t>(0x1u) };
constexpr ::UnityEngine::SimulationStage UnityEngine::SimulationStage::RunSimulation{ static_cast<uint16_t>(0x2u) };
constexpr ::UnityEngine::SimulationStage UnityEngine::SimulationStage::PublishSimulationResults{ static_cast<uint16_t>(0x4u) };
constexpr ::UnityEngine::SimulationStage UnityEngine::SimulationStage::All{ static_cast<uint16_t>(0x7u) };
