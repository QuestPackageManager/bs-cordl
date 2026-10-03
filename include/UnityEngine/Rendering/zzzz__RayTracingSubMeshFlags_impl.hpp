#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RayTracingSubMeshFlags.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingSubMeshFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RayTracingSubMeshFlags::RayTracingSubMeshFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RayTracingSubMeshFlags::RayTracingSubMeshFlags() {}
constexpr ::UnityEngine::Rendering::RayTracingSubMeshFlags UnityEngine::Rendering::RayTracingSubMeshFlags::Disabled{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::RayTracingSubMeshFlags UnityEngine::Rendering::RayTracingSubMeshFlags::Enabled{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::RayTracingSubMeshFlags UnityEngine::Rendering::RayTracingSubMeshFlags::ClosestHitOnly{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::RayTracingSubMeshFlags UnityEngine::Rendering::RayTracingSubMeshFlags::UniqueAnyHitCalls{ static_cast<int32_t>(0x4) };
