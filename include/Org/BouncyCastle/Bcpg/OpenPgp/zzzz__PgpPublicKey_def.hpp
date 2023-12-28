#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpPublicKey)
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Object;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Bcpg {
class PublicKeyPacket;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpUserAttributeSubpacketVector;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPublicKeyParameters;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Bcpg {
class TrustPacket;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignature;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpPublicKey
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1659))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpPublicKey*
class CORDL_TYPE PgpPublicKey : public ::System::Object {
public:
  // Declarations
  /// @brief Field keyId, offset 0x10, size 0x8
  __declspec(property(get = __get_keyId, put = __set_keyId)) int64_t keyId;

  /// @brief Field fingerprint, offset 0x18, size 0x8
  __declspec(property(get = __get_fingerprint, put = __set_fingerprint))::ArrayW<uint8_t, ::Array<uint8_t>*> fingerprint;

  /// @brief Field keyStrength, offset 0x20, size 0x4
  __declspec(property(get = __get_keyStrength, put = __set_keyStrength)) int32_t keyStrength;

  /// @brief Field publicPk, offset 0x28, size 0x8
  __declspec(property(get = __get_publicPk, put = __set_publicPk))::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk;

  /// @brief Field trustPk, offset 0x30, size 0x8
  __declspec(property(get = __get_trustPk, put = __set_trustPk))::Org::BouncyCastle::Bcpg::TrustPacket* trustPk;

  /// @brief Field keySigs, offset 0x38, size 0x8
  __declspec(property(get = __get_keySigs, put = __set_keySigs))::System::Collections::IList* keySigs;

  /// @brief Field ids, offset 0x40, size 0x8
  __declspec(property(get = __get_ids, put = __set_ids))::System::Collections::IList* ids;

  /// @brief Field idTrusts, offset 0x48, size 0x8
  __declspec(property(get = __get_idTrusts, put = __set_idTrusts))::System::Collections::IList* idTrusts;

  /// @brief Field idSigs, offset 0x50, size 0x8
  __declspec(property(get = __get_idSigs, put = __set_idSigs))::System::Collections::IList* idSigs;

  /// @brief Field subSigs, offset 0x58, size 0x8
  __declspec(property(get = __get_subSigs, put = __set_subSigs))::System::Collections::IList* subSigs;

  /// @brief Field MasterKeyCertificationTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MasterKeyCertificationTypes, put = setStaticF_MasterKeyCertificationTypes))::ArrayW<int32_t, ::Array<int32_t>*> MasterKeyCertificationTypes;

  __declspec(property(get = get_Version)) int32_t Version;

  __declspec(property(get = get_CreationTime))::System::DateTime CreationTime;

  __declspec(property(get = get_ValidDays)) int32_t ValidDays;

  __declspec(property(get = get_KeyId)) int64_t KeyId;

  __declspec(property(get = get_IsEncryptionKey)) bool IsEncryptionKey;

  __declspec(property(get = get_IsMasterKey)) bool IsMasterKey;

  __declspec(property(get = get_Algorithm))::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag Algorithm;

  __declspec(property(get = get_BitStrength)) int32_t BitStrength;

  __declspec(property(get = get_PublicKeyPacket))::Org::BouncyCastle::Bcpg::PublicKeyPacket* PublicKeyPacket;

  constexpr int64_t& __get_keyId();

  constexpr int64_t const& __get_keyId() const;

