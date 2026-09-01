#pragma once
// IWYU pragma private; include "System\Threading\Tasks\TaskCompletionSource_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TResult> constexpr ::System::Threading::Tasks::Task_1<TResult>*& System::Threading::Tasks::TaskCompletionSource_1<TResult>::__cordl_internal_get__task() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____task;
}
template <typename TResult> constexpr ::System::Threading::Tasks::Task_1<TResult>* const& System::Threading::Tasks::TaskCompletionSource_1<TResult>::__cordl_internal_get__task() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____task;
}
template <typename TResult> constexpr void System::Threading::Tasks::TaskCompletionSource_1<TResult>::__cordl_internal_set__task(::System::Threading::Tasks::Task_1<TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____task = value;
}
template <typename TResult> inline void System::Threading::Tasks::TaskCompletionSource_1<TResult>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TResult> inline void System::Threading::Tasks::TaskCompletionSource_1<TResult>::_ctor(::System::Threading::Tasks::TaskCreationOptions creationOptions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, creationOptions);
}
template <typename TResult> inline void System::Threading::Tasks::TaskCompletionSource_1<TResult>::_ctor(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
template <typename TResult> inline void System::Threading::Tasks::TaskCompletionSource_1<TResult>::_ctor(::System::Object* state, ::System::Threading::Tasks::TaskCreationOptions creationOptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, creationOptions);
}
template <typename TResult> inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::TaskCompletionSource_1<TResult>::get_Task() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>(), { "get_Task", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*>(this, ___internal_method);
}
template <typename TResult> inline void System::Threading::Tasks::TaskCompletionSource_1<TResult>::SpinUntilCompleted() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>(), { "SpinUntilCompleted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TResult> inline bool System::Threading::Tasks::TaskCompletionSource_1<TResult>::TrySetException(::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>(), { "TrySetException", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, exception);
}
template <typename TResult> inline void System::Threading::Tasks::TaskCompletionSource_1<TResult>::SetException(::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>(), { "SetException", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception);
}
template <typename TResult> inline bool System::Threading::Tasks::TaskCompletionSource_1<TResult>::TrySetResult(TResult result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>(), { "TrySetResult", {}, { ::i2c::type_of<TResult>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
template <typename TResult> inline void System::Threading::Tasks::TaskCompletionSource_1<TResult>::SetResult(TResult result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>(), { "SetResult", {}, { ::i2c::type_of<TResult>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template <typename TResult> inline bool System::Threading::Tasks::TaskCompletionSource_1<TResult>::TrySetCanceled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>(), { "TrySetCanceled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TResult> inline bool System::Threading::Tasks::TaskCompletionSource_1<TResult>::TrySetCanceled(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>(),
                                                                                         { "TrySetCanceled", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cancellationToken);
}
template <typename TResult> inline void System::Threading::Tasks::TaskCompletionSource_1<TResult>::SetCanceled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>(), { "SetCanceled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TResult> inline ::System::Threading::Tasks::TaskCompletionSource_1<TResult>* System::Threading::Tasks::TaskCompletionSource_1<TResult>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>());
}
template <typename TResult>
inline ::System::Threading::Tasks::TaskCompletionSource_1<TResult>*
System::Threading::Tasks::TaskCompletionSource_1<TResult>::New_ctor(::System::Threading::Tasks::TaskCreationOptions creationOptions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>(creationOptions));
}
template <typename TResult> inline ::System::Threading::Tasks::TaskCompletionSource_1<TResult>* System::Threading::Tasks::TaskCompletionSource_1<TResult>::New_ctor(::System::Object* state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>(state));
}
template <typename TResult>
inline ::System::Threading::Tasks::TaskCompletionSource_1<TResult>*
System::Threading::Tasks::TaskCompletionSource_1<TResult>::New_ctor(::System::Object* state, ::System::Threading::Tasks::TaskCreationOptions creationOptions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>(state, creationOptions));
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Threading::Tasks::TaskCompletionSource_1<TResult>::TaskCompletionSource_1() {}
