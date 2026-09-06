#pragma once
// IWYU pragma private; include "GlobalNamespace/RemoteStateBuffer_3.hpp"
#include "GlobalNamespace/zzzz__StateBuffer_3_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteStateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__StateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__SyncStateId_def.hpp"
template <typename TStateTable, typename TType, typename TState>
constexpr ::ArrayW<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>>&
GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__receivedStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receivedStates;
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::ArrayW<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>> const&
GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__receivedStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receivedStates;
}
template <typename TStateTable, typename TType, typename TState>
constexpr void GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_set__receivedStates(
    ::ArrayW<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____receivedStates = value;
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::ArrayW<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>>&
GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__receivedDeltas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receivedDeltas;
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::ArrayW<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>> const&
GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__receivedDeltas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receivedDeltas;
}
template <typename TStateTable, typename TType, typename TState>
constexpr void GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_set__receivedDeltas(
    ::ArrayW<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____receivedDeltas = value;
}
template <typename TStateTable, typename TType, typename TState> constexpr int32_t& GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__receivedStateIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receivedStateIndex;
}
template <typename TStateTable, typename TType, typename TState>
constexpr int32_t const& GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__receivedStateIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receivedStateIndex;
}
template <typename TStateTable, typename TType, typename TState>
constexpr void GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_set__receivedStateIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____receivedStateIndex = value;
}
template <typename TStateTable, typename TType, typename TState> constexpr int32_t& GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__receivedStateCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receivedStateCount;
}
template <typename TStateTable, typename TType, typename TState>
constexpr int32_t const& GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__receivedStateCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receivedStateCount;
}
template <typename TStateTable, typename TType, typename TState>
constexpr void GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_set__receivedStateCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____receivedStateCount = value;
}
template <typename TStateTable, typename TType, typename TState> constexpr int32_t& GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__receivedDeltaIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receivedDeltaIndex;
}
template <typename TStateTable, typename TType, typename TState>
constexpr int32_t const& GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__receivedDeltaIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receivedDeltaIndex;
}
template <typename TStateTable, typename TType, typename TState>
constexpr void GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_set__receivedDeltaIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____receivedDeltaIndex = value;
}
template <typename TStateTable, typename TType, typename TState> constexpr int32_t& GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__receivedDeltaCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receivedDeltaCount;
}
template <typename TStateTable, typename TType, typename TState>
constexpr int32_t const& GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__receivedDeltaCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receivedDeltaCount;
}
template <typename TStateTable, typename TType, typename TState>
constexpr void GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_set__receivedDeltaCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____receivedDeltaCount = value;
}
template <typename TStateTable, typename TType, typename TState> inline void GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>::Clear() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState>
inline void GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>::PushState(::GlobalNamespace::SyncStateId id, TStateTable state, int64_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>*>(),
                                                           { "PushState", {}, { ::i2c::type_of<::GlobalNamespace::SyncStateId>(), ::i2c::type_of<TStateTable>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, state, time);
}
template <typename TStateTable, typename TType, typename TState>
inline void GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>::PushDelta(::GlobalNamespace::SyncStateId baseId, TStateTable delta, int64_t timeOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>*>(),
                                                           { "PushDelta", {}, { ::i2c::type_of<::GlobalNamespace::SyncStateId>(), ::i2c::type_of<TStateTable>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseId, delta, timeOffset);
}
template <typename TStateTable, typename TType, typename TState> inline void GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>::ProcessQueue() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>*>(), { "ProcessQueue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState>
inline void GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>::_ctor(int32_t size, ::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>* interpolator,
                                                                                    ::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>* smoother) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>*>(),
                                                               ::i2c::type_of<::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size, interpolator, smoother);
}
template <typename TStateTable, typename TType, typename TState>
inline ::GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>*
GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>::New_ctor(int32_t size, ::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>* interpolator,
                                                                           ::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>* smoother) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>*>(size, interpolator, smoother));
}
// Ctor Parameters []
template <typename TStateTable, typename TType, typename TState> constexpr ::GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>::RemoteStateBuffer_3() {}
