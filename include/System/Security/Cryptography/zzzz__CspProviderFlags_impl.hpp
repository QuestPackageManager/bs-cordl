#pragma once
// IWYU pragma private; include "System/Security/Cryptography/CspProviderFlags.hpp"
#include "System/Security/Cryptography/zzzz__CspProviderFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::CspProviderFlags::CspProviderFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::CspProviderFlags::CspProviderFlags()   {
}
constexpr ::System::Security::Cryptography::CspProviderFlags  System::Security::Cryptography::CspProviderFlags::NoFlags{static_cast<int32_t>(0x0)};
constexpr ::System::Security::Cryptography::CspProviderFlags  System::Security::Cryptography::CspProviderFlags::UseMachineKeyStore{static_cast<int32_t>(0x1)};
constexpr ::System::Security::Cryptography::CspProviderFlags  System::Security::Cryptography::CspProviderFlags::UseDefaultKeyContainer{static_cast<int32_t>(0x2)};
constexpr ::System::Security::Cryptography::CspProviderFlags  System::Security::Cryptography::CspProviderFlags::UseNonExportableKey{static_cast<int32_t>(0x4)};
constexpr ::System::Security::Cryptography::CspProviderFlags  System::Security::Cryptography::CspProviderFlags::UseExistingKey{static_cast<int32_t>(0x8)};
constexpr ::System::Security::Cryptography::CspProviderFlags  System::Security::Cryptography::CspProviderFlags::UseArchivableKey{static_cast<int32_t>(0x10)};
constexpr ::System::Security::Cryptography::CspProviderFlags  System::Security::Cryptography::CspProviderFlags::UseUserProtectedKey{static_cast<int32_t>(0x20)};
constexpr ::System::Security::Cryptography::CspProviderFlags  System::Security::Cryptography::CspProviderFlags::NoPrompt{static_cast<int32_t>(0x40)};
constexpr ::System::Security::Cryptography::CspProviderFlags  System::Security::Cryptography::CspProviderFlags::CreateEphemeralKey{static_cast<int32_t>(0x80)};
