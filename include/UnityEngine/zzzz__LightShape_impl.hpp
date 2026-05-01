#pragma once
// IWYU pragma private; include "UnityEngine/LightShape.hpp"
#include "UnityEngine/zzzz__LightShape_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LightShape::LightShape(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::LightShape::LightShape() {}
constexpr ::UnityEngine::LightShape UnityEngine::LightShape::Cone{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::LightShape UnityEngine::LightShape::Pyramid{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::LightShape UnityEngine::LightShape::Box{ static_cast<int32_t>(0x2) };
