#pragma once
// IWYU pragma private; include "System/Threading/Tasks/ContinuationTaskFromTask.hpp"
#include "System/Threading/Tasks/zzzz__Task_impl.hpp"
#include "System/Threading/Tasks/zzzz__ContinuationTaskFromTask_def.hpp"
#include "System/Threading/Tasks/zzzz__InternalTaskOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromTask._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromTask::*)(
    ::System::Threading::Tasks::Task*, ::System::Delegate*, ::System::Object*, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions)>(
    &::System::Threading::Tasks::ContinuationTaskFromTask::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5cc0680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ContinuationTaskFromTask*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::System::Object*>(),
                                                    ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>(), ::i2c::type_of<::System::Threading::Tasks::InternalTaskOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromTask.InnerInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromTask::*)()>(&::System::Threading::Tasks::ContinuationTaskFromTask::InnerInvoke)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5cc3d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ContinuationTaskFromTask*>(),
                                                                                          { ::i2c::class_of<::System::Threading::Tasks::ContinuationTaskFromTask*>(), 13 }));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::Task*& System::Threading::Tasks::ContinuationTaskFromTask::__cordl_internal_get_m_antecedent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_antecedent;
}
constexpr ::System::Threading::Tasks::Task* const& System::Threading::Tasks::ContinuationTaskFromTask::__cordl_internal_get_m_antecedent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_antecedent;
}
constexpr void System::Threading::Tasks::ContinuationTaskFromTask::__cordl_internal_set_m_antecedent(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_antecedent = value;
}
inline void System::Threading::Tasks::ContinuationTaskFromTask::_ctor(::System::Threading::Tasks::Task* antecedent, ::System::Delegate* action, ::System::Object* state,
                                                                      ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                      ::System::Threading::Tasks::InternalTaskOptions internalOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ContinuationTaskFromTask*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::System::Object*>(),
                                                  ::i2c::type_of<::System::Threading::Tasks::TaskCreationOptions>(), ::i2c::type_of<::System::Threading::Tasks::InternalTaskOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
inline void System::Threading::Tasks::ContinuationTaskFromTask::InnerInvoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::ContinuationTaskFromTask*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::ContinuationTaskFromTask* System::Threading::Tasks::ContinuationTaskFromTask::New_ctor(::System::Threading::Tasks::Task* antecedent, ::System::Delegate* action,
                                                                                                                          ::System::Object* state,
                                                                                                                          ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                                                                          ::System::Threading::Tasks::InternalTaskOptions internalOptions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::ContinuationTaskFromTask*>(antecedent, action, state, creationOptions, internalOptions));
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::ContinuationTaskFromTask::ContinuationTaskFromTask() {}
