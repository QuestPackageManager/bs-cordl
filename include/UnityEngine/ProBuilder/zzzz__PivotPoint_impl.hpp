#pragma once
#include "UnityEngine/ProBuilder/zzzz__PivotPoint_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::PivotPoint::PivotPoint(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::PivotPoint::PivotPoint() {}
constexpr ::UnityEngine::ProBuilder::PivotPoint UnityEngine::ProBuilder::PivotPoint::Center{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ProBuilder::PivotPoint UnityEngine::ProBuilder::PivotPoint::IndividualOrigins{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ProBuilder::PivotPoint UnityEngine::ProBuilder::PivotPoint::ActiveElement{ static_cast<int32_t>(0x2) };
