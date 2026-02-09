#pragma once
// IWYU pragma private; include "TMPro/MaskingTypes.hpp"
#include "TMPro/zzzz__MaskingTypes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::MaskingTypes::MaskingTypes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TMPro::MaskingTypes::MaskingTypes()   {
}
constexpr ::TMPro::MaskingTypes  TMPro::MaskingTypes::MaskOff{static_cast<int32_t>(0x0)};
constexpr ::TMPro::MaskingTypes  TMPro::MaskingTypes::MaskHard{static_cast<int32_t>(0x1)};
constexpr ::TMPro::MaskingTypes  TMPro::MaskingTypes::MaskSoft{static_cast<int32_t>(0x2)};
