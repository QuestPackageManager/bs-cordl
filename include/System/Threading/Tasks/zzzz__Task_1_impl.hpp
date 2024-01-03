#pragma once
#include "System/Threading/Tasks/zzzz__Task_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskScheduler_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskContinuationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskFactory_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Threading/Tasks/zzzz__InternalTaskOptions_def.hpp"
template <typename TResult> inline void GlobalNamespace::__Task_1__TaskWhenAnyCast____c<TResult>::setStaticF___9(::GlobalNamespace::__Task_1__TaskWhenAnyCast____c<TResult>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__Task_1__TaskWhenAnyCast____c<TResult>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Task_1__TaskWhenAnyCast____c<TResult>*>::get>(
      std::forward<::GlobalNamespace::__Task_1__TaskWhenAnyCast____c<TResult>*>(value));
}
template <typename TResult> inline ::GlobalNamespace::__Task_1__TaskWhenAnyCast____c<TResult>* GlobalNamespace::__Task_1__TaskWhenAnyCast____c<TResult>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__Task_1__TaskWhenAnyCast____c<TResult>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Task_1__TaskWhenAnyCast____c<TResult>*>::get>();
}
template <typename TResult> inline ::GlobalNamespace::__Task_1__TaskWhenAnyCast____c<TResult>* GlobalNamespace::__Task_1__TaskWhenAnyCast____c<TResult>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__Task_1__TaskWhenAnyCast____c<TResult>*>());
}
template <typename TResult> inline void GlobalNamespace::__Task_1__TaskWhenAnyCast____c<TResult>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Task_1__TaskWhenAnyCast____c<TResult>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>*
GlobalNamespace::__Task_1__TaskWhenAnyCast____c<TResult>::__cctor_b__1_0(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>* completed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Task_1__TaskWhenAnyCast____c<TResult>*>::get(), "<.cctor>b__1_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*, false>(this, ___internal_method, completed);
}
// Ctor Parameters []
template <typename TResult> constexpr ::GlobalNamespace::__Task_1__TaskWhenAnyCast____c<TResult>::__Task_1__TaskWhenAnyCast____c() {}
template <typename TResult>
inline void System::Threading::Tasks::__Task_1__TaskWhenAnyCast<TResult>::setStaticF_Value(
    ::System::Func_2<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*, ::System::Threading::Tasks::Task_1<TResult>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*, ::System::Threading::Tasks::Task_1<TResult>*>*, "Value",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task_1__TaskWhenAnyCast<TResult>*>::get>(
      std::forward<::System::Func_2<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*, ::System::Threading::Tasks::Task_1<TResult>*>*>(value));
}
template <typename TResult>
inline ::System::Func_2<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*, ::System::Threading::Tasks::Task_1<TResult>*>*
System::Threading::Tasks::__Task_1__TaskWhenAnyCast<TResult>::getStaticF_Value() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*, ::System::Threading::Tasks::Task_1<TResult>*>*, "Value",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task_1__TaskWhenAnyCast<TResult>*>::get>();
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Threading::Tasks::__Task_1__TaskWhenAnyCast<TResult>::__Task_1__TaskWhenAnyCast() {}
template <typename TResult> constexpr TResult& System::Threading::Tasks::Task_1<TResult>::__get_m_result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_result;
}
template <typename TResult> constexpr TResult const& System::Threading::Tasks::Task_1<TResult>::__get_m_result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_result;
}
template <typename TResult> constexpr void System::Threading::Tasks::Task_1<TResult>::__set_m_result(TResult value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_result)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult> inline void System::Threading::Tasks::Task_1<TResult>::setStaticF_s_defaultFactory(::System::Threading::Tasks::TaskFactory_1<TResult>* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::TaskFactory_1<TResult>*, "s_defaultFactory",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Task_1<TResult>*>::get>(
      std::forward<::System::Threading::Tasks::TaskFactory_1<TResult>*>(value));
}
template <typename TResult> inline ::System::Threading::Tasks::TaskFactory_1<TResult>* System::Threading::Tasks::Task_1<TResult>::getStaticF_s_defaultFactory() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::TaskFactory_1<TResult>*, "s_defaultFactory",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Task_1<TResult>*>::get>();
}
template <typename TResult> inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::Task_1<TResult>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::Task_1<TResult>*>());
}
template <typename TResult> inline void System::Threading::Tasks::Task_1<TResult>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Task_1<TResult>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::Task_1<TResult>::New_ctor(::System::Object* state, ::System::Threading::Tasks::TaskCreationOptions options) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::Task_1<TResult>*>(state, options));
}
template <typename TResult> inline void System::Threading::Tasks::Task_1<TResult>::_ctor(::System::Object* state, ::System::Threading::Tasks::TaskCreationOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Task_1<TResult>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, options);
}
template <typename TResult> inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::Task_1<TResult>::New_ctor(TResult result) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::Task_1<TResult>*>(result));
}
template <typename TResult> inline void System::Threading::Tasks::Task_1<TResult>::_ctor(TResult result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Task_1<TResult>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
template <typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::Task_1<TResult>::New_ctor(bool canceled, TResult result, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                                                        ::System::Threading::CancellationToken ct) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::Task_1<TResult>*>(canceled, result, creationOptions, ct));
}
template <typename TResult>
inline void System::Threading::Tasks::Task_1<TResult>::_ctor(bool canceled, TResult result, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                             ::System::Threading::CancellationToken ct) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Task_1<TResult>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, canceled, result, creationOptions, ct);
}
template <typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::Task_1<TResult>::New_ctor(::System::Func_2<::System::Object*, TResult>* function, ::System::Object* state,
                                                                                                        ::System::Threading::CancellationToken cancellationToken,
                                                                                                        ::System::Threading::Tasks::TaskCreationOptions creationOptions) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::Task_1<TResult>*>(function, state, cancellationToken, creationOptions));
}
template <typename TResult>
inline void System::Threading::Tasks::Task_1<TResult>::_ctor(::System::Func_2<::System::Object*, TResult>* function, ::System::Object* state, ::System::Threading::CancellationToken cancellationToken,
                                                             ::System::Threading::Tasks::TaskCreationOptions creationOptions) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Task_1<TResult>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Object*, TResult>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, function, state, cancellationToken, creationOptions);
}
template <typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>*
System::Threading::Tasks::Task_1<TResult>::New_ctor(::System::Func_1<TResult>* valueSelector, ::System::Threading::Tasks::Task* parent, ::System::Threading::CancellationToken cancellationToken,
                                                    ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions,
                                                    ::System::Threading::Tasks::TaskScheduler* scheduler) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::Task_1<TResult>*>(valueSelector, parent, cancellationToken, creationOptions, internalOptions, scheduler));
}
template <typename TResult>
inline void System::Threading::Tasks::Task_1<TResult>::_ctor(::System::Func_1<TResult>* valueSelector, ::System::Threading::Tasks::Task* parent,
                                                             ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                             ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler* scheduler) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Task_1<TResult>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<TResult>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskScheduler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, valueSelector, parent, cancellationToken, creationOptions, internalOptions, scheduler);
}
template <typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>*
System::Threading::Tasks::Task_1<TResult>::New_ctor(::System::Delegate* valueSelector, ::System::Object* state, ::System::Threading::Tasks::Task* parent,
                                                    ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                    ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler* scheduler) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::Task_1<TResult>*>(valueSelector, state, parent, cancellationToken, creationOptions, internalOptions, scheduler));
}
template <typename TResult>
inline void System::Threading::Tasks::Task_1<TResult>::_ctor(::System::Delegate* valueSelector, ::System::Object* state, ::System::Threading::Tasks::Task* parent,
                                                             ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                             ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler* scheduler) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Task_1<TResult>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskScheduler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, valueSelector, state, parent, cancellationToken, creationOptions, internalOptions, scheduler);
}
template <typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>*
System::Threading::Tasks::Task_1<TResult>::StartNew(::System::Threading::Tasks::Task* parent, ::System::Func_1<TResult>* function, ::System::Threading::CancellationToken cancellationToken,
                                                    ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions,
                                                    ::System::Threading::Tasks::TaskScheduler* scheduler) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Task_1<TResult>*>::get(), "StartNew", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<TResult>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskScheduler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*, false>(nullptr, ___internal_method, parent, function, cancellationToken, creationOptions, internalOptions,
                                                                                                  scheduler);
}
template <typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>*
System::Threading::Tasks::Task_1<TResult>::StartNew(::System::Threading::Tasks::Task* parent, ::System::Func_2<::System::Object*, TResult>* function, ::System::Object* state,
                                                    ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                    ::System::Threading::Tasks::InternalTaskOptions internalOptions, ::System::Threading::Tasks::TaskScheduler* scheduler) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Task_1<TResult>*>::get(), "StartNew", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Object*, TResult>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskScheduler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*, false>(nullptr, ___internal_method, parent, function, state, cancellationToken, creationOptions,
                                                                                                  internalOptions, scheduler);
}
template <typename TResult> inline bool System::Threading::Tasks::Task_1<TResult>::TrySetResult(TResult result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Task_1<TResult>*>::get(), "TrySetResult", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
template <typename TResult> inline void System::Threading::Tasks::Task_1<TResult>::DangerousSetResult(TResult result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Task_1<TResult>*>::get(), "DangerousSetResult",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
template <typename TResult> inline TResult System::Threading::Tasks::Task_1<TResult>::get_Result() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Task_1<TResult>*>::get(), "get_Result",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method);
}
template <typename TResult> inline TResult System::Threading::Tasks::Task_1<TResult>::get_ResultOnSuccess() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Task_1<TResult>*>::get(),
                                                                             "get_ResultOnSuccess", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method);
}
template <typename TResult> inline TResult System::Threading::Tasks::Task_1<TResult>::GetResultCore(bool waitCompletionNotification) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Task_1<TResult>*>::get(), "GetResultCore",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method, waitCompletionNotification);
}
template <typename TResult> inline ::System::Threading::Tasks::TaskFactory_1<TResult>* System::Threading::Tasks::Task_1<TResult>::get_Factory() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Task_1<TResult>*>::get(), "get_Factory",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskFactory_1<TResult>*, false>(nullptr, ___internal_method);
}
template <typename TResult> inline void System::Threading::Tasks::Task_1<TResult>::InnerInvoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Task_1<TResult>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline ::System::Runtime::CompilerServices::TaskAwaiter_1<TResult> System::Threading::Tasks::Task_1<TResult>::GetAwaiter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Task_1<TResult>*>::get(), "GetAwaiter",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::TaskAwaiter_1<TResult>, false>(this, ___internal_method);
}
template <typename TResult> inline ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult> System::Threading::Tasks::Task_1<TResult>::ConfigureAwait(bool continueOnCapturedContext) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Task_1<TResult>*>::get(), "ConfigureAwait",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>, false>(this, ___internal_method, continueOnCapturedContext);
}
template <typename TResult>
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::Task_1<TResult>::ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<TResult>*>* continuationAction,
                                                                                                 ::System::Threading::Tasks::TaskScheduler* scheduler) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Task_1<TResult>*>::get(), "ContinueWith", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Threading::Tasks::Task_1<TResult>*>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskScheduler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, continuationAction, scheduler);
}
template <typename TResult>
inline ::System::Threading::Tasks::Task*
System::Threading::Tasks::Task_1<TResult>::ContinueWith(::System::Action_1<::System::Threading::Tasks::Task_1<TResult>*>* continuationAction, ::System::Threading::Tasks::TaskScheduler* scheduler,
                                                        ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Task_1<TResult>*>::get(), "ContinueWith", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Threading::Tasks::Task_1<TResult>*>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskScheduler*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskContinuationOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, continuationAction, scheduler, cancellationToken, continuationOptions);
}
template <typename TResult>
template <typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>*
System::Threading::Tasks::Task_1<TResult>::ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<TResult>*, TNewResult>* continuationFunction) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Task_1<TResult>*>::get(), "ContinueWith",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TNewResult>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Threading::Tasks::Task_1<TResult>*, TNewResult>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TNewResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TNewResult>*, false>(this, ___internal_method, continuationFunction);
}
template <typename TResult>
template <typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>*
System::Threading::Tasks::Task_1<TResult>::ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<TResult>*, TNewResult>* continuationFunction,
                                                        ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Task_1<TResult>*>::get(), "ContinueWith",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TNewResult>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Threading::Tasks::Task_1<TResult>*, TNewResult>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskContinuationOptions>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TNewResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TNewResult>*, false>(this, ___internal_method, continuationFunction, continuationOptions);
}
template <typename TResult>
template <typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>*
System::Threading::Tasks::Task_1<TResult>::ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<TResult>*, TNewResult>* continuationFunction,
                                                        ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::TaskContinuationOptions continuationOptions,
                                                        ::System::Threading::Tasks::TaskScheduler* scheduler) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Task_1<TResult>*>::get(), "ContinueWith",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TNewResult>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Threading::Tasks::Task_1<TResult>*, TNewResult>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskContinuationOptions>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskScheduler*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TNewResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TNewResult>*, false>(this, ___internal_method, continuationFunction, cancellationToken, continuationOptions, scheduler);
}
template <typename TResult>
template <typename TNewResult>
inline ::System::Threading::Tasks::Task_1<TNewResult>*
System::Threading::Tasks::Task_1<TResult>::ContinueWith(::System::Func_2<::System::Threading::Tasks::Task_1<TResult>*, TNewResult>* continuationFunction,
                                                        ::System::Threading::Tasks::TaskScheduler* scheduler, ::System::Threading::CancellationToken cancellationToken,
                                                        ::System::Threading::Tasks::TaskContinuationOptions continuationOptions) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Task_1<TResult>*>::get(), "ContinueWith",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TNewResult>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Threading::Tasks::Task_1<TResult>*, TNewResult>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskScheduler*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskContinuationOptions>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TNewResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TNewResult>*, false>(this, ___internal_method, continuationFunction, scheduler, cancellationToken, continuationOptions);
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Threading::Tasks::Task_1<TResult>::Task_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
