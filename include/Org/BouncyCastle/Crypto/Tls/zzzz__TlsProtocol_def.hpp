#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsProtocol)
namespace Org::BouncyCastle::Crypto::Prng {
class IRandomGenerator;
}
namespace Org::BouncyCastle::Crypto::Tls {
class AbstractTlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ByteQueueStream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ByteQueue;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class RecordStream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SecurityParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SessionParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCloseable;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsHandshakeHash;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPeer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSession;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsStream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __TlsProtocol__HandshakeMessage;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IList;
}
namespace System::IO {
class MemoryStream;
}
namespace System::IO {
class Stream;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsProtocol;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __TlsProtocol__HandshakeMessage;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsProtocol);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage);
// Type: ::HandshakeMessage
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::TlsProtocol::HandshakeMessage*
class CORDL_TYPE __TlsProtocol__HandshakeMessage : public ::System::IO::MemoryStream {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage* New_ctor(uint8_t handshakeType);

  static inline ::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage* New_ctor(uint8_t handshakeType, int32_t length);

  /// @brief Method Write, addr 0x11ff64c, size 0x28, virtual false, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method WriteToRecordStream, addr 0x11fdd68, size 0x124, virtual false, abstract: false, final false
  inline void WriteToRecordStream(::Org::BouncyCastle::Crypto::Tls::TlsProtocol* protocol);

  /// @brief Method .ctor, addr 0x11fdd60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint8_t handshakeType);

  /// @brief Method .ctor, addr 0x11fe054, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(uint8_t handshakeType, int32_t length);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TlsProtocol__HandshakeMessage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TlsProtocol__HandshakeMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TlsProtocol__HandshakeMessage(__TlsProtocol__HandshakeMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TlsProtocol__HandshakeMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TlsProtocol__HandshakeMessage(__TlsProtocol__HandshakeMessage const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
// Type: Org.BouncyCastle.Crypto.Tls::TlsProtocol
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsProtocol*
class CORDL_TYPE TlsProtocol : public ::System::Object {
public:
  // Declarations
  using HandshakeMessage = ::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage;

  __declspec(property(get = get_Context))::Org::BouncyCastle::Crypto::Tls::TlsContext* Context;

  __declspec(property(get = get_ContextAdmin))::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext* ContextAdmin;

  __declspec(property(get = get_IsClosed)) bool IsClosed;

  __declspec(property(get = get_Peer))::Org::BouncyCastle::Crypto::Tls::TlsPeer* Peer;

  __declspec(property(get = get_Stream))::System::IO::Stream* Stream;

  /// @brief Field mAlertQueue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mAlertQueue, put = __cordl_internal_set_mAlertQueue))::Org::BouncyCastle::Crypto::Tls::ByteQueue* mAlertQueue;

  /// @brief Field mAllowCertificateStatus, offset 0x95, size 0x1
  __declspec(property(get = __cordl_internal_get_mAllowCertificateStatus, put = __cordl_internal_set_mAllowCertificateStatus)) bool mAllowCertificateStatus;

  /// @brief Field mAppDataReady, offset 0x42, size 0x1
  __declspec(property(get = __cordl_internal_get_mAppDataReady, put = __cordl_internal_set_mAppDataReady)) bool mAppDataReady;

  /// @brief Field mAppDataSplitEnabled, offset 0x43, size 0x1
  __declspec(property(get = __cordl_internal_get_mAppDataSplitEnabled, put = __cordl_internal_set_mAppDataSplitEnabled)) bool mAppDataSplitEnabled;

  /// @brief Field mAppDataSplitMode, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_mAppDataSplitMode, put = __cordl_internal_set_mAppDataSplitMode)) int32_t mAppDataSplitMode;

  /// @brief Field mApplicationDataQueue, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mApplicationDataQueue, put = __cordl_internal_set_mApplicationDataQueue))::Org::BouncyCastle::Crypto::Tls::ByteQueue* mApplicationDataQueue;

  /// @brief Field mBlocking, offset 0x97, size 0x1
  __declspec(property(get = __cordl_internal_get_mBlocking, put = __cordl_internal_set_mBlocking)) bool mBlocking;

  /// @brief Field mClientExtensions, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_mClientExtensions, put = __cordl_internal_set_mClientExtensions))::System::Collections::IDictionary* mClientExtensions;

  /// @brief Field mClosed, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_mClosed, put = __cordl_internal_set_mClosed)) bool mClosed;

  /// @brief Field mConnectionState, offset 0x90, size 0x2
  __declspec(property(get = __cordl_internal_get_mConnectionState, put = __cordl_internal_set_mConnectionState)) int16_t mConnectionState;

