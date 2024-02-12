#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpSignatureGenerator)
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpOnePassSignature;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPrivateKey;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKey;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignatureSubpacketVector;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignature;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpUserAttributeSubpacketVector;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
struct SignatureSubpacketTag;
}
namespace Org::BouncyCastle::Bcpg {
class SignatureSubpacket;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignatureGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpSignatureGenerator
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(572)), TypeDefinitionIndex(TypeDefinitionIndex(580)), TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1667))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpSignatureGenerator*
class CORDL_TYPE PgpSignatureGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field keyAlgorithm, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_keyAlgorithm, put = __cordl_internal_set_keyAlgorithm))::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm;

  /// @brief Field hashAlgorithm, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_hashAlgorithm, put = __cordl_internal_set_hashAlgorithm))::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm;

  /// @brief Field privKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_privKey, put = __cordl_internal_set_privKey))::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* privKey;

  /// @brief Field sig, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_sig, put = __cordl_internal_set_sig))::Org::BouncyCastle::Crypto::ISigner* sig;

  /// @brief Field dig, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_dig, put = __cordl_internal_set_dig))::Org::BouncyCastle::Crypto::IDigest* dig;

  /// @brief Field signatureType, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_signatureType, put = __cordl_internal_set_signatureType)) int32_t signatureType;

  /// @brief Field lastb, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_lastb, put = __cordl_internal_set_lastb)) uint8_t lastb;

  /// @brief Field unhashed, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_unhashed,
                      put = __cordl_internal_set_unhashed))::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> unhashed;

  /// @brief Field hashed, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_hashed,
                      put = __cordl_internal_set_hashed))::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> hashed;

  /// @brief Field EmptySignatureSubpackets, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_EmptySignatureSubpackets,
               put = setStaticF_EmptySignatureSubpackets))::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> EmptySignatureSubpackets;

  constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag& __cordl_internal_get_keyAlgorithm();

  constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const& __cordl_internal_get_keyAlgorithm() const;

  constexpr void __cordl_internal_set_keyAlgorithm(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag value);

  constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag& __cordl_internal_get_hashAlgorithm();

  constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const& __cordl_internal_get_hashAlgorithm() const;

  constexpr void __cordl_internal_set_hashAlgorithm(::Org::BouncyCastle::Bcpg::HashAlgorithmTag value);

  constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*& __cordl_internal_get_privKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*> const& __cordl_internal_get_privKey() const;

  constexpr void __cordl_internal_set_privKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* value);

  constexpr ::Org::BouncyCastle::Crypto::ISigner*& __cordl_internal_get_sig();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ISigner*> const& __cordl_internal_get_sig() const;

  constexpr void __cordl_internal_set_sig(::Org::BouncyCastle::Crypto::ISigner* value);

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_dig();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __cordl_internal_get_dig() const;

  constexpr void __cordl_internal_set_dig(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr int32_t& __cordl_internal_get_signatureType();

  constexpr int32_t const& __cordl_internal_get_signatureType() const;

  constexpr void __cordl_internal_set_signatureType(int32_t value);

  constexpr uint8_t& __cordl_internal_get_lastb();

  constexpr uint8_t const& __cordl_internal_get_lastb() const;

  constexpr void __cordl_internal_set_lastb(uint8_t value);

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*>& __cordl_internal_get_unhashed();

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> const& __cordl_internal_get_unhashed() const;

  constexpr void __cordl_internal_set_unhashed(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> value);

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*>& __cordl_internal_get_hashed();

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> const& __cordl_internal_get_hashed() const;

  constexpr void __cordl_internal_set_hashed(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> value);

  static inline void setStaticF_EmptySignatureSubpackets(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> value);

  static inline ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> getStaticF_EmptySignatureSubpackets();

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator* New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm,
                                                                                    ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm);

  /// @brief Method .ctor, addr 0x10eccc0, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm);

  /// @brief Method InitSign, addr 0x10ecdcc, size 0x8, virtual false, abstract: false, final false
  inline void InitSign(int32_t sigType, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* key);

  /// @brief Method InitSign, addr 0x10f77d8, size 0x268, virtual false, abstract: false, final false
  inline void InitSign(int32_t sigType, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* key, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method Update, addr 0x10f7a40, size 0x14, virtual false, abstract: false, final false
  inline void Update(uint8_t b);

  /// @brief Method doCanonicalUpdateByte, addr 0x10f7a54, size 0x64, virtual false, abstract: false, final false
  inline void doCanonicalUpdateByte(uint8_t b);

  /// @brief Method doUpdateCRLF, addr 0x10f7be0, size 0x20, virtual false, abstract: false, final false
  inline void doUpdateCRLF();

  /// @brief Method doUpdateByte, addr 0x10f7ab8, size 0x128, virtual false, abstract: false, final false
  inline void doUpdateByte(uint8_t b);

  /// @brief Method Update, addr 0x10f7c00, size 0x1c, virtual false, abstract: false, final false
  inline void Update(::ArrayW<uint8_t, ::Array<uint8_t>*> b);

  /// @brief Method Update, addr 0x10f7c1c, size 0x198, virtual false, abstract: false, final false
  inline void Update(::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t off, int32_t len);

  /// @brief Method SetHashedSubpackets, addr 0x10ecdd4, size 0x78, virtual false, abstract: false, final false
  inline void SetHashedSubpackets(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets);

  /// @brief Method SetUnhashedSubpackets, addr 0x10ece4c, size 0x78, virtual false, abstract: false, final false
  inline void SetUnhashedSubpackets(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets);

  /// @brief Method GenerateOnePassVersion, addr 0x10f7db4, size 0xcc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature* GenerateOnePassVersion(bool isNested);

  /// @brief Method Generate, addr 0x10f7e80, size 0x814, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* Generate();

  /// @brief Method GenerateCertification, addr 0x10ecec4, size 0x44, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* GenerateCertification(::StringW id, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey);

  /// @brief Method GenerateCertification, addr 0x10f8c80, size 0x1dc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* GenerateCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector* userAttributes,
                                                                                 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey);

  /// @brief Method GenerateCertification, addr 0x10f8e5c, size 0x30, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* GenerateCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* masterKey, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey);

  /// @brief Method GenerateCertification, addr 0x10f8e8c, size 0x18, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* GenerateCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey);

  /// @brief Method GetEncodedPublicKey, addr 0x10f8ea4, size 0xfc, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncodedPublicKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey);

  /// @brief Method packetPresent, addr 0x10f8694, size 0x50, virtual false, abstract: false, final false
  inline bool packetPresent(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> packets,
                            ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type);

  /// @brief Method insertSubpacket, addr 0x10f86e4, size 0xb0, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*>
  insertSubpacket(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> packets, ::Org::BouncyCastle::Bcpg::SignatureSubpacket* subpacket);

  /// @brief Method UpdateWithIdData, addr 0x10f8bb0, size 0xd0, virtual false, abstract: false, final false
  inline void UpdateWithIdData(int32_t header, ::ArrayW<uint8_t, ::Array<uint8_t>*> idBytes);

  /// @brief Method UpdateWithPublicKey, addr 0x10f8af0, size 0xc0, virtual false, abstract: false, final false
  inline void UpdateWithPublicKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key);

  // Ctor Parameters [CppParam { name: "", ty: "PgpSignatureGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpSignatureGenerator(PgpSignatureGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpSignatureGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpSignatureGenerator(PgpSignatureGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpSignatureGenerator();

public:
  /// @brief Field keyAlgorithm, offset: 0x10, size: 0x4, def value: None
  ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag ___keyAlgorithm;

  /// @brief Field hashAlgorithm, offset: 0x14, size: 0x4, def value: None
  ::Org::BouncyCastle::Bcpg::HashAlgorithmTag ___hashAlgorithm;

  /// @brief Field privKey, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* ___privKey;

  /// @brief Field sig, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::ISigner* ___sig;

  /// @brief Field dig, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___dig;

  /// @brief Field signatureType, offset: 0x30, size: 0x4, def value: None
  int32_t ___signatureType;

  /// @brief Field lastb, offset: 0x34, size: 0x1, def value: None
  uint8_t ___lastb;

  /// @brief Field unhashed, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> ___unhashed;

  /// @brief Field hashed, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> ___hashed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator, 0x48>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator, ___keyAlgorithm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator, ___hashAlgorithm) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator, ___privKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator, ___sig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator, ___dig) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator, ___signatureType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator, ___lastb) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator, ___unhashed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator, ___hashed) == 0x40, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpSignatureGenerator");
