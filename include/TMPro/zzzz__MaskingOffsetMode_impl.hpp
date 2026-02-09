#pragma once
// IWYU pragma private; include "TMPro/MaskingOffsetMode.hpp"
#include "TMPro/zzzz__MaskingOffsetMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::MaskingOffsetMode::MaskingOffsetMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TMPro::MaskingOffsetMode::MaskingOffsetMode()   {
}
constexpr ::TMPro::MaskingOffsetMode  TMPro::MaskingOffsetMode::Percentage{static_cast<int32_t>(0x0)};
constexpr ::TMPro::MaskingOffsetMode  TMPro::MaskingOffsetMode::Pixel{static_cast<int32_t>(0x1)};
