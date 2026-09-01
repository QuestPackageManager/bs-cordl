#pragma once
// IWYU pragma private; include "LiteNetLib\NetPacketPool.hpp"
#include "LiteNetLib/zzzz__NetPacket_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/zzzz__NetPacketPool_def.hpp"
#include "LiteNetLib/zzzz__NetPacket_def.hpp"
#include "LiteNetLib/zzzz__PacketProperty_def.hpp"
#include "System/Threading/zzzz__ReaderWriterLockSlim_def.hpp"
//  Writing Method size for method: ::LiteNetLib::NetPacketPool.GetWithData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LiteNetLib::NetPacket* (::LiteNetLib::NetPacketPool::*)(::LiteNetLib::PacketProperty, ::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::LiteNetLib::NetPacketPool::GetWithData)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58a2b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacketPool*>(),
                            { "GetWithData", {}, { ::i2c::type_of<::LiteNetLib::PacketProperty>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacketPool.GetWithProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LiteNetLib::NetPacket* (::LiteNetLib::NetPacketPool::*)(::LiteNetLib::PacketProperty, int32_t)>(
    &::LiteNetLib::NetPacketPool::GetWithProperty)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x58a07fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacketPool*>(), { "GetWithProperty", {}, { ::i2c::type_of<::LiteNetLib::PacketProperty>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacketPool.GetWithProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LiteNetLib::NetPacket* (::LiteNetLib::NetPacketPool::*)(::LiteNetLib::PacketProperty)>(&::LiteNetLib::NetPacketPool::GetWithProperty)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x58a1358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacketPool*>(), { "GetWithProperty", {}, { ::i2c::type_of<::LiteNetLib::PacketProperty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacketPool.GetPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LiteNetLib::NetPacket* (::LiteNetLib::NetPacketPool::*)(int32_t)>(&::LiteNetLib::NetPacketPool::GetPacket)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x589efe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacketPool*>(), { "GetPacket", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacketPool.Recycle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPacketPool::*)(::LiteNetLib::NetPacket*)>(&::LiteNetLib::NetPacketPool::Recycle)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x589db40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacketPool*>(), { "Recycle", {}, { ::i2c::type_of<::LiteNetLib::NetPacket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacketPool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPacketPool::*)()>(&::LiteNetLib::NetPacketPool::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x589e894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacketPool*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::LiteNetLib::NetPacket*>& LiteNetLib::NetPacketPool::__cordl_internal_get__pool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pool;
}
constexpr ::ArrayW<::LiteNetLib::NetPacket*> const& LiteNetLib::NetPacketPool::__cordl_internal_get__pool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pool;
}
constexpr void LiteNetLib::NetPacketPool::__cordl_internal_set__pool(::ArrayW<::LiteNetLib::NetPacket*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pool = value;
}
constexpr ::System::Threading::ReaderWriterLockSlim*& LiteNetLib::NetPacketPool::__cordl_internal_get__lock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lock;
}
constexpr ::System::Threading::ReaderWriterLockSlim* const& LiteNetLib::NetPacketPool::__cordl_internal_get__lock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lock;
}
constexpr void LiteNetLib::NetPacketPool::__cordl_internal_set__lock(::System::Threading::ReaderWriterLockSlim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lock = value;
}
constexpr int32_t& LiteNetLib::NetPacketPool::__cordl_internal_get__count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr int32_t const& LiteNetLib::NetPacketPool::__cordl_internal_get__count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr void LiteNetLib::NetPacketPool::__cordl_internal_set__count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____count = value;
}
inline ::LiteNetLib::NetPacket* LiteNetLib::NetPacketPool::GetWithData(::LiteNetLib::PacketProperty property, ::ArrayW<uint8_t> data, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacketPool*>(),
                          { "GetWithData", {}, { ::i2c::type_of<::LiteNetLib::PacketProperty>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetPacket*>(this, ___internal_method, property, data, start, length);
}
inline ::LiteNetLib::NetPacket* LiteNetLib::NetPacketPool::GetWithProperty(::LiteNetLib::PacketProperty property, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacketPool*>(), { "GetWithProperty", {}, { ::i2c::type_of<::LiteNetLib::PacketProperty>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetPacket*>(this, ___internal_method, property, size);
}
inline ::LiteNetLib::NetPacket* LiteNetLib::NetPacketPool::GetWithProperty(::LiteNetLib::PacketProperty property) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacketPool*>(), { "GetWithProperty", {}, { ::i2c::type_of<::LiteNetLib::PacketProperty>() } })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetPacket*>(this, ___internal_method, property);
}
inline ::LiteNetLib::NetPacket* LiteNetLib::NetPacketPool::GetPacket(int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacketPool*>(), { "GetPacket", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetPacket*>(this, ___internal_method, size);
}
inline void LiteNetLib::NetPacketPool::Recycle(::LiteNetLib::NetPacket* packet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacketPool*>(), { "Recycle", {}, { ::i2c::type_of<::LiteNetLib::NetPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet);
}
inline void LiteNetLib::NetPacketPool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacketPool*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::LiteNetLib::NetPacketPool* LiteNetLib::NetPacketPool::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::NetPacketPool*>());
}
// Ctor Parameters []
constexpr ::LiteNetLib::NetPacketPool::NetPacketPool() {}
