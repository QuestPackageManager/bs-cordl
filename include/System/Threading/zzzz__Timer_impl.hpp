#pragma once
// IWYU pragma private; include "System/Threading/Timer.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_impl.hpp"
#include "System/Collections/zzzz__IComparer_impl.hpp"
#include "System/zzzz__IAsyncDisposable_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__Timer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Threading/zzzz__TimerCallback_def.hpp"
#include "System/Threading/zzzz__Timer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Threading::Timer_TimerComparer.System_Collections_IComparer_Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::Timer_TimerComparer::*)(::System::Object*, ::System::Object*)>(
    &::System::Threading::Timer_TimerComparer::System_Collections_IComparer_Compare)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3e6b89c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer_TimerComparer>::get(),
                                                                               "System.Collections.IComparer.Compare", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer_TimerComparer.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::Timer_TimerComparer::*)(::System::Threading::Timer*, ::System::Threading::Timer*)>(
    &::System::Threading::Timer_TimerComparer::Compare)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3e6b934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer_TimerComparer>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get() })));
    return ___internal_method;
  }
};
inline int32_t System::Threading::Timer_TimerComparer::System_Collections_IComparer_Compare(::System::Object* x, ::System::Object* y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer_TimerComparer>::get(),
                                                                             "System.Collections.IComparer.Compare", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x, y);
}
inline int32_t System::Threading::Timer_TimerComparer::Compare(::System::Threading::Timer* tx, ::System::Threading::Timer* ty) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer_TimerComparer>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, tx, ty);
}
/// @brief Convert operator to "::System::Collections::IComparer"
constexpr System::Threading::Timer_TimerComparer::operator ::System::Collections::IComparer*() {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::IComparer"
constexpr ::System::Collections::IComparer* System::Threading::Timer_TimerComparer::i___System__Collections__IComparer() {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>"
constexpr System::Threading::Timer_TimerComparer::operator ::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>*() {
  return static_cast<::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>"
constexpr ::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>*
System::Threading::Timer_TimerComparer::i___System__Collections__Generic__IComparer_1___System__Threading__Timer__() {
  return static_cast<::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters []
constexpr ::System::Threading::Timer_TimerComparer::Timer_TimerComparer() {}
//  Writing Method size for method: ::System::Threading::Timer_Scheduler.InitScheduler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Timer_Scheduler::*)()>(&::System::Threading::Timer_Scheduler::InitScheduler)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3e6b9a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer_Scheduler*>::get(), "InitScheduler",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer_Scheduler.WakeupScheduler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Timer_Scheduler::*)()>(&::System::Threading::Timer_Scheduler::WakeupScheduler)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3e6baa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer_Scheduler*>::get(), "WakeupScheduler",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer_Scheduler.SchedulerThread
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Timer_Scheduler::*)()>(&::System::Threading::Timer_Scheduler::SchedulerThread)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x3e6babc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer_Scheduler*>::get(), "SchedulerThread",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer_Scheduler.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Timer_Scheduler* (*)()>(&::System::Threading::Timer_Scheduler::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3e6bf00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer_Scheduler*>::get(), "get_Instance",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer_Scheduler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Timer_Scheduler::*)()>(&::System::Threading::Timer_Scheduler::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3e6bf58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer_Scheduler*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer_Scheduler.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Timer_Scheduler::*)(::System::Threading::Timer*)>(
    &::System::Threading::Timer_Scheduler::Remove)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3e6b5a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer_Scheduler*>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer_Scheduler.Change
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Timer_Scheduler::*)(::System::Threading::Timer*, int64_t)>(
    &::System::Threading::Timer_Scheduler::Change)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x3e6b678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer_Scheduler*>::get(), "Change", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer_Scheduler.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Timer_Scheduler::*)(::System::Threading::Timer*)>(
    &::System::Threading::Timer_Scheduler::Add)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3e6c024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer_Scheduler*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer_Scheduler.InternalRemove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Timer_Scheduler::*)(::System::Threading::Timer*)>(
    &::System::Threading::Timer_Scheduler::InternalRemove)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3e6bff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer_Scheduler*>::get(), "InternalRemove", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer_Scheduler.TimerCB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(&::System::Threading::Timer_Scheduler::TimerCB)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3e6c110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer_Scheduler*>::get(), "TimerCB", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer_Scheduler.FireTimer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Timer_Scheduler::*)(::System::Threading::Timer*)>(
    &::System::Threading::Timer_Scheduler::FireTimer)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3e6c188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer_Scheduler*>::get(), "FireTimer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer_Scheduler.RunSchedulerLoop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::Timer_Scheduler::*)()>(&::System::Threading::Timer_Scheduler::RunSchedulerLoop)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x3e6bbec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer_Scheduler*>::get(), "RunSchedulerLoop",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& System::Threading::Timer_Scheduler::__cordl_internal_get_needReSort() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___needReSort;
}
constexpr bool const& System::Threading::Timer_Scheduler::__cordl_internal_get_needReSort() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___needReSort;
}
constexpr void System::Threading::Timer_Scheduler::__cordl_internal_set_needReSort(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___needReSort = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Threading::Timer*>*& System::Threading::Timer_Scheduler::__cordl_internal_get_list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
constexpr ::System::Collections::Generic::List_1<::System::Threading::Timer*>* const& System::Threading::Timer_Scheduler::__cordl_internal_get_list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
constexpr void System::Threading::Timer_Scheduler::__cordl_internal_set_list(::System::Collections::Generic::List_1<::System::Threading::Timer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___list)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& System::Threading::Timer_Scheduler::__cordl_internal_get_current_next_run() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___current_next_run;
}
constexpr int64_t const& System::Threading::Timer_Scheduler::__cordl_internal_get_current_next_run() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___current_next_run;
}
constexpr void System::Threading::Timer_Scheduler::__cordl_internal_set_current_next_run(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___current_next_run = value;
}
constexpr ::System::Threading::ManualResetEvent*& System::Threading::Timer_Scheduler::__cordl_internal_get_changed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___changed;
}
constexpr ::System::Threading::ManualResetEvent* const& System::Threading::Timer_Scheduler::__cordl_internal_get_changed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___changed;
}
constexpr void System::Threading::Timer_Scheduler::__cordl_internal_set_changed(::System::Threading::ManualResetEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___changed)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Threading::Timer_Scheduler::setStaticF_instance(::System::Threading::Timer_Scheduler* value) {
  ::cordl_internals::setStaticField<::System::Threading::Timer_Scheduler*, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer_Scheduler*>::get>(
      std::forward<::System::Threading::Timer_Scheduler*>(value));
}
inline ::System::Threading::Timer_Scheduler* System::Threading::Timer_Scheduler::getStaticF_instance() {
  return ::cordl_internals::getStaticField<::System::Threading::Timer_Scheduler*, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer_Scheduler*>::get>();
}
inline void System::Threading::Timer_Scheduler::InitScheduler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer_Scheduler*>::get(), "InitScheduler",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::Timer_Scheduler::WakeupScheduler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer_Scheduler*>::get(), "WakeupScheduler",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::Timer_Scheduler::SchedulerThread() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer_Scheduler*>::get(), "SchedulerThread",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Timer_Scheduler* System::Threading::Timer_Scheduler::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer_Scheduler*>::get(), "get_Instance",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Timer_Scheduler*, false>(nullptr, ___internal_method);
}
inline void System::Threading::Timer_Scheduler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer_Scheduler*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::Timer_Scheduler::Remove(::System::Threading::Timer* timer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer_Scheduler*>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timer);
}
inline void System::Threading::Timer_Scheduler::Change(::System::Threading::Timer* timer, int64_t new_next_run) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer_Scheduler*>::get(), "Change", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timer, new_next_run);
}
inline void System::Threading::Timer_Scheduler::Add(::System::Threading::Timer* timer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer_Scheduler*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timer);
}
inline void System::Threading::Timer_Scheduler::InternalRemove(::System::Threading::Timer* timer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer_Scheduler*>::get(), "InternalRemove", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timer);
}
inline void System::Threading::Timer_Scheduler::TimerCB(::System::Object* o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer_Scheduler*>::get(), "TimerCB", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, o);
}
inline void System::Threading::Timer_Scheduler::FireTimer(::System::Threading::Timer* timer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer_Scheduler*>::get(), "FireTimer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Timer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timer);
}
inline int32_t System::Threading::Timer_Scheduler::RunSchedulerLoop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer_Scheduler*>::get(), "RunSchedulerLoop",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Threading::Timer_Scheduler* System::Threading::Timer_Scheduler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::Timer_Scheduler*>());
}
// Ctor Parameters []
constexpr ::System::Threading::Timer_Scheduler::Timer_Scheduler() {}
//  Writing Method size for method: ::System::Threading::Timer.get_scheduler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Timer_Scheduler* (*)()>(&::System::Threading::Timer::get_scheduler)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3e6b0b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "get_scheduler",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Timer::*)(::System::Threading::TimerCallback*, ::System::Object*, int32_t, int32_t)>(
    &::System::Threading::Timer::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3e6b140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::TimerCallback*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Threading::Timer::*)(::System::Threading::TimerCallback*, ::System::Object*, ::System::TimeSpan, ::System::TimeSpan)>(&::System::Threading::Timer::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3e6b1fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::TimerCallback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Timer::*)(::System::Threading::TimerCallback*, ::System::Object*, int64_t, int64_t)>(
    &::System::Threading::Timer::Init)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3e6b18c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::TimerCallback*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer.Change
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Timer::*)(int32_t, int32_t)>(&::System::Threading::Timer::Change)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3e6b498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "Change", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer.Change
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Timer::*)(::System::TimeSpan, ::System::TimeSpan)>(&::System::Threading::Timer::Change)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3e6b4b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "Change", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Timer::*)()>(&::System::Threading::Timer::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3e6b570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer.Change
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Timer::*)(int64_t, int64_t, bool)>(&::System::Threading::Timer::Change)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x3e6b2d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "Change", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer.DisposeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask (::System::Threading::Timer::*)()>(&::System::Threading::Timer::DisposeAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3e6b804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "DisposeAsync",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer.KeepRootedWhileScheduled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Timer::*)()>(&::System::Threading::Timer::KeepRootedWhileScheduled)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e6b898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "KeepRootedWhileScheduled",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer.GetTimeMonotonic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&::System::Threading::Timer::GetTimeMonotonic)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e6b674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "GetTimeMonotonic",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Threading::TimerCallback*& System::Threading::Timer::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr ::System::Threading::TimerCallback* const& System::Threading::Timer::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr void System::Threading::Timer::__cordl_internal_set_callback(::System::Threading::TimerCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Threading::Timer::__cordl_internal_get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr ::System::Object* const& System::Threading::Timer::__cordl_internal_get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr void System::Threading::Timer::__cordl_internal_set_state(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___state)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& System::Threading::Timer::__cordl_internal_get_due_time_ms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___due_time_ms;
}
constexpr int64_t const& System::Threading::Timer::__cordl_internal_get_due_time_ms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___due_time_ms;
}
constexpr void System::Threading::Timer::__cordl_internal_set_due_time_ms(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___due_time_ms = value;
}
constexpr int64_t& System::Threading::Timer::__cordl_internal_get_period_ms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___period_ms;
}
constexpr int64_t const& System::Threading::Timer::__cordl_internal_get_period_ms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___period_ms;
}
constexpr void System::Threading::Timer::__cordl_internal_set_period_ms(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___period_ms = value;
}
constexpr int64_t& System::Threading::Timer::__cordl_internal_get_next_run() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next_run;
}
constexpr int64_t const& System::Threading::Timer::__cordl_internal_get_next_run() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next_run;
}
constexpr void System::Threading::Timer::__cordl_internal_set_next_run(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___next_run = value;
}
constexpr bool& System::Threading::Timer::__cordl_internal_get_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr bool const& System::Threading::Timer::__cordl_internal_get_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr void System::Threading::Timer::__cordl_internal_set_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposed = value;
}
constexpr bool& System::Threading::Timer::__cordl_internal_get_is_dead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_dead;
}
constexpr bool const& System::Threading::Timer::__cordl_internal_get_is_dead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_dead;
}
constexpr void System::Threading::Timer::__cordl_internal_set_is_dead(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___is_dead = value;
}
constexpr bool& System::Threading::Timer::__cordl_internal_get_is_added() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_added;
}
constexpr bool const& System::Threading::Timer::__cordl_internal_get_is_added() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_added;
}
constexpr void System::Threading::Timer::__cordl_internal_set_is_added(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___is_added = value;
}
inline ::System::Threading::Timer_Scheduler* System::Threading::Timer::get_scheduler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "get_scheduler",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Timer_Scheduler*, false>(nullptr, ___internal_method);
}
inline void System::Threading::Timer::_ctor(::System::Threading::TimerCallback* callback, ::System::Object* state, int32_t dueTime, int32_t period) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::TimerCallback*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, state, dueTime, period);
}
inline void System::Threading::Timer::_ctor(::System::Threading::TimerCallback* callback, ::System::Object* state, ::System::TimeSpan dueTime, ::System::TimeSpan period) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::TimerCallback*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, state, dueTime, period);
}
inline void System::Threading::Timer::Init(::System::Threading::TimerCallback* callback, ::System::Object* state, int64_t dueTime, int64_t period) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::TimerCallback*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, state, dueTime, period);
}
inline bool System::Threading::Timer::Change(int32_t dueTime, int32_t period) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "Change", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, dueTime, period);
}
inline bool System::Threading::Timer::Change(::System::TimeSpan dueTime, ::System::TimeSpan period) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "Change", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, dueTime, period);
}
inline void System::Threading::Timer::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Threading::Timer::Change(int64_t dueTime, int64_t period, bool first) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "Change", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, dueTime, period, first);
}
inline ::System::Threading::Tasks::ValueTask System::Threading::Timer::DisposeAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "DisposeAsync",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask, false>(this, ___internal_method);
}
inline void System::Threading::Timer::KeepRootedWhileScheduled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "KeepRootedWhileScheduled",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int64_t System::Threading::Timer::GetTimeMonotonic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timer*>::get(), "GetTimeMonotonic",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method);
}
inline ::System::Threading::Timer* System::Threading::Timer::New_ctor(::System::Threading::TimerCallback* callback, ::System::Object* state, int32_t dueTime, int32_t period) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::Timer*>(callback, state, dueTime, period));
}
inline ::System::Threading::Timer* System::Threading::Timer::New_ctor(::System::Threading::TimerCallback* callback, ::System::Object* state, ::System::TimeSpan dueTime, ::System::TimeSpan period) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::Timer*>(callback, state, dueTime, period));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Threading::Timer::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Threading::Timer::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IAsyncDisposable"
constexpr System::Threading::Timer::operator ::System::IAsyncDisposable*() noexcept {
  return static_cast<::System::IAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IAsyncDisposable"
constexpr ::System::IAsyncDisposable* System::Threading::Timer::i___System__IAsyncDisposable() noexcept {
  return static_cast<::System::IAsyncDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Threading::Timer::Timer() {}
