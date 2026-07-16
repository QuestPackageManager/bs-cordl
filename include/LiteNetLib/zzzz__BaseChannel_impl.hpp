#pragma once
// IWYU pragma private; include "LiteNetLib/BaseChannel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/zzzz__BaseChannel_def.hpp"
#include "LiteNetLib/zzzz__NetPacket_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
//  Writing Method size for method: ::LiteNetLib::BaseChannel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::BaseChannel::*)(::LiteNetLib::NetPeer*)>(&::LiteNetLib::BaseChannel::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x589b700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::BaseChannel*>(), { ".ctor", {}, { ::i2c::type_of<::LiteNetLib::NetPeer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::BaseChannel.get_PacketsInQueue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LiteNetLib::BaseChannel::*)()>(&::LiteNetLib::BaseChannel::get_PacketsInQueue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x589b788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::BaseChannel*>(), { "get_PacketsInQueue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::BaseChannel.AddToQueue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::BaseChannel::*)(::LiteNetLib::NetPacket*)>(&::LiteNetLib::BaseChannel::AddToQueue)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x589b7d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::BaseChannel*>(), { "AddToQueue", {}, { ::i2c::type_of<::LiteNetLib::NetPacket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::BaseChannel.SendNextPackets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::BaseChannel::*)()>(&::LiteNetLib::BaseChannel::SendNextPackets)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LiteNetLib::BaseChannel*>(), { ::i2c::class_of<::LiteNetLib::BaseChannel*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::BaseChannel.ProcessPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LiteNetLib::BaseChannel::*)(::LiteNetLib::NetPacket*)>(&::LiteNetLib::BaseChannel::ProcessPacket)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LiteNetLib::BaseChannel*>(), { ::i2c::class_of<::LiteNetLib::BaseChannel*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::LiteNetLib::BaseChannel*& LiteNetLib::BaseChannel::__cordl_internal_get_Next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
constexpr ::LiteNetLib::BaseChannel* const& LiteNetLib::BaseChannel::__cordl_internal_get_Next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
constexpr void LiteNetLib::BaseChannel::__cordl_internal_set_Next(::LiteNetLib::BaseChannel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Next = value;
}
constexpr ::LiteNetLib::NetPeer*& LiteNetLib::BaseChannel::__cordl_internal_get_Peer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Peer;
}
constexpr ::LiteNetLib::NetPeer* const& LiteNetLib::BaseChannel::__cordl_internal_get_Peer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Peer;
}
constexpr void LiteNetLib::BaseChannel::__cordl_internal_set_Peer(::LiteNetLib::NetPeer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Peer = value;
}
constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>*& LiteNetLib::BaseChannel::__cordl_internal_get_OutgoingQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OutgoingQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>* const& LiteNetLib::BaseChannel::__cordl_internal_get_OutgoingQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OutgoingQueue;
}
constexpr void LiteNetLib::BaseChannel::__cordl_internal_set_OutgoingQueue(::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OutgoingQueue = value;
}
inline void LiteNetLib::BaseChannel::_ctor(::LiteNetLib::NetPeer* peer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::BaseChannel*>(), { ".ctor", {}, { ::i2c::type_of<::LiteNetLib::NetPeer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peer);
}
inline int32_t LiteNetLib::BaseChannel::get_PacketsInQueue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::BaseChannel*>(), { "get_PacketsInQueue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void LiteNetLib::BaseChannel::AddToQueue(::LiteNetLib::NetPacket* packet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::BaseChannel*>(), { "AddToQueue", {}, { ::i2c::type_of<::LiteNetLib::NetPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet);
}
inline void LiteNetLib::BaseChannel::SendNextPackets() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::BaseChannel*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool LiteNetLib::BaseChannel::ProcessPacket(::LiteNetLib::NetPacket* packet) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::BaseChannel*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, packet);
}
inline ::LiteNetLib::BaseChannel* LiteNetLib::BaseChannel::New_ctor(::LiteNetLib::NetPeer* peer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::BaseChannel*>(peer));
}
// Ctor Parameters []
constexpr ::LiteNetLib::BaseChannel::BaseChannel() {}
