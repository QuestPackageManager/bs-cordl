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
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::*)(
    int32_t, uint8_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x23b5748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message.get_Seq
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::get_Seq)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b6cac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*>::get(), "get_Seq",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b6cb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*>::get(), "get_Type",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message.get_Body
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::get_Body)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b6cbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*>::get(), "get_Body",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::__cordl_internal_get_mMessageSeq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMessageSeq;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::__cordl_internal_get_mMessageSeq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMessageSeq;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::__cordl_internal_set_mMessageSeq(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mMessageSeq = value;
}
constexpr uint8_t& Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::__cordl_internal_get_mMsgType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMsgType;
}
constexpr uint8_t const& Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::__cordl_internal_get_mMsgType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMsgType;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::__cordl_internal_set_mMsgType(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mMsgType = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::__cordl_internal_get_mBody() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBody;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::__cordl_internal_get_mBody() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBody;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::__cordl_internal_set_mBody(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mBody)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message* Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::New_ctor(int32_t message_seq, uint8_t msg_type,
                                                                                                                                                      ::ArrayW<uint8_t, ::Array<uint8_t>*> body) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*>(message_seq, msg_type, body));
}
inline void Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::_ctor(int32_t message_seq, uint8_t msg_type, ::ArrayW<uint8_t, ::Array<uint8_t>*> body) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message_seq, msg_type, body);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::get_Seq() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*>::get(), "get_Seq",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline uint8_t Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::get_Type() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*>::get(), "get_Type",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::get_Body() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*>::get(), "get_Body",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message::__DtlsReliableHandshake__Message() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b6bf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer.SendToRecordLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer::*)(
    ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*)>(&::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer::SendToRecordLayer)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x23b6bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer*>::get(), "SendToRecordLayer",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get() })));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer* Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer::New_ctor(int32_t size) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer*>(size));
}
inline void Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer::_ctor(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, size);
}
inline void Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer::SendToRecordLayer(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* recordLayer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer*>::get(), "SendToRecordLayer",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, recordLayer);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__RecordLayerBuffer::__DtlsReliableHandshake__RecordLayerBuffer() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit::*)(
    ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*)>(&::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23b62f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit.ReceivedHandshakeRecord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit::*)(
    int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit::ReceivedHandshakeRecord)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23b6cc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit*>::get(), "ReceivedHandshakeRecord",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit"
