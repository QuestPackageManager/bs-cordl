#pragma once
// IWYU pragma private; include "Newtonsoft/Json/StringEscapeHandling.hpp"
#include "Newtonsoft/Json/zzzz__StringEscapeHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::StringEscapeHandling::StringEscapeHandling(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::StringEscapeHandling::StringEscapeHandling()   {
}
constexpr ::Newtonsoft::Json::StringEscapeHandling  Newtonsoft::Json::StringEscapeHandling::Default{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::StringEscapeHandling  Newtonsoft::Json::StringEscapeHandling::EscapeNonAscii{static_cast<int32_t>(0x1)};
constexpr ::Newtonsoft::Json::StringEscapeHandling  Newtonsoft::Json::StringEscapeHandling::EscapeHtml{static_cast<int32_t>(0x2)};
