#pragma once
// IWYU pragma private; include "System\Threading\Tasks\ThreadPoolTaskScheduler.hpp"
#include "System/Threading/Tasks/zzzz__TaskScheduler_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__ThreadPoolTaskScheduler_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__ThreadPoolTaskScheduler_def.hpp"
#include "System/Threading/zzzz__ParameterizedThreadStart_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::ThreadPoolTaskScheduler___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::ThreadPoolTaskScheduler___c::*)()>(&::System::Threading::Tasks::ThreadPoolTaskScheduler___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cc8af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ThreadPoolTaskScheduler___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ThreadPoolTaskScheduler___c.__cctor_b__10_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::ThreadPoolTaskScheduler___c::*)(::System::Object*)>(
    &::System::Threading::Tasks::ThreadPoolTaskScheduler___c::__cctor_b__10_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5cc8afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ThreadPoolTaskScheduler___c*>(), { "<.cctor>b__10_0", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void System::Threading::Tasks::ThreadPoolTaskScheduler___c::setStaticF___9(::System::Threading::Tasks::ThreadPoolTaskScheduler___c* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::ThreadPoolTaskScheduler___c*, "<>9", ::System::Threading::Tasks::ThreadPoolTaskScheduler___c*>(
      std::forward<::System::Threading::Tasks::ThreadPoolTaskScheduler___c*>(value));
}
inline ::System::Threading::Tasks::ThreadPoolTaskScheduler___c* System::Threading::Tasks::ThreadPoolTaskScheduler___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::ThreadPoolTaskScheduler___c*, "<>9", ::System::Threading::Tasks::ThreadPoolTaskScheduler___c*>();
}
inline void System::Threading::Tasks::ThreadPoolTaskScheduler___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ThreadPoolTaskScheduler___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Tasks::ThreadPoolTaskScheduler___c::__cctor_b__10_0(::System::Object* s) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ThreadPoolTaskScheduler___c*>(), { "<.cctor>b__10_0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::System::Threading::Tasks::ThreadPoolTaskScheduler___c* System::Threading::Tasks::ThreadPoolTaskScheduler___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::ThreadPoolTaskScheduler___c*>());
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::ThreadPoolTaskScheduler___c::ThreadPoolTaskScheduler___c() {}
//  Writing Method size for method: ::System::Threading::Tasks::ThreadPoolTaskScheduler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::ThreadPoolTaskScheduler::*)()>(&::System::Threading::Tasks::ThreadPoolTaskScheduler::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cc867c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ThreadPoolTaskScheduler*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ThreadPoolTaskScheduler.QueueTask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::ThreadPoolTaskScheduler::*)(::System::Threading::Tasks::Task*)>(
    &::System::Threading::Tasks::ThreadPoolTaskScheduler::QueueTask)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5cc86d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ThreadPoolTaskScheduler*>(),
                                                                                          { ::i2c::class_of<::System::Threading::Tasks::ThreadPoolTaskScheduler*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ThreadPoolTaskScheduler.TryExecuteTaskInline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::ThreadPoolTaskScheduler::*)(::System::Threading::Tasks::Task*, bool)>(
    &::System::Threading::Tasks::ThreadPoolTaskScheduler::TryExecuteTaskInline)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5cc88dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ThreadPoolTaskScheduler*>(),
                                                                                          { ::i2c::class_of<::System::Threading::Tasks::ThreadPoolTaskScheduler*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ThreadPoolTaskScheduler.TryDequeue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::ThreadPoolTaskScheduler::*)(::System::Threading::Tasks::Task*)>(
    &::System::Threading::Tasks::ThreadPoolTaskScheduler::TryDequeue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cc89b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ThreadPoolTaskScheduler*>(),
                                                                                          { ::i2c::class_of<::System::Threading::Tasks::ThreadPoolTaskScheduler*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ThreadPoolTaskScheduler.NotifyWorkItemProgress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::ThreadPoolTaskScheduler::*)()>(&::System::Threading::Tasks::ThreadPoolTaskScheduler::NotifyWorkItemProgress)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cc89c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ThreadPoolTaskScheduler*>(),
                                                                                          { ::i2c::class_of<::System::Threading::Tasks::ThreadPoolTaskScheduler*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ThreadPoolTaskScheduler.get_RequiresAtomicStartTransition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::ThreadPoolTaskScheduler::*)()>(
    &::System::Threading::Tasks::ThreadPoolTaskScheduler::get_RequiresAtomicStartTransition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cc89d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ThreadPoolTaskScheduler*>(),
                                                                                          { ::i2c::class_of<::System::Threading::Tasks::ThreadPoolTaskScheduler*>(), 8 }));
    return ___internal_method;
  }
};
inline void System::Threading::Tasks::ThreadPoolTaskScheduler::setStaticF_s_longRunningThreadWork(::System::Threading::ParameterizedThreadStart* value) {
  ::cordl_internals::setStaticField<::System::Threading::ParameterizedThreadStart*, "s_longRunningThreadWork", ::System::Threading::Tasks::ThreadPoolTaskScheduler*>(
      std::forward<::System::Threading::ParameterizedThreadStart*>(value));
}
inline ::System::Threading::ParameterizedThreadStart* System::Threading::Tasks::ThreadPoolTaskScheduler::getStaticF_s_longRunningThreadWork() {
  return ::cordl_internals::getStaticField<::System::Threading::ParameterizedThreadStart*, "s_longRunningThreadWork", ::System::Threading::Tasks::ThreadPoolTaskScheduler*>();
}
inline void System::Threading::Tasks::ThreadPoolTaskScheduler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ThreadPoolTaskScheduler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Tasks::ThreadPoolTaskScheduler::QueueTask(::System::Threading::Tasks::Task* task) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::ThreadPoolTaskScheduler*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, task);
}
inline bool System::Threading::Tasks::ThreadPoolTaskScheduler::TryExecuteTaskInline(::System::Threading::Tasks::Task* task, bool taskWasPreviouslyQueued) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::ThreadPoolTaskScheduler*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, task, taskWasPreviouslyQueued);
}
inline bool System::Threading::Tasks::ThreadPoolTaskScheduler::TryDequeue(::System::Threading::Tasks::Task* task) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::ThreadPoolTaskScheduler*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, task);
}
inline void System::Threading::Tasks::ThreadPoolTaskScheduler::NotifyWorkItemProgress() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::ThreadPoolTaskScheduler*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Threading::Tasks::ThreadPoolTaskScheduler::get_RequiresAtomicStartTransition() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::ThreadPoolTaskScheduler*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Threading::Tasks::ThreadPoolTaskScheduler* System::Threading::Tasks::ThreadPoolTaskScheduler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::ThreadPoolTaskScheduler*>());
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::ThreadPoolTaskScheduler::ThreadPoolTaskScheduler() {}
