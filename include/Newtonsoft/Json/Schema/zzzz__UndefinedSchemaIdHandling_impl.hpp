#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Schema/UndefinedSchemaIdHandling.hpp"
#include "Newtonsoft/Json/Schema/zzzz__UndefinedSchemaIdHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling::UndefinedSchemaIdHandling(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling::UndefinedSchemaIdHandling() {}
constexpr ::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling Newtonsoft::Json::Schema::UndefinedSchemaIdHandling::None{ static_cast<int32_t>(0x0) };
constexpr ::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling Newtonsoft::Json::Schema::UndefinedSchemaIdHandling::UseTypeName{ static_cast<int32_t>(0x1) };
constexpr ::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling Newtonsoft::Json::Schema::UndefinedSchemaIdHandling::UseAssemblyQualifiedName{ static_cast<int32_t>(0x2) };
