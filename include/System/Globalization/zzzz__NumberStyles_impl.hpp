#pragma once
// IWYU pragma private; include "System/Globalization/NumberStyles.hpp"
#include "System/Globalization/zzzz__NumberStyles_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::NumberStyles::NumberStyles(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Globalization::NumberStyles::NumberStyles()   {
}
constexpr ::System::Globalization::NumberStyles  System::Globalization::NumberStyles::None{static_cast<int32_t>(0x0)};
constexpr ::System::Globalization::NumberStyles  System::Globalization::NumberStyles::AllowLeadingWhite{static_cast<int32_t>(0x1)};
constexpr ::System::Globalization::NumberStyles  System::Globalization::NumberStyles::AllowTrailingWhite{static_cast<int32_t>(0x2)};
constexpr ::System::Globalization::NumberStyles  System::Globalization::NumberStyles::AllowLeadingSign{static_cast<int32_t>(0x4)};
constexpr ::System::Globalization::NumberStyles  System::Globalization::NumberStyles::AllowTrailingSign{static_cast<int32_t>(0x8)};
constexpr ::System::Globalization::NumberStyles  System::Globalization::NumberStyles::AllowParentheses{static_cast<int32_t>(0x10)};
constexpr ::System::Globalization::NumberStyles  System::Globalization::NumberStyles::AllowDecimalPoint{static_cast<int32_t>(0x20)};
constexpr ::System::Globalization::NumberStyles  System::Globalization::NumberStyles::AllowThousands{static_cast<int32_t>(0x40)};
constexpr ::System::Globalization::NumberStyles  System::Globalization::NumberStyles::AllowExponent{static_cast<int32_t>(0x80)};
constexpr ::System::Globalization::NumberStyles  System::Globalization::NumberStyles::AllowCurrencySymbol{static_cast<int32_t>(0x100)};
constexpr ::System::Globalization::NumberStyles  System::Globalization::NumberStyles::AllowHexSpecifier{static_cast<int32_t>(0x200)};
constexpr ::System::Globalization::NumberStyles  System::Globalization::NumberStyles::Integer{static_cast<int32_t>(0x7)};
constexpr ::System::Globalization::NumberStyles  System::Globalization::NumberStyles::HexNumber{static_cast<int32_t>(0x203)};
constexpr ::System::Globalization::NumberStyles  System::Globalization::NumberStyles::Number{static_cast<int32_t>(0x6f)};
constexpr ::System::Globalization::NumberStyles  System::Globalization::NumberStyles::Float{static_cast<int32_t>(0xa7)};
constexpr ::System::Globalization::NumberStyles  System::Globalization::NumberStyles::Currency{static_cast<int32_t>(0x17f)};
constexpr ::System::Globalization::NumberStyles  System::Globalization::NumberStyles::Any{static_cast<int32_t>(0x1ff)};
