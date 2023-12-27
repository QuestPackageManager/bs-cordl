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
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsStream;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ByteQueue;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SecurityParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsHandshakeHash;
}
namespace Org::BouncyCastle::Crypto::Tls {
class RecordStream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPeer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCloseable;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class AbstractTlsContext;
}
namespace System {
class Exception;
}
namespace System::IO {
class MemoryStream;
}
namespace Org::BouncyCastle::Crypto::Prng {
class IRandomGenerator;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ByteQueueStream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SessionParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __TlsProtocol__HandshakeMessage;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSession;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3566))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1291))
// CS Name: ::TlsProtocol::HandshakeMessage*
class CORDL_TYPE __TlsProtocol__HandshakeMessage : public ::System::IO::MemoryStream {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage* New_ctor(uint8_t handshakeType);

  /// @brief Method .ctor addr 0xf9e554 size 0x8 virtual false final false
  inline void _ctor(uint8_t handshakeType);

  static inline ::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage* New_ctor(uint8_t handshakeType, int32_t length);

  /// @brief Method .ctor addr 0xf9e848 size 0x8c virtual false final false
  inline void _ctor(uint8_t handshakeType, int32_t length);

  /// @brief Method Write addr 0xf9fe40 size 0x28 virtual false final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method WriteToRecordStream addr 0xf9e55c size 0x124 virtual false final false
  inline void WriteToRecordStream(::Org::BouncyCastle::Crypto::Tls::TlsProtocol* protocol);

  // Ctor Parameters [CppParam { name: "", ty: "__TlsProtocol__HandshakeMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TlsProtocol__HandshakeMessage(__TlsProtocol__HandshakeMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TlsProtocol__HandshakeMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TlsProtocol__HandshakeMessage(__TlsProtocol__HandshakeMessage const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TlsProtocol__HandshakeMessage();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
// Type: Org.BouncyCastle.Crypto.Tls::TlsProtocol
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1292))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsProtocol*
class CORDL_TYPE TlsProtocol : public ::System::Object {
public:
  // Declarations
  using HandshakeMessage = ::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage;

  /// @brief Field mApplicationDataQueue, offset 0x10, size 0x8
  __declspec(property(get = __get_mApplicationDataQueue, put = __set_mApplicationDataQueue))::Org::BouncyCastle::Crypto::Tls::ByteQueue* mApplicationDataQueue;

  /// @brief Field mAlertQueue, offset 0x18, size 0x8
  __declspec(property(get = __get_mAlertQueue, put = __set_mAlertQueue))::Org::BouncyCastle::Crypto::Tls::ByteQueue* mAlertQueue;

  /// @brief Field mHandshakeQueue, offset 0x20, size 0x8
  __declspec(property(get = __get_mHandshakeQueue, put = __set_mHandshakeQueue))::Org::BouncyCastle::Crypto::Tls::ByteQueue* mHandshakeQueue;

  /// @brief Field mRecordStream, offset 0x28, size 0x8
  __declspec(property(get = __get_mRecordStream, put = __set_mRecordStream))::Org::BouncyCastle::Crypto::Tls::RecordStream* mRecordStream;

  /// @brief Field mSecureRandom, offset 0x30, size 0x8
  __declspec(property(get = __get_mSecureRandom, put = __set_mSecureRandom))::Org::BouncyCastle::Security::SecureRandom* mSecureRandom;

  /// @brief Field mTlsStream, offset 0x38, size 0x8
  __declspec(property(get = __get_mTlsStream, put = __set_mTlsStream))::Org::BouncyCastle::Crypto::Tls::TlsStream* mTlsStream;

  /// @brief Field mClosed, offset 0x40, size 0x1
  __declspec(property(get = __get_mClosed, put = __set_mClosed)) bool mClosed;

  /// @brief Field mFailedWithError, offset 0x41, size 0x1
  __declspec(property(get = __get_mFailedWithError, put = __set_mFailedWithError)) bool mFailedWithError;

  /// @brief Field mAppDataReady, offset 0x42, size 0x1
  __declspec(property(get = __get_mAppDataReady, put = __set_mAppDataReady)) bool mAppDataReady;

  /// @brief Field mAppDataSplitEnabled, offset 0x43, size 0x1
  __declspec(property(get = __get_mAppDataSplitEnabled, put = __set_mAppDataSplitEnabled)) bool mAppDataSplitEnabled;

