#pragma once
// IWYU pragma private; include "System/Net/Security/AuthenticationLevel.hpp"
#include "System/Net/Security/zzzz__AuthenticationLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Security::AuthenticationLevel::AuthenticationLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Security::AuthenticationLevel::AuthenticationLevel()   {
}
constexpr ::System::Net::Security::AuthenticationLevel  System::Net::Security::AuthenticationLevel::None{static_cast<int32_t>(0x0)};
constexpr ::System::Net::Security::AuthenticationLevel  System::Net::Security::AuthenticationLevel::MutualAuthRequested{static_cast<int32_t>(0x1)};
constexpr ::System::Net::Security::AuthenticationLevel  System::Net::Security::AuthenticationLevel::MutualAuthRequired{static_cast<int32_t>(0x2)};
