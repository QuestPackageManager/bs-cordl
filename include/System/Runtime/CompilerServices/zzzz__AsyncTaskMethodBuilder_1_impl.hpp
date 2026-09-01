#pragma once
// IWYU pragma private; include "System\Runtime\CompilerServices\AsyncTaskMethodBuilder_1.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncMethodBuilderCore_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
template <typename TResult> inline void System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>::setStaticF_s_defaultResultTask(::System::Threading::Tasks::Task_1<TResult>* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::Task_1<TResult>*, "s_defaultResultTask", ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>>(
      std::forward<::System::Threading::Tasks::Task_1<TResult>*>(value));
}
template <typename TResult> inline ::System::Threading::Tasks::Task_1<TResult>* System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>::getStaticF_s_defaultResultTask() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task_1<TResult>*, "s_defaultResultTask", ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>>();
}
template <typename TResult> inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>::Create() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>>(nullptr, ___internal_method);
}
template <typename TResult> template <typename TStateMachine> inline void System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>::Start(::by_ref<TStateMachine> stateMachine) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>>(),
                                                                                              { "Start", { ::i2c::class_of<TStateMachine>() }, { ::i2c::type_of<::by_ref<TStateMachine>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TStateMachine>() })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
template <typename TResult> inline void System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
template <typename TResult>
template <typename TAwaiter, typename TStateMachine>
inline void System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>::AwaitOnCompleted(::by_ref<TAwaiter> awaiter, ::by_ref<TStateMachine> stateMachine) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>>(),
                                                                                              { "AwaitOnCompleted",
                                                                                                { ::i2c::class_of<TAwaiter>(), ::i2c::class_of<TStateMachine>() },
                                                                                                { ::i2c::type_of<::by_ref<TAwaiter>>(), ::i2c::type_of<::by_ref<TStateMachine>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TAwaiter>(), ::i2c::class_of<TStateMachine>() })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, awaiter, stateMachine);
}
template <typename TResult>
template <typename TAwaiter, typename TStateMachine>
inline void System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>::AwaitUnsafeOnCompleted(::by_ref<TAwaiter> awaiter, ::by_ref<TStateMachine> stateMachine) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>>(),
                                                                                              { "AwaitUnsafeOnCompleted",
                                                                                                { ::i2c::class_of<TAwaiter>(), ::i2c::class_of<TStateMachine>() },
                                                                                                { ::i2c::type_of<::by_ref<TAwaiter>>(), ::i2c::type_of<::by_ref<TStateMachine>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TAwaiter>(), ::i2c::class_of<TStateMachine>() })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, awaiter, stateMachine);
}
template <typename TResult> inline ::System::Threading::Tasks::Task_1<TResult>* System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>::get_Task() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>>(), { "get_Task", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*>(*this, ___internal_method);
}
template <typename TResult> inline void System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>::SetResult(TResult result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>>(), { "SetResult", {}, { ::i2c::type_of<TResult>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, result);
}
template <typename TResult> inline void System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>::SetResult(::System::Threading::Tasks::Task_1<TResult>* completedTask) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>>(),
                                                                                         { "SetResult", {}, { ::i2c::type_of<::System::Threading::Tasks::Task_1<TResult>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, completedTask);
}
template <typename TResult> inline void System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>::SetException(::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>>(), { "SetException", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, exception);
}
template <typename TResult> inline ::System::Threading::Tasks::Task_1<TResult>* System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>::GetTaskForResult(TResult result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>>(), { "GetTaskForResult", {}, { ::i2c::type_of<TResult>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*>(nullptr, ___internal_method, result);
}
// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_task", ty:
// "::System::Threading::Tasks::Task_1<TResult>*", modifiers: "", def_value: Some("{}") }]
template <typename TResult>
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>::AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState,
                                                                                                           ::System::Threading::Tasks::Task_1<TResult>* m_task) noexcept {
  this->m_coreState = m_coreState;
  this->m_task = m_task;
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>::AsyncTaskMethodBuilder_1() {}
