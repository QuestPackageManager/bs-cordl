#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509RevocationFlag.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509RevocationFlag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationFlag::X509RevocationFlag(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationFlag::X509RevocationFlag()   {
}
constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationFlag  System::Security::Cryptography::X509Certificates::X509RevocationFlag::EndCertificateOnly{static_cast<int32_t>(0x0)};
constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationFlag  System::Security::Cryptography::X509Certificates::X509RevocationFlag::EntireChain{static_cast<int32_t>(0x1)};
constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationFlag  System::Security::Cryptography::X509Certificates::X509RevocationFlag::ExcludeRoot{static_cast<int32_t>(0x2)};