  constexpr void __set_keyId(int64_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_fingerprint();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_fingerprint() const;

  constexpr void __set_fingerprint(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_keyStrength();

  constexpr int32_t const& __get_keyStrength() const;

  constexpr void __set_keyStrength(int32_t value);

  constexpr ::Org::BouncyCastle::Bcpg::PublicKeyPacket*& __get_publicPk();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::PublicKeyPacket*> const& __get_publicPk() const;

  constexpr void __set_publicPk(::Org::BouncyCastle::Bcpg::PublicKeyPacket* value);

  constexpr ::Org::BouncyCastle::Bcpg::TrustPacket*& __get_trustPk();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::TrustPacket*> const& __get_trustPk() const;

  constexpr void __set_trustPk(::Org::BouncyCastle::Bcpg::TrustPacket* value);

  constexpr ::System::Collections::IList*& __get_keySigs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_keySigs() const;

  constexpr void __set_keySigs(::System::Collections::IList* value);

  constexpr ::System::Collections::IList*& __get_ids();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_ids() const;

  constexpr void __set_ids(::System::Collections::IList* value);

  constexpr ::System::Collections::IList*& __get_idTrusts();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_idTrusts() const;

  constexpr void __set_idTrusts(::System::Collections::IList* value);

  constexpr ::System::Collections::IList*& __get_idSigs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_idSigs() const;

  constexpr void __set_idSigs(::System::Collections::IList* value);

  constexpr ::System::Collections::IList*& __get_subSigs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_subSigs() const;

  constexpr void __set_subSigs(::System::Collections::IList* value);

  static inline void setStaticF_MasterKeyCertificationTypes(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_MasterKeyCertificationTypes();

  /// @brief Method CalculateFingerprint addr 0x10b2e38 size 0x4e8 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateFingerprint(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk);

  /// @brief Method UpdateDigest addr 0x10b3320 size 0xcc virtual false final false
  static inline void UpdateDigest(::Org::BouncyCastle::Crypto::IDigest* d, ::Org::BouncyCastle::Math::BigInteger* b);

  /// @brief Method Init addr 0x10b33ec size 0x320 virtual false final false
  inline void Init();

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey,
                                                                           ::System::DateTime time);

  /// @brief Method .ctor addr 0x10ad900 size 0x4f0 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey, ::System::DateTime time);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk);

  /// @brief Method .ctor addr 0x10b370c size 0x80 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk, ::Org::BouncyCastle::Bcpg::TrustPacket* trustPk,
                                                                           ::System::Collections::IList* sigs);

  /// @brief Method .ctor addr 0x10b3844 size 0xb4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk, ::Org::BouncyCastle::Bcpg::TrustPacket* trustPk, ::System::Collections::IList* sigs);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* New_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, ::Org::BouncyCastle::Bcpg::TrustPacket* trust,
                                                                           ::System::Collections::IList* subSigs);

  /// @brief Method .ctor addr 0x10af3fc size 0xcc virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, ::Org::BouncyCastle::Bcpg::TrustPacket* trust, ::System::Collections::IList* subSigs);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* New_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey);

