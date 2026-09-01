#pragma once
// IWYU pragma private; include "GlobalNamespace\NetDataWriterExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NetDataWriterExtensions_def.hpp"
#include "GlobalNamespace/zzzz__PacketOption_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetDataWriterExtensions.SetUpPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::LiteNetLib::Utils::NetDataWriter*, uint8_t, uint8_t, ::GlobalNamespace::PacketOption)>(
    &::GlobalNamespace::NetDataWriterExtensions::SetUpPacket)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x333b378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetDataWriterExtensions*>(), { "SetUpPacket",
                                                                                                                  {},
                                                                                                                  { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<uint8_t>(),
                                                                                                                    ::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::PacketOption>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetDataWriterExtensions.SetUpPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::LiteNetLib::Utils::NetDataWriter*, uint8_t, uint8_t, uint8_t)>(&::GlobalNamespace::NetDataWriterExtensions::SetUpPacket)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x333b37c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetDataWriterExtensions*>(),
                            { "SetUpPacket", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetDataWriterExtensions::SetUpPacket(::LiteNetLib::Utils::NetDataWriter* netDataWriter, uint8_t senderId, uint8_t receiverId,
                                                                  ::GlobalNamespace::PacketOption packetOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::NetDataWriterExtensions*>(),
          { "SetUpPacket", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::PacketOption>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, netDataWriter, senderId, receiverId, packetOptions);
}
inline void GlobalNamespace::NetDataWriterExtensions::SetUpPacket(::LiteNetLib::Utils::NetDataWriter* netDataWriter, uint8_t senderId, uint8_t receiverId, uint8_t packetOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetDataWriterExtensions*>(),
                          { "SetUpPacket", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, netDataWriter, senderId, receiverId, packetOptions);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetDataWriterExtensions::NetDataWriterExtensions() {}
