#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/PacketTag.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PacketTag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Bcpg::PacketTag::PacketTag(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::PacketTag::PacketTag() {}
constexpr ::Org::BouncyCastle::Bcpg::PacketTag Org::BouncyCastle::Bcpg::PacketTag::Reserved{ static_cast<int32_t>(0x0) };
constexpr ::Org::BouncyCastle::Bcpg::PacketTag Org::BouncyCastle::Bcpg::PacketTag::PublicKeyEncryptedSession{ static_cast<int32_t>(0x1) };
constexpr ::Org::BouncyCastle::Bcpg::PacketTag Org::BouncyCastle::Bcpg::PacketTag::Signature{ static_cast<int32_t>(0x2) };
constexpr ::Org::BouncyCastle::Bcpg::PacketTag Org::BouncyCastle::Bcpg::PacketTag::SymmetricKeyEncryptedSessionKey{ static_cast<int32_t>(0x3) };
constexpr ::Org::BouncyCastle::Bcpg::PacketTag Org::BouncyCastle::Bcpg::PacketTag::OnePassSignature{ static_cast<int32_t>(0x4) };
constexpr ::Org::BouncyCastle::Bcpg::PacketTag Org::BouncyCastle::Bcpg::PacketTag::SecretKey{ static_cast<int32_t>(0x5) };
constexpr ::Org::BouncyCastle::Bcpg::PacketTag Org::BouncyCastle::Bcpg::PacketTag::PublicKey{ static_cast<int32_t>(0x6) };
constexpr ::Org::BouncyCastle::Bcpg::PacketTag Org::BouncyCastle::Bcpg::PacketTag::SecretSubkey{ static_cast<int32_t>(0x7) };
constexpr ::Org::BouncyCastle::Bcpg::PacketTag Org::BouncyCastle::Bcpg::PacketTag::CompressedData{ static_cast<int32_t>(0x8) };
constexpr ::Org::BouncyCastle::Bcpg::PacketTag Org::BouncyCastle::Bcpg::PacketTag::SymmetricKeyEncrypted{ static_cast<int32_t>(0x9) };
constexpr ::Org::BouncyCastle::Bcpg::PacketTag Org::BouncyCastle::Bcpg::PacketTag::Marker{ static_cast<int32_t>(0xa) };
constexpr ::Org::BouncyCastle::Bcpg::PacketTag Org::BouncyCastle::Bcpg::PacketTag::LiteralData{ static_cast<int32_t>(0xb) };
constexpr ::Org::BouncyCastle::Bcpg::PacketTag Org::BouncyCastle::Bcpg::PacketTag::Trust{ static_cast<int32_t>(0xc) };
constexpr ::Org::BouncyCastle::Bcpg::PacketTag Org::BouncyCastle::Bcpg::PacketTag::UserId{ static_cast<int32_t>(0xd) };
constexpr ::Org::BouncyCastle::Bcpg::PacketTag Org::BouncyCastle::Bcpg::PacketTag::PublicSubkey{ static_cast<int32_t>(0xe) };
constexpr ::Org::BouncyCastle::Bcpg::PacketTag Org::BouncyCastle::Bcpg::PacketTag::UserAttribute{ static_cast<int32_t>(0x11) };
constexpr ::Org::BouncyCastle::Bcpg::PacketTag Org::BouncyCastle::Bcpg::PacketTag::SymmetricEncryptedIntegrityProtected{ static_cast<int32_t>(0x12) };
constexpr ::Org::BouncyCastle::Bcpg::PacketTag Org::BouncyCastle::Bcpg::PacketTag::ModificationDetectionCode{ static_cast<int32_t>(0x13) };
constexpr ::Org::BouncyCastle::Bcpg::PacketTag Org::BouncyCastle::Bcpg::PacketTag::Experimental1{ static_cast<int32_t>(0x3c) };
constexpr ::Org::BouncyCastle::Bcpg::PacketTag Org::BouncyCastle::Bcpg::PacketTag::Experimental2{ static_cast<int32_t>(0x3d) };
constexpr ::Org::BouncyCastle::Bcpg::PacketTag Org::BouncyCastle::Bcpg::PacketTag::Experimental3{ static_cast<int32_t>(0x3e) };
constexpr ::Org::BouncyCastle::Bcpg::PacketTag Org::BouncyCastle::Bcpg::PacketTag::Experimental4{ static_cast<int32_t>(0x3f) };