  /// @brief Field mAppDataSplitMode, offset 0x44, size 0x4
  __declspec(property(get = __get_mAppDataSplitMode, put = __set_mAppDataSplitMode)) int32_t mAppDataSplitMode;

  /// @brief Field mExpectedVerifyData, offset 0x48, size 0x8
  __declspec(property(get = __get_mExpectedVerifyData, put = __set_mExpectedVerifyData))::ArrayW<uint8_t, ::Array<uint8_t>*> mExpectedVerifyData;

  /// @brief Field mTlsSession, offset 0x50, size 0x8
  __declspec(property(get = __get_mTlsSession, put = __set_mTlsSession))::Org::BouncyCastle::Crypto::Tls::TlsSession* mTlsSession;

  /// @brief Field mSessionParameters, offset 0x58, size 0x8
  __declspec(property(get = __get_mSessionParameters, put = __set_mSessionParameters))::Org::BouncyCastle::Crypto::Tls::SessionParameters* mSessionParameters;

  /// @brief Field mSecurityParameters, offset 0x60, size 0x8
  __declspec(property(get = __get_mSecurityParameters, put = __set_mSecurityParameters))::Org::BouncyCastle::Crypto::Tls::SecurityParameters* mSecurityParameters;

  /// @brief Field mPeerCertificate, offset 0x68, size 0x8
  __declspec(property(get = __get_mPeerCertificate, put = __set_mPeerCertificate))::Org::BouncyCastle::Crypto::Tls::Certificate* mPeerCertificate;

  /// @brief Field mOfferedCipherSuites, offset 0x70, size 0x8
  __declspec(property(get = __get_mOfferedCipherSuites, put = __set_mOfferedCipherSuites))::ArrayW<int32_t, ::Array<int32_t>*> mOfferedCipherSuites;

  /// @brief Field mOfferedCompressionMethods, offset 0x78, size 0x8
  __declspec(property(get = __get_mOfferedCompressionMethods, put = __set_mOfferedCompressionMethods))::ArrayW<uint8_t, ::Array<uint8_t>*> mOfferedCompressionMethods;

  /// @brief Field mClientExtensions, offset 0x80, size 0x8
  __declspec(property(get = __get_mClientExtensions, put = __set_mClientExtensions))::System::Collections::IDictionary* mClientExtensions;

  /// @brief Field mServerExtensions, offset 0x88, size 0x8
  __declspec(property(get = __get_mServerExtensions, put = __set_mServerExtensions))::System::Collections::IDictionary* mServerExtensions;

  /// @brief Field mConnectionState, offset 0x90, size 0x2
  __declspec(property(get = __get_mConnectionState, put = __set_mConnectionState)) int16_t mConnectionState;

  /// @brief Field mResumedSession, offset 0x92, size 0x1
  __declspec(property(get = __get_mResumedSession, put = __set_mResumedSession)) bool mResumedSession;

  /// @brief Field mReceivedChangeCipherSpec, offset 0x93, size 0x1
  __declspec(property(get = __get_mReceivedChangeCipherSpec, put = __set_mReceivedChangeCipherSpec)) bool mReceivedChangeCipherSpec;

  /// @brief Field mSecureRenegotiation, offset 0x94, size 0x1
  __declspec(property(get = __get_mSecureRenegotiation, put = __set_mSecureRenegotiation)) bool mSecureRenegotiation;

  /// @brief Field mAllowCertificateStatus, offset 0x95, size 0x1
  __declspec(property(get = __get_mAllowCertificateStatus, put = __set_mAllowCertificateStatus)) bool mAllowCertificateStatus;

  /// @brief Field mExpectSessionTicket, offset 0x96, size 0x1
  __declspec(property(get = __get_mExpectSessionTicket, put = __set_mExpectSessionTicket)) bool mExpectSessionTicket;

  /// @brief Field mBlocking, offset 0x97, size 0x1
  __declspec(property(get = __get_mBlocking, put = __set_mBlocking)) bool mBlocking;

  /// @brief Field mInputBuffers, offset 0x98, size 0x8
  __declspec(property(get = __get_mInputBuffers, put = __set_mInputBuffers))::Org::BouncyCastle::Crypto::Tls::ByteQueueStream* mInputBuffers;

