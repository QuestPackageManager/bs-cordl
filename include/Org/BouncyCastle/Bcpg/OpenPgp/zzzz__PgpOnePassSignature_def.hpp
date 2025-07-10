#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpOnePassSignature.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpOnePassSignature)
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKey;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignature;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class OnePassSignaturePacket;
}
namespace Org::BouncyCastle::Bcpg {
class Packet;
}
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpOnePassSignature;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature);
// Dependencies System.Object
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpOnePassSignature
class CORDL_TYPE PgpOnePassSignature : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_HashAlgorithm)) ::Org::BouncyCastle::Bcpg::HashAlgorithmTag HashAlgorithm;

  __declspec(property(get = get_KeyAlgorithm)) ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag KeyAlgorithm;

  __declspec(property(get = get_KeyId)) int64_t KeyId;

  __declspec(property(get = get_SignatureType)) int32_t SignatureType;

  /// @brief Field lastb, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_lastb, put = __cordl_internal_set_lastb)) uint8_t lastb;

  /// @brief Field sig, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_sig, put = __cordl_internal_set_sig)) ::Org::BouncyCastle::Crypto::ISigner* sig;

  /// @brief Field sigPack, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sigPack, put = __cordl_internal_set_sigPack)) ::Org::BouncyCastle::Bcpg::OnePassSignaturePacket* sigPack;

  /// @brief Field signatureType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_signatureType, put = __cordl_internal_set_signatureType)) int32_t signatureType;

  /// @brief Method Cast, addr 0x25311d8, size 0xc8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OnePassSignaturePacket* Cast(::Org::BouncyCastle::Bcpg::Packet* packet);

  /// @brief Method Encode, addr 0x2531c64, size 0x2c, virtual false, abstract: false, final false
  inline void Encode(::System::IO::Stream* outStr);

  /// @brief Method GetEncoded, addr 0x2531bec, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method InitVerify, addr 0x25312d8, size 0x26c, virtual false, abstract: false, final false
  inline void InitVerify(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature* New_ctor(::Org::BouncyCastle::Bcpg::OnePassSignaturePacket* sigPack);

  /// @brief Method Update, addr 0x2531544, size 0xcc, virtual false, abstract: false, final false
  inline void Update(uint8_t b);

  /// @brief Method Update, addr 0x2531800, size 0x110, virtual false, abstract: false, final false
  inline void Update(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method Update, addr 0x2531910, size 0x114, virtual false, abstract: false, final false
  inline void Update(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t off, int32_t length);

  /// @brief Method Verify, addr 0x2531a24, size 0x158, virtual false, abstract: false, final false
  inline bool Verify(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* pgpSig);

  constexpr uint8_t const& __cordl_internal_get_lastb() const;

  constexpr uint8_t& __cordl_internal_get_lastb();

  constexpr ::Org::BouncyCastle::Crypto::ISigner* const& __cordl_internal_get_sig() const;

  constexpr ::Org::BouncyCastle::Crypto::ISigner*& __cordl_internal_get_sig();

  constexpr ::Org::BouncyCastle::Bcpg::OnePassSignaturePacket* const& __cordl_internal_get_sigPack() const;

  constexpr ::Org::BouncyCastle::Bcpg::OnePassSignaturePacket*& __cordl_internal_get_sigPack();

  constexpr int32_t const& __cordl_internal_get_signatureType() const;

  constexpr int32_t& __cordl_internal_get_signatureType();

  constexpr void __cordl_internal_set_lastb(uint8_t value);

  constexpr void __cordl_internal_set_sig(::Org::BouncyCastle::Crypto::ISigner* value);

  constexpr void __cordl_internal_set_sigPack(::Org::BouncyCastle::Bcpg::OnePassSignaturePacket* value);

  constexpr void __cordl_internal_set_signatureType(int32_t value);

  /// @brief Method .ctor, addr 0x2530eb4, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput);

  /// @brief Method .ctor, addr 0x25312a0, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::OnePassSignaturePacket* sigPack);

  /// @brief Method doCanonicalUpdateByte, addr 0x2531610, size 0xe0, virtual false, abstract: false, final false
  inline void doCanonicalUpdateByte(uint8_t b);

  /// @brief Method doUpdateCRLF, addr 0x25316f0, size 0x110, virtual false, abstract: false, final false
  inline void doUpdateCRLF();

  /// @brief Method get_HashAlgorithm, addr 0x2531bb4, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::HashAlgorithmTag get_HashAlgorithm();

  /// @brief Method get_KeyAlgorithm, addr 0x2531bd0, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag get_KeyAlgorithm();

  /// @brief Method get_KeyId, addr 0x2531b7c, size 0x1c, virtual false, abstract: false, final false
  inline int64_t get_KeyId();

  /// @brief Method get_SignatureType, addr 0x2531b98, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_SignatureType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpOnePassSignature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpOnePassSignature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpOnePassSignature(PgpOnePassSignature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpOnePassSignature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpOnePassSignature(PgpOnePassSignature const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1654 };

  /// @brief Field sigPack, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::OnePassSignaturePacket* ___sigPack;

  /// @brief Field signatureType, offset: 0x18, size: 0x4, def value: None
  int32_t ___signatureType;

  /// @brief Field sig, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::ISigner* ___sig;

  /// @brief Field lastb, offset: 0x28, size: 0x1, def value: None
  uint8_t ___lastb;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature, ___sigPack) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature, ___signatureType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature, ___sig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature, ___lastb) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpOnePassSignature");
