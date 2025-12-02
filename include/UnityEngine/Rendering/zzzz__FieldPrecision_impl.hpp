#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FieldPrecision.hpp"
#include "UnityEngine/Rendering/zzzz__FieldPrecision_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::FieldPrecision::FieldPrecision(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::FieldPrecision::FieldPrecision() {}
constexpr ::UnityEngine::Rendering::FieldPrecision UnityEngine::Rendering::FieldPrecision::Half{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::FieldPrecision UnityEngine::Rendering::FieldPrecision::Real{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::FieldPrecision UnityEngine::Rendering::FieldPrecision::Default{ static_cast<int32_t>(0x2) };
