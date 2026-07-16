#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/DtlsReliableHandshake.hpp"
#include "System/IO/zzzz__MemoryStream_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsReliableHandshake_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsHandshakeRetransmit_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsRecordLayer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsReliableHandshake_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Timeout_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsHandshakeHash_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message::*)(int32_t, uint8_t, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x34481b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message.get_Seq
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message::get_Seq)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34496b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message*>(), { "get_Seq", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34496c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message*>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message.get_Body
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message::get_Body)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34496c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message*>(), { "get_Body", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message::__cordl_internal_get_mMessageSeq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMessageSeq;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message::__cordl_internal_get_mMessageSeq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMessageSeq;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message::__cordl_internal_set_mMessageSeq(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mMessageSeq = value;
}
constexpr uint8_t& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message::__cordl_internal_get_mMsgType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMsgType;
}
constexpr uint8_t const& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message::__cordl_internal_get_mMsgType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMsgType;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message::__cordl_internal_set_mMsgType(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mMsgType = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message::__cordl_internal_get_mBody() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBody;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message::__cordl_internal_get_mBody() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBody;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message::__cordl_internal_set_mBody(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mBody = value;
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message::_ctor(int32_t message_seq, uint8_t msg_type, ::ArrayW<uint8_t> body) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message_seq, msg_type, body);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message::get_Seq() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message*>(), { "get_Seq", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline uint8_t Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message*>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message::get_Body() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message*>(), { "get_Body", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message* Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message::New_ctor(int32_t message_seq, uint8_t msg_type,
                                                                                                                                                ::ArrayW<uint8_t> body) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message*>(message_seq, msg_type, body));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message::DtlsReliableHandshake_Message() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_RecordLayerBuffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_RecordLayerBuffer::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_RecordLayerBuffer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34495f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_RecordLayerBuffer*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_RecordLayerBuffer.SendToRecordLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_RecordLayerBuffer::*)(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_RecordLayerBuffer::SendToRecordLayer)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x34495f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_RecordLayerBuffer*>(),
                                                                                           { "SendToRecordLayer", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_RecordLayerBuffer::_ctor(int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_RecordLayerBuffer*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_RecordLayerBuffer::SendToRecordLayer(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* recordLayer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_RecordLayerBuffer*>(),
                                                                                         { "SendToRecordLayer", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, recordLayer);
}
inline ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_RecordLayerBuffer* Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_RecordLayerBuffer::New_ctor(int32_t size) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_RecordLayerBuffer*>(size));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_RecordLayerBuffer::DtlsReliableHandshake_RecordLayerBuffer() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Retransmit._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Retransmit::*)(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Retransmit::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3448d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Retransmit*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Retransmit.ReceivedHandshakeRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Retransmit::*)(int32_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Retransmit::ReceivedHandshakeRecord)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x34496d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Retransmit*>(),
                                         { "ReceivedHandshakeRecord", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Retransmit::__cordl_internal_get_mOuter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mOuter;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake* const& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Retransmit::__cordl_internal_get_mOuter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mOuter;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Retransmit::__cordl_internal_set_mOuter(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mOuter = value;
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Retransmit::_ctor(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake* outer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Retransmit*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outer);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Retransmit::ReceivedHandshakeRecord(int32_t epoch, ::ArrayW<uint8_t> buf, int32_t off, int32_t len) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Retransmit*>(),
                                       { "ReceivedHandshakeRecord", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, epoch, buf, off, len);
}
inline ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Retransmit*
Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Retransmit::New_ctor(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake* outer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Retransmit*>(outer));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit"
constexpr Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Retransmit::operator ::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit"
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit*
Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Retransmit::i___Org__BouncyCastle__Crypto__Tls__DtlsHandshakeRetransmit() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Retransmit::DtlsReliableHandshake_Retransmit() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)(
    ::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x34431c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(),
            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.NotifyHelloComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::NotifyHelloComplete)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x34439d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(), { "NotifyHelloComplete", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.get_HandshakeHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::get_HandshakeHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3447e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(), { "get_HandshakeHash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.PrepareToFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::PrepareToFinish)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3443b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(), { "PrepareToFinish", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.SendMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)(uint8_t, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::SendMessage)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x3443318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(),
                                                                                           { "SendMessage", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.ReceiveMessageBody
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ReceiveMessageBody)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3443a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(), { "ReceiveMessageBody", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.ReceiveMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message* (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ReceiveMessage)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x34434e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(), { "ReceiveMessage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.Finish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)()>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::Finish)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3443ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(), { "Finish", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.ResetHandshakeMessagesDigest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ResetHandshakeMessagesDigest)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3443930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(), { "ResetHandshakeMessagesDigest", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.BackOff
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::BackOff)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3448d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(), { "BackOff", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.CheckInboundFlight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::CheckInboundFlight)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x3447e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(), { "CheckInboundFlight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.GetPendingMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message* (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::GetPendingMessage)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x344850c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(), { "GetPendingMessage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.PrepareInboundFlight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)(::System::Collections::IDictionary*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::PrepareInboundFlight)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x34484e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(),
                                                                                           { "PrepareInboundFlight", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.ProcessRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)(int32_t, int32_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ProcessRecord)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x34488b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(),
            { "ProcessRecord", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.ResendOutboundFlight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ResendOutboundFlight)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x34486a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(), { "ResendOutboundFlight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.UpdateHandshakeMessagesDigest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message* (
    ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::UpdateHandshakeMessagesDigest)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x34482c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(),
                                                             { "UpdateHandshakeMessagesDigest", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.WriteMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::WriteMessage)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x34481c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(),
                                                             { "WriteMessage", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.WriteHandshakeFragment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)(
    ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message*, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::WriteHandshakeFragment)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x34494b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(),
            { "WriteHandshakeFragment", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.CheckAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::IDictionary*)>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::CheckAll)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x3449128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(), { "CheckAll", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.ResetAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IDictionary*)>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ResetAll)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x3448da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(), { "ResetAll", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mRecordLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRecordLayer;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* const& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mRecordLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRecordLayer;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_set_mRecordLayer(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mRecordLayer = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::Timeout*& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mHandshakeTimeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mHandshakeTimeout;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::Timeout* const& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mHandshakeTimeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mHandshakeTimeout;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_set_mHandshakeTimeout(::Org::BouncyCastle::Crypto::Tls::Timeout* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mHandshakeTimeout = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mHandshakeHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mHandshakeHash;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* const& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mHandshakeHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mHandshakeHash;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_set_mHandshakeHash(::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mHandshakeHash = value;
}
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mCurrentInboundFlight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCurrentInboundFlight;
}
constexpr ::System::Collections::IDictionary* const& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mCurrentInboundFlight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCurrentInboundFlight;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_set_mCurrentInboundFlight(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mCurrentInboundFlight = value;
}
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mPreviousInboundFlight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPreviousInboundFlight;
}
constexpr ::System::Collections::IDictionary* const& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mPreviousInboundFlight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPreviousInboundFlight;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_set_mPreviousInboundFlight(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPreviousInboundFlight = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mOutboundFlight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mOutboundFlight;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mOutboundFlight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mOutboundFlight;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_set_mOutboundFlight(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mOutboundFlight = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mResendMillis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mResendMillis;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mResendMillis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mResendMillis;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_set_mResendMillis(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mResendMillis = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::Timeout*& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mResendTimeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mResendTimeout;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::Timeout* const& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mResendTimeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mResendTimeout;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_set_mResendTimeout(::Org::BouncyCastle::Crypto::Tls::Timeout* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mResendTimeout = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mMessageSeq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMessageSeq;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mMessageSeq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMessageSeq;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_set_mMessageSeq(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mMessageSeq = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mNextReceiveSeq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mNextReceiveSeq;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mNextReceiveSeq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mNextReceiveSeq;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_set_mNextReceiveSeq(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mNextReceiveSeq = value;
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* transport,
                                                                         int32_t timeoutMillis) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(),
          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, transport, timeoutMillis);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::NotifyHelloComplete() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(), { "NotifyHelloComplete", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::get_HandshakeHash() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(), { "get_HandshakeHash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::PrepareToFinish() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(), { "PrepareToFinish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::SendMessage(uint8_t msg_type, ::ArrayW<uint8_t> body) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(),
                                                                                         { "SendMessage", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg_type, body);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ReceiveMessageBody(uint8_t msg_type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(), { "ReceiveMessageBody", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, msg_type);
}
inline ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message* Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ReceiveMessage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(), { "ReceiveMessage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::Finish() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(), { "Finish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ResetHandshakeMessagesDigest() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(), { "ResetHandshakeMessagesDigest", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::BackOff(int32_t timeoutMillis) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(), { "BackOff", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, timeoutMillis);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::CheckInboundFlight() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(), { "CheckInboundFlight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message* Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::GetPendingMessage() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(), { "GetPendingMessage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::PrepareInboundFlight(::System::Collections::IDictionary* nextFlight) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(),
                                                                                         { "PrepareInboundFlight", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nextFlight);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ProcessRecord(int32_t windowSize, int32_t epoch, ::ArrayW<uint8_t> buf, int32_t off, int32_t len) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(),
                       { "ProcessRecord", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, windowSize, epoch, buf, off, len);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ResendOutboundFlight() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(), { "ResendOutboundFlight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message*
Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::UpdateHandshakeMessagesDigest(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message* message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(),
                                                           { "UpdateHandshakeMessagesDigest", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message*>(this, ___internal_method, message);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::WriteMessage(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message* message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(),
                                                           { "WriteMessage", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::WriteHandshakeFragment(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message* message, int32_t fragment_offset,
                                                                                          int32_t fragment_length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(),
          { "WriteHandshakeFragment", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, fragment_offset, fragment_length);
}
inline bool Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::CheckAll(::System::Collections::IDictionary* inboundFlight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(), { "CheckAll", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, inboundFlight);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ResetAll(::System::Collections::IDictionary* inboundFlight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(), { "ResetAll", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inboundFlight);
}
inline ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake* Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                                                                                ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* transport,
                                                                                                                                int32_t timeoutMillis) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(context, transport, timeoutMillis));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::DtlsReliableHandshake() {}