  /// @brief Method .ctor addr 0x10af9f4 size 0x508 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk, ::Org::BouncyCastle::Bcpg::TrustPacket* trustPk,
                                                                           ::System::Collections::IList* keySigs, ::System::Collections::IList* ids, ::System::Collections::IList* idTrusts,
                                                                           ::System::Collections::IList* idSigs);

  /// @brief Method .ctor addr 0x10b38f8 size 0xcc virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk, ::Org::BouncyCastle::Bcpg::TrustPacket* trustPk, ::System::Collections::IList* keySigs, ::System::Collections::IList* ids,
                    ::System::Collections::IList* idTrusts, ::System::Collections::IList* idSigs);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk, ::System::Collections::IList* ids,
                                                                           ::System::Collections::IList* idSigs);

  /// @brief Method .ctor addr 0x10b378c size 0xb8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk, ::System::Collections::IList* ids, ::System::Collections::IList* idSigs);

  /// @brief Method get_Version addr 0x10b39c4 size 0x20 virtual false final false
  inline int32_t get_Version();

  /// @brief Method get_CreationTime addr 0x10afefc size 0x20 virtual false final false
  inline ::System::DateTime get_CreationTime();

  /// @brief Method get_ValidDays addr 0x10b39e4 size 0xd4 virtual false final false
  inline int32_t get_ValidDays();

  /// @brief Method GetTrustData addr 0x10b3bf0 size 0x7c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetTrustData();

  /// @brief Method GetValidSeconds addr 0x10b3ab8 size 0x138 virtual false final false
  inline int64_t GetValidSeconds();

  /// @brief Method GetExpirationTimeFromSig addr 0x10b3cbc size 0x470 virtual false final false
  inline int64_t GetExpirationTimeFromSig(bool selfSigned, int32_t signatureType);

  /// @brief Method get_KeyId addr 0x10b4570 size 0x8 virtual false final false
  inline int64_t get_KeyId();

  /// @brief Method GetFingerprint addr 0x10b4578 size 0x78 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetFingerprint();

  /// @brief Method get_IsEncryptionKey addr 0x10aa22c size 0x54 virtual false final false
  inline bool get_IsEncryptionKey();

  /// @brief Method get_IsMasterKey addr 0x10b3c6c size 0x50 virtual false final false
  inline bool get_IsMasterKey();

  /// @brief Method get_Algorithm addr 0x10ac55c size 0x20 virtual false final false
  inline ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag get_Algorithm();

  /// @brief Method get_BitStrength addr 0x10b45f0 size 0x8 virtual false final false
  inline int32_t get_BitStrength();

  /// @brief Method GetKey addr 0x10ac57c size 0x58c virtual false final false
  inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* GetKey();

  /// @brief Method GetECKey addr 0x10b45f8 size 0x14c virtual false final false
  inline ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* GetECKey(::StringW algorithm);

  /// @brief Method GetUserIds addr 0x10b4744 size 0x3ec virtual false final false
  inline ::System::Collections::IEnumerable* GetUserIds();

  /// @brief Method GetUserAttributes addr 0x10b4b30 size 0x408 virtual false final false
  inline ::System::Collections::IEnumerable* GetUserAttributes();

  /// @brief Method GetSignaturesForId addr 0x10b4f38 size 0x284 virtual false final false
  inline ::System::Collections::IEnumerable* GetSignaturesForId(::StringW id);

  /// @brief Method GetSignaturesForUserAttribute addr 0x10b51bc size 0x23c virtual false final false
  inline ::System::Collections::IEnumerable* GetSignaturesForUserAttribute(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector* userAttributes);

  /// @brief Method GetSignaturesOfType addr 0x10b412c size 0x444 virtual false final false
  inline ::System::Collections::IEnumerable* GetSignaturesOfType(int32_t signatureType);

  /// @brief Method GetSignatures addr 0x10b53f8 size 0x3a8 virtual false final false
  inline ::System::Collections::IEnumerable* GetSignatures();

  /// @brief Method GetKeySignatures addr 0x10b57a0 size 0xa4 virtual false final false
  inline ::System::Collections::IEnumerable* GetKeySignatures();

  /// @brief Method get_PublicKeyPacket addr 0x10b5844 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Bcpg::PublicKeyPacket* get_PublicKeyPacket();

  /// @brief Method GetEncoded addr 0x10b584c size 0x78 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method Encode addr 0x10b58c4 size 0xd6c virtual false final false
  inline void Encode(::System::IO::Stream* outStr);

  /// @brief Method IsRevoked addr 0x10b6630 size 0x2c8 virtual false final false
  inline bool IsRevoked();

  /// @brief Method AddCertification addr 0x10b68f8 size 0x6c virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* AddCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, ::StringW id,
                                                                                   ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* certification);

  /// @brief Method AddCertification addr 0x10b6dd8 size 0x6c virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* AddCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key,
                                                                                   ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector* userAttributes,
                                                                                   ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* certification);

  /// @brief Method AddCert addr 0x10b6964 size 0x474 virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* AddCert(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, ::System::Object* id,
                                                                          ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* certification);

  /// @brief Method RemoveCertification addr 0x10b6e44 size 0x64 virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* RemoveCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key,
                                                                                      ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector* userAttributes);

  /// @brief Method RemoveCertification addr 0x10b7184 size 0x64 virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* RemoveCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, ::StringW id);

  /// @brief Method RemoveCert addr 0x10b6ea8 size 0x2dc virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* RemoveCert(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, ::System::Object* id);

  /// @brief Method RemoveCertification addr 0x10b71e8 size 0x6c virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* RemoveCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, ::StringW id,
                                                                                      ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* certification);

  /// @brief Method RemoveCertification addr 0x10b755c size 0x6c virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* RemoveCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key,
                                                                                      ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector* userAttributes,
                                                                                      ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* certification);

  /// @brief Method RemoveCert addr 0x10b7254 size 0x308 virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* RemoveCert(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, ::System::Object* id,
                                                                             ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* certification);

  /// @brief Method AddCertification addr 0x10b75c8 size 0x1c8 virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* AddCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key,
                                                                                   ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* certification);

  /// @brief Method RemoveCertification addr 0x10b7790 size 0xd94 virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* RemoveCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key,
                                                                                      ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* certification);

  // Ctor Parameters [CppParam { name: "", ty: "PgpPublicKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpPublicKey(PgpPublicKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpPublicKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpPublicKey(PgpPublicKey const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpPublicKey();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, 0x60>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpPublicKey");
