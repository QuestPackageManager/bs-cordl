#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalSurfaceData.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalSurfaceData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::DecalSurfaceData::DecalSurfaceData(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalSurfaceData::DecalSurfaceData() {}
constexpr ::UnityEngine::Rendering::Universal::DecalSurfaceData UnityEngine::Rendering::Universal::DecalSurfaceData::Albedo{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::DecalSurfaceData UnityEngine::Rendering::Universal::DecalSurfaceData::AlbedoNormal{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::DecalSurfaceData UnityEngine::Rendering::Universal::DecalSurfaceData::AlbedoNormalMAOS{ static_cast<int32_t>(0x2) };
