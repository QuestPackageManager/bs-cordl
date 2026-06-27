#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/OpenFlags.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__OpenFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::X509Certificates::OpenFlags::OpenFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::OpenFlags::OpenFlags()   {
}
constexpr ::System::Security::Cryptography::X509Certificates::OpenFlags  System::Security::Cryptography::X509Certificates::OpenFlags::ReadOnly{static_cast<int32_t>(0x0)};
constexpr ::System::Security::Cryptography::X509Certificates::OpenFlags  System::Security::Cryptography::X509Certificates::OpenFlags::ReadWrite{static_cast<int32_t>(0x1)};
constexpr ::System::Security::Cryptography::X509Certificates::OpenFlags  System::Security::Cryptography::X509Certificates::OpenFlags::MaxAllowed{static_cast<int32_t>(0x2)};
constexpr ::System::Security::Cryptography::X509Certificates::OpenFlags  System::Security::Cryptography::X509Certificates::OpenFlags::OpenExistingOnly{static_cast<int32_t>(0x4)};
constexpr ::System::Security::Cryptography::X509Certificates::OpenFlags  System::Security::Cryptography::X509Certificates::OpenFlags::IncludeArchived{static_cast<int32_t>(0x8)};
