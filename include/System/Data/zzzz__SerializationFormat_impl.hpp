#pragma once
// IWYU pragma private; include "System/Data/SerializationFormat.hpp"
#include "System/Data/zzzz__SerializationFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::SerializationFormat::SerializationFormat(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Data::SerializationFormat::SerializationFormat()   {
}
constexpr ::System::Data::SerializationFormat  System::Data::SerializationFormat::Xml{static_cast<int32_t>(0x0)};
constexpr ::System::Data::SerializationFormat  System::Data::SerializationFormat::Binary{static_cast<int32_t>(0x1)};
