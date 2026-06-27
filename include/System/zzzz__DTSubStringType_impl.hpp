#pragma once
// IWYU pragma private; include "System/DTSubStringType.hpp"
#include "System/zzzz__DTSubStringType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::DTSubStringType::DTSubStringType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::DTSubStringType::DTSubStringType()   {
}
constexpr ::System::DTSubStringType  System::DTSubStringType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::System::DTSubStringType  System::DTSubStringType::Invalid{static_cast<int32_t>(0x1)};
constexpr ::System::DTSubStringType  System::DTSubStringType::Number{static_cast<int32_t>(0x2)};
constexpr ::System::DTSubStringType  System::DTSubStringType::End{static_cast<int32_t>(0x3)};
constexpr ::System::DTSubStringType  System::DTSubStringType::Other{static_cast<int32_t>(0x4)};
