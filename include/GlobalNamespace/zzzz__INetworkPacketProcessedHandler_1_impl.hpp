#pragma once
// IWYU pragma private; include "GlobalNamespace\INetworkPacketProcessedHandler_1.hpp"
#include "GlobalNamespace/zzzz__INetworkPacketProcessedHandler_1_def.hpp"
template <typename TData> inline void GlobalNamespace::INetworkPacketProcessedHandler_1<TData>::HandlePacketProcessed(::StringW typeName, TData data) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::INetworkPacketProcessedHandler_1<TData>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeName, data);
}
