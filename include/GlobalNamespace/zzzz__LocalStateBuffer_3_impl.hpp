#pragma once
#include "GlobalNamespace/zzzz__StateBuffer_3_impl.hpp"
#include "GlobalNamespace/zzzz__SyncStateId_impl.hpp"
#include "GlobalNamespace/zzzz__LocalStateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__StateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__SyncStateId_def.hpp"
template <typename TStateTable, typename TType, typename TState>
constexpr ::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>& GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState> const&
GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
template <typename TStateTable, typename TType, typename TState>
constexpr void
GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_set__current(::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState> value) {
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
constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>,
                   ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*>&
GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__sentStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sentStates;
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>,
                   ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*> const&
GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__sentStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sentStates;
}
template <typename TStateTable, typename TType, typename TState>
constexpr void GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_set__sentStates(
    ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>, ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sentStates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>,
                   ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*>&
GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__sentDeltas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sentDeltas;
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>,
                   ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*> const&
GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__sentDeltas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sentDeltas;
}
template <typename TStateTable, typename TType, typename TState>
constexpr void GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::__cordl_internal_set__sentDeltas(
    ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>, ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sentDeltas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
/// @param smoother: ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable,TType,TState>* (default: nullptr)
template <typename TStateTable, typename TType, typename TState>
inline ::GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>*
GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::New_ctor(int64_t fullStateUpdateFrequency, int64_t deltaUpdateFrequency, int32_t size,
                                                                          ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>* interpolator,
                                                                          ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>* smoother) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>*>(fullStateUpdateFrequency, deltaUpdateFrequency, size, interpolator, smoother));
}
/// @param smoother: ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable,TType,TState>* (default: nullptr)
template <typename TStateTable, typename TType, typename TState>
inline void GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::_ctor(int64_t fullStateUpdateFrequency, int64_t deltaUpdateFrequency, int32_t size,
                                                                                   ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>* interpolator,
                                                                                   ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>* smoother) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fullStateUpdateFrequency, deltaUpdateFrequency, size, interpolator, smoother);
}
template <typename TStateTable, typename TType, typename TState> inline void GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::Clear() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState> inline void GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::MarkDirty() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>*>::get(), "MarkDirty",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState>
inline bool GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::TryGetSerializedState(ByRef<TStateTable> state, ByRef<int64_t> time, ByRef<::GlobalNamespace::SyncStateId> id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>*>::get(),
                                               "TryGetSerializedState", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TStateTable>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::SyncStateId>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, state, time, id);
}
template <typename TStateTable, typename TType, typename TState>
inline bool GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::TryGetSerializedStateDelta(ByRef<TStateTable> delta, ByRef<int32_t> timeOffset,
                                                                                                        ByRef<::GlobalNamespace::SyncStateId> baseId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>*>::get(),
                                               "TryGetSerializedStateDelta", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TStateTable>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::SyncStateId>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, delta, timeOffset, baseId);
}
template <typename TStateTable, typename TType, typename TState> inline void GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::SetTime(int64_t time) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>*>::get(), "SetTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time);
}
template <typename TStateTable, typename TType, typename TState> inline void GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::SetState(TType type, TState state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>*>::get(), "SetState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, state);
}
template <typename TStateTable, typename TType, typename TState> inline TState GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::GetState(TType type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>*>::get(), "GetState",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get() })));
  return ::cordl_internals::RunMethodRethrow<TState, false>(this, ___internal_method, type);
}
// Ctor Parameters []
template <typename TStateTable, typename TType, typename TState> constexpr ::GlobalNamespace::LocalStateBuffer_3<TStateTable, TType, TState>::LocalStateBuffer_3() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
