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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::EventLogger::*)()>(&::System::Runtime::Diagnostics::EventLogger::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x618bb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventLogger*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventLogger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::EventLogger::*)(::StringW, ::System::Runtime::Diagnostics::DiagnosticTraceBase*)>(
    &::System::Runtime::Diagnostics::EventLogger::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6187b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventLogger*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventLogger.UnsafeCreateEventLogger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Diagnostics::EventLogger* (*)(::StringW, ::System::Runtime::Diagnostics::DiagnosticTraceBase*)>(
    &::System::Runtime::Diagnostics::EventLogger::UnsafeCreateEventLogger)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6186ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventLogger*>(),
                                                { "UnsafeCreateEventLogger", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventLogger.UnsafeLogEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::EventLogger::*)(::System::Diagnostics::TraceEventType, uint16_t, uint32_t, bool, ::ArrayW<::StringW>)>(
    &::System::Runtime::Diagnostics::EventLogger::UnsafeLogEvent)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x6186f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventLogger*>(),
                                                                                           { "UnsafeLogEvent",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Diagnostics::TraceEventType>(), ::i2c::type_of<uint16_t>(),
                                                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventLogger.LogEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::EventLogger::*)(::System::Diagnostics::TraceEventType, uint16_t, uint32_t, bool, ::ArrayW<::StringW>)>(
    &::System::Runtime::Diagnostics::EventLogger::LogEvent)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6187c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventLogger*>(),
                                                                                           { "LogEvent",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Diagnostics::TraceEventType>(), ::i2c::type_of<uint16_t>(),
                                                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventLogger.EventLogEntryTypeFromEventType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Diagnostics::EventLogEntryType (*)(::System::Diagnostics::TraceEventType)>(
    &::System::Runtime::Diagnostics::EventLogger::EventLogEntryTypeFromEventType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x618c348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventLogger*>(),
                                                                                           { "EventLogEntryTypeFromEventType", {}, { ::i2c::type_of<::System::Diagnostics::TraceEventType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventLogger.SafeLogEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::EventLogger::*)(::System::Diagnostics::TraceEventType, uint16_t, uint32_t, bool, ::ArrayW<::StringW>)>(
    &::System::Runtime::Diagnostics::EventLogger::SafeLogEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x618c340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventLogger*>(),
                                                                                           { "SafeLogEvent",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Diagnostics::TraceEventType>(), ::i2c::type_of<uint16_t>(),
                                                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventLogger.SafeSetLogSourceName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::EventLogger::*)(::StringW)>(&::System::Runtime::Diagnostics::EventLogger::SafeSetLogSourceName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x618c368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventLogger*>(), { "SafeSetLogSourceName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventLogger.SetLogSourceName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::EventLogger::*)(::StringW, ::System::Runtime::Diagnostics::DiagnosticTraceBase*)>(
    &::System::Runtime::Diagnostics::EventLogger::SetLogSourceName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x618bd68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventLogger*>(),
                                                             { "SetLogSourceName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventLogger.IsInPartialTrust
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Diagnostics::EventLogger::*)()>(&::System::Runtime::Diagnostics::EventLogger::IsInPartialTrust)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x618bb9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventLogger*>(), { "IsInPartialTrust", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventLogger.UnsafeWriteEventLog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::EventLogger::*)(::System::Diagnostics::TraceEventType, uint16_t, uint32_t, ::ArrayW<::StringW>,
                                                                                                             ::ArrayW<uint8_t>, ::System::Runtime::InteropServices::GCHandle)>(
    &::System::Runtime::Diagnostics::EventLogger::UnsafeWriteEventLog)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x618c168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventLogger*>(),
                                                { "UnsafeWriteEventLog",
                                                  {},
                                                  { ::i2c::type_of<::System::Diagnostics::TraceEventType>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint32_t>(),
                                                    ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Runtime::InteropServices::GCHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventLogger.UnsafeGetProcessName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Diagnostics::EventLogger::*)()>(&::System::Runtime::Diagnostics::EventLogger::UnsafeGetProcessName)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x618bf04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventLogger*>(), { "UnsafeGetProcessName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventLogger.UnsafeGetProcessId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Diagnostics::EventLogger::*)()>(&::System::Runtime::Diagnostics::EventLogger::UnsafeGetProcessId)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x618c034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventLogger*>(), { "UnsafeGetProcessId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EventLogger.NormalizeEventLogParameter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Runtime::Diagnostics::EventLogger::NormalizeEventLogParameter)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x618bd70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventLogger*>(), { "NormalizeEventLogParameter", {}, { ::i2c::type_of<::StringW>() } })));
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
  this->___diagnosticTrace = value;
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
  this->___eventLogSourceName = value;
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
  ::cordl_internals::setStaticField<int32_t, "logCountForPT", ::System::Runtime::Diagnostics::EventLogger*>(std::forward<int32_t>(value));
}
inline int32_t System::Runtime::Diagnostics::EventLogger::getStaticF_logCountForPT() {
  return ::cordl_internals::getStaticField<int32_t, "logCountForPT", ::System::Runtime::Diagnostics::EventLogger*>();
}
inline void System::Runtime::Diagnostics::EventLogger::setStaticF_canLogEvent(bool value) {
  ::cordl_internals::setStaticField<bool, "canLogEvent", ::System::Runtime::Diagnostics::EventLogger*>(std::forward<bool>(value));
}
inline bool System::Runtime::Diagnostics::EventLogger::getStaticF_canLogEvent() {
  return ::cordl_internals::getStaticField<bool, "canLogEvent", ::System::Runtime::Diagnostics::EventLogger*>();
}
inline void System::Runtime::Diagnostics::EventLogger::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventLogger*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::EventLogger::_ctor(::StringW eventLogSourceName, ::System::Runtime::Diagnostics::DiagnosticTraceBase* diagnosticTrace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventLogger*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventLogSourceName, diagnosticTrace);
}
inline ::System::Runtime::Diagnostics::EventLogger* System::Runtime::Diagnostics::EventLogger::UnsafeCreateEventLogger(::StringW eventLogSourceName,
                                                                                                                       ::System::Runtime::Diagnostics::DiagnosticTraceBase* diagnosticTrace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventLogger*>(),
                                              { "UnsafeCreateEventLogger", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Diagnostics::EventLogger*>(nullptr, ___internal_method, eventLogSourceName, diagnosticTrace);
}
inline void System::Runtime::Diagnostics::EventLogger::UnsafeLogEvent(::System::Diagnostics::TraceEventType type, uint16_t eventLogCategory, uint32_t eventId, bool shouldTrace,
                                                                      ::ArrayW<::StringW> values) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventLogger*>(),
                                                                                         { "UnsafeLogEvent",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Diagnostics::TraceEventType>(), ::i2c::type_of<uint16_t>(),
                                                                                             ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, eventLogCategory, eventId, shouldTrace, values);
}
inline void System::Runtime::Diagnostics::EventLogger::LogEvent(::System::Diagnostics::TraceEventType type, uint16_t eventLogCategory, uint32_t eventId, bool shouldTrace, ::ArrayW<::StringW> values) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventLogger*>(),
                                                                                         { "LogEvent",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Diagnostics::TraceEventType>(), ::i2c::type_of<uint16_t>(),
                                                                                             ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, eventLogCategory, eventId, shouldTrace, values);
}
inline ::System::Diagnostics::EventLogEntryType System::Runtime::Diagnostics::EventLogger::EventLogEntryTypeFromEventType(::System::Diagnostics::TraceEventType type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventLogger*>(),
                                                                                         { "EventLogEntryTypeFromEventType", {}, { ::i2c::type_of<::System::Diagnostics::TraceEventType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::EventLogEntryType>(nullptr, ___internal_method, type);
}
inline void System::Runtime::Diagnostics::EventLogger::SafeLogEvent(::System::Diagnostics::TraceEventType type, uint16_t eventLogCategory, uint32_t eventId, bool shouldTrace,
                                                                    ::ArrayW<::StringW> values) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventLogger*>(),
                                                                                         { "SafeLogEvent",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Diagnostics::TraceEventType>(), ::i2c::type_of<uint16_t>(),
                                                                                             ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, eventLogCategory, eventId, shouldTrace, values);
}
inline void System::Runtime::Diagnostics::EventLogger::SafeSetLogSourceName(::StringW eventLogSourceName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventLogger*>(), { "SafeSetLogSourceName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventLogSourceName);
}
inline void System::Runtime::Diagnostics::EventLogger::SetLogSourceName(::StringW eventLogSourceName, ::System::Runtime::Diagnostics::DiagnosticTraceBase* diagnosticTrace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventLogger*>(),
                                                           { "SetLogSourceName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventLogSourceName, diagnosticTrace);
}
inline bool System::Runtime::Diagnostics::EventLogger::IsInPartialTrust() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventLogger*>(), { "IsInPartialTrust", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::EventLogger::UnsafeWriteEventLog(::System::Diagnostics::TraceEventType type, uint16_t eventLogCategory, uint32_t eventId, ::ArrayW<::StringW> logValues,
                                                                           ::ArrayW<uint8_t> sidBA, ::System::Runtime::InteropServices::GCHandle stringsRootHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventLogger*>(),
                                              { "UnsafeWriteEventLog",
                                                {},
                                                { ::i2c::type_of<::System::Diagnostics::TraceEventType>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint32_t>(),
                                                  ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Runtime::InteropServices::GCHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, eventLogCategory, eventId, logValues, sidBA, stringsRootHandle);
}
inline ::StringW System::Runtime::Diagnostics::EventLogger::UnsafeGetProcessName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventLogger*>(), { "UnsafeGetProcessName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Runtime::Diagnostics::EventLogger::UnsafeGetProcessId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventLogger*>(), { "UnsafeGetProcessId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Runtime::Diagnostics::EventLogger::NormalizeEventLogParameter(::StringW eventLogParameter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EventLogger*>(), { "NormalizeEventLogParameter", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, eventLogParameter);
}
inline ::System::Runtime::Diagnostics::EventLogger* System::Runtime::Diagnostics::EventLogger::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Diagnostics::EventLogger*>());
}
inline ::System::Runtime::Diagnostics::EventLogger* System::Runtime::Diagnostics::EventLogger::New_ctor(::StringW eventLogSourceName,
                                                                                                        ::System::Runtime::Diagnostics::DiagnosticTraceBase* diagnosticTrace) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Diagnostics::EventLogger*>(eventLogSourceName, diagnosticTrace));
}
// Ctor Parameters []
constexpr ::System::Runtime::Diagnostics::EventLogger::EventLogger() {}
