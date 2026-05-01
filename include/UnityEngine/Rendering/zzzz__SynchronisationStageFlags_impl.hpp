#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SynchronisationStageFlags.hpp"
#include "UnityEngine/Rendering/zzzz__SynchronisationStageFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::SynchronisationStageFlags::SynchronisationStageFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SynchronisationStageFlags::SynchronisationStageFlags() {}
constexpr ::UnityEngine::Rendering::SynchronisationStageFlags UnityEngine::Rendering::SynchronisationStageFlags::VertexProcessing{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::SynchronisationStageFlags UnityEngine::Rendering::SynchronisationStageFlags::PixelProcessing{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::SynchronisationStageFlags UnityEngine::Rendering::SynchronisationStageFlags::ComputeProcessing{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::SynchronisationStageFlags UnityEngine::Rendering::SynchronisationStageFlags::AllGPUOperations{ static_cast<int32_t>(0x7) };
