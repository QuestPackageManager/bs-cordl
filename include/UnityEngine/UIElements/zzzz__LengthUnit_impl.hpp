#pragma once
#include "UnityEngine/UIElements/zzzz__LengthUnit_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::LengthUnit::LengthUnit(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::LengthUnit::LengthUnit() {}
constexpr ::UnityEngine::UIElements::LengthUnit UnityEngine::UIElements::LengthUnit::Pixel{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::LengthUnit UnityEngine::UIElements::LengthUnit::Percent{ static_cast<int32_t>(0x1) };
