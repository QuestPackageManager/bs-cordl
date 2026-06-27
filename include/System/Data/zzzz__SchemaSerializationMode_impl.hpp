#pragma once
// IWYU pragma private; include "System/Data/SchemaSerializationMode.hpp"
#include "System/Data/zzzz__SchemaSerializationMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::SchemaSerializationMode::SchemaSerializationMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Data::SchemaSerializationMode::SchemaSerializationMode()   {
}
constexpr ::System::Data::SchemaSerializationMode  System::Data::SchemaSerializationMode::IncludeSchema{static_cast<int32_t>(0x1)};
constexpr ::System::Data::SchemaSerializationMode  System::Data::SchemaSerializationMode::ExcludeSchema{static_cast<int32_t>(0x2)};
