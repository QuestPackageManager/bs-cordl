#pragma once
// IWYU pragma private; include "LiteNetLib\SimpleChannel.hpp"
#include "LiteNetLib/zzzz__BaseChannel_impl.hpp"
#include "LiteNetLib/zzzz__SimpleChannel_def.hpp"
#include "LiteNetLib/zzzz__NetPacket_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
//  Writing Method size for method: ::LiteNetLib::SimpleChannel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::SimpleChannel::*)(::LiteNetLib::NetPeer*)>(&::LiteNetLib::SimpleChannel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58a9360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::SimpleChannel*>(), { ".ctor", {}, { ::i2c::type_of<::LiteNetLib::NetPeer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::SimpleChannel.SendNextPackets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::SimpleChannel::*)()>(&::LiteNetLib::SimpleChannel::SendNextPackets)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x58a9364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LiteNetLib::SimpleChannel*>(), { ::i2c::class_of<::LiteNetLib::SimpleChannel*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::SimpleChannel.ProcessPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LiteNetLib::SimpleChannel::*)(::LiteNetLib::NetPacket*)>(&::LiteNetLib::SimpleChannel::ProcessPacket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a94dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LiteNetLib::SimpleChannel*>(), { ::i2c::class_of<::LiteNetLib::SimpleChannel*>(), 5 }));
    return ___internal_method;
  }
};
inline void LiteNetLib::SimpleChannel::_ctor(::LiteNetLib::NetPeer* peer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::SimpleChannel*>(), { ".ctor", {}, { ::i2c::type_of<::LiteNetLib::NetPeer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peer);
}
inline void LiteNetLib::SimpleChannel::SendNextPackets() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::SimpleChannel*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool LiteNetLib::SimpleChannel::ProcessPacket(::LiteNetLib::NetPacket* packet) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::SimpleChannel*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, packet);
}
inline ::LiteNetLib::SimpleChannel* LiteNetLib::SimpleChannel::New_ctor(::LiteNetLib::NetPeer* peer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::SimpleChannel*>(peer));
}
// Ctor Parameters []
constexpr ::LiteNetLib::SimpleChannel::SimpleChannel() {}
