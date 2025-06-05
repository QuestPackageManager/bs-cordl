#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpPublicKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpPublicKey)
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignature;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpUserAttributeSubpacketVector;
}
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class PublicKeyPacket;
}
namespace Org::BouncyCastle::Bcpg {
class TrustPacket;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPublicKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IList;
}
namespace System::IO {
class Stream;
}
namespace System {
struct DateTime;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey);
// Dependencies System.Object
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpPublicKey
class CORDL_TYPE PgpPublicKey : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Algorithm)) ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag Algorithm;

  __declspec(property(get = get_BitStrength)) int32_t BitStrength;

  __declspec(property(get = get_CreationTime)) ::System::DateTime CreationTime;

  __declspec(property(get = get_IsEncryptionKey)) bool IsEncryptionKey;

  __declspec(property(get = get_IsMasterKey)) bool IsMasterKey;

  __declspec(property(get = get_KeyId)) int64_t KeyId;

  /// @brief Field MasterKeyCertificationTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MasterKeyCertificationTypes, put = setStaticF_MasterKeyCertificationTypes)) ::ArrayW<int32_t, ::Array<int32_t>*> MasterKeyCertificationTypes;

  __declspec(property(get = get_PublicKeyPacket)) ::Org::BouncyCastle::Bcpg::PublicKeyPacket* PublicKeyPacket;

  __declspec(property(get = get_ValidDays)) int32_t ValidDays;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field fingerprint, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_fingerprint, put = __cordl_internal_set_fingerprint)) ::ArrayW<uint8_t, ::Array<uint8_t>*> fingerprint;

  /// @brief Field idSigs, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_idSigs, put = __cordl_internal_set_idSigs)) ::System::Collections::IList* idSigs;

  /// @brief Field idTrusts, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_idTrusts, put = __cordl_internal_set_idTrusts)) ::System::Collections::IList* idTrusts;

  /// @brief Field ids, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_ids, put = __cordl_internal_set_ids)) ::System::Collections::IList* ids;

  /// @brief Field keyId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_keyId, put = __cordl_internal_set_keyId)) int64_t keyId;

  /// @brief Field keySigs, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_keySigs, put = __cordl_internal_set_keySigs)) ::System::Collections::IList* keySigs;

  /// @brief Field keyStrength, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_keyStrength, put = __cordl_internal_set_keyStrength)) int32_t keyStrength;

  /// @brief Field publicPk, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_publicPk, put = __cordl_internal_set_publicPk)) ::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk;

  /// @brief Field subSigs, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_subSigs, put = __cordl_internal_set_subSigs)) ::System::Collections::IList* subSigs;

  /// @brief Field trustPk, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_trustPk, put = __cordl_internal_set_trustPk)) ::Org::BouncyCastle::Bcpg::TrustPacket* trustPk;

  /// @brief Method AddCert, addr 0x2536430, size 0x46c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* AddCert(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, ::System::Object* id,
                                                                          ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* certification);

  /// @brief Method AddCertification, addr 0x253708c, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* AddCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key,
                                                                                   ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* certification);

  /// @brief Method AddCertification, addr 0x25363c4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* AddCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, ::StringW id,
                                                                                   ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* certification);

  /// @brief Method AddCertification, addr 0x253689c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* AddCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key,
                                                                                   ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector* userAttributes,
                                                                                   ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* certification);

  /// @brief Method CalculateFingerprint, addr 0x25328bc, size 0x4e0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateFingerprint(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk);

  /// @brief Method Encode, addr 0x253536c, size 0xd88, virtual false, abstract: false, final false
  inline void Encode(::System::IO::Stream* outStr);

  /// @brief Method GetECKey, addr 0x25340bc, size 0x148, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* GetECKey(::StringW algorithm);

  /// @brief Method GetEncoded, addr 0x25352f4, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GetExpirationTimeFromSig, addr 0x2533740, size 0x4b4, virtual false, abstract: false, final false
  inline int64_t GetExpirationTimeFromSig(bool selfSigned, int32_t signatureType);

  /// @brief Method GetFingerprint, addr 0x253403c, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetFingerprint();

  /// @brief Method GetKey, addr 0x252c1fc, size 0x544, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* GetKey();

  /// @brief Method GetKeySignatures, addr 0x2535250, size 0x9c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* GetKeySignatures();

  /// @brief Method GetSignatures, addr 0x2534ea4, size 0x3ac, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* GetSignatures();

  /// @brief Method GetSignaturesForId, addr 0x25349f0, size 0x27c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* GetSignaturesForId(::StringW id);

  /// @brief Method GetSignaturesForUserAttribute, addr 0x2534c6c, size 0x238, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* GetSignaturesForUserAttribute(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector* userAttributes);

  /// @brief Method GetSignaturesOfType, addr 0x2533bf4, size 0x440, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* GetSignaturesOfType(int32_t signatureType);

  /// @brief Method GetTrustData, addr 0x2533674, size 0x7c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetTrustData();

  /// @brief Method GetUserAttributes, addr 0x25345ec, size 0x404, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* GetUserAttributes();

  /// @brief Method GetUserIds, addr 0x2534204, size 0x3e8, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* GetUserIds();

  /// @brief Method GetValidSeconds, addr 0x253353c, size 0x138, virtual false, abstract: false, final false
  inline int64_t GetValidSeconds();

  /// @brief Method Init, addr 0x2532e68, size 0x328, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method IsRevoked, addr 0x25360f4, size 0x2d0, virtual false, abstract: false, final false
  inline bool IsRevoked();

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey,
                                                                           ::System::DateTime time);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* New_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, ::Org::BouncyCastle::Bcpg::TrustPacket* trust,
                                                                           ::System::Collections::IList* subSigs);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* New_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk, ::System::Collections::IList* ids,
                                                                           ::System::Collections::IList* idSigs);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk, ::Org::BouncyCastle::Bcpg::TrustPacket* trustPk,
                                                                           ::System::Collections::IList* keySigs, ::System::Collections::IList* ids, ::System::Collections::IList* idTrusts,
                                                                           ::System::Collections::IList* idSigs);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk, ::Org::BouncyCastle::Bcpg::TrustPacket* trustPk,
                                                                           ::System::Collections::IList* sigs);

  /// @brief Method RemoveCert, addr 0x253696c, size 0x2dc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* RemoveCert(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, ::System::Object* id);

  /// @brief Method RemoveCert, addr 0x2536d18, size 0x308, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* RemoveCert(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, ::System::Object* id,
                                                                             ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* certification);

  /// @brief Method RemoveCertification, addr 0x2537244, size 0xd58, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* RemoveCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key,
                                                                                      ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* certification);

  /// @brief Method RemoveCertification, addr 0x2536c48, size 0x64, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* RemoveCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, ::StringW id);

  /// @brief Method RemoveCertification, addr 0x2536cac, size 0x6c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* RemoveCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, ::StringW id,
                                                                                      ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* certification);

  /// @brief Method RemoveCertification, addr 0x2536908, size 0x64, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* RemoveCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key,
                                                                                      ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector* userAttributes);

  /// @brief Method RemoveCertification, addr 0x2537020, size 0x6c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* RemoveCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key,
                                                                                      ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector* userAttributes,
                                                                                      ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* certification);

  /// @brief Method UpdateDigest, addr 0x2532d9c, size 0xcc, virtual false, abstract: false, final false
  static inline void UpdateDigest(::Org::BouncyCastle::Crypto::IDigest* d, ::Org::BouncyCastle::Math::BigInteger* b);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_fingerprint() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_fingerprint();

  constexpr ::System::Collections::IList* const& __cordl_internal_get_idSigs() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_idSigs();

  constexpr ::System::Collections::IList* const& __cordl_internal_get_idTrusts() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_idTrusts();

  constexpr ::System::Collections::IList* const& __cordl_internal_get_ids() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_ids();

  constexpr int64_t const& __cordl_internal_get_keyId() const;

  constexpr int64_t& __cordl_internal_get_keyId();

  constexpr ::System::Collections::IList* const& __cordl_internal_get_keySigs() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_keySigs();

  constexpr int32_t const& __cordl_internal_get_keyStrength() const;

  constexpr int32_t& __cordl_internal_get_keyStrength();

  constexpr ::Org::BouncyCastle::Bcpg::PublicKeyPacket* const& __cordl_internal_get_publicPk() const;

  constexpr ::Org::BouncyCastle::Bcpg::PublicKeyPacket*& __cordl_internal_get_publicPk();

  constexpr ::System::Collections::IList* const& __cordl_internal_get_subSigs() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_subSigs();

  constexpr ::Org::BouncyCastle::Bcpg::TrustPacket* const& __cordl_internal_get_trustPk() const;

  constexpr ::Org::BouncyCastle::Bcpg::TrustPacket*& __cordl_internal_get_trustPk();

  constexpr void __cordl_internal_set_fingerprint(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_idSigs(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_idTrusts(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_ids(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_keyId(int64_t value);

  constexpr void __cordl_internal_set_keySigs(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_keyStrength(int32_t value);

  constexpr void __cordl_internal_set_publicPk(::Org::BouncyCastle::Bcpg::PublicKeyPacket* value);

  constexpr void __cordl_internal_set_subSigs(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_trustPk(::Org::BouncyCastle::Bcpg::TrustPacket* value);

  /// @brief Method .ctor, addr 0x252d500, size 0x4c8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey, ::System::DateTime time);

  /// @brief Method .ctor, addr 0x252ef6c, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, ::Org::BouncyCastle::Bcpg::TrustPacket* trust, ::System::Collections::IList* subSigs);

  /// @brief Method .ctor, addr 0x252f55c, size 0x510, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey);

  /// @brief Method .ctor, addr 0x2533190, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk);

  /// @brief Method .ctor, addr 0x2533210, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk, ::System::Collections::IList* ids, ::System::Collections::IList* idSigs);

  /// @brief Method .ctor, addr 0x253337c, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk, ::Org::BouncyCastle::Bcpg::TrustPacket* trustPk, ::System::Collections::IList* keySigs, ::System::Collections::IList* ids,
                    ::System::Collections::IList* idTrusts, ::System::Collections::IList* idSigs);

  /// @brief Method .ctor, addr 0x25332c8, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk, ::Org::BouncyCastle::Bcpg::TrustPacket* trustPk, ::System::Collections::IList* sigs);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_MasterKeyCertificationTypes();

  /// @brief Method get_Algorithm, addr 0x252c1dc, size 0x20, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag get_Algorithm();

  /// @brief Method get_BitStrength, addr 0x25340b4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_BitStrength();

  /// @brief Method get_CreationTime, addr 0x252fa6c, size 0x20, virtual false, abstract: false, final false
  inline ::System::DateTime get_CreationTime();

  /// @brief Method get_IsEncryptionKey, addr 0x2529f80, size 0x50, virtual false, abstract: false, final false
  inline bool get_IsEncryptionKey();

  /// @brief Method get_IsMasterKey, addr 0x25336f0, size 0x50, virtual false, abstract: false, final false
  inline bool get_IsMasterKey();

  /// @brief Method get_KeyId, addr 0x2534034, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_KeyId();

  /// @brief Method get_PublicKeyPacket, addr 0x25352ec, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::PublicKeyPacket* get_PublicKeyPacket();

  /// @brief Method get_ValidDays, addr 0x2533468, size 0xd4, virtual false, abstract: false, final false
  inline int32_t get_ValidDays();

  /// @brief Method get_Version, addr 0x2533448, size 0x20, virtual false, abstract: false, final false
  inline int32_t get_Version();

  static inline void setStaticF_MasterKeyCertificationTypes(::ArrayW<int32_t, ::Array<int32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpPublicKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpPublicKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpPublicKey(PgpPublicKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpPublicKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpPublicKey(PgpPublicKey const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1659 };

  /// @brief Field keyId, offset: 0x10, size: 0x8, def value: None
  int64_t ___keyId;

  /// @brief Field fingerprint, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___fingerprint;

  /// @brief Field keyStrength, offset: 0x20, size: 0x4, def value: None
  int32_t ___keyStrength;

  /// @brief Field publicPk, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::PublicKeyPacket* ___publicPk;

  /// @brief Field trustPk, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::TrustPacket* ___trustPk;

  /// @brief Field keySigs, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::IList* ___keySigs;

  /// @brief Field ids, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::IList* ___ids;

  /// @brief Field idTrusts, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::IList* ___idTrusts;

  /// @brief Field idSigs, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::IList* ___idSigs;

  /// @brief Field subSigs, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::IList* ___subSigs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, ___keyId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, ___fingerprint) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, ___keyStrength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, ___publicPk) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, ___trustPk) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, ___keySigs) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, ___ids) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, ___idTrusts) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, ___idSigs) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, ___subSigs) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, 0x60>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpPublicKey");
