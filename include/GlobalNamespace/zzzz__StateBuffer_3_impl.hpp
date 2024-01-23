#pragma once
#include "GlobalNamespace/zzzz__SyncStateId_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__IEquatableByReference_1_def.hpp"
#include "GlobalNamespace/zzzz__StateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__SyncStateId_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable,TType,TState>>"
template <typename TStateTable, typename TType, typename TState>
constexpr GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>::operator ::GlobalNamespace::IEquatableByReference_1<
    ::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*() {
  return static_cast<::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable,TType,TState>>"
template <typename TStateTable, typename TType, typename TState>
constexpr ::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*
GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType,
                                                        TState>::i___GlobalNamespace__IEquatableByReference_1___GlobalNamespace____StateBuffer_3__TimestampedStateTable_TStateTable_TType_TState__() {
  return static_cast<::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename TStateTable, typename TType, typename TState>
inline bool
GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>::Equals(ByRef<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>::get(), "Equals",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
template <typename TStateTable, typename TType, typename TState>
inline void GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>::_ctor(::GlobalNamespace::SyncStateId id, int64_t time, TStateTable state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SyncStateId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TStateTable>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, time, state);
}
template <typename TStateTable, typename TType, typename TState>
inline void GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>::_ctor(int64_t time, TStateTable state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TStateTable>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time, state);
}
template <typename TStateTable, typename TType, typename TState>
inline bool GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>::IEquatableByReference_StateBuffer_TStateTable_TType_TState__TimestampedStateTable__Equals(
    ByRef<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>::get(),
                                  "IEquatableByReference<StateBuffer<TStateTable,TType,TState>.TimestampedStateTable>.Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "id", ty: "::GlobalNamespace::SyncStateId", modifiers: "", def_value: Some("{}") },
// CppParam { name: "time", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "state", ty: "TStateTable", modifiers: "", def_value: Some("nullptr") }]
template <typename TStateTable, typename TType, typename TState>
constexpr ::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>::__StateBuffer_3__TimestampedStateTable(bool isValid, ::GlobalNamespace::SyncStateId id, int64_t time,
                                                                                                                                        TStateTable state) noexcept {
  this->isValid = isValid;
  this->id = id;
  this->time = time;
  this->state = state;
}
// Ctor Parameters []
template <typename TStateTable, typename TType, typename TState>
constexpr ::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>::__StateBuffer_3__TimestampedStateTable() {}
template <typename TStateTable, typename TType, typename TState>
inline ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>*
GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>*>(object, method));
}
template <typename TStateTable, typename TType, typename TState>
inline void GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename TStateTable, typename TType, typename TState>
inline TState GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>::Invoke(TState a, int64_t timeA, TState b, int64_t timeB, int64_t time) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<TState, false>(this, ___internal_method, a, timeA, b, timeB, time);
}
template <typename TStateTable, typename TType, typename TState>
inline ::System::IAsyncResult* GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>::BeginInvoke(TState a, int64_t timeA, TState b, int64_t timeB, int64_t time,
                                                                                                                                ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, a, timeA, b, timeB, time, callback, object);
}
template <typename TStateTable, typename TType, typename TState>
inline TState GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<TState, false>(this, ___internal_method, result);
}
// Ctor Parameters []
template <typename TStateTable, typename TType, typename TState>
constexpr ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>::__StateBuffer_3__InterpolationDelegate() {}
template <typename TStateTable, typename TType, typename TState>
inline ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>*
GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>*>(object, method));
}
template <typename TStateTable, typename TType, typename TState>
inline void GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename TStateTable, typename TType, typename TState>
inline TState GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>::Invoke(TState a, TState b, float_t smooth) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<TState, false>(this, ___internal_method, a, b, smooth);
}
template <typename TStateTable, typename TType, typename TState>
inline ::System::IAsyncResult* GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>::BeginInvoke(TState a, TState b, float_t smooth, ::System::AsyncCallback* callback,
                                                                                                                            ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, a, b, smooth, callback, object);
}
template <typename TStateTable, typename TType, typename TState>
inline TState GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<TState, false>(this, ___internal_method, result);
}
// Ctor Parameters []
template <typename TStateTable, typename TType, typename TState> constexpr ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>::__StateBuffer_3__SmoothingDelegate() {}
template <typename TStateTable, typename TType, typename TState> constexpr int32_t& GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__currentIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentIndex;
}
template <typename TStateTable, typename TType, typename TState> constexpr int32_t const& GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__currentIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentIndex;
}
template <typename TStateTable, typename TType, typename TState> constexpr void GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::__cordl_internal_set__currentIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentIndex = value;
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>,
                   ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*>&
GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>,
                   ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*> const&
GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
template <typename TStateTable, typename TType, typename TState>
constexpr void GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::__cordl_internal_set__buffer(
    ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>, ::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<TStateTable, TType, TState>>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>*& GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__interpolator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____interpolator;
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>*> const&
GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__interpolator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____interpolator;
}
template <typename TStateTable, typename TType, typename TState>
constexpr void
GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::__cordl_internal_set__interpolator(::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____interpolator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>*& GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__smoother() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smoother;
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>*> const&
GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__smoother() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smoother;
}
template <typename TStateTable, typename TType, typename TState>
constexpr void GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::__cordl_internal_set__smoother(::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____smoother)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
/// @param smoother: ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable,TType,TState>* (default: nullptr)
template <typename TStateTable, typename TType, typename TState>
inline ::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>*
GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::New_ctor(int32_t size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>* interpolator,
                                                                     ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>* smoother) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>*>(size, interpolator, smoother));
}
/// @param smoother: ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable,TType,TState>* (default: nullptr)
template <typename TStateTable, typename TType, typename TState>
inline void GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::_ctor(int32_t size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>* interpolator,
                                                                              ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>* smoother) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, size, interpolator, smoother);
}
template <typename TStateTable, typename TType, typename TState> inline int32_t GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::GetPreviousIndex(int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>*>::get(), "GetPreviousIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, offset);
}
template <typename TStateTable, typename TType, typename TState> inline void GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::InsertState(ByRef<TStateTable> state, int64_t time) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>*>::get(), "InsertState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TStateTable>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, time);
}
template <typename TStateTable, typename TType, typename TState> inline TState GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::GetState(TType type, int64_t time) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>*>::get(), "GetState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<TState, false>(this, ___internal_method, type, time);
}
template <typename TStateTable, typename TType, typename TState> inline TState GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::GetLatestState(TType type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>*>::get(), "GetLatestState",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get() })));
  return ::cordl_internals::RunMethodRethrow<TState, false>(this, ___internal_method, type);
}
template <typename TStateTable, typename TType, typename TState> inline int64_t GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::GetLatestTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>*>::get(), "GetLatestTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState> inline void GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::Clear() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TStateTable, typename TType, typename TState> constexpr ::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::StateBuffer_3() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
