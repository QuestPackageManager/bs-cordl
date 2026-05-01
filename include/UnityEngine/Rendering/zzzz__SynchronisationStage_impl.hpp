#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SynchronisationStage.hpp"
#include "UnityEngine/Rendering/zzzz__SynchronisationStage_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::SynchronisationStage::SynchronisationStage(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SynchronisationStage::SynchronisationStage() {}
constexpr ::UnityEngine::Rendering::SynchronisationStage UnityEngine::Rendering::SynchronisationStage::VertexProcessing{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::SynchronisationStage UnityEngine::Rendering::SynchronisationStage::PixelProcessing{ static_cast<int32_t>(0x1) };
