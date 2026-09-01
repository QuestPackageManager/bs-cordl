#pragma once
// IWYU pragma private; include "System\Threading\Timer.hpp"
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__Timer_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Threading/zzzz__TimerCallback_def.hpp"
#include "System/Threading/zzzz__Timer_def.hpp"
#include "System/zzzz__IAsyncDisposable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Threading::Timer_TimerComparer.System_Collections_IComparer_Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Threading::Timer_TimerComparer::*)(::System::Object*, ::System::Object*)>(
    &::System::Threading::Timer_TimerComparer::System_Collections_IComparer_Compare)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5cba518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer_TimerComparer>(),
                                                             { "System.Collections.IComparer.Compare", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer_TimerComparer.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Threading::Timer_TimerComparer::*)(::System::Threading::Timer*, ::System::Threading::Timer*)>(
    &::System::Threading::Timer_TimerComparer::Compare)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5cba5c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer_TimerComparer>(),
                                                             { "Compare", {}, { ::i2c::type_of<::System::Threading::Timer*>(), ::i2c::type_of<::System::Threading::Timer*>() } })));
    return ___internal_method;
  }
};
inline int32_t System::Threading::Timer_TimerComparer::System_Collections_IComparer_Compare(::System::Object* x, ::System::Object* y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer_TimerComparer>(),
                                                           { "System.Collections.IComparer.Compare", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, x, y);
}
inline int32_t System::Threading::Timer_TimerComparer::Compare(::System::Threading::Timer* tx, ::System::Threading::Timer* ty) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer_TimerComparer>(),
                                                           { "Compare", {}, { ::i2c::type_of<::System::Threading::Timer*>(), ::i2c::type_of<::System::Threading::Timer*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, tx, ty);
}
/// @brief Convert operator to "::System::Collections::IComparer"
constexpr System::Threading::Timer_TimerComparer::operator ::System::Collections::IComparer*() {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IComparer"
constexpr ::System::Collections::IComparer* System::Threading::Timer_TimerComparer::i___System__Collections__IComparer() {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>"
constexpr System::Threading::Timer_TimerComparer::operator ::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>*() {
  return static_cast<::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>"
constexpr ::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>*
System::Threading::Timer_TimerComparer::i___System__Collections__Generic__IComparer_1___System__Threading__Timer__() {
  return static_cast<::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::System::Threading::Timer_TimerComparer::Timer_TimerComparer() {}
//  Writing Method size for method: ::System::Threading::Timer_Scheduler.InitScheduler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Timer_Scheduler::*)()>(&::System::Threading::Timer_Scheduler::InitScheduler)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5cba648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer_Scheduler*>(), { "InitScheduler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer_Scheduler.WakeupScheduler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Timer_Scheduler::*)()>(&::System::Threading::Timer_Scheduler::WakeupScheduler)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5cba73c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer_Scheduler*>(), { "WakeupScheduler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer_Scheduler.SchedulerThread
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Timer_Scheduler::*)()>(&::System::Threading::Timer_Scheduler::SchedulerThread)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5cba754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer_Scheduler*>(), { "SchedulerThread", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer_Scheduler.get_Instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Timer_Scheduler* (*)()>(&::System::Threading::Timer_Scheduler::get_Instance)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cbac00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer_Scheduler*>(), { "get_Instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer_Scheduler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Timer_Scheduler::*)()>(&::System::Threading::Timer_Scheduler::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5cbac5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer_Scheduler*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer_Scheduler.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Timer_Scheduler::*)(::System::Threading::Timer*)>(&::System::Threading::Timer_Scheduler::Remove)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5cba228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer_Scheduler*>(), { "Remove", {}, { ::i2c::type_of<::System::Threading::Timer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer_Scheduler.Change
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Timer_Scheduler::*)(::System::Threading::Timer*, int64_t)>(&::System::Threading::Timer_Scheduler::Change)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5cba2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Threading::Timer_Scheduler*>(), { "Change", {}, { ::i2c::type_of<::System::Threading::Timer*>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer_Scheduler.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Timer_Scheduler::*)(::System::Threading::Timer*)>(&::System::Threading::Timer_Scheduler::Add)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5cbad0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer_Scheduler*>(), { "Add", {}, { ::i2c::type_of<::System::Threading::Timer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer_Scheduler.InternalRemove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Timer_Scheduler::*)(::System::Threading::Timer*)>(&::System::Threading::Timer_Scheduler::InternalRemove)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cbacec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer_Scheduler*>(), { "InternalRemove", {}, { ::i2c::type_of<::System::Threading::Timer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer_Scheduler.TimerCB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Threading::Timer_Scheduler::TimerCB)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5cbae10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer_Scheduler*>(), { "TimerCB", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer_Scheduler.FireTimer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Timer_Scheduler::*)(::System::Threading::Timer*)>(&::System::Threading::Timer_Scheduler::FireTimer)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5cbae8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer_Scheduler*>(), { "FireTimer", {}, { ::i2c::type_of<::System::Threading::Timer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer_Scheduler.RunSchedulerLoop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Threading::Timer_Scheduler::*)()>(&::System::Threading::Timer_Scheduler::RunSchedulerLoop)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x5cba878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer_Scheduler*>(), { "RunSchedulerLoop", {}, {} })));
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
  this->___list = value;
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
  this->___changed = value;
}
inline void System::Threading::Timer_Scheduler::setStaticF_instance(::System::Threading::Timer_Scheduler* value) {
  ::cordl_internals::setStaticField<::System::Threading::Timer_Scheduler*, "instance", ::System::Threading::Timer_Scheduler*>(std::forward<::System::Threading::Timer_Scheduler*>(value));
}
inline ::System::Threading::Timer_Scheduler* System::Threading::Timer_Scheduler::getStaticF_instance() {
  return ::cordl_internals::getStaticField<::System::Threading::Timer_Scheduler*, "instance", ::System::Threading::Timer_Scheduler*>();
}
inline void System::Threading::Timer_Scheduler::InitScheduler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer_Scheduler*>(), { "InitScheduler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Timer_Scheduler::WakeupScheduler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer_Scheduler*>(), { "WakeupScheduler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Timer_Scheduler::SchedulerThread() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer_Scheduler*>(), { "SchedulerThread", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Timer_Scheduler* System::Threading::Timer_Scheduler::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer_Scheduler*>(), { "get_Instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Timer_Scheduler*>(nullptr, ___internal_method);
}
inline void System::Threading::Timer_Scheduler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer_Scheduler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Timer_Scheduler::Remove(::System::Threading::Timer* timer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer_Scheduler*>(), { "Remove", {}, { ::i2c::type_of<::System::Threading::Timer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timer);
}
inline void System::Threading::Timer_Scheduler::Change(::System::Threading::Timer* timer, int64_t new_next_run) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::Timer_Scheduler*>(), { "Change", {}, { ::i2c::type_of<::System::Threading::Timer*>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timer, new_next_run);
}
inline void System::Threading::Timer_Scheduler::Add(::System::Threading::Timer* timer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer_Scheduler*>(), { "Add", {}, { ::i2c::type_of<::System::Threading::Timer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timer);
}
inline void System::Threading::Timer_Scheduler::InternalRemove(::System::Threading::Timer* timer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer_Scheduler*>(), { "InternalRemove", {}, { ::i2c::type_of<::System::Threading::Timer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timer);
}
inline void System::Threading::Timer_Scheduler::TimerCB(::System::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer_Scheduler*>(), { "TimerCB", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, o);
}
inline void System::Threading::Timer_Scheduler::FireTimer(::System::Threading::Timer* timer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer_Scheduler*>(), { "FireTimer", {}, { ::i2c::type_of<::System::Threading::Timer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timer);
}
inline int32_t System::Threading::Timer_Scheduler::RunSchedulerLoop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer_Scheduler*>(), { "RunSchedulerLoop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Threading::Timer_Scheduler* System::Threading::Timer_Scheduler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Timer_Scheduler*>());
}
// Ctor Parameters []
constexpr ::System::Threading::Timer_Scheduler::Timer_Scheduler() {}
//  Writing Method size for method: ::System::Threading::Timer.get_scheduler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Timer_Scheduler* (*)()>(&::System::Threading::Timer::get_scheduler)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5cb9d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer*>(), { "get_scheduler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Timer::*)(::System::Threading::TimerCallback*, ::System::Object*, int32_t, int32_t)>(
    &::System::Threading::Timer::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cb9dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::Timer*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Threading::TimerCallback*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Timer::*)(::System::Threading::TimerCallback*, ::System::Object*, ::System::TimeSpan, ::System::TimeSpan)>(
    &::System::Threading::Timer::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5cb9e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer*>(), { ".ctor",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::System::Threading::TimerCallback*>(), ::i2c::type_of<::System::Object*>(),
                                                                                                    ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Timer::*)(::System::Threading::TimerCallback*, ::System::Object*, int64_t, int64_t)>(
    &::System::Threading::Timer::Init)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5cb9ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::Timer*>(),
                            { "Init", {}, { ::i2c::type_of<::System::Threading::TimerCallback*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer.Change
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Timer::*)(int32_t, int32_t)>(&::System::Threading::Timer::Change)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cba0f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer*>(), { "Change", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer.Change
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Timer::*)(::System::TimeSpan, ::System::TimeSpan)>(&::System::Threading::Timer::Change)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5cba110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer*>(), { "Change", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Timer::*)()>(&::System::Threading::Timer::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5cba1f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer.Change
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Timer::*)(int64_t, int64_t, bool)>(&::System::Threading::Timer::Change)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5cb9f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer*>(), { "Change", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer.DisposeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask (::System::Threading::Timer::*)()>(&::System::Threading::Timer::DisposeAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5cba480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer*>(), { "DisposeAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer.KeepRootedWhileScheduled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Timer::*)()>(&::System::Threading::Timer::KeepRootedWhileScheduled)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cba514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer*>(), { "KeepRootedWhileScheduled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Timer.GetTimeMonotonic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)()>(&::System::Threading::Timer::GetTimeMonotonic)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cba2f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer*>(), { "GetTimeMonotonic", {}, {} })));
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
  this->___callback = value;
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
  this->___state = value;
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer*>(), { "get_scheduler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Timer_Scheduler*>(nullptr, ___internal_method);
}
inline void System::Threading::Timer::_ctor(::System::Threading::TimerCallback* callback, ::System::Object* state, int32_t dueTime, int32_t period) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::Timer*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Threading::TimerCallback*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, state, dueTime, period);
}
inline void System::Threading::Timer::_ctor(::System::Threading::TimerCallback* callback, ::System::Object* state, ::System::TimeSpan dueTime, ::System::TimeSpan period) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer*>(), { ".ctor",
                                                                                                {},
                                                                                                { ::i2c::type_of<::System::Threading::TimerCallback*>(), ::i2c::type_of<::System::Object*>(),
                                                                                                  ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, state, dueTime, period);
}
inline void System::Threading::Timer::Init(::System::Threading::TimerCallback* callback, ::System::Object* state, int64_t dueTime, int64_t period) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::Timer*>(),
                          { "Init", {}, { ::i2c::type_of<::System::Threading::TimerCallback*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, state, dueTime, period);
}
inline bool System::Threading::Timer::Change(int32_t dueTime, int32_t period) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer*>(), { "Change", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, dueTime, period);
}
inline bool System::Threading::Timer::Change(::System::TimeSpan dueTime, ::System::TimeSpan period) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer*>(), { "Change", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, dueTime, period);
}
inline void System::Threading::Timer::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Threading::Timer::Change(int64_t dueTime, int64_t period, bool first) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer*>(), { "Change", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, dueTime, period, first);
}
inline ::System::Threading::Tasks::ValueTask System::Threading::Timer::DisposeAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer*>(), { "DisposeAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask>(this, ___internal_method);
}
inline void System::Threading::Timer::KeepRootedWhileScheduled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer*>(), { "KeepRootedWhileScheduled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t System::Threading::Timer::GetTimeMonotonic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Timer*>(), { "GetTimeMonotonic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline ::System::Threading::Timer* System::Threading::Timer::New_ctor(::System::Threading::TimerCallback* callback, ::System::Object* state, int32_t dueTime, int32_t period) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Timer*>(callback, state, dueTime, period));
}
inline ::System::Threading::Timer* System::Threading::Timer::New_ctor(::System::Threading::TimerCallback* callback, ::System::Object* state, ::System::TimeSpan dueTime, ::System::TimeSpan period) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Timer*>(callback, state, dueTime, period));
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
