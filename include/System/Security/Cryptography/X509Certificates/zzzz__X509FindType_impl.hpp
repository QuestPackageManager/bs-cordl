#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509FindType.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509FindType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType::X509FindType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType::X509FindType()   {
}
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType  System::Security::Cryptography::X509Certificates::X509FindType::FindByThumbprint{static_cast<int32_t>(0x0)};
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType  System::Security::Cryptography::X509Certificates::X509FindType::FindBySubjectName{static_cast<int32_t>(0x1)};
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType  System::Security::Cryptography::X509Certificates::X509FindType::FindBySubjectDistinguishedName{static_cast<int32_t>(0x2)};
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType  System::Security::Cryptography::X509Certificates::X509FindType::FindByIssuerName{static_cast<int32_t>(0x3)};
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType  System::Security::Cryptography::X509Certificates::X509FindType::FindByIssuerDistinguishedName{static_cast<int32_t>(0x4)};
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType  System::Security::Cryptography::X509Certificates::X509FindType::FindBySerialNumber{static_cast<int32_t>(0x5)};
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType  System::Security::Cryptography::X509Certificates::X509FindType::FindByTimeValid{static_cast<int32_t>(0x6)};
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType  System::Security::Cryptography::X509Certificates::X509FindType::FindByTimeNotYetValid{static_cast<int32_t>(0x7)};
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType  System::Security::Cryptography::X509Certificates::X509FindType::FindByTimeExpired{static_cast<int32_t>(0x8)};
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType  System::Security::Cryptography::X509Certificates::X509FindType::FindByTemplateName{static_cast<int32_t>(0x9)};
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType  System::Security::Cryptography::X509Certificates::X509FindType::FindByApplicationPolicy{static_cast<int32_t>(0xa)};
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType  System::Security::Cryptography::X509Certificates::X509FindType::FindByCertificatePolicy{static_cast<int32_t>(0xb)};
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType  System::Security::Cryptography::X509Certificates::X509FindType::FindByExtension{static_cast<int32_t>(0xc)};
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType  System::Security::Cryptography::X509Certificates::X509FindType::FindByKeyUsage{static_cast<int32_t>(0xd)};
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType  System::Security::Cryptography::X509Certificates::X509FindType::FindBySubjectKeyIdentifier{static_cast<int32_t>(0xe)};
