#pragma once
// IWYU pragma private; include "LiteNetLib/Layers/Crc32cLayer.hpp"
#include "LiteNetLib/Layers/zzzz__PacketLayerBase_impl.hpp"
#include "LiteNetLib/Layers/zzzz__Crc32cLayer_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
//  Writing Method size for method: ::LiteNetLib::Layers::Crc32cLayer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Layers::Crc32cLayer::*)()>(&::LiteNetLib::Layers::Crc32cLayer::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58afde4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Layers::Crc32cLayer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Layers::Crc32cLayer.ProcessInboundPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Layers::Crc32cLayer::*)(::System::Net::IPEndPoint*, ::by_ref<::ArrayW<uint8_t>>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::LiteNetLib::Layers::Crc32cLayer::ProcessInboundPacket)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x58afdf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LiteNetLib::Layers::Crc32cLayer*>(), { ::i2c::class_of<::LiteNetLib::Layers::Crc32cLayer*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Layers::Crc32cLayer.ProcessOutBoundPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Layers::Crc32cLayer::*)(::System::Net::IPEndPoint*, ::by_ref<::ArrayW<uint8_t>>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::LiteNetLib::Layers::Crc32cLayer::ProcessOutBoundPacket)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x58aff7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LiteNetLib::Layers::Crc32cLayer*>(), { ::i2c::class_of<::LiteNetLib::Layers::Crc32cLayer*>(), 5 }));
    return ___internal_method;
  }
};
inline void LiteNetLib::Layers::Crc32cLayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Layers::Crc32cLayer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LiteNetLib::Layers::Crc32cLayer::ProcessInboundPacket(::System::Net::IPEndPoint* remoteEndPoint, ::by_ref<::ArrayW<uint8_t>> data, ::by_ref<int32_t> offset, ::by_ref<int32_t> length) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Layers::Crc32cLayer*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, remoteEndPoint, data, offset, length);
}
inline void LiteNetLib::Layers::Crc32cLayer::ProcessOutBoundPacket(::System::Net::IPEndPoint* remoteEndPoint, ::by_ref<::ArrayW<uint8_t>> data, ::by_ref<int32_t> offset, ::by_ref<int32_t> length) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Layers::Crc32cLayer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, remoteEndPoint, data, offset, length);
}
inline ::LiteNetLib::Layers::Crc32cLayer* LiteNetLib::Layers::Crc32cLayer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Layers::Crc32cLayer*>());
}
// Ctor Parameters []
constexpr ::LiteNetLib::Layers::Crc32cLayer::Crc32cLayer() {}
