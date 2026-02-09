#pragma once
// IWYU pragma private; include "Newtonsoft/Json/DateFormatHandling.hpp"
#include "Newtonsoft/Json/zzzz__DateFormatHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::DateFormatHandling::DateFormatHandling(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::DateFormatHandling::DateFormatHandling()   {
}
constexpr ::Newtonsoft::Json::DateFormatHandling  Newtonsoft::Json::DateFormatHandling::IsoDateFormat{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::DateFormatHandling  Newtonsoft::Json::DateFormatHandling::MicrosoftDateFormat{static_cast<int32_t>(0x1)};
