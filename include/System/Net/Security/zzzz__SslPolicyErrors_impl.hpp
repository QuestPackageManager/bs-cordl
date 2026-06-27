#pragma once
// IWYU pragma private; include "System/Net/Security/SslPolicyErrors.hpp"
#include "System/Net/Security/zzzz__SslPolicyErrors_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Security::SslPolicyErrors::SslPolicyErrors(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Security::SslPolicyErrors::SslPolicyErrors()   {
}
constexpr ::System::Net::Security::SslPolicyErrors  System::Net::Security::SslPolicyErrors::None{static_cast<int32_t>(0x0)};
constexpr ::System::Net::Security::SslPolicyErrors  System::Net::Security::SslPolicyErrors::RemoteCertificateNotAvailable{static_cast<int32_t>(0x1)};
constexpr ::System::Net::Security::SslPolicyErrors  System::Net::Security::SslPolicyErrors::RemoteCertificateNameMismatch{static_cast<int32_t>(0x2)};
constexpr ::System::Net::Security::SslPolicyErrors  System::Net::Security::SslPolicyErrors::RemoteCertificateChainErrors{static_cast<int32_t>(0x4)};
