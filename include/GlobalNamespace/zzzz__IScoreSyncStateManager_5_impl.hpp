#pragma once
// IWYU pragma private; include "GlobalNamespace/IScoreSyncStateManager_5.hpp"
#include "GlobalNamespace/zzzz__IEquatableByReference_1_impl.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_impl.hpp"
#include "GlobalNamespace/zzzz__IStateTable_3_impl.hpp"
#include "GlobalNamespace/zzzz__ISyncStateDeltaSerializable_1_impl.hpp"
#include "GlobalNamespace/zzzz__ISyncStateSerializable_1_impl.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_impl.hpp"
#include "System/zzzz__IConvertible_impl.hpp"
#include "GlobalNamespace/zzzz__IScoreSyncStateManager_5_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__LocalMultiplayerSyncState_3_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSyncState_3_def.hpp"
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
  requires(::cordl_internals::type_constraint<TStateTable, ::GlobalNamespace::IStateTable_3<TStateTable, TType, TState>*> &&
           ::cordl_internals::type_constraint<TStateTable, ::LiteNetLib::Utils::INetSerializable*> &&
           ::cordl_internals::type_constraint<TStateTable, ::GlobalNamespace::IEquatableByReference_1<TStateTable>*> && ::cordl_internals::value_type_constraint<TStateTable> &&
           ::cordl_internals::default_constructor_constraint<TStateTable> && ::cordl_internals::type_constraint<TType, ::System::IConvertible*> && ::cordl_internals::value_type_constraint<TType> &&
           ::cordl_internals::default_constructor_constraint<TType> && ::cordl_internals::value_type_constraint<TState> && ::cordl_internals::default_constructor_constraint<TState> &&
           ::cordl_internals::type_constraint<TSerializable, ::LiteNetLib::Utils::INetSerializable*> &&
           ::cordl_internals::type_constraint<TSerializable, ::GlobalNamespace::ISyncStateSerializable_1<TStateTable>*> &&
           ::cordl_internals::type_constraint<TSerializable, ::GlobalNamespace::IPoolablePacket*> && ::cordl_internals::type_constraint<TDeltaSerializable, ::LiteNetLib::Utils::INetSerializable*> &&
           ::cordl_internals::type_constraint<TDeltaSerializable, ::GlobalNamespace::ISyncStateDeltaSerializable_1<TStateTable>*> &&
           ::cordl_internals::type_constraint<TDeltaSerializable, ::GlobalNamespace::IPoolablePacket*>)
inline int64_t GlobalNamespace::IScoreSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_syncTime() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::GlobalNamespace::IScoreSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
  requires(::cordl_internals::type_constraint<TStateTable, ::GlobalNamespace::IStateTable_3<TStateTable, TType, TState>*> &&
           ::cordl_internals::type_constraint<TStateTable, ::LiteNetLib::Utils::INetSerializable*> &&
           ::cordl_internals::type_constraint<TStateTable, ::GlobalNamespace::IEquatableByReference_1<TStateTable>*> && ::cordl_internals::value_type_constraint<TStateTable> &&
           ::cordl_internals::default_constructor_constraint<TStateTable> && ::cordl_internals::type_constraint<TType, ::System::IConvertible*> && ::cordl_internals::value_type_constraint<TType> &&
           ::cordl_internals::default_constructor_constraint<TType> && ::cordl_internals::value_type_constraint<TState> && ::cordl_internals::default_constructor_constraint<TState> &&
           ::cordl_internals::type_constraint<TSerializable, ::LiteNetLib::Utils::INetSerializable*> &&
           ::cordl_internals::type_constraint<TSerializable, ::GlobalNamespace::ISyncStateSerializable_1<TStateTable>*> &&
           ::cordl_internals::type_constraint<TSerializable, ::GlobalNamespace::IPoolablePacket*> && ::cordl_internals::type_constraint<TDeltaSerializable, ::LiteNetLib::Utils::INetSerializable*> &&
           ::cordl_internals::type_constraint<TDeltaSerializable, ::GlobalNamespace::ISyncStateDeltaSerializable_1<TStateTable>*> &&
           ::cordl_internals::type_constraint<TDeltaSerializable, ::GlobalNamespace::IPoolablePacket*>)
