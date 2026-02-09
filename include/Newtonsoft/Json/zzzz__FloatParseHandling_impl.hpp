#pragma once
// IWYU pragma private; include "Newtonsoft/Json/FloatParseHandling.hpp"
#include "Newtonsoft/Json/zzzz__FloatParseHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::FloatParseHandling::FloatParseHandling(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::FloatParseHandling::FloatParseHandling()   {
}
constexpr ::Newtonsoft::Json::FloatParseHandling  Newtonsoft::Json::FloatParseHandling::Double{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::FloatParseHandling  Newtonsoft::Json::FloatParseHandling::Decimal{static_cast<int32_t>(0x1)};