  /// @brief Field mExpectSessionTicket, offset 0x96, size 0x1
  __declspec(property(get = __cordl_internal_get_mExpectSessionTicket, put = __cordl_internal_set_mExpectSessionTicket)) bool mExpectSessionTicket;

  /// @brief Field mExpectedVerifyData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_mExpectedVerifyData, put = __cordl_internal_set_mExpectedVerifyData))::ArrayW<uint8_t, ::Array<uint8_t>*> mExpectedVerifyData;

  /// @brief Field mFailedWithError, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get_mFailedWithError, put = __cordl_internal_set_mFailedWithError)) bool mFailedWithError;

  /// @brief Field mHandshakeQueue, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mHandshakeQueue, put = __cordl_internal_set_mHandshakeQueue))::Org::BouncyCastle::Crypto::Tls::ByteQueue* mHandshakeQueue;

  /// @brief Field mInputBuffers, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_mInputBuffers, put = __cordl_internal_set_mInputBuffers))::Org::BouncyCastle::Crypto::Tls::ByteQueueStream* mInputBuffers;

  /// @brief Field mOfferedCipherSuites, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_mOfferedCipherSuites, put = __cordl_internal_set_mOfferedCipherSuites))::ArrayW<int32_t, ::Array<int32_t>*> mOfferedCipherSuites;

  /// @brief Field mOfferedCompressionMethods, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_mOfferedCompressionMethods, put = __cordl_internal_set_mOfferedCompressionMethods))::ArrayW<uint8_t, ::Array<uint8_t>*> mOfferedCompressionMethods;

  /// @brief Field mOutputBuffer, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_mOutputBuffer, put = __cordl_internal_set_mOutputBuffer))::Org::BouncyCastle::Crypto::Tls::ByteQueueStream* mOutputBuffer;

  /// @brief Field mPeerCertificate, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_mPeerCertificate, put = __cordl_internal_set_mPeerCertificate))::Org::BouncyCastle::Crypto::Tls::Certificate* mPeerCertificate;

  /// @brief Field mReceivedChangeCipherSpec, offset 0x93, size 0x1
  __declspec(property(get = __cordl_internal_get_mReceivedChangeCipherSpec, put = __cordl_internal_set_mReceivedChangeCipherSpec)) bool mReceivedChangeCipherSpec;

  /// @brief Field mRecordStream, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mRecordStream, put = __cordl_internal_set_mRecordStream))::Org::BouncyCastle::Crypto::Tls::RecordStream* mRecordStream;

  /// @brief Field mResumedSession, offset 0x92, size 0x1
  __declspec(property(get = __cordl_internal_get_mResumedSession, put = __cordl_internal_set_mResumedSession)) bool mResumedSession;

  /// @brief Field mSecureRandom, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mSecureRandom, put = __cordl_internal_set_mSecureRandom))::Org::BouncyCastle::Security::SecureRandom* mSecureRandom;

  /// @brief Field mSecureRenegotiation, offset 0x94, size 0x1
  __declspec(property(get = __cordl_internal_get_mSecureRenegotiation, put = __cordl_internal_set_mSecureRenegotiation)) bool mSecureRenegotiation;

  /// @brief Field mSecurityParameters, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_mSecurityParameters, put = __cordl_internal_set_mSecurityParameters))::Org::BouncyCastle::Crypto::Tls::SecurityParameters* mSecurityParameters;

  /// @brief Field mServerExtensions, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_mServerExtensions, put = __cordl_internal_set_mServerExtensions))::System::Collections::IDictionary* mServerExtensions;

  /// @brief Field mSessionParameters, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_mSessionParameters, put = __cordl_internal_set_mSessionParameters))::Org::BouncyCastle::Crypto::Tls::SessionParameters* mSessionParameters;

  /// @brief Field mTlsSession, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_mTlsSession, put = __cordl_internal_set_mTlsSession))::Org::BouncyCastle::Crypto::Tls::TlsSession* mTlsSession;

  /// @brief Field mTlsStream, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mTlsStream, put = __cordl_internal_set_mTlsStream))::Org::BouncyCastle::Crypto::Tls::TlsStream* mTlsStream;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCloseable"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsCloseable*() noexcept;

  /// @brief Method ApplicationDataAvailable, addr 0x11fc27c, size 0x1c, virtual true, abstract: false, final false
  inline int32_t ApplicationDataAvailable();

  /// @brief Method ApplyMaxFragmentLengthExtension, addr 0x11fb680, size 0x98, virtual true, abstract: false, final false
  inline void ApplyMaxFragmentLengthExtension();

