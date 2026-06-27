#pragma once
// IWYU pragma private; include "Newtonsoft/Json/ObjectCreationHandling.hpp"
#include "Newtonsoft/Json/zzzz__ObjectCreationHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::ObjectCreationHandling::ObjectCreationHandling(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::ObjectCreationHandling::ObjectCreationHandling()   {
}
constexpr ::Newtonsoft::Json::ObjectCreationHandling  Newtonsoft::Json::ObjectCreationHandling::Auto{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::ObjectCreationHandling  Newtonsoft::Json::ObjectCreationHandling::Reuse{static_cast<int32_t>(0x1)};
constexpr ::Newtonsoft::Json::ObjectCreationHandling  Newtonsoft::Json::ObjectCreationHandling::Replace{static_cast<int32_t>(0x2)};
