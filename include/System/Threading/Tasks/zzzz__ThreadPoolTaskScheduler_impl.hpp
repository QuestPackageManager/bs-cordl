#pragma once
// IWYU pragma private; include "System/Threading/Tasks/ThreadPoolTaskScheduler.hpp"
#include "System/Threading/Tasks/zzzz__TaskScheduler_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__ThreadPoolTaskScheduler_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__ThreadPoolTaskScheduler_def.hpp"
#include "System/Threading/zzzz__ParameterizedThreadStart_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::ThreadPoolTaskScheduler___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ThreadPoolTaskScheduler___c::*)()>(
    &::System::Threading::Tasks::ThreadPoolTaskScheduler___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e6c070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler___c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ThreadPoolTaskScheduler___c.__cctor_b__10_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ThreadPoolTaskScheduler___c::*)(::System::Object*)>(
    &::System::Threading::Tasks::ThreadPoolTaskScheduler___c::__cctor_b__10_0)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3e6c078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler___c*>::get(), "<.cctor>b__10_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline void System::Threading::Tasks::ThreadPoolTaskScheduler___c::setStaticF___9(::System::Threading::Tasks::ThreadPoolTaskScheduler___c* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::ThreadPoolTaskScheduler___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler___c*>::get>(
      std::forward<::System::Threading::Tasks::ThreadPoolTaskScheduler___c*>(value));
}
inline ::System::Threading::Tasks::ThreadPoolTaskScheduler___c* System::Threading::Tasks::ThreadPoolTaskScheduler___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::ThreadPoolTaskScheduler___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler___c*>::get>();
}
inline void System::Threading::Tasks::ThreadPoolTaskScheduler___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::Tasks::ThreadPoolTaskScheduler___c::__cctor_b__10_0(::System::Object* s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler___c*>::get(), "<.cctor>b__10_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
inline ::System::Threading::Tasks::ThreadPoolTaskScheduler___c* System::Threading::Tasks::ThreadPoolTaskScheduler___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::Tasks::ThreadPoolTaskScheduler___c*>());
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::ThreadPoolTaskScheduler___c::ThreadPoolTaskScheduler___c() {}
//  Writing Method size for method: ::System::Threading::Tasks::ThreadPoolTaskScheduler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ThreadPoolTaskScheduler::*)()>(
    &::System::Threading::Tasks::ThreadPoolTaskScheduler::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3e6bc30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ThreadPoolTaskScheduler.QueueTask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ThreadPoolTaskScheduler::*)(::System::Threading::Tasks::Task*)>(
    &::System::Threading::Tasks::ThreadPoolTaskScheduler::QueueTask)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x3e6bc88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ThreadPoolTaskScheduler.TryExecuteTaskInline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Tasks::ThreadPoolTaskScheduler::*)(::System::Threading::Tasks::Task*, bool)>(
    &::System::Threading::Tasks::ThreadPoolTaskScheduler::TryExecuteTaskInline)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3e6be50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ThreadPoolTaskScheduler.TryDequeue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Tasks::ThreadPoolTaskScheduler::*)(::System::Threading::Tasks::Task*)>(
    &::System::Threading::Tasks::ThreadPoolTaskScheduler::TryDequeue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e6bf30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ThreadPoolTaskScheduler.NotifyWorkItemProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ThreadPoolTaskScheduler::*)()>(
    &::System::Threading::Tasks::ThreadPoolTaskScheduler::NotifyWorkItemProgress)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3e6bf38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ThreadPoolTaskScheduler.get_RequiresAtomicStartTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Tasks::ThreadPoolTaskScheduler::*)()>(
    &::System::Threading::Tasks::ThreadPoolTaskScheduler::get_RequiresAtomicStartTransition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e6bf48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(), 8));
    return ___internal_method;
  }
};
inline void System::Threading::Tasks::ThreadPoolTaskScheduler::setStaticF_s_longRunningThreadWork(::System::Threading::ParameterizedThreadStart* value) {
  ::cordl_internals::setStaticField<::System::Threading::ParameterizedThreadStart*, "s_longRunningThreadWork",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get>(
      std::forward<::System::Threading::ParameterizedThreadStart*>(value));
}
inline ::System::Threading::ParameterizedThreadStart* System::Threading::Tasks::ThreadPoolTaskScheduler::getStaticF_s_longRunningThreadWork() {
  return ::cordl_internals::getStaticField<::System::Threading::ParameterizedThreadStart*, "s_longRunningThreadWork",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get>();
}
inline void System::Threading::Tasks::ThreadPoolTaskScheduler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::Tasks::ThreadPoolTaskScheduler::QueueTask(::System::Threading::Tasks::Task* task) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline bool System::Threading::Tasks::ThreadPoolTaskScheduler::TryExecuteTaskInline(::System::Threading::Tasks::Task* task, bool taskWasPreviouslyQueued) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, task, taskWasPreviouslyQueued);
}
inline bool System::Threading::Tasks::ThreadPoolTaskScheduler::TryDequeue(::System::Threading::Tasks::Task* task) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, task);
}
inline void System::Threading::Tasks::ThreadPoolTaskScheduler::NotifyWorkItemProgress() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Threading::Tasks::ThreadPoolTaskScheduler::get_RequiresAtomicStartTransition() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ThreadPoolTaskScheduler*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::ThreadPoolTaskScheduler* System::Threading::Tasks::ThreadPoolTaskScheduler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::Tasks::ThreadPoolTaskScheduler*>());
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::ThreadPoolTaskScheduler::ThreadPoolTaskScheduler() {}
