#pragma once
// IWYU pragma private; include "GlobalNamespace/PacketPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__IPacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__IPacketPool_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentBag_1_def.hpp"
template <typename T> constexpr ::System::Collections::Concurrent::ConcurrentBag_1<T>*& GlobalNamespace::PacketPool_1<T>::__cordl_internal_get__bag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bag;
}
template <typename T> constexpr ::System::Collections::Concurrent::ConcurrentBag_1<T>* const& GlobalNamespace::PacketPool_1<T>::__cordl_internal_get__bag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bag;
}
template <typename T> constexpr void GlobalNamespace::PacketPool_1<T>::__cordl_internal_set__bag(::System::Collections::Concurrent::ConcurrentBag_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bag = value;
}
template <typename T> inline T GlobalNamespace::PacketPool_1<T>::Obtain() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketPool_1<T>*>(), { "Obtain", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::PacketPool_1<T>::Release(T t) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketPool_1<T>*>(), { "Release", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
template <typename T> inline void GlobalNamespace::PacketPool_1<T>::Fill() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketPool_1<T>*>(), { "Fill", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::PacketPool_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketPool_1<T>*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::PacketPool_1<T>::IPacketPool_Release(::GlobalNamespace::IPoolablePacket* o) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketPool_1<T>*>(), { "IPacketPool.Release", {}, { ::i2c::type_of<::GlobalNamespace::IPoolablePacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
template <typename T> inline void GlobalNamespace::PacketPool_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketPool_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::PacketPool_1<T>* GlobalNamespace::PacketPool_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PacketPool_1<T>*>());
}
/// @brief Convert operator to "::GlobalNamespace::IPacketPool_1<T>"
template <typename T> constexpr GlobalNamespace::PacketPool_1<T>::operator ::GlobalNamespace::IPacketPool_1<T>*() noexcept {
  return static_cast<::GlobalNamespace::IPacketPool_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPacketPool_1<T>"
template <typename T> constexpr ::GlobalNamespace::IPacketPool_1<T>* GlobalNamespace::PacketPool_1<T>::i___GlobalNamespace__IPacketPool_1_T_() noexcept {
  return static_cast<::GlobalNamespace::IPacketPool_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPacketPool"
template <typename T> constexpr GlobalNamespace::PacketPool_1<T>::operator ::GlobalNamespace::IPacketPool*() noexcept {
  return static_cast<::GlobalNamespace::IPacketPool*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPacketPool"
template <typename T> constexpr ::GlobalNamespace::IPacketPool* GlobalNamespace::PacketPool_1<T>::i___GlobalNamespace__IPacketPool() noexcept {
  return static_cast<::GlobalNamespace::IPacketPool*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::PacketPool_1<T>::PacketPool_1() {}
