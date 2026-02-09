#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Formatting.hpp"
#include "Newtonsoft/Json/zzzz__Formatting_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Formatting::Formatting(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Formatting::Formatting()   {
}
constexpr ::Newtonsoft::Json::Formatting  Newtonsoft::Json::Formatting::None{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::Formatting  Newtonsoft::Json::Formatting::Indented{static_cast<int32_t>(0x1)};
