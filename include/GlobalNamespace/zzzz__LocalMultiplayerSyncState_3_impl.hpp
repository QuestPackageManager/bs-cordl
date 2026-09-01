#pragma once
// IWYU pragma private; include "GlobalNamespace\LocalMultiplayerSyncState_3.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSyncState_3_impl.hpp"
#include "GlobalNamespace/zzzz__LocalMultiplayerSyncState_3_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IPacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__LocalStateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__StateBuffer_3_def.hpp"
template <typename TStateTable, typename TType, typename TState>
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer*& GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>::__cordl_internal_get__player() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____player;
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* const& GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>::__cordl_internal_get__player() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____player;
}
template <typename TStateTable, typename TType, typename TState>
constexpr void GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>::__cordl_internal_set__player(::GlobalNamespace::IBeatSaberConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____player = value;
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>*& GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>::__cordl_internal_get__stateBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateBuffer;
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>* const&
GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>::__cordl_internal_get__stateBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateBuffer;
}
template <typename TStateTable, typename TType, typename TState>
constexpr void GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>::__cordl_internal_set__stateBuffer(::GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stateBuffer = value;
}
template <typename TStateTable, typename TType, typename TState>
inline ::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>* GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>::get_stateBuffer() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>*>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState>
inline ::GlobalNamespace::IBeatSaberConnectedPlayer* GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>::get_player() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatSaberConnectedPlayer*>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState>
inline void GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>::_ctor(::GlobalNamespace::IBeatSaberConnectedPlayer* player, int64_t fullStateUpdateFrequency,
                                                                                            int64_t deltaUpdateFrequency, int32_t size,
                                                                                            ::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>* interpolator,
                                                                                            ::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>* smoother) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>*>(),
                                                               ::i2c::type_of<::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, fullStateUpdateFrequency, deltaUpdateFrequency, size, interpolator, smoother);
}
template <typename TStateTable, typename TType, typename TState>
template <typename T>
inline bool GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>::TryGetSerializedState(::GlobalNamespace::IPacketPool_1<T>* pool, ::by_ref<T> serializable) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*>(),
                                              { "TryGetSerializedState", { ::i2c::class_of<T>() }, { ::i2c::type_of<::GlobalNamespace::IPacketPool_1<T>*>(), ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pool, serializable);
}
template <typename TStateTable, typename TType, typename TState>
template <typename T>
inline bool GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>::TryGetSerializedStateDelta(::GlobalNamespace::IPacketPool_1<T>* pool, ::by_ref<T> serializable) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*>(),
                                              { "TryGetSerializedStateDelta", { ::i2c::class_of<T>() }, { ::i2c::type_of<::GlobalNamespace::IPacketPool_1<T>*>(), ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pool, serializable);
}
template <typename TStateTable, typename TType, typename TState> inline void GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>::SetDirty() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*>(), { "SetDirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState> inline void GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>::SetCurrentTime(int64_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*>(), { "SetCurrentTime", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
template <typename TStateTable, typename TType, typename TState> inline void GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>::SetState(TType type, TState state) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, state);
}
template <typename TStateTable, typename TType, typename TState> inline TState GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>::GetState(TType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*>(), { "GetState", {}, { ::i2c::type_of<TType>() } })));
  return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method, type);
}
template <typename TStateTable, typename TType, typename TState> inline TState GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>::get_Item(TType t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*>(), { "get_Item", {}, { ::i2c::type_of<TType>() } })));
  return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method, t);
}
template <typename TStateTable, typename TType, typename TState> inline void GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>::set_Item(TType t, TState value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*>(),
                                                                                         { "set_Item", {}, { ::i2c::type_of<TType>(), ::i2c::type_of<TState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t, value);
}
template <typename TStateTable, typename TType, typename TState>
inline ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*
GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>::New_ctor(::GlobalNamespace::IBeatSaberConnectedPlayer* player, int64_t fullStateUpdateFrequency, int64_t deltaUpdateFrequency,
                                                                                   int32_t size, ::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>* interpolator,
                                                                                   ::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>* smoother) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*>(player, fullStateUpdateFrequency, deltaUpdateFrequency, size,
                                                                                                                                       interpolator, smoother));
}
// Ctor Parameters []
template <typename TStateTable, typename TType, typename TState> constexpr ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>::LocalMultiplayerSyncState_3() {}
