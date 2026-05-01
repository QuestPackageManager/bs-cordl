#pragma once
// IWYU pragma private; include "GlobalNamespace/LerpMask.hpp"
#include "GlobalNamespace/zzzz__LerpMask_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LerpMask::LerpMask(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LerpMask::LerpMask() {}
constexpr ::GlobalNamespace::LerpMask GlobalNamespace::LerpMask::Color{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::LerpMask GlobalNamespace::LerpMask::Color0{ static_cast<int32_t>(0x10) };
constexpr ::GlobalNamespace::LerpMask GlobalNamespace::LerpMask::Color1{ static_cast<int32_t>(0x100) };
constexpr ::GlobalNamespace::LerpMask GlobalNamespace::LerpMask::GlobalLightTintIntensity{ static_cast<int32_t>(0x1000) };
