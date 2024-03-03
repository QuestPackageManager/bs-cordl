#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TaskExtensions_def.hpp"
#include "GlobalNamespace/zzzz__TaskExtensions_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
template <typename T> constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>*& GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<T>::__cordl_internal_get_tcs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcs;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<T>*> const&
GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<T>::__cordl_internal_get_tcs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcs;
}
template <typename T> constexpr void GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<T>::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tcs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Threading::CancellationToken& GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<T>::__cordl_internal_get_cancellationToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancellationToken;
}
template <typename T> constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<T>::__cordl_internal_get_cancellationToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancellationToken;
}
template <typename T> constexpr void GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<T>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cancellationToken = value;
}
template <typename T> inline ::GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<T>* GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<T>*>());
}
template <typename T> inline void GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<T>::_WithCancellation_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<T>*>::get(), "<WithCancellation>b__0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<T>::__TaskExtensions____c__DisplayClass0_0_1() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename T> inline void GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "tcs", ty: "::System::Threading::Tasks::TaskCompletionSource_1<T>*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__7__wrap1", ty:
// "::System::Threading::Tasks::TaskCompletionSource_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<T>",
// modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>::__TaskExtensions___WaitForTask_d__1_1(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::System::Threading::Tasks::TaskCompletionSource_1<T>* tcs,
    ::System::Threading::Tasks::Task_1<T>* task, ::System::Threading::Tasks::TaskCompletionSource_1<T>* __7__wrap1, ::System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->tcs = tcs;
  this->task = task;
  this->__7__wrap1 = __7__wrap1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>::__TaskExtensions___WaitForTask_d__1_1() {}
template <typename T>
inline ::System::Threading::Tasks::Task_1<T>* GlobalNamespace::TaskExtensions::WithCancellation(::System::Threading::Tasks::Task_1<T>* task, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TaskExtensions*>::get(), "WithCancellation",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<T>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(nullptr, ___internal_method, task, cancellationToken);
}
template <typename T> inline void GlobalNamespace::TaskExtensions::WaitForTask(::System::Threading::Tasks::Task_1<T>* task, ::System::Threading::Tasks::TaskCompletionSource_1<T>* tcs) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TaskExtensions*>::get(), "WaitForTask",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<T>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCompletionSource_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, task, tcs);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TaskExtensions::TaskExtensions() {}
