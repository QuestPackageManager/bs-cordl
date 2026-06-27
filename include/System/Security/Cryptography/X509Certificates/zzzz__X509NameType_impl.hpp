#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509NameType.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509NameType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::X509Certificates::X509NameType::X509NameType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509NameType::X509NameType()   {
}
constexpr ::System::Security::Cryptography::X509Certificates::X509NameType  System::Security::Cryptography::X509Certificates::X509NameType::SimpleName{static_cast<int32_t>(0x0)};
constexpr ::System::Security::Cryptography::X509Certificates::X509NameType  System::Security::Cryptography::X509Certificates::X509NameType::EmailName{static_cast<int32_t>(0x1)};
constexpr ::System::Security::Cryptography::X509Certificates::X509NameType  System::Security::Cryptography::X509Certificates::X509NameType::UpnName{static_cast<int32_t>(0x2)};
constexpr ::System::Security::Cryptography::X509Certificates::X509NameType  System::Security::Cryptography::X509Certificates::X509NameType::DnsName{static_cast<int32_t>(0x3)};
constexpr ::System::Security::Cryptography::X509Certificates::X509NameType  System::Security::Cryptography::X509Certificates::X509NameType::DnsFromAlternativeName{static_cast<int32_t>(0x4)};
constexpr ::System::Security::Cryptography::X509Certificates::X509NameType  System::Security::Cryptography::X509Certificates::X509NameType::UrlName{static_cast<int32_t>(0x5)};
