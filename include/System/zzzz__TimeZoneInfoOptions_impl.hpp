#pragma once
// IWYU pragma private; include "System/TimeZoneInfoOptions.hpp"
#include "System/zzzz__TimeZoneInfoOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::TimeZoneInfoOptions::TimeZoneInfoOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::TimeZoneInfoOptions::TimeZoneInfoOptions()   {
}
constexpr ::System::TimeZoneInfoOptions  System::TimeZoneInfoOptions::None{static_cast<int32_t>(0x1)};
constexpr ::System::TimeZoneInfoOptions  System::TimeZoneInfoOptions::NoThrowOnInvalidTime{static_cast<int32_t>(0x2)};
