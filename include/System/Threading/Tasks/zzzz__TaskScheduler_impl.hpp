#pragma once
// IWYU pragma private; include "System/Threading/Tasks/TaskScheduler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__TaskScheduler_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConditionalWeakTable_2_def.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::TaskScheduler::*)(::System::Threading::Tasks::Task*)>(
    &::System::Threading::Tasks::TaskScheduler::QueueTask)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskScheduler.TryExecuteTaskInline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Tasks::TaskScheduler::*)(::System::Threading::Tasks::Task*, bool)>(
    &::System::Threading::Tasks::TaskScheduler::TryExecuteTaskInline)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskScheduler.TryRunInline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Tasks::TaskScheduler::*)(::System::Threading::Tasks::Task*, bool)>(
    &::System::Threading::Tasks::TaskScheduler::TryRunInline)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x3e670c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get(), "TryRunInline", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskScheduler.TryDequeue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Tasks::TaskScheduler::*)(::System::Threading::Tasks::Task*)>(
    &::System::Threading::Tasks::TaskScheduler::TryDequeue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e6d548;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskScheduler.NotifyWorkItemProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::TaskScheduler::*)()>(
    &::System::Threading::Tasks::TaskScheduler::NotifyWorkItemProgress)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e6d550;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskScheduler.get_RequiresAtomicStartTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Tasks::TaskScheduler::*)()>(
    &::System::Threading::Tasks::TaskScheduler::get_RequiresAtomicStartTransition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e6d554;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskScheduler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::TaskScheduler::*)()>(&::System::Threading::Tasks::TaskScheduler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e6d55c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskScheduler.get_Default
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::TaskScheduler* (*)()>(&::System::Threading::Tasks::TaskScheduler::get_Default)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3e6d564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get(), "get_Default",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskScheduler.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::TaskScheduler* (*)()>(&::System::Threading::Tasks::TaskScheduler::get_Current)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3e67a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get(), "get_Current",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskScheduler.get_InternalCurrent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::TaskScheduler* (*)()>(&::System::Threading::Tasks::TaskScheduler::get_InternalCurrent)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3e66708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get(),
                                                                               "get_InternalCurrent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskScheduler.get_Id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::Tasks::TaskScheduler::*)()>(&::System::Threading::Tasks::TaskScheduler::get_Id)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3e672bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get(), "get_Id",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskScheduler.PublishUnobservedTaskException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*)>(
    &::System::Threading::Tasks::TaskScheduler::PublishUnobservedTaskException)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x3e6c720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get(), "PublishUnobservedTaskException", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>::get() })));
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
inline void System::Threading::Tasks::TaskScheduler::setStaticF_s_activeTaskSchedulers(
    ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Threading::Tasks::TaskScheduler*, ::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Threading::Tasks::TaskScheduler*, ::System::Object*>*, "s_activeTaskSchedulers",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get>(
      std::forward<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Threading::Tasks::TaskScheduler*, ::System::Object*>*>(value));
}
inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Threading::Tasks::TaskScheduler*, ::System::Object*>*
System::Threading::Tasks::TaskScheduler::getStaticF_s_activeTaskSchedulers() {
  return ::cordl_internals::getStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Threading::Tasks::TaskScheduler*, ::System::Object*>*, "s_activeTaskSchedulers",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get>();
}
inline void System::Threading::Tasks::TaskScheduler::setStaticF_s_defaultTaskScheduler(::System::Threading::Tasks::TaskScheduler* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::TaskScheduler*, "s_defaultTaskScheduler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get>(
      std::forward<::System::Threading::Tasks::TaskScheduler*>(value));
}
inline ::System::Threading::Tasks::TaskScheduler* System::Threading::Tasks::TaskScheduler::getStaticF_s_defaultTaskScheduler() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::TaskScheduler*, "s_defaultTaskScheduler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get>();
}
inline void System::Threading::Tasks::TaskScheduler::setStaticF_s_taskSchedulerIdCounter(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_taskSchedulerIdCounter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t System::Threading::Tasks::TaskScheduler::getStaticF_s_taskSchedulerIdCounter() {
  return ::cordl_internals::getStaticField<int32_t, "s_taskSchedulerIdCounter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get>();
}
inline void System::Threading::Tasks::TaskScheduler::setStaticF__unobservedTaskException(::System::EventHandler_1<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>* value) {
  ::cordl_internals::setStaticField<::System::EventHandler_1<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>*, "_unobservedTaskException",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get>(
      std::forward<::System::EventHandler_1<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>*>(value));
}
inline ::System::EventHandler_1<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>* System::Threading::Tasks::TaskScheduler::getStaticF__unobservedTaskException() {
  return ::cordl_internals::getStaticField<::System::EventHandler_1<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>*, "_unobservedTaskException",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get>();
}
inline void System::Threading::Tasks::TaskScheduler::setStaticF__unobservedTaskExceptionLockObject(::System::Threading::Lock* value) {
  ::cordl_internals::setStaticField<::System::Threading::Lock*, "_unobservedTaskExceptionLockObject",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get>(std::forward<::System::Threading::Lock*>(value));
}
inline ::System::Threading::Lock* System::Threading::Tasks::TaskScheduler::getStaticF__unobservedTaskExceptionLockObject() {
  return ::cordl_internals::getStaticField<::System::Threading::Lock*, "_unobservedTaskExceptionLockObject",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get>();
}
inline void System::Threading::Tasks::TaskScheduler::QueueTask(::System::Threading::Tasks::Task* task) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline bool System::Threading::Tasks::TaskScheduler::TryExecuteTaskInline(::System::Threading::Tasks::Task* task, bool taskWasPreviouslyQueued) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, task, taskWasPreviouslyQueued);
}
inline bool System::Threading::Tasks::TaskScheduler::TryRunInline(::System::Threading::Tasks::Task* task, bool taskWasPreviouslyQueued) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get(), "TryRunInline", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, task, taskWasPreviouslyQueued);
}
inline bool System::Threading::Tasks::TaskScheduler::TryDequeue(::System::Threading::Tasks::Task* task) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, task);
}
inline void System::Threading::Tasks::TaskScheduler::NotifyWorkItemProgress() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Threading::Tasks::TaskScheduler::get_RequiresAtomicStartTransition() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Threading::Tasks::TaskScheduler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::TaskScheduler* System::Threading::Tasks::TaskScheduler::get_Default() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get(), "get_Default",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskScheduler*, false>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::TaskScheduler* System::Threading::Tasks::TaskScheduler::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get(), "get_Current",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskScheduler*, false>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::TaskScheduler* System::Threading::Tasks::TaskScheduler::get_InternalCurrent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get(),
                                                                             "get_InternalCurrent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskScheduler*, false>(nullptr, ___internal_method);
}
inline int32_t System::Threading::Tasks::TaskScheduler::get_Id() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get(), "get_Id",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Threading::Tasks::TaskScheduler::PublishUnobservedTaskException(::System::Object* sender, ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs* ueea) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskScheduler*>::get(), "PublishUnobservedTaskException", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sender, ueea);
}
inline ::System::Threading::Tasks::TaskScheduler* System::Threading::Tasks::TaskScheduler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::Tasks::TaskScheduler*>());
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::TaskScheduler::TaskScheduler() {}
