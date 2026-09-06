#pragma once
// IWYU pragma private; include "GlobalNamespace/IPacketPool_1.hpp"
#include "GlobalNamespace/zzzz__IPacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__IPacketPool_def.hpp"
template <typename T> inline T GlobalNamespace::IPacketPool_1<T>::Obtain() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IPacketPool_1<T>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::IPacketPool_1<T>::Release(T t) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IPacketPool_1<T>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
/// @brief Convert operator to "::GlobalNamespace::IPacketPool"
template <typename T> constexpr GlobalNamespace::IPacketPool_1<T>::operator ::GlobalNamespace::IPacketPool*() noexcept {
  return static_cast<::GlobalNamespace::IPacketPool*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPacketPool"
template <typename T> constexpr ::GlobalNamespace::IPacketPool* GlobalNamespace::IPacketPool_1<T>::i___GlobalNamespace__IPacketPool() noexcept {
  return static_cast<::GlobalNamespace::IPacketPool*>(static_cast<void*>(this));
}
