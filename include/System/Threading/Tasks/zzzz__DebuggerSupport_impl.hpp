#pragma once
// IWYU pragma private; include "System/Threading/Tasks/DebuggerSupport.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__DebuggerSupport_def.hpp"
#include "Internal/Runtime/Augments/zzzz__AsyncStatus_def.hpp"
#include "System/Collections/Generic/zzzz__LowLevelDictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__CausalityRelation_def.hpp"
#include "System/Threading/Tasks/zzzz__CausalitySynchronousWork_def.hpp"
#include "System/Threading/Tasks/zzzz__CausalityTraceLevel_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::DebuggerSupport.get_LoggingOn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Threading::Tasks::DebuggerSupport::get_LoggingOn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cba598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::DebuggerSupport*>(), { "get_LoggingOn", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::DebuggerSupport.TraceOperationCreation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::Tasks::CausalityTraceLevel, ::System::Threading::Tasks::Task*, ::StringW, uint64_t)>(
    &::System::Threading::Tasks::DebuggerSupport::TraceOperationCreation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cba5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::DebuggerSupport*>(),
                                                             { "TraceOperationCreation",
                                                               {},
                                                               { ::i2c::type_of<::System::Threading::Tasks::CausalityTraceLevel>(), ::i2c::type_of<::System::Threading::Tasks::Task*>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::DebuggerSupport.TraceOperationCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::Tasks::CausalityTraceLevel, ::System::Threading::Tasks::Task*, ::Internal::Runtime::Augments::AsyncStatus)>(
    &::System::Threading::Tasks::DebuggerSupport::TraceOperationCompletion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cba5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::DebuggerSupport*>(),
                                                             { "TraceOperationCompletion",
                                                               {},
                                                               { ::i2c::type_of<::System::Threading::Tasks::CausalityTraceLevel>(), ::i2c::type_of<::System::Threading::Tasks::Task*>(),
                                                                 ::i2c::type_of<::Internal::Runtime::Augments::AsyncStatus>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::DebuggerSupport.TraceOperationRelation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::Tasks::CausalityTraceLevel, ::System::Threading::Tasks::Task*, ::System::Threading::Tasks::CausalityRelation)>(
    &::System::Threading::Tasks::DebuggerSupport::TraceOperationRelation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cba5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::DebuggerSupport*>(),
                                                             { "TraceOperationRelation",
                                                               {},
                                                               { ::i2c::type_of<::System::Threading::Tasks::CausalityTraceLevel>(), ::i2c::type_of<::System::Threading::Tasks::Task*>(),
                                                                 ::i2c::type_of<::System::Threading::Tasks::CausalityRelation>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::DebuggerSupport.TraceSynchronousWorkStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::Tasks::CausalityTraceLevel, ::System::Threading::Tasks::Task*,
                                                                ::System::Threading::Tasks::CausalitySynchronousWork)>(&::System::Threading::Tasks::DebuggerSupport::TraceSynchronousWorkStart)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cba5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::DebuggerSupport*>(),
                                                             { "TraceSynchronousWorkStart",
                                                               {},
                                                               { ::i2c::type_of<::System::Threading::Tasks::CausalityTraceLevel>(), ::i2c::type_of<::System::Threading::Tasks::Task*>(),
                                                                 ::i2c::type_of<::System::Threading::Tasks::CausalitySynchronousWork>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::DebuggerSupport.TraceSynchronousWorkCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::Tasks::CausalityTraceLevel, ::System::Threading::Tasks::CausalitySynchronousWork)>(
    &::System::Threading::Tasks::DebuggerSupport::TraceSynchronousWorkCompletion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cba5b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Threading::Tasks::DebuggerSupport*>(),
            { "TraceSynchronousWorkCompletion", {}, { ::i2c::type_of<::System::Threading::Tasks::CausalityTraceLevel>(), ::i2c::type_of<::System::Threading::Tasks::CausalitySynchronousWork>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::DebuggerSupport.AddToActiveTasks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::Tasks::Task*)>(&::System::Threading::Tasks::DebuggerSupport::AddToActiveTasks)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5cba5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::DebuggerSupport*>(), { "AddToActiveTasks", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::DebuggerSupport.AddToActiveTasksNonInlined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::Tasks::Task*)>(&::System::Threading::Tasks::DebuggerSupport::AddToActiveTasksNonInlined)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5cba650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::DebuggerSupport*>(),
                                                                                           { "AddToActiveTasksNonInlined", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::DebuggerSupport.RemoveFromActiveTasks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::Tasks::Task*)>(&::System::Threading::Tasks::DebuggerSupport::RemoveFromActiveTasks)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5cba844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::DebuggerSupport*>(), { "RemoveFromActiveTasks", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::DebuggerSupport.RemoveFromActiveTasksNonInlined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::Tasks::Task*)>(&::System::Threading::Tasks::DebuggerSupport::RemoveFromActiveTasksNonInlined)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5cba8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::DebuggerSupport*>(),
                                                                                           { "RemoveFromActiveTasksNonInlined", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
    return ___internal_method;
  }
};
inline void System::Threading::Tasks::DebuggerSupport::setStaticF_s_activeTasks(::System::Collections::Generic::LowLevelDictionary_2<int32_t, ::System::Threading::Tasks::Task*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::LowLevelDictionary_2<int32_t, ::System::Threading::Tasks::Task*>*, "s_activeTasks", ::System::Threading::Tasks::DebuggerSupport*>(
      std::forward<::System::Collections::Generic::LowLevelDictionary_2<int32_t, ::System::Threading::Tasks::Task*>*>(value));
}
inline ::System::Collections::Generic::LowLevelDictionary_2<int32_t, ::System::Threading::Tasks::Task*>* System::Threading::Tasks::DebuggerSupport::getStaticF_s_activeTasks() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::LowLevelDictionary_2<int32_t, ::System::Threading::Tasks::Task*>*, "s_activeTasks",
                                           ::System::Threading::Tasks::DebuggerSupport*>();
}
inline void System::Threading::Tasks::DebuggerSupport::setStaticF_s_activeTasksLock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "s_activeTasksLock", ::System::Threading::Tasks::DebuggerSupport*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Threading::Tasks::DebuggerSupport::getStaticF_s_activeTasksLock() {
  return ::cordl_internals::getStaticField<::System::Object*, "s_activeTasksLock", ::System::Threading::Tasks::DebuggerSupport*>();
}
inline bool System::Threading::Tasks::DebuggerSupport::get_LoggingOn() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::DebuggerSupport*>(), { "get_LoggingOn", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void System::Threading::Tasks::DebuggerSupport::TraceOperationCreation(::System::Threading::Tasks::CausalityTraceLevel traceLevel, ::System::Threading::Tasks::Task* task,
                                                                              ::StringW operationName, uint64_t relatedContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::DebuggerSupport*>(),
                                                           { "TraceOperationCreation",
                                                             {},
                                                             { ::i2c::type_of<::System::Threading::Tasks::CausalityTraceLevel>(), ::i2c::type_of<::System::Threading::Tasks::Task*>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, traceLevel, task, operationName, relatedContext);
}
inline void System::Threading::Tasks::DebuggerSupport::TraceOperationCompletion(::System::Threading::Tasks::CausalityTraceLevel traceLevel, ::System::Threading::Tasks::Task* task,
                                                                                ::Internal::Runtime::Augments::AsyncStatus status) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::DebuggerSupport*>(),
                                                           { "TraceOperationCompletion",
                                                             {},
                                                             { ::i2c::type_of<::System::Threading::Tasks::CausalityTraceLevel>(), ::i2c::type_of<::System::Threading::Tasks::Task*>(),
                                                               ::i2c::type_of<::Internal::Runtime::Augments::AsyncStatus>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, traceLevel, task, status);
}
inline void System::Threading::Tasks::DebuggerSupport::TraceOperationRelation(::System::Threading::Tasks::CausalityTraceLevel traceLevel, ::System::Threading::Tasks::Task* task,
                                                                              ::System::Threading::Tasks::CausalityRelation relation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::DebuggerSupport*>(),
                                                           { "TraceOperationRelation",
                                                             {},
                                                             { ::i2c::type_of<::System::Threading::Tasks::CausalityTraceLevel>(), ::i2c::type_of<::System::Threading::Tasks::Task*>(),
                                                               ::i2c::type_of<::System::Threading::Tasks::CausalityRelation>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, traceLevel, task, relation);
}
inline void System::Threading::Tasks::DebuggerSupport::TraceSynchronousWorkStart(::System::Threading::Tasks::CausalityTraceLevel traceLevel, ::System::Threading::Tasks::Task* task,
                                                                                 ::System::Threading::Tasks::CausalitySynchronousWork work) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::DebuggerSupport*>(),
                                                           { "TraceSynchronousWorkStart",
                                                             {},
                                                             { ::i2c::type_of<::System::Threading::Tasks::CausalityTraceLevel>(), ::i2c::type_of<::System::Threading::Tasks::Task*>(),
                                                               ::i2c::type_of<::System::Threading::Tasks::CausalitySynchronousWork>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, traceLevel, task, work);
}
inline void System::Threading::Tasks::DebuggerSupport::TraceSynchronousWorkCompletion(::System::Threading::Tasks::CausalityTraceLevel traceLevel,
                                                                                      ::System::Threading::Tasks::CausalitySynchronousWork work) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Threading::Tasks::DebuggerSupport*>(),
          { "TraceSynchronousWorkCompletion", {}, { ::i2c::type_of<::System::Threading::Tasks::CausalityTraceLevel>(), ::i2c::type_of<::System::Threading::Tasks::CausalitySynchronousWork>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, traceLevel, work);
}
inline void System::Threading::Tasks::DebuggerSupport::AddToActiveTasks(::System::Threading::Tasks::Task* task) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::DebuggerSupport*>(), { "AddToActiveTasks", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, task);
}
inline void System::Threading::Tasks::DebuggerSupport::AddToActiveTasksNonInlined(::System::Threading::Tasks::Task* task) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::DebuggerSupport*>(),
                                                                                         { "AddToActiveTasksNonInlined", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, task);
}
inline void System::Threading::Tasks::DebuggerSupport::RemoveFromActiveTasks(::System::Threading::Tasks::Task* task) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::DebuggerSupport*>(), { "RemoveFromActiveTasks", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, task);
}
inline void System::Threading::Tasks::DebuggerSupport::RemoveFromActiveTasksNonInlined(::System::Threading::Tasks::Task* task) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::DebuggerSupport*>(),
                                                                                         { "RemoveFromActiveTasksNonInlined", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, task);
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::DebuggerSupport::DebuggerSupport() {}
