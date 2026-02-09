#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509ChainStatusFlags.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatusFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::X509ChainStatusFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::X509ChainStatusFlags()   {
}
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::NoError{static_cast<int32_t>(0x0)};
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::NotTimeValid{static_cast<int32_t>(0x1)};
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::NotTimeNested{static_cast<int32_t>(0x2)};
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::Revoked{static_cast<int32_t>(0x4)};
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::NotSignatureValid{static_cast<int32_t>(0x8)};
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::NotValidForUsage{static_cast<int32_t>(0x10)};
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::UntrustedRoot{static_cast<int32_t>(0x20)};
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::RevocationStatusUnknown{static_cast<int32_t>(0x40)};
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::Cyclic{static_cast<int32_t>(0x80)};
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::InvalidExtension{static_cast<int32_t>(0x100)};
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::InvalidPolicyConstraints{static_cast<int32_t>(0x200)};
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::InvalidBasicConstraints{static_cast<int32_t>(0x400)};
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::InvalidNameConstraints{static_cast<int32_t>(0x800)};
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::HasNotSupportedNameConstraint{static_cast<int32_t>(0x1000)};
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::HasNotDefinedNameConstraint{static_cast<int32_t>(0x2000)};
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::HasNotPermittedNameConstraint{static_cast<int32_t>(0x4000)};
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::HasExcludedNameConstraint{static_cast<int32_t>(0x8000)};
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::PartialChain{static_cast<int32_t>(0x10000)};
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::CtlNotTimeValid{static_cast<int32_t>(0x20000)};
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::CtlNotSignatureValid{static_cast<int32_t>(0x40000)};
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::CtlNotValidForUsage{static_cast<int32_t>(0x80000)};
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::OfflineRevocation{static_cast<int32_t>(0x1000000)};
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::NoIssuanceChainPolicy{static_cast<int32_t>(0x2000000)};
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::ExplicitDistrust{static_cast<int32_t>(0x4000000)};
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::HasNotSupportedCriticalExtension{static_cast<int32_t>(0x8000000)};
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::HasWeakSignature{static_cast<int32_t>(0x100000)};
