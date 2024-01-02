#pragma once
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/Threading/Tasks/zzzz__ContinuationResultTaskFromResultTask_2_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__InternalTaskOptions_def.hpp"
template <typename TAntecedentResult, typename TResult>
constexpr ::System::Threading::Tasks::Task_1<TAntecedentResult>*& System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult, TResult>::__get_m_antecedent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_antecedent;
}
template <typename TAntecedentResult, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<TAntecedentResult>*> const&
System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult, TResult>::__get_m_antecedent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_antecedent;
}
template <typename TAntecedentResult, typename TResult>
constexpr void System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult, TResult>::__set_m_antecedent(::System::Threading::Tasks::Task_1<TAntecedentResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_antecedent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TAntecedentResult, typename TResult>
inline ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult, TResult>*
System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult, TResult>::New_ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>* antecedent, ::System::Delegate* function,
                                                                                                       ::System::Object* state, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                                                       ::System::Threading::Tasks::InternalTaskOptions internalOptions) {
  return THROW_UNLESS(
      ::il2cpp_utils::New<::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult, TResult>*>(antecedent, function, state, creationOptions, internalOptions));
}
template <typename TAntecedentResult, typename TResult>
inline void System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult, TResult>::_ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>* antecedent,
                                                                                                                ::System::Delegate* function, ::System::Object* state,
                                                                                                                ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                                                                ::System::Threading::Tasks::InternalTaskOptions internalOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult, TResult>*>::get(),
                                  ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<TAntecedentResult>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, antecedent, function, state, creationOptions, internalOptions);
}
template <typename TAntecedentResult, typename TResult> inline void System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult, TResult>::InnerInvoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult, TResult>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TAntecedentResult, typename TResult>
constexpr ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult, TResult>::ContinuationResultTaskFromResultTask_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
