#pragma once
// IWYU pragma private; include "System/Runtime/Diagnostics/EventLogger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventLogger)
namespace System::Diagnostics {
struct EventLogEntryType;
}
namespace System::Diagnostics {
struct TraceEventType;
}
namespace System::Runtime::Diagnostics {
class DiagnosticTraceBase;
}
namespace System::Runtime::InteropServices {
struct GCHandle;
}
// Forward declare root types
namespace System::Runtime::Diagnostics {
class EventLogger;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Diagnostics::EventLogger);
// Dependencies System.Object
namespace System::Runtime::Diagnostics {
// Is value type: false
// CS Name: System.Runtime.Diagnostics.EventLogger
class CORDL_TYPE EventLogger : public ::System::Object {
public:
  // Declarations
  /// @brief Field canLogEvent, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_canLogEvent, put = setStaticF_canLogEvent)) bool canLogEvent;

  /// @brief Field diagnosticTrace, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_diagnosticTrace, put = __cordl_internal_set_diagnosticTrace)) ::System::Runtime::Diagnostics::DiagnosticTraceBase* diagnosticTrace;

  /// @brief Field eventLogSourceName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_eventLogSourceName, put = __cordl_internal_set_eventLogSourceName)) ::StringW eventLogSourceName;

  /// @brief Field isInPartialTrust, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_isInPartialTrust, put = __cordl_internal_set_isInPartialTrust)) bool isInPartialTrust;

  /// @brief Field logCountForPT, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_logCountForPT, put = setStaticF_logCountForPT)) int32_t logCountForPT;

  /// @brief Method EventLogEntryTypeFromEventType, addr 0x5f7547c, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Diagnostics::EventLogEntryType EventLogEntryTypeFromEventType(::System::Diagnostics::TraceEventType type);

  /// @brief Method IsInPartialTrust, addr 0x5f74cd0, size 0x1cc, virtual false, abstract: false, final false
  inline bool IsInPartialTrust();

  /// @brief Method LogEvent, addr 0x5f70da4, size 0x154, virtual false, abstract: false, final false
  inline void LogEvent(::System::Diagnostics::TraceEventType type, uint16_t eventLogCategory, uint32_t eventId, bool shouldTrace, ::ArrayW<::StringW, ::Array<::StringW>*> values);

  static inline ::System::Runtime::Diagnostics::EventLogger* New_ctor();

  static inline ::System::Runtime::Diagnostics::EventLogger* New_ctor(::StringW eventLogSourceName, ::System::Runtime::Diagnostics::DiagnosticTraceBase* diagnosticTrace);

  /// @brief Method NormalizeEventLogParameter, addr 0x5f74ea4, size 0x194, virtual false, abstract: false, final false
  static inline ::StringW NormalizeEventLogParameter(::StringW eventLogParameter);

  /// @brief Method SafeLogEvent, addr 0x5f75474, size 0x8, virtual false, abstract: false, final false
  inline void SafeLogEvent(::System::Diagnostics::TraceEventType type, uint16_t eventLogCategory, uint32_t eventId, bool shouldTrace, ::ArrayW<::StringW, ::Array<::StringW>*> values);

  /// @brief Method SafeSetLogSourceName, addr 0x5f7549c, size 0x8, virtual false, abstract: false, final false
  inline void SafeSetLogSourceName(::StringW eventLogSourceName);

  /// @brief Method SetLogSourceName, addr 0x5f74e9c, size 0x8, virtual false, abstract: false, final false
  inline void SetLogSourceName(::StringW eventLogSourceName, ::System::Runtime::Diagnostics::DiagnosticTraceBase* diagnosticTrace);

  /// @brief Method UnsafeCreateEventLogger, addr 0x5f6fff8, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Runtime::Diagnostics::EventLogger* UnsafeCreateEventLogger(::StringW eventLogSourceName, ::System::Runtime::Diagnostics::DiagnosticTraceBase* diagnosticTrace);

  /// @brief Method UnsafeGetProcessId, addr 0x5f75168, size 0x134, virtual false, abstract: false, final false
  inline int32_t UnsafeGetProcessId();

  /// @brief Method UnsafeGetProcessName, addr 0x5f75038, size 0x130, virtual false, abstract: false, final false
  inline ::StringW UnsafeGetProcessName();

  /// @brief Method UnsafeLogEvent, addr 0x5f70068, size 0x554, virtual false, abstract: false, final false
  inline void UnsafeLogEvent(::System::Diagnostics::TraceEventType type, uint16_t eventLogCategory, uint32_t eventId, bool shouldTrace, ::ArrayW<::StringW, ::Array<::StringW>*> values);

  /// @brief Method UnsafeWriteEventLog, addr 0x5f7529c, size 0x1d8, virtual false, abstract: false, final false
  inline void UnsafeWriteEventLog(::System::Diagnostics::TraceEventType type, uint16_t eventLogCategory, uint32_t eventId, ::ArrayW<::StringW, ::Array<::StringW>*> logValues,
                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> sidBA, ::System::Runtime::InteropServices::GCHandle stringsRootHandle);

  constexpr ::System::Runtime::Diagnostics::DiagnosticTraceBase* const& __cordl_internal_get_diagnosticTrace() const;

  constexpr ::System::Runtime::Diagnostics::DiagnosticTraceBase*& __cordl_internal_get_diagnosticTrace();

  constexpr ::StringW const& __cordl_internal_get_eventLogSourceName() const;

  constexpr ::StringW& __cordl_internal_get_eventLogSourceName();

  constexpr bool const& __cordl_internal_get_isInPartialTrust() const;

  constexpr bool& __cordl_internal_get_isInPartialTrust();

  constexpr void __cordl_internal_set_diagnosticTrace(::System::Runtime::Diagnostics::DiagnosticTraceBase* value);

  constexpr void __cordl_internal_set_eventLogSourceName(::StringW value);

  constexpr void __cordl_internal_set_isInPartialTrust(bool value);

  /// @brief Method .ctor, addr 0x5f74cb4, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5f70c80, size 0x124, virtual false, abstract: false, final false
  inline void _ctor(::StringW eventLogSourceName, ::System::Runtime::Diagnostics::DiagnosticTraceBase* diagnosticTrace);

  static inline bool getStaticF_canLogEvent();

  static inline int32_t getStaticF_logCountForPT();

  static inline void setStaticF_canLogEvent(bool value);

  static inline void setStaticF_logCountForPT(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventLogger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventLogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventLogger(EventLogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventLogger(EventLogger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21107 };

  /// @brief Field diagnosticTrace, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Diagnostics::DiagnosticTraceBase* ___diagnosticTrace;

  /// @brief Field eventLogSourceName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___eventLogSourceName;

  /// @brief Field isInPartialTrust, offset: 0x20, size: 0x1, def value: None
  bool ___isInPartialTrust;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Diagnostics::EventLogger, ___diagnosticTrace) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Diagnostics::EventLogger, ___eventLogSourceName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Diagnostics::EventLogger, ___isInPartialTrust) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Diagnostics::EventLogger, 0x28>, "Size mismatch!");

} // namespace System::Runtime::Diagnostics
NEED_NO_BOX(::System::Runtime::Diagnostics::EventLogger);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Diagnostics::EventLogger*, "System.Runtime.Diagnostics", "EventLogger");
