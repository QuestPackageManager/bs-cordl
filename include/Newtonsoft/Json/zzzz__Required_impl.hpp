#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Required.hpp"
#include "Newtonsoft/Json/zzzz__Required_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Required::Required(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Required::Required()   {
}
constexpr ::Newtonsoft::Json::Required  Newtonsoft::Json::Required::Default{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::Required  Newtonsoft::Json::Required::AllowNull{static_cast<int32_t>(0x1)};
constexpr ::Newtonsoft::Json::Required  Newtonsoft::Json::Required::Always{static_cast<int32_t>(0x2)};
constexpr ::Newtonsoft::Json::Required  Newtonsoft::Json::Required::DisallowNull{static_cast<int32_t>(0x3)};
