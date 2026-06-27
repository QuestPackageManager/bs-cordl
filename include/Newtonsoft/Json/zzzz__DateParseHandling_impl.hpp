#pragma once
// IWYU pragma private; include "Newtonsoft/Json/DateParseHandling.hpp"
#include "Newtonsoft/Json/zzzz__DateParseHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::DateParseHandling::DateParseHandling(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::DateParseHandling::DateParseHandling()   {
}
constexpr ::Newtonsoft::Json::DateParseHandling  Newtonsoft::Json::DateParseHandling::None{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::DateParseHandling  Newtonsoft::Json::DateParseHandling::DateTime{static_cast<int32_t>(0x1)};
constexpr ::Newtonsoft::Json::DateParseHandling  Newtonsoft::Json::DateParseHandling::DateTimeOffset{static_cast<int32_t>(0x2)};
