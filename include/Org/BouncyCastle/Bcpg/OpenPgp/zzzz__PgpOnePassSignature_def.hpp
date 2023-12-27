#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpOnePassSignature)
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKey;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignature;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class Packet;
}
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class OnePassSignaturePacket;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpOnePassSignature;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpOnePassSignature
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1654))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpOnePassSignature*
class CORDL_TYPE PgpOnePassSignature : public ::System::Object {
public:
  // Declarations
  /// @brief Field sigPack, offset 0x10, size 0x8
  __declspec(property(get = __get_sigPack, put = __set_sigPack))::Org::BouncyCastle::Bcpg::OnePassSignaturePacket* sigPack;

  /// @brief Field signatureType, offset 0x18, size 0x4
  __declspec(property(get = __get_signatureType, put = __set_signatureType)) int32_t signatureType;

  /// @brief Field sig, offset 0x20, size 0x8
  __declspec(property(get = __get_sig, put = __set_sig))::Org::BouncyCastle::Crypto::ISigner* sig;

  /// @brief Field lastb, offset 0x28, size 0x1
  __declspec(property(get = __get_lastb, put = __set_lastb)) uint8_t lastb;

  __declspec(property(get = get_KeyId)) int64_t KeyId;

  __declspec(property(get = get_SignatureType)) int32_t SignatureType;

  __declspec(property(get = get_HashAlgorithm))::Org::BouncyCastle::Bcpg::HashAlgorithmTag HashAlgorithm;

  __declspec(property(get = get_KeyAlgorithm))::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag KeyAlgorithm;

  constexpr ::Org::BouncyCastle::Bcpg::OnePassSignaturePacket*& __get_sigPack();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::OnePassSignaturePacket*> const& __get_sigPack() const;

  constexpr void __set_sigPack(::Org::BouncyCastle::Bcpg::OnePassSignaturePacket* value);

  constexpr int32_t& __get_signatureType();

  constexpr int32_t const& __get_signatureType() const;

  constexpr void __set_signatureType(int32_t value);

  constexpr ::Org::BouncyCastle::Crypto::ISigner*& __get_sig();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ISigner*> const& __get_sig() const;

  constexpr void __set_sig(::Org::BouncyCastle::Crypto::ISigner* value);

  constexpr uint8_t& __get_lastb();

  constexpr uint8_t const& __get_lastb() const;

  constexpr void __set_lastb(uint8_t value);

  /// @brief Method Cast addr 0x10b1654 size 0xd0 virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::OnePassSignaturePacket* Cast(::Org::BouncyCastle::Bcpg::Packet* packet);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput);

  /// @brief Method .ctor addr 0x10b1330 size 0x30 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature* New_ctor(::Org::BouncyCastle::Bcpg::OnePassSignaturePacket* sigPack);

  /// @brief Method .ctor addr 0x10b1724 size 0x38 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::OnePassSignaturePacket* sigPack);

  /// @brief Method InitVerify addr 0x10b175c size 0x274 virtual false final false
  inline void InitVerify(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey);

  /// @brief Method Update addr 0x10b19d0 size 0xcc virtual false final false
  inline void Update(uint8_t b);

  /// @brief Method doCanonicalUpdateByte addr 0x10b1a9c size 0xe0 virtual false final false
  inline void doCanonicalUpdateByte(uint8_t b);

  /// @brief Method doUpdateCRLF addr 0x10b1b7c size 0x110 virtual false final false
  inline void doUpdateCRLF();

  /// @brief Method Update addr 0x10b1c8c size 0x110 virtual false final false
  inline void Update(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method Update addr 0x10b1d9c size 0x114 virtual false final false
  inline void Update(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t off, int32_t length);

  /// @brief Method Verify addr 0x10b1eb0 size 0x158 virtual false final false
  inline bool Verify(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* pgpSig);

  /// @brief Method get_KeyId addr 0x10b2008 size 0x1c virtual false final false
  inline int64_t get_KeyId();

  /// @brief Method get_SignatureType addr 0x10b2024 size 0x1c virtual false final false
  inline int32_t get_SignatureType();

  /// @brief Method get_HashAlgorithm addr 0x10b2040 size 0x1c virtual false final false
  inline ::Org::BouncyCastle::Bcpg::HashAlgorithmTag get_HashAlgorithm();

  /// @brief Method get_KeyAlgorithm addr 0x10b205c size 0x1c virtual false final false
  inline ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag get_KeyAlgorithm();

  /// @brief Method GetEncoded addr 0x10b2078 size 0x78 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method Encode addr 0x10b20f0 size 0x2c virtual false final false
  inline void Encode(::System::IO::Stream* outStr);

  // Ctor Parameters [CppParam { name: "", ty: "PgpOnePassSignature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpOnePassSignature(PgpOnePassSignature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpOnePassSignature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpOnePassSignature(PgpOnePassSignature const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpOnePassSignature();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpOnePassSignature");
