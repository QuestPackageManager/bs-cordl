#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Bson/BsonBinaryType.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonBinaryType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Bson::BsonBinaryType::BsonBinaryType(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Bson::BsonBinaryType::BsonBinaryType() {}
constexpr ::Newtonsoft::Json::Bson::BsonBinaryType Newtonsoft::Json::Bson::BsonBinaryType::Binary{ static_cast<uint8_t>(0x0u) };
constexpr ::Newtonsoft::Json::Bson::BsonBinaryType Newtonsoft::Json::Bson::BsonBinaryType::Function{ static_cast<uint8_t>(0x1u) };
constexpr ::Newtonsoft::Json::Bson::BsonBinaryType Newtonsoft::Json::Bson::BsonBinaryType::BinaryOld{ static_cast<uint8_t>(0x2u) };
constexpr ::Newtonsoft::Json::Bson::BsonBinaryType Newtonsoft::Json::Bson::BsonBinaryType::UuidOld{ static_cast<uint8_t>(0x3u) };
constexpr ::Newtonsoft::Json::Bson::BsonBinaryType Newtonsoft::Json::Bson::BsonBinaryType::Uuid{ static_cast<uint8_t>(0x4u) };
constexpr ::Newtonsoft::Json::Bson::BsonBinaryType Newtonsoft::Json::Bson::BsonBinaryType::Md5{ static_cast<uint8_t>(0x5u) };
constexpr ::Newtonsoft::Json::Bson::BsonBinaryType Newtonsoft::Json::Bson::BsonBinaryType::UserDefined{ static_cast<uint8_t>(0x80u) };
