#pragma once
// IWYU pragma private; include "System/Runtime/Diagnostics/DiagnosticTraceBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Diagnostics/zzzz__SourceLevels_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DiagnosticTraceBase)
namespace System::Diagnostics {
struct SourceLevels;
}
namespace System::Diagnostics {
struct TraceEventType;
}
namespace System::Diagnostics {
class TraceSource;
}
namespace System::Runtime::Diagnostics {
class TraceRecord;
}
namespace System::Runtime {
struct TraceEventLevel;
}
namespace System {
struct DateTime;
}
namespace System {
class EventArgs;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class UnhandledExceptionEventArgs;
}
// Forward declare root types
namespace System::Runtime::Diagnostics {
class DiagnosticTraceBase;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Diagnostics::DiagnosticTraceBase);
// Dependencies System.DateTime, System.Diagnostics.SourceLevels, System.Object
namespace System::Runtime::Diagnostics {
// Is value type: false
// CS Name: System.Runtime.Diagnostics.DiagnosticTraceBase
class CORDL_TYPE DiagnosticTraceBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field AppDomainFriendlyName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_AppDomainFriendlyName, put = setStaticF_AppDomainFriendlyName)) ::StringW AppDomainFriendlyName;

  __declspec(property(get = get_CalledShutdown)) bool CalledShutdown;

  __declspec(property(get = get_EventSourceName, put = set_EventSourceName)) ::StringW EventSourceName;

  __declspec(property(get = get_HaveListeners)) bool HaveListeners;

  __declspec(property(get = get_LastFailure, put = set_LastFailure)) ::System::DateTime LastFailure;

  __declspec(property(get = get_Level)) ::System::Diagnostics::SourceLevels Level;

  __declspec(property(get = get_TraceSource)) ::System::Diagnostics::TraceSource* TraceSource;

  /// @brief Field TraceSourceName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_TraceSourceName, put = __cordl_internal_set_TraceSourceName)) ::StringW TraceSourceName;

  __declspec(property(get = get_TracingEnabled)) bool TracingEnabled;

  /// @brief Field <LastFailure>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__LastFailure_k__BackingField, put = __cordl_internal_set__LastFailure_k__BackingField)) ::System::DateTime _LastFailure_k__BackingField;

  /// @brief Field calledShutdown, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_calledShutdown, put = __cordl_internal_set_calledShutdown)) bool calledShutdown;

  /// @brief Field eventSourceName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_eventSourceName, put = __cordl_internal_set_eventSourceName)) ::StringW eventSourceName;

  /// @brief Field haveListeners, offset 0x1a, size 0x1
  __declspec(property(get = __cordl_internal_get_haveListeners, put = __cordl_internal_set_haveListeners)) bool haveListeners;

  /// @brief Field level, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_level, put = __cordl_internal_set_level)) ::System::Diagnostics::SourceLevels level;

  /// @brief Field thisLock, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_thisLock, put = __cordl_internal_set_thisLock)) ::System::Object* thisLock;

  /// @brief Field traceSource, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_traceSource, put = __cordl_internal_set_traceSource)) ::System::Diagnostics::TraceSource* traceSource;

  /// @brief Field tracingEnabled, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_tracingEnabled, put = __cordl_internal_set_tracingEnabled)) bool tracingEnabled;

  /// @brief Method AddDomainEventHandlersForCleanup, addr 0x5fd7048, size 0x1b8, virtual false, abstract: false, final false
  inline void AddDomainEventHandlersForCleanup();

  /// @brief Method CreateDefaultSourceString, addr 0x5fd7468, size 0x150, virtual false, abstract: false, final false
  static inline ::StringW CreateDefaultSourceString(::System::Object* source);

  /// @brief Method CreateSourceString, addr 0x5fd7384, size 0xe4, virtual false, abstract: false, final false
  static inline ::StringW CreateSourceString(::System::Object* source);

  /// @brief Method ExitOrUnloadEventHandler, addr 0x5fd7200, size 0x4, virtual false, abstract: false, final false
  inline void ExitOrUnloadEventHandler(::System::Object* sender, ::System::EventArgs* e);

  /// @brief Method FixLevel, addr 0x5fd6a40, size 0x40, virtual false, abstract: false, final false
  inline ::System::Diagnostics::SourceLevels FixLevel(::System::Diagnostics::SourceLevels level);

  /// @brief Method IsEnabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsEnabled();

  /// @brief Method LogTraceFailure, addr 0x5fd783c, size 0x348, virtual false, abstract: false, final false
  inline void LogTraceFailure(::StringW traceString, ::System::Exception* exception);

  static inline ::System::Runtime::Diagnostics::DiagnosticTraceBase* New_ctor(::StringW traceSourceName);

  /// @brief Method OnSetLevel, addr 0x5fd6a80, size 0x4, virtual true, abstract: false, final false
  inline void OnSetLevel(::System::Diagnostics::SourceLevels level);

  /// @brief Method OnShutdownTracing, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnShutdownTracing();

  /// @brief Method OnUnhandledException, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnUnhandledException(::System::Exception* exception);

  /// @brief Method SetLevel, addr 0x5fd6a84, size 0xf4, virtual false, abstract: false, final false
  inline void SetLevel(::System::Diagnostics::SourceLevels level);

  /// @brief Method SetTraceSource, addr 0x5fd698c, size 0xac, virtual false, abstract: false, final false
  inline void SetTraceSource(::System::Diagnostics::TraceSource* traceSource);

  /// @brief Method ShouldTrace, addr 0x5fd6e80, size 0x4, virtual true, abstract: false, final false
  inline bool ShouldTrace(::System::Runtime::TraceEventLevel level);

  /// @brief Method ShouldTrace, addr 0x5fd6e84, size 0x3c, virtual false, abstract: false, final false
  inline bool ShouldTrace(::System::Diagnostics::TraceEventType type);

  /// @brief Method ShouldTraceToTraceSource, addr 0x5fd37d4, size 0x70, virtual false, abstract: false, final false
  inline bool ShouldTraceToTraceSource(::System::Runtime::TraceEventLevel level);

  /// @brief Method ShutdownTracing, addr 0x5fd7204, size 0xd4, virtual false, abstract: false, final false
  inline void ShutdownTracing();

  /// @brief Method StackTraceString, addr 0x5fd75b8, size 0x284, virtual false, abstract: false, final false
  static inline ::StringW StackTraceString(::System::Exception* exception);

  /// @brief Method TraceEventLogEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void TraceEventLogEvent(::System::Diagnostics::TraceEventType type, ::System::Runtime::Diagnostics::TraceRecord* traceRecord);

  /// @brief Method UnhandledExceptionHandler, addr 0x5fd72d8, size 0xac, virtual false, abstract: false, final false
  inline void UnhandledExceptionHandler(::System::Object* sender, ::System::UnhandledExceptionEventArgs* args);

  /// @brief Method UnsafeRemoveDefaultTraceListener, addr 0x5fd691c, size 0x68, virtual false, abstract: false, final false
  static inline void UnsafeRemoveDefaultTraceListener(::System::Diagnostics::TraceSource* traceSource);

  /// @brief Method XmlEncode, addr 0x5fd6ec0, size 0x188, virtual false, abstract: false, final false
  static inline ::StringW XmlEncode(::StringW text);

  constexpr ::StringW const& __cordl_internal_get_TraceSourceName() const;

  constexpr ::StringW& __cordl_internal_get_TraceSourceName();

  constexpr ::System::DateTime const& __cordl_internal_get__LastFailure_k__BackingField() const;

  constexpr ::System::DateTime& __cordl_internal_get__LastFailure_k__BackingField();

  constexpr bool const& __cordl_internal_get_calledShutdown() const;

  constexpr bool& __cordl_internal_get_calledShutdown();

  constexpr ::StringW const& __cordl_internal_get_eventSourceName() const;

  constexpr ::StringW& __cordl_internal_get_eventSourceName();

  constexpr bool const& __cordl_internal_get_haveListeners() const;

  constexpr bool& __cordl_internal_get_haveListeners();

  constexpr ::System::Diagnostics::SourceLevels const& __cordl_internal_get_level() const;

  constexpr ::System::Diagnostics::SourceLevels& __cordl_internal_get_level();

  constexpr ::System::Object* const& __cordl_internal_get_thisLock() const;

  constexpr ::System::Object*& __cordl_internal_get_thisLock();

  constexpr ::System::Diagnostics::TraceSource* const& __cordl_internal_get_traceSource() const;

  constexpr ::System::Diagnostics::TraceSource*& __cordl_internal_get_traceSource();

  constexpr bool const& __cordl_internal_get_tracingEnabled() const;

  constexpr bool& __cordl_internal_get_tracingEnabled();

  constexpr void __cordl_internal_set_TraceSourceName(::StringW value);

  constexpr void __cordl_internal_set__LastFailure_k__BackingField(::System::DateTime value);

  constexpr void __cordl_internal_set_calledShutdown(bool value);

  constexpr void __cordl_internal_set_eventSourceName(::StringW value);

  constexpr void __cordl_internal_set_haveListeners(bool value);

  constexpr void __cordl_internal_set_level(::System::Diagnostics::SourceLevels value);

  constexpr void __cordl_internal_set_thisLock(::System::Object* value);

  constexpr void __cordl_internal_set_traceSource(::System::Diagnostics::TraceSource* value);

  constexpr void __cordl_internal_set_tracingEnabled(bool value);

  /// @brief Method .ctor, addr 0x5fd6868, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::StringW traceSourceName);

  static inline ::StringW getStaticF_AppDomainFriendlyName();

  /// @brief Method get_CalledShutdown, addr 0x5fd8148, size 0x8, virtual false, abstract: false, final false
  inline bool get_CalledShutdown();

  /// @brief Method get_EventSourceName, addr 0x5fd6bec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_EventSourceName();

  /// @brief Method get_HaveListeners, addr 0x5fd6a38, size 0x8, virtual false, abstract: false, final false
  inline bool get_HaveListeners();

  /// @brief Method get_LastFailure, addr 0x5fd690c, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_LastFailure();

  /// @brief Method get_Level, addr 0x5fd6b78, size 0x74, virtual false, abstract: false, final false
  inline ::System::Diagnostics::SourceLevels get_Level();

  /// @brief Method get_ProcessId, addr 0x5fd6d4c, size 0x134, virtual false, abstract: false, final false
  static inline int32_t get_ProcessId();

  /// @brief Method get_ProcessName, addr 0x5fd6c1c, size 0x130, virtual false, abstract: false, final false
  static inline ::StringW get_ProcessName();

  /// @brief Method get_TraceSource, addr 0x5fd6984, size 0x8, virtual false, abstract: false, final false
  inline ::System::Diagnostics::TraceSource* get_TraceSource();

  /// @brief Method get_TracingEnabled, addr 0x5fd6bfc, size 0x20, virtual false, abstract: false, final false
  inline bool get_TracingEnabled();

  static inline void setStaticF_AppDomainFriendlyName(::StringW value);

  /// @brief Method set_EventSourceName, addr 0x5fd6bf4, size 0x8, virtual false, abstract: false, final false
  inline void set_EventSourceName(::StringW value);

  /// @brief Method set_LastFailure, addr 0x5fd6914, size 0x8, virtual false, abstract: false, final false
  inline void set_LastFailure(::System::DateTime value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiagnosticTraceBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticTraceBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiagnosticTraceBase(DiagnosticTraceBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticTraceBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiagnosticTraceBase(DiagnosticTraceBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21127 };

  /// @brief Field thisLock, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___thisLock;

  /// @brief Field tracingEnabled, offset: 0x18, size: 0x1, def value: None
  bool ___tracingEnabled;

  /// @brief Field calledShutdown, offset: 0x19, size: 0x1, def value: None
  bool ___calledShutdown;

  /// @brief Field haveListeners, offset: 0x1a, size: 0x1, def value: None
  bool ___haveListeners;

  /// @brief Field level, offset: 0x1c, size: 0x4, def value: None
  ::System::Diagnostics::SourceLevels ___level;

  /// @brief Field TraceSourceName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___TraceSourceName;

  /// @brief Field traceSource, offset: 0x28, size: 0x8, def value: None
  ::System::Diagnostics::TraceSource* ___traceSource;

  /// @brief Field eventSourceName, offset: 0x30, size: 0x8, def value: None
  ::StringW ___eventSourceName;

  /// @brief Field <LastFailure>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::System::DateTime ____LastFailure_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Diagnostics::DiagnosticTraceBase, ___thisLock) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Diagnostics::DiagnosticTraceBase, ___tracingEnabled) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Diagnostics::DiagnosticTraceBase, ___calledShutdown) == 0x19, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Diagnostics::DiagnosticTraceBase, ___haveListeners) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Diagnostics::DiagnosticTraceBase, ___level) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Diagnostics::DiagnosticTraceBase, ___TraceSourceName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Diagnostics::DiagnosticTraceBase, ___traceSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Diagnostics::DiagnosticTraceBase, ___eventSourceName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Diagnostics::DiagnosticTraceBase, ____LastFailure_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Diagnostics::DiagnosticTraceBase, 0x40>, "Size mismatch!");

} // namespace System::Runtime::Diagnostics
NEED_NO_BOX(::System::Runtime::Diagnostics::DiagnosticTraceBase);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Diagnostics::DiagnosticTraceBase*, "System.Runtime.Diagnostics", "DiagnosticTraceBase");
