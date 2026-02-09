#pragma once
// IWYU pragma private; include "System/Security/Cryptography/OidGroup.hpp"
#include "System/Security/Cryptography/zzzz__OidGroup_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::OidGroup::OidGroup(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::OidGroup::OidGroup()   {
}
constexpr ::System::Security::Cryptography::OidGroup  System::Security::Cryptography::OidGroup::All{static_cast<int32_t>(0x0)};
constexpr ::System::Security::Cryptography::OidGroup  System::Security::Cryptography::OidGroup::HashAlgorithm{static_cast<int32_t>(0x1)};
constexpr ::System::Security::Cryptography::OidGroup  System::Security::Cryptography::OidGroup::EncryptionAlgorithm{static_cast<int32_t>(0x2)};
constexpr ::System::Security::Cryptography::OidGroup  System::Security::Cryptography::OidGroup::PublicKeyAlgorithm{static_cast<int32_t>(0x3)};
constexpr ::System::Security::Cryptography::OidGroup  System::Security::Cryptography::OidGroup::SignatureAlgorithm{static_cast<int32_t>(0x4)};
constexpr ::System::Security::Cryptography::OidGroup  System::Security::Cryptography::OidGroup::Attribute{static_cast<int32_t>(0x5)};
constexpr ::System::Security::Cryptography::OidGroup  System::Security::Cryptography::OidGroup::ExtensionOrAttribute{static_cast<int32_t>(0x6)};
constexpr ::System::Security::Cryptography::OidGroup  System::Security::Cryptography::OidGroup::EnhancedKeyUsage{static_cast<int32_t>(0x7)};
constexpr ::System::Security::Cryptography::OidGroup  System::Security::Cryptography::OidGroup::Policy{static_cast<int32_t>(0x8)};
constexpr ::System::Security::Cryptography::OidGroup  System::Security::Cryptography::OidGroup::Template{static_cast<int32_t>(0x9)};
constexpr ::System::Security::Cryptography::OidGroup  System::Security::Cryptography::OidGroup::KeyDerivationFunction{static_cast<int32_t>(0xa)};
