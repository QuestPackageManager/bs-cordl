#pragma once
// IWYU pragma private; include "System/Data/SchemaFormat.hpp"
#include "System/Data/zzzz__SchemaFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::SchemaFormat::SchemaFormat(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Data::SchemaFormat::SchemaFormat()   {
}
constexpr ::System::Data::SchemaFormat  System::Data::SchemaFormat::Public{static_cast<int32_t>(0x1)};
constexpr ::System::Data::SchemaFormat  System::Data::SchemaFormat::Remoting{static_cast<int32_t>(0x2)};
constexpr ::System::Data::SchemaFormat  System::Data::SchemaFormat::WebService{static_cast<int32_t>(0x3)};
constexpr ::System::Data::SchemaFormat  System::Data::SchemaFormat::RemotingSkipSchema{static_cast<int32_t>(0x4)};
constexpr ::System::Data::SchemaFormat  System::Data::SchemaFormat::WebServiceSkipSchema{static_cast<int32_t>(0x5)};
