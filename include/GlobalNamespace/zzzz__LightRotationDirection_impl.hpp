#pragma once
#include "GlobalNamespace/zzzz__LightRotationDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LightRotationDirection::LightRotationDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightRotationDirection::LightRotationDirection() {}
constexpr ::GlobalNamespace::LightRotationDirection GlobalNamespace::LightRotationDirection::Automatic{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::LightRotationDirection GlobalNamespace::LightRotationDirection::Clockwise{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::LightRotationDirection GlobalNamespace::LightRotationDirection::Counterclockwise{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
