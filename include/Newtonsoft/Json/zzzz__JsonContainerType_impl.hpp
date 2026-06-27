#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonContainerType.hpp"
#include "Newtonsoft/Json/zzzz__JsonContainerType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonContainerType::JsonContainerType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonContainerType::JsonContainerType()   {
}
constexpr ::Newtonsoft::Json::JsonContainerType  Newtonsoft::Json::JsonContainerType::None{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::JsonContainerType  Newtonsoft::Json::JsonContainerType::Object{static_cast<int32_t>(0x1)};
constexpr ::Newtonsoft::Json::JsonContainerType  Newtonsoft::Json::JsonContainerType::Array{static_cast<int32_t>(0x2)};
constexpr ::Newtonsoft::Json::JsonContainerType  Newtonsoft::Json::JsonContainerType::Constructor{static_cast<int32_t>(0x3)};
