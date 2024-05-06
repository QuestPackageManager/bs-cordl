#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Schema/JsonSchemaType.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Schema::JsonSchemaType::JsonSchemaType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Schema::JsonSchemaType::JsonSchemaType() {}
constexpr ::Newtonsoft::Json::Schema::JsonSchemaType Newtonsoft::Json::Schema::JsonSchemaType::None{ static_cast<int32_t>(0x0) };
constexpr ::Newtonsoft::Json::Schema::JsonSchemaType Newtonsoft::Json::Schema::JsonSchemaType::String{ static_cast<int32_t>(0x1) };
constexpr ::Newtonsoft::Json::Schema::JsonSchemaType Newtonsoft::Json::Schema::JsonSchemaType::Float{ static_cast<int32_t>(0x2) };
constexpr ::Newtonsoft::Json::Schema::JsonSchemaType Newtonsoft::Json::Schema::JsonSchemaType::Integer{ static_cast<int32_t>(0x4) };
constexpr ::Newtonsoft::Json::Schema::JsonSchemaType Newtonsoft::Json::Schema::JsonSchemaType::Boolean{ static_cast<int32_t>(0x8) };
constexpr ::Newtonsoft::Json::Schema::JsonSchemaType Newtonsoft::Json::Schema::JsonSchemaType::Object{ static_cast<int32_t>(0x10) };
constexpr ::Newtonsoft::Json::Schema::JsonSchemaType Newtonsoft::Json::Schema::JsonSchemaType::Array{ static_cast<int32_t>(0x20) };
constexpr ::Newtonsoft::Json::Schema::JsonSchemaType Newtonsoft::Json::Schema::JsonSchemaType::Null{ static_cast<int32_t>(0x40) };
constexpr ::Newtonsoft::Json::Schema::JsonSchemaType Newtonsoft::Json::Schema::JsonSchemaType::Any{ static_cast<int32_t>(0x7f) };
