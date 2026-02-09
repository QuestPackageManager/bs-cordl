#pragma once
// IWYU pragma private; include "System/TokenType.hpp"
#include "System/zzzz__TokenType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::TokenType::TokenType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::TokenType::TokenType()   {
}
constexpr ::System::TokenType  System::TokenType::NumberToken{static_cast<int32_t>(0x1)};
constexpr ::System::TokenType  System::TokenType::YearNumberToken{static_cast<int32_t>(0x2)};
constexpr ::System::TokenType  System::TokenType::Am{static_cast<int32_t>(0x3)};
constexpr ::System::TokenType  System::TokenType::Pm{static_cast<int32_t>(0x4)};
constexpr ::System::TokenType  System::TokenType::MonthToken{static_cast<int32_t>(0x5)};
constexpr ::System::TokenType  System::TokenType::EndOfString{static_cast<int32_t>(0x6)};
constexpr ::System::TokenType  System::TokenType::DayOfWeekToken{static_cast<int32_t>(0x7)};
constexpr ::System::TokenType  System::TokenType::TimeZoneToken{static_cast<int32_t>(0x8)};
constexpr ::System::TokenType  System::TokenType::EraToken{static_cast<int32_t>(0x9)};
constexpr ::System::TokenType  System::TokenType::DateWordToken{static_cast<int32_t>(0xa)};
constexpr ::System::TokenType  System::TokenType::UnknownToken{static_cast<int32_t>(0xb)};
constexpr ::System::TokenType  System::TokenType::HebrewNumber{static_cast<int32_t>(0xc)};
constexpr ::System::TokenType  System::TokenType::JapaneseEraToken{static_cast<int32_t>(0xd)};
constexpr ::System::TokenType  System::TokenType::TEraToken{static_cast<int32_t>(0xe)};
constexpr ::System::TokenType  System::TokenType::IgnorableSymbol{static_cast<int32_t>(0xf)};
constexpr ::System::TokenType  System::TokenType::SEP_Unk{static_cast<int32_t>(0x100)};
constexpr ::System::TokenType  System::TokenType::SEP_End{static_cast<int32_t>(0x200)};
constexpr ::System::TokenType  System::TokenType::SEP_Space{static_cast<int32_t>(0x300)};
constexpr ::System::TokenType  System::TokenType::SEP_Am{static_cast<int32_t>(0x400)};
constexpr ::System::TokenType  System::TokenType::SEP_Pm{static_cast<int32_t>(0x500)};
constexpr ::System::TokenType  System::TokenType::SEP_Date{static_cast<int32_t>(0x600)};
constexpr ::System::TokenType  System::TokenType::SEP_Time{static_cast<int32_t>(0x700)};
constexpr ::System::TokenType  System::TokenType::SEP_YearSuff{static_cast<int32_t>(0x800)};
constexpr ::System::TokenType  System::TokenType::SEP_MonthSuff{static_cast<int32_t>(0x900)};
constexpr ::System::TokenType  System::TokenType::SEP_DaySuff{static_cast<int32_t>(0xa00)};
constexpr ::System::TokenType  System::TokenType::SEP_HourSuff{static_cast<int32_t>(0xb00)};
constexpr ::System::TokenType  System::TokenType::SEP_MinuteSuff{static_cast<int32_t>(0xc00)};
constexpr ::System::TokenType  System::TokenType::SEP_SecondSuff{static_cast<int32_t>(0xd00)};
constexpr ::System::TokenType  System::TokenType::SEP_LocalTimeMark{static_cast<int32_t>(0xe00)};
constexpr ::System::TokenType  System::TokenType::SEP_DateOrOffset{static_cast<int32_t>(0xf00)};
constexpr ::System::TokenType  System::TokenType::RegularTokenMask{static_cast<int32_t>(0xff)};
constexpr ::System::TokenType  System::TokenType::SeparatorTokenMask{static_cast<int32_t>(0xff00)};
