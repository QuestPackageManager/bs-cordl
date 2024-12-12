#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/DtlsRecordLayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DatagramTransport_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCloseable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DtlsRecordLayer)
namespace Org::BouncyCastle::Crypto::Tls {
class ByteQueue;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DatagramTransport;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsEpoch;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsHandshakeRetransmit;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ProtocolVersion;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Timeout;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPeer;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsRecordLayer;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer);
// Dependencies Org.BouncyCastle.Crypto.Tls.DatagramTransport, Org.BouncyCastle.Crypto.Tls.TlsCloseable, System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.DtlsRecordLayer
class CORDL_TYPE DtlsRecordLayer : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsClosed)) bool IsClosed;

  __declspec(property(get = get_ReadEpoch)) int32_t ReadEpoch;

  __declspec(property(get = get_ReadVersion, put = set_ReadVersion)) ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ReadVersion;

  /// @brief Field mClosed, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_mClosed, put = __cordl_internal_set_mClosed)) bool mClosed;

  /// @brief Field mContext, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mContext, put = __cordl_internal_set_mContext)) ::Org::BouncyCastle::Crypto::Tls::TlsContext* mContext;

  /// @brief Field mCurrentEpoch, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_mCurrentEpoch, put = __cordl_internal_set_mCurrentEpoch)) ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* mCurrentEpoch;

  /// @brief Field mFailed, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_mFailed, put = __cordl_internal_set_mFailed)) bool mFailed;

  /// @brief Field mInHandshake, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_mInHandshake, put = __cordl_internal_set_mInHandshake)) bool mInHandshake;

  /// @brief Field mPeer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mPeer, put = __cordl_internal_set_mPeer)) ::Org::BouncyCastle::Crypto::Tls::TlsPeer* mPeer;

  /// @brief Field mPendingEpoch, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_mPendingEpoch, put = __cordl_internal_set_mPendingEpoch)) ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* mPendingEpoch;

  /// @brief Field mPlaintextLimit, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_mPlaintextLimit, put = __cordl_internal_set_mPlaintextLimit)) int32_t mPlaintextLimit;

  /// @brief Field mReadEpoch, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_mReadEpoch, put = __cordl_internal_set_mReadEpoch)) ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* mReadEpoch;

  /// @brief Field mReadVersion, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mReadVersion, put = __cordl_internal_set_mReadVersion)) ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* mReadVersion;

  /// @brief Field mRecordQueue, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mRecordQueue, put = __cordl_internal_set_mRecordQueue)) ::Org::BouncyCastle::Crypto::Tls::ByteQueue* mRecordQueue;

  /// @brief Field mRetransmit, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_mRetransmit, put = __cordl_internal_set_mRetransmit)) ::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit* mRetransmit;

  /// @brief Field mRetransmitEpoch, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_mRetransmitEpoch, put = __cordl_internal_set_mRetransmitEpoch)) ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* mRetransmitEpoch;

  /// @brief Field mRetransmitTimeout, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_mRetransmitTimeout, put = __cordl_internal_set_mRetransmitTimeout)) ::Org::BouncyCastle::Crypto::Tls::Timeout* mRetransmitTimeout;

  /// @brief Field mTransport, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mTransport, put = __cordl_internal_set_mTransport)) ::Org::BouncyCastle::Crypto::Tls::DatagramTransport* mTransport;

  /// @brief Field mWriteEpoch, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_mWriteEpoch, put = __cordl_internal_set_mWriteEpoch)) ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* mWriteEpoch;

  /// @brief Field mWriteVersion, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_mWriteVersion, put = __cordl_internal_set_mWriteVersion)) ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* mWriteVersion;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::DatagramTransport"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::DatagramTransport*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCloseable"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsCloseable*() noexcept;

  /// @brief Method Close, addr 0x23f3084, size 0x84, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method CloseTransport, addr 0x23f3108, size 0x15c, virtual false, abstract: false, final false
  inline void CloseTransport();

  /// @brief Method Fail, addr 0x23f32a4, size 0xcc, virtual true, abstract: false, final false
  inline void Fail(uint8_t alertDescription);

  /// @brief Method Failed, addr 0x23f3264, size 0x40, virtual true, abstract: false, final false
  inline void Failed();

  /// @brief Method GetMacSequenceNumber, addr 0x23f367c, size 0x8, virtual false, abstract: false, final false
  static inline int64_t GetMacSequenceNumber(int32_t epoch, int64_t sequence_number);

  /// @brief Method GetReceiveLimit, addr 0x23f20cc, size 0x170, virtual true, abstract: false, final false
  inline int32_t GetReceiveLimit();

  /// @brief Method GetSendLimit, addr 0x23f223c, size 0x174, virtual true, abstract: false, final false
  inline int32_t GetSendLimit();

  /// @brief Method HandshakeSuccessful, addr 0x23f1fec, size 0xcc, virtual true, abstract: false, final false
  inline void HandshakeSuccessful(::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit* retransmit);

  /// @brief Method InitPendingEpoch, addr 0x23f1f38, size 0xb4, virtual true, abstract: false, final false
  inline void InitPendingEpoch(::Org::BouncyCastle::Crypto::Tls::TlsCipher* pendingCipher);

  static inline ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* New_ctor(::Org::BouncyCastle::Crypto::Tls::DatagramTransport* transport, ::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                            ::Org::BouncyCastle::Crypto::Tls::TlsPeer* peer, uint8_t contentType);

  /// @brief Method ProcessRecord, addr 0x23f274c, size 0x550, virtual false, abstract: false, final false
  inline int32_t ProcessRecord(int32_t received, ::ArrayW<uint8_t, ::Array<uint8_t>*> record, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off);

  /// @brief Method RaiseAlert, addr 0x23f3370, size 0x12c, virtual false, abstract: false, final false
  inline void RaiseAlert(uint8_t alertLevel, uint8_t alertDescription, ::StringW message, ::System::Exception* cause);

  /// @brief Method Receive, addr 0x23f23b0, size 0x1c4, virtual true, abstract: false, final false
  inline int32_t Receive(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len, int32_t waitMillis);

  /// @brief Method ReceiveDatagram, addr 0x23f34b0, size 0x194, virtual false, abstract: false, final false
  inline int32_t ReceiveDatagram(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len, int32_t waitMillis);

  /// @brief Method ReceiveRecord, addr 0x23f2574, size 0x1d8, virtual false, abstract: false, final false
  inline int32_t ReceiveRecord(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len, int32_t waitMillis);

  /// @brief Method ResetWriteEpoch, addr 0x23f20b8, size 0x14, virtual true, abstract: false, final false
  inline void ResetWriteEpoch();

  /// @brief Method Send, addr 0x23f2c9c, size 0x170, virtual true, abstract: false, final false
  inline void Send(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method SendDatagram, addr 0x23f1dc0, size 0xc0, virtual false, abstract: false, final false
  static inline void SendDatagram(::Org::BouncyCastle::Crypto::Tls::DatagramTransport* sender, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method SendRecord, addr 0x23f2e0c, size 0x278, virtual false, abstract: false, final false
  inline void SendRecord(uint8_t contentType, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method SetPlaintextLimit, addr 0x23f1e98, size 0x24, virtual true, abstract: false, final false
  inline void SetPlaintextLimit(int32_t plaintextLimit);

  /// @brief Method SetWriteVersion, addr 0x23f1f14, size 0x24, virtual true, abstract: false, final false
  inline void SetWriteVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* writeVersion);

  /// @brief Method Warn, addr 0x23f349c, size 0x14, virtual true, abstract: false, final false
  inline void Warn(uint8_t alertDescription, ::StringW message);

  constexpr bool const& __cordl_internal_get_mClosed() const;

  constexpr bool& __cordl_internal_get_mClosed();

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext* const& __cordl_internal_get_mContext() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext*& __cordl_internal_get_mContext();

  constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* const& __cordl_internal_get_mCurrentEpoch() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*& __cordl_internal_get_mCurrentEpoch();

  constexpr bool const& __cordl_internal_get_mFailed() const;

  constexpr bool& __cordl_internal_get_mFailed();

  constexpr bool const& __cordl_internal_get_mInHandshake() const;

  constexpr bool& __cordl_internal_get_mInHandshake();

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsPeer* const& __cordl_internal_get_mPeer() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsPeer*& __cordl_internal_get_mPeer();

  constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* const& __cordl_internal_get_mPendingEpoch() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*& __cordl_internal_get_mPendingEpoch();

  constexpr int32_t const& __cordl_internal_get_mPlaintextLimit() const;

  constexpr int32_t& __cordl_internal_get_mPlaintextLimit();

  constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* const& __cordl_internal_get_mReadEpoch() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*& __cordl_internal_get_mReadEpoch();

  constexpr ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* const& __cordl_internal_get_mReadVersion() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*& __cordl_internal_get_mReadVersion();

  constexpr ::Org::BouncyCastle::Crypto::Tls::ByteQueue* const& __cordl_internal_get_mRecordQueue() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::ByteQueue*& __cordl_internal_get_mRecordQueue();

  constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit* const& __cordl_internal_get_mRetransmit() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit*& __cordl_internal_get_mRetransmit();

  constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* const& __cordl_internal_get_mRetransmitEpoch() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*& __cordl_internal_get_mRetransmitEpoch();

  constexpr ::Org::BouncyCastle::Crypto::Tls::Timeout* const& __cordl_internal_get_mRetransmitTimeout() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::Timeout*& __cordl_internal_get_mRetransmitTimeout();

  constexpr ::Org::BouncyCastle::Crypto::Tls::DatagramTransport* const& __cordl_internal_get_mTransport() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::DatagramTransport*& __cordl_internal_get_mTransport();

  constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* const& __cordl_internal_get_mWriteEpoch() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*& __cordl_internal_get_mWriteEpoch();

  constexpr ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* const& __cordl_internal_get_mWriteVersion() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*& __cordl_internal_get_mWriteVersion();

  constexpr void __cordl_internal_set_mClosed(bool value);

  constexpr void __cordl_internal_set_mContext(::Org::BouncyCastle::Crypto::Tls::TlsContext* value);

  constexpr void __cordl_internal_set_mCurrentEpoch(::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* value);

  constexpr void __cordl_internal_set_mFailed(bool value);

  constexpr void __cordl_internal_set_mInHandshake(bool value);

  constexpr void __cordl_internal_set_mPeer(::Org::BouncyCastle::Crypto::Tls::TlsPeer* value);

  constexpr void __cordl_internal_set_mPendingEpoch(::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* value);

  constexpr void __cordl_internal_set_mPlaintextLimit(int32_t value);

  constexpr void __cordl_internal_set_mReadEpoch(::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* value);

  constexpr void __cordl_internal_set_mReadVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value);

  constexpr void __cordl_internal_set_mRecordQueue(::Org::BouncyCastle::Crypto::Tls::ByteQueue* value);

  constexpr void __cordl_internal_set_mRetransmit(::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit* value);

  constexpr void __cordl_internal_set_mRetransmitEpoch(::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* value);

  constexpr void __cordl_internal_set_mRetransmitTimeout(::Org::BouncyCastle::Crypto::Tls::Timeout* value);

  constexpr void __cordl_internal_set_mTransport(::Org::BouncyCastle::Crypto::Tls::DatagramTransport* value);

  constexpr void __cordl_internal_set_mWriteEpoch(::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* value);

  constexpr void __cordl_internal_set_mWriteVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value);

  /// @brief Method .ctor, addr 0x23ed490, size 0x134, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::DatagramTransport* transport, ::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Tls::TlsPeer* peer,
                    uint8_t contentType);

  /// @brief Method get_IsClosed, addr 0x23f1e80, size 0x18, virtual false, abstract: false, final false
  inline bool get_IsClosed();

  /// @brief Method get_ReadEpoch, addr 0x23f1ebc, size 0x1c, virtual true, abstract: false, final false
  inline int32_t get_ReadEpoch();

  /// @brief Method get_ReadVersion, addr 0x23f1ed8, size 0x18, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_ReadVersion();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::DatagramTransport"
  constexpr ::Org::BouncyCastle::Crypto::Tls::DatagramTransport* i___Org__BouncyCastle__Crypto__Tls__DatagramTransport() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsCloseable"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCloseable* i___Org__BouncyCastle__Crypto__Tls__TlsCloseable() noexcept;

  /// @brief Method set_ReadVersion, addr 0x23f1ef0, size 0x24, virtual true, abstract: false, final false
  inline void set_ReadVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DtlsRecordLayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DtlsRecordLayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DtlsRecordLayer(DtlsRecordLayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DtlsRecordLayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DtlsRecordLayer(DtlsRecordLayer const&) = delete;

  /// @brief Field MAX_FRAGMENT_LENGTH offset 0xffffffff size 0x4
  static constexpr int32_t MAX_FRAGMENT_LENGTH{ static_cast<int32_t>(0x4000) };

  /// @brief Field RECORD_HEADER_LENGTH offset 0xffffffff size 0x4
  static constexpr int32_t RECORD_HEADER_LENGTH{ static_cast<int32_t>(0xd) };

  /// @brief Field RETRANSMIT_TIMEOUT offset 0xffffffff size 0x8
  static constexpr int64_t RETRANSMIT_TIMEOUT{ static_cast<int64_t>(0x3a980) };

  /// @brief Field TCP_MSL offset 0xffffffff size 0x8
  static constexpr int64_t TCP_MSL{ static_cast<int64_t>(0x1d4c0) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1229 };

  /// @brief Field mTransport, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::DatagramTransport* ___mTransport;

  /// @brief Field mContext, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsContext* ___mContext;

  /// @brief Field mPeer, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsPeer* ___mPeer;

  /// @brief Field mRecordQueue, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::ByteQueue* ___mRecordQueue;

  /// @brief Field mClosed, offset: 0x30, size: 0x1, def value: None
  bool ___mClosed;

  /// @brief Field mFailed, offset: 0x31, size: 0x1, def value: None
  bool ___mFailed;

  /// @brief Field mReadVersion, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ___mReadVersion;

  /// @brief Field mWriteVersion, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ___mWriteVersion;

  /// @brief Field mInHandshake, offset: 0x48, size: 0x1, def value: None
  bool ___mInHandshake;

  /// @brief Field mPlaintextLimit, offset: 0x4c, size: 0x4, def value: None
  int32_t ___mPlaintextLimit;

  /// @brief Field mCurrentEpoch, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* ___mCurrentEpoch;

  /// @brief Field mPendingEpoch, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* ___mPendingEpoch;

  /// @brief Field mReadEpoch, offset: 0x60, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* ___mReadEpoch;

  /// @brief Field mWriteEpoch, offset: 0x68, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* ___mWriteEpoch;

  /// @brief Field mRetransmit, offset: 0x70, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit* ___mRetransmit;

  /// @brief Field mRetransmitEpoch, offset: 0x78, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* ___mRetransmitEpoch;

  /// @brief Field mRetransmitTimeout, offset: 0x80, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::Timeout* ___mRetransmitTimeout;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer, ___mTransport) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer, ___mContext) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer, ___mPeer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer, ___mRecordQueue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer, ___mClosed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer, ___mFailed) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer, ___mReadVersion) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer, ___mWriteVersion) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer, ___mInHandshake) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer, ___mPlaintextLimit) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer, ___mCurrentEpoch) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer, ___mPendingEpoch) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer, ___mReadEpoch) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer, ___mWriteEpoch) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer, ___mRetransmit) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer, ___mRetransmitEpoch) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer, ___mRetransmitTimeout) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer, 0x88>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*, "Org.BouncyCastle.Crypto.Tls", "DtlsRecordLayer");
