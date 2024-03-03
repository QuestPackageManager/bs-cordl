#pragma once
#include "UnityEngine/ProBuilder/zzzz__PivotLocation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::PivotLocation::PivotLocation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::PivotLocation::PivotLocation() {}
constexpr ::UnityEngine::ProBuilder::PivotLocation UnityEngine::ProBuilder::PivotLocation::Center{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ProBuilder::PivotLocation UnityEngine::ProBuilder::PivotLocation::FirstCorner{ static_cast<int32_t>(0x1) };
