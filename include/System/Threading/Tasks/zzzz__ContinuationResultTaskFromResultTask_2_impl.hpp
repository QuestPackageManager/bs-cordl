#pragma once
// IWYU pragma private; include "System/Threading/Tasks/ContinuationResultTaskFromResultTask_2.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/Threading/Tasks/zzzz__ContinuationResultTaskFromResultTask_2_def.hpp"
#include "System/Threading/Tasks/zzzz__InternalTaskOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TAntecedentResult, typename TResult>
constexpr ::System::Threading::Tasks::Task_1<TAntecedentResult>*& System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult, TResult>::__cordl_internal_get_m_antecedent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_antecedent;
}
template <typename TAntecedentResult, typename TResult>
constexpr ::System::Threading::Tasks::Task_1<TAntecedentResult>* const&
System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult, TResult>::__cordl_internal_get_m_antecedent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_antecedent;
}
template <typename TAntecedentResult, typename TResult>
constexpr void
System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult, TResult>::__cordl_internal_set_m_antecedent(::System::Threading::Tasks::Task_1<TAntecedentResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_antecedent = value;
}
template <typename TAntecedentResult, typename TResult>
inline void System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult, TResult>::_ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>* antecedent,
                                                                                                                ::System::Delegate* function, ::System::Object* state,
                                                                                                                ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                                                                ::System::Threading::Tasks::InternalTaskOptions internalOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult, TResult>*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::System::Threading::Tasks::Task_1<TAntecedentResult>*>(), ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::System::Object*>(),
                                                  ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>(), ::i2c::type_of<::System::Threading::Tasks::InternalTaskOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, antecedent, function, state, creationOptions, internalOptions);
}
template <typename TAntecedentResult, typename TResult> inline void System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult, TResult>::InnerInvoke() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult, TResult>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TAntecedentResult, typename TResult>
inline ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult, TResult>*
System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult, TResult>::New_ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>* antecedent, ::System::Delegate* function,
                                                                                                       ::System::Object* state, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                                                       ::System::Threading::Tasks::InternalTaskOptions internalOptions) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult, TResult>*>(antecedent, function, state, creationOptions, internalOptions));
}
// Ctor Parameters []
template <typename TAntecedentResult, typename TResult>
constexpr ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult, TResult>::ContinuationResultTaskFromResultTask_2() {}
