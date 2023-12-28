#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsUtilities)
namespace Org::BouncyCastle::Asn1::X509 {
class X509CertificateStructure;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsHandshakeHash;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SessionParameters;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSigner;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ProtocolVersion;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSignerCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSession;
}
namespace System::Net::Sockets {
class SocketException;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SignatureAndHashAlgorithm;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
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
// Type: Org.BouncyCastle.Crypto.Tls::TlsUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1332))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsUtilities*
class CORDL_TYPE TlsUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field EmptyBytes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EmptyBytes, put = setStaticF_EmptyBytes))::ArrayW<uint8_t, ::Array<uint8_t>*> EmptyBytes;

  /// @brief Field EmptyShorts, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EmptyShorts, put = setStaticF_EmptyShorts))::ArrayW<int16_t, ::Array<int16_t>*> EmptyShorts;

  /// @brief Field EmptyInts, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EmptyInts, put = setStaticF_EmptyInts))::ArrayW<int32_t, ::Array<int32_t>*> EmptyInts;

  /// @brief Field EmptyLongs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EmptyLongs, put = setStaticF_EmptyLongs))::ArrayW<int64_t, ::Array<int64_t>*> EmptyLongs;

  /// @brief Field SSL_CLIENT, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SSL_CLIENT, put = setStaticF_SSL_CLIENT))::ArrayW<uint8_t, ::Array<uint8_t>*> SSL_CLIENT;

  /// @brief Field SSL_SERVER, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SSL_SERVER, put = setStaticF_SSL_SERVER))::ArrayW<uint8_t, ::Array<uint8_t>*> SSL_SERVER;

  /// @brief Field SSL3_CONST, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SSL3_CONST, put = setStaticF_SSL3_CONST))::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> SSL3_CONST;

  static inline void setStaticF_EmptyBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_EmptyBytes();

  static inline void setStaticF_EmptyShorts(::ArrayW<int16_t, ::Array<int16_t>*> value);

  static inline ::ArrayW<int16_t, ::Array<int16_t>*> getStaticF_EmptyShorts();

  static inline void setStaticF_EmptyInts(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_EmptyInts();

  static inline void setStaticF_EmptyLongs(::ArrayW<int64_t, ::Array<int64_t>*> value);

  static inline ::ArrayW<int64_t, ::Array<int64_t>*> getStaticF_EmptyLongs();

  static inline void setStaticF_SSL_CLIENT(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_SSL_CLIENT();

  static inline void setStaticF_SSL_SERVER(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_SSL_SERVER();

  static inline void setStaticF_SSL3_CONST(::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> value);

  static inline ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> getStaticF_SSL3_CONST();

  /// @brief Method CheckUint8 addr 0xfba4ec size 0x94 virtual false final false
  static inline void CheckUint8(int32_t i);

  /// @brief Method CheckUint8 addr 0xfba58c size 0x94 virtual false final false
  static inline void CheckUint8(int64_t i);

  /// @brief Method CheckUint16 addr 0xfadc88 size 0x94 virtual false final false
  static inline void CheckUint16(int32_t i);

  /// @brief Method CheckUint16 addr 0xfba638 size 0x94 virtual false final false
  static inline void CheckUint16(int64_t i);

  /// @brief Method CheckUint24 addr 0xfba6d8 size 0x94 virtual false final false
  static inline void CheckUint24(int32_t i);

  /// @brief Method CheckUint24 addr 0xfba77c size 0x94 virtual false final false
  static inline void CheckUint24(int64_t i);

  /// @brief Method CheckUint32 addr 0xfba820 size 0x94 virtual false final false
  static inline void CheckUint32(int64_t i);

  /// @brief Method CheckUint48 addr 0xfba8c4 size 0x94 virtual false final false
  static inline void CheckUint48(int64_t i);

  /// @brief Method CheckUint64 addr 0xfba968 size 0x54 virtual false final false
  static inline void CheckUint64(int64_t i);

  /// @brief Method IsValidUint8 addr 0xfba580 size 0xc virtual false final false
  static inline bool IsValidUint8(int32_t i);

  /// @brief Method IsValidUint8 addr 0xfba620 size 0xc virtual false final false
  static inline bool IsValidUint8(int64_t i);

  /// @brief Method IsValidUint16 addr 0xfba62c size 0xc virtual false final false
  static inline bool IsValidUint16(int32_t i);

  /// @brief Method IsValidUint16 addr 0xfba6cc size 0xc virtual false final false
  static inline bool IsValidUint16(int64_t i);

  /// @brief Method IsValidUint24 addr 0xfba76c size 0x10 virtual false final false
  static inline bool IsValidUint24(int32_t i);

  /// @brief Method IsValidUint24 addr 0xfba810 size 0x10 virtual false final false
  static inline bool IsValidUint24(int64_t i);

  /// @brief Method IsValidUint32 addr 0xfba8b4 size 0x10 virtual false final false
  static inline bool IsValidUint32(int64_t i);

  /// @brief Method IsValidUint48 addr 0xfba958 size 0x10 virtual false final false
  static inline bool IsValidUint48(int64_t i);

  /// @brief Method IsValidUint64 addr 0xfba9bc size 0x8 virtual false final false
  static inline bool IsValidUint64(int64_t i);

  /// @brief Method IsSsl addr 0xfae458 size 0xac virtual false final false
  static inline bool IsSsl(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  /// @brief Method IsTlsV11 addr 0xfba9c4 size 0x80 virtual false final false
  static inline bool IsTlsV11(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* version);

  /// @brief Method IsTlsV11 addr 0xfbaa44 size 0xd4 virtual false final false
  static inline bool IsTlsV11(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  /// @brief Method IsTlsV12 addr 0xfbab18 size 0x80 virtual false final false
  static inline bool IsTlsV12(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* version);

  /// @brief Method IsTlsV12 addr 0xfb20a0 size 0xd4 virtual false final false
  static inline bool IsTlsV12(::Org::BouncyCastle::Crypto::Tls::TlsContext* context);

  /// @brief Method WriteUint8 addr 0xfb6a48 size 0x2c virtual false final false
  static inline void WriteUint8(uint8_t i, ::System::IO::Stream* output);

  /// @brief Method WriteUint8 addr 0xfae8f8 size 0x2c virtual false final false
  static inline void WriteUint8(uint8_t i, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteUint16 addr 0xfb69f8 size 0x50 virtual false final false
  static inline void WriteUint16(int32_t i, ::System::IO::Stream* output);

  /// @brief Method WriteUint16 addr 0xfae994 size 0x48 virtual false final false
  static inline void WriteUint16(int32_t i, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteUint24 addr 0xfbab98 size 0x68 virtual false final false
  static inline void WriteUint24(int32_t i, ::System::IO::Stream* output);

  /// @brief Method WriteUint24 addr 0xfb6bf4 size 0x64 virtual false final false
  static inline void WriteUint24(int32_t i, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteUint32 addr 0xfbac00 size 0x80 virtual false final false
  static inline void WriteUint32(int64_t i, ::System::IO::Stream* output);

  /// @brief Method WriteUint32 addr 0xfbac80 size 0x80 virtual false final false
  static inline void WriteUint32(int64_t i, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteUint48 addr 0xfbad00 size 0xb0 virtual false final false
  static inline void WriteUint48(int64_t i, ::System::IO::Stream* output);

  /// @brief Method WriteUint48 addr 0xfbadb0 size 0xb8 virtual false final false
  static inline void WriteUint48(int64_t i, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteUint64 addr 0xfbae68 size 0xe0 virtual false final false
  static inline void WriteUint64(int64_t i, ::System::IO::Stream* output);

  /// @brief Method WriteUint64 addr 0xfae808 size 0xf0 virtual false final false
  static inline void WriteUint64(int64_t i, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteOpaque8 addr 0xfb68d8 size 0x94 virtual false final false
  static inline void WriteOpaque8(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, ::System::IO::Stream* output);

  /// @brief Method WriteOpaque16 addr 0xfafd14 size 0x88 virtual false final false
  static inline void WriteOpaque16(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, ::System::IO::Stream* output);

  /// @brief Method WriteOpaque24 addr 0xfbaf48 size 0x88 virtual false final false
  static inline void WriteOpaque24(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, ::System::IO::Stream* output);

  /// @brief Method WriteUint8Array addr 0xfbafd0 size 0x38 virtual false final false
  static inline void WriteUint8Array(::ArrayW<uint8_t, ::Array<uint8_t>*> uints, ::System::IO::Stream* output);

  /// @brief Method WriteUint8Array addr 0xfbb008 size 0xc8 virtual false final false
  static inline void WriteUint8Array(::ArrayW<uint8_t, ::Array<uint8_t>*> uints, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteUint8ArrayWithUint8Length addr 0xfbb0d0 size 0x88 virtual false final false
  static inline void WriteUint8ArrayWithUint8Length(::ArrayW<uint8_t, ::Array<uint8_t>*> uints, ::System::IO::Stream* output);

  /// @brief Method WriteUint8ArrayWithUint8Length addr 0xfbb158 size 0x8c virtual false final false
  static inline void WriteUint8ArrayWithUint8Length(::ArrayW<uint8_t, ::Array<uint8_t>*> uints, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteUint16Array addr 0xfbb1e4 size 0xb0 virtual false final false
  static inline void WriteUint16Array(::ArrayW<int32_t, ::Array<int32_t>*> uints, ::System::IO::Stream* output);

  /// @brief Method WriteUint16Array addr 0xfbb294 size 0xbc virtual false final false
  static inline void WriteUint16Array(::ArrayW<int32_t, ::Array<int32_t>*> uints, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteUint16ArrayWithUint16Length addr 0xfb920c size 0x80 virtual false final false
  static inline void WriteUint16ArrayWithUint16Length(::ArrayW<int32_t, ::Array<int32_t>*> uints, ::System::IO::Stream* output);

  /// @brief Method WriteUint16ArrayWithUint16Length addr 0xfbb350 size 0x94 virtual false final false
  static inline void WriteUint16ArrayWithUint16Length(::ArrayW<int32_t, ::Array<int32_t>*> uints, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method DecodeUint8 addr 0xfadf18 size 0xe4 virtual false final false
  static inline uint8_t DecodeUint8(::ArrayW<uint8_t, ::Array<uint8_t>*> buf);

  /// @brief Method DecodeUint8ArrayWithUint8Length addr 0xfaddac size 0x16c virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DecodeUint8ArrayWithUint8Length(::ArrayW<uint8_t, ::Array<uint8_t>*> buf);

  /// @brief Method EncodeOpaque8 addr 0xfb8d5c size 0x90 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeOpaque8(::ArrayW<uint8_t, ::Array<uint8_t>*> buf);

  /// @brief Method EncodeUint8 addr 0xfadba0 size 0x90 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeUint8(uint8_t val);

  /// @brief Method EncodeUint8ArrayWithUint8Length addr 0xfadb08 size 0x98 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeUint8ArrayWithUint8Length(::ArrayW<uint8_t, ::Array<uint8_t>*> uints);

  /// @brief Method EncodeUint16ArrayWithUint16Length addr 0xfbb410 size 0x9c virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeUint16ArrayWithUint16Length(::ArrayW<int32_t, ::Array<int32_t>*> uints);

  /// @brief Method ReadUint8 addr 0xfb5a08 size 0x64 virtual false final false
  static inline uint8_t ReadUint8(::System::IO::Stream* input);

  /// @brief Method ReadUint8 addr 0xfbb3e4 size 0x2c virtual false final false
  static inline uint8_t ReadUint8(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method ReadUint16 addr 0xfb58ac size 0x8c virtual false final false
  static inline int32_t ReadUint16(::System::IO::Stream* input);

  /// @brief Method ReadUint16 addr 0xfbb4ac size 0x40 virtual false final false
  static inline int32_t ReadUint16(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method ReadUint24 addr 0xfbb4ec size 0xac virtual false final false
  static inline int32_t ReadUint24(::System::IO::Stream* input);

  /// @brief Method ReadUint24 addr 0xfbb598 size 0x58 virtual false final false
  static inline int32_t ReadUint24(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method ReadUint32 addr 0xfbb5f0 size 0xd0 virtual false final false
  static inline int64_t ReadUint32(::System::IO::Stream* input);

  /// @brief Method ReadUint32 addr 0xfbb6c0 size 0x6c virtual false final false
  static inline int64_t ReadUint32(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method ReadUint48 addr 0xfbb72c size 0x70 virtual false final false
  static inline int64_t ReadUint48(::System::IO::Stream* input);

  /// @brief Method ReadUint48 addr 0xfbb79c size 0x84 virtual false final false
  static inline int64_t ReadUint48(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method ReadAllOrNothing addr 0xfbb820 size 0xf0 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadAllOrNothing(int32_t length, ::System::IO::Stream* input);

  /// @brief Method ReadFully addr 0xfb57c8 size 0xe4 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadFully(int32_t length, ::System::IO::Stream* input);

  /// @brief Method ReadFully addr 0xfbb910 size 0x78 virtual false final false
  static inline void ReadFully(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, ::System::IO::Stream* input);

  /// @brief Method ReadOpaque8 addr 0xfaa95c size 0x8c virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadOpaque8(::System::IO::Stream* input);

  /// @brief Method ReadOpaque16 addr 0xfb01b8 size 0x8c virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadOpaque16(::System::IO::Stream* input);

  /// @brief Method ReadOpaque24 addr 0xfbb988 size 0x5c virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadOpaque24(::System::IO::Stream* input);

  /// @brief Method ReadUint8Array addr 0xfb5a6c size 0xd0 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadUint8Array(int32_t count, ::System::IO::Stream* input);

  /// @brief Method ReadUint16Array addr 0xfb5938 size 0xd0 virtual false final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> ReadUint16Array(int32_t count, ::System::IO::Stream* input);

  /// @brief Method ReadVersion addr 0xfbb9e4 size 0x94 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ReadVersion(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method ReadVersion addr 0xfb56f4 size 0xd4 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ReadVersion(::System::IO::Stream* input);

  /// @brief Method ReadVersionRaw addr 0xfbba78 size 0x40 virtual false final false
  static inline int32_t ReadVersionRaw(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method ReadVersionRaw addr 0xfbbab8 size 0x8c virtual false final false
  static inline int32_t ReadVersionRaw(::System::IO::Stream* input);

  /// @brief Method ReadAsn1Object addr 0xfbbb44 size 0x120 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Object* ReadAsn1Object(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method ReadDerObject addr 0xfbbc64 size 0x104 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Object* ReadDerObject(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method WriteGmtUnixTime addr 0xfbbd68 size 0xf4 virtual false final false
  static inline void WriteGmtUnixTime(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method WriteVersion addr 0xfb6870 size 0x68 virtual false final false
  static inline void WriteVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* version, ::System::IO::Stream* output);

  /// @brief Method WriteVersion addr 0xfae924 size 0x70 virtual false final false
  static inline void WriteVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* version, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset);

  /// @brief Method GetAllSignatureAlgorithms addr 0xfbbe5c size 0x27c virtual false final false
  static inline ::System::Collections::IList* GetAllSignatureAlgorithms();

  /// @brief Method GetDefaultDssSignatureAlgorithms addr 0xfbc0d8 size 0x88 virtual false final false
  static inline ::System::Collections::IList* GetDefaultDssSignatureAlgorithms();

  /// @brief Method GetDefaultECDsaSignatureAlgorithms addr 0xfbc240 size 0x88 virtual false final false
  static inline ::System::Collections::IList* GetDefaultECDsaSignatureAlgorithms();

  /// @brief Method GetDefaultRsaSignatureAlgorithms addr 0xfbc2c8 size 0x88 virtual false final false
  static inline ::System::Collections::IList* GetDefaultRsaSignatureAlgorithms();

  /// @brief Method GetExtensionData addr 0xfad088 size 0x114 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetExtensionData(::System::Collections::IDictionary* extensions, int32_t extensionType);

  /// @brief Method GetDefaultSupportedSignatureAlgorithms addr 0xfbc350 size 0x218 virtual false final false
  static inline ::System::Collections::IList* GetDefaultSupportedSignatureAlgorithms();

  /// @brief Method GetSignatureAndHashAlgorithm addr 0xfab4a4 size 0x128 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* GetSignatureAndHashAlgorithm(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                                                          ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* signerCredentials);

  /// @brief Method HasExpectedEmptyExtensionData addr 0xfb6a74 size 0xb8 virtual false final false
  static inline bool HasExpectedEmptyExtensionData(::System::Collections::IDictionary* extensions, int32_t extensionType, uint8_t alertDescription);

  /// @brief Method ImportSession addr 0xfbc568 size 0x70 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Tls::TlsSession* ImportSession(::ArrayW<uint8_t, ::Array<uint8_t>*> sessionID, ::Org::BouncyCastle::Crypto::Tls::SessionParameters* sessionParameters);

  /// @brief Method IsSignatureAlgorithmsExtensionAllowed addr 0xfbc5d8 size 0x80 virtual false final false
  static inline bool IsSignatureAlgorithmsExtensionAllowed(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* clientVersion);

  /// @brief Method AddSignatureAlgorithmsExtension addr 0xfbc658 size 0x120 virtual false final false
  static inline void AddSignatureAlgorithmsExtension(::System::Collections::IDictionary* extensions, ::System::Collections::IList* supportedSignatureAlgorithms);

  /// @brief Method GetSignatureAlgorithmsExtension addr 0xfbc818 size 0x84 virtual false final false
  static inline ::System::Collections::IList* GetSignatureAlgorithmsExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method CreateSignatureAlgorithmsExtension addr 0xfbc778 size 0xa0 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateSignatureAlgorithmsExtension(::System::Collections::IList* supportedSignatureAlgorithms);

  /// @brief Method ReadSignatureAlgorithmsExtension addr 0xfbc89c size 0xf8 virtual false final false
  static inline ::System::Collections::IList* ReadSignatureAlgorithmsExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method EncodeSupportedSignatureAlgorithms addr 0xfbc994 size 0x5e4 virtual false final false
  static inline void EncodeSupportedSignatureAlgorithms(::System::Collections::IList* supportedSignatureAlgorithms, bool allowAnonymous, ::System::IO::Stream* output);

  /// @brief Method ParseSupportedSignatureAlgorithms addr 0xfbcf78 size 0x1d0 virtual false final false
  static inline ::System::Collections::IList* ParseSupportedSignatureAlgorithms(bool allowAnonymous, ::System::IO::Stream* input);

  /// @brief Method VerifySupportedSignatureAlgorithm addr 0xfb49a0 size 0x59c virtual false final false
  static inline void VerifySupportedSignatureAlgorithm(::System::Collections::IList* supportedSignatureAlgorithms, ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* signatureAlgorithm);

  /// @brief Method PRF addr 0xfbd148 size 0x260 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> PRF(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::ArrayW<uint8_t, ::Array<uint8_t>*> secret, ::StringW asciiLabel,
                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> seed, int32_t size);

  /// @brief Method PRF_legacy addr 0xfbd980 size 0x98 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> PRF_legacy(::ArrayW<uint8_t, ::Array<uint8_t>*> secret, ::StringW asciiLabel, ::ArrayW<uint8_t, ::Array<uint8_t>*> seed, int32_t size);

  /// @brief Method PRF_legacy addr 0xfbd44c size 0x1b8 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> PRF_legacy(::ArrayW<uint8_t, ::Array<uint8_t>*> secret, ::ArrayW<uint8_t, ::Array<uint8_t>*> label, ::ArrayW<uint8_t, ::Array<uint8_t>*> labelSeed,
                                                                int32_t size);

  /// @brief Method Concat addr 0xfbd3a8 size 0xa4 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Concat(::ArrayW<uint8_t, ::Array<uint8_t>*> a, ::ArrayW<uint8_t, ::Array<uint8_t>*> b);

  /// @brief Method HMacHash addr 0xfbd6a0 size 0x2e0 virtual false final false
  static inline void HMacHash(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t, ::Array<uint8_t>*> secret, ::ArrayW<uint8_t, ::Array<uint8_t>*> seed,
                              ::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  /// @brief Method ValidateKeyUsage addr 0xfaa5b4 size 0xf8 virtual false final false
  static inline void ValidateKeyUsage(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* c, int32_t keyUsageBits);

  /// @brief Method CalculateKeyBlock addr 0xfaf1c8 size 0x1a0 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateKeyBlock(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, int32_t size);

  /// @brief Method CalculateKeyBlock_Ssl addr 0xfbda18 size 0x538 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateKeyBlock_Ssl(::ArrayW<uint8_t, ::Array<uint8_t>*> master_secret, ::ArrayW<uint8_t, ::Array<uint8_t>*> random, int32_t size);

  /// @brief Method CalculateMasterSecret addr 0xfbdf50 size 0x214 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateMasterSecret(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::ArrayW<uint8_t, ::Array<uint8_t>*> pre_master_secret);

  /// @brief Method CalculateMasterSecret_Ssl addr 0xfbe164 size 0x4f8 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateMasterSecret_Ssl(::ArrayW<uint8_t, ::Array<uint8_t>*> pre_master_secret, ::ArrayW<uint8_t, ::Array<uint8_t>*> random);

  /// @brief Method CalculateVerifyData addr 0xfbe65c size 0x158 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateVerifyData(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::StringW asciiLabel,
                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> handshakeHash);

  /// @brief Method CreateHash addr 0xfabdb8 size 0x1d8 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::IDigest* CreateHash(uint8_t hashAlgorithm);

  /// @brief Method CreateHash addr 0xfab5cc size 0xb0 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::IDigest* CreateHash(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* signatureAndHashAlgorithm);

  /// @brief Method CloneHash addr 0xfbe7b4 size 0x334 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::IDigest* CloneHash(uint8_t hashAlgorithm, ::Org::BouncyCastle::Crypto::IDigest* hash);

  /// @brief Method CreatePrfHash addr 0xfbd604 size 0x9c virtual false final false
  static inline ::Org::BouncyCastle::Crypto::IDigest* CreatePrfHash(int32_t prfAlgorithm);

  /// @brief Method ClonePrfHash addr 0xfbeba0 size 0xe4 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::IDigest* ClonePrfHash(int32_t prfAlgorithm, ::Org::BouncyCastle::Crypto::IDigest* hash);

  /// @brief Method GetHashAlgorithmForPrfAlgorithm addr 0xfbeae8 size 0xb8 virtual false final false
  static inline uint8_t GetHashAlgorithmForPrfAlgorithm(int32_t prfAlgorithm);

  /// @brief Method GetOidForHashAlgorithm addr 0xfb2174 size 0x19c virtual false final false
  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetOidForHashAlgorithm(uint8_t hashAlgorithm);

  /// @brief Method GetClientCertificateType addr 0xfb40dc size 0x33c virtual false final false
  static inline int16_t GetClientCertificateType(::Org::BouncyCastle::Crypto::Tls::Certificate* clientCertificate, ::Org::BouncyCastle::Crypto::Tls::Certificate* serverCertificate);

  /// @brief Method TrackHashAlgorithms addr 0xfb38d0 size 0x3cc virtual false final false
  static inline void TrackHashAlgorithms(::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* handshakeHash, ::System::Collections::IList* supportedSignatureAlgorithms);

  /// @brief Method HasSigningCapability addr 0xfb6d60 size 0x24 virtual false final false
  static inline bool HasSigningCapability(uint8_t clientCertificateType);

  /// @brief Method CreateTlsSigner addr 0xfb4f3c size 0x160 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Tls::TlsSigner* CreateTlsSigner(uint8_t clientCertificateType);

  /// @brief Method GenSsl3Const addr 0xfbec84 size 0x114 virtual false final false
  static inline ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> GenSsl3Const();

  /// @brief Method VectorOfOne addr 0xfbc160 size 0xe0 virtual false final false
  static inline ::System::Collections::IList* VectorOfOne(::System::Object* obj);

  /// @brief Method GetCipherType addr 0xfbed98 size 0xbc virtual false final false
  static inline int32_t GetCipherType(int32_t ciphersuite);

  /// @brief Method GetEncryptionAlgorithm addr 0xfbee54 size 0x124 virtual false final false
  static inline int32_t GetEncryptionAlgorithm(int32_t ciphersuite);

  /// @brief Method GetKeyExchangeAlgorithm addr 0xfbef78 size 0x140 virtual false final false
  static inline int32_t GetKeyExchangeAlgorithm(int32_t ciphersuite);

  /// @brief Method GetMacAlgorithm addr 0xfbf0b8 size 0xc4 virtual false final false
  static inline int32_t GetMacAlgorithm(int32_t ciphersuite);

  /// @brief Method GetMinimumVersion addr 0xfbf17c size 0x110 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* GetMinimumVersion(int32_t ciphersuite);

  /// @brief Method IsAeadCipherSuite addr 0xfbf28c size 0x60 virtual false final false
  static inline bool IsAeadCipherSuite(int32_t ciphersuite);

  /// @brief Method IsBlockCipherSuite addr 0xfbf2ec size 0x60 virtual false final false
  static inline bool IsBlockCipherSuite(int32_t ciphersuite);

  /// @brief Method IsStreamCipherSuite addr 0xfbf34c size 0x60 virtual false final false
  static inline bool IsStreamCipherSuite(int32_t ciphersuite);

  /// @brief Method IsValidCipherSuiteForSignatureAlgorithms addr 0xfbf3ac size 0x2a4 virtual false final false
  static inline bool IsValidCipherSuiteForSignatureAlgorithms(int32_t cipherSuite, ::System::Collections::IList* sigAlgs);

  /// @brief Method IsValidCipherSuiteForVersion addr 0xfb696c size 0x8c virtual false final false
  static inline bool IsValidCipherSuiteForVersion(int32_t cipherSuite, ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* serverVersion);

  /// @brief Method GetUsableSignatureAlgorithms addr 0xfbf650 size 0x560 virtual false final false
  static inline ::System::Collections::IList* GetUsableSignatureAlgorithms(::System::Collections::IList* sigHashAlgs);

  /// @brief Method IsTimeout addr 0xfbfbb0 size 0x2c virtual false final false
  static inline bool IsTimeout(::System::Net::Sockets::SocketException* e);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsUtilities* New_ctor();

  /// @brief Method .ctor addr 0xfbfd68 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TlsUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsUtilities(TlsUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsUtilities(TlsUtilities const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsUtilities();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsUtilities*, "Org.BouncyCastle.Crypto.Tls", "TlsUtilities");
