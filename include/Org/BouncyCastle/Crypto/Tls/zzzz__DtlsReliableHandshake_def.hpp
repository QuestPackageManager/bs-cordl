#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/DtlsReliableHandshake.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DtlsReliableHandshake)
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsHandshakeRetransmit;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsRecordLayer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Timeout;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsHandshakeHash;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __DtlsReliableHandshake__Message;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __DtlsReliableHandshake__RecordLayerBuffer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __DtlsReliableHandshake__Retransmit;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsReliableHandshake;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __DtlsReliableHandshake__Message;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __DtlsReliableHandshake__RecordLayerBuffer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __DtlsReliableHandshake__Retransmit;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit);
// Type: ::Message
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::DtlsReliableHandshake::Message*
class CORDL_TYPE __DtlsReliableHandshake__Message : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Body)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Body;

  __declspec(property(get = get_Seq)) int32_t Seq;

  __declspec(property(get = get_Type)) uint8_t Type;

  /// @brief Field mBody, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mBody, put = __cordl_internal_set_mBody)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mBody;

  /// @brief Field mMessageSeq, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_mMessageSeq, put = __cordl_internal_set_mMessageSeq)) int32_t mMessageSeq;

  /// @brief Field mMsgType, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_mMsgType, put = __cordl_internal_set_mMsgType)) uint8_t mMsgType;

  static inline ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message* New_ctor(int32_t message_seq, uint8_t msg_type, ::ArrayW<uint8_t, ::Array<uint8_t>*> body);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mBody() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mBody();

  constexpr int32_t const& __cordl_internal_get_mMessageSeq() const;

  constexpr int32_t& __cordl_internal_get_mMessageSeq();

  constexpr uint8_t const& __cordl_internal_get_mMsgType() const;

  constexpr uint8_t& __cordl_internal_get_mMsgType();

  constexpr void __cordl_internal_set_mBody(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mMessageSeq(int32_t value);

  constexpr void __cordl_internal_set_mMsgType(uint8_t value);

  /// @brief Method .ctor, addr 0x23b5748, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(int32_t message_seq, uint8_t msg_type, ::ArrayW<uint8_t, ::Array<uint8_t>*> body);

  /// @brief Method get_Body, addr 0x23b6cbc, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Body();

  /// @brief Method get_Seq, addr 0x23b6cac, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Seq();

  /// @brief Method get_Type, addr 0x23b6cb4, size 0x8, virtual false, abstract: false, final false
  inline uint8_t get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DtlsReliableHandshake__Message();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DtlsReliableHandshake__Message", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DtlsReliableHandshake__Message(__DtlsReliableHandshake__Message&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DtlsReliableHandshake__Message", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DtlsReliableHandshake__Message(__DtlsReliableHandshake__Message const&) = delete;

  /// @brief Field mMessageSeq, offset: 0x10, size: 0x4, def value: None
  int32_t ___mMessageSeq;

  /// @brief Field mMsgType, offset: 0x14, size: 0x1, def value: None
  uint8_t ___mMsgType;

  /// @brief Field mBody, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mBody;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1230 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message, ___mMessageSeq) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message, ___mMsgType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message, ___mBody) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
// Type: ::RecordLayerBuffer
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::DtlsReliableHandshake::RecordLayerBuffer*
class CORDL_TYPE __DtlsReliableHandshake__RecordLayerBuffer : public ::System::IO::MemoryStream {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer* New_ctor(int32_t size);

  /// @brief Method SendToRecordLayer, addr 0x23b6bf8, size 0xb4, virtual false, abstract: false, final false
  inline void SendToRecordLayer(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* recordLayer);

  /// @brief Method .ctor, addr 0x23b6bf0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t size);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DtlsReliableHandshake__RecordLayerBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DtlsReliableHandshake__RecordLayerBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DtlsReliableHandshake__RecordLayerBuffer(__DtlsReliableHandshake__RecordLayerBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DtlsReliableHandshake__RecordLayerBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DtlsReliableHandshake__RecordLayerBuffer(__DtlsReliableHandshake__RecordLayerBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1231 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
// Type: ::Retransmit
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::DtlsReliableHandshake::Retransmit*
class CORDL_TYPE __DtlsReliableHandshake__Retransmit : public ::System::Object {
public:
  // Declarations
  /// @brief Field mOuter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mOuter, put = __cordl_internal_set_mOuter)) ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake* mOuter;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit*() noexcept;

  static inline ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit* New_ctor(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake* outer);

  /// @brief Method ReceivedHandshakeRecord, addr 0x23b6cc4, size 0x2c, virtual true, abstract: false, final true
  inline void ReceivedHandshakeRecord(int32_t epoch, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*& __cordl_internal_get_mOuter();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*> const& __cordl_internal_get_mOuter() const;

  constexpr void __cordl_internal_set_mOuter(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake* value);

  /// @brief Method .ctor, addr 0x23b62f8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake* outer);

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit"
  constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit* i___Org__BouncyCastle__Crypto__Tls__DtlsHandshakeRetransmit() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DtlsReliableHandshake__Retransmit();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DtlsReliableHandshake__Retransmit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DtlsReliableHandshake__Retransmit(__DtlsReliableHandshake__Retransmit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DtlsReliableHandshake__Retransmit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DtlsReliableHandshake__Retransmit(__DtlsReliableHandshake__Retransmit const&) = delete;

  /// @brief Field mOuter, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake* ___mOuter;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1232 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit, ___mOuter) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
// Type: Org.BouncyCastle.Crypto.Tls::DtlsReliableHandshake
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DtlsReliableHandshake*
class CORDL_TYPE DtlsReliableHandshake : public ::System::Object {
public:
  // Declarations
  using Message = ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message;

  using RecordLayerBuffer = ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer;

  using Retransmit = ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit;

  __declspec(property(get = get_HandshakeHash)) ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* HandshakeHash;

  /// @brief Field mCurrentInboundFlight, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mCurrentInboundFlight, put = __cordl_internal_set_mCurrentInboundFlight)) ::System::Collections::IDictionary* mCurrentInboundFlight;

  /// @brief Field mHandshakeHash, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mHandshakeHash, put = __cordl_internal_set_mHandshakeHash)) ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* mHandshakeHash;

  /// @brief Field mHandshakeTimeout, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mHandshakeTimeout, put = __cordl_internal_set_mHandshakeTimeout)) ::Org::BouncyCastle::Crypto::Tls::Timeout* mHandshakeTimeout;

  /// @brief Field mMessageSeq, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_mMessageSeq, put = __cordl_internal_set_mMessageSeq)) int32_t mMessageSeq;

  /// @brief Field mNextReceiveSeq, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_mNextReceiveSeq, put = __cordl_internal_set_mNextReceiveSeq)) int32_t mNextReceiveSeq;

  /// @brief Field mOutboundFlight, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mOutboundFlight, put = __cordl_internal_set_mOutboundFlight)) ::System::Collections::IList* mOutboundFlight;

  /// @brief Field mPreviousInboundFlight, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mPreviousInboundFlight, put = __cordl_internal_set_mPreviousInboundFlight)) ::System::Collections::IDictionary* mPreviousInboundFlight;

  /// @brief Field mRecordLayer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mRecordLayer, put = __cordl_internal_set_mRecordLayer)) ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* mRecordLayer;

  /// @brief Field mResendMillis, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_mResendMillis, put = __cordl_internal_set_mResendMillis)) int32_t mResendMillis;

  /// @brief Field mResendTimeout, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_mResendTimeout, put = __cordl_internal_set_mResendTimeout)) ::Org::BouncyCastle::Crypto::Tls::Timeout* mResendTimeout;

  /// @brief Method BackOff, addr 0x23b6320, size 0x5c, virtual false, abstract: false, final false
  inline int32_t BackOff(int32_t timeoutMillis);

  /// @brief Method CheckAll, addr 0x23b6718, size 0x3b0, virtual false, abstract: false, final false
  static inline bool CheckAll(::System::Collections::IDictionary* inboundFlight);

  /// @brief Method CheckInboundFlight, addr 0x23b53c0, size 0x388, virtual false, abstract: false, final false
  inline void CheckInboundFlight();

  /// @brief Method Finish, addr 0x23b0ed8, size 0xa0, virtual false, abstract: false, final false
  inline void Finish();

  /// @brief Method GetPendingMessage, addr 0x23b5ad0, size 0x1a4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message* GetPendingMessage();

  static inline ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* transport,
                                                                                  int32_t timeoutMillis);

  /// @brief Method NotifyHelloComplete, addr 0x23b0dc8, size 0xac, virtual false, abstract: false, final false
  inline void NotifyHelloComplete();

  /// @brief Method PrepareInboundFlight, addr 0x23b5aa4, size 0x2c, virtual false, abstract: false, final false
  inline void PrepareInboundFlight(::System::Collections::IDictionary* nextFlight);

  /// @brief Method PrepareToFinish, addr 0x23b0f78, size 0xb0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* PrepareToFinish();

  /// @brief Method ProcessRecord, addr 0x23b5e70, size 0x488, virtual false, abstract: false, final false
  inline void ProcessRecord(int32_t windowSize, int32_t epoch, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method ReceiveMessage, addr 0x23b0910, size 0x2e4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message* ReceiveMessage();

  /// @brief Method ReceiveMessageBody, addr 0x23b0e74, size 0x64, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReceiveMessageBody(uint8_t msg_type);

  /// @brief Method ResendOutboundFlight, addr 0x23b5c74, size 0x1fc, virtual false, abstract: false, final false
  inline void ResendOutboundFlight();

  /// @brief Method ResetAll, addr 0x23b637c, size 0x39c, virtual false, abstract: false, final false
  static inline void ResetAll(::System::Collections::IDictionary* inboundFlight);

  /// @brief Method ResetHandshakeMessagesDigest, addr 0x23b0d24, size 0xa4, virtual false, abstract: false, final false
  inline void ResetHandshakeMessagesDigest();

  /// @brief Method SendMessage, addr 0x23b0744, size 0x1cc, virtual false, abstract: false, final false
  inline void SendMessage(uint8_t msg_type, ::ArrayW<uint8_t, ::Array<uint8_t>*> body);

  /// @brief Method UpdateHandshakeMessagesDigest, addr 0x23b5894, size 0x210, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message* UpdateHandshakeMessagesDigest(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message* message);

  /// @brief Method WriteHandshakeFragment, addr 0x23b6ac8, size 0x128, virtual false, abstract: false, final false
  inline void WriteHandshakeFragment(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message* message, int32_t fragment_offset, int32_t fragment_length);

  /// @brief Method WriteMessage, addr 0x23b5788, size 0x10c, virtual false, abstract: false, final false
  inline void WriteMessage(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message* message);

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_mCurrentInboundFlight();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __cordl_internal_get_mCurrentInboundFlight() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*& __cordl_internal_get_mHandshakeHash();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*> const& __cordl_internal_get_mHandshakeHash() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::Timeout*& __cordl_internal_get_mHandshakeTimeout();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::Timeout*> const& __cordl_internal_get_mHandshakeTimeout() const;

  constexpr int32_t const& __cordl_internal_get_mMessageSeq() const;

  constexpr int32_t& __cordl_internal_get_mMessageSeq();

  constexpr int32_t const& __cordl_internal_get_mNextReceiveSeq() const;

  constexpr int32_t& __cordl_internal_get_mNextReceiveSeq();

  constexpr ::System::Collections::IList*& __cordl_internal_get_mOutboundFlight();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get_mOutboundFlight() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_mPreviousInboundFlight();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __cordl_internal_get_mPreviousInboundFlight() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*& __cordl_internal_get_mRecordLayer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*> const& __cordl_internal_get_mRecordLayer() const;

  constexpr int32_t const& __cordl_internal_get_mResendMillis() const;

  constexpr int32_t& __cordl_internal_get_mResendMillis();

  constexpr ::Org::BouncyCastle::Crypto::Tls::Timeout*& __cordl_internal_get_mResendTimeout();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::Timeout*> const& __cordl_internal_get_mResendTimeout() const;

  constexpr void __cordl_internal_set_mCurrentInboundFlight(::System::Collections::IDictionary* value);

  constexpr void __cordl_internal_set_mHandshakeHash(::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* value);

  constexpr void __cordl_internal_set_mHandshakeTimeout(::Org::BouncyCastle::Crypto::Tls::Timeout* value);

  constexpr void __cordl_internal_set_mMessageSeq(int32_t value);

  constexpr void __cordl_internal_set_mNextReceiveSeq(int32_t value);

  constexpr void __cordl_internal_set_mOutboundFlight(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_mPreviousInboundFlight(::System::Collections::IDictionary* value);

  constexpr void __cordl_internal_set_mRecordLayer(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* value);

  constexpr void __cordl_internal_set_mResendMillis(int32_t value);

  constexpr void __cordl_internal_set_mResendTimeout(::Org::BouncyCastle::Crypto::Tls::Timeout* value);

  /// @brief Method .ctor, addr 0x23b05f8, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* transport, int32_t timeoutMillis);

  /// @brief Method get_HandshakeHash, addr 0x23b53b8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* get_HandshakeHash();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DtlsReliableHandshake();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DtlsReliableHandshake", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DtlsReliableHandshake(DtlsReliableHandshake&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DtlsReliableHandshake", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DtlsReliableHandshake(DtlsReliableHandshake const&) = delete;

  /// @brief Field mRecordLayer, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* ___mRecordLayer;

  /// @brief Field mHandshakeTimeout, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::Timeout* ___mHandshakeTimeout;

  /// @brief Field mHandshakeHash, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* ___mHandshakeHash;

  /// @brief Field mCurrentInboundFlight, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___mCurrentInboundFlight;

  /// @brief Field mPreviousInboundFlight, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___mPreviousInboundFlight;

  /// @brief Field mOutboundFlight, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::IList* ___mOutboundFlight;

  /// @brief Field mResendMillis, offset: 0x40, size: 0x4, def value: None
  int32_t ___mResendMillis;

  /// @brief Field mResendTimeout, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::Timeout* ___mResendTimeout;

  /// @brief Field mMessageSeq, offset: 0x50, size: 0x4, def value: None
  int32_t ___mMessageSeq;

  /// @brief Field mNextReceiveSeq, offset: 0x54, size: 0x4, def value: None
  int32_t ___mNextReceiveSeq;

  /// @brief Field InitialResendMillis offset 0xffffffff size 0x4
  static constexpr int32_t InitialResendMillis{ static_cast<int32_t>(0x3e8) };

  /// @brief Field MaxReceiveAhead offset 0xffffffff size 0x4
  static constexpr int32_t MaxReceiveAhead{ static_cast<int32_t>(0x10) };

  /// @brief Field MaxResendMillis offset 0xffffffff size 0x4
  static constexpr int32_t MaxResendMillis{ static_cast<int32_t>(0xea60) };

  /// @brief Field MessageHeaderLength offset 0xffffffff size 0x4
  static constexpr int32_t MessageHeaderLength{ static_cast<int32_t>(0xc) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1233 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake, 0x58>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake, ___mRecordLayer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake, ___mHandshakeTimeout) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake, ___mHandshakeHash) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake, ___mCurrentInboundFlight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake, ___mPreviousInboundFlight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake, ___mOutboundFlight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake, ___mResendMillis) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake, ___mResendTimeout) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake, ___mMessageSeq) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake, ___mNextReceiveSeq) == 0x54, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*, "Org.BouncyCastle.Crypto.Tls", "DtlsReliableHandshake");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*, "Org.BouncyCastle.Crypto.Tls", "DtlsReliableHandshake/Message");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer*, "Org.BouncyCastle.Crypto.Tls", "DtlsReliableHandshake/RecordLayerBuffer");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit*, "Org.BouncyCastle.Crypto.Tls", "DtlsReliableHandshake/Retransmit");
