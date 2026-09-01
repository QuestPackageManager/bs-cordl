#pragma once
// IWYU pragma private; include "LiteNetLib\NetConnectRequestPacket.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/zzzz__NetConnectRequestPacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/zzzz__NetPacket_def.hpp"
#include "System/Net/zzzz__SocketAddress_def.hpp"
//  Writing Method size for method: ::LiteNetLib::NetConnectRequestPacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetConnectRequestPacket::*)(int64_t, uint8_t, ::ArrayW<uint8_t>, ::LiteNetLib::Utils::NetDataReader*)>(
    &::LiteNetLib::NetConnectRequestPacket::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58a4498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetConnectRequestPacket*>(),
                            { ".ctor", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetConnectRequestPacket.GetProtocolId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::LiteNetLib::NetPacket*)>(&::LiteNetLib::NetConnectRequestPacket::GetProtocolId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58a133c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetConnectRequestPacket*>(), { "GetProtocolId", {}, { ::i2c::type_of<::LiteNetLib::NetPacket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetConnectRequestPacket.FromData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LiteNetLib::NetConnectRequestPacket* (*)(::LiteNetLib::NetPacket*)>(&::LiteNetLib::NetConnectRequestPacket::FromData)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x58a13e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetConnectRequestPacket*>(), { "FromData", {}, { ::i2c::type_of<::LiteNetLib::NetPacket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetConnectRequestPacket.Make
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LiteNetLib::NetPacket* (*)(::LiteNetLib::Utils::NetDataWriter*, ::System::Net::SocketAddress*, int64_t)>(
    &::LiteNetLib::NetConnectRequestPacket::Make)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x58a44b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetConnectRequestPacket*>(),
                                         { "Make", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<::System::Net::SocketAddress*>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
constexpr int64_t& LiteNetLib::NetConnectRequestPacket::__cordl_internal_get_ConnectionTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionTime;
}
constexpr int64_t const& LiteNetLib::NetConnectRequestPacket::__cordl_internal_get_ConnectionTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionTime;
}
constexpr void LiteNetLib::NetConnectRequestPacket::__cordl_internal_set_ConnectionTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ConnectionTime = value;
}
constexpr uint8_t& LiteNetLib::NetConnectRequestPacket::__cordl_internal_get_ConnectionNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionNumber;
}
constexpr uint8_t const& LiteNetLib::NetConnectRequestPacket::__cordl_internal_get_ConnectionNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionNumber;
}
constexpr void LiteNetLib::NetConnectRequestPacket::__cordl_internal_set_ConnectionNumber(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ConnectionNumber = value;
}
constexpr ::ArrayW<uint8_t>& LiteNetLib::NetConnectRequestPacket::__cordl_internal_get_TargetAddress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TargetAddress;
}
constexpr ::ArrayW<uint8_t> const& LiteNetLib::NetConnectRequestPacket::__cordl_internal_get_TargetAddress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TargetAddress;
}
constexpr void LiteNetLib::NetConnectRequestPacket::__cordl_internal_set_TargetAddress(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TargetAddress = value;
}
constexpr ::LiteNetLib::Utils::NetDataReader*& LiteNetLib::NetConnectRequestPacket::__cordl_internal_get_Data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Data;
}
constexpr ::LiteNetLib::Utils::NetDataReader* const& LiteNetLib::NetConnectRequestPacket::__cordl_internal_get_Data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Data;
}
constexpr void LiteNetLib::NetConnectRequestPacket::__cordl_internal_set_Data(::LiteNetLib::Utils::NetDataReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Data = value;
}
inline void LiteNetLib::NetConnectRequestPacket::_ctor(int64_t connectionTime, uint8_t connectionNumber, ::ArrayW<uint8_t> targetAddress, ::LiteNetLib::Utils::NetDataReader* data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetConnectRequestPacket*>(),
                          { ".ctor", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionTime, connectionNumber, targetAddress, data);
}
inline int32_t LiteNetLib::NetConnectRequestPacket::GetProtocolId(::LiteNetLib::NetPacket* packet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetConnectRequestPacket*>(), { "GetProtocolId", {}, { ::i2c::type_of<::LiteNetLib::NetPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, packet);
}
inline ::LiteNetLib::NetConnectRequestPacket* LiteNetLib::NetConnectRequestPacket::FromData(::LiteNetLib::NetPacket* packet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetConnectRequestPacket*>(), { "FromData", {}, { ::i2c::type_of<::LiteNetLib::NetPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetConnectRequestPacket*>(nullptr, ___internal_method, packet);
}
inline ::LiteNetLib::NetPacket* LiteNetLib::NetConnectRequestPacket::Make(::LiteNetLib::Utils::NetDataWriter* connectData, ::System::Net::SocketAddress* addressBytes, int64_t connectId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetConnectRequestPacket*>(),
                                              { "Make", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<::System::Net::SocketAddress*>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetPacket*>(nullptr, ___internal_method, connectData, addressBytes, connectId);
}
inline ::LiteNetLib::NetConnectRequestPacket* LiteNetLib::NetConnectRequestPacket::New_ctor(int64_t connectionTime, uint8_t connectionNumber, ::ArrayW<uint8_t> targetAddress,
                                                                                            ::LiteNetLib::Utils::NetDataReader* data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::NetConnectRequestPacket*>(connectionTime, connectionNumber, targetAddress, data));
}
// Ctor Parameters []
constexpr ::LiteNetLib::NetConnectRequestPacket::NetConnectRequestPacket() {}
