#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/FormatterAssemblyStyle.hpp"
#include "System/Runtime/Serialization/Formatters/zzzz__FormatterAssemblyStyle_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle::FormatterAssemblyStyle(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle::FormatterAssemblyStyle()   {
}
constexpr ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle  System::Runtime::Serialization::Formatters::FormatterAssemblyStyle::Simple{static_cast<int32_t>(0x0)};
constexpr ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle  System::Runtime::Serialization::Formatters::FormatterAssemblyStyle::Full{static_cast<int32_t>(0x1)};
