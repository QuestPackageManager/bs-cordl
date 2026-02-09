#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Bson/BsonType.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Bson::BsonType::BsonType(int8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Bson::BsonType::BsonType()   {
}
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Number{static_cast<int8_t>(0x1)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::String{static_cast<int8_t>(0x2)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Object{static_cast<int8_t>(0x3)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Array{static_cast<int8_t>(0x4)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Binary{static_cast<int8_t>(0x5)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Undefined{static_cast<int8_t>(0x6)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Oid{static_cast<int8_t>(0x7)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Boolean{static_cast<int8_t>(0x8)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Date{static_cast<int8_t>(0x9)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Null{static_cast<int8_t>(0xa)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Regex{static_cast<int8_t>(0xb)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Reference{static_cast<int8_t>(0xc)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Code{static_cast<int8_t>(0xd)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Symbol{static_cast<int8_t>(0xe)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::CodeWScope{static_cast<int8_t>(0xf)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Integer{static_cast<int8_t>(0x10)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::TimeStamp{static_cast<int8_t>(0x11)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Long{static_cast<int8_t>(0x12)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::MinKey{static_cast<int8_t>(0xff)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::MaxKey{static_cast<int8_t>(0x7f)};
