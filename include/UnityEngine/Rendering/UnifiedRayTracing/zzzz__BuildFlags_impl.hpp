#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/BuildFlags.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__BuildFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags::BuildFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags::BuildFlags() {}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags UnityEngine::Rendering::UnifiedRayTracing::BuildFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags UnityEngine::Rendering::UnifiedRayTracing::BuildFlags::PreferFastTrace{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags UnityEngine::Rendering::UnifiedRayTracing::BuildFlags::PreferFastBuild{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags UnityEngine::Rendering::UnifiedRayTracing::BuildFlags::MinimizeMemory{ static_cast<int32_t>(0x4) };
