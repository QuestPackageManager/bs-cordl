#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTaskBuilder_1.hpp"
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
  ::cordl_internals::setInstanceField(this, &this->___MoveNext, value);
}
template <typename T> inline void GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>::Dispose() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>* GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>*>());
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
  ::cordl_internals::setInstanceField(this, &this->___StateMachine, value);
}
template <typename T, typename TStateMachine>
inline ::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>* GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>::Get() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>*>::get(), "Get",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>*, false>(nullptr, ___internal_method);
}
template <typename T, typename TStateMachine> inline void GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>::Dispose() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T, typename TStateMachine> inline void GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T, typename TStateMachine> inline void GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>::ExecuteMoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>*>::get(),
                                               "ExecuteMoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T, typename TStateMachine> inline void GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>::OVRObjectPool_IPoolObject_OnGet() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>*>::get(),
                                               "OVRObjectPool.IPoolObject.OnGet", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T, typename TStateMachine> inline void GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>::OVRObjectPool_IPoolObject_OnReturn() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>*>::get(),
                                               "OVRObjectPool.IPoolObject.OnReturn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T, typename TStateMachine>
inline ::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>* GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine_1<T, TStateMachine>*>());
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTaskBuilder_1<T>>::get(), "get_Task",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<T>, false>(this, ___internal_method);
}
template <typename T>
template <typename TAwaiter, typename TStateMachine>
inline void GlobalNamespace::OVRTaskBuilder_1<T>::AwaitOnCompleted(::ByRef<TAwaiter> awaiter, ::ByRef<TStateMachine> stateMachine) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTaskBuilder_1<T>>::get(), "AwaitOnCompleted",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAwaiter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TAwaiter>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TStateMachine>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAwaiter>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, awaiter, stateMachine);
}
template <typename T>
template <typename TAwaiter, typename TStateMachine>
inline void GlobalNamespace::OVRTaskBuilder_1<T>::AwaitUnsafeOnCompleted(::ByRef<TAwaiter> awaiter, ::ByRef<TStateMachine> stateMachine) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTaskBuilder_1<T>>::get(), "AwaitUnsafeOnCompleted",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAwaiter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TAwaiter>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TStateMachine>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAwaiter>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, awaiter, stateMachine);
}
template <typename T> template <typename TStateMachine> inline void GlobalNamespace::OVRTaskBuilder_1<T>::Start(::ByRef<TStateMachine> stateMachine) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTaskBuilder_1<T>>::get(), "Start",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TStateMachine>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
template <typename T> inline ::GlobalNamespace::OVRTaskBuilder_1<T> GlobalNamespace::OVRTaskBuilder_1<T>::Create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTaskBuilder_1<T>>::get(), "Create",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTaskBuilder_1<T>, false>(nullptr, ___internal_method);
}
template <typename T> template <typename TStateMachine> inline ::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>* GlobalNamespace::OVRTaskBuilder_1<T>::GetPooledStateMachine() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTaskBuilder_1<T>>::get(), "GetPooledStateMachine",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get() }));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTaskBuilder_1_PooledStateMachine<T>*, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::OVRTaskBuilder_1<T>::SetException(::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTaskBuilder_1<T>>::get(), "SetException", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception);
}
template <typename T> inline void GlobalNamespace::OVRTaskBuilder_1<T>::SetResult(T result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTaskBuilder_1<T>>::get(), "SetResult",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
template <typename T> inline void GlobalNamespace::OVRTaskBuilder_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTaskBuilder_1<T>>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
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
