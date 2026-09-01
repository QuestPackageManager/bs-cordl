#pragma once
// IWYU pragma private; include "GlobalNamespace\StateBuffer_3.hpp"
#include "GlobalNamespace/zzzz__SyncStateId_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__IEquatableByReference_1_def.hpp"
#include "GlobalNamespace/zzzz__StateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__SyncStateId_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TStateTable, typename TType, typename TState>
inline bool
GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>::Equals(::by_ref<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>>(),
                                                           { "Equals", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template <typename TStateTable, typename TType, typename TState>
inline void GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>::_ctor(::GlobalNamespace::SyncStateId id, int64_t time, TStateTable state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::SyncStateId>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<TStateTable>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id, time, state);
}
template <typename TStateTable, typename TType, typename TState> inline void GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>::_ctor(int64_t time, TStateTable state) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<TStateTable>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, time, state);
}
template <typename TStateTable, typename TType, typename TState>
inline bool GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>::IEquatableByReference_StateBuffer_TStateTable_TType_TState__TimestampedStateTable__Equals(
    ::by_ref<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>>(),
                                                           { "IEquatableByReference<StateBuffer<TStateTable,TType,TState>.TimestampedStateTable>.Equals",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable,TType,TState>>"
template <typename TStateTable, typename TType, typename TState>
constexpr GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>::operator ::GlobalNamespace::IEquatableByReference_1<
    ::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>>*() {
  return static_cast<::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>>*>(
      static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable,TType,TState>>"
template <typename TStateTable, typename TType, typename TState>
constexpr ::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>>*
GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType,
                                                     TState>::i___GlobalNamespace__IEquatableByReference_1___GlobalNamespace__StateBuffer_3_TimestampedStateTable_TStateTable_TType_TState__() {
  return static_cast<::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>>*>(
      static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "id", ty: "::GlobalNamespace::SyncStateId", modifiers: "", def_value: Some("{}") },
// CppParam { name: "time", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "state", ty: "TStateTable", modifiers: "", def_value: Some("{}") }]
template <typename TStateTable, typename TType, typename TState>
constexpr ::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>::StateBuffer_3_TimestampedStateTable(bool isValid, ::GlobalNamespace::SyncStateId id, int64_t time,
                                                                                                                                  TStateTable state) noexcept {
  this->isValid = isValid;
  this->id = id;
  this->time = time;
  this->state = state;
}
// Ctor Parameters []
template <typename TStateTable, typename TType, typename TState> constexpr ::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>::StateBuffer_3_TimestampedStateTable() {}
template <typename TStateTable, typename TType, typename TState>
inline void GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename TStateTable, typename TType, typename TState>
inline TState GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>::Invoke(TState a, int64_t timeA, TState b, int64_t timeB, int64_t time) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method, a, timeA, b, timeB, time);
}
template <typename TStateTable, typename TType, typename TState>
inline ::System::IAsyncResult* GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>::BeginInvoke(TState a, int64_t timeA, TState b, int64_t timeB, int64_t time,
                                                                                                                             ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, a, timeA, b, timeB, time, callback, object);
}
template <typename TStateTable, typename TType, typename TState>
inline TState GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method, result);
}
template <typename TStateTable, typename TType, typename TState>
inline ::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>*
GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>*>(object, method));
}
// Ctor Parameters []
template <typename TStateTable, typename TType, typename TState> constexpr ::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>::StateBuffer_3_InterpolationDelegate() {}
template <typename TStateTable, typename TType, typename TState>
inline void GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename TStateTable, typename TType, typename TState>
inline TState GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>::Invoke(TState a, TState b, float_t smooth) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method, a, b, smooth);
}
template <typename TStateTable, typename TType, typename TState>
inline ::System::IAsyncResult* GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>::BeginInvoke(TState a, TState b, float_t smooth, ::System::AsyncCallback* callback,
                                                                                                                         ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, a, b, smooth, callback, object);
}
template <typename TStateTable, typename TType, typename TState> inline TState GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method, result);
}
template <typename TStateTable, typename TType, typename TState>
inline ::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>* GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>::New_ctor(::System::Object* object,
                                                                                                                                                                              ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>*>(object, method));
}
// Ctor Parameters []
template <typename TStateTable, typename TType, typename TState> constexpr ::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>::StateBuffer_3_SmoothingDelegate() {}
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
constexpr ::ArrayW<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>>& GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::ArrayW<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>> const&
GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
template <typename TStateTable, typename TType, typename TState>
constexpr void
GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::__cordl_internal_set__buffer(::ArrayW<::GlobalNamespace::StateBuffer_3_TimestampedStateTable<TStateTable, TType, TState>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buffer = value;
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>*& GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__interpolator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____interpolator;
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>* const&
GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__interpolator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____interpolator;
}
template <typename TStateTable, typename TType, typename TState>
constexpr void
GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::__cordl_internal_set__interpolator(::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____interpolator = value;
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>*& GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__smoother() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smoother;
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>* const& GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::__cordl_internal_get__smoother() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smoother;
}
template <typename TStateTable, typename TType, typename TState>
constexpr void GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::__cordl_internal_set__smoother(::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____smoother = value;
}
template <typename TStateTable, typename TType, typename TState>
inline void GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::_ctor(int32_t size, ::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>* interpolator,
                                                                              ::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>* smoother) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>*>(),
                                                               ::i2c::type_of<::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size, interpolator, smoother);
}
template <typename TStateTable, typename TType, typename TState> inline int32_t GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::GetPreviousIndex(int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>*>(), { "GetPreviousIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, offset);
}
template <typename TStateTable, typename TType, typename TState> inline void GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::InsertState(::by_ref<TStateTable> state, int64_t time) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>*>(),
                                                                                         { "InsertState", {}, { ::i2c::type_of<::by_ref<TStateTable>>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, time);
}
template <typename TStateTable, typename TType, typename TState> inline TState GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::GetState(TType type, int64_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>*>(), { "GetState", {}, { ::i2c::type_of<TType>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method, type, time);
}
template <typename TStateTable, typename TType, typename TState> inline TState GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::GetLatestState(TType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>*>(), { "GetLatestState", {}, { ::i2c::type_of<TType>() } })));
  return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method, type);
}
template <typename TStateTable, typename TType, typename TState> inline int64_t GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::GetLatestTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>*>(), { "GetLatestTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState> inline void GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::Clear() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState>
inline ::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>*
GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::New_ctor(int32_t size, ::GlobalNamespace::StateBuffer_3_InterpolationDelegate<TStateTable, TType, TState>* interpolator,
                                                                     ::GlobalNamespace::StateBuffer_3_SmoothingDelegate<TStateTable, TType, TState>* smoother) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>*>(size, interpolator, smoother));
}
// Ctor Parameters []
template <typename TStateTable, typename TType, typename TState> constexpr ::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::StateBuffer_3() {}
