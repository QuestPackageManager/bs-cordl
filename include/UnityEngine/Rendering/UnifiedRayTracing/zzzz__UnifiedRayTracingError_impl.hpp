#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/UnifiedRayTracingError.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__UnifiedRayTracingError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingError::UnifiedRayTracingError(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingError::UnifiedRayTracingError() {}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingError UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingError::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingError UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingError::GraphicsBufferAllocationFailed{ static_cast<int32_t>(
    0x1) };
