#pragma once
// IWYU pragma private; include "TMPro/ColorMode.hpp"
#include "TMPro/zzzz__ColorMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::ColorMode::ColorMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TMPro::ColorMode::ColorMode()   {
}
constexpr ::TMPro::ColorMode  TMPro::ColorMode::Single{static_cast<int32_t>(0x0)};
constexpr ::TMPro::ColorMode  TMPro::ColorMode::HorizontalGradient{static_cast<int32_t>(0x1)};
constexpr ::TMPro::ColorMode  TMPro::ColorMode::VerticalGradient{static_cast<int32_t>(0x2)};
constexpr ::TMPro::ColorMode  TMPro::ColorMode::FourCornersGradient{static_cast<int32_t>(0x3)};
