#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpSecretKey)
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignatureSubpacketVector;
}
namespace Org::BouncyCastle::Bcpg {
class SecretKeyPacket;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Bcpg {
class S2k;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPrivateKey;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKey;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpKeyPair;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSecretKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpSecretKey
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1663))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpSecretKey*
class CORDL_TYPE PgpSecretKey : public ::System::Object {
public:
  // Declarations
  /// @brief Field secret, offset 0x10, size 0x8
  __declspec(property(get = __get_secret, put = __set_secret))::Org::BouncyCastle::Bcpg::SecretKeyPacket* secret;

  /// @brief Field pub, offset 0x18, size 0x8
  __declspec(property(get = __get_pub, put = __set_pub))::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pub;

  __declspec(property(get = get_IsSigningKey)) bool IsSigningKey;

  __declspec(property(get = get_IsMasterKey)) bool IsMasterKey;

  __declspec(property(get = get_IsPrivateKeyEmpty)) bool IsPrivateKeyEmpty;

  __declspec(property(get = get_KeyEncryptionAlgorithm))::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag KeyEncryptionAlgorithm;

  __declspec(property(get = get_KeyId)) int64_t KeyId;

  __declspec(property(get = get_S2kUsage)) int32_t S2kUsage;

  __declspec(property(get = get_S2k))::Org::BouncyCastle::Bcpg::S2k* S2k;

  __declspec(property(get = get_PublicKey))::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* PublicKey;

  __declspec(property(get = get_UserIds))::System::Collections::IEnumerable* UserIds;

  __declspec(property(get = get_UserAttributes))::System::Collections::IEnumerable* UserAttributes;

  constexpr ::Org::BouncyCastle::Bcpg::SecretKeyPacket*& __get_secret();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::SecretKeyPacket*> const& __get_secret() const;

  constexpr void __set_secret(::Org::BouncyCastle::Bcpg::SecretKeyPacket* value);

  constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*& __get_pub();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*> const& __get_pub() const;

  constexpr void __set_pub(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* value);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* New_ctor(::Org::BouncyCastle::Bcpg::SecretKeyPacket* secret, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pub);

