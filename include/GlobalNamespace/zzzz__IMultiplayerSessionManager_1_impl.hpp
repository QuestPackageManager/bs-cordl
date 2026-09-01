#pragma once
// IWYU pragma private; include "GlobalNamespace\IMultiplayerSessionManager_1.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_1_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
template <typename TConnectedPlayer> inline void GlobalNamespace::IMultiplayerSessionManager_1_IMultiplayerSessionInitializer<TConnectedPlayer>::InitializeLocalPlayerSessionState() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1_IMultiplayerSessionInitializer<TConnectedPlayer>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TConnectedPlayer> inline TConnectedPlayer GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::get_localPlayer() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<TConnectedPlayer>(this, ___internal_method);
}
template <typename TConnectedPlayer> inline bool GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::get_isConnectionOwner() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TConnectedPlayer> inline int64_t GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::get_syncTime() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
template <typename TConnectedPlayer> inline bool GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::get_isSyncTimeInitialized() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TConnectedPlayer> inline int32_t GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::get_maxPlayerCount() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TConnectedPlayer> inline int32_t GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::get_connectedPlayerCount() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TConnectedPlayer> inline bool GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::get_isConnectingOrConnected() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TConnectedPlayer> inline bool GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::get_isConnected() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TConnectedPlayer> inline bool GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::get_isConnecting() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TConnectedPlayer> inline bool GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::get_isDisconnecting() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TConnectedPlayer> inline bool GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::get_isSpectating() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TConnectedPlayer> inline ::System::Collections::Generic::IReadOnlyList_1<TConnectedPlayer>* GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::get_connectedPlayers() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<TConnectedPlayer>*>(this, ___internal_method);
}
template <typename TConnectedPlayer> inline TConnectedPlayer GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::get_connectionOwner() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<TConnectedPlayer>(this, ___internal_method);
}
template <typename TConnectedPlayer> inline void GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::add_connectedEvent(::System::Action* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TConnectedPlayer> inline void GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::remove_connectedEvent(::System::Action* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TConnectedPlayer>
inline void GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::add_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TConnectedPlayer>
inline void GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::remove_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TConnectedPlayer> inline void GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::add_playerConnectedEvent(::System::Action_1<TConnectedPlayer>* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TConnectedPlayer> inline void GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::remove_playerConnectedEvent(::System::Action_1<TConnectedPlayer>* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TConnectedPlayer> inline void GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::add_playerDisconnectedEvent(::System::Action_1<TConnectedPlayer>* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TConnectedPlayer> inline void GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::remove_playerDisconnectedEvent(::System::Action_1<TConnectedPlayer>* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TConnectedPlayer> inline void GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::add_playerStateChangedEvent(::System::Action_1<TConnectedPlayer>* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TConnectedPlayer> inline void GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::remove_playerStateChangedEvent(::System::Action_1<TConnectedPlayer>* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TConnectedPlayer> inline void GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::add_connectionOwnerStateChangedEvent(::System::Action_1<TConnectedPlayer>* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TConnectedPlayer> inline void GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::remove_connectionOwnerStateChangedEvent(::System::Action_1<TConnectedPlayer>* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TConnectedPlayer>
inline void GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::add_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TConnectedPlayer>
inline void GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::remove_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TConnectedPlayer> inline void GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::add_pollUpdateEvent(::System::Action* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TConnectedPlayer> inline void GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::remove_pollUpdateEvent(::System::Action* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TConnectedPlayer> inline void GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::SetMaxPlayerCount(int32_t maxPlayerCount) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxPlayerCount);
}
template <typename TConnectedPlayer> inline void GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::EndSession() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TConnectedPlayer> inline TConnectedPlayer GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::GetPlayerByUserId(::StringW userId) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<TConnectedPlayer>(this, ___internal_method, userId);
}
template <typename TConnectedPlayer> inline TConnectedPlayer GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::GetConnectedPlayer(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<TConnectedPlayer>(this, ___internal_method, index);
}
template <typename TConnectedPlayer> inline void GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::KickPlayer(::StringW userId) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
template <typename TConnectedPlayer> inline void GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::Disconnect() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TConnectedPlayer> template <typename T> inline void GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::Send(T message) {
  auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 35 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
template <typename TConnectedPlayer>
template <typename T>
inline void GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::SendToPlayer(T message, ::GlobalNamespace::IConnectedPlayer* player) {
  auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 36 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, player);
}
template <typename TConnectedPlayer> template <typename T> inline void GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::SendUnreliable(T message) {
  auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 37 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
template <typename TConnectedPlayer>
template <typename T>
inline void GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::SendUnreliableEncryptedToPlayer(T message, ::GlobalNamespace::IConnectedPlayer* player) {
  auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 38 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, player);
}
template <typename TConnectedPlayer> template <typename T> inline void GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::SendUnreliableOnlyToFirstDegreeConnections(T message) {
  auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 39 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
template <typename TConnectedPlayer>
template <typename T>
inline void GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::SendUnreliableFromPlayerToPlayer(T message, ::GlobalNamespace::IConnectedPlayer* fromPlayer,
                                                                                                              ::GlobalNamespace::IConnectedPlayer* toPlayer) {
  auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 40 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, fromPlayer, toPlayer);
}
template <typename TConnectedPlayer> inline void GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::SetLocalPlayerState(::StringW state, bool hasState) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, hasState);
}
template <typename TConnectedPlayer> inline bool GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>::LocalPlayerHasState(::StringW state) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state);
}
