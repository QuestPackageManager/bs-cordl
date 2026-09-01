#pragma once
// IWYU pragma private; include "LiteNetLib\NetConnectAcceptPacket.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/zzzz__NetConnectAcceptPacket_def.hpp"
#include "LiteNetLib/zzzz__NetPacket_def.hpp"
//  Writing Method size for method: ::LiteNetLib::NetConnectAcceptPacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetConnectAcceptPacket::*)(int64_t, uint8_t, bool)>(&::LiteNetLib::NetConnectAcceptPacket::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58a4604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetConnectAcceptPacket*>(), { ".ctor", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetConnectAcceptPacket.FromData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LiteNetLib::NetConnectAcceptPacket* (*)(::LiteNetLib::NetPacket*)>(&::LiteNetLib::NetConnectAcceptPacket::FromData)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x58a15cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetConnectAcceptPacket*>(), { "FromData", {}, { ::i2c::type_of<::LiteNetLib::NetPacket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetConnectAcceptPacket.Make
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LiteNetLib::NetPacket* (*)(int64_t, uint8_t, bool)>(&::LiteNetLib::NetConnectAcceptPacket::Make)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58a4614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetConnectAcceptPacket*>(), { "Make", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr int64_t& LiteNetLib::NetConnectAcceptPacket::__cordl_internal_get_ConnectionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionId;
}
constexpr int64_t const& LiteNetLib::NetConnectAcceptPacket::__cordl_internal_get_ConnectionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionId;
}
constexpr void LiteNetLib::NetConnectAcceptPacket::__cordl_internal_set_ConnectionId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ConnectionId = value;
}
constexpr uint8_t& LiteNetLib::NetConnectAcceptPacket::__cordl_internal_get_ConnectionNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionNumber;
}
constexpr uint8_t const& LiteNetLib::NetConnectAcceptPacket::__cordl_internal_get_ConnectionNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionNumber;
}
constexpr void LiteNetLib::NetConnectAcceptPacket::__cordl_internal_set_ConnectionNumber(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ConnectionNumber = value;
}
constexpr bool& LiteNetLib::NetConnectAcceptPacket::__cordl_internal_get_IsReusedPeer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsReusedPeer;
}
constexpr bool const& LiteNetLib::NetConnectAcceptPacket::__cordl_internal_get_IsReusedPeer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsReusedPeer;
}
constexpr void LiteNetLib::NetConnectAcceptPacket::__cordl_internal_set_IsReusedPeer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsReusedPeer = value;
}
inline void LiteNetLib::NetConnectAcceptPacket::_ctor(int64_t connectionId, uint8_t connectionNumber, bool isReusedPeer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetConnectAcceptPacket*>(), { ".ctor", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId, connectionNumber, isReusedPeer);
}
inline ::LiteNetLib::NetConnectAcceptPacket* LiteNetLib::NetConnectAcceptPacket::FromData(::LiteNetLib::NetPacket* packet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetConnectAcceptPacket*>(), { "FromData", {}, { ::i2c::type_of<::LiteNetLib::NetPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetConnectAcceptPacket*>(nullptr, ___internal_method, packet);
}
inline ::LiteNetLib::NetPacket* LiteNetLib::NetConnectAcceptPacket::Make(int64_t connectId, uint8_t connectNum, bool reusedPeer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetConnectAcceptPacket*>(), { "Make", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetPacket*>(nullptr, ___internal_method, connectId, connectNum, reusedPeer);
}
inline ::LiteNetLib::NetConnectAcceptPacket* LiteNetLib::NetConnectAcceptPacket::New_ctor(int64_t connectionId, uint8_t connectionNumber, bool isReusedPeer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::NetConnectAcceptPacket*>(connectionId, connectionNumber, isReusedPeer));
}
// Ctor Parameters []
constexpr ::LiteNetLib::NetConnectAcceptPacket::NetConnectAcceptPacket() {}
