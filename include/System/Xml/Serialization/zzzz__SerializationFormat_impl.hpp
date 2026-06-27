#pragma once
// IWYU pragma private; include "System/Xml/Serialization/SerializationFormat.hpp"
#include "System/Xml/Serialization/zzzz__SerializationFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Serialization::SerializationFormat::SerializationFormat(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::SerializationFormat::SerializationFormat()   {
}
constexpr ::System::Xml::Serialization::SerializationFormat  System::Xml::Serialization::SerializationFormat::Encoded{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::Serialization::SerializationFormat  System::Xml::Serialization::SerializationFormat::Literal{static_cast<int32_t>(0x1)};
