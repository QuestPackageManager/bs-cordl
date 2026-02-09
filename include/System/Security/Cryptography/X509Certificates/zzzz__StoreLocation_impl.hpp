#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/StoreLocation.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__StoreLocation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::X509Certificates::StoreLocation::StoreLocation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::StoreLocation::StoreLocation()   {
}
constexpr ::System::Security::Cryptography::X509Certificates::StoreLocation  System::Security::Cryptography::X509Certificates::StoreLocation::CurrentUser{static_cast<int32_t>(0x1)};
constexpr ::System::Security::Cryptography::X509Certificates::StoreLocation  System::Security::Cryptography::X509Certificates::StoreLocation::LocalMachine{static_cast<int32_t>(0x2)};
