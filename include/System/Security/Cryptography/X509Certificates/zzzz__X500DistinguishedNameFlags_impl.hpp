#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X500DistinguishedNameFlags.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X500DistinguishedNameFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::X500DistinguishedNameFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::X500DistinguishedNameFlags()   {
}
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::None{static_cast<int32_t>(0x0)};
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::Reversed{static_cast<int32_t>(0x1)};
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::UseSemicolons{static_cast<int32_t>(0x10)};
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::DoNotUsePlusSign{static_cast<int32_t>(0x20)};
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::DoNotUseQuotes{static_cast<int32_t>(0x40)};
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::UseCommas{static_cast<int32_t>(0x80)};
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::UseNewLines{static_cast<int32_t>(0x100)};
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::UseUTF8Encoding{static_cast<int32_t>(0x1000)};
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::UseT61Encoding{static_cast<int32_t>(0x2000)};
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::ForceUTF8Encoding{static_cast<int32_t>(0x4000)};
