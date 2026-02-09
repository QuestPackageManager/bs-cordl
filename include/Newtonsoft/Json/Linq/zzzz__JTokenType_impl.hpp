#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JTokenType.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JTokenType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Linq::JTokenType::JTokenType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JTokenType::JTokenType()   {
}
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::None{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Object{static_cast<int32_t>(0x1)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Array{static_cast<int32_t>(0x2)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Constructor{static_cast<int32_t>(0x3)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Property{static_cast<int32_t>(0x4)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Comment{static_cast<int32_t>(0x5)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Integer{static_cast<int32_t>(0x6)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Float{static_cast<int32_t>(0x7)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::String{static_cast<int32_t>(0x8)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Boolean{static_cast<int32_t>(0x9)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Null{static_cast<int32_t>(0xa)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Undefined{static_cast<int32_t>(0xb)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Date{static_cast<int32_t>(0xc)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Raw{static_cast<int32_t>(0xd)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Bytes{static_cast<int32_t>(0xe)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Guid{static_cast<int32_t>(0xf)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Uri{static_cast<int32_t>(0x10)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::TimeSpan{static_cast<int32_t>(0x11)};
