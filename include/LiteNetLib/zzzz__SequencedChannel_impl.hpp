#pragma once
// IWYU pragma private; include "LiteNetLib/SequencedChannel.hpp"
#include "LiteNetLib/zzzz__BaseChannel_impl.hpp"
#include "LiteNetLib/zzzz__SequencedChannel_def.hpp"
#include "LiteNetLib/zzzz__NetPacket_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
//  Writing Method size for method: ::LiteNetLib::SequencedChannel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::SequencedChannel::*)(::LiteNetLib::NetPeer*, bool, uint8_t)>(
    &::LiteNetLib::SequencedChannel::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x25e8760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::SequencedChannel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::SequencedChannel.SendNextPackets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::SequencedChannel::*)()>(&::LiteNetLib::SequencedChannel::SendNextPackets)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x25ecae4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::SequencedChannel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::SequencedChannel*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::SequencedChannel.ProcessPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::SequencedChannel::*)(::LiteNetLib::NetPacket*)>(&::LiteNetLib::SequencedChannel::ProcessPacket)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x25ecdec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::SequencedChannel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::SequencedChannel*>::get(), 5));
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
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacket*> const& LiteNetLib::SequencedChannel::__cordl_internal_get__lastPacket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPacket;
}
constexpr void LiteNetLib::SequencedChannel::__cordl_internal_set__lastPacket(::LiteNetLib::NetPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastPacket)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::NetPacket*& LiteNetLib::SequencedChannel::__cordl_internal_get__ackPacket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ackPacket;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacket*> const& LiteNetLib::SequencedChannel::__cordl_internal_get__ackPacket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ackPacket;
}
constexpr void LiteNetLib::SequencedChannel::__cordl_internal_set__ackPacket(::LiteNetLib::NetPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ackPacket)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
inline ::LiteNetLib::SequencedChannel* LiteNetLib::SequencedChannel::New_ctor(::LiteNetLib::NetPeer* peer, bool reliable, uint8_t id) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::SequencedChannel*>(peer, reliable, id));
}
inline void LiteNetLib::SequencedChannel::_ctor(::LiteNetLib::NetPeer* peer, bool reliable, uint8_t id) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::SequencedChannel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, reliable, id);
}
inline void LiteNetLib::SequencedChannel::SendNextPackets() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::SequencedChannel*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool LiteNetLib::SequencedChannel::ProcessPacket(::LiteNetLib::NetPacket* packet) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::SequencedChannel*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, packet);
}
// Ctor Parameters []
constexpr ::LiteNetLib::SequencedChannel::SequencedChannel() {}
