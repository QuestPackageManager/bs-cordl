#pragma once
// IWYU pragma private; include "System/Security/SecurityElementType.hpp"
#include "System/Security/zzzz__SecurityElementType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::SecurityElementType::SecurityElementType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::SecurityElementType::SecurityElementType()   {
}
constexpr ::System::Security::SecurityElementType  System::Security::SecurityElementType::Regular{static_cast<int32_t>(0x0)};
constexpr ::System::Security::SecurityElementType  System::Security::SecurityElementType::Format{static_cast<int32_t>(0x1)};
constexpr ::System::Security::SecurityElementType  System::Security::SecurityElementType::Comment{static_cast<int32_t>(0x2)};
