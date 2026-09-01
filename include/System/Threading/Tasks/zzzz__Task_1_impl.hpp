#pragma once
// IWYU pragma private; include "System\Threading\Tasks\Task_1.hpp"
#include "System/Threading/Tasks/zzzz__Task_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__InternalTaskOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskContinuationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskFactory_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskScheduler_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TResult> inline void System::Threading::Tasks::TaskWhenAnyCast_Task_1___c<TResult>::setStaticF___9(::System::Threading::Tasks::TaskWhenAnyCast_Task_1___c<TResult>* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::TaskWhenAnyCast_Task_1___c<TResult>*, "<>9", ::System::Threading::Tasks::TaskWhenAnyCast_Task_1___c<TResult>*>(
      std::forward<::System::Threading::Tasks::TaskWhenAnyCast_Task_1___c<TResult>*>(value));
}
template <typename TResult> inline ::System::Threading::Tasks::TaskWhenAnyCast_Task_1___c<TResult>* System::Threading::Tasks::TaskWhenAnyCast_Task_1___c<TResult>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::TaskWhenAnyCast_Task_1___c<TResult>*, "<>9", ::System::Threading::Tasks::TaskWhenAnyCast_Task_1___c<TResult>*>();
}
template <typename TResult> inline void System::Threading::Tasks::TaskWhenAnyCast_Task_1___c<TResult>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskWhenAnyCast_Task_1___c<TResult>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>*
System::Threading::Tasks::TaskWhenAnyCast_Task_1___c<TResult>::__cctor_b__1_0(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>* completed) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskWhenAnyCast_Task_1___c<TResult>*>(),
                                                           { "<.cctor>b__1_0", {}, { ::i2c::type_of<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*>(this, ___internal_method, completed);
}
template <typename TResult> inline ::System::Threading::Tasks::TaskWhenAnyCast_Task_1___c<TResult>* System::Threading::Tasks::TaskWhenAnyCast_Task_1___c<TResult>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::TaskWhenAnyCast_Task_1___c<TResult>*>());
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Threading::Tasks::TaskWhenAnyCast_Task_1___c<TResult>::TaskWhenAnyCast_Task_1___c() {}
template <typename TResult>
inline void System::Threading::Tasks::Task_1_TaskWhenAnyCast<TResult>::setStaticF_Value(
    ::System::Func_2<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*, ::System::Threading::Tasks::Task_1<TResult>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*, ::System::Threading::Tasks::Task_1<TResult>*>*, "Value",
                                    ::System::Threading::Tasks::Task_1_TaskWhenAnyCast<TResult>*>(
      std::forward<::System::Func_2<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*, ::System::Threading::Tasks::Task_1<TResult>*>*>(value));
}
template <typename TResult>
inline ::System::Func_2<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*, ::System::Threading::Tasks::Task_1<TResult>*>*
System::Threading::Tasks::Task_1_TaskWhenAnyCast<TResult>::getStaticF_Value() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*, ::System::Threading::Tasks::Task_1<TResult>*>*, "Value",
                                           ::System::Threading::Tasks::Task_1_TaskWhenAnyCast<TResult>*>();
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Threading::Tasks::Task_1_TaskWhenAnyCast<TResult>::Task_1_TaskWhenAnyCast() {}
template <typename TResult> constexpr TResult& System::Threading::Tasks::Task_1<TResult>::__cordl_internal_get_m_result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_result;
}
template <typename TResult> constexpr TResult const& System::Threading::Tasks::Task_1<TResult>::__cordl_internal_get_m_result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_result;
}
template <typename TResult> constexpr void System::Threading::Tasks::Task_1<TResult>::__cordl_internal_set_m_result(TResult value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_result = value;
}
template <typename TResult> inline void System::Threading::Tasks::Task_1<TResult>::setStaticF_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<TResult>* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::TaskFactory_1<TResult>*, "s_defaultFactory", ::System::Threading::Tasks::Task_1<TResult>*>(
      std::forward<::System::Threading::Tasks::TaskFactory_1<TResult>*>(value));
}
template <typename TResult> inline ::System::Threading::Tasks::TaskFactory_1<TResult>* System::Threading::Tasks::Task_1<TResult>::getStaticF_s_defaultFactory() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::TaskFactory_1<TResult>*, "s_defaultFactory", ::System::Threading::Tasks::Task_1<TResult>*>();
}
template <typename TResult> inline void System::Threading::Tasks::Task_1<TResult>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_1<TResult>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TResult> inline void System::Threading::Tasks::Task_1<TResult>::_ctor(::System::Object* state, ::System::Threading::Tasks::TaskCreationOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_1<TResult>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, options);
}
template <typename TResult> inline void System::Threading::Tasks::Task_1<TResult>::_ctor(TResult result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_1<TResult>*>(), { ".ctor", {}, { ::i2c::type_of<TResult>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template <typename TResult>
inline void System::Threading::Tasks::Task_1<TResult>::_ctor(bool canceled, TResult result, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                             ::System::Threading::CancellationToken ct) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_1<TResult>*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<bool>(), ::i2c::type_of<TResult>(), ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>(),
                                                               ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, canceled, result, creationOptions, ct);
}
template <typename TResult> inline void System::Threading::Tasks::Task_1<TResult>::_ctor(::System::Func_1<TResult>* function, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_1<TResult>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Func_1<TResult>*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, function, cancellationToken);
}
template <typename TResult>
inline void System::Threading::Tasks::Task_1<TResult>::_ctor(::System::Func_2<::System::Object*, TResult>* function, ::System::Object* state, ::System::Threading::CancellationToken cancellationToken,
                                                             ::System::Threading::Tasks::TaskCreationOptions creationOptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_1<TResult>*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Func_2<::System::Object*, TResult>*>(), ::i2c::type_of<::System::Object*>(),
                                                               ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, function, state, cancellationToken, creationOptions);
}
template <typename TResult>
inline void System::Threading::Tasks::Task_1<TResult>::_ctor(::System::Func_1<TResult>* valueSelector, ::System::Threading::Tasks::Task* parent,
                                                             ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                             ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler* scheduler) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_1<TResult>*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Func_1<TResult>*>(), ::i2c::type_of<::System::Threading::Tasks::Task*>(),
                                                               ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>(),
                                                               ::i2c::type_of<::System::Threading::Tasks::InternalTaskOptions>(), ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, valueSelector, parent, cancellationToken, creationOptions, internalOptions, scheduler);
}
template <typename TResult>
inline void System::Threading::Tasks::Task_1<TResult>::_ctor(::System::Delegate* valueSelector, ::System::Object* state, ::System::Threading::Tasks::Task* parent,
                                                             ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                             ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler* scheduler) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_1<TResult>*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::Tasks::Task*>(),
                                                               ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>(),
                                                               ::i2c::type_of<::System::Threading::Tasks::InternalTaskOptions>(), ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, valueSelector, state, parent, cancellationToken, creationOptions, internalOptions, scheduler);
}
template <typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>*
System::Threading::Tasks::Task_1<TResult>::StartNew(::System::Threading::Tasks::Task* parent, ::System::Func_1<TResult>* function, ::System::Threading::CancellationToken cancellationToken,
                                                    ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions,
                                                    ::System::Threading::Tasks::TaskScheduler* scheduler) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_1<TResult>*>(),
                                                           { "StartNew",
                                                             {},
                                                             { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Func_1<TResult>*>(),
                                                               ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>(),
                                                               ::i2c::type_of<::System::Threading::Tasks::InternalTaskOptions>(), ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*>(nullptr, ___internal_method, parent, function, cancellationToken, creationOptions, internalOptions,
                                                                                           scheduler);
}
template <typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>*
System::Threading::Tasks::Task_1<TResult>::StartNew(::System::Threading::Tasks::Task* parent, ::System::Func_2<::System::Object*, TResult>* function, ::System::Object* state,
                                                    ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                    ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler* scheduler) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_1<TResult>*>(),
                                       { "StartNew",
                                         {},
                                         { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Func_2<::System::Object*, TResult>*>(), ::i2c::type_of<::System::Object*>(),
                                           ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>(),
                                           ::i2c::type_of<::System::Threading::Tasks::InternalTaskOptions>(), ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*>(nullptr, ___internal_method, parent, function, state, cancellationToken, creationOptions, internalOptions,
                                                                                           scheduler);
}
template <typename TResult> inline bool System::Threading::Tasks::Task_1<TResult>::TrySetResult(TResult result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_1<TResult>*>(), { "TrySetResult", {}, { ::i2c::type_of<TResult>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
template <typename TResult> inline void System::Threading::Tasks::Task_1<TResult>::DangerousSetResult(TResult result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_1<TResult>*>(), { "DangerousSetResult", {}, { ::i2c::type_of<TResult>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template <typename TResult> inline TResult System::Threading::Tasks::Task_1<TResult>::get_Result() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_1<TResult>*>(), { "get_Result", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TResult>(this, ___internal_method);
}
template <typename TResult> inline TResult System::Threading::Tasks::Task_1<TResult>::get_ResultOnSuccess() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_1<TResult>*>(), { "get_ResultOnSuccess", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TResult>(this, ___internal_method);
}
template <typename TResult> inline TResult System::Threading::Tasks::Task_1<TResult>::GetResultCore(bool waitCompletionNotification) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_1<TResult>*>(), { "GetResultCore", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<TResult>(this, ___internal_method, waitCompletionNotification);
}
template <typename TResult> inline ::System::Threading::Tasks::TaskFactory_1<TResult>* System::Threading::Tasks::Task_1<TResult>::get_Factory() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_1<TResult>*>(), { "get_Factory", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskFactory_1<TResult>*>(nullptr, ___internal_method);
}
template <typename TResult> inline void System::Threading::Tasks::Task_1<TResult>::InnerInvoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::Task_1<TResult>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TResult> inline ::System::Runtime::CompilerServices::TaskAwaiter_1<TResult> System::Threading::Tasks::Task_1<TResult>::GetAwaiter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_1<TResult>*>(), { "GetAwaiter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::TaskAwaiter_1<TResult>>(this, ___internal_method);
}
template <typename TResult> inline ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult> System::Threading::Tasks::Task_1<TResult>::ConfigureAwait(bool continueOnCapturedContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_1<TResult>*>(), { "ConfigureAwait", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>>(this, ___internal_method, continueOnCapturedContext);
}
template <typename TResult>
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::Task_1<TResult>::ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<TResult>*>* continuationAction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_1<TResult>*>(),
                                                           { "ContinueWith", {}, { ::i2c::type_of<::System::Action_1<::System::Threading::Tasks::Task_1<TResult>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, continuationAction);
}
template <typename TResult>
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::Task_1<TResult>::ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<TResult>*>* continuationAction,
                                                                                                 ::System::Threading::Tasks::TaskScheduler* scheduler) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Threading::Tasks::Task_1<TResult>*>(),
                       { "ContinueWith", {}, { ::i2c::type_of<::System::Action_1<::System::Threading::Tasks::Task_1<TResult>*>*>(), ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, continuationAction, scheduler);
}
template <typename TResult>
inline ::System::Threading::Tasks::Task*
System::Threading::Tasks::Task_1<TResult>::ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<TResult>*>* continuationAction, ::System::Threading::CancellationToken cancellationToken,
                                                        ::System::Threading::Tasks::TaskContinuationOptions continuationOptions, ::System::Threading::Tasks::TaskScheduler* scheduler) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_1<TResult>*>(),
                                              { "ContinueWith",
                                                {},
                                                { ::i2c::type_of<::System::Action_1<::System::Threading::Tasks::Task_1<TResult>*>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(),
                                                  ::i2c::type_of<::System::Threading::Tasks::TaskContinuationOptions>(), ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, continuationAction, cancellationToken, continuationOptions, scheduler);
}
template <typename TResult>
inline ::System::Threading::Tasks::Task*
System::Threading::Tasks::Task_1<TResult>::ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<TResult>*>* continuationAction, ::System::Threading::Tasks::TaskScheduler* scheduler,
                                                        ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_1<TResult>*>(),
                                              { "ContinueWith",
                                                {},
                                                { ::i2c::type_of<::System::Action_1<::System::Threading::Tasks::Task_1<TResult>*>*>(), ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>(),
                                                  ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::Tasks::TaskContinuationOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, continuationAction, scheduler, cancellationToken, continuationOptions);
}
template <typename TResult>
template <typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>*
System::Threading::Tasks::Task_1<TResult>::ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<TResult>*, TNewResult>* continuationFunction) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_1<TResult>*>(),
                                       { "ContinueWith", { ::i2c::class_of<TNewResult>() }, { ::i2c::type_of<::System::Func_2<::System::Threading::Tasks::Task_1<TResult>*, TNewResult>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TNewResult>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TNewResult>*>(this, ___internal_method, continuationFunction);
}
template <typename TResult>
template <typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>*
System::Threading::Tasks::Task_1<TResult>::ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<TResult>*, TNewResult>* continuationFunction,
                                                        ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_1<TResult>*>(),
                                                                                              { "ContinueWith",
                                                                                                { ::i2c::class_of<TNewResult>() },
                                                                                                { ::i2c::type_of<::System::Func_2<::System::Threading::Tasks::Task_1<TResult>*, TNewResult>*>(),
                                                                                                  ::i2c::type_of<::System::Threading::Tasks::TaskContinuationOptions>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TNewResult>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TNewResult>*>(this, ___internal_method, continuationFunction, continuationOptions);
}
template <typename TResult>
template <typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>*
System::Threading::Tasks::Task_1<TResult>::ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<TResult>*, TNewResult>* continuationFunction,
                                                        ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions,
                                                        ::System::Threading::Tasks::TaskScheduler* scheduler) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_1<TResult>*>(),
                                       { "ContinueWith",
                                         { ::i2c::class_of<TNewResult>() },
                                         { ::i2c::type_of<::System::Func_2<::System::Threading::Tasks::Task_1<TResult>*, TNewResult>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(),
                                           ::i2c::type_of<::System::Threading::Tasks::TaskContinuationOptions>(), ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TNewResult>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TNewResult>*>(this, ___internal_method, continuationFunction, cancellationToken, continuationOptions, scheduler);
}
template <typename TResult>
template <typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>*
System::Threading::Tasks::Task_1<TResult>::ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<TResult>*, TNewResult>* continuationFunction,
                                                        ::System::Threading::Tasks::TaskScheduler* scheduler, ::System::Threading::CancellationToken cancellationToken,
                                                        ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Task_1<TResult>*>(),
                                       { "ContinueWith",
                                         { ::i2c::class_of<TNewResult>() },
                                         { ::i2c::type_of<::System::Func_2<::System::Threading::Tasks::Task_1<TResult>*, TNewResult>*>(), ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>(),
                                           ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::Tasks::TaskContinuationOptions>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TNewResult>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TNewResult>*>(this, ___internal_method, continuationFunction, scheduler, cancellationToken, continuationOptions);
}
template <typename TResult> inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::Task_1<TResult>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::Task_1<TResult>*>());
}
template <typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::Task_1<TResult>::New_ctor(::System::Object* state, ::System::Threading::Tasks::TaskCreationOptions options) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::Task_1<TResult>*>(state, options));
}
template <typename TResult> inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::Task_1<TResult>::New_ctor(TResult result) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::Task_1<TResult>*>(result));
}
template <typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::Task_1<TResult>::New_ctor(bool canceled, TResult result, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                                                        ::System::Threading::CancellationToken ct) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::Task_1<TResult>*>(canceled, result, creationOptions, ct));
}
template <typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::Task_1<TResult>::New_ctor(::System::Func_1<TResult>* function, ::System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::Task_1<TResult>*>(function, cancellationToken));
}
template <typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::Task_1<TResult>::New_ctor(::System::Func_2<::System::Object*, TResult>* function, ::System::Object* state,
                                                                                                        ::System::Threading::CancellationToken cancellationToken,
                                                                                                        ::System::Threading::Tasks::TaskCreationOptions creationOptions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::Task_1<TResult>*>(function, state, cancellationToken, creationOptions));
}
template <typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>*
System::Threading::Tasks::Task_1<TResult>::New_ctor(::System::Func_1<TResult>* valueSelector, ::System::Threading::Tasks::Task* parent, ::System::Threading::CancellationToken cancellationToken,
                                                    ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions,
                                                    ::System::Threading::Tasks::TaskScheduler* scheduler) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::Task_1<TResult>*>(valueSelector, parent, cancellationToken, creationOptions, internalOptions, scheduler));
}
template <typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>*
System::Threading::Tasks::Task_1<TResult>::New_ctor(::System::Delegate* valueSelector, ::System::Object* state, ::System::Threading::Tasks::Task* parent,
                                                    ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                    ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler* scheduler) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::Task_1<TResult>*>(valueSelector, state, parent, cancellationToken, creationOptions, internalOptions, scheduler));
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Threading::Tasks::Task_1<TResult>::Task_1() {}
