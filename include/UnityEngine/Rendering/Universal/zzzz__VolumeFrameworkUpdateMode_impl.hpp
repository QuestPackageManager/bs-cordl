#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/VolumeFrameworkUpdateMode.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__VolumeFrameworkUpdateMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode::VolumeFrameworkUpdateMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode::VolumeFrameworkUpdateMode() {}
constexpr ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode::EveryFrame{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode::ViaScripting{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode::UsePipelineSettings{ static_cast<int32_t>(0x2) };
