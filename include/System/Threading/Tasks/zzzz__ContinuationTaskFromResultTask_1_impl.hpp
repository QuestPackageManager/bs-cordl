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
constexpr ::System::Threading::Tasks::Task_1<TAntecedentResult>* const& System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>::__cordl_internal_get_m_antecedent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_antecedent;
}
template <typename TAntecedentResult>
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>::__cordl_internal_set_m_antecedent(::System::Threading::Tasks::Task_1<TAntecedentResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_antecedent = value;
}
template <typename TAntecedentResult>
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>::_ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>* antecedent, ::System::Delegate* action,
                                                                                                 ::System::Object* state, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                                                 ::System::Threading::Tasks::InternalTaskOptions internalOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::System::Threading::Tasks::Task_1<TAntecedentResult>*>(), ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::System::Object*>(),
                                                  ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>(), ::i2c::type_of<::System::Threading::Tasks::InternalTaskOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
template <typename TAntecedentResult> inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>::InnerInvoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TAntecedentResult>
inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>*
System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>::New_ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>* antecedent, ::System::Delegate* action,
                                                                                        ::System::Object* state, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                                        ::System::Threading::Tasks::InternalTaskOptions internalOptions) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>*>(antecedent, action, state, creationOptions, internalOptions));
}
// Ctor Parameters []
template <typename TAntecedentResult> constexpr ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>::ContinuationTaskFromResultTask_1() {}
