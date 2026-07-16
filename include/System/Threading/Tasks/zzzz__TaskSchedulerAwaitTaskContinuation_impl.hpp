#pragma once
// IWYU pragma private; include "System/Threading/Tasks/TaskSchedulerAwaitTaskContinuation.hpp"
#include "System/Threading/Tasks/zzzz__AwaitTaskContinuation_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__TaskSchedulerAwaitTaskContinuation_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskSchedulerAwaitTaskContinuation_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskScheduler_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c::*)()>(
    &::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cc4c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c._Run_b__2_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c::*)(::System::Object*)>(
    &::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c::_Run_b__2_0)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5cc4c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c*>(), { "<Run>b__2_0", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c::setStaticF___9(::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c*, "<>9", ::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c*>(
      std::forward<::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c*>(value));
}
inline ::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c* System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c*, "<>9", ::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c*>();
}
inline void System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c::setStaticF___9__2_0(::System::Action_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__2_0", ::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c*>(
      std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c::getStaticF___9__2_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__2_0", ::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c*>();
}
inline void System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c::_Run_b__2_0(::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c*>(), { "<Run>b__2_0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline ::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c* System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c*>());
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c::TaskSchedulerAwaitTaskContinuation___c() {}
//  Writing Method size for method: ::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation::*)(::System::Threading::Tasks::TaskScheduler*, ::System::Action*, bool)>(
    &::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5cbf48c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation::*)(::System::Threading::Tasks::Task*, bool)>(
    &::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation::Run)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5cc4798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation*>(),
                                                                                           { "Run", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskScheduler*& System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation::__cordl_internal_get_m_scheduler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_scheduler;
}
constexpr ::System::Threading::Tasks::TaskScheduler* const& System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation::__cordl_internal_get_m_scheduler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_scheduler;
}
constexpr void System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation::__cordl_internal_set_m_scheduler(::System::Threading::Tasks::TaskScheduler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_scheduler = value;
}
inline void System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation::_ctor(::System::Threading::Tasks::TaskScheduler* scheduler, ::System::Action* action, bool flowExecutionContext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scheduler, action, flowExecutionContext);
}
inline void System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation::Run(::System::Threading::Tasks::Task* ignored, bool canInlineContinuationTask) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation*>(),
                                                                                         { "Run", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ignored, canInlineContinuationTask);
}
inline ::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation* System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation::New_ctor(::System::Threading::Tasks::TaskScheduler* scheduler,
                                                                                                                                              ::System::Action* action, bool flowExecutionContext) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation*>(scheduler, action, flowExecutionContext));
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation::TaskSchedulerAwaitTaskContinuation() {}
