#pragma once
// IWYU pragma private; include "System\Runtime\CompilerServices\TaskAwaiter_1.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
template <typename TResult> inline void System::Runtime::CompilerServices::TaskAwaiter_1<TResult>::_ctor(::System::Threading::Tasks::Task_1<TResult>* task) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TaskAwaiter_1<TResult>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Threading::Tasks::Task_1<TResult>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, task);
}
template <typename TResult> inline bool System::Runtime::CompilerServices::TaskAwaiter_1<TResult>::get_IsCompleted() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TaskAwaiter_1<TResult>>(), { "get_IsCompleted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename TResult> inline void System::Runtime::CompilerServices::TaskAwaiter_1<TResult>::OnCompleted(::System::Action* continuation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TaskAwaiter_1<TResult>>(), { "OnCompleted", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
template <typename TResult> inline void System::Runtime::CompilerServices::TaskAwaiter_1<TResult>::UnsafeOnCompleted(::System::Action* continuation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TaskAwaiter_1<TResult>>(), { "UnsafeOnCompleted", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
template <typename TResult> inline TResult System::Runtime::CompilerServices::TaskAwaiter_1<TResult>::GetResult() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TaskAwaiter_1<TResult>>(), { "GetResult", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TResult>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
template <typename TResult> constexpr System::Runtime::CompilerServices::TaskAwaiter_1<TResult>::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() {
  return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
template <typename TResult>
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*
System::Runtime::CompilerServices::TaskAwaiter_1<TResult>::i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() {
  return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
template <typename TResult> constexpr System::Runtime::CompilerServices::TaskAwaiter_1<TResult>::operator ::System::Runtime::CompilerServices::INotifyCompletion*() {
  return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
template <typename TResult>
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* System::Runtime::CompilerServices::TaskAwaiter_1<TResult>::i___System__Runtime__CompilerServices__INotifyCompletion() {
  return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<TResult>*", modifiers: "", def_value: Some("{}") }]
template <typename TResult> constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<TResult>::TaskAwaiter_1(::System::Threading::Tasks::Task_1<TResult>* m_task) noexcept {
  this->m_task = m_task;
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<TResult>::TaskAwaiter_1() {}
