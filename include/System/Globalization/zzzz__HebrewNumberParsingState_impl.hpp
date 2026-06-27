#pragma once
// IWYU pragma private; include "System/Globalization/HebrewNumberParsingState.hpp"
#include "System/Globalization/zzzz__HebrewNumberParsingState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::HebrewNumberParsingState::HebrewNumberParsingState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Globalization::HebrewNumberParsingState::HebrewNumberParsingState()   {
}
constexpr ::System::Globalization::HebrewNumberParsingState  System::Globalization::HebrewNumberParsingState::InvalidHebrewNumber{static_cast<int32_t>(0x0)};
constexpr ::System::Globalization::HebrewNumberParsingState  System::Globalization::HebrewNumberParsingState::NotHebrewDigit{static_cast<int32_t>(0x1)};
constexpr ::System::Globalization::HebrewNumberParsingState  System::Globalization::HebrewNumberParsingState::FoundEndOfHebrewNumber{static_cast<int32_t>(0x2)};
constexpr ::System::Globalization::HebrewNumberParsingState  System::Globalization::HebrewNumberParsingState::ContinueParsing{static_cast<int32_t>(0x3)};