constexpr Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit::operator ::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit"
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit*
Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit::i___Org__BouncyCastle__Crypto__Tls__DtlsHandshakeRetransmit() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*& Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit::__cordl_internal_get_mOuter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mOuter;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*> const&
Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit::__cordl_internal_get_mOuter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mOuter;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit::__cordl_internal_set_mOuter(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mOuter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit*
Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit::New_ctor(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake* outer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit*>(outer));
}
inline void Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit::_ctor(::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake* outer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outer);
}
inline void Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit::ReceivedHandshakeRecord(int32_t epoch, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit*>::get(), "ReceivedHandshakeRecord",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, epoch, buf, off, len);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Retransmit::__DtlsReliableHandshake__Retransmit() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)(
    ::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x23b05f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.NotifyHelloComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::NotifyHelloComplete)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x23b0dc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                                                                               "NotifyHelloComplete", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.get_HandshakeHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::get_HandshakeHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b53b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                                                                               "get_HandshakeHash", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.PrepareToFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::PrepareToFinish)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23b0f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                                                                               "PrepareToFinish", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.SendMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)(uint8_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::SendMessage)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x23b0744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(), "SendMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.ReceiveMessageBody
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ReceiveMessageBody)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x23b0e74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(), "ReceiveMessageBody",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.ReceiveMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message* (
    ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)()>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ReceiveMessage)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x23b0910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                                                                               "ReceiveMessage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.Finish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::Finish)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x23b0ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                                                                               "Finish", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.ResetHandshakeMessagesDigest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ResetHandshakeMessagesDigest)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x23b0d24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                                                                               "ResetHandshakeMessagesDigest", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.BackOff
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::BackOff)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23b6320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(), "BackOff",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.CheckInboundFlight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::CheckInboundFlight)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x23b53c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                                                                               "CheckInboundFlight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.GetPendingMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message* (
    ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)()>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::GetPendingMessage)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x23b5ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                                                                               "GetPendingMessage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.PrepareInboundFlight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)(::System::Collections::IDictionary*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::PrepareInboundFlight)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23b5aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(), "PrepareInboundFlight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.ProcessRecord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)(
    int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ProcessRecord)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x23b5e70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(), "ProcessRecord", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.ResendOutboundFlight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ResendOutboundFlight)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x23b5c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                                                                               "ResendOutboundFlight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.UpdateHandshakeMessagesDigest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message* (
    ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::UpdateHandshakeMessagesDigest)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x23b5894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(), "UpdateHandshakeMessagesDigest",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.WriteMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)(
    ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*)>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::WriteMessage)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x23b5788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(), "WriteMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.WriteHandshakeFragment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::*)(
    ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::WriteHandshakeFragment)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x23b6ac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(), "WriteHandshakeFragment", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.CheckAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Collections::IDictionary*)>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::CheckAll)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x23b6718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(), "CheckAll", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake.ResetAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::IDictionary*)>(&::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ResetAll)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x23b637c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(), "ResetAll", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mRecordLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRecordLayer;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*> const&
Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mRecordLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRecordLayer;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_set_mRecordLayer(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mRecordLayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::Timeout*& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mHandshakeTimeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mHandshakeTimeout;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::Timeout*> const& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mHandshakeTimeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mHandshakeTimeout;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_set_mHandshakeTimeout(::Org::BouncyCastle::Crypto::Tls::Timeout* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mHandshakeTimeout)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mHandshakeHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mHandshakeHash;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*> const&
Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mHandshakeHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mHandshakeHash;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_set_mHandshakeHash(::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mHandshakeHash)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mCurrentInboundFlight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCurrentInboundFlight;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mCurrentInboundFlight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCurrentInboundFlight;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_set_mCurrentInboundFlight(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mCurrentInboundFlight)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mPreviousInboundFlight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPreviousInboundFlight;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mPreviousInboundFlight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPreviousInboundFlight;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_set_mPreviousInboundFlight(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mPreviousInboundFlight)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mOutboundFlight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mOutboundFlight;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mOutboundFlight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mOutboundFlight;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_set_mOutboundFlight(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mOutboundFlight)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::Timeout*> const& Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_get_mResendTimeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mResendTimeout;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::__cordl_internal_set_mResendTimeout(::Org::BouncyCastle::Crypto::Tls::Timeout* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mResendTimeout)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
inline ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake* Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                                                                                ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* transport,
                                                                                                                                int32_t timeoutMillis) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>(context, transport, timeoutMillis));
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* transport,
                                                                         int32_t timeoutMillis) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, transport, timeoutMillis);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::NotifyHelloComplete() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                                                                             "NotifyHelloComplete", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::get_HandshakeHash() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                                                                             "get_HandshakeHash", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::PrepareToFinish() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                                                                             "PrepareToFinish", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::SendMessage(uint8_t msg_type, ::ArrayW<uint8_t, ::Array<uint8_t>*> body) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(), "SendMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg_type, body);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ReceiveMessageBody(uint8_t msg_type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(), "ReceiveMessageBody",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, msg_type);
}
inline ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message* Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ReceiveMessage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                                                                             "ReceiveMessage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::Finish() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                                                                             "Finish", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ResetHandshakeMessagesDigest() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                                                                             "ResetHandshakeMessagesDigest", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::BackOff(int32_t timeoutMillis) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(), "BackOff",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, timeoutMillis);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::CheckInboundFlight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                                                                             "CheckInboundFlight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message* Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::GetPendingMessage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                                                                             "GetPendingMessage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::PrepareInboundFlight(::System::Collections::IDictionary* nextFlight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(), "PrepareInboundFlight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nextFlight);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ProcessRecord(int32_t windowSize, int32_t epoch, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(), "ProcessRecord", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, windowSize, epoch, buf, off, len);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ResendOutboundFlight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(),
                                                                             "ResendOutboundFlight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*
Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::UpdateHandshakeMessagesDigest(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(), "UpdateHandshakeMessagesDigest",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*, false>(this, ___internal_method, message);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::WriteMessage(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(), "WriteMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::WriteHandshakeFragment(::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message* message, int32_t fragment_offset,
                                                                                          int32_t fragment_length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(), "WriteHandshakeFragment", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsReliableHandshake__Message*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, fragment_offset, fragment_length);
}
inline bool Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::CheckAll(::System::Collections::IDictionary* inboundFlight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(), "CheckAll", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, inboundFlight);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::ResetAll(::System::Collections::IDictionary* inboundFlight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake*>::get(), "ResetAll", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, inboundFlight);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake::DtlsReliableHandshake() {}
