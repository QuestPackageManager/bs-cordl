#pragma once
// IWYU pragma private; include "ENet/ArrayPool.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ENet/zzzz__ArrayPool_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::ENet::ArrayPool.GetByteBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)()>(&::ENet::ArrayPool::GetByteBuffer)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5893cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::ArrayPool*>(), { "GetByteBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::ArrayPool.GetPointerBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::IntPtr> (*)()>(&::ENet::ArrayPool::GetPointerBuffer)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5893e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::ArrayPool*>(), { "GetPointerBuffer", {}, {} })));
    return ___internal_method;
  }
};
inline void ENet::ArrayPool::setStaticF_byteBuffer(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "byteBuffer", ::ENet::ArrayPool*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> ENet::ArrayPool::getStaticF_byteBuffer() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "byteBuffer", ::ENet::ArrayPool*>();
}
inline void ENet::ArrayPool::setStaticF_pointerBuffer(::ArrayW<::System::IntPtr> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::IntPtr>, "pointerBuffer", ::ENet::ArrayPool*>(std::forward<::ArrayW<::System::IntPtr>>(value));
}
inline ::ArrayW<::System::IntPtr> ENet::ArrayPool::getStaticF_pointerBuffer() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::IntPtr>, "pointerBuffer", ::ENet::ArrayPool*>();
}
inline ::ArrayW<uint8_t> ENet::ArrayPool::GetByteBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::ArrayPool*>(), { "GetByteBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method);
}
inline ::ArrayW<::System::IntPtr> ENet::ArrayPool::GetPointerBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::ArrayPool*>(), { "GetPointerBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::IntPtr>>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::ENet::ArrayPool::ArrayPool() {}
