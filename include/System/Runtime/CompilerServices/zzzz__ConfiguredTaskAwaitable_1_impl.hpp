#pragma once
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
template <typename TResult>
constexpr System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() {
  return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
template <typename TResult>
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*
System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>::i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() {
  return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
template <typename TResult>
constexpr System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>::operator ::System::Runtime::CompilerServices::INotifyCompletion*() {
  return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
template <typename TResult>
constexpr ::System::Runtime::CompilerServices::INotifyCompletion*
System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>::i___System__Runtime__CompilerServices__INotifyCompletion() {
  return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename TResult>
inline void System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>::_ctor(::System::Threading::Tasks::Task_1<TResult>* task, bool continueOnCapturedContext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>>::get(),
                                  ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<TResult>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task, continueOnCapturedContext);
}
template <typename TResult> inline bool System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>>::get(),
                                  "get_IsCompleted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TResult> inline void System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>::OnCompleted(::System::Action* continuation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>>::get(),
                                  "OnCompleted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, continuation);
}
template <typename TResult> inline void System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>::UnsafeOnCompleted(::System::Action* continuation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>>::get(), "UnsafeOnCompleted",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, continuation);
}
template <typename TResult> inline TResult System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>::GetResult() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>>::get(),
                                  "GetResult", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<TResult>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_continueOnCapturedContext", ty:
// "bool", modifiers: "", def_value: Some("{}") }]
template <typename TResult>
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(
    ::System::Threading::Tasks::Task_1<TResult>* m_task, bool m_continueOnCapturedContext) noexcept {
  this->m_task = m_task;
  this->m_continueOnCapturedContext = m_continueOnCapturedContext;
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter() {}
template <typename TResult>
inline void System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>::_ctor(::System::Threading::Tasks::Task_1<TResult>* task, bool continueOnCapturedContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<TResult>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task, continueOnCapturedContext);
}
template <typename TResult>
inline ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult> System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>::GetAwaiter() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>>::get(), "GetAwaiter",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>", modifiers: "", def_value:
// Some("{}") }]
template <typename TResult>
constexpr ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>::ConfiguredTaskAwaitable_1(
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult> m_configuredTaskAwaiter) noexcept {
  this->m_configuredTaskAwaiter = m_configuredTaskAwaiter;
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>::ConfiguredTaskAwaitable_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
