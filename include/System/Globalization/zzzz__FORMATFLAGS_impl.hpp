#pragma once
// IWYU pragma private; include "System/Globalization/FORMATFLAGS.hpp"
#include "System/Globalization/zzzz__FORMATFLAGS_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::FORMATFLAGS::FORMATFLAGS(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Globalization::FORMATFLAGS::FORMATFLAGS()   {
}
constexpr ::System::Globalization::FORMATFLAGS  System::Globalization::FORMATFLAGS::None{static_cast<int32_t>(0x0)};
constexpr ::System::Globalization::FORMATFLAGS  System::Globalization::FORMATFLAGS::UseGenitiveMonth{static_cast<int32_t>(0x1)};
constexpr ::System::Globalization::FORMATFLAGS  System::Globalization::FORMATFLAGS::UseLeapYearMonth{static_cast<int32_t>(0x2)};
constexpr ::System::Globalization::FORMATFLAGS  System::Globalization::FORMATFLAGS::UseSpacesInMonthNames{static_cast<int32_t>(0x4)};
constexpr ::System::Globalization::FORMATFLAGS  System::Globalization::FORMATFLAGS::UseHebrewParsing{static_cast<int32_t>(0x8)};
constexpr ::System::Globalization::FORMATFLAGS  System::Globalization::FORMATFLAGS::UseSpacesInDayNames{static_cast<int32_t>(0x10)};
constexpr ::System::Globalization::FORMATFLAGS  System::Globalization::FORMATFLAGS::UseDigitPrefixInTokens{static_cast<int32_t>(0x20)};
