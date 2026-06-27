#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509VerificationFlags.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509VerificationFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags::X509VerificationFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags::X509VerificationFlags()   {
}
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags  System::Security::Cryptography::X509Certificates::X509VerificationFlags::NoFlag{static_cast<int32_t>(0x0)};
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags  System::Security::Cryptography::X509Certificates::X509VerificationFlags::IgnoreNotTimeValid{static_cast<int32_t>(0x1)};
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags  System::Security::Cryptography::X509Certificates::X509VerificationFlags::IgnoreCtlNotTimeValid{static_cast<int32_t>(0x2)};
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags  System::Security::Cryptography::X509Certificates::X509VerificationFlags::IgnoreNotTimeNested{static_cast<int32_t>(0x4)};
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags  System::Security::Cryptography::X509Certificates::X509VerificationFlags::IgnoreInvalidBasicConstraints{static_cast<int32_t>(0x8)};
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags  System::Security::Cryptography::X509Certificates::X509VerificationFlags::AllowUnknownCertificateAuthority{static_cast<int32_t>(0x10)};
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags  System::Security::Cryptography::X509Certificates::X509VerificationFlags::IgnoreWrongUsage{static_cast<int32_t>(0x20)};
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags  System::Security::Cryptography::X509Certificates::X509VerificationFlags::IgnoreInvalidName{static_cast<int32_t>(0x40)};
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags  System::Security::Cryptography::X509Certificates::X509VerificationFlags::IgnoreInvalidPolicy{static_cast<int32_t>(0x80)};
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags  System::Security::Cryptography::X509Certificates::X509VerificationFlags::IgnoreEndRevocationUnknown{static_cast<int32_t>(0x100)};
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags  System::Security::Cryptography::X509Certificates::X509VerificationFlags::IgnoreCtlSignerRevocationUnknown{static_cast<int32_t>(0x200)};
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags  System::Security::Cryptography::X509Certificates::X509VerificationFlags::IgnoreCertificateAuthorityRevocationUnknown{static_cast<int32_t>(0x400)};
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags  System::Security::Cryptography::X509Certificates::X509VerificationFlags::IgnoreRootRevocationUnknown{static_cast<int32_t>(0x800)};
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags  System::Security::Cryptography::X509Certificates::X509VerificationFlags::AllFlags{static_cast<int32_t>(0xfff)};
