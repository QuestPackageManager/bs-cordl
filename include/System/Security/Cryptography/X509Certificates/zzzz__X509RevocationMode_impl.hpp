#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509RevocationMode.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509RevocationMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationMode::X509RevocationMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationMode::X509RevocationMode()   {
}
constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationMode  System::Security::Cryptography::X509Certificates::X509RevocationMode::NoCheck{static_cast<int32_t>(0x0)};
constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationMode  System::Security::Cryptography::X509Certificates::X509RevocationMode::Online{static_cast<int32_t>(0x1)};
constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationMode  System::Security::Cryptography::X509Certificates::X509RevocationMode::Offline{static_cast<int32_t>(0x2)};
