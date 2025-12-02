#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/SerializationMode.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Serialization::SerializationMode::SerializationMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::SerializationMode::SerializationMode() {}
constexpr ::System::Runtime::Serialization::SerializationMode System::Runtime::Serialization::SerializationMode::SharedContract{ static_cast<int32_t>(0x0) };
constexpr ::System::Runtime::Serialization::SerializationMode System::Runtime::Serialization::SerializationMode::SharedType{ static_cast<int32_t>(0x1) };