inline int32_t GlobalNamespace::IScoreSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_connectedPlayerCount() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::GlobalNamespace::IScoreSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
  requires(::cordl_internals::type_constraint<TStateTable, ::GlobalNamespace::IStateTable_3<TStateTable, TType, TState>*> &&
           ::cordl_internals::type_constraint<TStateTable, ::LiteNetLib::Utils::INetSerializable*> &&
           ::cordl_internals::type_constraint<TStateTable, ::GlobalNamespace::IEquatableByReference_1<TStateTable>*> && ::cordl_internals::value_type_constraint<TStateTable> &&
           ::cordl_internals::default_constructor_constraint<TStateTable> && ::cordl_internals::type_constraint<TType, ::System::IConvertible*> && ::cordl_internals::value_type_constraint<TType> &&
           ::cordl_internals::default_constructor_constraint<TType> && ::cordl_internals::value_type_constraint<TState> && ::cordl_internals::default_constructor_constraint<TState> &&
           ::cordl_internals::type_constraint<TSerializable, ::LiteNetLib::Utils::INetSerializable*> &&
           ::cordl_internals::type_constraint<TSerializable, ::GlobalNamespace::ISyncStateSerializable_1<TStateTable>*> &&
           ::cordl_internals::type_constraint<TSerializable, ::GlobalNamespace::IPoolablePacket*> && ::cordl_internals::type_constraint<TDeltaSerializable, ::LiteNetLib::Utils::INetSerializable*> &&
           ::cordl_internals::type_constraint<TDeltaSerializable, ::GlobalNamespace::ISyncStateDeltaSerializable_1<TStateTable>*> &&
           ::cordl_internals::type_constraint<TDeltaSerializable, ::GlobalNamespace::IPoolablePacket*>)
inline ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*
GlobalNamespace::IScoreSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_localState() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::GlobalNamespace::IScoreSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
  requires(::cordl_internals::type_constraint<TStateTable, ::GlobalNamespace::IStateTable_3<TStateTable, TType, TState>*> &&
           ::cordl_internals::type_constraint<TStateTable, ::LiteNetLib::Utils::INetSerializable*> &&
           ::cordl_internals::type_constraint<TStateTable, ::GlobalNamespace::IEquatableByReference_1<TStateTable>*> && ::cordl_internals::value_type_constraint<TStateTable> &&
           ::cordl_internals::default_constructor_constraint<TStateTable> && ::cordl_internals::type_constraint<TType, ::System::IConvertible*> && ::cordl_internals::value_type_constraint<TType> &&
           ::cordl_internals::default_constructor_constraint<TType> && ::cordl_internals::value_type_constraint<TState> && ::cordl_internals::default_constructor_constraint<TState> &&
           ::cordl_internals::type_constraint<TSerializable, ::LiteNetLib::Utils::INetSerializable*> &&
           ::cordl_internals::type_constraint<TSerializable, ::GlobalNamespace::ISyncStateSerializable_1<TStateTable>*> &&
           ::cordl_internals::type_constraint<TSerializable, ::GlobalNamespace::IPoolablePacket*> && ::cordl_internals::type_constraint<TDeltaSerializable, ::LiteNetLib::Utils::INetSerializable*> &&
           ::cordl_internals::type_constraint<TDeltaSerializable, ::GlobalNamespace::ISyncStateDeltaSerializable_1<TStateTable>*> &&
           ::cordl_internals::type_constraint<TDeltaSerializable, ::GlobalNamespace::IPoolablePacket*>)
inline ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*
GlobalNamespace::IScoreSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::GetSyncStateForPlayer(::GlobalNamespace::IConnectedPlayer* player) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::GlobalNamespace::IScoreSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>(this, ___internal_method, player);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
  requires(::cordl_internals::type_constraint<TStateTable, ::GlobalNamespace::IStateTable_3<TStateTable, TType, TState>*> &&
           ::cordl_internals::type_constraint<TStateTable, ::LiteNetLib::Utils::INetSerializable*> &&
           ::cordl_internals::type_constraint<TStateTable, ::GlobalNamespace::IEquatableByReference_1<TStateTable>*> && ::cordl_internals::value_type_constraint<TStateTable> &&
           ::cordl_internals::default_constructor_constraint<TStateTable> && ::cordl_internals::type_constraint<TType, ::System::IConvertible*> && ::cordl_internals::value_type_constraint<TType> &&
           ::cordl_internals::default_constructor_constraint<TType> && ::cordl_internals::value_type_constraint<TState> && ::cordl_internals::default_constructor_constraint<TState> &&
           ::cordl_internals::type_constraint<TSerializable, ::LiteNetLib::Utils::INetSerializable*> &&
           ::cordl_internals::type_constraint<TSerializable, ::GlobalNamespace::ISyncStateSerializable_1<TStateTable>*> &&
           ::cordl_internals::type_constraint<TSerializable, ::GlobalNamespace::IPoolablePacket*> && ::cordl_internals::type_constraint<TDeltaSerializable, ::LiteNetLib::Utils::INetSerializable*> &&
           ::cordl_internals::type_constraint<TDeltaSerializable, ::GlobalNamespace::ISyncStateDeltaSerializable_1<TStateTable>*> &&
           ::cordl_internals::type_constraint<TDeltaSerializable, ::GlobalNamespace::IPoolablePacket*>)
inline ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*
GlobalNamespace::IScoreSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::GetSyncState(int32_t i) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::GlobalNamespace::IScoreSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>(this, ___internal_method, i);
}
