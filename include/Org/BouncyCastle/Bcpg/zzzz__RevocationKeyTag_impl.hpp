#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/RevocationKeyTag.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__RevocationKeyTag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Bcpg::RevocationKeyTag::RevocationKeyTag(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::RevocationKeyTag::RevocationKeyTag() {}
constexpr ::Org::BouncyCastle::Bcpg::RevocationKeyTag Org::BouncyCastle::Bcpg::RevocationKeyTag::ClassDefault{ static_cast<uint8_t>(0x80u) };
constexpr ::Org::BouncyCastle::Bcpg::RevocationKeyTag Org::BouncyCastle::Bcpg::RevocationKeyTag::ClassSensitive{ static_cast<uint8_t>(0x40u) };
