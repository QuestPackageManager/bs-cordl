#pragma once
#include "UnityEngine/ProBuilder/zzzz__BezierTangentDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::BezierTangentDirection::BezierTangentDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::BezierTangentDirection::BezierTangentDirection() {}
constexpr ::UnityEngine::ProBuilder::BezierTangentDirection UnityEngine::ProBuilder::BezierTangentDirection::In{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ProBuilder::BezierTangentDirection UnityEngine::ProBuilder::BezierTangentDirection::Out{ static_cast<int32_t>(0x1) };
