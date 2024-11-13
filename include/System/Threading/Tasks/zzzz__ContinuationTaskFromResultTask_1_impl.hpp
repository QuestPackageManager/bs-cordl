#pragma once
// IWYU pragma private; include "System/Threading/Tasks/ContinuationTaskFromResultTask_1.hpp"
#include "System/Threading/Tasks/zzzz__Task_impl.hpp"
#include "System/Threading/Tasks/zzzz__ContinuationTaskFromResultTask_1_def.hpp"
#include "System/Threading/Tasks/zzzz__InternalTaskOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TAntecedentResult>
constexpr ::System::Threading::Tasks::Task_1<TAntecedentResult>*& System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>::__cordl_internal_get_m_antecedent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_antecedent;
}
template <typename TAntecedentResult>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<TAntecedentResult>*> const&
System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>::__cordl_internal_get_m_antecedent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_antecedent;
}
template <typename TAntecedentResult>
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>::__cordl_internal_set_m_antecedent(::System::Threading::Tasks::Task_1<TAntecedentResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_antecedent, value);
}
template <typename TAntecedentResult>
inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>*
System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>::New_ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>* antecedent, ::System::Delegate* action,
                                                                                        ::System::Object* state, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                                        ::System::Threading::Tasks::InternalTaskOptions internalOptions) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>*>(antecedent, action, state, creationOptions, internalOptions));
}
template <typename TAntecedentResult>
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>::_ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>* antecedent, ::System::Delegate* action,
                                                                                                 ::System::Object* state, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                                                 ::System::Threading::Tasks::InternalTaskOptions internalOptions) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<TAntecedentResult>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
template <typename TAntecedentResult> inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>::InnerInvoke() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TAntecedentResult> constexpr ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>::ContinuationTaskFromResultTask_1() {}
