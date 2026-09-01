#pragma once
// IWYU pragma private; include "LiteNetLib\SequencedChannel.hpp"
#include "LiteNetLib/zzzz__BaseChannel_impl.hpp"
#include "LiteNetLib/zzzz__SequencedChannel_def.hpp"
#include "LiteNetLib/zzzz__NetPacket_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
//  Writing Method size for method: ::LiteNetLib::SequencedChannel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::SequencedChannel::*)(::LiteNetLib::NetPeer*, bool, uint8_t)>(&::LiteNetLib::SequencedChannel::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x58a4c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LiteNetLib::SequencedChannel*>(), { ".ctor", {}, { ::i2c::type_of<::LiteNetLib::NetPeer*>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::SequencedChannel.SendNextPackets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::SequencedChannel::*)()>(&::LiteNetLib::SequencedChannel::SendNextPackets)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x58a8e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LiteNetLib::SequencedChannel*>(), { ::i2c::class_of<::LiteNetLib::SequencedChannel*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::SequencedChannel.ProcessPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LiteNetLib::SequencedChannel::*)(::LiteNetLib::NetPacket*)>(&::LiteNetLib::SequencedChannel::ProcessPacket)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x58a9184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LiteNetLib::SequencedChannel*>(), { ::i2c::class_of<::LiteNetLib::SequencedChannel*>(), 5 }));
    return ___internal_method;
  }
};
constexpr int32_t& LiteNetLib::SequencedChannel::__cordl_internal_get__localSequence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localSequence;
}
constexpr int32_t const& LiteNetLib::SequencedChannel::__cordl_internal_get__localSequence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localSequence;
}
constexpr void LiteNetLib::SequencedChannel::__cordl_internal_set__localSequence(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localSequence = value;
}
constexpr uint16_t& LiteNetLib::SequencedChannel::__cordl_internal_get__remoteSequence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remoteSequence;
}
constexpr uint16_t const& LiteNetLib::SequencedChannel::__cordl_internal_get__remoteSequence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remoteSequence;
}
constexpr void LiteNetLib::SequencedChannel::__cordl_internal_set__remoteSequence(uint16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____remoteSequence = value;
}
constexpr bool& LiteNetLib::SequencedChannel::__cordl_internal_get__reliable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reliable;
}
constexpr bool const& LiteNetLib::SequencedChannel::__cordl_internal_get__reliable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reliable;
}
constexpr void LiteNetLib::SequencedChannel::__cordl_internal_set__reliable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reliable = value;
}
constexpr ::LiteNetLib::NetPacket*& LiteNetLib::SequencedChannel::__cordl_internal_get__lastPacket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPacket;
}
constexpr ::LiteNetLib::NetPacket* const& LiteNetLib::SequencedChannel::__cordl_internal_get__lastPacket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPacket;
}
constexpr void LiteNetLib::SequencedChannel::__cordl_internal_set__lastPacket(::LiteNetLib::NetPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastPacket = value;
}
constexpr ::LiteNetLib::NetPacket*& LiteNetLib::SequencedChannel::__cordl_internal_get__ackPacket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ackPacket;
}
constexpr ::LiteNetLib::NetPacket* const& LiteNetLib::SequencedChannel::__cordl_internal_get__ackPacket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ackPacket;
}
constexpr void LiteNetLib::SequencedChannel::__cordl_internal_set__ackPacket(::LiteNetLib::NetPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ackPacket = value;
}
constexpr bool& LiteNetLib::SequencedChannel::__cordl_internal_get__mustSendAck() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mustSendAck;
}
constexpr bool const& LiteNetLib::SequencedChannel::__cordl_internal_get__mustSendAck() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mustSendAck;
}
constexpr void LiteNetLib::SequencedChannel::__cordl_internal_set__mustSendAck(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mustSendAck = value;
}
constexpr uint8_t& LiteNetLib::SequencedChannel::__cordl_internal_get__id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr uint8_t const& LiteNetLib::SequencedChannel::__cordl_internal_get__id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr void LiteNetLib::SequencedChannel::__cordl_internal_set__id(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____id = value;
}
constexpr int64_t& LiteNetLib::SequencedChannel::__cordl_internal_get__lastPacketSendTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPacketSendTime;
}
constexpr int64_t const& LiteNetLib::SequencedChannel::__cordl_internal_get__lastPacketSendTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPacketSendTime;
}
constexpr void LiteNetLib::SequencedChannel::__cordl_internal_set__lastPacketSendTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastPacketSendTime = value;
}
inline void LiteNetLib::SequencedChannel::_ctor(::LiteNetLib::NetPeer* peer, bool reliable, uint8_t id) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LiteNetLib::SequencedChannel*>(), { ".ctor", {}, { ::i2c::type_of<::LiteNetLib::NetPeer*>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peer, reliable, id);
}
inline void LiteNetLib::SequencedChannel::SendNextPackets() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::SequencedChannel*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool LiteNetLib::SequencedChannel::ProcessPacket(::LiteNetLib::NetPacket* packet) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::SequencedChannel*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, packet);
}
inline ::LiteNetLib::SequencedChannel* LiteNetLib::SequencedChannel::New_ctor(::LiteNetLib::NetPeer* peer, bool reliable, uint8_t id) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::SequencedChannel*>(peer, reliable, id));
}
// Ctor Parameters []
constexpr ::LiteNetLib::SequencedChannel::SequencedChannel() {}
