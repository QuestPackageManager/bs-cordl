#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsUtilities)
namespace Org::BouncyCastle::Asn1::X509 {
class X509CertificateStructure;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ProtocolVersion;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SessionParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SignatureAndHashAlgorithm;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsHandshakeHash;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSession;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSignerCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSigner;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IList;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Sockets {
class SocketException;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsUtilities);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsUtilities
class CORDL_TYPE TlsUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field EmptyBytes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EmptyBytes, put = setStaticF_EmptyBytes)) ::ArrayW<uint8_t, ::Array<uint8_t>*> EmptyBytes;

  /// @brief Field EmptyInts, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EmptyInts, put = setStaticF_EmptyInts)) ::ArrayW<int32_t, ::Array<int32_t>*> EmptyInts;

  /// @brief Field EmptyLongs, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EmptyLongs, put = setStaticF_EmptyLongs)) ::ArrayW<int64_t, ::Array<int64_t>*> EmptyLongs;

  /// @brief Field EmptyShorts, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EmptyShorts, put = setStaticF_EmptyShorts)) ::ArrayW<int16_t, ::Array<int16_t>*> EmptyShorts;

  /// @brief Field SSL3_CONST, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SSL3_CONST, put = setStaticF_SSL3_CONST)) ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> SSL3_CONST;

  /// @brief Field SSL_CLIENT, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SSL_CLIENT, put = setStaticF_SSL_CLIENT)) ::ArrayW<uint8_t, ::Array<uint8_t>*> SSL_CLIENT;

  /// @brief Field SSL_SERVER, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SSL_SERVER, put = setStaticF_SSL_SERVER)) ::ArrayW<uint8_t, ::Array<uint8_t>*> SSL_SERVER;

  /// @brief Method AddSignatureAlgorithmsExtension, addr 0x243d630, size 0x120, virtual false, abstract: false, final false
  static inline void AddSignatureAlgorithmsExtension(::System::Collections::IDictionary* extensions, ::System::Collections::IList* supportedSignatureAlgorithms);

  /// @brief Method CalculateKeyBlock, addr 0x24304dc, size 0x1a0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateKeyBlock(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, int32_t size);

  /// @brief Method CalculateKeyBlock_Ssl, addr 0x243e9b8, size 0x538, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateKeyBlock_Ssl(::ArrayW<uint8_t, ::Array<uint8_t>*> master_secret, ::ArrayW<uint8_t, ::Array<uint8_t>*> random, int32_t size);

  /// @brief Method CalculateMasterSecret, addr 0x243eef0, size 0x214, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateMasterSecret(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::ArrayW<uint8_t, ::Array<uint8_t>*> pre_master_secret);

  /// @brief Method CalculateMasterSecret_Ssl, addr 0x243f104, size 0x4f8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateMasterSecret_Ssl(::ArrayW<uint8_t, ::Array<uint8_t>*> pre_master_secret, ::ArrayW<uint8_t, ::Array<uint8_t>*> random);

  /// @brief Method CalculateVerifyData, addr 0x243f5fc, size 0x158, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateVerifyData(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::StringW asciiLabel,
                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> handshakeHash);

  /// @brief Method CheckUint16, addr 0x242efe0, size 0x8c, virtual false, abstract: false, final false
  static inline void CheckUint16(int32_t i);

  /// @brief Method CheckUint16, addr 0x243b6a0, size 0x8c, virtual false, abstract: false, final false
  static inline void CheckUint16(int64_t i);

  /// @brief Method CheckUint24, addr 0x243b738, size 0x8c, virtual false, abstract: false, final false
  static inline void CheckUint24(int32_t i);

  /// @brief Method CheckUint24, addr 0x243b7d4, size 0x8c, virtual false, abstract: false, final false
  static inline void CheckUint24(int64_t i);

  /// @brief Method CheckUint32, addr 0x243b870, size 0x8c, virtual false, abstract: false, final false
  static inline void CheckUint32(int64_t i);

  /// @brief Method CheckUint48, addr 0x243b90c, size 0x8c, virtual false, abstract: false, final false
  static inline void CheckUint48(int64_t i);

  /// @brief Method CheckUint64, addr 0x243b9a8, size 0x54, virtual false, abstract: false, final false
  static inline void CheckUint64(int64_t i);

  /// @brief Method CheckUint8, addr 0x243b564, size 0x8c, virtual false, abstract: false, final false
  static inline void CheckUint8(int32_t i);

  /// @brief Method CheckUint8, addr 0x243b5fc, size 0x8c, virtual false, abstract: false, final false
  static inline void CheckUint8(int64_t i);

  /// @brief Method CloneHash, addr 0x243f754, size 0x314, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IDigest* CloneHash(uint8_t hashAlgorithm, ::Org::BouncyCastle::Crypto::IDigest* hash);

  /// @brief Method ClonePrfHash, addr 0x243fb18, size 0xdc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IDigest* ClonePrfHash(int32_t prfAlgorithm, ::Org::BouncyCastle::Crypto::IDigest* hash);

  /// @brief Method Concat, addr 0x243e354, size 0xa4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Concat(::ArrayW<uint8_t, ::Array<uint8_t>*> a, ::ArrayW<uint8_t, ::Array<uint8_t>*> b);

  /// @brief Method CreateHash, addr 0x242d164, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IDigest* CreateHash(uint8_t hashAlgorithm);

  /// @brief Method CreateHash, addr 0x242c998, size 0xa8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IDigest* CreateHash(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* signatureAndHashAlgorithm);

  /// @brief Method CreatePrfHash, addr 0x243e5b0, size 0x94, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IDigest* CreatePrfHash(int32_t prfAlgorithm);

  /// @brief Method CreateSignatureAlgorithmsExtension, addr 0x243d750, size 0xa8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateSignatureAlgorithmsExtension(::System::Collections::IList* supportedSignatureAlgorithms);

  /// @brief Method CreateTlsSigner, addr 0x2436138, size 0x14c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::TlsSigner* CreateTlsSigner(uint8_t clientCertificateType);

  /// @brief Method DecodeUint8, addr 0x242f254, size 0xd8, virtual false, abstract: false, final false
  static inline uint8_t DecodeUint8(::ArrayW<uint8_t, ::Array<uint8_t>*> buf);

  /// @brief Method DecodeUint8ArrayWithUint8Length, addr 0x242f0f0, size 0x164, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DecodeUint8ArrayWithUint8Length(::ArrayW<uint8_t, ::Array<uint8_t>*> buf);

  /// @brief Method EncodeOpaque8, addr 0x2439e5c, size 0x90, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeOpaque8(::ArrayW<uint8_t, ::Array<uint8_t>*> buf);

  /// @brief Method EncodeSupportedSignatureAlgorithms, addr 0x243d968, size 0x5cc, virtual false, abstract: false, final false
  static inline void EncodeSupportedSignatureAlgorithms(::System::Collections::IList* supportedSignatureAlgorithms, bool allowAnonymous, ::System::IO::Stream* output);

  /// @brief Method EncodeUint16ArrayWithUint16Length, addr 0x243c444, size 0x9c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeUint16ArrayWithUint16Length(::ArrayW<int32_t, ::Array<int32_t>*> uints);

  /// @brief Method EncodeUint8, addr 0x242eef8, size 0x90, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeUint8(uint8_t val);

  /// @brief Method EncodeUint8ArrayWithUint8Length, addr 0x242ee60, size 0x98, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeUint8ArrayWithUint8Length(::ArrayW<uint8_t, ::Array<uint8_t>*> uints);

  /// @brief Method GenSsl3Const, addr 0x243fbf4, size 0xf0, virtual false, abstract: false, final false
  static inline ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> GenSsl3Const();

  /// @brief Method GetAllSignatureAlgorithms, addr 0x243ce58, size 0x27c, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* GetAllSignatureAlgorithms();

  /// @brief Method GetCipherType, addr 0x243fce4, size 0xb4, virtual false, abstract: false, final false
  static inline int32_t GetCipherType(int32_t ciphersuite);

  /// @brief Method GetClientCertificateType, addr 0x243530c, size 0x334, virtual false, abstract: false, final false
  static inline int16_t GetClientCertificateType(::Org::BouncyCastle::Crypto::Tls::Certificate* clientCertificate, ::Org::BouncyCastle::Crypto::Tls::Certificate* serverCertificate);

  /// @brief Method GetDefaultDssSignatureAlgorithms, addr 0x243d0d4, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* GetDefaultDssSignatureAlgorithms();

  /// @brief Method GetDefaultECDsaSignatureAlgorithms, addr 0x243d234, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* GetDefaultECDsaSignatureAlgorithms();

  /// @brief Method GetDefaultRsaSignatureAlgorithms, addr 0x243d2b4, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* GetDefaultRsaSignatureAlgorithms();

  /// @brief Method GetDefaultSupportedSignatureAlgorithms, addr 0x243d334, size 0x214, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* GetDefaultSupportedSignatureAlgorithms();

  /// @brief Method GetEncryptionAlgorithm, addr 0x243fd98, size 0x11c, virtual false, abstract: false, final false
  static inline int32_t GetEncryptionAlgorithm(int32_t ciphersuite);

  /// @brief Method GetExtensionData, addr 0x242e3f4, size 0x114, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetExtensionData(::System::Collections::IDictionary* extensions, int32_t extensionType);

  /// @brief Method GetHashAlgorithmForPrfAlgorithm, addr 0x243fa68, size 0xb0, virtual false, abstract: false, final false
  static inline uint8_t GetHashAlgorithmForPrfAlgorithm(int32_t prfAlgorithm);

  /// @brief Method GetKeyExchangeAlgorithm, addr 0x243feb4, size 0x138, virtual false, abstract: false, final false
  static inline int32_t GetKeyExchangeAlgorithm(int32_t ciphersuite);

  /// @brief Method GetMacAlgorithm, addr 0x243ffec, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t GetMacAlgorithm(int32_t ciphersuite);

  /// @brief Method GetMinimumVersion, addr 0x24400a8, size 0x110, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* GetMinimumVersion(int32_t ciphersuite);

  /// @brief Method GetOidForHashAlgorithm, addr 0x24333bc, size 0x1b0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetOidForHashAlgorithm(uint8_t hashAlgorithm);

  /// @brief Method GetSignatureAlgorithmsExtension, addr 0x243d7f8, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* GetSignatureAlgorithmsExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method GetSignatureAndHashAlgorithm, addr 0x242c878, size 0x120, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* GetSignatureAndHashAlgorithm(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                                                          ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* signerCredentials);

  /// @brief Method GetUsableSignatureAlgorithms, addr 0x24405ac, size 0x558, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* GetUsableSignatureAlgorithms(::System::Collections::IList* sigHashAlgs);

  /// @brief Method HMacHash, addr 0x243e644, size 0x2dc, virtual false, abstract: false, final false
  static inline void HMacHash(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t, ::Array<uint8_t>*> secret, ::ArrayW<uint8_t, ::Array<uint8_t>*> seed,
                              ::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  /// @brief Method HasExpectedEmptyExtensionData, addr 0x2437c1c, size 0xb4, virtual false, abstract: false, final false
  static inline bool HasExpectedEmptyExtensionData(::System::Collections::IDictionary* extensions, int32_t extensionType, uint8_t alertDescription);

  /// @brief Method HasSigningCapability, addr 0x2437f04, size 0x24, virtual false, abstract: false, final false
  static inline bool HasSigningCapability(uint8_t clientCertificateType);

  /// @brief Method ImportSession, addr 0x243d548, size 0x68, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::TlsSession* ImportSession(::ArrayW<uint8_t, ::Array<uint8_t>*> sessionID, ::Org::BouncyCastle::Crypto::Tls::SessionParameters* sessionParameters);

  /// @brief Method IsAeadCipherSuite, addr 0x24401b8, size 0x60, virtual false, abstract: false, final false
  static inline bool IsAeadCipherSuite(int32_t ciphersuite);

  /// @brief Method IsBlockCipherSuite, addr 0x2440218, size 0x60, virtual false, abstract: false, final false
  static inline bool IsBlockCipherSuite(int32_t ciphersuite);

  /// @brief Method IsSignatureAlgorithmsExtensionAllowed, addr 0x243d5b0, size 0x80, virtual false, abstract: false, final false
  static inline bool IsSignatureAlgorithmsExtensionAllowed(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* clientVersion);

  /// @brief Method IsSsl, addr 0x242f780, size 0xac, virtual false, abstract: false, final false
  static inline bool IsSsl(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  /// @brief Method IsStreamCipherSuite, addr 0x2440278, size 0x60, virtual false, abstract: false, final false
  static inline bool IsStreamCipherSuite(int32_t ciphersuite);

  /// @brief Method IsTimeout, addr 0x2440b04, size 0x2c, virtual false, abstract: false, final false
  static inline bool IsTimeout(::System::Net::Sockets::SocketException* e);

  /// @brief Method IsTlsV11, addr 0x243ba84, size 0xd4, virtual false, abstract: false, final false
  static inline bool IsTlsV11(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  /// @brief Method IsTlsV11, addr 0x243ba04, size 0x80, virtual false, abstract: false, final false
  static inline bool IsTlsV11(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* version);

  /// @brief Method IsTlsV12, addr 0x24332e8, size 0xd4, virtual false, abstract: false, final false
  static inline bool IsTlsV12(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  /// @brief Method IsTlsV12, addr 0x243bb58, size 0x80, virtual false, abstract: false, final false
  static inline bool IsTlsV12(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* version);

  /// @brief Method IsValidCipherSuiteForSignatureAlgorithms, addr 0x24402d8, size 0x2d4, virtual false, abstract: false, final false
  static inline bool IsValidCipherSuiteForSignatureAlgorithms(int32_t cipherSuite, ::System::Collections::IList* sigAlgs);

  /// @brief Method IsValidCipherSuiteForVersion, addr 0x2437b14, size 0x8c, virtual false, abstract: false, final false
  static inline bool IsValidCipherSuiteForVersion(int32_t cipherSuite, ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* serverVersion);

  /// @brief Method IsValidUint16, addr 0x243b694, size 0xc, virtual false, abstract: false, final false
  static inline bool IsValidUint16(int32_t i);

  /// @brief Method IsValidUint16, addr 0x243b72c, size 0xc, virtual false, abstract: false, final false
  static inline bool IsValidUint16(int64_t i);

  /// @brief Method IsValidUint24, addr 0x243b7c4, size 0x10, virtual false, abstract: false, final false
  static inline bool IsValidUint24(int32_t i);

  /// @brief Method IsValidUint24, addr 0x243b860, size 0x10, virtual false, abstract: false, final false
  static inline bool IsValidUint24(int64_t i);

  /// @brief Method IsValidUint32, addr 0x243b8fc, size 0x10, virtual false, abstract: false, final false
  static inline bool IsValidUint32(int64_t i);

  /// @brief Method IsValidUint48, addr 0x243b998, size 0x10, virtual false, abstract: false, final false
  static inline bool IsValidUint48(int64_t i);

  /// @brief Method IsValidUint64, addr 0x243b9fc, size 0x8, virtual false, abstract: false, final false
  static inline bool IsValidUint64(int64_t i);

  /// @brief Method IsValidUint8, addr 0x243b5f0, size 0xc, virtual false, abstract: false, final false
  static inline bool IsValidUint8(int32_t i);

  /// @brief Method IsValidUint8, addr 0x243b688, size 0xc, virtual false, abstract: false, final false
  static inline bool IsValidUint8(int64_t i);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsUtilities* New_ctor();

  /// @brief Method PRF, addr 0x243e0f8, size 0x25c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> PRF(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::ArrayW<uint8_t, ::Array<uint8_t>*> secret, ::StringW asciiLabel,
                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> seed, int32_t size);

  /// @brief Method PRF_legacy, addr 0x243e920, size 0x98, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> PRF_legacy(::ArrayW<uint8_t, ::Array<uint8_t>*> secret, ::StringW asciiLabel, ::ArrayW<uint8_t, ::Array<uint8_t>*> seed, int32_t size);

  /// @brief Method PRF_legacy, addr 0x243e3f8, size 0x1b8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> PRF_legacy(::ArrayW<uint8_t, ::Array<uint8_t>*> secret, ::ArrayW<uint8_t, ::Array<uint8_t>*> label, ::ArrayW<uint8_t, ::Array<uint8_t>*> labelSeed,
                                                                int32_t size);

  /// @brief Method ParseSupportedSignatureAlgorithms, addr 0x243df34, size 0x1c4, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* ParseSupportedSignatureAlgorithms(bool allowAnonymous, ::System::IO::Stream* input);

  /// @brief Method ReadAllOrNothing, addr 0x243c844, size 0xe8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadAllOrNothing(int32_t length, ::System::IO::Stream* input);

  /// @brief Method ReadAsn1Object, addr 0x243cb50, size 0x118, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Object* ReadAsn1Object(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method ReadDerObject, addr 0x243cc68, size 0xfc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Object* ReadDerObject(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method ReadFully, addr 0x2436998, size 0xdc, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadFully(int32_t length, ::System::IO::Stream* input);

  /// @brief Method ReadFully, addr 0x243c92c, size 0x70, virtual false, abstract: false, final false
  static inline void ReadFully(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, ::System::IO::Stream* input);

  /// @brief Method ReadOpaque16, addr 0x2431484, size 0x8c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadOpaque16(::System::IO::Stream* input);

  /// @brief Method ReadOpaque24, addr 0x243c99c, size 0x5c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadOpaque24(::System::IO::Stream* input);

  /// @brief Method ReadOpaque8, addr 0x242bd60, size 0x8c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadOpaque8(::System::IO::Stream* input);

  /// @brief Method ReadSignatureAlgorithmsExtension, addr 0x243d87c, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* ReadSignatureAlgorithmsExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method ReadUint16, addr 0x243c4e0, size 0x40, virtual false, abstract: false, final false
  static inline int32_t ReadUint16(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method ReadUint16, addr 0x2436a74, size 0x84, virtual false, abstract: false, final false
  static inline int32_t ReadUint16(::System::IO::Stream* input);

  /// @brief Method ReadUint16Array, addr 0x2436af8, size 0xd0, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> ReadUint16Array(int32_t count, ::System::IO::Stream* input);

  /// @brief Method ReadUint24, addr 0x243c5c4, size 0x58, virtual false, abstract: false, final false
  static inline int32_t ReadUint24(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method ReadUint24, addr 0x243c520, size 0xa4, virtual false, abstract: false, final false
  static inline int32_t ReadUint24(::System::IO::Stream* input);

  /// @brief Method ReadUint32, addr 0x243c6e4, size 0x6c, virtual false, abstract: false, final false
  static inline int64_t ReadUint32(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method ReadUint32, addr 0x243c61c, size 0xc8, virtual false, abstract: false, final false
  static inline int64_t ReadUint32(::System::IO::Stream* input);

  /// @brief Method ReadUint48, addr 0x243c7c0, size 0x84, virtual false, abstract: false, final false
  static inline int64_t ReadUint48(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method ReadUint48, addr 0x243c750, size 0x70, virtual false, abstract: false, final false
  static inline int64_t ReadUint48(::System::IO::Stream* input);

  /// @brief Method ReadUint8, addr 0x243c418, size 0x2c, virtual false, abstract: false, final false
  static inline uint8_t ReadUint8(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method ReadUint8, addr 0x2436bc8, size 0x5c, virtual false, abstract: false, final false
  static inline uint8_t ReadUint8(::System::IO::Stream* input);

  /// @brief Method ReadUint8Array, addr 0x2436c24, size 0xd0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadUint8Array(int32_t count, ::System::IO::Stream* input);

  /// @brief Method ReadVersion, addr 0x243c9f8, size 0x94, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ReadVersion(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method ReadVersion, addr 0x24368cc, size 0xcc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ReadVersion(::System::IO::Stream* input);

  /// @brief Method ReadVersionRaw, addr 0x243ca8c, size 0x40, virtual false, abstract: false, final false
  static inline int32_t ReadVersionRaw(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method ReadVersionRaw, addr 0x243cacc, size 0x84, virtual false, abstract: false, final false
  static inline int32_t ReadVersionRaw(::System::IO::Stream* input);

  /// @brief Method TrackHashAlgorithms, addr 0x2434b0c, size 0x3d0, virtual false, abstract: false, final false
  static inline void TrackHashAlgorithms(::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* handshakeHash, ::System::Collections::IList* supportedSignatureAlgorithms);

  /// @brief Method ValidateKeyUsage, addr 0x242b9c8, size 0xf0, virtual false, abstract: false, final false
  static inline void ValidateKeyUsage(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* c, int32_t keyUsageBits);

  /// @brief Method VectorOfOne, addr 0x243d154, size 0xe0, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* VectorOfOne(::System::Object* obj);

  /// @brief Method VerifySupportedSignatureAlgorithm, addr 0x2435bb0, size 0x588, virtual false, abstract: false, final false
  static inline void VerifySupportedSignatureAlgorithm(::System::Collections::IList* supportedSignatureAlgorithms, ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* signatureAlgorithm);

  /// @brief Method WriteGmtUnixTime, addr 0x243cd64, size 0xf4, virtual false, abstract: false, final false
  static inline void WriteGmtUnixTime(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteOpaque16, addr 0x2431000, size 0x88, virtual false, abstract: false, final false
  static inline void WriteOpaque16(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, ::System::IO::Stream* output);

  /// @brief Method WriteOpaque24, addr 0x243bf88, size 0x88, virtual false, abstract: false, final false
  static inline void WriteOpaque24(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, ::System::IO::Stream* output);

  /// @brief Method WriteOpaque8, addr 0x2437a80, size 0x94, virtual false, abstract: false, final false
  static inline void WriteOpaque8(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, ::System::IO::Stream* output);

  /// @brief Method WriteUint16, addr 0x242fcbc, size 0x48, virtual false, abstract: false, final false
  static inline void WriteUint16(int32_t i, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteUint16, addr 0x2437ba0, size 0x50, virtual false, abstract: false, final false
  static inline void WriteUint16(int32_t i, ::System::IO::Stream* output);

  /// @brief Method WriteUint16Array, addr 0x243c2c8, size 0xbc, virtual false, abstract: false, final false
  static inline void WriteUint16Array(::ArrayW<int32_t, ::Array<int32_t>*> uints, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteUint16Array, addr 0x243c218, size 0xb0, virtual false, abstract: false, final false
  static inline void WriteUint16Array(::ArrayW<int32_t, ::Array<int32_t>*> uints, ::System::IO::Stream* output);

  /// @brief Method WriteUint16ArrayWithUint16Length, addr 0x243c384, size 0x94, virtual false, abstract: false, final false
  static inline void WriteUint16ArrayWithUint16Length(::ArrayW<int32_t, ::Array<int32_t>*> uints, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteUint16ArrayWithUint16Length, addr 0x243a2f0, size 0x80, virtual false, abstract: false, final false
  static inline void WriteUint16ArrayWithUint16Length(::ArrayW<int32_t, ::Array<int32_t>*> uints, ::System::IO::Stream* output);

  /// @brief Method WriteUint24, addr 0x2437d98, size 0x64, virtual false, abstract: false, final false
  static inline void WriteUint24(int32_t i, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteUint24, addr 0x243bbd8, size 0x68, virtual false, abstract: false, final false
  static inline void WriteUint24(int32_t i, ::System::IO::Stream* output);

  /// @brief Method WriteUint32, addr 0x243bcc0, size 0x80, virtual false, abstract: false, final false
  static inline void WriteUint32(int64_t i, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteUint32, addr 0x243bc40, size 0x80, virtual false, abstract: false, final false
  static inline void WriteUint32(int64_t i, ::System::IO::Stream* output);

  /// @brief Method WriteUint48, addr 0x243bdf0, size 0xb8, virtual false, abstract: false, final false
  static inline void WriteUint48(int64_t i, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteUint48, addr 0x243bd40, size 0xb0, virtual false, abstract: false, final false
  static inline void WriteUint48(int64_t i, ::System::IO::Stream* output);

  /// @brief Method WriteUint64, addr 0x242fb30, size 0xf0, virtual false, abstract: false, final false
  static inline void WriteUint64(int64_t i, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteUint64, addr 0x243bea8, size 0xe0, virtual false, abstract: false, final false
  static inline void WriteUint64(int64_t i, ::System::IO::Stream* output);

  /// @brief Method WriteUint8, addr 0x242fc20, size 0x2c, virtual false, abstract: false, final false
  static inline void WriteUint8(uint8_t i, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteUint8, addr 0x2437bf0, size 0x2c, virtual false, abstract: false, final false
  static inline void WriteUint8(uint8_t i, ::System::IO::Stream* output);

  /// @brief Method WriteUint8Array, addr 0x243c048, size 0xbc, virtual false, abstract: false, final false
  static inline void WriteUint8Array(::ArrayW<uint8_t, ::Array<uint8_t>*> uints, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteUint8Array, addr 0x243c010, size 0x38, virtual false, abstract: false, final false
  static inline void WriteUint8Array(::ArrayW<uint8_t, ::Array<uint8_t>*> uints, ::System::IO::Stream* output);

  /// @brief Method WriteUint8ArrayWithUint8Length, addr 0x243c18c, size 0x8c, virtual false, abstract: false, final false
  static inline void WriteUint8ArrayWithUint8Length(::ArrayW<uint8_t, ::Array<uint8_t>*> uints, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteUint8ArrayWithUint8Length, addr 0x243c104, size 0x88, virtual false, abstract: false, final false
  static inline void WriteUint8ArrayWithUint8Length(::ArrayW<uint8_t, ::Array<uint8_t>*> uints, ::System::IO::Stream* output);

  /// @brief Method WriteVersion, addr 0x242fc4c, size 0x70, virtual false, abstract: false, final false
  static inline void WriteVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* version, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteVersion, addr 0x2437a18, size 0x68, virtual false, abstract: false, final false
  static inline void WriteVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* version, ::System::IO::Stream* output);

  /// @brief Method .ctor, addr 0x2440cbc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_EmptyBytes();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_EmptyInts();

  static inline ::ArrayW<int64_t, ::Array<int64_t>*> getStaticF_EmptyLongs();

  static inline ::ArrayW<int16_t, ::Array<int16_t>*> getStaticF_EmptyShorts();

  static inline ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> getStaticF_SSL3_CONST();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_SSL_CLIENT();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_SSL_SERVER();

  static inline void setStaticF_EmptyBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_EmptyInts(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_EmptyLongs(::ArrayW<int64_t, ::Array<int64_t>*> value);

  static inline void setStaticF_EmptyShorts(::ArrayW<int16_t, ::Array<int16_t>*> value);

  static inline void setStaticF_SSL3_CONST(::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> value);

  static inline void setStaticF_SSL_CLIENT(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_SSL_SERVER(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TlsUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsUtilities(TlsUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsUtilities(TlsUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1332 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsUtilities*, "Org.BouncyCastle.Crypto.Tls", "TlsUtilities");
