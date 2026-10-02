#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/RayTracingBackend.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__RayTracingBackend_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend::RayTracingBackend(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend::RayTracingBackend() {}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend::Hardware{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend::Compute{ static_cast<int32_t>(0x1) };
