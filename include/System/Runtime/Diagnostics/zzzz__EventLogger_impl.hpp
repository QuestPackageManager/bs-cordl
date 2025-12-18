#pragma once
// IWYU pragma private; include "System/Runtime/Diagnostics/EventLogger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Diagnostics/zzzz__EventLogger_def.hpp"
#include "System/Diagnostics/zzzz__EventLogEntryType_def.hpp"
#include "System/Diagnostics/zzzz__TraceEventType_def.hpp"
#include "System/Runtime/Diagnostics/zzzz__DiagnosticTraceBase_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventLogger._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::EventLogger::*)()>(&::System::Runtime::Diagnostics::EventLogger::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fdc840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EventLogger*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventLogger._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Runtime::Diagnostics::EventLogger::*)(::StringW, ::System::Runtime::Diagnostics::DiagnosticTraceBase*)>(&::System::Runtime::Diagnostics::EventLogger::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5fd880c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EventLogger*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventLogger.UnsafeCreateEventLogger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Diagnostics::EventLogger* (*)(::StringW, ::System::Runtime::Diagnostics::DiagnosticTraceBase*)>(
    &::System::Runtime::Diagnostics::EventLogger::UnsafeCreateEventLogger)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5fd7b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EventLogger*>::get(), "UnsafeCreateEventLogger", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventLogger.UnsafeLogEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::EventLogger::*)(
    ::System::Diagnostics::TraceEventType, uint16_t, uint32_t, bool, ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::System::Runtime::Diagnostics::EventLogger::UnsafeLogEvent)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x5fd7bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EventLogger*>::get(), "UnsafeLogEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventLogger.LogEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::EventLogger::*)(
    ::System::Diagnostics::TraceEventType, uint16_t, uint32_t, bool, ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::System::Runtime::Diagnostics::EventLogger::LogEvent)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5fd8930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EventLogger*>::get(), "LogEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventLogger.EventLogEntryTypeFromEventType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::EventLogEntryType (*)(::System::Diagnostics::TraceEventType)>(
    &::System::Runtime::Diagnostics::EventLogger::EventLogEntryTypeFromEventType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fdd008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EventLogger*>::get(), "EventLogEntryTypeFromEventType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventLogger.SafeLogEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::EventLogger::*)(
    ::System::Diagnostics::TraceEventType, uint16_t, uint32_t, bool, ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::System::Runtime::Diagnostics::EventLogger::SafeLogEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fdd000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EventLogger*>::get(), "SafeLogEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventLogger.SafeSetLogSourceName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::EventLogger::*)(::StringW)>(
    &::System::Runtime::Diagnostics::EventLogger::SafeSetLogSourceName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fdd028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EventLogger*>::get(), "SafeSetLogSourceName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventLogger.SetLogSourceName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::EventLogger::*)(
    ::StringW, ::System::Runtime::Diagnostics::DiagnosticTraceBase*)>(&::System::Runtime::Diagnostics::EventLogger::SetLogSourceName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fdca28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EventLogger*>::get(), "SetLogSourceName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventLogger.IsInPartialTrust
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Diagnostics::EventLogger::*)()>(
    &::System::Runtime::Diagnostics::EventLogger::IsInPartialTrust)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5fdc85c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EventLogger*>::get(),
                                                                               "IsInPartialTrust", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventLogger.UnsafeWriteEventLog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::EventLogger::*)(
    ::System::Diagnostics::TraceEventType, uint16_t, uint32_t, ::ArrayW<::StringW, ::Array<::StringW>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Runtime::InteropServices::GCHandle)>(
    &::System::Runtime::Diagnostics::EventLogger::UnsafeWriteEventLog)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5fdce28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EventLogger*>::get(), "UnsafeWriteEventLog", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::GCHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventLogger.UnsafeGetProcessName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Diagnostics::EventLogger::*)()>(
    &::System::Runtime::Diagnostics::EventLogger::UnsafeGetProcessName)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5fdcbc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EventLogger*>::get(),
                                                                               "UnsafeGetProcessName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventLogger.UnsafeGetProcessId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Diagnostics::EventLogger::*)()>(
    &::System::Runtime::Diagnostics::EventLogger::UnsafeGetProcessId)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5fdccf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EventLogger*>::get(),
                                                                               "UnsafeGetProcessId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventLogger.NormalizeEventLogParameter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Runtime::Diagnostics::EventLogger::NormalizeEventLogParameter)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5fdca30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EventLogger*>::get(), "NormalizeEventLogParameter",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Diagnostics::DiagnosticTraceBase*& System::Runtime::Diagnostics::EventLogger::__cordl_internal_get_diagnosticTrace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___diagnosticTrace;
}
constexpr ::System::Runtime::Diagnostics::DiagnosticTraceBase* const& System::Runtime::Diagnostics::EventLogger::__cordl_internal_get_diagnosticTrace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___diagnosticTrace;
}
constexpr void System::Runtime::Diagnostics::EventLogger::__cordl_internal_set_diagnosticTrace(::System::Runtime::Diagnostics::DiagnosticTraceBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___diagnosticTrace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Diagnostics::EventLogger::__cordl_internal_get_eventLogSourceName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventLogSourceName;
}
constexpr ::StringW const& System::Runtime::Diagnostics::EventLogger::__cordl_internal_get_eventLogSourceName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventLogSourceName;
}
constexpr void System::Runtime::Diagnostics::EventLogger::__cordl_internal_set_eventLogSourceName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___eventLogSourceName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Runtime::Diagnostics::EventLogger::__cordl_internal_get_isInPartialTrust() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isInPartialTrust;
}
constexpr bool const& System::Runtime::Diagnostics::EventLogger::__cordl_internal_get_isInPartialTrust() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isInPartialTrust;
}
constexpr void System::Runtime::Diagnostics::EventLogger::__cordl_internal_set_isInPartialTrust(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isInPartialTrust = value;
}
inline void System::Runtime::Diagnostics::EventLogger::setStaticF_logCountForPT(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "logCountForPT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EventLogger*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Runtime::Diagnostics::EventLogger::getStaticF_logCountForPT() {
  return ::cordl_internals::getStaticField<int32_t, "logCountForPT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EventLogger*>::get>();
}
inline void System::Runtime::Diagnostics::EventLogger::setStaticF_canLogEvent(bool value) {
  ::cordl_internals::setStaticField<bool, "canLogEvent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EventLogger*>::get>(std::forward<bool>(value));
}
inline bool System::Runtime::Diagnostics::EventLogger::getStaticF_canLogEvent() {
  return ::cordl_internals::getStaticField<bool, "canLogEvent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EventLogger*>::get>();
}
inline void System::Runtime::Diagnostics::EventLogger::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EventLogger*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::EventLogger::_ctor(::StringW eventLogSourceName, ::System::Runtime::Diagnostics::DiagnosticTraceBase* diagnosticTrace) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EventLogger*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventLogSourceName, diagnosticTrace);
}
inline ::System::Runtime::Diagnostics::EventLogger* System::Runtime::Diagnostics::EventLogger::UnsafeCreateEventLogger(::StringW eventLogSourceName,
                                                                                                                       ::System::Runtime::Diagnostics::DiagnosticTraceBase* diagnosticTrace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EventLogger*>::get(), "UnsafeCreateEventLogger", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Diagnostics::EventLogger*, false>(nullptr, ___internal_method, eventLogSourceName, diagnosticTrace);
}
inline void System::Runtime::Diagnostics::EventLogger::UnsafeLogEvent(::System::Diagnostics::TraceEventType type, uint16_t eventLogCategory, uint32_t eventId, bool shouldTrace,
                                                                      ::ArrayW<::StringW, ::Array<::StringW>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EventLogger*>::get(), "UnsafeLogEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, eventLogCategory, eventId, shouldTrace, values);
}
inline void System::Runtime::Diagnostics::EventLogger::LogEvent(::System::Diagnostics::TraceEventType type, uint16_t eventLogCategory, uint32_t eventId, bool shouldTrace,
                                                                ::ArrayW<::StringW, ::Array<::StringW>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EventLogger*>::get(), "LogEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, eventLogCategory, eventId, shouldTrace, values);
}
inline ::System::Diagnostics::EventLogEntryType System::Runtime::Diagnostics::EventLogger::EventLogEntryTypeFromEventType(::System::Diagnostics::TraceEventType type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EventLogger*>::get(), "EventLogEntryTypeFromEventType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::EventLogEntryType, false>(nullptr, ___internal_method, type);
}
inline void System::Runtime::Diagnostics::EventLogger::SafeLogEvent(::System::Diagnostics::TraceEventType type, uint16_t eventLogCategory, uint32_t eventId, bool shouldTrace,
                                                                    ::ArrayW<::StringW, ::Array<::StringW>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EventLogger*>::get(), "SafeLogEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, eventLogCategory, eventId, shouldTrace, values);
}
inline void System::Runtime::Diagnostics::EventLogger::SafeSetLogSourceName(::StringW eventLogSourceName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EventLogger*>::get(), "SafeSetLogSourceName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventLogSourceName);
}
inline void System::Runtime::Diagnostics::EventLogger::SetLogSourceName(::StringW eventLogSourceName, ::System::Runtime::Diagnostics::DiagnosticTraceBase* diagnosticTrace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EventLogger*>::get(), "SetLogSourceName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventLogSourceName, diagnosticTrace);
}
inline bool System::Runtime::Diagnostics::EventLogger::IsInPartialTrust() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EventLogger*>::get(),
                                                                             "IsInPartialTrust", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::EventLogger::UnsafeWriteEventLog(::System::Diagnostics::TraceEventType type, uint16_t eventLogCategory, uint32_t eventId,
                                                                           ::ArrayW<::StringW, ::Array<::StringW>*> logValues, ::ArrayW<uint8_t, ::Array<uint8_t>*> sidBA,
                                                                           ::System::Runtime::InteropServices::GCHandle stringsRootHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EventLogger*>::get(), "UnsafeWriteEventLog", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::GCHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, eventLogCategory, eventId, logValues, sidBA, stringsRootHandle);
}
inline ::StringW System::Runtime::Diagnostics::EventLogger::UnsafeGetProcessName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EventLogger*>::get(),
                                                                             "UnsafeGetProcessName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t System::Runtime::Diagnostics::EventLogger::UnsafeGetProcessId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EventLogger*>::get(),
                                                                             "UnsafeGetProcessId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Diagnostics::EventLogger::NormalizeEventLogParameter(::StringW eventLogParameter) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EventLogger*>::get(), "NormalizeEventLogParameter",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, eventLogParameter);
}
inline ::System::Runtime::Diagnostics::EventLogger* System::Runtime::Diagnostics::EventLogger::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Diagnostics::EventLogger*>());
}
inline ::System::Runtime::Diagnostics::EventLogger* System::Runtime::Diagnostics::EventLogger::New_ctor(::StringW eventLogSourceName,
                                                                                                        ::System::Runtime::Diagnostics::DiagnosticTraceBase* diagnosticTrace) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Diagnostics::EventLogger*>(eventLogSourceName, diagnosticTrace));
}
// Ctor Parameters []
constexpr ::System::Runtime::Diagnostics::EventLogger::EventLogger() {}
