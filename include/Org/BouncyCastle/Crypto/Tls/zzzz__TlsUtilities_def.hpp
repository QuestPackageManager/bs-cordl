#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::Org::BouncyCastle::Crypto::Tls::TlsUtilities*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Crypto::Tls::TlsUtilities*, "Org.BouncyCastle.Crypto.Tls", "TlsUtilities");
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsUtilities
class CORDL_TYPE TlsUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field EmptyBytes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EmptyBytes, put = setStaticF_EmptyBytes)) ::ArrayW<uint8_t> EmptyBytes;

  /// @brief Field EmptyInts, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EmptyInts, put = setStaticF_EmptyInts)) ::ArrayW<int32_t> EmptyInts;

  /// @brief Field EmptyLongs, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EmptyLongs, put = setStaticF_EmptyLongs)) ::ArrayW<int64_t> EmptyLongs;

  /// @brief Field EmptyShorts, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EmptyShorts, put = setStaticF_EmptyShorts)) ::ArrayW<int16_t> EmptyShorts;

  /// @brief Field SSL3_CONST, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SSL3_CONST, put = setStaticF_SSL3_CONST)) ::ArrayW<::ArrayW<uint8_t>> SSL3_CONST;

  /// @brief Field SSL_CLIENT, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SSL_CLIENT, put = setStaticF_SSL_CLIENT)) ::ArrayW<uint8_t> SSL_CLIENT;

  /// @brief Field SSL_SERVER, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SSL_SERVER, put = setStaticF_SSL_SERVER)) ::ArrayW<uint8_t> SSL_SERVER;

  /// @brief Method AddSignatureAlgorithmsExtension, addr 0x3493994, size 0x10c, virtual false, abstract: false, final false
  static inline void AddSignatureAlgorithmsExtension(::System::Collections::IDictionary* extensions, ::System::Collections::IList* supportedSignatureAlgorithms);

  /// @brief Method CalculateKeyBlock, addr 0x34865cc, size 0x1ac, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> CalculateKeyBlock(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, int32_t size);

  /// @brief Method CalculateKeyBlock_Ssl, addr 0x3494d44, size 0x544, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> CalculateKeyBlock_Ssl(::ArrayW<uint8_t> master_secret, ::ArrayW<uint8_t> random, int32_t size);

  /// @brief Method CalculateMasterSecret, addr 0x3495288, size 0x228, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> CalculateMasterSecret(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::ArrayW<uint8_t> pre_master_secret);

  /// @brief Method CalculateMasterSecret_Ssl, addr 0x34954b0, size 0x508, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> CalculateMasterSecret_Ssl(::ArrayW<uint8_t> pre_master_secret, ::ArrayW<uint8_t> random);

  /// @brief Method CalculateVerifyData, addr 0x34959b8, size 0x160, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> CalculateVerifyData(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::StringW asciiLabel, ::ArrayW<uint8_t> handshakeHash);

  /// @brief Method CheckUint16, addr 0x348508c, size 0x90, virtual false, abstract: false, final false
  static inline void CheckUint16(int32_t i);

  /// @brief Method CheckUint16, addr 0x349192c, size 0x90, virtual false, abstract: false, final false
  static inline void CheckUint16(int64_t i);

  /// @brief Method CheckUint24, addr 0x34919c8, size 0x90, virtual false, abstract: false, final false
  static inline void CheckUint24(int32_t i);

  /// @brief Method CheckUint24, addr 0x3491a68, size 0x90, virtual false, abstract: false, final false
  static inline void CheckUint24(int64_t i);

  /// @brief Method CheckUint32, addr 0x3491b08, size 0x90, virtual false, abstract: false, final false
  static inline void CheckUint32(int64_t i);

  /// @brief Method CheckUint48, addr 0x3491ba8, size 0x90, virtual false, abstract: false, final false
  static inline void CheckUint48(int64_t i);

  /// @brief Method CheckUint64, addr 0x3491c48, size 0x58, virtual false, abstract: false, final false
  static inline void CheckUint64(int64_t i);

  /// @brief Method CheckUint8, addr 0x34917e8, size 0x90, virtual false, abstract: false, final false
  static inline void CheckUint8(int32_t i);

  /// @brief Method CheckUint8, addr 0x3491884, size 0x90, virtual false, abstract: false, final false
  static inline void CheckUint8(int64_t i);

  /// @brief Method CloneHash, addr 0x3495b18, size 0x348, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IDigest* CloneHash(uint8_t hashAlgorithm, ::Org::BouncyCastle::Crypto::IDigest* hash);

  /// @brief Method ClonePrfHash, addr 0x3495f10, size 0xf0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IDigest* ClonePrfHash(int32_t prfAlgorithm, ::Org::BouncyCastle::Crypto::IDigest* hash);

  /// @brief Method Concat, addr 0x34946b4, size 0xb0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> Concat(::ArrayW<uint8_t> a, ::ArrayW<uint8_t> b);

  /// @brief Method CreateHash, addr 0x34831fc, size 0x1e4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IDigest* CreateHash(uint8_t hashAlgorithm);

  /// @brief Method CreateHash, addr 0x3482a0c, size 0xb0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IDigest* CreateHash(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* signatureAndHashAlgorithm);

  /// @brief Method CreatePrfHash, addr 0x3494924, size 0x9c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IDigest* CreatePrfHash(int32_t prfAlgorithm);

  /// @brief Method CreateSignatureAlgorithmsExtension, addr 0x3493aa0, size 0xa8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> CreateSignatureAlgorithmsExtension(::System::Collections::IList* supportedSignatureAlgorithms);

  /// @brief Method CreateTlsSigner, addr 0x348c320, size 0x134, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::TlsSigner* CreateTlsSigner(uint8_t clientCertificateType);

  /// @brief Method DecodeUint8, addr 0x3485310, size 0xdc, virtual false, abstract: false, final false
  static inline uint8_t DecodeUint8(::ArrayW<uint8_t> buf);

  /// @brief Method DecodeUint8ArrayWithUint8Length, addr 0x34851a0, size 0x170, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> DecodeUint8ArrayWithUint8Length(::ArrayW<uint8_t> buf);

  /// @brief Method EncodeOpaque8, addr 0x34900e4, size 0x98, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> EncodeOpaque8(::ArrayW<uint8_t> buf);

  /// @brief Method EncodeSupportedSignatureAlgorithms, addr 0x3493cc4, size 0x5bc, virtual false, abstract: false, final false
  static inline void EncodeSupportedSignatureAlgorithms(::System::Collections::IList* supportedSignatureAlgorithms, bool allowAnonymous, ::System::IO::Stream* output);

  /// @brief Method EncodeUint16ArrayWithUint16Length, addr 0x3492738, size 0xa4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> EncodeUint16ArrayWithUint16Length(::ArrayW<int32_t> uints);

  /// @brief Method EncodeUint8, addr 0x3484f98, size 0x98, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> EncodeUint8(uint8_t val);

  /// @brief Method EncodeUint8ArrayWithUint8Length, addr 0x3484ef8, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> EncodeUint8ArrayWithUint8Length(::ArrayW<uint8_t> uints);

  /// @brief Method GenSsl3Const, addr 0x3496000, size 0xf8, virtual false, abstract: false, final false
  static inline ::ArrayW<::ArrayW<uint8_t>> GenSsl3Const();

  /// @brief Method GetAllSignatureAlgorithms, addr 0x349318c, size 0x274, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* GetAllSignatureAlgorithms();

  /// @brief Method GetCipherType, addr 0x34960f8, size 0xb8, virtual false, abstract: false, final false
  static inline int32_t GetCipherType(int32_t ciphersuite);

  /// @brief Method GetClientCertificateType, addr 0x348b538, size 0x310, virtual false, abstract: false, final false
  static inline int16_t GetClientCertificateType(::Org::BouncyCastle::Crypto::Tls::Certificate* clientCertificate, ::Org::BouncyCastle::Crypto::Tls::Certificate* serverCertificate);

  /// @brief Method GetDefaultDssSignatureAlgorithms, addr 0x3493400, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* GetDefaultDssSignatureAlgorithms();

  /// @brief Method GetDefaultECDsaSignatureAlgorithms, addr 0x3493570, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* GetDefaultECDsaSignatureAlgorithms();

  /// @brief Method GetDefaultRsaSignatureAlgorithms, addr 0x34935f8, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* GetDefaultRsaSignatureAlgorithms();

  /// @brief Method GetDefaultSupportedSignatureAlgorithms, addr 0x3493680, size 0x224, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* GetDefaultSupportedSignatureAlgorithms();

  /// @brief Method GetEncryptionAlgorithm, addr 0x34961b0, size 0x11c, virtual false, abstract: false, final false
  static inline int32_t GetEncryptionAlgorithm(int32_t ciphersuite);

  /// @brief Method GetExtensionData, addr 0x3484460, size 0x10c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> GetExtensionData(::System::Collections::IDictionary* extensions, int32_t extensionType);

  /// @brief Method GetHashAlgorithmForPrfAlgorithm, addr 0x3495e60, size 0xb0, virtual false, abstract: false, final false
  static inline uint8_t GetHashAlgorithmForPrfAlgorithm(int32_t prfAlgorithm);

  /// @brief Method GetKeyExchangeAlgorithm, addr 0x34962cc, size 0x138, virtual false, abstract: false, final false
  static inline int32_t GetKeyExchangeAlgorithm(int32_t ciphersuite);

  /// @brief Method GetMacAlgorithm, addr 0x3496404, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t GetMacAlgorithm(int32_t ciphersuite);

  /// @brief Method GetMinimumVersion, addr 0x34964c0, size 0x118, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* GetMinimumVersion(int32_t ciphersuite);

  /// @brief Method GetOidForHashAlgorithm, addr 0x3489580, size 0x1d8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetOidForHashAlgorithm(uint8_t hashAlgorithm);

  /// @brief Method GetSignatureAlgorithmsExtension, addr 0x3493b48, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* GetSignatureAlgorithmsExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method GetSignatureAndHashAlgorithm, addr 0x34828e4, size 0x128, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* GetSignatureAndHashAlgorithm(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                                                          ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* signerCredentials);

  /// @brief Method GetUsableSignatureAlgorithms, addr 0x34969fc, size 0x524, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* GetUsableSignatureAlgorithms(::System::Collections::IList* sigHashAlgs);

  /// @brief Method HMacHash, addr 0x34949c0, size 0x2e8, virtual false, abstract: false, final false
  static inline void HMacHash(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t> secret, ::ArrayW<uint8_t> seed, ::ArrayW<uint8_t> output);

  /// @brief Method HasExpectedEmptyExtensionData, addr 0x348de8c, size 0xb8, virtual false, abstract: false, final false
  static inline bool HasExpectedEmptyExtensionData(::System::Collections::IDictionary* extensions, int32_t extensionType, uint8_t alertDescription);

  /// @brief Method HasSigningCapability, addr 0x348e190, size 0x18, virtual false, abstract: false, final false
  static inline bool HasSigningCapability(uint8_t clientCertificateType);

  /// @brief Method ImportSession, addr 0x34938a4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::TlsSession* ImportSession(::ArrayW<uint8_t> sessionID, ::Org::BouncyCastle::Crypto::Tls::SessionParameters* sessionParameters);

  /// @brief Method IsAeadCipherSuite, addr 0x34965d8, size 0x64, virtual false, abstract: false, final false
  static inline bool IsAeadCipherSuite(int32_t ciphersuite);

  /// @brief Method IsBlockCipherSuite, addr 0x349663c, size 0x64, virtual false, abstract: false, final false
  static inline bool IsBlockCipherSuite(int32_t ciphersuite);

  /// @brief Method IsSignatureAlgorithmsExtensionAllowed, addr 0x3493910, size 0x84, virtual false, abstract: false, final false
  static inline bool IsSignatureAlgorithmsExtensionAllowed(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* clientVersion);

  /// @brief Method IsSsl, addr 0x3485860, size 0xb0, virtual false, abstract: false, final false
  static inline bool IsSsl(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  /// @brief Method IsStreamCipherSuite, addr 0x34966a0, size 0x64, virtual false, abstract: false, final false
  static inline bool IsStreamCipherSuite(int32_t ciphersuite);

  /// @brief Method IsTimeout, addr 0x3496f20, size 0x2c, virtual false, abstract: false, final false
  static inline bool IsTimeout(::System::Net::Sockets::SocketException* e);

  /// @brief Method IsTlsV11, addr 0x3491d2c, size 0xdc, virtual false, abstract: false, final false
  static inline bool IsTlsV11(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  /// @brief Method IsTlsV11, addr 0x3491ca8, size 0x84, virtual false, abstract: false, final false
  static inline bool IsTlsV11(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* version);

  /// @brief Method IsTlsV12, addr 0x34894a4, size 0xdc, virtual false, abstract: false, final false
  static inline bool IsTlsV12(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  /// @brief Method IsTlsV12, addr 0x3491e08, size 0x84, virtual false, abstract: false, final false
  static inline bool IsTlsV12(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* version);

  /// @brief Method IsValidCipherSuiteForSignatureAlgorithms, addr 0x3496704, size 0x2f8, virtual false, abstract: false, final false
  static inline bool IsValidCipherSuiteForSignatureAlgorithms(int32_t cipherSuite, ::System::Collections::IList* sigAlgs);

  /// @brief Method IsValidCipherSuiteForVersion, addr 0x348dd84, size 0x90, virtual false, abstract: false, final false
  static inline bool IsValidCipherSuiteForVersion(int32_t cipherSuite, ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* serverVersion);

  /// @brief Method IsValidUint16, addr 0x3491920, size 0xc, virtual false, abstract: false, final false
  static inline bool IsValidUint16(int32_t i);

  /// @brief Method IsValidUint16, addr 0x34919bc, size 0xc, virtual false, abstract: false, final false
  static inline bool IsValidUint16(int64_t i);

  /// @brief Method IsValidUint24, addr 0x3491a58, size 0x10, virtual false, abstract: false, final false
  static inline bool IsValidUint24(int32_t i);

  /// @brief Method IsValidUint24, addr 0x3491af8, size 0x10, virtual false, abstract: false, final false
  static inline bool IsValidUint24(int64_t i);

  /// @brief Method IsValidUint32, addr 0x3491b98, size 0x10, virtual false, abstract: false, final false
  static inline bool IsValidUint32(int64_t i);

  /// @brief Method IsValidUint48, addr 0x3491c38, size 0x10, virtual false, abstract: false, final false
  static inline bool IsValidUint48(int64_t i);

  /// @brief Method IsValidUint64, addr 0x3491ca0, size 0x8, virtual false, abstract: false, final false
  static inline bool IsValidUint64(int64_t i);

  /// @brief Method IsValidUint8, addr 0x3491878, size 0xc, virtual false, abstract: false, final false
  static inline bool IsValidUint8(int32_t i);

  /// @brief Method IsValidUint8, addr 0x3491914, size 0xc, virtual false, abstract: false, final false
  static inline bool IsValidUint8(int64_t i);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsUtilities* New_ctor();

  /// @brief Method PRF, addr 0x3494450, size 0x264, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> PRF(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::ArrayW<uint8_t> secret, ::StringW asciiLabel, ::ArrayW<uint8_t> seed, int32_t size);

  /// @brief Method PRF_legacy, addr 0x3494ca8, size 0x9c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> PRF_legacy(::ArrayW<uint8_t> secret, ::StringW asciiLabel, ::ArrayW<uint8_t> seed, int32_t size);

  /// @brief Method PRF_legacy, addr 0x3494764, size 0x1c0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> PRF_legacy(::ArrayW<uint8_t> secret, ::ArrayW<uint8_t> label, ::ArrayW<uint8_t> labelSeed, int32_t size);

  /// @brief Method ParseSupportedSignatureAlgorithms, addr 0x3494280, size 0x1d0, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* ParseSupportedSignatureAlgorithms(bool allowAnonymous, ::System::IO::Stream* input);

  /// @brief Method ReadAllOrNothing, addr 0x3492b48, size 0xf8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> ReadAllOrNothing(int32_t length, ::System::IO::Stream* input);

  /// @brief Method ReadAsn1Object, addr 0x3492e74, size 0x120, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Object* ReadAsn1Object(::ArrayW<uint8_t> encoding);

  /// @brief Method ReadDerObject, addr 0x3492f94, size 0x100, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Object* ReadDerObject(::ArrayW<uint8_t> encoding);

  /// @brief Method ReadFully, addr 0x348cb80, size 0xec, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> ReadFully(int32_t length, ::System::IO::Stream* input);

  /// @brief Method ReadFully, addr 0x3492c40, size 0x70, virtual false, abstract: false, final false
  static inline void ReadFully(::ArrayW<uint8_t> buf, ::System::IO::Stream* input);

  /// @brief Method ReadOpaque16, addr 0x34875ac, size 0x94, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> ReadOpaque16(::System::IO::Stream* input);

  /// @brief Method ReadOpaque24, addr 0x3492cb0, size 0x60, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> ReadOpaque24(::System::IO::Stream* input);

  /// @brief Method ReadOpaque8, addr 0x3481d98, size 0x94, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> ReadOpaque8(::System::IO::Stream* input);

  /// @brief Method ReadSignatureAlgorithmsExtension, addr 0x3493bd0, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* ReadSignatureAlgorithmsExtension(::ArrayW<uint8_t> extensionData);

  /// @brief Method ReadUint16, addr 0x34927dc, size 0x40, virtual false, abstract: false, final false
  static inline int32_t ReadUint16(::ArrayW<uint8_t> buf, int32_t offset);

  /// @brief Method ReadUint16, addr 0x348cc6c, size 0x84, virtual false, abstract: false, final false
  static inline int32_t ReadUint16(::System::IO::Stream* input);

  /// @brief Method ReadUint16Array, addr 0x348ccf0, size 0xd8, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t> ReadUint16Array(int32_t count, ::System::IO::Stream* input);

  /// @brief Method ReadUint24, addr 0x34928c0, size 0x58, virtual false, abstract: false, final false
  static inline int32_t ReadUint24(::ArrayW<uint8_t> buf, int32_t offset);

  /// @brief Method ReadUint24, addr 0x349281c, size 0xa4, virtual false, abstract: false, final false
  static inline int32_t ReadUint24(::System::IO::Stream* input);

  /// @brief Method ReadUint32, addr 0x34929e0, size 0x6c, virtual false, abstract: false, final false
  static inline int64_t ReadUint32(::ArrayW<uint8_t> buf, int32_t offset);

  /// @brief Method ReadUint32, addr 0x3492918, size 0xc8, virtual false, abstract: false, final false
  static inline int64_t ReadUint32(::System::IO::Stream* input);

  /// @brief Method ReadUint48, addr 0x3492ac0, size 0x88, virtual false, abstract: false, final false
  static inline int64_t ReadUint48(::ArrayW<uint8_t> buf, int32_t offset);

  /// @brief Method ReadUint48, addr 0x3492a4c, size 0x74, virtual false, abstract: false, final false
  static inline int64_t ReadUint48(::System::IO::Stream* input);

  /// @brief Method ReadUint8, addr 0x349270c, size 0x2c, virtual false, abstract: false, final false
  static inline uint8_t ReadUint8(::ArrayW<uint8_t> buf, int32_t offset);

  /// @brief Method ReadUint8, addr 0x348cdc8, size 0x5c, virtual false, abstract: false, final false
  static inline uint8_t ReadUint8(::System::IO::Stream* input);

  /// @brief Method ReadUint8Array, addr 0x348ce24, size 0xd8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> ReadUint8Array(int32_t count, ::System::IO::Stream* input);

  /// @brief Method ReadVersion, addr 0x3492d10, size 0xa0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ReadVersion(::ArrayW<uint8_t> buf, int32_t offset);

  /// @brief Method ReadVersion, addr 0x348cab0, size 0xd0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ReadVersion(::System::IO::Stream* input);

  /// @brief Method ReadVersionRaw, addr 0x3492db0, size 0x40, virtual false, abstract: false, final false
  static inline int32_t ReadVersionRaw(::ArrayW<uint8_t> buf, int32_t offset);

  /// @brief Method ReadVersionRaw, addr 0x3492df0, size 0x84, virtual false, abstract: false, final false
  static inline int32_t ReadVersionRaw(::System::IO::Stream* input);

  /// @brief Method TrackHashAlgorithms, addr 0x348ad34, size 0x3a8, virtual false, abstract: false, final false
  static inline void TrackHashAlgorithms(::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* handshakeHash, ::System::Collections::IList* supportedSignatureAlgorithms);

  /// @brief Method ValidateKeyUsage, addr 0x34819f8, size 0xfc, virtual false, abstract: false, final false
  static inline void ValidateKeyUsage(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* c, int32_t keyUsageBits);

  /// @brief Method VectorOfOne, addr 0x3493488, size 0xe8, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* VectorOfOne(::System::Object* obj);

  /// @brief Method VerifySupportedSignatureAlgorithm, addr 0x348bdc0, size 0x560, virtual false, abstract: false, final false
  static inline void VerifySupportedSignatureAlgorithm(::System::Collections::IList* supportedSignatureAlgorithms, ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* signatureAlgorithm);

  /// @brief Method WriteGmtUnixTime, addr 0x3493094, size 0xf8, virtual false, abstract: false, final false
  static inline void WriteGmtUnixTime(::ArrayW<uint8_t> buf, int32_t offset);

  /// @brief Method WriteOpaque16, addr 0x3487110, size 0x94, virtual false, abstract: false, final false
  static inline void WriteOpaque16(::ArrayW<uint8_t> buf, ::System::IO::Stream* output);

  /// @brief Method WriteOpaque24, addr 0x349223c, size 0x94, virtual false, abstract: false, final false
  static inline void WriteOpaque24(::ArrayW<uint8_t> buf, ::System::IO::Stream* output);

  /// @brief Method WriteOpaque8, addr 0x348dce4, size 0xa0, virtual false, abstract: false, final false
  static inline void WriteOpaque8(::ArrayW<uint8_t> buf, ::System::IO::Stream* output);

  /// @brief Method WriteUint16, addr 0x3485d98, size 0x48, virtual false, abstract: false, final false
  static inline void WriteUint16(int32_t i, ::ArrayW<uint8_t> buf, int32_t offset);

  /// @brief Method WriteUint16, addr 0x348de14, size 0x50, virtual false, abstract: false, final false
  static inline void WriteUint16(int32_t i, ::System::IO::Stream* output);

  /// @brief Method WriteUint16Array, addr 0x34925b4, size 0xc0, virtual false, abstract: false, final false
  static inline void WriteUint16Array(::ArrayW<int32_t> uints, ::ArrayW<uint8_t> buf, int32_t offset);

  /// @brief Method WriteUint16Array, addr 0x3492500, size 0xb4, virtual false, abstract: false, final false
  static inline void WriteUint16Array(::ArrayW<int32_t> uints, ::System::IO::Stream* output);

  /// @brief Method WriteUint16ArrayWithUint16Length, addr 0x3492674, size 0x98, virtual false, abstract: false, final false
  static inline void WriteUint16ArrayWithUint16Length(::ArrayW<int32_t> uints, ::ArrayW<uint8_t> buf, int32_t offset);

  /// @brief Method WriteUint16ArrayWithUint16Length, addr 0x349057c, size 0x8c, virtual false, abstract: false, final false
  static inline void WriteUint16ArrayWithUint16Length(::ArrayW<int32_t> uints, ::System::IO::Stream* output);

  /// @brief Method WriteUint24, addr 0x348e00c, size 0x64, virtual false, abstract: false, final false
  static inline void WriteUint24(int32_t i, ::ArrayW<uint8_t> buf, int32_t offset);

  /// @brief Method WriteUint24, addr 0x3491e8c, size 0x68, virtual false, abstract: false, final false
  static inline void WriteUint24(int32_t i, ::System::IO::Stream* output);

  /// @brief Method WriteUint32, addr 0x3491f74, size 0x80, virtual false, abstract: false, final false
  static inline void WriteUint32(int64_t i, ::ArrayW<uint8_t> buf, int32_t offset);

  /// @brief Method WriteUint32, addr 0x3491ef4, size 0x80, virtual false, abstract: false, final false
  static inline void WriteUint32(int64_t i, ::System::IO::Stream* output);

  /// @brief Method WriteUint48, addr 0x34920a4, size 0xb8, virtual false, abstract: false, final false
  static inline void WriteUint48(int64_t i, ::ArrayW<uint8_t> buf, int32_t offset);

  /// @brief Method WriteUint48, addr 0x3491ff4, size 0xb0, virtual false, abstract: false, final false
  static inline void WriteUint48(int64_t i, ::System::IO::Stream* output);

  /// @brief Method WriteUint64, addr 0x3485c28, size 0xf0, virtual false, abstract: false, final false
  static inline void WriteUint64(int64_t i, ::ArrayW<uint8_t> buf, int32_t offset);

  /// @brief Method WriteUint64, addr 0x349215c, size 0xe0, virtual false, abstract: false, final false
  static inline void WriteUint64(int64_t i, ::System::IO::Stream* output);

  /// @brief Method WriteUint8, addr 0x3485d18, size 0x2c, virtual false, abstract: false, final false
  static inline void WriteUint8(uint8_t i, ::ArrayW<uint8_t> buf, int32_t offset);

  /// @brief Method WriteUint8, addr 0x348de64, size 0x28, virtual false, abstract: false, final false
  static inline void WriteUint8(uint8_t i, ::System::IO::Stream* output);

  /// @brief Method WriteUint8Array, addr 0x3492308, size 0xc0, virtual false, abstract: false, final false
  static inline void WriteUint8Array(::ArrayW<uint8_t> uints, ::ArrayW<uint8_t> buf, int32_t offset);

  /// @brief Method WriteUint8Array, addr 0x34922d0, size 0x38, virtual false, abstract: false, final false
  static inline void WriteUint8Array(::ArrayW<uint8_t> uints, ::System::IO::Stream* output);

  /// @brief Method WriteUint8ArrayWithUint8Length, addr 0x3492470, size 0x90, virtual false, abstract: false, final false
  static inline void WriteUint8ArrayWithUint8Length(::ArrayW<uint8_t> uints, ::ArrayW<uint8_t> buf, int32_t offset);

  /// @brief Method WriteUint8ArrayWithUint8Length, addr 0x34923c8, size 0xa8, virtual false, abstract: false, final false
  static inline void WriteUint8ArrayWithUint8Length(::ArrayW<uint8_t> uints, ::System::IO::Stream* output);

  /// @brief Method WriteVersion, addr 0x3485d44, size 0x54, virtual false, abstract: false, final false
  static inline void WriteVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* version, ::ArrayW<uint8_t> buf, int32_t offset);

  /// @brief Method WriteVersion, addr 0x348dc8c, size 0x58, virtual false, abstract: false, final false
  static inline void WriteVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* version, ::System::IO::Stream* output);

  /// @brief Method .ctor, addr 0x34970e8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint8_t> getStaticF_EmptyBytes();

  static inline ::ArrayW<int32_t> getStaticF_EmptyInts();

  static inline ::ArrayW<int64_t> getStaticF_EmptyLongs();

  static inline ::ArrayW<int16_t> getStaticF_EmptyShorts();

  static inline ::ArrayW<::ArrayW<uint8_t>> getStaticF_SSL3_CONST();

  static inline ::ArrayW<uint8_t> getStaticF_SSL_CLIENT();

  static inline ::ArrayW<uint8_t> getStaticF_SSL_SERVER();

  static inline void setStaticF_EmptyBytes(::ArrayW<uint8_t> value);

  static inline void setStaticF_EmptyInts(::ArrayW<int32_t> value);

  static inline void setStaticF_EmptyLongs(::ArrayW<int64_t> value);

  static inline void setStaticF_EmptyShorts(::ArrayW<int16_t> value);

  static inline void setStaticF_SSL3_CONST(::ArrayW<::ArrayW<uint8_t>> value);

  static inline void setStaticF_SSL_CLIENT(::ArrayW<uint8_t> value);

  static inline void setStaticF_SSL_SERVER(::ArrayW<uint8_t> value);

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
static_assert(sizeof(::Org::BouncyCastle::Crypto::Tls::TlsUtilities) == 0x10, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
