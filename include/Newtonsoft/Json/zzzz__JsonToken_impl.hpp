#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonToken.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonToken::JsonToken(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonToken::JsonToken()   {
}
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::None{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::StartObject{static_cast<int32_t>(0x1)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::StartArray{static_cast<int32_t>(0x2)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::StartConstructor{static_cast<int32_t>(0x3)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::PropertyName{static_cast<int32_t>(0x4)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::Comment{static_cast<int32_t>(0x5)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::Raw{static_cast<int32_t>(0x6)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::Integer{static_cast<int32_t>(0x7)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::Float{static_cast<int32_t>(0x8)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::String{static_cast<int32_t>(0x9)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::Boolean{static_cast<int32_t>(0xa)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::Null{static_cast<int32_t>(0xb)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::Undefined{static_cast<int32_t>(0xc)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::EndObject{static_cast<int32_t>(0xd)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::EndArray{static_cast<int32_t>(0xe)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::EndConstructor{static_cast<int32_t>(0xf)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::Date{static_cast<int32_t>(0x10)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::Bytes{static_cast<int32_t>(0x11)};
