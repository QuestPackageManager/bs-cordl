#pragma once
// IWYU pragma private; include "System/Runtime/ExceptionTrace.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/zzzz__ExceptionTrace_def.hpp"
#include "System/Diagnostics/zzzz__TraceEventType_def.hpp"
#include "System/Runtime/Diagnostics/zzzz__EtwDiagnosticTrace_def.hpp"
#include "System/zzzz__ArgumentOutOfRangeException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::ExceptionTrace._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::ExceptionTrace::*)(::StringW, ::System::Runtime::Diagnostics::EtwDiagnosticTrace*)>(
    &::System::Runtime::ExceptionTrace::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd0e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionTrace*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::ExceptionTrace.ArgumentOutOfRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ArgumentOutOfRangeException* (::System::Runtime::ExceptionTrace::*)(::StringW, ::System::Object*, ::StringW)>(&::System::Runtime::ExceptionTrace::ArgumentOutOfRange)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5fd0e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionTrace*>::get(), "ArgumentOutOfRange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::ExceptionTrace.TraceHandledException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::ExceptionTrace::*)(::System::Exception*, ::System::Diagnostics::TraceEventType)>(
    &::System::Runtime::ExceptionTrace::TraceHandledException)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5fd0f0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionTrace*>::get(), "TraceHandledException", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::ExceptionTrace.BreakOnException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::ExceptionTrace::*)(::System::Exception*)>(
    &::System::Runtime::ExceptionTrace::BreakOnException)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fd1c14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionTrace*>::get(), "BreakOnException", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___eventSourceName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___diagnosticTrace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::ExceptionTrace::_ctor(::StringW eventSourceName, ::System::Runtime::Diagnostics::EtwDiagnosticTrace* diagnosticTrace) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionTrace*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventSourceName, diagnosticTrace);
}
inline ::System::ArgumentOutOfRangeException* System::Runtime::ExceptionTrace::ArgumentOutOfRange(::StringW paramName, ::System::Object* actualValue, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionTrace*>::get(), "ArgumentOutOfRange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ArgumentOutOfRangeException*, false>(this, ___internal_method, paramName, actualValue, message);
}
inline void System::Runtime::ExceptionTrace::TraceHandledException(::System::Exception* exception, ::System::Diagnostics::TraceEventType traceEventType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionTrace*>::get(), "TraceHandledException", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception, traceEventType);
}
template <typename TException> inline TException System::Runtime::ExceptionTrace::TraceException(TException exception) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionTrace*>::get(), "TraceException",
                                                                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TException>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TException>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TException>::get() }));
  return ::cordl_internals::RunMethodRethrow<TException, false>(this, ___internal_method, exception);
}
template <typename TException> inline TException System::Runtime::ExceptionTrace::TraceException(TException exception, ::StringW eventSource) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionTrace*>::get(), "TraceException",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TException>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TException>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TException>::get() }));
  return ::cordl_internals::RunMethodRethrow<TException, false>(this, ___internal_method, exception, eventSource);
}
inline void System::Runtime::ExceptionTrace::BreakOnException(::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionTrace*>::get(), "BreakOnException", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception);
}
inline ::System::Runtime::ExceptionTrace* System::Runtime::ExceptionTrace::New_ctor(::StringW eventSourceName, ::System::Runtime::Diagnostics::EtwDiagnosticTrace* diagnosticTrace) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::ExceptionTrace*>(eventSourceName, diagnosticTrace));
}
// Ctor Parameters []
constexpr ::System::Runtime::ExceptionTrace::ExceptionTrace() {}
