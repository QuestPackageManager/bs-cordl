#pragma once
// IWYU pragma private; include "Newtonsoft/Json/PreserveReferencesHandling.hpp"
#include "Newtonsoft/Json/zzzz__PreserveReferencesHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::PreserveReferencesHandling::PreserveReferencesHandling(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::PreserveReferencesHandling::PreserveReferencesHandling()   {
}
constexpr ::Newtonsoft::Json::PreserveReferencesHandling  Newtonsoft::Json::PreserveReferencesHandling::None{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::PreserveReferencesHandling  Newtonsoft::Json::PreserveReferencesHandling::Objects{static_cast<int32_t>(0x1)};
constexpr ::Newtonsoft::Json::PreserveReferencesHandling  Newtonsoft::Json::PreserveReferencesHandling::Arrays{static_cast<int32_t>(0x2)};
constexpr ::Newtonsoft::Json::PreserveReferencesHandling  Newtonsoft::Json::PreserveReferencesHandling::All{static_cast<int32_t>(0x3)};
