#pragma once
#include "UnityEngine/ProBuilder/zzzz__BezierTangentMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::BezierTangentMode::BezierTangentMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::BezierTangentMode::BezierTangentMode() {}
constexpr ::UnityEngine::ProBuilder::BezierTangentMode UnityEngine::ProBuilder::BezierTangentMode::Free{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ProBuilder::BezierTangentMode UnityEngine::ProBuilder::BezierTangentMode::Aligned{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ProBuilder::BezierTangentMode UnityEngine::ProBuilder::BezierTangentMode::Mirrored{ static_cast<int32_t>(0x2) };
