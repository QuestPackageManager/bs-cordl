#pragma once
// IWYU pragma private; include "System\Threading\Tasks\TaskScheduler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__TaskScheduler_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskScheduler_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__UnobservedTaskExceptionEventArgs_def.hpp"
#include "System/Threading/zzzz__Lock_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters []
constexpr ::System::Threading::Tasks::TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView::TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView() {}
//  Writing Method size for method: ::System::Threading::Tasks::TaskScheduler.QueueTask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::TaskScheduler::*)(::System::Threading::Tasks::Task*)>(&::System::Threading::Tasks::TaskScheduler::QueueTask)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskScheduler*>(), { ::i2c::class_of<::System::Threading::Tasks::TaskScheduler*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskScheduler.TryExecuteTaskInline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::TaskScheduler::*)(::System::Threading::Tasks::Task*, bool)>(
    &::System::Threading::Tasks::TaskScheduler::TryExecuteTaskInline)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskScheduler*>(), { ::i2c::class_of<::System::Threading::Tasks::TaskScheduler*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskScheduler.TryRunInline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::TaskScheduler::*)(::System::Threading::Tasks::Task*, bool)>(
    &::System::Threading::Tasks::TaskScheduler::TryRunInline)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5cbe4e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskScheduler*>(),
                                                                                           { "TryRunInline", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskScheduler.TryDequeue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::TaskScheduler::*)(::System::Threading::Tasks::Task*)>(
    &::System::Threading::Tasks::TaskScheduler::TryDequeue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cc855c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskScheduler*>(), { ::i2c::class_of<::System::Threading::Tasks::TaskScheduler*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskScheduler.NotifyWorkItemProgress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::TaskScheduler::*)()>(&::System::Threading::Tasks::TaskScheduler::NotifyWorkItemProgress)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cc8564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskScheduler*>(), { ::i2c::class_of<::System::Threading::Tasks::TaskScheduler*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskScheduler.get_RequiresAtomicStartTransition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::TaskScheduler::*)()>(&::System::Threading::Tasks::TaskScheduler::get_RequiresAtomicStartTransition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cc8568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskScheduler*>(), { ::i2c::class_of<::System::Threading::Tasks::TaskScheduler*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskScheduler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::TaskScheduler::*)()>(&::System::Threading::Tasks::TaskScheduler::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cc8570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskScheduler*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskScheduler.get_Default
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::TaskScheduler* (*)()>(&::System::Threading::Tasks::TaskScheduler::get_Default)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cc8574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskScheduler*>(), { "get_Default", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskScheduler.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::TaskScheduler* (*)()>(&::System::Threading::Tasks::TaskScheduler::get_Current)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5cc2580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskScheduler*>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskScheduler.get_InternalCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::TaskScheduler* (*)()>(&::System::Threading::Tasks::TaskScheduler::get_InternalCurrent)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5cc15e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskScheduler*>(), { "get_InternalCurrent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskScheduler.get_Id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Threading::Tasks::TaskScheduler::*)()>(&::System::Threading::Tasks::TaskScheduler::get_Id)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5cc1fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskScheduler*>(), { "get_Id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskScheduler.PublishUnobservedTaskException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*)>(
    &::System::Threading::Tasks::TaskScheduler::PublishUnobservedTaskException)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5cc7558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskScheduler*>(),
                            { "PublishUnobservedTaskException", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Threading::Tasks::TaskScheduler::__cordl_internal_get_m_taskSchedulerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_taskSchedulerId;
}
constexpr int32_t const& System::Threading::Tasks::TaskScheduler::__cordl_internal_get_m_taskSchedulerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_taskSchedulerId;
}
constexpr void System::Threading::Tasks::TaskScheduler::__cordl_internal_set_m_taskSchedulerId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_taskSchedulerId = value;
}
inline void System::Threading::Tasks::TaskScheduler::setStaticF_s_defaultTaskScheduler(::System::Threading::Tasks::TaskScheduler* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::TaskScheduler*, "s_defaultTaskScheduler", ::System::Threading::Tasks::TaskScheduler*>(
      std::forward<::System::Threading::Tasks::TaskScheduler*>(value));
}
inline ::System::Threading::Tasks::TaskScheduler* System::Threading::Tasks::TaskScheduler::getStaticF_s_defaultTaskScheduler() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::TaskScheduler*, "s_defaultTaskScheduler", ::System::Threading::Tasks::TaskScheduler*>();
}
inline void System::Threading::Tasks::TaskScheduler::setStaticF_s_taskSchedulerIdCounter(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_taskSchedulerIdCounter", ::System::Threading::Tasks::TaskScheduler*>(std::forward<int32_t>(value));
}
inline int32_t System::Threading::Tasks::TaskScheduler::getStaticF_s_taskSchedulerIdCounter() {
  return ::cordl_internals::getStaticField<int32_t, "s_taskSchedulerIdCounter", ::System::Threading::Tasks::TaskScheduler*>();
}
inline void System::Threading::Tasks::TaskScheduler::setStaticF__unobservedTaskException(::System::EventHandler_1<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>* value) {
  ::cordl_internals::setStaticField<::System::EventHandler_1<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>*, "_unobservedTaskException", ::System::Threading::Tasks::TaskScheduler*>(
      std::forward<::System::EventHandler_1<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>*>(value));
}
inline ::System::EventHandler_1<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>* System::Threading::Tasks::TaskScheduler::getStaticF__unobservedTaskException() {
  return ::cordl_internals::getStaticField<::System::EventHandler_1<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>*, "_unobservedTaskException",
                                           ::System::Threading::Tasks::TaskScheduler*>();
}
inline void System::Threading::Tasks::TaskScheduler::setStaticF__unobservedTaskExceptionLockObject(::System::Threading::Lock* value) {
  ::cordl_internals::setStaticField<::System::Threading::Lock*, "_unobservedTaskExceptionLockObject", ::System::Threading::Tasks::TaskScheduler*>(std::forward<::System::Threading::Lock*>(value));
}
inline ::System::Threading::Lock* System::Threading::Tasks::TaskScheduler::getStaticF__unobservedTaskExceptionLockObject() {
  return ::cordl_internals::getStaticField<::System::Threading::Lock*, "_unobservedTaskExceptionLockObject", ::System::Threading::Tasks::TaskScheduler*>();
}
inline void System::Threading::Tasks::TaskScheduler::QueueTask(::System::Threading::Tasks::Task* task) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::TaskScheduler*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, task);
}
inline bool System::Threading::Tasks::TaskScheduler::TryExecuteTaskInline(::System::Threading::Tasks::Task* task, bool taskWasPreviouslyQueued) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::TaskScheduler*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, task, taskWasPreviouslyQueued);
}
inline bool System::Threading::Tasks::TaskScheduler::TryRunInline(::System::Threading::Tasks::Task* task, bool taskWasPreviouslyQueued) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskScheduler*>(),
                                                                                         { "TryRunInline", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, task, taskWasPreviouslyQueued);
}
inline bool System::Threading::Tasks::TaskScheduler::TryDequeue(::System::Threading::Tasks::Task* task) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::TaskScheduler*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, task);
}
inline void System::Threading::Tasks::TaskScheduler::NotifyWorkItemProgress() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::TaskScheduler*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Threading::Tasks::TaskScheduler::get_RequiresAtomicStartTransition() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::TaskScheduler*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Threading::Tasks::TaskScheduler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskScheduler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::TaskScheduler* System::Threading::Tasks::TaskScheduler::get_Default() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskScheduler*>(), { "get_Default", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskScheduler*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::TaskScheduler* System::Threading::Tasks::TaskScheduler::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskScheduler*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskScheduler*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::TaskScheduler* System::Threading::Tasks::TaskScheduler::get_InternalCurrent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskScheduler*>(), { "get_InternalCurrent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskScheduler*>(nullptr, ___internal_method);
}
inline int32_t System::Threading::Tasks::TaskScheduler::get_Id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskScheduler*>(), { "get_Id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Threading::Tasks::TaskScheduler::PublishUnobservedTaskException(::System::Object* sender, ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs* ueea) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskScheduler*>(),
                          { "PublishUnobservedTaskException", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sender, ueea);
}
inline ::System::Threading::Tasks::TaskScheduler* System::Threading::Tasks::TaskScheduler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::TaskScheduler*>());
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::TaskScheduler::TaskScheduler() {}
