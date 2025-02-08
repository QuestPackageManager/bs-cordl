#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpSecretKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpSecretKey)
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpKeyPair;
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
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class S2k;
}
namespace Org::BouncyCastle::Bcpg {
class SecretKeyPacket;
}
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::IO {
class Stream;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSecretKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey);
// Dependencies System.Object
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpSecretKey
class CORDL_TYPE PgpSecretKey : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsMasterKey)) bool IsMasterKey;

  __declspec(property(get = get_IsPrivateKeyEmpty)) bool IsPrivateKeyEmpty;

  __declspec(property(get = get_IsSigningKey)) bool IsSigningKey;

  __declspec(property(get = get_KeyEncryptionAlgorithm)) ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag KeyEncryptionAlgorithm;

  __declspec(property(get = get_KeyId)) int64_t KeyId;

  __declspec(property(get = get_PublicKey)) ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* PublicKey;

  __declspec(property(get = get_S2k)) ::Org::BouncyCastle::Bcpg::S2k* S2k;

  __declspec(property(get = get_S2kUsage)) int32_t S2kUsage;

  __declspec(property(get = get_UserAttributes)) ::System::Collections::IEnumerable* UserAttributes;

  __declspec(property(get = get_UserIds)) ::System::Collections::IEnumerable* UserIds;

  /// @brief Field pub, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_pub, put = __cordl_internal_set_pub)) ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pub;

  /// @brief Field secret, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_secret, put = __cordl_internal_set_secret)) ::Org::BouncyCastle::Bcpg::SecretKeyPacket* secret;

  /// @brief Method CertifiedPublicKey, addr 0x253e6c4, size 0x2a8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* CertifiedPublicKey(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                                     ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                                     ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets);

  /// @brief Method CertifiedPublicKey, addr 0x253eb60, size 0x2b4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* CertifiedPublicKey(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                                     ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                                     ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                                     ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm);

  /// @brief Method Checksum, addr 0x253dee0, size 0x268, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Checksum(bool useSha1, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t length);

  /// @brief Method CopyWithNewPassword, addr 0x2541e74, size 0x78, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* CopyWithNewPassword(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* key, ::ArrayW<char16_t, ::Array<char16_t>*> oldPassPhrase,
                                                                                      ::ArrayW<char16_t, ::Array<char16_t>*> newPassPhrase,
                                                                                      ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag newEncAlgorithm,
                                                                                      ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method CopyWithNewPasswordRaw, addr 0x2542370, size 0x10, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* CopyWithNewPasswordRaw(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* key, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawOldPassPhrase,
                                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> rawNewPassPhrase,
                                                                                         ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag newEncAlgorithm,
                                                                                         ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method CopyWithNewPasswordUtf8, addr 0x254230c, size 0x64, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* CopyWithNewPasswordUtf8(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* key, ::ArrayW<char16_t, ::Array<char16_t>*> oldPassPhrase,
                                                                                          ::ArrayW<char16_t, ::Array<char16_t>*> newPassPhrase,
                                                                                          ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag newEncAlgorithm,
                                                                                          ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method DoCopyWithNewPassword, addr 0x2541eec, size 0x420, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* DoCopyWithNewPassword(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* key, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawOldPassPhrase,
                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> rawNewPassPhrase, bool clearPassPhrase,
                                                                                        ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag newEncAlgorithm,
                                                                                        ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method DoExtractPrivateKey, addr 0x25407c8, size 0x744, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* DoExtractPrivateKey(::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase);

  /// @brief Method DoParseSecretKeyFromSExpr, addr 0x25430ec, size 0x4b4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* DoParseSecretKeyFromSExpr(::System::IO::Stream* inputStream, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase,
                                                                                            bool clearPassPhrase);

  /// @brief Method DoParseSecretKeyFromSExpr, addr 0x25428d4, size 0x338, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* DoParseSecretKeyFromSExpr(::System::IO::Stream* inputStream, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase,
                                                                                            ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey);

  /// @brief Method Encode, addr 0x25410fc, size 0xd20, virtual false, abstract: false, final false
  inline void Encode(::System::IO::Stream* outStr);

  /// @brief Method EncryptData, addr 0x2542450, size 0x344, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncryptData(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key,
                                                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t dataOff, int32_t dataLen, ::Org::BouncyCastle::Security::SecureRandom* random,
                                                                 ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> iv);

  /// @brief Method EncryptKeyDataV3, addr 0x253e1d8, size 0x2a8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncryptKeyDataV3(::ArrayW<uint8_t, ::Array<uint8_t>*> rawKeyData, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                      ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase, ::Org::BouncyCastle::Security::SecureRandom* random,
                                                                      ::ByRef<::Org::BouncyCastle::Bcpg::S2k*> s2k, ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> iv);

  /// @brief Method EncryptKeyDataV4, addr 0x253e148, size 0x90, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncryptKeyDataV4(::ArrayW<uint8_t, ::Array<uint8_t>*> rawKeyData, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                      ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase,
                                                                      bool clearPassPhrase, ::Org::BouncyCastle::Security::SecureRandom* random, ::ByRef<::Org::BouncyCastle::Bcpg::S2k*> s2k,
                                                                      ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> iv);

  /// @brief Method ExtractKeyData, addr 0x253f35c, size 0x860, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ExtractKeyData(::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase);

  /// @brief Method ExtractPrivateKey, addr 0x254079c, size 0x2c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* ExtractPrivateKey(::ArrayW<char16_t, ::Array<char16_t>*> passPhrase);

  /// @brief Method ExtractPrivateKeyRaw, addr 0x2540f38, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* ExtractPrivateKeyRaw(::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase);

  /// @brief Method ExtractPrivateKeyUtf8, addr 0x2540f0c, size 0x2c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* ExtractPrivateKeyUtf8(::ArrayW<char16_t, ::Array<char16_t>*> passPhrase);

  /// @brief Method GetDValue, addr 0x2542e84, size 0x23c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetDValue(::System::IO::Stream* inputStream, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase, ::StringW curveName);

  /// @brief Method GetECKey, addr 0x2540f40, size 0x144, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* GetECKey(::StringW algorithm, ::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method GetEncoded, addr 0x2541084, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*
  New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey,
           ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey, ::System::DateTime time, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
           ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*
  New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey,
           ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey, ::System::DateTime time, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
           ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                           ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                           ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1,
                                                                           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                           ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                           ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase, bool useSha1,
                                                                           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                           ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                           ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool useSha1,
                                                                           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                           ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                           ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                           bool utf8PassPhrase, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1,
                                                                           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                           ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                           ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase,
                                                                           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                           ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                           ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase,
                                                                           bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                           ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                           ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase,
                                                                           bool clearPassPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                           ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                           ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase,
                                                                           bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                           ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*
  New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, bool utf8PassPhrase,
           ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* New_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* privKey, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey,
                                                                           ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase,
                                                                           bool clearPassPhrase, bool useSha1, ::Org::BouncyCastle::Security::SecureRandom* rand, bool isMasterKey);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* New_ctor(::Org::BouncyCastle::Bcpg::SecretKeyPacket* secret, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pub);

  /// @brief Method ParseSecretKeyFromSExpr, addr 0x25430c0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* ParseSecretKeyFromSExpr(::System::IO::Stream* inputStream, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase);

  /// @brief Method ParseSecretKeyFromSExpr, addr 0x2542898, size 0x3c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* ParseSecretKeyFromSExpr(::System::IO::Stream* inputStream, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase,
                                                                                          ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey);

  /// @brief Method ParseSecretKeyFromSExprRaw, addr 0x25435cc, size 0x8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* ParseSecretKeyFromSExprRaw(::System::IO::Stream* inputStream, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase);

  /// @brief Method ParseSecretKeyFromSExprRaw, addr 0x2542c48, size 0xc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* ParseSecretKeyFromSExprRaw(::System::IO::Stream* inputStream, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase,
                                                                                             ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey);

  /// @brief Method ParseSecretKeyFromSExprUtf8, addr 0x25435a0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* ParseSecretKeyFromSExprUtf8(::System::IO::Stream* inputStream, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase);

  /// @brief Method ParseSecretKeyFromSExprUtf8, addr 0x2542c0c, size 0x3c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* ParseSecretKeyFromSExprUtf8(::System::IO::Stream* inputStream, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase,
                                                                                              ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey);

  /// @brief Method RecoverKeyData, addr 0x254051c, size 0x280, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> RecoverKeyData(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::StringW modeAndPadding,
                                                                    ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv,
                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> keyData, int32_t keyOff, int32_t keyLen);

  /// @brief Method ReplacePublicKey, addr 0x2542380, size 0xd0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* ReplacePublicKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* secretKey,
                                                                                   ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* publicKey);

  constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* const& __cordl_internal_get_pub() const;

  constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*& __cordl_internal_get_pub();

  constexpr ::Org::BouncyCastle::Bcpg::SecretKeyPacket* const& __cordl_internal_get_secret() const;

  constexpr ::Org::BouncyCastle::Bcpg::SecretKeyPacket*& __cordl_internal_get_secret();

  constexpr void __cordl_internal_set_pub(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* value);

  constexpr void __cordl_internal_set_secret(::Org::BouncyCastle::Bcpg::SecretKeyPacket* value);

  /// @brief Method .ctor, addr 0x253f05c, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey,
                    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey, ::System::DateTime time, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor, addr 0x253f138, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey,
                    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey, ::System::DateTime time, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor, addr 0x253e96c, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                    ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor, addr 0x253eaa4, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase, bool useSha1,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                    ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor, addr 0x253eb2c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool useSha1,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                    ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor, addr 0x253ea10, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, bool utf8PassPhrase, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                    ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor, addr 0x253e480, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor, addr 0x253e4ac, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor, addr 0x253e60c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor, addr 0x253e694, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor, addr 0x253e53c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    bool utf8PassPhrase, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor, addr 0x253d7f4, size 0x6ec, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* privKey, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey,
                    ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase, bool useSha1,
                    ::Org::BouncyCastle::Security::SecureRandom* rand, bool isMasterKey);

  /// @brief Method .ctor, addr 0x253d7c8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::SecretKeyPacket* secret, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pub);

  /// @brief Method get_IsMasterKey, addr 0x253f25c, size 0x1c, virtual false, abstract: false, final false
  inline bool get_IsMasterKey();

  /// @brief Method get_IsPrivateKeyEmpty, addr 0x253f278, size 0x34, virtual false, abstract: false, final false
  inline bool get_IsPrivateKeyEmpty();

  /// @brief Method get_IsSigningKey, addr 0x253f218, size 0x44, virtual false, abstract: false, final false
  inline bool get_IsSigningKey();

  /// @brief Method get_KeyEncryptionAlgorithm, addr 0x253f2ac, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag get_KeyEncryptionAlgorithm();

  /// @brief Method get_KeyId, addr 0x253f2c8, size 0x1c, virtual false, abstract: false, final false
  inline int64_t get_KeyId();

  /// @brief Method get_PublicKey, addr 0x253f31c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* get_PublicKey();

  /// @brief Method get_S2k, addr 0x253f300, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::S2k* get_S2k();

  /// @brief Method get_S2kUsage, addr 0x253f2e4, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_S2kUsage();

  /// @brief Method get_UserAttributes, addr 0x253f340, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* get_UserAttributes();

  /// @brief Method get_UserIds, addr 0x253f324, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* get_UserIds();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpSecretKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpSecretKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpSecretKey(PgpSecretKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpSecretKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpSecretKey(PgpSecretKey const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1663 };

  /// @brief Field secret, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::SecretKeyPacket* ___secret;

  /// @brief Field pub, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* ___pub;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey, ___secret) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey, ___pub) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpSecretKey");
