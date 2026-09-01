#pragma once
// IWYU pragma private; include "Internal\Threading\Tasks\Tracing\TaskTrace.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Internal/Threading/Tasks/Tracing/zzzz__TaskTrace_def.hpp"
#include "Internal/Runtime/Augments/zzzz__TaskTraceCallbacks_def.hpp"
//  Writing Method size for method: ::Internal::Threading::Tasks::Tracing::TaskTrace.get_Enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Internal::Threading::Tasks::Tracing::TaskTrace::get_Enabled)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ac75a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Threading::Tasks::Tracing::TaskTrace*>(), { "get_Enabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Threading::Tasks::Tracing::TaskTrace.TaskWaitBegin_Asynchronous
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, int32_t)>(&::Internal::Threading::Tasks::Tracing::TaskTrace::TaskWaitBegin_Asynchronous)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5ac7604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Threading::Tasks::Tracing::TaskTrace*>(),
                                                             { "TaskWaitBegin_Asynchronous", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Threading::Tasks::Tracing::TaskTrace.TaskWaitBegin_Synchronous
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, int32_t)>(&::Internal::Threading::Tasks::Tracing::TaskTrace::TaskWaitBegin_Synchronous)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5ac768c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Threading::Tasks::Tracing::TaskTrace*>(),
                                                             { "TaskWaitBegin_Synchronous", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Threading::Tasks::Tracing::TaskTrace.TaskWaitEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, int32_t)>(&::Internal::Threading::Tasks::Tracing::TaskTrace::TaskWaitEnd)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5ac7714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Threading::Tasks::Tracing::TaskTrace*>(),
                                                             { "TaskWaitEnd", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Threading::Tasks::Tracing::TaskTrace.TaskScheduled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, int32_t, int32_t, int32_t)>(&::Internal::Threading::Tasks::Tracing::TaskTrace::TaskScheduled)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5ac779c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Internal::Threading::Tasks::Tracing::TaskTrace*>(),
                            { "TaskScheduled", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void Internal::Threading::Tasks::Tracing::TaskTrace::setStaticF_s_callbacks(::Internal::Runtime::Augments::TaskTraceCallbacks* value) {
  ::cordl_internals::setStaticField<::Internal::Runtime::Augments::TaskTraceCallbacks*, "s_callbacks", ::Internal::Threading::Tasks::Tracing::TaskTrace*>(
      std::forward<::Internal::Runtime::Augments::TaskTraceCallbacks*>(value));
}
inline ::Internal::Runtime::Augments::TaskTraceCallbacks* Internal::Threading::Tasks::Tracing::TaskTrace::getStaticF_s_callbacks() {
  return ::cordl_internals::getStaticField<::Internal::Runtime::Augments::TaskTraceCallbacks*, "s_callbacks", ::Internal::Threading::Tasks::Tracing::TaskTrace*>();
}
inline bool Internal::Threading::Tasks::Tracing::TaskTrace::get_Enabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Threading::Tasks::Tracing::TaskTrace*>(), { "get_Enabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Internal::Threading::Tasks::Tracing::TaskTrace::TaskWaitBegin_Asynchronous(int32_t OriginatingTaskSchedulerID, int32_t OriginatingTaskID, int32_t TaskID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Threading::Tasks::Tracing::TaskTrace*>(),
                                                           { "TaskWaitBegin_Asynchronous", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, OriginatingTaskSchedulerID, OriginatingTaskID, TaskID);
}
inline void Internal::Threading::Tasks::Tracing::TaskTrace::TaskWaitBegin_Synchronous(int32_t OriginatingTaskSchedulerID, int32_t OriginatingTaskID, int32_t TaskID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Threading::Tasks::Tracing::TaskTrace*>(),
                                                           { "TaskWaitBegin_Synchronous", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, OriginatingTaskSchedulerID, OriginatingTaskID, TaskID);
}
inline void Internal::Threading::Tasks::Tracing::TaskTrace::TaskWaitEnd(int32_t OriginatingTaskSchedulerID, int32_t OriginatingTaskID, int32_t TaskID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Threading::Tasks::Tracing::TaskTrace*>(),
                                                                                         { "TaskWaitEnd", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, OriginatingTaskSchedulerID, OriginatingTaskID, TaskID);
}
inline void Internal::Threading::Tasks::Tracing::TaskTrace::TaskScheduled(int32_t OriginatingTaskSchedulerID, int32_t OriginatingTaskID, int32_t TaskID, int32_t CreatingTaskID,
                                                                          int32_t TaskCreationOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Internal::Threading::Tasks::Tracing::TaskTrace*>(),
                          { "TaskScheduled", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, OriginatingTaskSchedulerID, OriginatingTaskID, TaskID, CreatingTaskID, TaskCreationOptions);
}
// Ctor Parameters []
constexpr ::Internal::Threading::Tasks::Tracing::TaskTrace::TaskTrace() {}
