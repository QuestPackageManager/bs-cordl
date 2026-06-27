#pragma once
// IWYU pragma private; include "Newtonsoft/Json/NullValueHandling.hpp"
#include "Newtonsoft/Json/zzzz__NullValueHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::NullValueHandling::NullValueHandling(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::NullValueHandling::NullValueHandling()   {
}
constexpr ::Newtonsoft::Json::NullValueHandling  Newtonsoft::Json::NullValueHandling::Include{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::NullValueHandling  Newtonsoft::Json::NullValueHandling::Ignore{static_cast<int32_t>(0x1)};
