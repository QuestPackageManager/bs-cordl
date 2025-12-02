#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalScaleMode.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalScaleMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::DecalScaleMode::DecalScaleMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalScaleMode::DecalScaleMode() {}
constexpr ::UnityEngine::Rendering::Universal::DecalScaleMode UnityEngine::Rendering::Universal::DecalScaleMode::ScaleInvariant{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::DecalScaleMode UnityEngine::Rendering::Universal::DecalScaleMode::InheritFromHierarchy{ static_cast<int32_t>(0x1) };
