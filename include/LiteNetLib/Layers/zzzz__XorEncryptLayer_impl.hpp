#pragma once
// IWYU pragma private; include "LiteNetLib\Layers\XorEncryptLayer.hpp"
#include "LiteNetLib/Layers/zzzz__PacketLayerBase_impl.hpp"
#include "LiteNetLib/Layers/zzzz__XorEncryptLayer_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
//  Writing Method size for method: ::LiteNetLib::Layers::XorEncryptLayer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Layers::XorEncryptLayer::*)()>(&::LiteNetLib::Layers::XorEncryptLayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ade90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Layers::XorEncryptLayer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Layers::XorEncryptLayer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Layers::XorEncryptLayer::*)(::ArrayW<uint8_t>)>(&::LiteNetLib::Layers::XorEncryptLayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ade98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Layers::XorEncryptLayer*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Layers::XorEncryptLayer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Layers::XorEncryptLayer::*)(::StringW)>(&::LiteNetLib::Layers::XorEncryptLayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58adf44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Layers::XorEncryptLayer*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Layers::XorEncryptLayer.SetKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Layers::XorEncryptLayer::*)(::StringW)>(&::LiteNetLib::Layers::XorEncryptLayer::SetKey)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x58adf4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Layers::XorEncryptLayer*>(), { "SetKey", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Layers::XorEncryptLayer.SetKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Layers::XorEncryptLayer::*)(::ArrayW<uint8_t>)>(&::LiteNetLib::Layers::XorEncryptLayer::SetKey)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58adea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Layers::XorEncryptLayer*>(), { "SetKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Layers::XorEncryptLayer.ProcessInboundPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Layers::XorEncryptLayer::*)(::System::Net::IPEndPoint*, ::by_ref<::ArrayW<uint8_t>>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::LiteNetLib::Layers::XorEncryptLayer::ProcessInboundPacket)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58adf90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LiteNetLib::Layers::XorEncryptLayer*>(), { ::i2c::class_of<::LiteNetLib::Layers::XorEncryptLayer*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Layers::XorEncryptLayer.ProcessOutBoundPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Layers::XorEncryptLayer::*)(::System::Net::IPEndPoint*, ::by_ref<::ArrayW<uint8_t>>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::LiteNetLib::Layers::XorEncryptLayer::ProcessOutBoundPacket)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x58ae014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LiteNetLib::Layers::XorEncryptLayer*>(), { ::i2c::class_of<::LiteNetLib::Layers::XorEncryptLayer*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& LiteNetLib::Layers::XorEncryptLayer::__cordl_internal_get__byteKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____byteKey;
}
constexpr ::ArrayW<uint8_t> const& LiteNetLib::Layers::XorEncryptLayer::__cordl_internal_get__byteKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____byteKey;
}
constexpr void LiteNetLib::Layers::XorEncryptLayer::__cordl_internal_set__byteKey(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____byteKey = value;
}
inline void LiteNetLib::Layers::XorEncryptLayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Layers::XorEncryptLayer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LiteNetLib::Layers::XorEncryptLayer::_ctor(::ArrayW<uint8_t> key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Layers::XorEncryptLayer*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void LiteNetLib::Layers::XorEncryptLayer::_ctor(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Layers::XorEncryptLayer*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void LiteNetLib::Layers::XorEncryptLayer::SetKey(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Layers::XorEncryptLayer*>(), { "SetKey", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void LiteNetLib::Layers::XorEncryptLayer::SetKey(::ArrayW<uint8_t> key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Layers::XorEncryptLayer*>(), { "SetKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void LiteNetLib::Layers::XorEncryptLayer::ProcessInboundPacket(::System::Net::IPEndPoint* remoteEndPoint, ::by_ref<::ArrayW<uint8_t>> data, ::by_ref<int32_t> offset, ::by_ref<int32_t> length) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Layers::XorEncryptLayer*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, remoteEndPoint, data, offset, length);
}
inline void LiteNetLib::Layers::XorEncryptLayer::ProcessOutBoundPacket(::System::Net::IPEndPoint* remoteEndPoint, ::by_ref<::ArrayW<uint8_t>> data, ::by_ref<int32_t> offset,
                                                                       ::by_ref<int32_t> length) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Layers::XorEncryptLayer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, remoteEndPoint, data, offset, length);
}
inline ::LiteNetLib::Layers::XorEncryptLayer* LiteNetLib::Layers::XorEncryptLayer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Layers::XorEncryptLayer*>());
}
inline ::LiteNetLib::Layers::XorEncryptLayer* LiteNetLib::Layers::XorEncryptLayer::New_ctor(::ArrayW<uint8_t> key) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Layers::XorEncryptLayer*>(key));
}
inline ::LiteNetLib::Layers::XorEncryptLayer* LiteNetLib::Layers::XorEncryptLayer::New_ctor(::StringW key) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Layers::XorEncryptLayer*>(key));
}
// Ctor Parameters []
constexpr ::LiteNetLib::Layers::XorEncryptLayer::XorEncryptLayer() {}
