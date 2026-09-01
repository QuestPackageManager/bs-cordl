#pragma once
// IWYU pragma private; include "GlobalNamespace\INetworkPacketProcessor_1.hpp"
#include "GlobalNamespace/zzzz__INetworkPacketProcessor_1_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPacketProcessedHandler_1_def.hpp"
template <typename TData> inline ::GlobalNamespace::INetworkPacketProcessedHandler_1<TData>* GlobalNamespace::INetworkPacketProcessor_1<TData>::get_PacketProcessedHandler() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::INetworkPacketProcessor_1<TData>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::INetworkPacketProcessedHandler_1<TData>*>(this, ___internal_method);
}
template <typename TData> inline void GlobalNamespace::INetworkPacketProcessor_1<TData>::set_PacketProcessedHandler(::GlobalNamespace::INetworkPacketProcessedHandler_1<TData>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::INetworkPacketProcessor_1<TData>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
