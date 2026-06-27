#pragma once
// IWYU pragma private; include "Newtonsoft/Json/MissingMemberHandling.hpp"
#include "Newtonsoft/Json/zzzz__MissingMemberHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::MissingMemberHandling::MissingMemberHandling(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::MissingMemberHandling::MissingMemberHandling()   {
}
constexpr ::Newtonsoft::Json::MissingMemberHandling  Newtonsoft::Json::MissingMemberHandling::Ignore{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::MissingMemberHandling  Newtonsoft::Json::MissingMemberHandling::Error{static_cast<int32_t>(0x1)};
