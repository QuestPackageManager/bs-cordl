#pragma once
// IWYU pragma private; include "GlobalNamespace/ThreadStaticPacketPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ThreadStaticPacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
template <typename T> inline ::GlobalNamespace::PacketPool_1<T>* GlobalNamespace::ThreadStaticPacketPool_1<T>::get_pool() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ThreadStaticPacketPool_1<T>*>(), { "get_pool", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<T>*>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::ThreadStaticPacketPool_1<T>::ThreadStaticPacketPool_1() {}
