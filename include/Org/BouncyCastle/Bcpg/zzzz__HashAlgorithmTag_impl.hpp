#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag::HashAlgorithmTag(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag::HashAlgorithmTag() {}
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag Org::BouncyCastle::Bcpg::HashAlgorithmTag::MD5{ static_cast<int32_t>(0x1) };
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag Org::BouncyCastle::Bcpg::HashAlgorithmTag::Sha1{ static_cast<int32_t>(0x2) };
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag Org::BouncyCastle::Bcpg::HashAlgorithmTag::RipeMD160{ static_cast<int32_t>(0x3) };
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag Org::BouncyCastle::Bcpg::HashAlgorithmTag::DoubleSha{ static_cast<int32_t>(0x4) };
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag Org::BouncyCastle::Bcpg::HashAlgorithmTag::MD2{ static_cast<int32_t>(0x5) };
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag Org::BouncyCastle::Bcpg::HashAlgorithmTag::Tiger192{ static_cast<int32_t>(0x6) };
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag Org::BouncyCastle::Bcpg::HashAlgorithmTag::Haval5pass160{ static_cast<int32_t>(0x7) };
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag Org::BouncyCastle::Bcpg::HashAlgorithmTag::Sha256{ static_cast<int32_t>(0x8) };
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag Org::BouncyCastle::Bcpg::HashAlgorithmTag::Sha384{ static_cast<int32_t>(0x9) };
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag Org::BouncyCastle::Bcpg::HashAlgorithmTag::Sha512{ static_cast<int32_t>(0xa) };
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag Org::BouncyCastle::Bcpg::HashAlgorithmTag::Sha224{ static_cast<int32_t>(0xb) };