  /// @brief Method .ctor addr 0x104c534 size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::SecretKeyPacket* secret, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pub);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* New_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* privKey, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey,
                                                                           ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase,
                                                                           bool clearPassPhrase, bool useSha1, ::Org::BouncyCastle::Security::SecureRandom* rand, bool isMasterKey);

  /// @brief Method .ctor addr 0x104c560 size 0x728 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* privKey, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey,
                    ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase, bool useSha1,
                    ::Org::BouncyCastle::Security::SecureRandom* rand, bool isMasterKey);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                           ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase,
                                                                           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                           ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor addr 0x104d234 size 0x2c virtual false final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                           ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase,
                                                                           bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                           ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor addr 0x104d260 size 0x90 virtual false final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*
  New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, bool utf8PassPhrase,
           ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor addr 0x104d2f0 size 0x80 virtual false final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    bool utf8PassPhrase, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                           ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase,
                                                                           bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                           ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor addr 0x104d448 size 0x30 virtual false final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                           ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase,
                                                                           bool clearPassPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                           ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor addr 0x104d3c0 size 0x88 virtual false final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                           ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                           ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1,
                                                                           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                           ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor addr 0x104d72c size 0xa4 virtual false final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                    ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                           ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                           bool utf8PassPhrase, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1,
                                                                           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                           ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor addr 0x104d7d0 size 0x94 virtual false final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, bool utf8PassPhrase, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                    ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                           ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool useSha1,
                                                                           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                           ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor addr 0x104d8ec size 0x34 virtual false final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool useSha1,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                    ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                           ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase, bool useSha1,
                                                                           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                           ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor addr 0x104d864 size 0x88 virtual false final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase, bool useSha1,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                    ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method CertifiedPublicKey addr 0x104d478 size 0x2b4 virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* CertifiedPublicKey(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                                     ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                                     ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets);

  /// @brief Method CertifiedPublicKey addr 0x104d920 size 0x2c0 virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* CertifiedPublicKey(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                                     ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                                     ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                                     ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*
  New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey,
           ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey, ::System::DateTime time, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
           ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor addr 0x104de28 size 0xe4 virtual false final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey,
                    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey, ::System::DateTime time, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*
  New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey,
           ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey, ::System::DateTime time, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
           ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor addr 0x104df0c size 0xe8 virtual false final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey,
                    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey, ::System::DateTime time, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method get_IsSigningKey addr 0x104dff4 size 0x44 virtual false final false
  inline bool get_IsSigningKey();

  /// @brief Method get_IsMasterKey addr 0x104e038 size 0x1c virtual false final false
  inline bool get_IsMasterKey();

  /// @brief Method get_IsPrivateKeyEmpty addr 0x104e054 size 0x34 virtual false final false
  inline bool get_IsPrivateKeyEmpty();

  /// @brief Method get_KeyEncryptionAlgorithm addr 0x104e088 size 0x1c virtual false final false
  inline ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag get_KeyEncryptionAlgorithm();

  /// @brief Method get_KeyId addr 0x104e0a4 size 0x1c virtual false final false
  inline int64_t get_KeyId();

  /// @brief Method get_S2kUsage addr 0x104e0c0 size 0x1c virtual false final false
  inline int32_t get_S2kUsage();

  /// @brief Method get_S2k addr 0x104e0dc size 0x1c virtual false final false
  inline ::Org::BouncyCastle::Bcpg::S2k* get_S2k();

  /// @brief Method get_PublicKey addr 0x104e0f8 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* get_PublicKey();

  /// @brief Method get_UserIds addr 0x104e100 size 0x1c virtual false final false
  inline ::System::Collections::IEnumerable* get_UserIds();

  /// @brief Method get_UserAttributes addr 0x104e11c size 0x1c virtual false final false
  inline ::System::Collections::IEnumerable* get_UserAttributes();

  /// @brief Method ExtractKeyData addr 0x104e138 size 0x890 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ExtractKeyData(::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase);

  /// @brief Method RecoverKeyData addr 0x104f338 size 0x288 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> RecoverKeyData(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::StringW modeAndPadding,
                                                                    ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv,
                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> keyData, int32_t keyOff, int32_t keyLen);

  /// @brief Method ExtractPrivateKey addr 0x104f5c0 size 0x2c virtual false final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* ExtractPrivateKey(::ArrayW<char16_t, ::Array<char16_t>*> passPhrase);

  /// @brief Method ExtractPrivateKeyUtf8 addr 0x104fd90 size 0x2c virtual false final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* ExtractPrivateKeyUtf8(::ArrayW<char16_t, ::Array<char16_t>*> passPhrase);

  /// @brief Method ExtractPrivateKeyRaw addr 0x104fdbc size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* ExtractPrivateKeyRaw(::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase);

  /// @brief Method DoExtractPrivateKey addr 0x104f5ec size 0x7a4 virtual false final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* DoExtractPrivateKey(::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase);

  /// @brief Method GetECKey addr 0x104fdc4 size 0x148 virtual false final false
  inline ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* GetECKey(::StringW algorithm, ::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method Checksum addr 0x104cc88 size 0x26c virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Checksum(bool useSha1, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t length);

  /// @brief Method GetEncoded addr 0x104ff0c size 0x78 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method Encode addr 0x104ff84 size 0xd04 virtual false final false
  inline void Encode(::System::IO::Stream* outStr);

  /// @brief Method CopyWithNewPassword addr 0x1050ce0 size 0x78 virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* CopyWithNewPassword(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* key, ::ArrayW<char16_t, ::Array<char16_t>*> oldPassPhrase,
                                                                                      ::ArrayW<char16_t, ::Array<char16_t>*> newPassPhrase,
                                                                                      ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag newEncAlgorithm,
                                                                                      ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method CopyWithNewPasswordUtf8 addr 0x10511a8 size 0x64 virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* CopyWithNewPasswordUtf8(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* key, ::ArrayW<char16_t, ::Array<char16_t>*> oldPassPhrase,
                                                                                          ::ArrayW<char16_t, ::Array<char16_t>*> newPassPhrase,
                                                                                          ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag newEncAlgorithm,
                                                                                          ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method CopyWithNewPasswordRaw addr 0x105120c size 0x10 virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* CopyWithNewPasswordRaw(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* key, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawOldPassPhrase,
                                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> rawNewPassPhrase,
                                                                                         ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag newEncAlgorithm,
                                                                                         ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method DoCopyWithNewPassword addr 0x1050d58 size 0x450 virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* DoCopyWithNewPassword(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* key, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawOldPassPhrase,
                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> rawNewPassPhrase, bool clearPassPhrase,
                                                                                        ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag newEncAlgorithm,
                                                                                        ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method ReplacePublicKey addr 0x105121c size 0xd8 virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* ReplacePublicKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* secretKey,
                                                                                   ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* publicKey);

  /// @brief Method EncryptKeyDataV3 addr 0x104cf84 size 0x2b0 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncryptKeyDataV3(::ArrayW<uint8_t, ::Array<uint8_t>*> rawKeyData, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                      ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase, ::Org::BouncyCastle::Security::SecureRandom* random,
                                                                      ByRef<::Org::BouncyCastle::Bcpg::S2k*> s2k, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> iv);

  /// @brief Method EncryptKeyDataV4 addr 0x104cef4 size 0x90 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncryptKeyDataV4(::ArrayW<uint8_t, ::Array<uint8_t>*> rawKeyData, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                      ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase,
                                                                      bool clearPassPhrase, ::Org::BouncyCastle::Security::SecureRandom* random, ByRef<::Org::BouncyCastle::Bcpg::S2k*> s2k,
                                                                      ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> iv);

  /// @brief Method EncryptData addr 0x10512f4 size 0x350 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncryptData(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key,
                                                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t dataOff, int32_t dataLen, ::Org::BouncyCastle::Security::SecureRandom* random,
                                                                 ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> iv);

  /// @brief Method ParseSecretKeyFromSExpr addr 0x1051750 size 0x3c virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* ParseSecretKeyFromSExpr(::System::IO::Stream* inputStream, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase,
                                                                                          ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey);

  /// @brief Method ParseSecretKeyFromSExprUtf8 addr 0x1051adc size 0x3c virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* ParseSecretKeyFromSExprUtf8(::System::IO::Stream* inputStream, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase,
                                                                                              ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey);

  /// @brief Method ParseSecretKeyFromSExprRaw addr 0x1051b18 size 0xc virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* ParseSecretKeyFromSExprRaw(::System::IO::Stream* inputStream, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase,
                                                                                             ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey);

  /// @brief Method DoParseSecretKeyFromSExpr addr 0x105178c size 0x350 virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* DoParseSecretKeyFromSExpr(::System::IO::Stream* inputStream, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase,
                                                                                            ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey);

  /// @brief Method ParseSecretKeyFromSExpr addr 0x1051f9c size 0x2c virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* ParseSecretKeyFromSExpr(::System::IO::Stream* inputStream, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase);

  /// @brief Method ParseSecretKeyFromSExprUtf8 addr 0x105249c size 0x2c virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* ParseSecretKeyFromSExprUtf8(::System::IO::Stream* inputStream, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase);

  /// @brief Method ParseSecretKeyFromSExprRaw addr 0x10524c8 size 0x8 virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* ParseSecretKeyFromSExprRaw(::System::IO::Stream* inputStream, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase);

  /// @brief Method DoParseSecretKeyFromSExpr addr 0x1051fc8 size 0x4d4 virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* DoParseSecretKeyFromSExpr(::System::IO::Stream* inputStream, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase,
                                                                                            bool clearPassPhrase);

  /// @brief Method GetDValue addr 0x1051d5c size 0x240 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetDValue(::System::IO::Stream* inputStream, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase, ::StringW curveName);

  // Ctor Parameters [CppParam { name: "", ty: "PgpSecretKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpSecretKey(PgpSecretKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpSecretKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpSecretKey(PgpSecretKey const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpSecretKey();

public:
  /// @brief Field secret, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::SecretKeyPacket* ___secret;

  /// @brief Field pub, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* ___pub;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey, ___secret) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey, ___pub) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpSecretKey");
