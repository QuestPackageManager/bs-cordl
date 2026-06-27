#pragma once
// IWYU pragma private; include "System/Security/Cryptography/AsnDecodeStatus.hpp"
#include "System/Security/Cryptography/zzzz__AsnDecodeStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::AsnDecodeStatus::AsnDecodeStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::AsnDecodeStatus::AsnDecodeStatus()   {
}
constexpr ::System::Security::Cryptography::AsnDecodeStatus  System::Security::Cryptography::AsnDecodeStatus::NotDecoded{static_cast<int32_t>(0xffffffff)};
constexpr ::System::Security::Cryptography::AsnDecodeStatus  System::Security::Cryptography::AsnDecodeStatus::Ok{static_cast<int32_t>(0x0)};
constexpr ::System::Security::Cryptography::AsnDecodeStatus  System::Security::Cryptography::AsnDecodeStatus::BadAsn{static_cast<int32_t>(0x1)};
constexpr ::System::Security::Cryptography::AsnDecodeStatus  System::Security::Cryptography::AsnDecodeStatus::BadTag{static_cast<int32_t>(0x2)};
constexpr ::System::Security::Cryptography::AsnDecodeStatus  System::Security::Cryptography::AsnDecodeStatus::BadLength{static_cast<int32_t>(0x3)};
constexpr ::System::Security::Cryptography::AsnDecodeStatus  System::Security::Cryptography::AsnDecodeStatus::InformationNotAvailable{static_cast<int32_t>(0x4)};
