#pragma once
#include "System/Net/zzzz__AuthenticationSchemes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::AuthenticationSchemes::AuthenticationSchemes(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::AuthenticationSchemes::AuthenticationSchemes() {}
constexpr ::System::Net::AuthenticationSchemes System::Net::AuthenticationSchemes::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::AuthenticationSchemes System::Net::AuthenticationSchemes::Digest{ static_cast<int32_t>(0x1) };
constexpr ::System::Net::AuthenticationSchemes System::Net::AuthenticationSchemes::Negotiate{ static_cast<int32_t>(0x2) };
constexpr ::System::Net::AuthenticationSchemes System::Net::AuthenticationSchemes::Ntlm{ static_cast<int32_t>(0x4) };
constexpr ::System::Net::AuthenticationSchemes System::Net::AuthenticationSchemes::Basic{ static_cast<int32_t>(0x8) };
constexpr ::System::Net::AuthenticationSchemes System::Net::AuthenticationSchemes::Anonymous{ static_cast<int32_t>(0x8000) };
constexpr ::System::Net::AuthenticationSchemes System::Net::AuthenticationSchemes::IntegratedWindowsAuthentication{ static_cast<int32_t>(0x6) };
