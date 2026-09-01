#pragma once
// IWYU pragma private; include "System\Runtime\ExceptionTrace.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/zzzz__ExceptionTrace_def.hpp"
#include "System/Diagnostics/zzzz__TraceEventType_def.hpp"
#include "System/Runtime/Diagnostics/zzzz__EtwDiagnosticTrace_def.hpp"
#include "System/zzzz__ArgumentOutOfRangeException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::ExceptionTrace._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::ExceptionTrace::*)(::StringW, ::System::Runtime::Diagnostics::EtwDiagnosticTrace*)>(
    &::System::Runtime::ExceptionTrace::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61859b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::ExceptionTrace*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::ExceptionTrace.ArgumentOutOfRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArgumentOutOfRangeException* (::System::Runtime::ExceptionTrace::*)(::StringW, ::System::Object*, ::StringW)>(
    &::System::Runtime::ExceptionTrace::ArgumentOutOfRange)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x61859b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::ExceptionTrace*>(),
                                                             { "ArgumentOutOfRange", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::ExceptionTrace.TraceHandledException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::ExceptionTrace::*)(::System::Exception*, ::System::Diagnostics::TraceEventType)>(
    &::System::Runtime::ExceptionTrace::TraceHandledException)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x6185a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::ExceptionTrace*>(),
                                                             { "TraceHandledException", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Diagnostics::TraceEventType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::ExceptionTrace.BreakOnException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::ExceptionTrace::*)(::System::Exception*)>(&::System::Runtime::ExceptionTrace::BreakOnException)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x618676c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::ExceptionTrace*>(), { "BreakOnException", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::ExceptionTrace::__cordl_internal_get_eventSourceName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventSourceName;
}
constexpr ::StringW const& System::Runtime::ExceptionTrace::__cordl_internal_get_eventSourceName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventSourceName;
}
constexpr void System::Runtime::ExceptionTrace::__cordl_internal_set_eventSourceName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eventSourceName = value;
}
constexpr ::System::Runtime::Diagnostics::EtwDiagnosticTrace*& System::Runtime::ExceptionTrace::__cordl_internal_get_diagnosticTrace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___diagnosticTrace;
}
constexpr ::System::Runtime::Diagnostics::EtwDiagnosticTrace* const& System::Runtime::ExceptionTrace::__cordl_internal_get_diagnosticTrace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___diagnosticTrace;
}
constexpr void System::Runtime::ExceptionTrace::__cordl_internal_set_diagnosticTrace(::System::Runtime::Diagnostics::EtwDiagnosticTrace* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___diagnosticTrace = value;
}
inline void System::Runtime::ExceptionTrace::_ctor(::StringW eventSourceName, ::System::Runtime::Diagnostics::EtwDiagnosticTrace* diagnosticTrace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::ExceptionTrace*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventSourceName, diagnosticTrace);
}
inline ::System::ArgumentOutOfRangeException* System::Runtime::ExceptionTrace::ArgumentOutOfRange(::StringW paramName, ::System::Object* actualValue, ::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::ExceptionTrace*>(),
                                                           { "ArgumentOutOfRange", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ArgumentOutOfRangeException*>(this, ___internal_method, paramName, actualValue, message);
}
inline void System::Runtime::ExceptionTrace::TraceHandledException(::System::Exception* exception, ::System::Diagnostics::TraceEventType traceEventType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::ExceptionTrace*>(),
                                                           { "TraceHandledException", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Diagnostics::TraceEventType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception, traceEventType);
}
template <typename TException> inline TException System::Runtime::ExceptionTrace::TraceException(TException exception) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::ExceptionTrace*>(), { "TraceException", { ::i2c::class_of<TException>() }, { ::i2c::type_of<TException>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TException>() })));
  return ::cordl_internals::RunMethodRethrow<TException>(this, ___internal_method, exception);
}
template <typename TException> inline TException System::Runtime::ExceptionTrace::TraceException(TException exception, ::StringW eventSource) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::ExceptionTrace*>(),
                                                           { "TraceException", { ::i2c::class_of<TException>() }, { ::i2c::type_of<TException>(), ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TException>() })));
  return ::cordl_internals::RunMethodRethrow<TException>(this, ___internal_method, exception, eventSource);
}
inline void System::Runtime::ExceptionTrace::BreakOnException(::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::ExceptionTrace*>(), { "BreakOnException", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception);
}
inline ::System::Runtime::ExceptionTrace* System::Runtime::ExceptionTrace::New_ctor(::StringW eventSourceName, ::System::Runtime::Diagnostics::EtwDiagnosticTrace* diagnosticTrace) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::ExceptionTrace*>(eventSourceName, diagnosticTrace));
}
// Ctor Parameters []
constexpr ::System::Runtime::ExceptionTrace::ExceptionTrace() {}
