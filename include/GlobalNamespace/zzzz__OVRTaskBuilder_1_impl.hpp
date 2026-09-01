#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRTaskBuilder_1.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_def.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template <typename T> constexpr ::System::Nullable_1<::GlobalNamespace::OVRTask_1<T>>& GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>::__cordl_internal_get_Task() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Task;
}
template <typename T> constexpr ::System::Nullable_1<::GlobalNamespace::OVRTask_1<T>> const& GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>::__cordl_internal_get_Task() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Task;
}
template <typename T> constexpr void GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>::__cordl_internal_set_Task(::System::Nullable_1<::GlobalNamespace::OVRTask_1<T>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Task = value;
}
template <typename T> constexpr ::System::Action*& GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>::__cordl_internal_get_MoveNext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MoveNext;
}
template <typename T> constexpr ::System::Action* const& GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>::__cordl_internal_get_MoveNext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MoveNext;
}
template <typename T> constexpr void GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>::__cordl_internal_set_MoveNext(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MoveNext = value;
}
template <typename T> inline void GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>::Dispose() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>* GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>*>());
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>::OVRTaskBuilder_1_PooledStateMachine() {}
template <typename T, typename TStateMachine> constexpr TStateMachine& GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>::__cordl_internal_get_StateMachine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StateMachine;
}
template <typename T, typename TStateMachine> constexpr TStateMachine const& GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>::__cordl_internal_get_StateMachine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StateMachine;
}
template <typename T, typename TStateMachine> constexpr void GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>::__cordl_internal_set_StateMachine(TStateMachine value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___StateMachine = value;
}
template <typename T, typename TStateMachine>
inline ::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>* GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>::Get() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>*>(), { "Get", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>*>(nullptr, ___internal_method);
}
template <typename T, typename TStateMachine> inline void GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>::Dispose() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T, typename TStateMachine> inline void GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T, typename TStateMachine> inline void GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>::ExecuteMoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>*>(), { "ExecuteMoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T, typename TStateMachine> inline void GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>::OVRObjectPool_IPoolObject_OnGet() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>*>(), { "OVRObjectPool.IPoolObject.OnGet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T, typename TStateMachine> inline void GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>::OVRObjectPool_IPoolObject_OnReturn() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>*>(), { "OVRObjectPool.IPoolObject.OnReturn", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T, typename TStateMachine>
inline ::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>* GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>*>());
}
/// @brief Convert operator to "::GlobalNamespace::OVRObjectPool_IPoolObject"
template <typename T, typename TStateMachine> constexpr GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>::operator ::GlobalNamespace::OVRObjectPool_IPoolObject*() noexcept {
  return static_cast<::GlobalNamespace::OVRObjectPool_IPoolObject*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::OVRObjectPool_IPoolObject"
template <typename T, typename TStateMachine>
constexpr ::GlobalNamespace::OVRObjectPool_IPoolObject* GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>::i___GlobalNamespace__OVRObjectPool_IPoolObject() noexcept {
  return static_cast<::GlobalNamespace::OVRObjectPool_IPoolObject*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T, typename TStateMachine> constexpr ::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>::OVRTaskBuilder_1_PooledStateMachine_1() {}
template <typename T> inline ::GlobalNamespace::OVRTask_1<T> GlobalNamespace::OVRTaskBuilder_1<T>::get_Task() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTaskBuilder_1<T>>(), { "get_Task", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<T>>(*this, ___internal_method);
}
template <typename T>
template <typename TAwaiter, typename TStateMachine>
inline void GlobalNamespace::OVRTaskBuilder_1<T>::AwaitOnCompleted(::by_ref<TAwaiter> awaiter, ::by_ref<TStateMachine> stateMachine) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTaskBuilder_1<T>>(), { "AwaitOnCompleted",
                                                                                                           { ::i2c::class_of<TAwaiter>(), ::i2c::class_of<TStateMachine>() },
                                                                                                           { ::i2c::type_of<::by_ref<TAwaiter>>(), ::i2c::type_of<::by_ref<TStateMachine>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TAwaiter>(), ::i2c::class_of<TStateMachine>() })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, awaiter, stateMachine);
}
template <typename T>
template <typename TAwaiter, typename TStateMachine>
inline void GlobalNamespace::OVRTaskBuilder_1<T>::AwaitUnsafeOnCompleted(::by_ref<TAwaiter> awaiter, ::by_ref<TStateMachine> stateMachine) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTaskBuilder_1<T>>(), { "AwaitUnsafeOnCompleted",
                                                                                                           { ::i2c::class_of<TAwaiter>(), ::i2c::class_of<TStateMachine>() },
                                                                                                           { ::i2c::type_of<::by_ref<TAwaiter>>(), ::i2c::type_of<::by_ref<TStateMachine>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TAwaiter>(), ::i2c::class_of<TStateMachine>() })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, awaiter, stateMachine);
}
template <typename T> template <typename TStateMachine> inline void GlobalNamespace::OVRTaskBuilder_1<T>::Start(::by_ref<TStateMachine> stateMachine) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTaskBuilder_1<T>>(), { "Start", { ::i2c::class_of<TStateMachine>() }, { ::i2c::type_of<::by_ref<TStateMachine>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TStateMachine>() })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
template <typename T> inline ::GlobalNamespace::OVRTaskBuilder_1<T> GlobalNamespace::OVRTaskBuilder_1<T>::Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTaskBuilder_1<T>>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTaskBuilder_1<T>>(nullptr, ___internal_method);
}
template <typename T> template <typename TStateMachine> inline ::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>* GlobalNamespace::OVRTaskBuilder_1<T>::GetPooledStateMachine() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTaskBuilder_1<T>>(), { "GetPooledStateMachine", { ::i2c::class_of<TStateMachine>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TStateMachine>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>*>(*this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::OVRTaskBuilder_1<T>::SetException(::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTaskBuilder_1<T>>(), { "SetException", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, exception);
}
template <typename T> inline void GlobalNamespace::OVRTaskBuilder_1<T>::SetResult(T result) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTaskBuilder_1<T>>(), { "SetResult", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, result);
}
template <typename T> inline void GlobalNamespace::OVRTaskBuilder_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTaskBuilder_1<T>>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "_pooledStateMachine", ty: "::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_task", ty:
// "::System::Nullable_1<::GlobalNamespace::OVRTask_1<T>>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::GlobalNamespace::OVRTaskBuilder_1<T>::OVRTaskBuilder_1(::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>* _pooledStateMachine,
                                                                   ::System::Nullable_1<::GlobalNamespace::OVRTask_1<T>> _task) noexcept {
  this->_pooledStateMachine = _pooledStateMachine;
  this->_task = _task;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::OVRTaskBuilder_1<T>::OVRTaskBuilder_1() {}
