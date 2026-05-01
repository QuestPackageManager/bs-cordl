#pragma once
// IWYU pragma private; include "GlobalNamespace/INetworkPacketProcessor_1.hpp"
#include "GlobalNamespace/zzzz__INetworkPacketProcessor_1_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPacketProcessedHandler_1_def.hpp"
template <typename TData> inline ::GlobalNamespace::INetworkPacketProcessedHandler_1<TData>* GlobalNamespace::INetworkPacketProcessor_1<TData>::get_PacketProcessedHandler() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INetworkPacketProcessor_1<TData>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::INetworkPacketProcessedHandler_1<TData>*, false>(this, ___internal_method);
}
template <typename TData> inline void GlobalNamespace::INetworkPacketProcessor_1<TData>::set_PacketProcessedHandler(::GlobalNamespace::INetworkPacketProcessedHandler_1<TData>* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INetworkPacketProcessor_1<TData>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
