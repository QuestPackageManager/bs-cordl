#pragma once
// IWYU pragma private; include "GlobalNamespace/IMultiplayerSessionMessageProcessor_1.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionMessageProcessor_1_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPacketSubSerializer_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
template <typename TMessageType>
template <typename T>
inline void GlobalNamespace::IMultiplayerSessionMessageProcessor_1<TMessageType>::RegisterCallback(TMessageType serializerType, ::System::Action_2<T, ::GlobalNamespace::IConnectedPlayer*>* callback,
                                                                                                   ::System::Func_1<T>* constructor) {
  auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IMultiplayerSessionMessageProcessor_1<TMessageType>*>::get(), 0)));
  auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializerType, callback, constructor);
}
template <typename TMessageType> template <typename T> inline void GlobalNamespace::IMultiplayerSessionMessageProcessor_1<TMessageType>::UnregisterCallback(TMessageType serializerType) {
  auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IMultiplayerSessionMessageProcessor_1<TMessageType>*>::get(), 1)));
  auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializerType);
}
template <typename TMessageType>
inline void
GlobalNamespace::IMultiplayerSessionMessageProcessor_1<TMessageType>::RegisterSerializer(TMessageType serializerType,
                                                                                         ::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>* subSerializer) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IMultiplayerSessionMessageProcessor_1<TMessageType>*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializerType, subSerializer);
}
template <typename TMessageType>
inline void
GlobalNamespace::IMultiplayerSessionMessageProcessor_1<TMessageType>::UnregisterSerializer(TMessageType serializerType,
                                                                                           ::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>* subSerializer) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IMultiplayerSessionMessageProcessor_1<TMessageType>*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializerType, subSerializer);
}
