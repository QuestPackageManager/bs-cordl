#pragma once
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus::PkiStatus(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus::PkiStatus() {}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus Org::BouncyCastle::Asn1::Cmp::PkiStatus::Granted{ static_cast<int32_t>(0x0) };
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus Org::BouncyCastle::Asn1::Cmp::PkiStatus::GrantedWithMods{ static_cast<int32_t>(0x1) };
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus Org::BouncyCastle::Asn1::Cmp::PkiStatus::Rejection{ static_cast<int32_t>(0x2) };
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus Org::BouncyCastle::Asn1::Cmp::PkiStatus::Waiting{ static_cast<int32_t>(0x3) };
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus Org::BouncyCastle::Asn1::Cmp::PkiStatus::RevocationWarning{ static_cast<int32_t>(0x4) };
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus Org::BouncyCastle::Asn1::Cmp::PkiStatus::RevocationNotification{ static_cast<int32_t>(0x5) };
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus Org::BouncyCastle::Asn1::Cmp::PkiStatus::KeyUpdateWarning{ static_cast<int32_t>(0x6) };
