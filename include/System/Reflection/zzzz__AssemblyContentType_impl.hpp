#pragma once
// IWYU pragma private; include "System/Reflection/AssemblyContentType.hpp"
#include "System/Reflection/zzzz__AssemblyContentType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::AssemblyContentType::AssemblyContentType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Reflection::AssemblyContentType::AssemblyContentType()   {
}
constexpr ::System::Reflection::AssemblyContentType  System::Reflection::AssemblyContentType::Default{static_cast<int32_t>(0x0)};
constexpr ::System::Reflection::AssemblyContentType  System::Reflection::AssemblyContentType::WindowsRuntime{static_cast<int32_t>(0x1)};
