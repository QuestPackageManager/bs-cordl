#pragma once
// IWYU pragma private; include "LiteNetLib/ReliableChannel.hpp"
#include "LiteNetLib/zzzz__BaseChannel_impl.hpp"
#include "LiteNetLib/zzzz__DeliveryMethod_impl.hpp"
#include "LiteNetLib/zzzz__NetPacket_impl.hpp"
#include "LiteNetLib/zzzz__ReliableChannel_def.hpp"
#include "LiteNetLib/zzzz__NetPacket_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "LiteNetLib/zzzz__ReliableChannel_def.hpp"
//  Writing Method size for method: ::LiteNetLib::ReliableChannel_PendingPacket.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::LiteNetLib::ReliableChannel_PendingPacket::*)()>(&::LiteNetLib::ReliableChannel_PendingPacket::ToString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x58aaf84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LiteNetLib::ReliableChannel_PendingPacket>(), { ::i2c::class_of<::LiteNetLib::ReliableChannel_PendingPacket>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ReliableChannel_PendingPacket.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::ReliableChannel_PendingPacket::*)(::LiteNetLib::NetPacket*)>(&::LiteNetLib::ReliableChannel_PendingPacket::Init)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58aaa60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::ReliableChannel_PendingPacket>(), { "Init", {}, { ::i2c::type_of<::LiteNetLib::NetPacket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ReliableChannel_PendingPacket.TrySend
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::ReliableChannel_PendingPacket::*)(int64_t, ::LiteNetLib::NetPeer*)>(&::LiteNetLib::ReliableChannel_PendingPacket::TrySend)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x58aaa6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::LiteNetLib::ReliableChannel_PendingPacket>(), { "TrySend", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::LiteNetLib::NetPeer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ReliableChannel_PendingPacket.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LiteNetLib::ReliableChannel_PendingPacket::*)(::LiteNetLib::NetPeer*)>(&::LiteNetLib::ReliableChannel_PendingPacket::Clear)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x58aa5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::ReliableChannel_PendingPacket>(), { "Clear", {}, { ::i2c::type_of<::LiteNetLib::NetPeer*>() } })));
    return ___internal_method;
  }
};
inline ::StringW LiteNetLib::ReliableChannel_PendingPacket::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::ReliableChannel_PendingPacket>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void LiteNetLib::ReliableChannel_PendingPacket::Init(::LiteNetLib::NetPacket* packet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::ReliableChannel_PendingPacket>(), { "Init", {}, { ::i2c::type_of<::LiteNetLib::NetPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, packet);
}
inline void LiteNetLib::ReliableChannel_PendingPacket::TrySend(int64_t currentTime, ::LiteNetLib::NetPeer* peer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::LiteNetLib::ReliableChannel_PendingPacket>(), { "TrySend", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::LiteNetLib::NetPeer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, currentTime, peer);
}
inline bool LiteNetLib::ReliableChannel_PendingPacket::Clear(::LiteNetLib::NetPeer* peer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::ReliableChannel_PendingPacket>(), { "Clear", {}, { ::i2c::type_of<::LiteNetLib::NetPeer*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, peer);
}
// Ctor Parameters [CppParam { name: "_packet", ty: "::LiteNetLib::NetPacket*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_timeStamp", ty: "int64_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_isSent", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::ReliableChannel_PendingPacket::ReliableChannel_PendingPacket(::LiteNetLib::NetPacket* _packet, int64_t _timeStamp, bool _isSent) noexcept {
  this->_packet = _packet;
  this->_timeStamp = _timeStamp;
  this->_isSent = _isSent;
}
// Ctor Parameters []
constexpr ::LiteNetLib::ReliableChannel_PendingPacket::ReliableChannel_PendingPacket() {}
//  Writing Method size for method: ::LiteNetLib::ReliableChannel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::ReliableChannel::*)(::LiteNetLib::NetPeer*, bool, uint8_t)>(&::LiteNetLib::ReliableChannel::_ctor)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x58a6c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LiteNetLib::ReliableChannel*>(), { ".ctor", {}, { ::i2c::type_of<::LiteNetLib::NetPeer*>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ReliableChannel.ProcessAck
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::ReliableChannel::*)(::LiteNetLib::NetPacket*)>(&::LiteNetLib::ReliableChannel::ProcessAck)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x58aa2b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::ReliableChannel*>(), { "ProcessAck", {}, { ::i2c::type_of<::LiteNetLib::NetPacket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ReliableChannel.SendNextPackets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::ReliableChannel::*)()>(&::LiteNetLib::ReliableChannel::SendNextPackets)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x58aa61c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LiteNetLib::ReliableChannel*>(), { ::i2c::class_of<::LiteNetLib::ReliableChannel*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ReliableChannel.ProcessPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LiteNetLib::ReliableChannel::*)(::LiteNetLib::NetPacket*)>(&::LiteNetLib::ReliableChannel::ProcessPacket)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x58aaae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LiteNetLib::ReliableChannel*>(), { ::i2c::class_of<::LiteNetLib::ReliableChannel*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::LiteNetLib::NetPacket*& LiteNetLib::ReliableChannel::__cordl_internal_get__outgoingAcks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outgoingAcks;
}
constexpr ::LiteNetLib::NetPacket* const& LiteNetLib::ReliableChannel::__cordl_internal_get__outgoingAcks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outgoingAcks;
}
constexpr void LiteNetLib::ReliableChannel::__cordl_internal_set__outgoingAcks(::LiteNetLib::NetPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____outgoingAcks = value;
}
constexpr ::ArrayW<::LiteNetLib::ReliableChannel_PendingPacket>& LiteNetLib::ReliableChannel::__cordl_internal_get__pendingPackets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingPackets;
}
constexpr ::ArrayW<::LiteNetLib::ReliableChannel_PendingPacket> const& LiteNetLib::ReliableChannel::__cordl_internal_get__pendingPackets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingPackets;
}
constexpr void LiteNetLib::ReliableChannel::__cordl_internal_set__pendingPackets(::ArrayW<::LiteNetLib::ReliableChannel_PendingPacket> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pendingPackets = value;
}
constexpr ::ArrayW<::LiteNetLib::NetPacket*>& LiteNetLib::ReliableChannel::__cordl_internal_get__receivedPackets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receivedPackets;
}
constexpr ::ArrayW<::LiteNetLib::NetPacket*> const& LiteNetLib::ReliableChannel::__cordl_internal_get__receivedPackets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receivedPackets;
}
constexpr void LiteNetLib::ReliableChannel::__cordl_internal_set__receivedPackets(::ArrayW<::LiteNetLib::NetPacket*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____receivedPackets = value;
}
constexpr ::ArrayW<bool>& LiteNetLib::ReliableChannel::__cordl_internal_get__earlyReceived() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____earlyReceived;
}
constexpr ::ArrayW<bool> const& LiteNetLib::ReliableChannel::__cordl_internal_get__earlyReceived() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____earlyReceived;
}
constexpr void LiteNetLib::ReliableChannel::__cordl_internal_set__earlyReceived(::ArrayW<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____earlyReceived = value;
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
inline void LiteNetLib::ReliableChannel::_ctor(::LiteNetLib::NetPeer* peer, bool ordered, uint8_t id) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LiteNetLib::ReliableChannel*>(), { ".ctor", {}, { ::i2c::type_of<::LiteNetLib::NetPeer*>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peer, ordered, id);
}
inline void LiteNetLib::ReliableChannel::ProcessAck(::LiteNetLib::NetPacket* packet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::ReliableChannel*>(), { "ProcessAck", {}, { ::i2c::type_of<::LiteNetLib::NetPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet);
}
inline void LiteNetLib::ReliableChannel::SendNextPackets() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::ReliableChannel*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool LiteNetLib::ReliableChannel::ProcessPacket(::LiteNetLib::NetPacket* packet) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::ReliableChannel*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, packet);
}
inline ::LiteNetLib::ReliableChannel* LiteNetLib::ReliableChannel::New_ctor(::LiteNetLib::NetPeer* peer, bool ordered, uint8_t id) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::ReliableChannel*>(peer, ordered, id));
}
// Ctor Parameters []
constexpr ::LiteNetLib::ReliableChannel::ReliableChannel() {}
