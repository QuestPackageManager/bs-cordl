#pragma once
// IWYU pragma private; include "System/Threading/Tasks/AwaitTaskContinuation.hpp"
#include "System/Threading/Tasks/zzzz__TaskContinuation_impl.hpp"
#include "System/Threading/Tasks/zzzz__AwaitTaskContinuation_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskScheduler_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Threading/zzzz__IThreadPoolWorkItem_def.hpp"
#include "System/Threading/zzzz__ThreadAbortException_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::AwaitTaskContinuation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::AwaitTaskContinuation::*)(::System::Action*, bool)>(
    &::System::Threading::Tasks::AwaitTaskContinuation::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5cc40f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::AwaitTaskContinuation*>(), { ".ctor", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::AwaitTaskContinuation.CreateTask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Threading::Tasks::AwaitTaskContinuation::*)(::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Threading::Tasks::TaskScheduler*)>(
    &::System::Threading::Tasks::AwaitTaskContinuation::CreateTask)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5cc4b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Threading::Tasks::AwaitTaskContinuation*>(),
            { "CreateTask", {}, { ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::AwaitTaskContinuation.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::AwaitTaskContinuation::*)(::System::Threading::Tasks::Task*, bool)>(
    &::System::Threading::Tasks::AwaitTaskContinuation::Run)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5cc4a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::AwaitTaskContinuation*>(), { ::i2c::class_of<::System::Threading::Tasks::AwaitTaskContinuation*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::AwaitTaskContinuation.get_IsValidLocationForInlining
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Threading::Tasks::AwaitTaskContinuation::get_IsValidLocationForInlining)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5cc4d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::AwaitTaskContinuation*>(), { "get_IsValidLocationForInlining", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::AwaitTaskContinuation.System_Threading_IThreadPoolWorkItem_ExecuteWorkItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::AwaitTaskContinuation::*)()>(
    &::System::Threading::Tasks::AwaitTaskContinuation::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5cc4ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::AwaitTaskContinuation*>(), { "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::AwaitTaskContinuation.InvokeAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Threading::Tasks::AwaitTaskContinuation::InvokeAction)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cc4ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::AwaitTaskContinuation*>(), { "InvokeAction", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::AwaitTaskContinuation.GetInvokeActionCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::ContextCallback* (*)()>(&::System::Threading::Tasks::AwaitTaskContinuation::GetInvokeActionCallback)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5cc5064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::AwaitTaskContinuation*>(), { "GetInvokeActionCallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::AwaitTaskContinuation.RunCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::AwaitTaskContinuation::*)(
    ::System::Threading::ContextCallback*, ::System::Object*, ::by_ref<::System::Threading::Tasks::Task*>)>(&::System::Threading::Tasks::AwaitTaskContinuation::RunCallback)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5cc4318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Threading::Tasks::AwaitTaskContinuation*>(),
            { "RunCallback", {}, { ::i2c::type_of<::System::Threading::ContextCallback*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::System::Threading::Tasks::Task*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::AwaitTaskContinuation.RunOrScheduleAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*, bool, ::by_ref<::System::Threading::Tasks::Task*>)>(
    &::System::Threading::Tasks::AwaitTaskContinuation::RunOrScheduleAction)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5cc0120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::AwaitTaskContinuation*>(),
                            { "RunOrScheduleAction", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Threading::Tasks::Task*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::AwaitTaskContinuation.UnsafeScheduleAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::System::Threading::Tasks::AwaitTaskContinuation::UnsafeScheduleAction)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5cbf530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::AwaitTaskContinuation*>(), { "UnsafeScheduleAction", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::AwaitTaskContinuation.ThrowAsyncIfNecessary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Exception*)>(&::System::Threading::Tasks::AwaitTaskContinuation::ThrowAsyncIfNecessary)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cc4d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::AwaitTaskContinuation*>(), { "ThrowAsyncIfNecessary", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::AwaitTaskContinuation.MarkAborted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::AwaitTaskContinuation::*)(::System::Threading::ThreadAbortException*)>(
    &::System::Threading::Tasks::AwaitTaskContinuation::MarkAborted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cc5110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::AwaitTaskContinuation*>(),
                                                                                           { "MarkAborted", {}, { ::i2c::type_of<::System::Threading::ThreadAbortException*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::ExecutionContext*& System::Threading::Tasks::AwaitTaskContinuation::__cordl_internal_get_m_capturedContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_capturedContext;
}
constexpr ::System::Threading::ExecutionContext* const& System::Threading::Tasks::AwaitTaskContinuation::__cordl_internal_get_m_capturedContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_capturedContext;
}
constexpr void System::Threading::Tasks::AwaitTaskContinuation::__cordl_internal_set_m_capturedContext(::System::Threading::ExecutionContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_capturedContext = value;
}
constexpr ::System::Action*& System::Threading::Tasks::AwaitTaskContinuation::__cordl_internal_get_m_action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_action;
}
constexpr ::System::Action* const& System::Threading::Tasks::AwaitTaskContinuation::__cordl_internal_get_m_action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_action;
}
constexpr void System::Threading::Tasks::AwaitTaskContinuation::__cordl_internal_set_m_action(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_action = value;
}
inline void System::Threading::Tasks::AwaitTaskContinuation::setStaticF_s_invokeActionCallback(::System::Threading::ContextCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::ContextCallback*, "s_invokeActionCallback", ::System::Threading::Tasks::AwaitTaskContinuation*>(
      std::forward<::System::Threading::ContextCallback*>(value));
}
inline ::System::Threading::ContextCallback* System::Threading::Tasks::AwaitTaskContinuation::getStaticF_s_invokeActionCallback() {
  return ::cordl_internals::getStaticField<::System::Threading::ContextCallback*, "s_invokeActionCallback", ::System::Threading::Tasks::AwaitTaskContinuation*>();
}
inline void System::Threading::Tasks::AwaitTaskContinuation::_ctor(::System::Action* action, bool flowExecutionContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::AwaitTaskContinuation*>(), { ".ctor", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action, flowExecutionContext);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::AwaitTaskContinuation::CreateTask(::System::Action_1<::System::Object*>* action, ::System::Object* state,
                                                                                                     ::System::Threading::Tasks::TaskScheduler* scheduler) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Threading::Tasks::AwaitTaskContinuation*>(),
          { "CreateTask", {}, { ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::Tasks::TaskScheduler*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, action, state, scheduler);
}
inline void System::Threading::Tasks::AwaitTaskContinuation::Run(::System::Threading::Tasks::Task* ignored, bool canInlineContinuationTask) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::AwaitTaskContinuation*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ignored, canInlineContinuationTask);
}
inline bool System::Threading::Tasks::AwaitTaskContinuation::get_IsValidLocationForInlining() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::AwaitTaskContinuation*>(), { "get_IsValidLocationForInlining", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void System::Threading::Tasks::AwaitTaskContinuation::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::AwaitTaskContinuation*>(), { "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Tasks::AwaitTaskContinuation::InvokeAction(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::AwaitTaskContinuation*>(), { "InvokeAction", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
inline ::System::Threading::ContextCallback* System::Threading::Tasks::AwaitTaskContinuation::GetInvokeActionCallback() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::AwaitTaskContinuation*>(), { "GetInvokeActionCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ContextCallback*>(nullptr, ___internal_method);
}
inline void System::Threading::Tasks::AwaitTaskContinuation::RunCallback(::System::Threading::ContextCallback* callback, ::System::Object* state,
                                                                         ::by_ref<::System::Threading::Tasks::Task*> currentTask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Threading::Tasks::AwaitTaskContinuation*>(),
          { "RunCallback", {}, { ::i2c::type_of<::System::Threading::ContextCallback*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::System::Threading::Tasks::Task*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, state, currentTask);
}
inline void System::Threading::Tasks::AwaitTaskContinuation::RunOrScheduleAction(::System::Action* action, bool allowInlining, ::by_ref<::System::Threading::Tasks::Task*> currentTask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::AwaitTaskContinuation*>(),
                                       { "RunOrScheduleAction", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Threading::Tasks::Task*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, action, allowInlining, currentTask);
}
inline void System::Threading::Tasks::AwaitTaskContinuation::UnsafeScheduleAction(::System::Action* action) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::AwaitTaskContinuation*>(), { "UnsafeScheduleAction", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, action);
}
inline void System::Threading::Tasks::AwaitTaskContinuation::ThrowAsyncIfNecessary(::System::Exception* exc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::AwaitTaskContinuation*>(), { "ThrowAsyncIfNecessary", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, exc);
}
inline void System::Threading::Tasks::AwaitTaskContinuation::MarkAborted(::System::Threading::ThreadAbortException* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::AwaitTaskContinuation*>(),
                                                                                         { "MarkAborted", {}, { ::i2c::type_of<::System::Threading::ThreadAbortException*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline ::System::Threading::Tasks::AwaitTaskContinuation* System::Threading::Tasks::AwaitTaskContinuation::New_ctor(::System::Action* action, bool flowExecutionContext) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::AwaitTaskContinuation*>(action, flowExecutionContext));
}
/// @brief Convert operator to "::System::Threading::IThreadPoolWorkItem"
constexpr System::Threading::Tasks::AwaitTaskContinuation::operator ::System::Threading::IThreadPoolWorkItem*() noexcept {
  return static_cast<::System::Threading::IThreadPoolWorkItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::IThreadPoolWorkItem"
constexpr ::System::Threading::IThreadPoolWorkItem* System::Threading::Tasks::AwaitTaskContinuation::i___System__Threading__IThreadPoolWorkItem() noexcept {
  return static_cast<::System::Threading::IThreadPoolWorkItem*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::AwaitTaskContinuation::AwaitTaskContinuation() {}
