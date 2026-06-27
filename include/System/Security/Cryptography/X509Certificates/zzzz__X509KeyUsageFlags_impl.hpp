#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509KeyUsageFlags.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyUsageFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::X509KeyUsageFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::X509KeyUsageFlags()   {
}
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags  System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::None{static_cast<int32_t>(0x0)};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags  System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::EncipherOnly{static_cast<int32_t>(0x1)};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags  System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::CrlSign{static_cast<int32_t>(0x2)};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags  System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::KeyCertSign{static_cast<int32_t>(0x4)};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags  System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::KeyAgreement{static_cast<int32_t>(0x8)};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags  System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::DataEncipherment{static_cast<int32_t>(0x10)};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags  System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::KeyEncipherment{static_cast<int32_t>(0x20)};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags  System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::NonRepudiation{static_cast<int32_t>(0x40)};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags  System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::DigitalSignature{static_cast<int32_t>(0x80)};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags  System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::DecipherOnly{static_cast<int32_t>(0x8000)};
