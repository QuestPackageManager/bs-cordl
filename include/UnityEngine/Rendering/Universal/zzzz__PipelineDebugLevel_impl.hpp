#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PipelineDebugLevel.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PipelineDebugLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::PipelineDebugLevel::PipelineDebugLevel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PipelineDebugLevel::PipelineDebugLevel() {}
constexpr ::UnityEngine::Rendering::Universal::PipelineDebugLevel UnityEngine::Rendering::Universal::PipelineDebugLevel::Disabled{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::PipelineDebugLevel UnityEngine::Rendering::Universal::PipelineDebugLevel::Profiling{ static_cast<int32_t>(0x1) };
