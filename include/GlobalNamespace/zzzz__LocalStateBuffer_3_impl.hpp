#pragma once
// IWYU pragma private; include "GlobalNamespace\LocalStateBuffer_3.hpp"
#include "GlobalNamespace/zzzz__StateBuffer_3_impl.hpp"
#include "GlobalNamespace/zzzz__SyncStateId_impl.hpp"
#include "GlobalNamespace/zzzz__LocalStateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__StateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__SyncStateId_def.hpp"
template <typename TStateTable, typename TType, typename TState>
constexpr ::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>& GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState> const&
GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
template <typename TStateTable, typename TType, typename TState>
constexpr void
GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_set__current(::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____current = value;
}
template <typename TStateTable, typename TType, typename TState> constexpr int64_t& GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__fullStateUpdateFrequency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullStateUpdateFrequency;
}
template <typename TStateTable, typename TType, typename TState>
constexpr int64_t const& GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__fullStateUpdateFrequency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullStateUpdateFrequency;
}
template <typename TStateTable, typename TType, typename TState>
constexpr void GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_set__fullStateUpdateFrequency(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fullStateUpdateFrequency = value;
}
template <typename TStateTable, typename TType, typename TState> constexpr int64_t& GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__deltaUpdateFrequency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deltaUpdateFrequency;
}
template <typename TStateTable, typename TType, typename TState>
constexpr int64_t const& GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__deltaUpdateFrequency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deltaUpdateFrequency;
}
template <typename TStateTable, typename TType, typename TState>
constexpr void GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_set__deltaUpdateFrequency(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____deltaUpdateFrequency = value;
}
template <typename TStateTable, typename TType, typename TState> constexpr int32_t& GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__sentStateIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sentStateIndex;
}
template <typename TStateTable, typename TType, typename TState>
constexpr int32_t const& GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__sentStateIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sentStateIndex;
}
template <typename TStateTable, typename TType, typename TState> constexpr void GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_set__sentStateIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sentStateIndex = value;
}
template <typename TStateTable, typename TType, typename TState> constexpr int32_t& GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__sentDeltaIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sentDeltaIndex;
}
template <typename TStateTable, typename TType, typename TState>
constexpr int32_t const& GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__sentDeltaIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sentDeltaIndex;
}
template <typename TStateTable, typename TType, typename TState> constexpr void GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_set__sentDeltaIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sentDeltaIndex = value;
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::ArrayW<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>>&
GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__sentStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sentStates;
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::ArrayW<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>> const&
GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__sentStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sentStates;
}
template <typename TStateTable, typename TType, typename TState>
constexpr void
GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_set__sentStates(::ArrayW<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sentStates = value;
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::ArrayW<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>>&
GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__sentDeltas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sentDeltas;
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::ArrayW<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>> const&
GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__sentDeltas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sentDeltas;
}
template <typename TStateTable, typename TType, typename TState>
constexpr void
GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_set__sentDeltas(::ArrayW<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sentDeltas = value;
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::GlobalNamespace::SyncStateId& GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__lastSentSyncStateId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSentSyncStateId;
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::GlobalNamespace::SyncStateId const& GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__lastSentSyncStateId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSentSyncStateId;
}
template <typename TStateTable, typename TType, typename TState>
constexpr void GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_set__lastSentSyncStateId(::GlobalNamespace::SyncStateId value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastSentSyncStateId = value;
}
template <typename TStateTable, typename TType, typename TState>
inline void GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::_ctor(int64_t fullStateUpdateFrequency, int64_t deltaUpdateFrequency, int32_t size,
                                                                                   ::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>* interpolator,
                                                                                   ::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>* smoother) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>*>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fullStateUpdateFrequency, deltaUpdateFrequency, size, interpolator, smoother);
}
template <typename TStateTable, typename TType, typename TState> inline void GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::Clear() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState> inline void GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::MarkDirty() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>*>(), { "MarkDirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState>
inline bool GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::TryGetSerializedState(::by_ref<TStateTable> state, ::by_ref<int64_t> time, ::by_ref<::GlobalNamespace::SyncStateId> id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>*>(),
                       { "TryGetSerializedState", {}, { ::i2c::type_of<::by_ref<TStateTable>>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SyncStateId>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state, time, id);
}
template <typename TStateTable, typename TType, typename TState>
inline bool GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::TryGetSerializedStateDelta(::by_ref<TStateTable> delta, ::by_ref<int32_t> timeOffset,
                                                                                                        ::by_ref<::GlobalNamespace::SyncStateId> baseId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>*>(),
          { "TryGetSerializedStateDelta", {}, { ::i2c::type_of<::by_ref<TStateTable>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SyncStateId>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, delta, timeOffset, baseId);
}
template <typename TStateTable, typename TType, typename TState> inline void GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::SetTime(int64_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>*>(), { "SetTime", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
template <typename TStateTable, typename TType, typename TState> inline void GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::SetState(TType type, TState state) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>*>(),
                                                                                         { "SetState", {}, { ::i2c::type_of<TType>(), ::i2c::type_of<TState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, state);
}
template <typename TStateTable, typename TType, typename TState> inline TState GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::GetState(TType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>*>(), { "GetState", {}, { ::i2c::type_of<TType>() } })));
  return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method, type);
}
template <typename TStateTable, typename TType, typename TState>
inline ::GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>*
GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::New_ctor(int64_t fullStateUpdateFrequency, int64_t deltaUpdateFrequency, int32_t size,
                                                                          ::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>* interpolator,
                                                                          ::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>* smoother) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>*>(fullStateUpdateFrequency, deltaUpdateFrequency, size, interpolator, smoother));
}
// Ctor Parameters []
template <typename TStateTable, typename TType, typename TState> constexpr ::GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::LocalStateBuffer_3() {}
