#pragma once
#include "UnityEngine/zzzz__RotationOrder_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::RotationOrder::RotationOrder(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::RotationOrder::RotationOrder() {}
constexpr ::UnityEngine::RotationOrder UnityEngine::RotationOrder::OrderXYZ{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::RotationOrder UnityEngine::RotationOrder::OrderXZY{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::RotationOrder UnityEngine::RotationOrder::OrderYZX{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::RotationOrder UnityEngine::RotationOrder::OrderYXZ{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::RotationOrder UnityEngine::RotationOrder::OrderZXY{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::RotationOrder UnityEngine::RotationOrder::OrderZYX{ static_cast<int32_t>(0x5) };
