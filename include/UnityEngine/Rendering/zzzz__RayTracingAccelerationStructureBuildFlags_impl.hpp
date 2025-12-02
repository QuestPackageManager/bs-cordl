#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RayTracingAccelerationStructureBuildFlags.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingAccelerationStructureBuildFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags::RayTracingAccelerationStructureBuildFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags::RayTracingAccelerationStructureBuildFlags() {}
constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags::PreferFastTrace{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags::PreferFastBuild{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags::MinimizeMemory{ static_cast<int32_t>(0x4) };
