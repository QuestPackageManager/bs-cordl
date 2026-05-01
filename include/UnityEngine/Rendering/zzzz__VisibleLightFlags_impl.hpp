#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VisibleLightFlags.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLightFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::VisibleLightFlags::VisibleLightFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::VisibleLightFlags::VisibleLightFlags() {}
constexpr ::UnityEngine::Rendering::VisibleLightFlags UnityEngine::Rendering::VisibleLightFlags::IntersectsNearPlane{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::VisibleLightFlags UnityEngine::Rendering::VisibleLightFlags::IntersectsFarPlane{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::VisibleLightFlags UnityEngine::Rendering::VisibleLightFlags::ForcedVisible{ static_cast<int32_t>(0x4) };
