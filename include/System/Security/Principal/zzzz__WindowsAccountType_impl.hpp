#pragma once
// IWYU pragma private; include "System/Security/Principal/WindowsAccountType.hpp"
#include "System/Security/Principal/zzzz__WindowsAccountType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Principal::WindowsAccountType::WindowsAccountType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Principal::WindowsAccountType::WindowsAccountType()   {
}
constexpr ::System::Security::Principal::WindowsAccountType  System::Security::Principal::WindowsAccountType::Normal{static_cast<int32_t>(0x0)};
constexpr ::System::Security::Principal::WindowsAccountType  System::Security::Principal::WindowsAccountType::Guest{static_cast<int32_t>(0x1)};
constexpr ::System::Security::Principal::WindowsAccountType  System::Security::Principal::WindowsAccountType::System{static_cast<int32_t>(0x2)};
constexpr ::System::Security::Principal::WindowsAccountType  System::Security::Principal::WindowsAccountType::Anonymous{static_cast<int32_t>(0x3)};
