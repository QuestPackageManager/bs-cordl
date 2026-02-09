#pragma once
// IWYU pragma private; include "Newtonsoft/Json/ConstructorHandling.hpp"
#include "Newtonsoft/Json/zzzz__ConstructorHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::ConstructorHandling::ConstructorHandling(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::ConstructorHandling::ConstructorHandling()   {
}
constexpr ::Newtonsoft::Json::ConstructorHandling  Newtonsoft::Json::ConstructorHandling::Default{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::ConstructorHandling  Newtonsoft::Json::ConstructorHandling::AllowNonPublicDefaultConstructor{static_cast<int32_t>(0x1)};