  /// @brief Method AssertEmpty, addr 0x11fd798, size 0x8c, virtual false, abstract: false, final false
  static inline void AssertEmpty(::System::IO::MemoryStream* buf);

  /// @brief Method BlockForHandshake, addr 0x11fb810, size 0x90, virtual true, abstract: false, final false
  inline void BlockForHandshake();

  /// @brief Method CheckReceivedChangeCipherSpec, addr 0x11fb718, size 0x5c, virtual true, abstract: false, final false
  inline void CheckReceivedChangeCipherSpec(bool expected);

  /// @brief Method CleanupHandshake, addr 0x11fb774, size 0x9c, virtual true, abstract: false, final false
  inline void CleanupHandshake();

  /// @brief Method Close, addr 0x11fe840, size 0x10, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method CloseInput, addr 0x11fcef8, size 0x124, virtual true, abstract: false, final false
  inline void CloseInput();

  /// @brief Method CompleteHandshake, addr 0x11fb8a0, size 0x52c, virtual true, abstract: false, final false
  inline void CompleteHandshake();

  /// @brief Method CreateRandomBlock, addr 0x11fea20, size 0x114, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateRandomBlock(bool useGmtUnixTime, ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* randomGenerator);

  /// @brief Method CreateRenegotiationInfo, addr 0x11feb34, size 0x58, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateRenegotiationInfo(::ArrayW<uint8_t, ::Array<uint8_t>*> renegotiated_connection);

  /// @brief Method CreateVerifyData, addr 0x11fe580, size 0x120, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateVerifyData(bool isServer);

  /// @brief Method EstablishMasterSecret, addr 0x11feb8c, size 0x230, virtual false, abstract: false, final false
  static inline void EstablishMasterSecret(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* keyExchange);

  /// @brief Method Flush, addr 0x11fe850, size 0x24, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method GetAvailableInputBytes, addr 0x11fd288, size 0x6c, virtual true, abstract: false, final false
  inline int32_t GetAvailableInputBytes();

  /// @brief Method GetAvailableOutputBytes, addr 0x11fd4d4, size 0x78, virtual true, abstract: false, final false
  inline int32_t GetAvailableOutputBytes();

  /// @brief Method GetCurrentPrfHash, addr 0x11fe6a0, size 0x1a0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetCurrentPrfHash(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* handshakeHash,
                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> sslSender);

  /// @brief Method GetPrfAlgorithm, addr 0x11ff4e4, size 0x168, virtual false, abstract: false, final false
  static inline int32_t GetPrfAlgorithm(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, int32_t ciphersuite);

  /// @brief Method HandleAlertMessage, addr 0x11fb2c0, size 0x13c, virtual true, abstract: false, final false
  inline void HandleAlertMessage(uint8_t alertLevel, uint8_t alertDescription);

  /// @brief Method HandleAlertWarningMessage, addr 0x11fb3fc, size 0x88, virtual true, abstract: false, final false
  inline void HandleAlertWarningMessage(uint8_t alertDescription);

  /// @brief Method HandleChangeCipherSpecMessage, addr 0x11fb484, size 0x4, virtual true, abstract: false, final false
  inline void HandleChangeCipherSpecMessage();

  /// @brief Method HandleClose, addr 0x11fb488, size 0xfc, virtual true, abstract: false, final false
  inline void HandleClose(bool user_canceled);

  /// @brief Method HandleException, addr 0x11fb584, size 0x78, virtual true, abstract: false, final false
  inline void HandleException(uint8_t alertDescription, ::StringW message, ::System::Exception* cause);

  /// @brief Method HandleFailure, addr 0x11fb5fc, size 0x84, virtual true, abstract: false, final false
  inline void HandleFailure();

  /// @brief Method HandleHandshakeMessage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void HandleHandshakeMessage(uint8_t type, ::System::IO::MemoryStream* buf);

