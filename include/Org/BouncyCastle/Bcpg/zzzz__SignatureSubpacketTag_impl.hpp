#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/SignatureSubpacketTag.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacketTag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag::SignatureSubpacketTag(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag::SignatureSubpacketTag() {}
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag Org::BouncyCastle::Bcpg::SignatureSubpacketTag::CreationTime{ static_cast<int32_t>(0x2) };
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag Org::BouncyCastle::Bcpg::SignatureSubpacketTag::ExpireTime{ static_cast<int32_t>(0x3) };
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag Org::BouncyCastle::Bcpg::SignatureSubpacketTag::Exportable{ static_cast<int32_t>(0x4) };
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag Org::BouncyCastle::Bcpg::SignatureSubpacketTag::TrustSig{ static_cast<int32_t>(0x5) };
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag Org::BouncyCastle::Bcpg::SignatureSubpacketTag::RegExp{ static_cast<int32_t>(0x6) };
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag Org::BouncyCastle::Bcpg::SignatureSubpacketTag::Revocable{ static_cast<int32_t>(0x7) };
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag Org::BouncyCastle::Bcpg::SignatureSubpacketTag::KeyExpireTime{ static_cast<int32_t>(0x9) };
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag Org::BouncyCastle::Bcpg::SignatureSubpacketTag::Placeholder{ static_cast<int32_t>(0xa) };
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag Org::BouncyCastle::Bcpg::SignatureSubpacketTag::PreferredSymmetricAlgorithms{ static_cast<int32_t>(0xb) };
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag Org::BouncyCastle::Bcpg::SignatureSubpacketTag::RevocationKey{ static_cast<int32_t>(0xc) };
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag Org::BouncyCastle::Bcpg::SignatureSubpacketTag::IssuerKeyId{ static_cast<int32_t>(0x10) };
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag Org::BouncyCastle::Bcpg::SignatureSubpacketTag::NotationData{ static_cast<int32_t>(0x14) };
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag Org::BouncyCastle::Bcpg::SignatureSubpacketTag::PreferredHashAlgorithms{ static_cast<int32_t>(0x15) };
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag Org::BouncyCastle::Bcpg::SignatureSubpacketTag::PreferredCompressionAlgorithms{ static_cast<int32_t>(0x16) };
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag Org::BouncyCastle::Bcpg::SignatureSubpacketTag::KeyServerPreferences{ static_cast<int32_t>(0x17) };
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag Org::BouncyCastle::Bcpg::SignatureSubpacketTag::PreferredKeyServer{ static_cast<int32_t>(0x18) };
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag Org::BouncyCastle::Bcpg::SignatureSubpacketTag::PrimaryUserId{ static_cast<int32_t>(0x19) };
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag Org::BouncyCastle::Bcpg::SignatureSubpacketTag::PolicyUrl{ static_cast<int32_t>(0x1a) };
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag Org::BouncyCastle::Bcpg::SignatureSubpacketTag::KeyFlags{ static_cast<int32_t>(0x1b) };
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag Org::BouncyCastle::Bcpg::SignatureSubpacketTag::SignerUserId{ static_cast<int32_t>(0x1c) };
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag Org::BouncyCastle::Bcpg::SignatureSubpacketTag::RevocationReason{ static_cast<int32_t>(0x1d) };
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag Org::BouncyCastle::Bcpg::SignatureSubpacketTag::Features{ static_cast<int32_t>(0x1e) };
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag Org::BouncyCastle::Bcpg::SignatureSubpacketTag::SignatureTarget{ static_cast<int32_t>(0x1f) };
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag Org::BouncyCastle::Bcpg::SignatureSubpacketTag::EmbeddedSignature{ static_cast<int32_t>(0x20) };
