#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/LightProbeSystem.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightProbeSystem_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::LightProbeSystem::LightProbeSystem(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LightProbeSystem::LightProbeSystem() {}
constexpr ::UnityEngine::Rendering::Universal::LightProbeSystem UnityEngine::Rendering::Universal::LightProbeSystem::LegacyLightProbes{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::LightProbeSystem UnityEngine::Rendering::Universal::LightProbeSystem::ProbeVolumes{ static_cast<int32_t>(0x1) };
