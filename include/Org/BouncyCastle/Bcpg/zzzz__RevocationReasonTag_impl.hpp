#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__RevocationReasonTag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Bcpg::RevocationReasonTag::RevocationReasonTag(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::RevocationReasonTag::RevocationReasonTag() {}
constexpr ::Org::BouncyCastle::Bcpg::RevocationReasonTag Org::BouncyCastle::Bcpg::RevocationReasonTag::NoReason{ static_cast<uint8_t>(0x0u) };
constexpr ::Org::BouncyCastle::Bcpg::RevocationReasonTag Org::BouncyCastle::Bcpg::RevocationReasonTag::KeySuperseded{ static_cast<uint8_t>(0x1u) };
constexpr ::Org::BouncyCastle::Bcpg::RevocationReasonTag Org::BouncyCastle::Bcpg::RevocationReasonTag::KeyCompromised{ static_cast<uint8_t>(0x2u) };
constexpr ::Org::BouncyCastle::Bcpg::RevocationReasonTag Org::BouncyCastle::Bcpg::RevocationReasonTag::KeyRetired{ static_cast<uint8_t>(0x3u) };
constexpr ::Org::BouncyCastle::Bcpg::RevocationReasonTag Org::BouncyCastle::Bcpg::RevocationReasonTag::UserNoLongerValid{ static_cast<uint8_t>(0x20u) };
