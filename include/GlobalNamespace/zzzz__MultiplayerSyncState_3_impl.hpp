#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerSyncState_3.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSyncState_3_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__StateBuffer_3_def.hpp"
template <typename TStateTable, typename TType, typename TState>
inline ::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>* GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>::get_stateBuffer() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>*>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState>
inline ::GlobalNamespace::IBeatSaberConnectedPlayer* GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>::get_player() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatSaberConnectedPlayer*>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState> inline int64_t GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>::GetLatestTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>(), { "GetLatestTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState> inline TState GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>::GetLatestState(TType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>(), { "GetLatestState", {}, { ::i2c::type_of<TType>() } })));
  return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method, type);
}
template <typename TStateTable, typename TType, typename TState> inline TState GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>::GetState(TType type, int64_t time) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method, type, time);
}
template <typename TStateTable, typename TType, typename TState> inline void GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>::ClearBufferedStates() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>(), { "ClearBufferedStates", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState> inline void GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState>
inline ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>* GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>());
}
// Ctor Parameters []
template <typename TStateTable, typename TType, typename TState> constexpr ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>::MultiplayerSyncState_3() {}
