#pragma once
// IWYU pragma private; include "TMPro/TagUnitType.hpp"
#include "TMPro/zzzz__TagUnitType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TagUnitType::TagUnitType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TMPro::TagUnitType::TagUnitType()   {
}
constexpr ::TMPro::TagUnitType  TMPro::TagUnitType::Pixels{static_cast<int32_t>(0x0)};
constexpr ::TMPro::TagUnitType  TMPro::TagUnitType::FontUnits{static_cast<int32_t>(0x1)};
constexpr ::TMPro::TagUnitType  TMPro::TagUnitType::Percentage{static_cast<int32_t>(0x2)};
