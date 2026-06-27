#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/StoreName.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__StoreName_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::X509Certificates::StoreName::StoreName(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::StoreName::StoreName()   {
}
constexpr ::System::Security::Cryptography::X509Certificates::StoreName  System::Security::Cryptography::X509Certificates::StoreName::AddressBook{static_cast<int32_t>(0x1)};
constexpr ::System::Security::Cryptography::X509Certificates::StoreName  System::Security::Cryptography::X509Certificates::StoreName::AuthRoot{static_cast<int32_t>(0x2)};
constexpr ::System::Security::Cryptography::X509Certificates::StoreName  System::Security::Cryptography::X509Certificates::StoreName::CertificateAuthority{static_cast<int32_t>(0x3)};
constexpr ::System::Security::Cryptography::X509Certificates::StoreName  System::Security::Cryptography::X509Certificates::StoreName::Disallowed{static_cast<int32_t>(0x4)};
constexpr ::System::Security::Cryptography::X509Certificates::StoreName  System::Security::Cryptography::X509Certificates::StoreName::My{static_cast<int32_t>(0x5)};
constexpr ::System::Security::Cryptography::X509Certificates::StoreName  System::Security::Cryptography::X509Certificates::StoreName::Root{static_cast<int32_t>(0x6)};
constexpr ::System::Security::Cryptography::X509Certificates::StoreName  System::Security::Cryptography::X509Certificates::StoreName::TrustedPeople{static_cast<int32_t>(0x7)};
constexpr ::System::Security::Cryptography::X509Certificates::StoreName  System::Security::Cryptography::X509Certificates::StoreName::TrustedPublisher{static_cast<int32_t>(0x8)};
