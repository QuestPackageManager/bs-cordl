#pragma once
#include "LiteNetLib/zzzz__BaseChannel_impl.hpp"
#include "LiteNetLib/zzzz__DeliveryMethod_impl.hpp"
#include "LiteNetLib/zzzz__ReliableChannel_def.hpp"
#include "LiteNetLib/zzzz__NetPacket_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "LiteNetLib/zzzz__ReliableChannel_def.hpp"
//  Writing Method size for method: ::LiteNetLib::__ReliableChannel__PendingPacket.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::LiteNetLib::__ReliableChannel__PendingPacket::*)()>(
    &::LiteNetLib::__ReliableChannel__PendingPacket::ToString)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2207b80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__ReliableChannel__PendingPacket>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__ReliableChannel__PendingPacket>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__ReliableChannel__PendingPacket.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__ReliableChannel__PendingPacket::*)(::LiteNetLib::NetPacket*)>(
    &::LiteNetLib::__ReliableChannel__PendingPacket::Init)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2207600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__ReliableChannel__PendingPacket>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__ReliableChannel__PendingPacket.TrySend
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__ReliableChannel__PendingPacket::*)(int64_t, ::LiteNetLib::NetPeer*)>(
    &::LiteNetLib::__ReliableChannel__PendingPacket::TrySend)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x220760c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__ReliableChannel__PendingPacket>::get(), "TrySend", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__ReliableChannel__PendingPacket.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::__ReliableChannel__PendingPacket::*)(::LiteNetLib::NetPeer*)>(
    &::LiteNetLib::__ReliableChannel__PendingPacket::Clear)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2207158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__ReliableChannel__PendingPacket>::get(), "Clear", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
    return ___internal_method;
  }
};
inline ::StringW LiteNetLib::__ReliableChannel__PendingPacket::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__ReliableChannel__PendingPacket>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void LiteNetLib::__ReliableChannel__PendingPacket::Init(::LiteNetLib::NetPacket* packet) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__ReliableChannel__PendingPacket>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet);
}
inline void LiteNetLib::__ReliableChannel__PendingPacket::TrySend(int64_t currentTime, ::LiteNetLib::NetPeer* peer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__ReliableChannel__PendingPacket>::get(), "TrySend", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentTime, peer);
}
inline bool LiteNetLib::__ReliableChannel__PendingPacket::Clear(::LiteNetLib::NetPeer* peer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__ReliableChannel__PendingPacket>::get(), "Clear", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, peer);
}
// Ctor Parameters [CppParam { name: "_packet", ty: "::LiteNetLib::NetPacket*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_timeStamp", ty: "int64_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_isSent", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::__ReliableChannel__PendingPacket::__ReliableChannel__PendingPacket(::LiteNetLib::NetPacket* _packet, int64_t _timeStamp, bool _isSent) noexcept {
  this->_packet = _packet;
  this->_timeStamp = _timeStamp;
  this->_isSent = _isSent;
}
// Ctor Parameters []
constexpr ::LiteNetLib::__ReliableChannel__PendingPacket::__ReliableChannel__PendingPacket() {}
//  Writing Method size for method: ::LiteNetLib::ReliableChannel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ReliableChannel::*)(::LiteNetLib::NetPeer*, bool, uint8_t)>(
    &::LiteNetLib::ReliableChannel::_ctor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x22036dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ReliableChannel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ReliableChannel.ProcessAck
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ReliableChannel::*)(::LiteNetLib::NetPacket*)>(&::LiteNetLib::ReliableChannel::ProcessAck)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x2206e08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ReliableChannel*>::get(), "ProcessAck", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ReliableChannel.SendNextPackets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ReliableChannel::*)()>(&::LiteNetLib::ReliableChannel::SendNextPackets)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x2207194;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ReliableChannel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ReliableChannel*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ReliableChannel.ProcessPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::ReliableChannel::*)(::LiteNetLib::NetPacket*)>(&::LiteNetLib::ReliableChannel::ProcessPacket)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x2207684;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ReliableChannel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ReliableChannel*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::LiteNetLib::NetPacket*& LiteNetLib::ReliableChannel::__cordl_internal_get__outgoingAcks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outgoingAcks;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacket*> const& LiteNetLib::ReliableChannel::__cordl_internal_get__outgoingAcks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outgoingAcks;
}
constexpr void LiteNetLib::ReliableChannel::__cordl_internal_set__outgoingAcks(::LiteNetLib::NetPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____outgoingAcks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::LiteNetLib::__ReliableChannel__PendingPacket, ::Array<::LiteNetLib::__ReliableChannel__PendingPacket>*>& LiteNetLib::ReliableChannel::__cordl_internal_get__pendingPackets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingPackets;
}
constexpr ::ArrayW<::LiteNetLib::__ReliableChannel__PendingPacket, ::Array<::LiteNetLib::__ReliableChannel__PendingPacket>*> const&
LiteNetLib::ReliableChannel::__cordl_internal_get__pendingPackets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingPackets;
}
constexpr void
LiteNetLib::ReliableChannel::__cordl_internal_set__pendingPackets(::ArrayW<::LiteNetLib::__ReliableChannel__PendingPacket, ::Array<::LiteNetLib::__ReliableChannel__PendingPacket>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pendingPackets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*>& LiteNetLib::ReliableChannel::__cordl_internal_get__receivedPackets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receivedPackets;
}
constexpr ::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*> const& LiteNetLib::ReliableChannel::__cordl_internal_get__receivedPackets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receivedPackets;
}
constexpr void LiteNetLib::ReliableChannel::__cordl_internal_set__receivedPackets(::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____receivedPackets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<bool, ::Array<bool>*>& LiteNetLib::ReliableChannel::__cordl_internal_get__earlyReceived() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____earlyReceived;
}
constexpr ::ArrayW<bool, ::Array<bool>*> const& LiteNetLib::ReliableChannel::__cordl_internal_get__earlyReceived() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____earlyReceived;
}
constexpr void LiteNetLib::ReliableChannel::__cordl_internal_set__earlyReceived(::ArrayW<bool, ::Array<bool>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____earlyReceived)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& LiteNetLib::ReliableChannel::__cordl_internal_get__localSeqence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localSeqence;
}
constexpr int32_t const& LiteNetLib::ReliableChannel::__cordl_internal_get__localSeqence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localSeqence;
}
constexpr void LiteNetLib::ReliableChannel::__cordl_internal_set__localSeqence(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localSeqence = value;
}
constexpr int32_t& LiteNetLib::ReliableChannel::__cordl_internal_get__remoteSequence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remoteSequence;
}
constexpr int32_t const& LiteNetLib::ReliableChannel::__cordl_internal_get__remoteSequence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remoteSequence;
}
constexpr void LiteNetLib::ReliableChannel::__cordl_internal_set__remoteSequence(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____remoteSequence = value;
}
constexpr int32_t& LiteNetLib::ReliableChannel::__cordl_internal_get__localWindowStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localWindowStart;
}
constexpr int32_t const& LiteNetLib::ReliableChannel::__cordl_internal_get__localWindowStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localWindowStart;
}
constexpr void LiteNetLib::ReliableChannel::__cordl_internal_set__localWindowStart(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localWindowStart = value;
}
constexpr int32_t& LiteNetLib::ReliableChannel::__cordl_internal_get__remoteWindowStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remoteWindowStart;
}
constexpr int32_t const& LiteNetLib::ReliableChannel::__cordl_internal_get__remoteWindowStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remoteWindowStart;
}
constexpr void LiteNetLib::ReliableChannel::__cordl_internal_set__remoteWindowStart(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____remoteWindowStart = value;
}
constexpr bool& LiteNetLib::ReliableChannel::__cordl_internal_get__mustSendAcks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mustSendAcks;
}
constexpr bool const& LiteNetLib::ReliableChannel::__cordl_internal_get__mustSendAcks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mustSendAcks;
}
constexpr void LiteNetLib::ReliableChannel::__cordl_internal_set__mustSendAcks(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mustSendAcks = value;
}
constexpr ::LiteNetLib::DeliveryMethod& LiteNetLib::ReliableChannel::__cordl_internal_get__deliveryMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deliveryMethod;
}
constexpr ::LiteNetLib::DeliveryMethod const& LiteNetLib::ReliableChannel::__cordl_internal_get__deliveryMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deliveryMethod;
}
constexpr void LiteNetLib::ReliableChannel::__cordl_internal_set__deliveryMethod(::LiteNetLib::DeliveryMethod value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____deliveryMethod = value;
}
constexpr bool& LiteNetLib::ReliableChannel::__cordl_internal_get__ordered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ordered;
}
constexpr bool const& LiteNetLib::ReliableChannel::__cordl_internal_get__ordered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ordered;
}
constexpr void LiteNetLib::ReliableChannel::__cordl_internal_set__ordered(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ordered = value;
}
constexpr int32_t& LiteNetLib::ReliableChannel::__cordl_internal_get__windowSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____windowSize;
}
constexpr int32_t const& LiteNetLib::ReliableChannel::__cordl_internal_get__windowSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____windowSize;
}
constexpr void LiteNetLib::ReliableChannel::__cordl_internal_set__windowSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____windowSize = value;
}
constexpr uint8_t& LiteNetLib::ReliableChannel::__cordl_internal_get__id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr uint8_t const& LiteNetLib::ReliableChannel::__cordl_internal_get__id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr void LiteNetLib::ReliableChannel::__cordl_internal_set__id(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____id = value;
}
inline ::LiteNetLib::ReliableChannel* LiteNetLib::ReliableChannel::New_ctor(::LiteNetLib::NetPeer* peer, bool ordered, uint8_t id) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::ReliableChannel*>(peer, ordered, id));
}
inline void LiteNetLib::ReliableChannel::_ctor(::LiteNetLib::NetPeer* peer, bool ordered, uint8_t id) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ReliableChannel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, ordered, id);
}
inline void LiteNetLib::ReliableChannel::ProcessAck(::LiteNetLib::NetPacket* packet) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ReliableChannel*>::get(), "ProcessAck", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet);
}
inline void LiteNetLib::ReliableChannel::SendNextPackets() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ReliableChannel*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool LiteNetLib::ReliableChannel::ProcessPacket(::LiteNetLib::NetPacket* packet) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ReliableChannel*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, packet);
}
// Ctor Parameters []
constexpr ::LiteNetLib::ReliableChannel::ReliableChannel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
