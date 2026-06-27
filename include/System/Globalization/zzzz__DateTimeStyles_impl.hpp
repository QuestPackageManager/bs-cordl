#pragma once
// IWYU pragma private; include "System/Globalization/DateTimeStyles.hpp"
#include "System/Globalization/zzzz__DateTimeStyles_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::DateTimeStyles::DateTimeStyles(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Globalization::DateTimeStyles::DateTimeStyles()   {
}
constexpr ::System::Globalization::DateTimeStyles  System::Globalization::DateTimeStyles::None{static_cast<int32_t>(0x0)};
constexpr ::System::Globalization::DateTimeStyles  System::Globalization::DateTimeStyles::AllowLeadingWhite{static_cast<int32_t>(0x1)};
constexpr ::System::Globalization::DateTimeStyles  System::Globalization::DateTimeStyles::AllowTrailingWhite{static_cast<int32_t>(0x2)};
constexpr ::System::Globalization::DateTimeStyles  System::Globalization::DateTimeStyles::AllowInnerWhite{static_cast<int32_t>(0x4)};
constexpr ::System::Globalization::DateTimeStyles  System::Globalization::DateTimeStyles::AllowWhiteSpaces{static_cast<int32_t>(0x7)};
constexpr ::System::Globalization::DateTimeStyles  System::Globalization::DateTimeStyles::NoCurrentDateDefault{static_cast<int32_t>(0x8)};
constexpr ::System::Globalization::DateTimeStyles  System::Globalization::DateTimeStyles::AdjustToUniversal{static_cast<int32_t>(0x10)};
constexpr ::System::Globalization::DateTimeStyles  System::Globalization::DateTimeStyles::AssumeLocal{static_cast<int32_t>(0x20)};
constexpr ::System::Globalization::DateTimeStyles  System::Globalization::DateTimeStyles::AssumeUniversal{static_cast<int32_t>(0x40)};
constexpr ::System::Globalization::DateTimeStyles  System::Globalization::DateTimeStyles::RoundtripKind{static_cast<int32_t>(0x80)};
