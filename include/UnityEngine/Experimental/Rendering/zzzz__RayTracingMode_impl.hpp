#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/RayTracingMode.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__RayTracingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Experimental::Rendering::RayTracingMode::RayTracingMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::RayTracingMode::RayTracingMode() {}
constexpr ::UnityEngine::Experimental::Rendering::RayTracingMode UnityEngine::Experimental::Rendering::RayTracingMode::Off{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Experimental::Rendering::RayTracingMode UnityEngine::Experimental::Rendering::RayTracingMode::Static{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Experimental::Rendering::RayTracingMode UnityEngine::Experimental::Rendering::RayTracingMode::DynamicTransform{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Experimental::Rendering::RayTracingMode UnityEngine::Experimental::Rendering::RayTracingMode::DynamicGeometry{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Experimental::Rendering::RayTracingMode UnityEngine::Experimental::Rendering::RayTracingMode::DynamicGeometryManualUpdate{ static_cast<int32_t>(0x4) };
