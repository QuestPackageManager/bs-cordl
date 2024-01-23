#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class TlsCloseable;
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
// Type: Org.BouncyCastle.Crypto.Tls::DtlsRecordLayer
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1229))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DtlsRecordLayer*
class CORDL_TYPE DtlsRecordLayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field mTransport, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mTransport, put = __cordl_internal_set_mTransport))::Org::BouncyCastle::Crypto::Tls::DatagramTransport* mTransport;

  /// @brief Field mContext, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mContext, put = __cordl_internal_set_mContext))::Org::BouncyCastle::Crypto::Tls::TlsContext* mContext;

  /// @brief Field mPeer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mPeer, put = __cordl_internal_set_mPeer))::Org::BouncyCastle::Crypto::Tls::TlsPeer* mPeer;

  /// @brief Field mRecordQueue, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mRecordQueue, put = __cordl_internal_set_mRecordQueue))::Org::BouncyCastle::Crypto::Tls::ByteQueue* mRecordQueue;

  /// @brief Field mClosed, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_mClosed, put = __cordl_internal_set_mClosed)) bool mClosed;

  /// @brief Field mFailed, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_mFailed, put = __cordl_internal_set_mFailed)) bool mFailed;

  /// @brief Field mReadVersion, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mReadVersion, put = __cordl_internal_set_mReadVersion))::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* mReadVersion;

  /// @brief Field mWriteVersion, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_mWriteVersion, put = __cordl_internal_set_mWriteVersion))::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* mWriteVersion;

  /// @brief Field mInHandshake, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_mInHandshake, put = __cordl_internal_set_mInHandshake)) bool mInHandshake;

  /// @brief Field mPlaintextLimit, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_mPlaintextLimit, put = __cordl_internal_set_mPlaintextLimit)) int32_t mPlaintextLimit;

  /// @brief Field mCurrentEpoch, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_mCurrentEpoch, put = __cordl_internal_set_mCurrentEpoch))::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* mCurrentEpoch;

  /// @brief Field mPendingEpoch, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_mPendingEpoch, put = __cordl_internal_set_mPendingEpoch))::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* mPendingEpoch;

  /// @brief Field mReadEpoch, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_mReadEpoch, put = __cordl_internal_set_mReadEpoch))::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* mReadEpoch;

  /// @brief Field mWriteEpoch, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_mWriteEpoch, put = __cordl_internal_set_mWriteEpoch))::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* mWriteEpoch;

  /// @brief Field mRetransmit, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_mRetransmit, put = __cordl_internal_set_mRetransmit))::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit* mRetransmit;

  /// @brief Field mRetransmitEpoch, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_mRetransmitEpoch, put = __cordl_internal_set_mRetransmitEpoch))::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* mRetransmitEpoch;

  /// @brief Field mRetransmitTimeout, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_mRetransmitTimeout, put = __cordl_internal_set_mRetransmitTimeout))::Org::BouncyCastle::Crypto::Tls::Timeout* mRetransmitTimeout;

  __declspec(property(get = get_IsClosed)) bool IsClosed;

  __declspec(property(get = get_ReadEpoch)) int32_t ReadEpoch;

  __declspec(property(get = get_ReadVersion, put = set_ReadVersion))::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ReadVersion;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::DatagramTransport"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::DatagramTransport*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::DatagramTransport"
  constexpr ::Org::BouncyCastle::Crypto::Tls::DatagramTransport* i___Org__BouncyCastle__Crypto__Tls__DatagramTransport() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCloseable"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsCloseable*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsCloseable"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCloseable* i___Org__BouncyCastle__Crypto__Tls__TlsCloseable() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Tls::DatagramTransport*& __cordl_internal_get_mTransport();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::DatagramTransport*> const& __cordl_internal_get_mTransport() const;

  constexpr void __cordl_internal_set_mTransport(::Org::BouncyCastle::Crypto::Tls::DatagramTransport* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext*& __cordl_internal_get_mContext();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsContext*> const& __cordl_internal_get_mContext() const;

  constexpr void __cordl_internal_set_mContext(::Org::BouncyCastle::Crypto::Tls::TlsContext* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsPeer*& __cordl_internal_get_mPeer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsPeer*> const& __cordl_internal_get_mPeer() const;

  constexpr void __cordl_internal_set_mPeer(::Org::BouncyCastle::Crypto::Tls::TlsPeer* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::ByteQueue*& __cordl_internal_get_mRecordQueue();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::ByteQueue*> const& __cordl_internal_get_mRecordQueue() const;

  constexpr void __cordl_internal_set_mRecordQueue(::Org::BouncyCastle::Crypto::Tls::ByteQueue* value);

  constexpr bool& __cordl_internal_get_mClosed();

  constexpr bool const& __cordl_internal_get_mClosed() const;

  constexpr void __cordl_internal_set_mClosed(bool value);

  constexpr bool& __cordl_internal_get_mFailed();

  constexpr bool const& __cordl_internal_get_mFailed() const;

  constexpr void __cordl_internal_set_mFailed(bool value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*& __cordl_internal_get_mReadVersion();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*> const& __cordl_internal_get_mReadVersion() const;

  constexpr void __cordl_internal_set_mReadVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*& __cordl_internal_get_mWriteVersion();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*> const& __cordl_internal_get_mWriteVersion() const;

  constexpr void __cordl_internal_set_mWriteVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value);

  constexpr bool& __cordl_internal_get_mInHandshake();

  constexpr bool const& __cordl_internal_get_mInHandshake() const;

  constexpr void __cordl_internal_set_mInHandshake(bool value);

  constexpr int32_t& __cordl_internal_get_mPlaintextLimit();

  constexpr int32_t const& __cordl_internal_get_mPlaintextLimit() const;

  constexpr void __cordl_internal_set_mPlaintextLimit(int32_t value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*& __cordl_internal_get_mCurrentEpoch();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*> const& __cordl_internal_get_mCurrentEpoch() const;

  constexpr void __cordl_internal_set_mCurrentEpoch(::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*& __cordl_internal_get_mPendingEpoch();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*> const& __cordl_internal_get_mPendingEpoch() const;

  constexpr void __cordl_internal_set_mPendingEpoch(::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*& __cordl_internal_get_mReadEpoch();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*> const& __cordl_internal_get_mReadEpoch() const;

  constexpr void __cordl_internal_set_mReadEpoch(::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*& __cordl_internal_get_mWriteEpoch();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*> const& __cordl_internal_get_mWriteEpoch() const;

  constexpr void __cordl_internal_set_mWriteEpoch(::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit*& __cordl_internal_get_mRetransmit();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit*> const& __cordl_internal_get_mRetransmit() const;

  constexpr void __cordl_internal_set_mRetransmit(::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*& __cordl_internal_get_mRetransmitEpoch();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*> const& __cordl_internal_get_mRetransmitEpoch() const;

  constexpr void __cordl_internal_set_mRetransmitEpoch(::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::Timeout*& __cordl_internal_get_mRetransmitTimeout();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::Timeout*> const& __cordl_internal_get_mRetransmitTimeout() const;

  constexpr void __cordl_internal_set_mRetransmitTimeout(::Org::BouncyCastle::Crypto::Tls::Timeout* value);

  /// @brief Method SendDatagram, addr 0xf6dfdc, size 0xc0, virtual false, abstract: false, final false
  static inline void SendDatagram(::Org::BouncyCastle::Crypto::Tls::DatagramTransport* sender, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  static inline ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* New_ctor(::Org::BouncyCastle::Crypto::Tls::DatagramTransport* transport, ::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                            ::Org::BouncyCastle::Crypto::Tls::TlsPeer* peer, uint8_t contentType);

  /// @brief Method .ctor, addr 0xf695d0, size 0x13c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::DatagramTransport* transport, ::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Tls::TlsPeer* peer,
                    uint8_t contentType);

  /// @brief Method get_IsClosed, addr 0xf6e09c, size 0x18, virtual false, abstract: false, final false
  inline bool get_IsClosed();

  /// @brief Method SetPlaintextLimit, addr 0xf6e0b4, size 0x24, virtual true, abstract: false, final false
  inline void SetPlaintextLimit(int32_t plaintextLimit);

  /// @brief Method get_ReadEpoch, addr 0xf6e0d8, size 0x1c, virtual true, abstract: false, final false
  inline int32_t get_ReadEpoch();

  /// @brief Method get_ReadVersion, addr 0xf6e0f4, size 0x18, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_ReadVersion();

  /// @brief Method set_ReadVersion, addr 0xf6e10c, size 0x24, virtual true, abstract: false, final false
  inline void set_ReadVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value);

  /// @brief Method SetWriteVersion, addr 0xf6e130, size 0x24, virtual true, abstract: false, final false
  inline void SetWriteVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* writeVersion);

  /// @brief Method InitPendingEpoch, addr 0xf6e154, size 0xc0, virtual true, abstract: false, final false
  inline void InitPendingEpoch(::Org::BouncyCastle::Crypto::Tls::TlsCipher* pendingCipher);

  /// @brief Method HandshakeSuccessful, addr 0xf6e214, size 0xdc, virtual true, abstract: false, final false
  inline void HandshakeSuccessful(::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit* retransmit);

  /// @brief Method ResetWriteEpoch, addr 0xf6e2f0, size 0x14, virtual true, abstract: false, final false
  inline void ResetWriteEpoch();

  /// @brief Method GetReceiveLimit, addr 0xf6e304, size 0x170, virtual true, abstract: false, final false
  inline int32_t GetReceiveLimit();

  /// @brief Method GetSendLimit, addr 0xf6e474, size 0x174, virtual true, abstract: false, final false
  inline int32_t GetSendLimit();

  /// @brief Method Receive, addr 0xf6e5e8, size 0x1c4, virtual true, abstract: false, final false
  inline int32_t Receive(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len, int32_t waitMillis);

  /// @brief Method Send, addr 0xf6eedc, size 0x178, virtual true, abstract: false, final false
  inline void Send(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method Close, addr 0xf6f2d4, size 0x84, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Failed, addr 0xf6f4b4, size 0x40, virtual true, abstract: false, final false
  inline void Failed();

  /// @brief Method Fail, addr 0xf6f4f4, size 0xcc, virtual true, abstract: false, final false
  inline void Fail(uint8_t alertDescription);

  /// @brief Method Warn, addr 0xf6f6ec, size 0x14, virtual true, abstract: false, final false
  inline void Warn(uint8_t alertDescription, ::StringW message);

  /// @brief Method CloseTransport, addr 0xf6f358, size 0x15c, virtual false, abstract: false, final false
  inline void CloseTransport();

  /// @brief Method RaiseAlert, addr 0xf6f5c0, size 0x12c, virtual false, abstract: false, final false
  inline void RaiseAlert(uint8_t alertLevel, uint8_t alertDescription, ::StringW message, ::System::Exception* cause);

  /// @brief Method ReceiveDatagram, addr 0xf6f700, size 0x194, virtual false, abstract: false, final false
  inline int32_t ReceiveDatagram(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len, int32_t waitMillis);

  /// @brief Method ProcessRecord, addr 0xf6e97c, size 0x560, virtual false, abstract: false, final false
  inline int32_t ProcessRecord(int32_t received, ::ArrayW<uint8_t, ::Array<uint8_t>*> record, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off);

  /// @brief Method ReceiveRecord, addr 0xf6e7ac, size 0x1d0, virtual false, abstract: false, final false
  inline int32_t ReceiveRecord(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len, int32_t waitMillis);

  /// @brief Method SendRecord, addr 0xf6f054, size 0x280, virtual false, abstract: false, final false
  inline void SendRecord(uint8_t contentType, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method GetMacSequenceNumber, addr 0xf6f8d8, size 0x8, virtual false, abstract: false, final false
  static inline int64_t GetMacSequenceNumber(int32_t epoch, int64_t sequence_number);

  // Ctor Parameters [CppParam { name: "", ty: "DtlsRecordLayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DtlsRecordLayer(DtlsRecordLayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DtlsRecordLayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DtlsRecordLayer(DtlsRecordLayer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DtlsRecordLayer();

public:
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

  /// @brief Field RECORD_HEADER_LENGTH offset 0xffffffff size 0x4
  static constexpr int32_t RECORD_HEADER_LENGTH{ static_cast<int32_t>(0xd) };

  /// @brief Field MAX_FRAGMENT_LENGTH offset 0xffffffff size 0x4
  static constexpr int32_t MAX_FRAGMENT_LENGTH{ static_cast<int32_t>(0x4000) };

  /// @brief Field TCP_MSL offset 0xffffffff size 0x8
  static constexpr int64_t TCP_MSL{ static_cast<int64_t>(0x1d4c0) };

  /// @brief Field RETRANSMIT_TIMEOUT offset 0xffffffff size 0x8
  static constexpr int64_t RETRANSMIT_TIMEOUT{ static_cast<int64_t>(0x3a980) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer, 0x88>, "Size mismatch!");

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

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*, "Org.BouncyCastle.Crypto.Tls", "DtlsRecordLayer");
