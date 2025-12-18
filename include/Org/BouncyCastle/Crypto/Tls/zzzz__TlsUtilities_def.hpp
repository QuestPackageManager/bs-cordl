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

  /// @brief Method AddSignatureAlgorithmsExtension, addr 0x339a1ac, size 0x10c, virtual false, abstract: false, final false
  static inline void AddSignatureAlgorithmsExtension(::System::Collections::IDictionary* extensions, ::System::Collections::IList* supportedSignatureAlgorithms);

  /// @brief Method CalculateKeyBlock, addr 0x338cde4, size 0x1ac, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateKeyBlock(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, int32_t size);

  /// @brief Method CalculateKeyBlock_Ssl, addr 0x339b55c, size 0x544, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateKeyBlock_Ssl(::ArrayW<uint8_t, ::Array<uint8_t>*> master_secret, ::ArrayW<uint8_t, ::Array<uint8_t>*> random, int32_t size);

  /// @brief Method CalculateMasterSecret, addr 0x339baa0, size 0x228, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateMasterSecret(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::ArrayW<uint8_t, ::Array<uint8_t>*> pre_master_secret);

  /// @brief Method CalculateMasterSecret_Ssl, addr 0x339bcc8, size 0x508, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateMasterSecret_Ssl(::ArrayW<uint8_t, ::Array<uint8_t>*> pre_master_secret, ::ArrayW<uint8_t, ::Array<uint8_t>*> random);

  /// @brief Method CalculateVerifyData, addr 0x339c1d0, size 0x160, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateVerifyData(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::StringW asciiLabel,
                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> handshakeHash);

  /// @brief Method CheckUint16, addr 0x338b8a4, size 0x90, virtual false, abstract: false, final false
  static inline void CheckUint16(int32_t i);

  /// @brief Method CheckUint16, addr 0x3398144, size 0x90, virtual false, abstract: false, final false
  static inline void CheckUint16(int64_t i);

  /// @brief Method CheckUint24, addr 0x33981e0, size 0x90, virtual false, abstract: false, final false
  static inline void CheckUint24(int32_t i);

  /// @brief Method CheckUint24, addr 0x3398280, size 0x90, virtual false, abstract: false, final false
  static inline void CheckUint24(int64_t i);

  /// @brief Method CheckUint32, addr 0x3398320, size 0x90, virtual false, abstract: false, final false
  static inline void CheckUint32(int64_t i);

  /// @brief Method CheckUint48, addr 0x33983c0, size 0x90, virtual false, abstract: false, final false
  static inline void CheckUint48(int64_t i);

  /// @brief Method CheckUint64, addr 0x3398460, size 0x58, virtual false, abstract: false, final false
  static inline void CheckUint64(int64_t i);

  /// @brief Method CheckUint8, addr 0x3398000, size 0x90, virtual false, abstract: false, final false
  static inline void CheckUint8(int32_t i);

  /// @brief Method CheckUint8, addr 0x339809c, size 0x90, virtual false, abstract: false, final false
  static inline void CheckUint8(int64_t i);

  /// @brief Method CloneHash, addr 0x339c330, size 0x348, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IDigest* CloneHash(uint8_t hashAlgorithm, ::Org::BouncyCastle::Crypto::IDigest* hash);

  /// @brief Method ClonePrfHash, addr 0x339c728, size 0xf0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IDigest* ClonePrfHash(int32_t prfAlgorithm, ::Org::BouncyCastle::Crypto::IDigest* hash);

  /// @brief Method Concat, addr 0x339aecc, size 0xb0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Concat(::ArrayW<uint8_t, ::Array<uint8_t>*> a, ::ArrayW<uint8_t, ::Array<uint8_t>*> b);

  /// @brief Method CreateHash, addr 0x3389a14, size 0x1e4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IDigest* CreateHash(uint8_t hashAlgorithm);

  /// @brief Method CreateHash, addr 0x3389224, size 0xb0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IDigest* CreateHash(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* signatureAndHashAlgorithm);

  /// @brief Method CreatePrfHash, addr 0x339b13c, size 0x9c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IDigest* CreatePrfHash(int32_t prfAlgorithm);

  /// @brief Method CreateSignatureAlgorithmsExtension, addr 0x339a2b8, size 0xa8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateSignatureAlgorithmsExtension(::System::Collections::IList* supportedSignatureAlgorithms);

  /// @brief Method CreateTlsSigner, addr 0x3392b38, size 0x134, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::TlsSigner* CreateTlsSigner(uint8_t clientCertificateType);

  /// @brief Method DecodeUint8, addr 0x338bb28, size 0xdc, virtual false, abstract: false, final false
  static inline uint8_t DecodeUint8(::ArrayW<uint8_t, ::Array<uint8_t>*> buf);

  /// @brief Method DecodeUint8ArrayWithUint8Length, addr 0x338b9b8, size 0x170, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DecodeUint8ArrayWithUint8Length(::ArrayW<uint8_t, ::Array<uint8_t>*> buf);

  /// @brief Method EncodeOpaque8, addr 0x33968fc, size 0x98, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeOpaque8(::ArrayW<uint8_t, ::Array<uint8_t>*> buf);

  /// @brief Method EncodeSupportedSignatureAlgorithms, addr 0x339a4dc, size 0x5bc, virtual false, abstract: false, final false
  static inline void EncodeSupportedSignatureAlgorithms(::System::Collections::IList* supportedSignatureAlgorithms, bool allowAnonymous, ::System::IO::Stream* output);

  /// @brief Method EncodeUint16ArrayWithUint16Length, addr 0x3398f50, size 0xa4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeUint16ArrayWithUint16Length(::ArrayW<int32_t, ::Array<int32_t>*> uints);

  /// @brief Method EncodeUint8, addr 0x338b7b0, size 0x98, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeUint8(uint8_t val);

  /// @brief Method EncodeUint8ArrayWithUint8Length, addr 0x338b710, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeUint8ArrayWithUint8Length(::ArrayW<uint8_t, ::Array<uint8_t>*> uints);

  /// @brief Method GenSsl3Const, addr 0x339c818, size 0xf8, virtual false, abstract: false, final false
  static inline ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> GenSsl3Const();

  /// @brief Method GetAllSignatureAlgorithms, addr 0x33999a4, size 0x274, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* GetAllSignatureAlgorithms();

  /// @brief Method GetCipherType, addr 0x339c910, size 0xb8, virtual false, abstract: false, final false
  static inline int32_t GetCipherType(int32_t ciphersuite);

  /// @brief Method GetClientCertificateType, addr 0x3391d50, size 0x310, virtual false, abstract: false, final false
  static inline int16_t GetClientCertificateType(::Org::BouncyCastle::Crypto::Tls::Certificate* clientCertificate, ::Org::BouncyCastle::Crypto::Tls::Certificate* serverCertificate);

  /// @brief Method GetDefaultDssSignatureAlgorithms, addr 0x3399c18, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* GetDefaultDssSignatureAlgorithms();

  /// @brief Method GetDefaultECDsaSignatureAlgorithms, addr 0x3399d88, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* GetDefaultECDsaSignatureAlgorithms();

  /// @brief Method GetDefaultRsaSignatureAlgorithms, addr 0x3399e10, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* GetDefaultRsaSignatureAlgorithms();

  /// @brief Method GetDefaultSupportedSignatureAlgorithms, addr 0x3399e98, size 0x224, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* GetDefaultSupportedSignatureAlgorithms();

  /// @brief Method GetEncryptionAlgorithm, addr 0x339c9c8, size 0x11c, virtual false, abstract: false, final false
  static inline int32_t GetEncryptionAlgorithm(int32_t ciphersuite);

  /// @brief Method GetExtensionData, addr 0x338ac78, size 0x10c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetExtensionData(::System::Collections::IDictionary* extensions, int32_t extensionType);

  /// @brief Method GetHashAlgorithmForPrfAlgorithm, addr 0x339c678, size 0xb0, virtual false, abstract: false, final false
  static inline uint8_t GetHashAlgorithmForPrfAlgorithm(int32_t prfAlgorithm);

  /// @brief Method GetKeyExchangeAlgorithm, addr 0x339cae4, size 0x138, virtual false, abstract: false, final false
  static inline int32_t GetKeyExchangeAlgorithm(int32_t ciphersuite);

  /// @brief Method GetMacAlgorithm, addr 0x339cc1c, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t GetMacAlgorithm(int32_t ciphersuite);

  /// @brief Method GetMinimumVersion, addr 0x339ccd8, size 0x118, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* GetMinimumVersion(int32_t ciphersuite);

  /// @brief Method GetOidForHashAlgorithm, addr 0x338fd98, size 0x1d8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetOidForHashAlgorithm(uint8_t hashAlgorithm);

  /// @brief Method GetSignatureAlgorithmsExtension, addr 0x339a360, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* GetSignatureAlgorithmsExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method GetSignatureAndHashAlgorithm, addr 0x33890fc, size 0x128, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* GetSignatureAndHashAlgorithm(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                                                          ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* signerCredentials);

  /// @brief Method GetUsableSignatureAlgorithms, addr 0x339d214, size 0x524, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* GetUsableSignatureAlgorithms(::System::Collections::IList* sigHashAlgs);

  /// @brief Method HMacHash, addr 0x339b1d8, size 0x2e8, virtual false, abstract: false, final false
  static inline void HMacHash(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t, ::Array<uint8_t>*> secret, ::ArrayW<uint8_t, ::Array<uint8_t>*> seed,
                              ::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  /// @brief Method HasExpectedEmptyExtensionData, addr 0x33946a4, size 0xb8, virtual false, abstract: false, final false
  static inline bool HasExpectedEmptyExtensionData(::System::Collections::IDictionary* extensions, int32_t extensionType, uint8_t alertDescription);

  /// @brief Method HasSigningCapability, addr 0x33949a8, size 0x18, virtual false, abstract: false, final false
  static inline bool HasSigningCapability(uint8_t clientCertificateType);

  /// @brief Method ImportSession, addr 0x339a0bc, size 0x6c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::TlsSession* ImportSession(::ArrayW<uint8_t, ::Array<uint8_t>*> sessionID, ::Org::BouncyCastle::Crypto::Tls::SessionParameters* sessionParameters);

  /// @brief Method IsAeadCipherSuite, addr 0x339cdf0, size 0x64, virtual false, abstract: false, final false
  static inline bool IsAeadCipherSuite(int32_t ciphersuite);

  /// @brief Method IsBlockCipherSuite, addr 0x339ce54, size 0x64, virtual false, abstract: false, final false
  static inline bool IsBlockCipherSuite(int32_t ciphersuite);

  /// @brief Method IsSignatureAlgorithmsExtensionAllowed, addr 0x339a128, size 0x84, virtual false, abstract: false, final false
  static inline bool IsSignatureAlgorithmsExtensionAllowed(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* clientVersion);

  /// @brief Method IsSsl, addr 0x338c078, size 0xb0, virtual false, abstract: false, final false
  static inline bool IsSsl(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  /// @brief Method IsStreamCipherSuite, addr 0x339ceb8, size 0x64, virtual false, abstract: false, final false
  static inline bool IsStreamCipherSuite(int32_t ciphersuite);

  /// @brief Method IsTimeout, addr 0x339d738, size 0x2c, virtual false, abstract: false, final false
  static inline bool IsTimeout(::System::Net::Sockets::SocketException* e);

  /// @brief Method IsTlsV11, addr 0x3398544, size 0xdc, virtual false, abstract: false, final false
  static inline bool IsTlsV11(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  /// @brief Method IsTlsV11, addr 0x33984c0, size 0x84, virtual false, abstract: false, final false
  static inline bool IsTlsV11(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* version);

  /// @brief Method IsTlsV12, addr 0x338fcbc, size 0xdc, virtual false, abstract: false, final false
  static inline bool IsTlsV12(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  /// @brief Method IsTlsV12, addr 0x3398620, size 0x84, virtual false, abstract: false, final false
  static inline bool IsTlsV12(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* version);

  /// @brief Method IsValidCipherSuiteForSignatureAlgorithms, addr 0x339cf1c, size 0x2f8, virtual false, abstract: false, final false
  static inline bool IsValidCipherSuiteForSignatureAlgorithms(int32_t cipherSuite, ::System::Collections::IList* sigAlgs);

  /// @brief Method IsValidCipherSuiteForVersion, addr 0x339459c, size 0x90, virtual false, abstract: false, final false
  static inline bool IsValidCipherSuiteForVersion(int32_t cipherSuite, ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* serverVersion);

  /// @brief Method IsValidUint16, addr 0x3398138, size 0xc, virtual false, abstract: false, final false
  static inline bool IsValidUint16(int32_t i);

  /// @brief Method IsValidUint16, addr 0x33981d4, size 0xc, virtual false, abstract: false, final false
  static inline bool IsValidUint16(int64_t i);

  /// @brief Method IsValidUint24, addr 0x3398270, size 0x10, virtual false, abstract: false, final false
  static inline bool IsValidUint24(int32_t i);

  /// @brief Method IsValidUint24, addr 0x3398310, size 0x10, virtual false, abstract: false, final false
  static inline bool IsValidUint24(int64_t i);

  /// @brief Method IsValidUint32, addr 0x33983b0, size 0x10, virtual false, abstract: false, final false
  static inline bool IsValidUint32(int64_t i);

  /// @brief Method IsValidUint48, addr 0x3398450, size 0x10, virtual false, abstract: false, final false
  static inline bool IsValidUint48(int64_t i);

  /// @brief Method IsValidUint64, addr 0x33984b8, size 0x8, virtual false, abstract: false, final false
  static inline bool IsValidUint64(int64_t i);

  /// @brief Method IsValidUint8, addr 0x3398090, size 0xc, virtual false, abstract: false, final false
  static inline bool IsValidUint8(int32_t i);

  /// @brief Method IsValidUint8, addr 0x339812c, size 0xc, virtual false, abstract: false, final false
  static inline bool IsValidUint8(int64_t i);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsUtilities* New_ctor();

  /// @brief Method PRF, addr 0x339ac68, size 0x264, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> PRF(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::ArrayW<uint8_t, ::Array<uint8_t>*> secret, ::StringW asciiLabel,
                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> seed, int32_t size);

  /// @brief Method PRF_legacy, addr 0x339b4c0, size 0x9c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> PRF_legacy(::ArrayW<uint8_t, ::Array<uint8_t>*> secret, ::StringW asciiLabel, ::ArrayW<uint8_t, ::Array<uint8_t>*> seed, int32_t size);

  /// @brief Method PRF_legacy, addr 0x339af7c, size 0x1c0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> PRF_legacy(::ArrayW<uint8_t, ::Array<uint8_t>*> secret, ::ArrayW<uint8_t, ::Array<uint8_t>*> label, ::ArrayW<uint8_t, ::Array<uint8_t>*> labelSeed,
                                                                int32_t size);

  /// @brief Method ParseSupportedSignatureAlgorithms, addr 0x339aa98, size 0x1d0, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* ParseSupportedSignatureAlgorithms(bool allowAnonymous, ::System::IO::Stream* input);

  /// @brief Method ReadAllOrNothing, addr 0x3399360, size 0xf8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadAllOrNothing(int32_t length, ::System::IO::Stream* input);

  /// @brief Method ReadAsn1Object, addr 0x339968c, size 0x120, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Object* ReadAsn1Object(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method ReadDerObject, addr 0x33997ac, size 0x100, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Object* ReadDerObject(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method ReadFully, addr 0x3393398, size 0xec, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadFully(int32_t length, ::System::IO::Stream* input);

  /// @brief Method ReadFully, addr 0x3399458, size 0x70, virtual false, abstract: false, final false
  static inline void ReadFully(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, ::System::IO::Stream* input);

  /// @brief Method ReadOpaque16, addr 0x338ddc4, size 0x94, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadOpaque16(::System::IO::Stream* input);

  /// @brief Method ReadOpaque24, addr 0x33994c8, size 0x60, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadOpaque24(::System::IO::Stream* input);

  /// @brief Method ReadOpaque8, addr 0x33885b0, size 0x94, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadOpaque8(::System::IO::Stream* input);

  /// @brief Method ReadSignatureAlgorithmsExtension, addr 0x339a3e8, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* ReadSignatureAlgorithmsExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method ReadUint16, addr 0x3398ff4, size 0x40, virtual false, abstract: false, final false
  static inline int32_t ReadUint16(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method ReadUint16, addr 0x3393484, size 0x84, virtual false, abstract: false, final false
  static inline int32_t ReadUint16(::System::IO::Stream* input);

  /// @brief Method ReadUint16Array, addr 0x3393508, size 0xd8, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> ReadUint16Array(int32_t count, ::System::IO::Stream* input);

  /// @brief Method ReadUint24, addr 0x33990d8, size 0x58, virtual false, abstract: false, final false
  static inline int32_t ReadUint24(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method ReadUint24, addr 0x3399034, size 0xa4, virtual false, abstract: false, final false
  static inline int32_t ReadUint24(::System::IO::Stream* input);

  /// @brief Method ReadUint32, addr 0x33991f8, size 0x6c, virtual false, abstract: false, final false
  static inline int64_t ReadUint32(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method ReadUint32, addr 0x3399130, size 0xc8, virtual false, abstract: false, final false
  static inline int64_t ReadUint32(::System::IO::Stream* input);

  /// @brief Method ReadUint48, addr 0x33992d8, size 0x88, virtual false, abstract: false, final false
  static inline int64_t ReadUint48(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method ReadUint48, addr 0x3399264, size 0x74, virtual false, abstract: false, final false
  static inline int64_t ReadUint48(::System::IO::Stream* input);

  /// @brief Method ReadUint8, addr 0x3398f24, size 0x2c, virtual false, abstract: false, final false
  static inline uint8_t ReadUint8(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method ReadUint8, addr 0x33935e0, size 0x5c, virtual false, abstract: false, final false
  static inline uint8_t ReadUint8(::System::IO::Stream* input);

  /// @brief Method ReadUint8Array, addr 0x339363c, size 0xd8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadUint8Array(int32_t count, ::System::IO::Stream* input);

  /// @brief Method ReadVersion, addr 0x3399528, size 0xa0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ReadVersion(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method ReadVersion, addr 0x33932c8, size 0xd0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ReadVersion(::System::IO::Stream* input);

  /// @brief Method ReadVersionRaw, addr 0x33995c8, size 0x40, virtual false, abstract: false, final false
  static inline int32_t ReadVersionRaw(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method ReadVersionRaw, addr 0x3399608, size 0x84, virtual false, abstract: false, final false
  static inline int32_t ReadVersionRaw(::System::IO::Stream* input);

  /// @brief Method TrackHashAlgorithms, addr 0x339154c, size 0x3a8, virtual false, abstract: false, final false
  static inline void TrackHashAlgorithms(::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* handshakeHash, ::System::Collections::IList* supportedSignatureAlgorithms);

  /// @brief Method ValidateKeyUsage, addr 0x3388210, size 0xfc, virtual false, abstract: false, final false
  static inline void ValidateKeyUsage(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* c, int32_t keyUsageBits);

  /// @brief Method VectorOfOne, addr 0x3399ca0, size 0xe8, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* VectorOfOne(::System::Object* obj);

  /// @brief Method VerifySupportedSignatureAlgorithm, addr 0x33925d8, size 0x560, virtual false, abstract: false, final false
  static inline void VerifySupportedSignatureAlgorithm(::System::Collections::IList* supportedSignatureAlgorithms, ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* signatureAlgorithm);

  /// @brief Method WriteGmtUnixTime, addr 0x33998ac, size 0xf8, virtual false, abstract: false, final false
  static inline void WriteGmtUnixTime(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteOpaque16, addr 0x338d928, size 0x94, virtual false, abstract: false, final false
  static inline void WriteOpaque16(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, ::System::IO::Stream* output);

  /// @brief Method WriteOpaque24, addr 0x3398a54, size 0x94, virtual false, abstract: false, final false
  static inline void WriteOpaque24(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, ::System::IO::Stream* output);

  /// @brief Method WriteOpaque8, addr 0x33944fc, size 0xa0, virtual false, abstract: false, final false
  static inline void WriteOpaque8(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, ::System::IO::Stream* output);

  /// @brief Method WriteUint16, addr 0x338c5b0, size 0x48, virtual false, abstract: false, final false
  static inline void WriteUint16(int32_t i, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteUint16, addr 0x339462c, size 0x50, virtual false, abstract: false, final false
  static inline void WriteUint16(int32_t i, ::System::IO::Stream* output);

  /// @brief Method WriteUint16Array, addr 0x3398dcc, size 0xc0, virtual false, abstract: false, final false
  static inline void WriteUint16Array(::ArrayW<int32_t, ::Array<int32_t>*> uints, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteUint16Array, addr 0x3398d18, size 0xb4, virtual false, abstract: false, final false
  static inline void WriteUint16Array(::ArrayW<int32_t, ::Array<int32_t>*> uints, ::System::IO::Stream* output);

  /// @brief Method WriteUint16ArrayWithUint16Length, addr 0x3398e8c, size 0x98, virtual false, abstract: false, final false
  static inline void WriteUint16ArrayWithUint16Length(::ArrayW<int32_t, ::Array<int32_t>*> uints, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteUint16ArrayWithUint16Length, addr 0x3396d94, size 0x8c, virtual false, abstract: false, final false
  static inline void WriteUint16ArrayWithUint16Length(::ArrayW<int32_t, ::Array<int32_t>*> uints, ::System::IO::Stream* output);

  /// @brief Method WriteUint24, addr 0x3394824, size 0x64, virtual false, abstract: false, final false
  static inline void WriteUint24(int32_t i, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteUint24, addr 0x33986a4, size 0x68, virtual false, abstract: false, final false
  static inline void WriteUint24(int32_t i, ::System::IO::Stream* output);

  /// @brief Method WriteUint32, addr 0x339878c, size 0x80, virtual false, abstract: false, final false
  static inline void WriteUint32(int64_t i, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteUint32, addr 0x339870c, size 0x80, virtual false, abstract: false, final false
  static inline void WriteUint32(int64_t i, ::System::IO::Stream* output);

  /// @brief Method WriteUint48, addr 0x33988bc, size 0xb8, virtual false, abstract: false, final false
  static inline void WriteUint48(int64_t i, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteUint48, addr 0x339880c, size 0xb0, virtual false, abstract: false, final false
  static inline void WriteUint48(int64_t i, ::System::IO::Stream* output);

  /// @brief Method WriteUint64, addr 0x338c440, size 0xf0, virtual false, abstract: false, final false
  static inline void WriteUint64(int64_t i, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteUint64, addr 0x3398974, size 0xe0, virtual false, abstract: false, final false
  static inline void WriteUint64(int64_t i, ::System::IO::Stream* output);

  /// @brief Method WriteUint8, addr 0x338c530, size 0x2c, virtual false, abstract: false, final false
  static inline void WriteUint8(uint8_t i, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteUint8, addr 0x339467c, size 0x28, virtual false, abstract: false, final false
  static inline void WriteUint8(uint8_t i, ::System::IO::Stream* output);

  /// @brief Method WriteUint8Array, addr 0x3398b20, size 0xc0, virtual false, abstract: false, final false
  static inline void WriteUint8Array(::ArrayW<uint8_t, ::Array<uint8_t>*> uints, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteUint8Array, addr 0x3398ae8, size 0x38, virtual false, abstract: false, final false
  static inline void WriteUint8Array(::ArrayW<uint8_t, ::Array<uint8_t>*> uints, ::System::IO::Stream* output);

  /// @brief Method WriteUint8ArrayWithUint8Length, addr 0x3398c88, size 0x90, virtual false, abstract: false, final false
  static inline void WriteUint8ArrayWithUint8Length(::ArrayW<uint8_t, ::Array<uint8_t>*> uints, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteUint8ArrayWithUint8Length, addr 0x3398be0, size 0xa8, virtual false, abstract: false, final false
  static inline void WriteUint8ArrayWithUint8Length(::ArrayW<uint8_t, ::Array<uint8_t>*> uints, ::System::IO::Stream* output);

  /// @brief Method WriteVersion, addr 0x338c55c, size 0x54, virtual false, abstract: false, final false
  static inline void WriteVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* version, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteVersion, addr 0x33944a4, size 0x58, virtual false, abstract: false, final false
  static inline void WriteVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* version, ::System::IO::Stream* output);

  /// @brief Method .ctor, addr 0x339d900, size 0x4, virtual false, abstract: false, final false
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
