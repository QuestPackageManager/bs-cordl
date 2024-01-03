#pragma once
#include "GlobalNamespace/zzzz__AsyncCachedLoader_2_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AsyncCachedLoader_2_def.hpp"
#include "GlobalNamespace/zzzz__AsyncCachedLoader_2_def.hpp"
#include "GlobalNamespace/zzzz__HMCache_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
template <typename TKey, typename TValue>
inline void GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask<TKey, TValue>::_ctor(TKey keyId, ::System::Threading::Tasks::TaskCompletionSource_1<TValue>* taskCompletionSource,
                                                                                       ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask<TKey, TValue>>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCompletionSource_1<TValue>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyId, taskCompletionSource, cancellationToken);
}
// Ctor Parameters [CppParam { name: "keyId", ty: "TKey", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "taskCompletionSource", ty:
// "::System::Threading::Tasks::TaskCompletionSource_1<TValue>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
// modifiers: "", def_value: Some("{}") }]
template <typename TKey, typename TValue>
constexpr ::GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask<TKey, TValue>::__AsyncCachedLoader_2__ScheduledTask(TKey keyId,
                                                                                                                      ::System::Threading::Tasks::TaskCompletionSource_1<TValue>* taskCompletionSource,
                                                                                                                      ::System::Threading::CancellationToken cancellationToken) noexcept {
  this->keyId = keyId;
  this->taskCompletionSource = taskCompletionSource;
  this->cancellationToken = cancellationToken;
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask<TKey, TValue>::__AsyncCachedLoader_2__ScheduledTask() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TKey, typename TValue> constexpr GlobalNamespace::__AsyncCachedLoader_2___LoadAsync_d__7<TKey, TValue>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TKey, typename TValue>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__AsyncCachedLoader_2___LoadAsync_d__7<TKey, TValue>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename TKey, typename TValue> inline void GlobalNamespace::__AsyncCachedLoader_2___LoadAsync_d__7<TKey, TValue>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncCachedLoader_2___LoadAsync_d__7<TKey, TValue>>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline void GlobalNamespace::__AsyncCachedLoader_2___LoadAsync_d__7<TKey, TValue>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncCachedLoader_2___LoadAsync_d__7<TKey, TValue>>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TValue>", modifiers: "", def_value: Some("{}") }, CppParam { name: "keyId", ty: "TKey", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::AsyncCachedLoader_2<TKey,TValue>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<TValue>",
// modifiers: "", def_value: Some("{}") }]
template <typename TKey, typename TValue>
constexpr ::GlobalNamespace::__AsyncCachedLoader_2___LoadAsync_d__7<TKey, TValue>::__AsyncCachedLoader_2___LoadAsync_d__7(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TValue> __t__builder, TKey keyId, ::System::Threading::CancellationToken cancellationToken,
    ::GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<TValue> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->keyId = keyId;
  this->cancellationToken = cancellationToken;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::GlobalNamespace::__AsyncCachedLoader_2___LoadAsync_d__7<TKey, TValue>::__AsyncCachedLoader_2___LoadAsync_d__7() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TKey, typename TValue> constexpr GlobalNamespace::__AsyncCachedLoader_2___LoadAllAsync_d__8<TKey, TValue>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TKey, typename TValue>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__AsyncCachedLoader_2___LoadAllAsync_d__8<TKey, TValue>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename TKey, typename TValue> inline void GlobalNamespace::__AsyncCachedLoader_2___LoadAllAsync_d__8<TKey, TValue>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncCachedLoader_2___LoadAllAsync_d__8<TKey, TValue>>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline void GlobalNamespace::__AsyncCachedLoader_2___LoadAllAsync_d__8<TKey, TValue>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncCachedLoader_2___LoadAllAsync_d__8<TKey, TValue>>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::AsyncCachedLoader_2<TKey,TValue>*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_scheduledTask_5__2", ty: "::GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask<TKey,TValue>", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<TValue>", modifiers: "", def_value: Some("{}") }]
template <typename TKey, typename TValue>
constexpr ::GlobalNamespace::__AsyncCachedLoader_2___LoadAllAsync_d__8<TKey, TValue>::__AsyncCachedLoader_2___LoadAllAsync_d__8(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>* __4__this,
    ::GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask<TKey, TValue> _scheduledTask_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<TValue> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_scheduledTask_5__2 = _scheduledTask_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::GlobalNamespace::__AsyncCachedLoader_2___LoadAllAsync_d__8<TKey, TValue>::__AsyncCachedLoader_2___LoadAllAsync_d__8() {}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask<TKey, TValue>>*&
GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>::__get__scheduledTaskList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scheduledTaskList;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask<TKey, TValue>>*> const&
GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>::__get__scheduledTaskList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scheduledTaskList;
}
template <typename TKey, typename TValue>
constexpr void
GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>::__set__scheduledTaskList(::System::Collections::Generic::List_1<::GlobalNamespace::__AsyncCachedLoader_2__ScheduledTask<TKey, TValue>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scheduledTaskList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> constexpr ::GlobalNamespace::HMCache_2<TKey, TValue>*& GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>::__get__cache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cache;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HMCache_2<TKey, TValue>*> const& GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>::__get__cache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cache;
}
template <typename TKey, typename TValue> constexpr void GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>::__set__cache(::GlobalNamespace::HMCache_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue>
constexpr ::System::Func_3<TKey, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<TValue>*>*& GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>::__get__resultValueFunc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultValueFunc;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Func_3<TKey, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<TValue>*>*> const&
GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>::__get__resultValueFunc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultValueFunc;
}
template <typename TKey, typename TValue>
constexpr void
GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>::__set__resultValueFunc(::System::Func_3<TKey, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<TValue>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resultValueFunc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> constexpr bool& GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>::__get__isLoading() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isLoading;
}
template <typename TKey, typename TValue> constexpr bool const& GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>::__get__isLoading() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isLoading;
}
template <typename TKey, typename TValue> constexpr void GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>::__set__isLoading(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isLoading = value;
}
template <typename TKey, typename TValue> inline void GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>::ClearCache() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>*>::get(),
                                                                             "ClearCache", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>*
GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>::New_ctor(int32_t maxNumberCachedElements,
                                                             ::System::Func_3<TKey, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<TValue>*>* resultValueFunc) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>*>(maxNumberCachedElements, resultValueFunc));
}
template <typename TKey, typename TValue>
inline void GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>::_ctor(int32_t maxNumberCachedElements,
                                                                      ::System::Func_3<TKey, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<TValue>*>* resultValueFunc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<TKey, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<TValue>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxNumberCachedElements, resultValueFunc);
}
template <typename TKey, typename TValue>
inline ::System::Threading::Tasks::Task_1<TValue>* GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>::LoadAsync(TKey keyId, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>*>::get(), "LoadAsync", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TValue>*, false>(this, ___internal_method, keyId, cancellationToken);
}
template <typename TKey, typename TValue> inline void GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>::LoadAllAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>*>::get(),
                                                                             "LoadAllAsync", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::GlobalNamespace::AsyncCachedLoader_2<TKey, TValue>::AsyncCachedLoader_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
