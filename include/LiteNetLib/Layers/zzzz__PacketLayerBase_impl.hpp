#pragma once
// IWYU pragma private; include "LiteNetLib/Layers/PacketLayerBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/Layers/zzzz__PacketLayerBase_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
//  Writing Method size for method: ::LiteNetLib::Layers::PacketLayerBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Layers::PacketLayerBase::*)(int32_t)>(&::LiteNetLib::Layers::PacketLayerBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58afdf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Layers::PacketLayerBase*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Layers::PacketLayerBase.ProcessInboundPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Layers::PacketLayerBase::*)(::System::Net::IPEndPoint*, ::by_ref<::ArrayW<uint8_t>>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::LiteNetLib::Layers::PacketLayerBase::ProcessInboundPacket)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LiteNetLib::Layers::PacketLayerBase*>(), { ::i2c::class_of<::LiteNetLib::Layers::PacketLayerBase*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Layers::PacketLayerBase.ProcessOutBoundPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Layers::PacketLayerBase::*)(::System::Net::IPEndPoint*, ::by_ref<::ArrayW<uint8_t>>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::LiteNetLib::Layers::PacketLayerBase::ProcessOutBoundPacket)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LiteNetLib::Layers::PacketLayerBase*>(), { ::i2c::class_of<::LiteNetLib::Layers::PacketLayerBase*>(), 5 }));
    return ___internal_method;
  }
};
constexpr int32_t& LiteNetLib::Layers::PacketLayerBase::__cordl_internal_get_ExtraPacketSizeForLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExtraPacketSizeForLayer;
}
constexpr int32_t const& LiteNetLib::Layers::PacketLayerBase::__cordl_internal_get_ExtraPacketSizeForLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExtraPacketSizeForLayer;
}
constexpr void LiteNetLib::Layers::PacketLayerBase::__cordl_internal_set_ExtraPacketSizeForLayer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ExtraPacketSizeForLayer = value;
}
inline void LiteNetLib::Layers::PacketLayerBase::_ctor(int32_t extraPacketSizeForLayer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Layers::PacketLayerBase*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, extraPacketSizeForLayer);
}
inline void LiteNetLib::Layers::PacketLayerBase::ProcessInboundPacket(::System::Net::IPEndPoint* remoteEndPoint, ::by_ref<::ArrayW<uint8_t>> data, ::by_ref<int32_t> offset, ::by_ref<int32_t> length) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Layers::PacketLayerBase*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, remoteEndPoint, data, offset, length);
}
inline void LiteNetLib::Layers::PacketLayerBase::ProcessOutBoundPacket(::System::Net::IPEndPoint* remoteEndPoint, ::by_ref<::ArrayW<uint8_t>> data, ::by_ref<int32_t> offset,
                                                                       ::by_ref<int32_t> length) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Layers::PacketLayerBase*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, remoteEndPoint, data, offset, length);
}
inline ::LiteNetLib::Layers::PacketLayerBase* LiteNetLib::Layers::PacketLayerBase::New_ctor(int32_t extraPacketSizeForLayer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Layers::PacketLayerBase*>(extraPacketSizeForLayer));
}
// Ctor Parameters []
constexpr ::LiteNetLib::Layers::PacketLayerBase::PacketLayerBase() {}
