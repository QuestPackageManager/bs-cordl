#pragma once
// IWYU pragma private; include "System/Globalization/DateTimeFormatFlags.hpp"
#include "System/Globalization/zzzz__DateTimeFormatFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::DateTimeFormatFlags::DateTimeFormatFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Globalization::DateTimeFormatFlags::DateTimeFormatFlags()   {
}
constexpr ::System::Globalization::DateTimeFormatFlags  System::Globalization::DateTimeFormatFlags::None{static_cast<int32_t>(0x0)};
constexpr ::System::Globalization::DateTimeFormatFlags  System::Globalization::DateTimeFormatFlags::UseGenitiveMonth{static_cast<int32_t>(0x1)};
constexpr ::System::Globalization::DateTimeFormatFlags  System::Globalization::DateTimeFormatFlags::UseLeapYearMonth{static_cast<int32_t>(0x2)};
constexpr ::System::Globalization::DateTimeFormatFlags  System::Globalization::DateTimeFormatFlags::UseSpacesInMonthNames{static_cast<int32_t>(0x4)};
constexpr ::System::Globalization::DateTimeFormatFlags  System::Globalization::DateTimeFormatFlags::UseHebrewRule{static_cast<int32_t>(0x8)};
constexpr ::System::Globalization::DateTimeFormatFlags  System::Globalization::DateTimeFormatFlags::UseSpacesInDayNames{static_cast<int32_t>(0x10)};
constexpr ::System::Globalization::DateTimeFormatFlags  System::Globalization::DateTimeFormatFlags::UseDigitPrefixInTokens{static_cast<int32_t>(0x20)};
constexpr ::System::Globalization::DateTimeFormatFlags  System::Globalization::DateTimeFormatFlags::NotInitialized{static_cast<int32_t>(0xffffffff)};
