#pragma once
// IWYU pragma private; include "System/Security/Principal/TokenImpersonationLevel.hpp"
#include "System/Security/Principal/zzzz__TokenImpersonationLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Principal::TokenImpersonationLevel::TokenImpersonationLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Principal::TokenImpersonationLevel::TokenImpersonationLevel()   {
}
constexpr ::System::Security::Principal::TokenImpersonationLevel  System::Security::Principal::TokenImpersonationLevel::None{static_cast<int32_t>(0x0)};
constexpr ::System::Security::Principal::TokenImpersonationLevel  System::Security::Principal::TokenImpersonationLevel::Anonymous{static_cast<int32_t>(0x1)};
constexpr ::System::Security::Principal::TokenImpersonationLevel  System::Security::Principal::TokenImpersonationLevel::Identification{static_cast<int32_t>(0x2)};
constexpr ::System::Security::Principal::TokenImpersonationLevel  System::Security::Principal::TokenImpersonationLevel::Impersonation{static_cast<int32_t>(0x3)};
constexpr ::System::Security::Principal::TokenImpersonationLevel  System::Security::Principal::TokenImpersonationLevel::Delegation{static_cast<int32_t>(0x4)};