  /// @brief Method InvalidateSession, addr 0x11fd5c4, size 0xb8, virtual true, abstract: false, final false
  inline void InvalidateSession();

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsProtocol* New_ctor(::System::IO::Stream* input, ::System::IO::Stream* output, ::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsProtocol* New_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsProtocol* New_ctor(::System::IO::Stream* stream, ::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  /// @brief Method OfferInput, addr 0x11fd01c, size 0x28, virtual true, abstract: false, final false
  inline void OfferInput(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method OfferInput, addr 0x11fd044, size 0x244, virtual true, abstract: false, final false
  inline void OfferInput(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inputOff, int32_t inputLen);

  /// @brief Method OfferOutput, addr 0x11fd3f4, size 0xe0, virtual true, abstract: false, final false
  inline void OfferOutput(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t length);

  /// @brief Method ProcessAlertQueue, addr 0x11fbdcc, size 0x70, virtual false, abstract: false, final false
  inline void ProcessAlertQueue();

  /// @brief Method ProcessApplicationDataQueue, addr 0x11fbe3c, size 0x4, virtual false, abstract: false, final false
  inline void ProcessApplicationDataQueue();

  /// @brief Method ProcessChangeCipherSpec, addr 0x11fbe40, size 0x160, virtual false, abstract: false, final false
  inline void ProcessChangeCipherSpec(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method ProcessFinishedMessage, addr 0x11fd67c, size 0x11c, virtual true, abstract: false, final false
  inline void ProcessFinishedMessage(::System::IO::MemoryStream* buf);

  /// @brief Method ProcessHandshakeQueue, addr 0x11fbfa0, size 0x2dc, virtual false, abstract: false, final false
  inline void ProcessHandshakeQueue(::Org::BouncyCastle::Crypto::Tls::ByteQueue* queue);

  /// @brief Method ProcessMaxFragmentLengthExtension, addr 0x11fe88c, size 0xb0, virtual true, abstract: false, final false
  inline int16_t ProcessMaxFragmentLengthExtension(::System::Collections::IDictionary* clientExtensions, ::System::Collections::IDictionary* serverExtensions, uint8_t alertDescription);

  /// @brief Method ProcessRecord, addr 0x11f3784, size 0x214, virtual false, abstract: false, final false
  inline void ProcessRecord(uint8_t protocol, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method RaiseAlertFatal, addr 0x11fd824, size 0x1d0, virtual true, abstract: false, final false
  inline void RaiseAlertFatal(uint8_t alertDescription, ::StringW message, ::System::Exception* cause);

  /// @brief Method RaiseAlertWarning, addr 0x11fd9f4, size 0x13c, virtual true, abstract: false, final false
  inline void RaiseAlertWarning(uint8_t alertDescription, ::StringW message);

  /// @brief Method ReadApplicationData, addr 0x11fc298, size 0x190, virtual true, abstract: false, final false
  inline int32_t ReadApplicationData(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset, int32_t len);

  /// @brief Method ReadExtensions, addr 0x11f57a8, size 0x314, virtual false, abstract: false, final false
  static inline ::System::Collections::IDictionary* ReadExtensions(::System::IO::MemoryStream* input);

  /// @brief Method ReadInput, addr 0x11fd2f4, size 0x100, virtual true, abstract: false, final false
  inline int32_t ReadInput(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t length);

  /// @brief Method ReadOutput, addr 0x11fd54c, size 0x78, virtual true, abstract: false, final false
  inline int32_t ReadOutput(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t length);

  /// @brief Method ReadSupplementalDataMessage, addr 0x11fedbc, size 0x22c, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* ReadSupplementalDataMessage(::System::IO::MemoryStream* input);

  /// @brief Method RefuseRenegotiation, addr 0x11fe93c, size 0xe4, virtual true, abstract: false, final false
  inline void RefuseRenegotiation();

  /// @brief Method SafeCheckRecordHeader, addr 0x11fc428, size 0x1d4, virtual true, abstract: false, final false
  inline void SafeCheckRecordHeader(::ArrayW<uint8_t, ::Array<uint8_t>*> recordHeader);

  /// @brief Method SafeReadRecord, addr 0x11fc5fc, size 0x298, virtual true, abstract: false, final false
  inline void SafeReadRecord();

  /// @brief Method SafeWriteRecord, addr 0x11fc894, size 0x1d4, virtual true, abstract: false, final false
  inline void SafeWriteRecord(uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset, int32_t len);

  /// @brief Method SendCertificateMessage, addr 0x11fdb30, size 0x230, virtual true, abstract: false, final false
  inline void SendCertificateMessage(::Org::BouncyCastle::Crypto::Tls::Certificate* certificate);

  /// @brief Method SendChangeCipherSpecMessage, addr 0x11fde8c, size 0x98, virtual true, abstract: false, final false
  inline void SendChangeCipherSpecMessage();

  /// @brief Method SendFinishedMessage, addr 0x11fdf24, size 0x130, virtual true, abstract: false, final false
  inline void SendFinishedMessage();

  /// @brief Method SendSupplementalDataMessage, addr 0x11fe0e0, size 0x80, virtual true, abstract: false, final false
  inline void SendSupplementalDataMessage(::System::Collections::IList* supplementalData);

  /// @brief Method SetAppDataSplitMode, addr 0x11fcc50, size 0xb4, virtual true, abstract: false, final false
  inline void SetAppDataSplitMode(int32_t appDataSplitMode);

  /// @brief Method WriteData, addr 0x11fca68, size 0x1e8, virtual true, abstract: false, final false
  inline void WriteData(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset, int32_t len);

  /// @brief Method WriteExtensions, addr 0x11f5d7c, size 0xd4, virtual false, abstract: false, final false
  static inline void WriteExtensions(::System::IO::Stream* output, ::System::Collections::IDictionary* extensions);

  /// @brief Method WriteHandshakeMessage, addr 0x11fcd04, size 0x190, virtual true, abstract: false, final false
  inline void WriteHandshakeMessage(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method WriteSelectedExtensions, addr 0x11fefe8, size 0x4fc, virtual false, abstract: false, final false
  static inline void WriteSelectedExtensions(::System::IO::Stream* output, ::System::Collections::IDictionary* extensions, bool selectEmpty);

  /// @brief Method WriteSupplementalData, addr 0x11fe160, size 0x420, virtual false, abstract: false, final false
  static inline void WriteSupplementalData(::System::IO::Stream* output, ::System::Collections::IList* supplementalData);

  constexpr ::Org::BouncyCastle::Crypto::Tls::ByteQueue*& __cordl_internal_get_mAlertQueue();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::ByteQueue*> const& __cordl_internal_get_mAlertQueue() const;

  constexpr bool const& __cordl_internal_get_mAllowCertificateStatus() const;

  constexpr bool& __cordl_internal_get_mAllowCertificateStatus();

  constexpr bool const& __cordl_internal_get_mAppDataReady() const;

  constexpr bool& __cordl_internal_get_mAppDataReady();

  constexpr bool const& __cordl_internal_get_mAppDataSplitEnabled() const;

  constexpr bool& __cordl_internal_get_mAppDataSplitEnabled();

  constexpr int32_t const& __cordl_internal_get_mAppDataSplitMode() const;

  constexpr int32_t& __cordl_internal_get_mAppDataSplitMode();

  constexpr ::Org::BouncyCastle::Crypto::Tls::ByteQueue*& __cordl_internal_get_mApplicationDataQueue();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::ByteQueue*> const& __cordl_internal_get_mApplicationDataQueue() const;

  constexpr bool const& __cordl_internal_get_mBlocking() const;

  constexpr bool& __cordl_internal_get_mBlocking();

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_mClientExtensions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __cordl_internal_get_mClientExtensions() const;

  constexpr bool const& __cordl_internal_get_mClosed() const;

  constexpr bool& __cordl_internal_get_mClosed();

  constexpr int16_t const& __cordl_internal_get_mConnectionState() const;

  constexpr int16_t& __cordl_internal_get_mConnectionState();

  constexpr bool const& __cordl_internal_get_mExpectSessionTicket() const;

  constexpr bool& __cordl_internal_get_mExpectSessionTicket();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mExpectedVerifyData() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mExpectedVerifyData();

  constexpr bool const& __cordl_internal_get_mFailedWithError() const;

  constexpr bool& __cordl_internal_get_mFailedWithError();

  constexpr ::Org::BouncyCastle::Crypto::Tls::ByteQueue*& __cordl_internal_get_mHandshakeQueue();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::ByteQueue*> const& __cordl_internal_get_mHandshakeQueue() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::ByteQueueStream*& __cordl_internal_get_mInputBuffers();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::ByteQueueStream*> const& __cordl_internal_get_mInputBuffers() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_mOfferedCipherSuites() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_mOfferedCipherSuites();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mOfferedCompressionMethods() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mOfferedCompressionMethods();

  constexpr ::Org::BouncyCastle::Crypto::Tls::ByteQueueStream*& __cordl_internal_get_mOutputBuffer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::ByteQueueStream*> const& __cordl_internal_get_mOutputBuffer() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate*& __cordl_internal_get_mPeerCertificate();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::Certificate*> const& __cordl_internal_get_mPeerCertificate() const;

  constexpr bool const& __cordl_internal_get_mReceivedChangeCipherSpec() const;

  constexpr bool& __cordl_internal_get_mReceivedChangeCipherSpec();

  constexpr ::Org::BouncyCastle::Crypto::Tls::RecordStream*& __cordl_internal_get_mRecordStream();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::RecordStream*> const& __cordl_internal_get_mRecordStream() const;

  constexpr bool const& __cordl_internal_get_mResumedSession() const;

  constexpr bool& __cordl_internal_get_mResumedSession();

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_mSecureRandom();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __cordl_internal_get_mSecureRandom() const;

  constexpr bool const& __cordl_internal_get_mSecureRenegotiation() const;

  constexpr bool& __cordl_internal_get_mSecureRenegotiation();

  constexpr ::Org::BouncyCastle::Crypto::Tls::SecurityParameters*& __cordl_internal_get_mSecurityParameters();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::SecurityParameters*> const& __cordl_internal_get_mSecurityParameters() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_mServerExtensions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __cordl_internal_get_mServerExtensions() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters*& __cordl_internal_get_mSessionParameters();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::SessionParameters*> const& __cordl_internal_get_mSessionParameters() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSession*& __cordl_internal_get_mTlsSession();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsSession*> const& __cordl_internal_get_mTlsSession() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsStream*& __cordl_internal_get_mTlsStream();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsStream*> const& __cordl_internal_get_mTlsStream() const;

  constexpr void __cordl_internal_set_mAlertQueue(::Org::BouncyCastle::Crypto::Tls::ByteQueue* value);

  constexpr void __cordl_internal_set_mAllowCertificateStatus(bool value);

  constexpr void __cordl_internal_set_mAppDataReady(bool value);

  constexpr void __cordl_internal_set_mAppDataSplitEnabled(bool value);

  constexpr void __cordl_internal_set_mAppDataSplitMode(int32_t value);

  constexpr void __cordl_internal_set_mApplicationDataQueue(::Org::BouncyCastle::Crypto::Tls::ByteQueue* value);

  constexpr void __cordl_internal_set_mBlocking(bool value);

  constexpr void __cordl_internal_set_mClientExtensions(::System::Collections::IDictionary* value);

  constexpr void __cordl_internal_set_mClosed(bool value);

  constexpr void __cordl_internal_set_mConnectionState(int16_t value);

  constexpr void __cordl_internal_set_mExpectSessionTicket(bool value);

  constexpr void __cordl_internal_set_mExpectedVerifyData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mFailedWithError(bool value);

  constexpr void __cordl_internal_set_mHandshakeQueue(::Org::BouncyCastle::Crypto::Tls::ByteQueue* value);

  constexpr void __cordl_internal_set_mInputBuffers(::Org::BouncyCastle::Crypto::Tls::ByteQueueStream* value);

  constexpr void __cordl_internal_set_mOfferedCipherSuites(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_mOfferedCompressionMethods(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mOutputBuffer(::Org::BouncyCastle::Crypto::Tls::ByteQueueStream* value);

  constexpr void __cordl_internal_set_mPeerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* value);

  constexpr void __cordl_internal_set_mReceivedChangeCipherSpec(bool value);

  constexpr void __cordl_internal_set_mRecordStream(::Org::BouncyCastle::Crypto::Tls::RecordStream* value);

  constexpr void __cordl_internal_set_mResumedSession(bool value);

  constexpr void __cordl_internal_set_mSecureRandom(::Org::BouncyCastle::Security::SecureRandom* value);

  constexpr void __cordl_internal_set_mSecureRenegotiation(bool value);

  constexpr void __cordl_internal_set_mSecurityParameters(::Org::BouncyCastle::Crypto::Tls::SecurityParameters* value);

  constexpr void __cordl_internal_set_mServerExtensions(::System::Collections::IDictionary* value);

  constexpr void __cordl_internal_set_mSessionParameters(::Org::BouncyCastle::Crypto::Tls::SessionParameters* value);

  constexpr void __cordl_internal_set_mTlsSession(::Org::BouncyCastle::Crypto::Tls::TlsSession* value);

  constexpr void __cordl_internal_set_mTlsStream(::Org::BouncyCastle::Crypto::Tls::TlsStream* value);

  /// @brief Method .ctor, addr 0x11fafcc, size 0x154, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* input, ::System::IO::Stream* output, ::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  /// @brief Method .ctor, addr 0x11fb120, size 0x1a0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  /// @brief Method .ctor, addr 0x11fafc0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  /// @brief Method get_Context, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsContext* get_Context();

  /// @brief Method get_ContextAdmin, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext* get_ContextAdmin();

  /// @brief Method get_IsClosed, addr 0x11fe874, size 0x18, virtual true, abstract: false, final false
  inline bool get_IsClosed();

  /// @brief Method get_Peer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsPeer* get_Peer();

  /// @brief Method get_Stream, addr 0x11fce94, size 0x64, virtual true, abstract: false, final false
  inline ::System::IO::Stream* get_Stream();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsCloseable"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCloseable* i___Org__BouncyCastle__Crypto__Tls__TlsCloseable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsProtocol();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TlsProtocol", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsProtocol(TlsProtocol&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsProtocol", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsProtocol(TlsProtocol const&) = delete;

  /// @brief Field mApplicationDataQueue, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::ByteQueue* ___mApplicationDataQueue;

  /// @brief Field mAlertQueue, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::ByteQueue* ___mAlertQueue;

  /// @brief Field mHandshakeQueue, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::ByteQueue* ___mHandshakeQueue;

  /// @brief Field mRecordStream, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::RecordStream* ___mRecordStream;

  /// @brief Field mSecureRandom, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___mSecureRandom;

  /// @brief Field mTlsStream, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsStream* ___mTlsStream;

  /// @brief Field mClosed, offset: 0x40, size: 0x1, def value: None
  bool ___mClosed;

  /// @brief Field mFailedWithError, offset: 0x41, size: 0x1, def value: None
  bool ___mFailedWithError;

  /// @brief Field mAppDataReady, offset: 0x42, size: 0x1, def value: None
  bool ___mAppDataReady;

  /// @brief Field mAppDataSplitEnabled, offset: 0x43, size: 0x1, def value: None
  bool ___mAppDataSplitEnabled;

  /// @brief Field mAppDataSplitMode, offset: 0x44, size: 0x4, def value: None
  int32_t ___mAppDataSplitMode;

  /// @brief Field mExpectedVerifyData, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mExpectedVerifyData;

  /// @brief Field mTlsSession, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsSession* ___mTlsSession;

  /// @brief Field mSessionParameters, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::SessionParameters* ___mSessionParameters;

  /// @brief Field mSecurityParameters, offset: 0x60, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::SecurityParameters* ___mSecurityParameters;

  /// @brief Field mPeerCertificate, offset: 0x68, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::Certificate* ___mPeerCertificate;

  /// @brief Field mOfferedCipherSuites, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___mOfferedCipherSuites;

  /// @brief Field mOfferedCompressionMethods, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mOfferedCompressionMethods;

  /// @brief Field mClientExtensions, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___mClientExtensions;

  /// @brief Field mServerExtensions, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___mServerExtensions;

  /// @brief Field mConnectionState, offset: 0x90, size: 0x2, def value: None
  int16_t ___mConnectionState;

  /// @brief Field mResumedSession, offset: 0x92, size: 0x1, def value: None
  bool ___mResumedSession;

  /// @brief Field mReceivedChangeCipherSpec, offset: 0x93, size: 0x1, def value: None
  bool ___mReceivedChangeCipherSpec;

  /// @brief Field mSecureRenegotiation, offset: 0x94, size: 0x1, def value: None
  bool ___mSecureRenegotiation;

  /// @brief Field mAllowCertificateStatus, offset: 0x95, size: 0x1, def value: None
  bool ___mAllowCertificateStatus;

  /// @brief Field mExpectSessionTicket, offset: 0x96, size: 0x1, def value: None
  bool ___mExpectSessionTicket;

  /// @brief Field mBlocking, offset: 0x97, size: 0x1, def value: None
  bool ___mBlocking;

  /// @brief Field mInputBuffers, offset: 0x98, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::ByteQueueStream* ___mInputBuffers;

  /// @brief Field mOutputBuffer, offset: 0xa0, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::ByteQueueStream* ___mOutputBuffer;

  /// @brief Field ADS_MODE_0_N offset 0xffffffff size 0x2
  static constexpr int16_t ADS_MODE_0_N{ static_cast<int16_t>(0x1) };

  /// @brief Field ADS_MODE_0_N_FIRSTONLY offset 0xffffffff size 0x2
  static constexpr int16_t ADS_MODE_0_N_FIRSTONLY{ static_cast<int16_t>(0x2) };

  /// @brief Field ADS_MODE_1_Nsub1 offset 0xffffffff size 0x2
  static constexpr int16_t ADS_MODE_1_Nsub1{ static_cast<int16_t>(0x0) };

  /// @brief Field CS_CERTIFICATE_REQUEST offset 0xffffffff size 0x2
  static constexpr int16_t CS_CERTIFICATE_REQUEST{ static_cast<int16_t>(0x7) };

  /// @brief Field CS_CERTIFICATE_STATUS offset 0xffffffff size 0x2
  static constexpr int16_t CS_CERTIFICATE_STATUS{ static_cast<int16_t>(0x5) };

  /// @brief Field CS_CERTIFICATE_VERIFY offset 0xffffffff size 0x2
  static constexpr int16_t CS_CERTIFICATE_VERIFY{ static_cast<int16_t>(0xc) };

  /// @brief Field CS_CLIENT_CERTIFICATE offset 0xffffffff size 0x2
  static constexpr int16_t CS_CLIENT_CERTIFICATE{ static_cast<int16_t>(0xa) };

  /// @brief Field CS_CLIENT_FINISHED offset 0xffffffff size 0x2
  static constexpr int16_t CS_CLIENT_FINISHED{ static_cast<int16_t>(0xd) };

  /// @brief Field CS_CLIENT_HELLO offset 0xffffffff size 0x2
  static constexpr int16_t CS_CLIENT_HELLO{ static_cast<int16_t>(0x1) };

  /// @brief Field CS_CLIENT_KEY_EXCHANGE offset 0xffffffff size 0x2
  static constexpr int16_t CS_CLIENT_KEY_EXCHANGE{ static_cast<int16_t>(0xb) };

  /// @brief Field CS_CLIENT_SUPPLEMENTAL_DATA offset 0xffffffff size 0x2
  static constexpr int16_t CS_CLIENT_SUPPLEMENTAL_DATA{ static_cast<int16_t>(0x9) };

  /// @brief Field CS_END offset 0xffffffff size 0x2
  static constexpr int16_t CS_END{ static_cast<int16_t>(0x10) };

  /// @brief Field CS_SERVER_CERTIFICATE offset 0xffffffff size 0x2
  static constexpr int16_t CS_SERVER_CERTIFICATE{ static_cast<int16_t>(0x4) };

  /// @brief Field CS_SERVER_FINISHED offset 0xffffffff size 0x2
  static constexpr int16_t CS_SERVER_FINISHED{ static_cast<int16_t>(0xf) };

  /// @brief Field CS_SERVER_HELLO offset 0xffffffff size 0x2
  static constexpr int16_t CS_SERVER_HELLO{ static_cast<int16_t>(0x2) };

  /// @brief Field CS_SERVER_HELLO_DONE offset 0xffffffff size 0x2
  static constexpr int16_t CS_SERVER_HELLO_DONE{ static_cast<int16_t>(0x8) };

  /// @brief Field CS_SERVER_KEY_EXCHANGE offset 0xffffffff size 0x2
  static constexpr int16_t CS_SERVER_KEY_EXCHANGE{ static_cast<int16_t>(0x6) };

  /// @brief Field CS_SERVER_SESSION_TICKET offset 0xffffffff size 0x2
  static constexpr int16_t CS_SERVER_SESSION_TICKET{ static_cast<int16_t>(0xe) };

  /// @brief Field CS_SERVER_SUPPLEMENTAL_DATA offset 0xffffffff size 0x2
  static constexpr int16_t CS_SERVER_SUPPLEMENTAL_DATA{ static_cast<int16_t>(0x3) };

  /// @brief Field CS_START offset 0xffffffff size 0x2
  static constexpr int16_t CS_START{ static_cast<int16_t>(0x0) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsProtocol, 0xa8>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsProtocol, ___mApplicationDataQueue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsProtocol, ___mAlertQueue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsProtocol, ___mHandshakeQueue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsProtocol, ___mRecordStream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsProtocol, ___mSecureRandom) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsProtocol, ___mTlsStream) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsProtocol, ___mClosed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsProtocol, ___mFailedWithError) == 0x41, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsProtocol, ___mAppDataReady) == 0x42, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsProtocol, ___mAppDataSplitEnabled) == 0x43, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsProtocol, ___mAppDataSplitMode) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsProtocol, ___mExpectedVerifyData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsProtocol, ___mTlsSession) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsProtocol, ___mSessionParameters) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsProtocol, ___mSecurityParameters) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsProtocol, ___mPeerCertificate) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsProtocol, ___mOfferedCipherSuites) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsProtocol, ___mOfferedCompressionMethods) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsProtocol, ___mClientExtensions) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsProtocol, ___mServerExtensions) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsProtocol, ___mConnectionState) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsProtocol, ___mResumedSession) == 0x92, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsProtocol, ___mReceivedChangeCipherSpec) == 0x93, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsProtocol, ___mSecureRenegotiation) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsProtocol, ___mAllowCertificateStatus) == 0x95, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsProtocol, ___mExpectSessionTicket) == 0x96, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsProtocol, ___mBlocking) == 0x97, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsProtocol, ___mInputBuffers) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsProtocol, ___mOutputBuffer) == 0xa0, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsProtocol);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsProtocol*, "Org.BouncyCastle.Crypto.Tls", "TlsProtocol");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage*, "Org.BouncyCastle.Crypto.Tls", "TlsProtocol/HandshakeMessage");
