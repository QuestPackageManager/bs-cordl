#pragma once
// IWYU pragma private; include "GlobalNamespace/IScoreSyncStateManager_5.hpp"
#include "GlobalNamespace/zzzz__IScoreSyncStateManager_5_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__LocalMultiplayerSyncState_3_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSyncState_3_def.hpp"
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline int64_t GlobalNamespace::IScoreSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_syncTime() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IScoreSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline int32_t GlobalNamespace::IScoreSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_connectedPlayerCount() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IScoreSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*
GlobalNamespace::IScoreSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_localState() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IScoreSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*
GlobalNamespace::IScoreSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::GetSyncStateForPlayer(::GlobalNamespace::IConnectedPlayer* player) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IScoreSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*, false>(this, ___internal_method, player);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*
GlobalNamespace::IScoreSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::GetSyncState(int32_t i) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IScoreSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*, false>(this, ___internal_method, i);
}
