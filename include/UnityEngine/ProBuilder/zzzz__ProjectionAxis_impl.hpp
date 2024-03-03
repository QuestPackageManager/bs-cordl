#pragma once
#include "UnityEngine/ProBuilder/zzzz__ProjectionAxis_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::ProjectionAxis::ProjectionAxis(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::ProjectionAxis::ProjectionAxis() {}
constexpr ::UnityEngine::ProBuilder::ProjectionAxis UnityEngine::ProBuilder::ProjectionAxis::X{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ProBuilder::ProjectionAxis UnityEngine::ProBuilder::ProjectionAxis::Y{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ProBuilder::ProjectionAxis UnityEngine::ProBuilder::ProjectionAxis::Z{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ProBuilder::ProjectionAxis UnityEngine::ProBuilder::ProjectionAxis::XNegative{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::ProBuilder::ProjectionAxis UnityEngine::ProBuilder::ProjectionAxis::YNegative{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::ProBuilder::ProjectionAxis UnityEngine::ProBuilder::ProjectionAxis::ZNegative{ static_cast<int32_t>(0x5) };
