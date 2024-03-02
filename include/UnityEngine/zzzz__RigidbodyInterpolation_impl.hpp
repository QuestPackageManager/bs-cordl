#pragma once
#include "UnityEngine/zzzz__RigidbodyInterpolation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::RigidbodyInterpolation::RigidbodyInterpolation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::RigidbodyInterpolation::RigidbodyInterpolation() {}
constexpr ::UnityEngine::RigidbodyInterpolation UnityEngine::RigidbodyInterpolation::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::RigidbodyInterpolation UnityEngine::RigidbodyInterpolation::Interpolate{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::RigidbodyInterpolation UnityEngine::RigidbodyInterpolation::Extrapolate{ static_cast<int32_t>(0x2) };
