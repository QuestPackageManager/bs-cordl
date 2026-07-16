#pragma once
// IWYU pragma private; include "System/Threading/Tasks/AsyncCausalityTracer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__AsyncCausalityTracer_def.hpp"
#include "System/Threading/Tasks/zzzz__AsyncCausalityStatus_def.hpp"
#include "System/Threading/Tasks/zzzz__CausalitySynchronousWork_def.hpp"
#include "System/Threading/Tasks/zzzz__CausalityTraceLevel_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::AsyncCausalityTracer.get_LoggingOn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Threading::Tasks::AsyncCausalityTracer::get_LoggingOn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cc3224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::AsyncCausalityTracer*>(), { "get_LoggingOn", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::AsyncCausalityTracer.TraceOperationCreation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::Tasks::CausalityTraceLevel, int32_t, ::StringW, uint64_t)>(
    &::System::Threading::Tasks::AsyncCausalityTracer::TraceOperationCreation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cc695c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::AsyncCausalityTracer*>(),
                            { "TraceOperationCreation",
                              {},
                              { ::i2c::type_of<::System::Threading::Tasks::CausalityTraceLevel>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::AsyncCausalityTracer.TraceOperationCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::Tasks::CausalityTraceLevel, int32_t, ::System::Threading::Tasks::AsyncCausalityStatus)>(
    &::System::Threading::Tasks::AsyncCausalityTracer::TraceOperationCompletion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cc6960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::AsyncCausalityTracer*>(),
                            { "TraceOperationCompletion",
                              {},
                              { ::i2c::type_of<::System::Threading::Tasks::CausalityTraceLevel>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::Tasks::AsyncCausalityStatus>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::AsyncCausalityTracer.TraceSynchronousWorkStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::Tasks::CausalityTraceLevel, int32_t, ::System::Threading::Tasks::CausalitySynchronousWork)>(
    &::System::Threading::Tasks::AsyncCausalityTracer::TraceSynchronousWorkStart)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cc6964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::AsyncCausalityTracer*>(),
                                                                                           { "TraceSynchronousWorkStart",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Threading::Tasks::CausalityTraceLevel>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::System::Threading::Tasks::CausalitySynchronousWork>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::AsyncCausalityTracer.TraceSynchronousWorkCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::Tasks::CausalityTraceLevel, ::System::Threading::Tasks::CausalitySynchronousWork)>(
    &::System::Threading::Tasks::AsyncCausalityTracer::TraceSynchronousWorkCompletion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cc322c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Threading::Tasks::AsyncCausalityTracer*>(),
            { "TraceSynchronousWorkCompletion", {}, { ::i2c::type_of<::System::Threading::Tasks::CausalityTraceLevel>(), ::i2c::type_of<::System::Threading::Tasks::CausalitySynchronousWork>() } })));
    return ___internal_method;
  }
};
inline bool System::Threading::Tasks::AsyncCausalityTracer::get_LoggingOn() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::AsyncCausalityTracer*>(), { "get_LoggingOn", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void System::Threading::Tasks::AsyncCausalityTracer::TraceOperationCreation(::System::Threading::Tasks::CausalityTraceLevel traceLevel, int32_t taskId, ::StringW operationName,
                                                                                   uint64_t relatedContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::AsyncCausalityTracer*>(),
                                       { "TraceOperationCreation",
                                         {},
                                         { ::i2c::type_of<::System::Threading::Tasks::CausalityTraceLevel>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, traceLevel, taskId, operationName, relatedContext);
}
inline void System::Threading::Tasks::AsyncCausalityTracer::TraceOperationCompletion(::System::Threading::Tasks::CausalityTraceLevel traceLevel, int32_t taskId,
                                                                                     ::System::Threading::Tasks::AsyncCausalityStatus status) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::AsyncCausalityTracer*>(),
                          { "TraceOperationCompletion",
                            {},
                            { ::i2c::type_of<::System::Threading::Tasks::CausalityTraceLevel>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::Tasks::AsyncCausalityStatus>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, traceLevel, taskId, status);
}
inline void System::Threading::Tasks::AsyncCausalityTracer::TraceSynchronousWorkStart(::System::Threading::Tasks::CausalityTraceLevel traceLevel, int32_t taskId,
                                                                                      ::System::Threading::Tasks::CausalitySynchronousWork work) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::AsyncCausalityTracer*>(),
                                                                                         { "TraceSynchronousWorkStart",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Threading::Tasks::CausalityTraceLevel>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::System::Threading::Tasks::CausalitySynchronousWork>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, traceLevel, taskId, work);
}
inline void System::Threading::Tasks::AsyncCausalityTracer::TraceSynchronousWorkCompletion(::System::Threading::Tasks::CausalityTraceLevel traceLevel,
                                                                                           ::System::Threading::Tasks::CausalitySynchronousWork work) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Threading::Tasks::AsyncCausalityTracer*>(),
          { "TraceSynchronousWorkCompletion", {}, { ::i2c::type_of<::System::Threading::Tasks::CausalityTraceLevel>(), ::i2c::type_of<::System::Threading::Tasks::CausalitySynchronousWork>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, traceLevel, work);
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::AsyncCausalityTracer::AsyncCausalityTracer() {}
