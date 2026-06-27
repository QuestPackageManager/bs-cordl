#pragma once
// IWYU pragma private; include "Newtonsoft/Json/TypeNameHandling.hpp"
#include "Newtonsoft/Json/zzzz__TypeNameHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::TypeNameHandling::TypeNameHandling(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::TypeNameHandling::TypeNameHandling()   {
}
constexpr ::Newtonsoft::Json::TypeNameHandling  Newtonsoft::Json::TypeNameHandling::None{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::TypeNameHandling  Newtonsoft::Json::TypeNameHandling::Objects{static_cast<int32_t>(0x1)};
constexpr ::Newtonsoft::Json::TypeNameHandling  Newtonsoft::Json::TypeNameHandling::Arrays{static_cast<int32_t>(0x2)};
constexpr ::Newtonsoft::Json::TypeNameHandling  Newtonsoft::Json::TypeNameHandling::All{static_cast<int32_t>(0x3)};
constexpr ::Newtonsoft::Json::TypeNameHandling  Newtonsoft::Json::TypeNameHandling::Auto{static_cast<int32_t>(0x4)};
