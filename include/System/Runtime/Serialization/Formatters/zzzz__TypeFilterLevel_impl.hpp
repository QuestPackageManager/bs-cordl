#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/TypeFilterLevel.hpp"
#include "System/Runtime/Serialization/Formatters/zzzz__TypeFilterLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Serialization::Formatters::TypeFilterLevel::TypeFilterLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::TypeFilterLevel::TypeFilterLevel()   {
}
constexpr ::System::Runtime::Serialization::Formatters::TypeFilterLevel  System::Runtime::Serialization::Formatters::TypeFilterLevel::Low{static_cast<int32_t>(0x2)};
constexpr ::System::Runtime::Serialization::Formatters::TypeFilterLevel  System::Runtime::Serialization::Formatters::TypeFilterLevel::Full{static_cast<int32_t>(0x3)};
