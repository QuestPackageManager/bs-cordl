#pragma once
// IWYU pragma private; include "System/Net/Security/EncryptionPolicy.hpp"
#include "System/Net/Security/zzzz__EncryptionPolicy_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Security::EncryptionPolicy::EncryptionPolicy(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Security::EncryptionPolicy::EncryptionPolicy()   {
}
constexpr ::System::Net::Security::EncryptionPolicy  System::Net::Security::EncryptionPolicy::RequireEncryption{static_cast<int32_t>(0x0)};
constexpr ::System::Net::Security::EncryptionPolicy  System::Net::Security::EncryptionPolicy::AllowNoEncryption{static_cast<int32_t>(0x1)};
constexpr ::System::Net::Security::EncryptionPolicy  System::Net::Security::EncryptionPolicy::NoEncryption{static_cast<int32_t>(0x2)};
