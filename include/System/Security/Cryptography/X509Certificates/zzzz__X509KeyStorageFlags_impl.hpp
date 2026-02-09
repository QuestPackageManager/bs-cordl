#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509KeyStorageFlags.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyStorageFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::X509KeyStorageFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::X509KeyStorageFlags()   {
}
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::DefaultKeySet{static_cast<int32_t>(0x0)};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::UserKeySet{static_cast<int32_t>(0x1)};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::MachineKeySet{static_cast<int32_t>(0x2)};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::Exportable{static_cast<int32_t>(0x4)};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::UserProtected{static_cast<int32_t>(0x8)};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::PersistKeySet{static_cast<int32_t>(0x10)};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::EphemeralKeySet{static_cast<int32_t>(0x20)};