  /// @brief Field mOutputBuffer, offset 0xa0, size 0x8
  __declspec(property(get = __get_mOutputBuffer, put = __set_mOutputBuffer))::Org::BouncyCastle::Crypto::Tls::ByteQueueStream* mOutputBuffer;

  __declspec(property(get = get_Context))::Org::BouncyCastle::Crypto::Tls::TlsContext* Context;

  __declspec(property(get = get_ContextAdmin))::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext* ContextAdmin;

  __declspec(property(get = get_Peer))::Org::BouncyCastle::Crypto::Tls::TlsPeer* Peer;

  __declspec(property(get = get_Stream))::System::IO::Stream* Stream;

  __declspec(property(get = get_IsClosed)) bool IsClosed;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCloseable"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsCloseable*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Tls::ByteQueue*& __get_mApplicationDataQueue();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::ByteQueue*> const& __get_mApplicationDataQueue() const;

  constexpr void __set_mApplicationDataQueue(::Org::BouncyCastle::Crypto::Tls::ByteQueue* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::ByteQueue*& __get_mAlertQueue();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::ByteQueue*> const& __get_mAlertQueue() const;

  constexpr void __set_mAlertQueue(::Org::BouncyCastle::Crypto::Tls::ByteQueue* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::ByteQueue*& __get_mHandshakeQueue();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::ByteQueue*> const& __get_mHandshakeQueue() const;

  constexpr void __set_mHandshakeQueue(::Org::BouncyCastle::Crypto::Tls::ByteQueue* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::RecordStream*& __get_mRecordStream();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::RecordStream*> const& __get_mRecordStream() const;

  constexpr void __set_mRecordStream(::Org::BouncyCastle::Crypto::Tls::RecordStream* value);

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __get_mSecureRandom();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __get_mSecureRandom() const;

  constexpr void __set_mSecureRandom(::Org::BouncyCastle::Security::SecureRandom* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsStream*& __get_mTlsStream();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsStream*> const& __get_mTlsStream() const;

  constexpr void __set_mTlsStream(::Org::BouncyCastle::Crypto::Tls::TlsStream* value);

  constexpr bool& __get_mClosed();

  constexpr bool const& __get_mClosed() const;

  constexpr void __set_mClosed(bool value);

  constexpr bool& __get_mFailedWithError();

  constexpr bool const& __get_mFailedWithError() const;

  constexpr void __set_mFailedWithError(bool value);

  constexpr bool& __get_mAppDataReady();

  constexpr bool const& __get_mAppDataReady() const;

  constexpr void __set_mAppDataReady(bool value);

  constexpr bool& __get_mAppDataSplitEnabled();

  constexpr bool const& __get_mAppDataSplitEnabled() const;

  constexpr void __set_mAppDataSplitEnabled(bool value);

  constexpr int32_t& __get_mAppDataSplitMode();

  constexpr int32_t const& __get_mAppDataSplitMode() const;

  constexpr void __set_mAppDataSplitMode(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mExpectedVerifyData();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mExpectedVerifyData() const;

  constexpr void __set_mExpectedVerifyData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSession*& __get_mTlsSession();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsSession*> const& __get_mTlsSession() const;

  constexpr void __set_mTlsSession(::Org::BouncyCastle::Crypto::Tls::TlsSession* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters*& __get_mSessionParameters();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::SessionParameters*> const& __get_mSessionParameters() const;

  constexpr void __set_mSessionParameters(::Org::BouncyCastle::Crypto::Tls::SessionParameters* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::SecurityParameters*& __get_mSecurityParameters();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::SecurityParameters*> const& __get_mSecurityParameters() const;

  constexpr void __set_mSecurityParameters(::Org::BouncyCastle::Crypto::Tls::SecurityParameters* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate*& __get_mPeerCertificate();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::Certificate*> const& __get_mPeerCertificate() const;

  constexpr void __set_mPeerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_mOfferedCipherSuites();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_mOfferedCipherSuites() const;

  constexpr void __set_mOfferedCipherSuites(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mOfferedCompressionMethods();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mOfferedCompressionMethods() const;

  constexpr void __set_mOfferedCompressionMethods(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::Collections::IDictionary*& __get_mClientExtensions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __get_mClientExtensions() const;

  constexpr void __set_mClientExtensions(::System::Collections::IDictionary* value);

  constexpr ::System::Collections::IDictionary*& __get_mServerExtensions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __get_mServerExtensions() const;

  constexpr void __set_mServerExtensions(::System::Collections::IDictionary* value);

  constexpr int16_t& __get_mConnectionState();

  constexpr int16_t const& __get_mConnectionState() const;

  constexpr void __set_mConnectionState(int16_t value);

  constexpr bool& __get_mResumedSession();

  constexpr bool const& __get_mResumedSession() const;

  constexpr void __set_mResumedSession(bool value);

  constexpr bool& __get_mReceivedChangeCipherSpec();

  constexpr bool const& __get_mReceivedChangeCipherSpec() const;

  constexpr void __set_mReceivedChangeCipherSpec(bool value);

  constexpr bool& __get_mSecureRenegotiation();

  constexpr bool const& __get_mSecureRenegotiation() const;

  constexpr void __set_mSecureRenegotiation(bool value);

  constexpr bool& __get_mAllowCertificateStatus();

  constexpr bool const& __get_mAllowCertificateStatus() const;

  constexpr void __set_mAllowCertificateStatus(bool value);

  constexpr bool& __get_mExpectSessionTicket();

  constexpr bool const& __get_mExpectSessionTicket() const;

  constexpr void __set_mExpectSessionTicket(bool value);

  constexpr bool& __get_mBlocking();

  constexpr bool const& __get_mBlocking() const;

  constexpr void __set_mBlocking(bool value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::ByteQueueStream*& __get_mInputBuffers();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::ByteQueueStream*> const& __get_mInputBuffers() const;

  constexpr void __set_mInputBuffers(::Org::BouncyCastle::Crypto::Tls::ByteQueueStream* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::ByteQueueStream*& __get_mOutputBuffer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::ByteQueueStream*> const& __get_mOutputBuffer() const;

  constexpr void __set_mOutputBuffer(::Org::BouncyCastle::Crypto::Tls::ByteQueueStream* value);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsProtocol* New_ctor(::System::IO::Stream* stream, ::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  /// @brief Method .ctor addr 0xf9b7b4 size 0xc virtual false final false
  inline void _ctor(::System::IO::Stream* stream, ::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsProtocol* New_ctor(::System::IO::Stream* input, ::System::IO::Stream* output, ::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  /// @brief Method .ctor addr 0xf9b7c0 size 0x154 virtual false final false
  inline void _ctor(::System::IO::Stream* input, ::System::IO::Stream* output, ::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsProtocol* New_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  /// @brief Method .ctor addr 0xf9b914 size 0x1a0 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  /// @brief Method get_Context addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsContext* get_Context();

  /// @brief Method get_ContextAdmin addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext* get_ContextAdmin();

  /// @brief Method get_Peer addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsPeer* get_Peer();

  /// @brief Method HandleAlertMessage addr 0xf9bab4 size 0x13c virtual true final false
  inline void HandleAlertMessage(uint8_t alertLevel, uint8_t alertDescription);

  /// @brief Method HandleAlertWarningMessage addr 0xf9bbf0 size 0x88 virtual true final false
  inline void HandleAlertWarningMessage(uint8_t alertDescription);

  /// @brief Method HandleChangeCipherSpecMessage addr 0xf9bc78 size 0x4 virtual true final false
  inline void HandleChangeCipherSpecMessage();

  /// @brief Method HandleClose addr 0xf9bc7c size 0xfc virtual true final false
  inline void HandleClose(bool user_canceled);

  /// @brief Method HandleException addr 0xf9bd78 size 0x78 virtual true final false
  inline void HandleException(uint8_t alertDescription, ::StringW message, ::System::Exception* cause);

  /// @brief Method HandleFailure addr 0xf9bdf0 size 0x84 virtual true final false
  inline void HandleFailure();

  /// @brief Method HandleHandshakeMessage addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void HandleHandshakeMessage(uint8_t type, ::System::IO::MemoryStream* buf);

  /// @brief Method ApplyMaxFragmentLengthExtension addr 0xf9be74 size 0x98 virtual true final false
  inline void ApplyMaxFragmentLengthExtension();

  /// @brief Method CheckReceivedChangeCipherSpec addr 0xf9bf0c size 0x5c virtual true final false
  inline void CheckReceivedChangeCipherSpec(bool expected);

  /// @brief Method CleanupHandshake addr 0xf9bf68 size 0x9c virtual true final false
  inline void CleanupHandshake();

  /// @brief Method BlockForHandshake addr 0xf9c004 size 0x90 virtual true final false
  inline void BlockForHandshake();

  /// @brief Method CompleteHandshake addr 0xf9c094 size 0x52c virtual true final false
  inline void CompleteHandshake();

  /// @brief Method ProcessRecord addr 0xf93f78 size 0x214 virtual false final false
  inline void ProcessRecord(uint8_t protocol, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method ProcessHandshakeQueue addr 0xf9c794 size 0x2dc virtual false final false
  inline void ProcessHandshakeQueue(::Org::BouncyCastle::Crypto::Tls::ByteQueue* queue);

  /// @brief Method ProcessApplicationDataQueue addr 0xf9c630 size 0x4 virtual false final false
  inline void ProcessApplicationDataQueue();

  /// @brief Method ProcessAlertQueue addr 0xf9c5c0 size 0x70 virtual false final false
  inline void ProcessAlertQueue();

  /// @brief Method ProcessChangeCipherSpec addr 0xf9c634 size 0x160 virtual false final false
  inline void ProcessChangeCipherSpec(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method ApplicationDataAvailable addr 0xf9ca70 size 0x1c virtual true final false
  inline int32_t ApplicationDataAvailable();

  /// @brief Method ReadApplicationData addr 0xf9ca8c size 0x190 virtual true final false
  inline int32_t ReadApplicationData(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset, int32_t len);

  /// @brief Method SafeCheckRecordHeader addr 0xf9cc1c size 0x1d4 virtual true final false
  inline void SafeCheckRecordHeader(::ArrayW<uint8_t, ::Array<uint8_t>*> recordHeader);

  /// @brief Method SafeReadRecord addr 0xf9cdf0 size 0x298 virtual true final false
  inline void SafeReadRecord();

  /// @brief Method SafeWriteRecord addr 0xf9d088 size 0x1d4 virtual true final false
  inline void SafeWriteRecord(uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset, int32_t len);

  /// @brief Method WriteData addr 0xf9d25c size 0x1e8 virtual true final false
  inline void WriteData(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset, int32_t len);

  /// @brief Method SetAppDataSplitMode addr 0xf9d444 size 0xb4 virtual true final false
  inline void SetAppDataSplitMode(int32_t appDataSplitMode);

  /// @brief Method WriteHandshakeMessage addr 0xf9d4f8 size 0x190 virtual true final false
  inline void WriteHandshakeMessage(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method get_Stream addr 0xf9d688 size 0x64 virtual true final false
  inline ::System::IO::Stream* get_Stream();

  /// @brief Method CloseInput addr 0xf9d6ec size 0x124 virtual true final false
  inline void CloseInput();

  /// @brief Method OfferInput addr 0xf9d810 size 0x28 virtual true final false
  inline void OfferInput(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method OfferInput addr 0xf9d838 size 0x244 virtual true final false
  inline void OfferInput(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inputOff, int32_t inputLen);

  /// @brief Method GetAvailableInputBytes addr 0xf9da7c size 0x6c virtual true final false
  inline int32_t GetAvailableInputBytes();

  /// @brief Method ReadInput addr 0xf9dae8 size 0x100 virtual true final false
  inline int32_t ReadInput(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t length);

  /// @brief Method OfferOutput addr 0xf9dbe8 size 0xe0 virtual true final false
  inline void OfferOutput(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t length);

  /// @brief Method GetAvailableOutputBytes addr 0xf9dcc8 size 0x78 virtual true final false
  inline int32_t GetAvailableOutputBytes();

  /// @brief Method ReadOutput addr 0xf9dd40 size 0x78 virtual true final false
  inline int32_t ReadOutput(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t length);

  /// @brief Method InvalidateSession addr 0xf9ddb8 size 0xb8 virtual true final false
  inline void InvalidateSession();

  /// @brief Method ProcessFinishedMessage addr 0xf9de70 size 0x11c virtual true final false
  inline void ProcessFinishedMessage(::System::IO::MemoryStream* buf);

  /// @brief Method RaiseAlertFatal addr 0xf9e018 size 0x1d0 virtual true final false
  inline void RaiseAlertFatal(uint8_t alertDescription, ::StringW message, ::System::Exception* cause);

  /// @brief Method RaiseAlertWarning addr 0xf9e1e8 size 0x13c virtual true final false
  inline void RaiseAlertWarning(uint8_t alertDescription, ::StringW message);

  /// @brief Method SendCertificateMessage addr 0xf9e324 size 0x230 virtual true final false
  inline void SendCertificateMessage(::Org::BouncyCastle::Crypto::Tls::Certificate* certificate);

  /// @brief Method SendChangeCipherSpecMessage addr 0xf9e680 size 0x98 virtual true final false
  inline void SendChangeCipherSpecMessage();

  /// @brief Method SendFinishedMessage addr 0xf9e718 size 0x130 virtual true final false
  inline void SendFinishedMessage();

  /// @brief Method SendSupplementalDataMessage addr 0xf9e8d4 size 0x80 virtual true final false
  inline void SendSupplementalDataMessage(::System::Collections::IList* supplementalData);

  /// @brief Method CreateVerifyData addr 0xf9ed74 size 0x120 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateVerifyData(bool isServer);

  /// @brief Method Close addr 0xf9f034 size 0x10 virtual true final false
  inline void Close();

  /// @brief Method Flush addr 0xf9f044 size 0x24 virtual true final false
  inline void Flush();

  /// @brief Method get_IsClosed addr 0xf9f068 size 0x18 virtual true final false
  inline bool get_IsClosed();

  /// @brief Method ProcessMaxFragmentLengthExtension addr 0xf9f080 size 0xb0 virtual true final false
  inline int16_t ProcessMaxFragmentLengthExtension(::System::Collections::IDictionary* clientExtensions, ::System::Collections::IDictionary* serverExtensions, uint8_t alertDescription);

  /// @brief Method RefuseRenegotiation addr 0xf9f130 size 0xe4 virtual true final false
  inline void RefuseRenegotiation();

  /// @brief Method AssertEmpty addr 0xf9df8c size 0x8c virtual false final false
  static inline void AssertEmpty(::System::IO::MemoryStream* buf);

  /// @brief Method CreateRandomBlock addr 0xf9f214 size 0x114 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateRandomBlock(bool useGmtUnixTime, ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* randomGenerator);

  /// @brief Method CreateRenegotiationInfo addr 0xf9f328 size 0x58 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateRenegotiationInfo(::ArrayW<uint8_t, ::Array<uint8_t>*> renegotiated_connection);

  /// @brief Method EstablishMasterSecret addr 0xf9f380 size 0x230 virtual false final false
  static inline void EstablishMasterSecret(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* keyExchange);

  /// @brief Method GetCurrentPrfHash addr 0xf9ee94 size 0x1a0 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetCurrentPrfHash(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* handshakeHash,
                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> sslSender);

  /// @brief Method ReadExtensions addr 0xf95f9c size 0x314 virtual false final false
  static inline ::System::Collections::IDictionary* ReadExtensions(::System::IO::MemoryStream* input);

  /// @brief Method ReadSupplementalDataMessage addr 0xf9f5b0 size 0x22c virtual false final false
  static inline ::System::Collections::IList* ReadSupplementalDataMessage(::System::IO::MemoryStream* input);

  /// @brief Method WriteExtensions addr 0xf96570 size 0xd4 virtual false final false
  static inline void WriteExtensions(::System::IO::Stream* output, ::System::Collections::IDictionary* extensions);

  /// @brief Method WriteSelectedExtensions addr 0xf9f7dc size 0x4fc virtual false final false
  static inline void WriteSelectedExtensions(::System::IO::Stream* output, ::System::Collections::IDictionary* extensions, bool selectEmpty);

  /// @brief Method WriteSupplementalData addr 0xf9e954 size 0x420 virtual false final false
  static inline void WriteSupplementalData(::System::IO::Stream* output, ::System::Collections::IList* supplementalData);

  /// @brief Method GetPrfAlgorithm addr 0xf9fcd8 size 0x168 virtual false final false
  static inline int32_t GetPrfAlgorithm(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, int32_t ciphersuite);

  // Ctor Parameters [CppParam { name: "", ty: "TlsProtocol", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsProtocol(TlsProtocol&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsProtocol", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsProtocol(TlsProtocol const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsProtocol();

public:
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

  /// @brief Field CS_START offset 0xffffffff size 0x2
  static constexpr int16_t CS_START{ static_cast<int16_t>(0x0) };

  /// @brief Field CS_CLIENT_HELLO offset 0xffffffff size 0x2
  static constexpr int16_t CS_CLIENT_HELLO{ static_cast<int16_t>(0x1) };

  /// @brief Field CS_SERVER_HELLO offset 0xffffffff size 0x2
  static constexpr int16_t CS_SERVER_HELLO{ static_cast<int16_t>(0x2) };

  /// @brief Field CS_SERVER_SUPPLEMENTAL_DATA offset 0xffffffff size 0x2
  static constexpr int16_t CS_SERVER_SUPPLEMENTAL_DATA{ static_cast<int16_t>(0x3) };

  /// @brief Field CS_SERVER_CERTIFICATE offset 0xffffffff size 0x2
  static constexpr int16_t CS_SERVER_CERTIFICATE{ static_cast<int16_t>(0x4) };

  /// @brief Field CS_CERTIFICATE_STATUS offset 0xffffffff size 0x2
  static constexpr int16_t CS_CERTIFICATE_STATUS{ static_cast<int16_t>(0x5) };

  /// @brief Field CS_SERVER_KEY_EXCHANGE offset 0xffffffff size 0x2
  static constexpr int16_t CS_SERVER_KEY_EXCHANGE{ static_cast<int16_t>(0x6) };

  /// @brief Field CS_CERTIFICATE_REQUEST offset 0xffffffff size 0x2
  static constexpr int16_t CS_CERTIFICATE_REQUEST{ static_cast<int16_t>(0x7) };

  /// @brief Field CS_SERVER_HELLO_DONE offset 0xffffffff size 0x2
  static constexpr int16_t CS_SERVER_HELLO_DONE{ static_cast<int16_t>(0x8) };

  /// @brief Field CS_CLIENT_SUPPLEMENTAL_DATA offset 0xffffffff size 0x2
  static constexpr int16_t CS_CLIENT_SUPPLEMENTAL_DATA{ static_cast<int16_t>(0x9) };

  /// @brief Field CS_CLIENT_CERTIFICATE offset 0xffffffff size 0x2
  static constexpr int16_t CS_CLIENT_CERTIFICATE{ static_cast<int16_t>(0xa) };

  /// @brief Field CS_CLIENT_KEY_EXCHANGE offset 0xffffffff size 0x2
  static constexpr int16_t CS_CLIENT_KEY_EXCHANGE{ static_cast<int16_t>(0xb) };

  /// @brief Field CS_CERTIFICATE_VERIFY offset 0xffffffff size 0x2
  static constexpr int16_t CS_CERTIFICATE_VERIFY{ static_cast<int16_t>(0xc) };

  /// @brief Field CS_CLIENT_FINISHED offset 0xffffffff size 0x2
  static constexpr int16_t CS_CLIENT_FINISHED{ static_cast<int16_t>(0xd) };

  /// @brief Field CS_SERVER_SESSION_TICKET offset 0xffffffff size 0x2
  static constexpr int16_t CS_SERVER_SESSION_TICKET{ static_cast<int16_t>(0xe) };

  /// @brief Field CS_SERVER_FINISHED offset 0xffffffff size 0x2
  static constexpr int16_t CS_SERVER_FINISHED{ static_cast<int16_t>(0xf) };

  /// @brief Field CS_END offset 0xffffffff size 0x2
  static constexpr int16_t CS_END{ static_cast<int16_t>(0x10) };

  /// @brief Field ADS_MODE_1_Nsub1 offset 0xffffffff size 0x2
  static constexpr int16_t ADS_MODE_1_Nsub1{ static_cast<int16_t>(0x0) };

  /// @brief Field ADS_MODE_0_N offset 0xffffffff size 0x2
  static constexpr int16_t ADS_MODE_0_N{ static_cast<int16_t>(0x1) };

  /// @brief Field ADS_MODE_0_N_FIRSTONLY offset 0xffffffff size 0x2
  static constexpr int16_t ADS_MODE_0_N_FIRSTONLY{ static_cast<int16_t>(0x2) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsProtocol, 0xa8>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsProtocol);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsProtocol*, "Org.BouncyCastle.Crypto.Tls", "TlsProtocol");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::__TlsProtocol__HandshakeMessage*, "Org.BouncyCastle.Crypto.Tls", "TlsProtocol/HandshakeMessage");
