#pragma once
// IWYU pragma private; include "System\Threading\Tasks\StandardTaskContinuation.hpp"
#include "System/Threading/Tasks/zzzz__TaskContinuationOptions_impl.hpp"
#include "System/Threading/Tasks/zzzz__TaskContinuation_impl.hpp"
#include "System/Threading/Tasks/zzzz__StandardTaskContinuation_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskContinuationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskScheduler_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::StandardTaskContinuation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::StandardTaskContinuation::*)(
    ::System::Threading::Tasks::Task*, ::System::Threading::Tasks::TaskContinuationOptions, ::System::Threading::Tasks::TaskScheduler*)>(
    &::System::Threading::Tasks::StandardTaskContinuation::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5cc2c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::StandardTaskContinuation*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Threading::Tasks::TaskContinuationOptions>(),
                                                                 ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::StandardTaskContinuation.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::StandardTaskContinuation::*)(::System::Threading::Tasks::Task*, bool)>(
    &::System::Threading::Tasks::StandardTaskContinuation::Run)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5cc6184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::StandardTaskContinuation*>(),
                                                                                          { ::i2c::class_of<::System::Threading::Tasks::StandardTaskContinuation*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::Task*& System::Threading::Tasks::StandardTaskContinuation::__cordl_internal_get_m_task() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_task;
}
constexpr ::System::Threading::Tasks::Task* const& System::Threading::Tasks::StandardTaskContinuation::__cordl_internal_get_m_task() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_task;
}
constexpr void System::Threading::Tasks::StandardTaskContinuation::__cordl_internal_set_m_task(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_task = value;
}
constexpr ::System::Threading::Tasks::TaskContinuationOptions& System::Threading::Tasks::StandardTaskContinuation::__cordl_internal_get_m_options() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_options;
}
constexpr ::System::Threading::Tasks::TaskContinuationOptions const& System::Threading::Tasks::StandardTaskContinuation::__cordl_internal_get_m_options() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_options;
}
constexpr void System::Threading::Tasks::StandardTaskContinuation::__cordl_internal_set_m_options(::System::Threading::Tasks::TaskContinuationOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_options = value;
}
constexpr ::System::Threading::Tasks::TaskScheduler*& System::Threading::Tasks::StandardTaskContinuation::__cordl_internal_get_m_taskScheduler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_taskScheduler;
}
constexpr ::System::Threading::Tasks::TaskScheduler* const& System::Threading::Tasks::StandardTaskContinuation::__cordl_internal_get_m_taskScheduler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_taskScheduler;
}
constexpr void System::Threading::Tasks::StandardTaskContinuation::__cordl_internal_set_m_taskScheduler(::System::Threading::Tasks::TaskScheduler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_taskScheduler = value;
}
inline void System::Threading::Tasks::StandardTaskContinuation::_ctor(::System::Threading::Tasks::Task* task, ::System::Threading::Tasks::TaskContinuationOptions options,
                                                                      ::System::Threading::Tasks::TaskScheduler* scheduler) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::StandardTaskContinuation*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Threading::Tasks::TaskContinuationOptions>(),
                                                               ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, task, options, scheduler);
}
inline void System::Threading::Tasks::StandardTaskContinuation::Run(::System::Threading::Tasks::Task* completedTask, bool bCanInlineContinuationTask) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::StandardTaskContinuation*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, completedTask, bCanInlineContinuationTask);
}
inline ::System::Threading::Tasks::StandardTaskContinuation* System::Threading::Tasks::StandardTaskContinuation::New_ctor(::System::Threading::Tasks::Task* task,
                                                                                                                          ::System::Threading::Tasks::TaskContinuationOptions options,
                                                                                                                          ::System::Threading::Tasks::TaskScheduler* scheduler) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::StandardTaskContinuation*>(task, options, scheduler));
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::StandardTaskContinuation::StandardTaskContinuation() {}
