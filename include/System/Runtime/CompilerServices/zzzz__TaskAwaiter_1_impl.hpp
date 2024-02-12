#pragma once
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
template <typename TResult> constexpr System::Runtime::CompilerServices::TaskAwaiter_1<TResult>::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() {
  return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
template <typename TResult>
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*
System::Runtime::CompilerServices::TaskAwaiter_1<TResult>::i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() {
  return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename TResult> inline void System::Runtime::CompilerServices::TaskAwaiter_1<TResult>::_ctor(::System::Threading::Tasks::Task_1<TResult>* task) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::TaskAwaiter_1<TResult>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<TResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
template <typename TResult> inline bool System::Runtime::CompilerServices::TaskAwaiter_1<TResult>::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::TaskAwaiter_1<TResult>>::get(),
                                                                             "get_IsCompleted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TResult> inline void System::Runtime::CompilerServices::TaskAwaiter_1<TResult>::UnsafeOnCompleted(::System::Action* continuation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::TaskAwaiter_1<TResult>>::get(), "UnsafeOnCompleted",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, continuation);
}
template <typename TResult> inline TResult System::Runtime::CompilerServices::TaskAwaiter_1<TResult>::GetResult() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::TaskAwaiter_1<TResult>>::get(),
                                                                             "GetResult", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<TResult>*", modifiers: "", def_value: Some("nullptr") }]
template <typename TResult> constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<TResult>::TaskAwaiter_1(::System::Threading::Tasks::Task_1<TResult>* m_task) noexcept {
  this->m_task = m_task;
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<TResult>::TaskAwaiter_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
