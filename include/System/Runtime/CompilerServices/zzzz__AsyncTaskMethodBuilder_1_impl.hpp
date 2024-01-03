#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncMethodBuilderCore_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncMethodBuilderCore_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
template <typename TResult> inline void System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>::setStaticF_s_defaultResultTask(::System::Threading::Tasks::Task_1<TResult>* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::Task_1<TResult>*, "s_defaultResultTask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>>::get>(
      std::forward<::System::Threading::Tasks::Task_1<TResult>*>(value));
}
template <typename TResult> inline ::System::Threading::Tasks::Task_1<TResult>* System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>::getStaticF_s_defaultResultTask() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task_1<TResult>*, "s_defaultResultTask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>>::get>();
}
template <typename TResult> inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>::Create() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>>::get(), "Create",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>, false>(nullptr, ___internal_method);
}
template <typename TResult> template <typename TStateMachine> inline void System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>::Start(ByRef<TStateMachine> stateMachine) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>>::get(), "Start",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TStateMachine>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
template <typename TResult> inline void System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
template <typename TResult>
template <typename TAwaiter, typename TStateMachine>
inline void System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>::AwaitUnsafeOnCompleted(ByRef<TAwaiter> awaiter, ByRef<TStateMachine> stateMachine) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>>::get(), "AwaitUnsafeOnCompleted",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAwaiter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TAwaiter>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TStateMachine>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAwaiter>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, awaiter, stateMachine);
}
template <typename TResult> inline ::System::Threading::Tasks::Task_1<TResult>* System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>::get_Task() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>>::get(), "get_Task",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*, false>(this, ___internal_method);
}
template <typename TResult> inline void System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>::SetResult(TResult result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>>::get(), "SetResult",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
template <typename TResult> inline void System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>::SetResult(::System::Threading::Tasks::Task_1<TResult>* completedTask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>>::get(), "SetResult", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<TResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, completedTask);
}
template <typename TResult> inline void System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>::SetException(::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>>::get(), "SetException",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception);
}
template <typename TResult> inline ::System::Threading::Tasks::Task_1<TResult>* System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>::GetTaskForResult(TResult result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>>::get(), "GetTaskForResult",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*, false>(nullptr, ___internal_method, result);
}
// Ctor Parameters [CppParam { name: "m_coreState", ty: "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_task", ty:
// "::System::Threading::Tasks::Task_1<TResult>*", modifiers: "", def_value: Some("nullptr") }]
template <typename TResult>
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>::AsyncTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState,
                                                                                                           ::System::Threading::Tasks::Task_1<TResult>* m_task) noexcept {
  this->m_coreState = m_coreState;
  this->m_task = m_task;
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>::AsyncTaskMethodBuilder_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
