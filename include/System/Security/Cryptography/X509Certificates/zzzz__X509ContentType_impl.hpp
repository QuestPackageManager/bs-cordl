#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509ContentType.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ContentType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::X509Certificates::X509ContentType::X509ContentType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509ContentType::X509ContentType()   {
}
constexpr ::System::Security::Cryptography::X509Certificates::X509ContentType  System::Security::Cryptography::X509Certificates::X509ContentType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::System::Security::Cryptography::X509Certificates::X509ContentType  System::Security::Cryptography::X509Certificates::X509ContentType::Cert{static_cast<int32_t>(0x1)};
constexpr ::System::Security::Cryptography::X509Certificates::X509ContentType  System::Security::Cryptography::X509Certificates::X509ContentType::SerializedCert{static_cast<int32_t>(0x2)};
constexpr ::System::Security::Cryptography::X509Certificates::X509ContentType  System::Security::Cryptography::X509Certificates::X509ContentType::Pfx{static_cast<int32_t>(0x3)};
constexpr ::System::Security::Cryptography::X509Certificates::X509ContentType  System::Security::Cryptography::X509Certificates::X509ContentType::Pkcs12{static_cast<int32_t>(0x3)};
constexpr ::System::Security::Cryptography::X509Certificates::X509ContentType  System::Security::Cryptography::X509Certificates::X509ContentType::SerializedStore{static_cast<int32_t>(0x4)};
constexpr ::System::Security::Cryptography::X509Certificates::X509ContentType  System::Security::Cryptography::X509Certificates::X509ContentType::Pkcs7{static_cast<int32_t>(0x5)};
constexpr ::System::Security::Cryptography::X509Certificates::X509ContentType  System::Security::Cryptography::X509Certificates::X509ContentType::Authenticode{static_cast<int32_t>(0x6)};
