#pragma once
// IWYU pragma private; include "GlobalNamespace\RemoteMultiplayerSyncState_3.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSyncState_3_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteMultiplayerSyncState_3_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__RemoteStateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__StateBuffer_3_def.hpp"
template <typename TStateTable, typename TType, typename TState>
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer*& GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>::__cordl_internal_get__player() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____player;
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* const& GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>::__cordl_internal_get__player() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____player;
}
template <typename TStateTable, typename TType, typename TState>
constexpr void GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>::__cordl_internal_set__player(::GlobalNamespace::IBeatSaberConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____player = value;
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>*& GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>::__cordl_internal_get__stateBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateBuffer;
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>* const&
GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>::__cordl_internal_get__stateBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateBuffer;
}
template <typename TStateTable, typename TType, typename TState>
constexpr void GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>::__cordl_internal_set__stateBuffer(::GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stateBuffer = value;
}
template <typename TStateTable, typename TType, typename TState>
inline ::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>* GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>::get_stateBuffer() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>*>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState>
inline ::GlobalNamespace::IBeatSaberConnectedPlayer* GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>::get_player() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatSaberConnectedPlayer*>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState>
template <typename T>
inline void GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>::UpdateState(T serializable) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>(),
                                                                                              { "UpdateState", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializable);
}
template <typename TStateTable, typename TType, typename TState>
template <typename T>
inline void GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>::UpdateDelta(T serializable) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>(),
                                                                                              { "UpdateDelta", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializable);
}
template <typename TStateTable, typename TType, typename TState>
inline void GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>::_ctor(::GlobalNamespace::IBeatSaberConnectedPlayer* player, int32_t size,
                                                                                             ::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>* interpolator,
                                                                                             ::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>* smoother) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>*>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, size, interpolator, smoother);
}
template <typename TStateTable, typename TType, typename TState>
inline ::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*
GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>::New_ctor(::GlobalNamespace::IBeatSaberConnectedPlayer* player, int32_t size,
                                                                                    ::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>* interpolator,
                                                                                    ::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>* smoother) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>(player, size, interpolator, smoother));
}
// Ctor Parameters []
template <typename TStateTable, typename TType, typename TState> constexpr ::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>::RemoteMultiplayerSyncState_3() {}
