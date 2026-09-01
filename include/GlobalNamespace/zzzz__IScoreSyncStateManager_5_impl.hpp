#pragma once
// IWYU pragma private; include "GlobalNamespace\IScoreSyncStateManager_5.hpp"
#include "GlobalNamespace/zzzz__IScoreSyncStateManager_5_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__LocalMultiplayerSyncState_3_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSyncState_3_def.hpp"
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline int64_t GlobalNamespace::IScoreSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_syncTime() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::GlobalNamespace::IScoreSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline int32_t GlobalNamespace::IScoreSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_connectedPlayerCount() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::GlobalNamespace::IScoreSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*
GlobalNamespace::IScoreSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_localState() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::GlobalNamespace::IScoreSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*
GlobalNamespace::IScoreSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::GetSyncStateForPlayer(::GlobalNamespace::IConnectedPlayer* player) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::GlobalNamespace::IScoreSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>(this, ___internal_method, player);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*
GlobalNamespace::IScoreSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::GetSyncState(int32_t i) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::GlobalNamespace::IScoreSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>(this, ___internal_method, i);
}
