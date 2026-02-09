#pragma once
// IWYU pragma private; include "System/Xml/Serialization/SchemaTypes.hpp"
#include "System/Xml/Serialization/zzzz__SchemaTypes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Serialization::SchemaTypes::SchemaTypes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::SchemaTypes::SchemaTypes()   {
}
constexpr ::System::Xml::Serialization::SchemaTypes  System::Xml::Serialization::SchemaTypes::NotSet{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::Serialization::SchemaTypes  System::Xml::Serialization::SchemaTypes::Primitive{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::Serialization::SchemaTypes  System::Xml::Serialization::SchemaTypes::Enum{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::Serialization::SchemaTypes  System::Xml::Serialization::SchemaTypes::Array{static_cast<int32_t>(0x3)};
constexpr ::System::Xml::Serialization::SchemaTypes  System::Xml::Serialization::SchemaTypes::Class{static_cast<int32_t>(0x4)};
constexpr ::System::Xml::Serialization::SchemaTypes  System::Xml::Serialization::SchemaTypes::XmlSerializable{static_cast<int32_t>(0x5)};
constexpr ::System::Xml::Serialization::SchemaTypes  System::Xml::Serialization::SchemaTypes::XmlNode{static_cast<int32_t>(0x6)};
constexpr ::System::Xml::Serialization::SchemaTypes  System::Xml::Serialization::SchemaTypes::Void{static_cast<int32_t>(0x7)};
