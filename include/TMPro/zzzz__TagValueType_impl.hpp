#pragma once
// IWYU pragma private; include "TMPro/TagValueType.hpp"
#include "TMPro/zzzz__TagValueType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TagValueType::TagValueType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TMPro::TagValueType::TagValueType()   {
}
constexpr ::TMPro::TagValueType  TMPro::TagValueType::None{static_cast<int32_t>(0x0)};
constexpr ::TMPro::TagValueType  TMPro::TagValueType::NumericalValue{static_cast<int32_t>(0x1)};
constexpr ::TMPro::TagValueType  TMPro::TagValueType::StringValue{static_cast<int32_t>(0x2)};
constexpr ::TMPro::TagValueType  TMPro::TagValueType::ColorValue{static_cast<int32_t>(0x4)};
