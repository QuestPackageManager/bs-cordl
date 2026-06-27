#pragma once
// IWYU pragma private; include "Newtonsoft/Json/DateTimeZoneHandling.hpp"
#include "Newtonsoft/Json/zzzz__DateTimeZoneHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::DateTimeZoneHandling::DateTimeZoneHandling(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::DateTimeZoneHandling::DateTimeZoneHandling()   {
}
constexpr ::Newtonsoft::Json::DateTimeZoneHandling  Newtonsoft::Json::DateTimeZoneHandling::Local{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::DateTimeZoneHandling  Newtonsoft::Json::DateTimeZoneHandling::Utc{static_cast<int32_t>(0x1)};
constexpr ::Newtonsoft::Json::DateTimeZoneHandling  Newtonsoft::Json::DateTimeZoneHandling::Unspecified{static_cast<int32_t>(0x2)};
constexpr ::Newtonsoft::Json::DateTimeZoneHandling  Newtonsoft::Json::DateTimeZoneHandling::RoundtripKind{static_cast<int32_t>(0x3)};
