#pragma once
// IWYU pragma private; include "Newtonsoft/Json/MetadataPropertyHandling.hpp"
#include "Newtonsoft/Json/zzzz__MetadataPropertyHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::MetadataPropertyHandling::MetadataPropertyHandling(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::MetadataPropertyHandling::MetadataPropertyHandling()   {
}
constexpr ::Newtonsoft::Json::MetadataPropertyHandling  Newtonsoft::Json::MetadataPropertyHandling::Default{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::MetadataPropertyHandling  Newtonsoft::Json::MetadataPropertyHandling::ReadAhead{static_cast<int32_t>(0x1)};
constexpr ::Newtonsoft::Json::MetadataPropertyHandling  Newtonsoft::Json::MetadataPropertyHandling::Ignore{static_cast<int32_t>(0x2)};
