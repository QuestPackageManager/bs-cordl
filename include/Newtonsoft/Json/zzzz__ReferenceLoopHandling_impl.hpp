#pragma once
// IWYU pragma private; include "Newtonsoft/Json/ReferenceLoopHandling.hpp"
#include "Newtonsoft/Json/zzzz__ReferenceLoopHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::ReferenceLoopHandling::ReferenceLoopHandling(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::ReferenceLoopHandling::ReferenceLoopHandling()   {
}
constexpr ::Newtonsoft::Json::ReferenceLoopHandling  Newtonsoft::Json::ReferenceLoopHandling::Error{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::ReferenceLoopHandling  Newtonsoft::Json::ReferenceLoopHandling::Ignore{static_cast<int32_t>(0x1)};
constexpr ::Newtonsoft::Json::ReferenceLoopHandling  Newtonsoft::Json::ReferenceLoopHandling::Serialize{static_cast<int32_t>(0x2)};
