#pragma once
// IWYU pragma private; include "System\Runtime\CompilerServices\ConfiguredTaskAwaitable_1.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
template <typename TResult>
inline void System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<TResult>::_ctor(::System::Threading::Tasks::Task_1<TResult>* task, bool continueOnCapturedContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<TResult>>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Threading::Tasks::Task_1<TResult>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, task, continueOnCapturedContext);
}
template <typename TResult> inline bool System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<TResult>::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<TResult>>(), { "get_IsCompleted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename TResult> inline void System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<TResult>::OnCompleted(::System::Action* continuation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<TResult>>(),
                                                           { "OnCompleted", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
template <typename TResult> inline void System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<TResult>::UnsafeOnCompleted(::System::Action* continuation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<TResult>>(),
                                                           { "UnsafeOnCompleted", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
template <typename TResult> inline TResult System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<TResult>::GetResult() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<TResult>>(), { "GetResult", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TResult>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
template <typename TResult>
constexpr System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<TResult>::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() {
  return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
template <typename TResult>
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*
System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<TResult>::i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() {
  return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
template <typename TResult> constexpr System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<TResult>::operator ::System::Runtime::CompilerServices::INotifyCompletion*() {
  return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
template <typename TResult>
constexpr ::System::Runtime::CompilerServices::INotifyCompletion*
System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<TResult>::i___System__Runtime__CompilerServices__INotifyCompletion() {
  return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<TResult>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_continueOnCapturedContext", ty: "bool",
// modifiers: "", def_value: Some("{}") }]
template <typename TResult>
constexpr ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<TResult>::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter(
    ::System::Threading::Tasks::Task_1<TResult>* m_task, bool m_continueOnCapturedContext) noexcept {
  this->m_task = m_task;
  this->m_continueOnCapturedContext = m_continueOnCapturedContext;
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<TResult>::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter() {}
template <typename TResult>
inline void System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>::_ctor(::System::Threading::Tasks::Task_1<TResult>* task, bool continueOnCapturedContext) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Threading::Tasks::Task_1<TResult>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, task, continueOnCapturedContext);
}
template <typename TResult>
inline ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<TResult> System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>::GetAwaiter() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>>(), { "GetAwaiter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<TResult>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<TResult>", modifiers: "", def_value:
// Some("{}") }]
template <typename TResult>
constexpr ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>::ConfiguredTaskAwaitable_1(
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<TResult> m_configuredTaskAwaiter) noexcept {
  this->m_configuredTaskAwaiter = m_configuredTaskAwaiter;
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>::ConfiguredTaskAwaitable_1() {}
