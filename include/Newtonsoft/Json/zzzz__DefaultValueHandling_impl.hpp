#pragma once
// IWYU pragma private; include "Newtonsoft/Json/DefaultValueHandling.hpp"
#include "Newtonsoft/Json/zzzz__DefaultValueHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::DefaultValueHandling::DefaultValueHandling(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::DefaultValueHandling::DefaultValueHandling()   {
}
constexpr ::Newtonsoft::Json::DefaultValueHandling  Newtonsoft::Json::DefaultValueHandling::Include{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::DefaultValueHandling  Newtonsoft::Json::DefaultValueHandling::Ignore{static_cast<int32_t>(0x1)};
constexpr ::Newtonsoft::Json::DefaultValueHandling  Newtonsoft::Json::DefaultValueHandling::Populate{static_cast<int32_t>(0x2)};
constexpr ::Newtonsoft::Json::DefaultValueHandling  Newtonsoft::Json::DefaultValueHandling::IgnoreAndPopulate{static_cast<int32_t>(0x3)};
