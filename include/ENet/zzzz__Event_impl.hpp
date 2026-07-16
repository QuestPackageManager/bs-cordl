#pragma once
// IWYU pragma private; include "ENet/Event.hpp"
#include "ENet/zzzz__ENetEvent_impl.hpp"
#include "ENet/zzzz__Event_def.hpp"
#include "ENet/zzzz__ENetEvent_def.hpp"
#include "ENet/zzzz__EventType_def.hpp"
#include "ENet/zzzz__Packet_def.hpp"
#include "ENet/zzzz__Peer_def.hpp"
//  Writing Method size for method: ::ENet::Event.get_NativeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ENet::ENetEvent (::ENet::Event::*)()>(&::ENet::Event::get_NativeData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5894524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Event>(), { "get_NativeData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Event.set_NativeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Event::*)(::ENet::ENetEvent)>(&::ENet::Event::set_NativeData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5894530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Event>(), { "set_NativeData", {}, { ::i2c::type_of<::ENet::ENetEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Event._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Event::*)(::ENet::ENetEvent)>(&::ENet::Event::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x589453c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Event>(), { ".ctor", {}, { ::i2c::type_of<::ENet::ENetEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Event.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ENet::EventType (::ENet::Event::*)()>(&::ENet::Event::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5894548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Event>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Event.get_Peer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ENet::Peer (::ENet::Event::*)()>(&::ENet::Event::get_Peer)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5894550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Event>(), { "get_Peer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Event.get_ChannelID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::ENet::Event::*)()>(&::ENet::Event::get_ChannelID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58945a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Event>(), { "get_ChannelID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Event.get_Data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::ENet::Event::*)()>(&::ENet::Event::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58945b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Event>(), { "get_Data", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Event.get_Packet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ENet::Packet (::ENet::Event::*)()>(&::ENet::Event::get_Packet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58945b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Event>(), { "get_Packet", {}, {} })));
    return ___internal_method;
  }
};
inline ::ENet::ENetEvent ENet::Event::get_NativeData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Event>(), { "get_NativeData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ENet::ENetEvent>(*this, ___internal_method);
}
inline void ENet::Event::set_NativeData(::ENet::ENetEvent value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Event>(), { "set_NativeData", {}, { ::i2c::type_of<::ENet::ENetEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void ENet::Event::_ctor(::ENet::ENetEvent event) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Event>(), { ".ctor", {}, { ::i2c::type_of<::ENet::ENetEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, event);
}
inline ::ENet::EventType ENet::Event::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Event>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ENet::EventType>(*this, ___internal_method);
}
inline ::ENet::Peer ENet::Event::get_Peer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Event>(), { "get_Peer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ENet::Peer>(*this, ___internal_method);
}
inline uint8_t ENet::Event::get_ChannelID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Event>(), { "get_ChannelID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline uint32_t ENet::Event::get_Data() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Event>(), { "get_Data", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline ::ENet::Packet ENet::Event::get_Packet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Event>(), { "get_Packet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ENet::Packet>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "nativeEvent", ty: "::ENet::ENetEvent", modifiers: "", def_value: Some("{}") }]
constexpr ::ENet::Event::Event(::ENet::ENetEvent nativeEvent) noexcept {
  this->nativeEvent = nativeEvent;
}
// Ctor Parameters []
constexpr ::ENet::Event::Event() {}
