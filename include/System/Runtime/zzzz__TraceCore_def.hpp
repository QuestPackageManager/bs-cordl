#pragma once
// IWYU pragma private; include "System/Runtime/TraceCore.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Diagnostics/zzzz__EventDescriptor_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TraceCore)
namespace System::Globalization {
class CultureInfo;
}
namespace System::Resources {
class ResourceManager;
}
namespace System::Runtime::Diagnostics {
class EtwDiagnosticTrace;
}
namespace System::Runtime::Diagnostics {
class EventTraceActivity;
}
namespace System::Runtime::Diagnostics {
class TraceRecord;
}
namespace System::Runtime {
struct TracePayload;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime {
class TraceCore;
}
// Write type traits
MARK_REF_T(::System::Runtime::TraceCore*);
DEFINE_IL2CPP_CLASS(::System::Runtime::TraceCore*, "System.Runtime", "TraceCore");
// Dependencies System.Object, System.Runtime.Diagnostics.EventDescriptor
namespace System::Runtime {
// Is value type: false
// CS Name: System.Runtime.TraceCore
class CORDL_TYPE TraceCore : public ::System::Object {
public:
  // Declarations
  /// @brief Field eventDescriptors, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_eventDescriptors, put = setStaticF_eventDescriptors)) ::ArrayW<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptors;

  /// @brief Field eventDescriptorsCreated, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_eventDescriptorsCreated, put = setStaticF_eventDescriptorsCreated)) bool eventDescriptorsCreated;

  /// @brief Field resourceCulture, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_resourceCulture, put = setStaticF_resourceCulture)) ::System::Globalization::CultureInfo* resourceCulture;

  /// @brief Field resourceManager, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_resourceManager, put = setStaticF_resourceManager)) ::System::Resources::ResourceManager* resourceManager;

  /// @brief Field syncLock, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_syncLock, put = setStaticF_syncLock)) ::System::Object* syncLock;

  /// @brief Method ActionItemCallbackInvokedIsEnabled, addr 0x65ec094, size 0x5c, virtual false, abstract: false, final false
  static inline bool ActionItemCallbackInvokedIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace);

  /// @brief Method ActionItemScheduledIsEnabled, addr 0x65ec0f0, size 0x5c, virtual false, abstract: false, final false
  static inline bool ActionItemScheduledIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace);

  /// @brief Method AppDomainUnload, addr 0x65ecd5c, size 0x234, virtual false, abstract: false, final false
  static inline void AppDomainUnload(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::StringW appdomainName, ::StringW processName, ::StringW processId);

  /// @brief Method AppDomainUnloadIsEnabled, addr 0x65ecc10, size 0x8c, virtual false, abstract: false, final false
  static inline bool AppDomainUnloadIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace);

  /// @brief Method CreateEventDescriptors, addr 0x65ee798, size 0x234, virtual false, abstract: false, final false
  static inline void CreateEventDescriptors();

  /// @brief Method EnsureEventDescriptors, addr 0x65eeb70, size 0x150, virtual false, abstract: false, final false
  static inline void EnsureEventDescriptors();

  /// @brief Method HandledException, addr 0x65eb2b4, size 0x228, virtual false, abstract: false, final false
  static inline void HandledException(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::StringW param0, ::System::Exception* exception);

  /// @brief Method HandledExceptionError, addr 0x65eaa98, size 0x228, virtual false, abstract: false, final false
  static inline void HandledExceptionError(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::StringW param0, ::System::Exception* exception);

  /// @brief Method HandledExceptionErrorIsEnabled, addr 0x65eaa0c, size 0x8c, virtual false, abstract: false, final false
  static inline bool HandledExceptionErrorIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace);

  /// @brief Method HandledExceptionIsEnabled, addr 0x65eb228, size 0x8c, virtual false, abstract: false, final false
  static inline bool HandledExceptionIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace);

  /// @brief Method HandledExceptionVerbose, addr 0x65eb000, size 0x228, virtual false, abstract: false, final false
  static inline void HandledExceptionVerbose(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::StringW param0, ::System::Exception* exception);

  /// @brief Method HandledExceptionVerboseIsEnabled, addr 0x65eaf74, size 0x8c, virtual false, abstract: false, final false
  static inline bool HandledExceptionVerboseIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace);

  /// @brief Method HandledExceptionWarning, addr 0x65ead4c, size 0x228, virtual false, abstract: false, final false
  static inline void HandledExceptionWarning(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::StringW param0, ::System::Exception* exception);

  /// @brief Method HandledExceptionWarningIsEnabled, addr 0x65eacc0, size 0x8c, virtual false, abstract: false, final false
  static inline bool HandledExceptionWarningIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace);

  /// @brief Method IsEtwEventEnabled, addr 0x65ecc9c, size 0xc0, virtual false, abstract: false, final false
  static inline bool IsEtwEventEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, int32_t eventIndex);

  /// @brief Method ThrowingException, addr 0x65ed330, size 0x234, virtual false, abstract: false, final false
  static inline void ThrowingException(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::StringW param0, ::StringW param1, ::System::Exception* exception);

  /// @brief Method ThrowingExceptionIsEnabled, addr 0x65ed2a4, size 0x8c, virtual false, abstract: false, final false
  static inline bool ThrowingExceptionIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace);

  /// @brief Method TraceCodeEventLogCritical, addr 0x65ed8a4, size 0x268, virtual false, abstract: false, final false
  static inline void TraceCodeEventLogCritical(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::System::Runtime::Diagnostics::TraceRecord* traceRecord);

  /// @brief Method TraceCodeEventLogCriticalIsEnabled, addr 0x65ed818, size 0x8c, virtual false, abstract: false, final false
  static inline bool TraceCodeEventLogCriticalIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace);

  /// @brief Method TraceCodeEventLogError, addr 0x65edc54, size 0x268, virtual false, abstract: false, final false
  static inline void TraceCodeEventLogError(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::System::Runtime::Diagnostics::TraceRecord* traceRecord);

  /// @brief Method TraceCodeEventLogErrorIsEnabled, addr 0x65edbc8, size 0x8c, virtual false, abstract: false, final false
  static inline bool TraceCodeEventLogErrorIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace);

  /// @brief Method TraceCodeEventLogInfo, addr 0x65edf48, size 0x268, virtual false, abstract: false, final false
  static inline void TraceCodeEventLogInfo(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::System::Runtime::Diagnostics::TraceRecord* traceRecord);

  /// @brief Method TraceCodeEventLogInfoIsEnabled, addr 0x65edebc, size 0x8c, virtual false, abstract: false, final false
  static inline bool TraceCodeEventLogInfoIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace);

  /// @brief Method TraceCodeEventLogVerbose, addr 0x65ee23c, size 0x268, virtual false, abstract: false, final false
  static inline void TraceCodeEventLogVerbose(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::System::Runtime::Diagnostics::TraceRecord* traceRecord);

  /// @brief Method TraceCodeEventLogVerboseIsEnabled, addr 0x65ee1b0, size 0x8c, virtual false, abstract: false, final false
  static inline bool TraceCodeEventLogVerboseIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace);

  /// @brief Method TraceCodeEventLogWarning, addr 0x65ee530, size 0x268, virtual false, abstract: false, final false
  static inline void TraceCodeEventLogWarning(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::System::Runtime::Diagnostics::TraceRecord* traceRecord);

  /// @brief Method TraceCodeEventLogWarningIsEnabled, addr 0x65ee4a4, size 0x8c, virtual false, abstract: false, final false
  static inline bool TraceCodeEventLogWarningIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace);

  /// @brief Method UnhandledException, addr 0x65ed5f0, size 0x228, virtual false, abstract: false, final false
  static inline void UnhandledException(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::StringW param0, ::System::Exception* exception);

  /// @brief Method UnhandledExceptionIsEnabled, addr 0x65ed564, size 0x8c, virtual false, abstract: false, final false
  static inline bool UnhandledExceptionIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace);

  /// @brief Method WriteEtwEvent, addr 0x65edb0c, size 0xbc, virtual false, abstract: false, final false
  static inline bool WriteEtwEvent(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, int32_t eventIndex, ::System::Runtime::Diagnostics::EventTraceActivity* eventParam0,
                                   ::StringW eventParam1, ::StringW eventParam2);

  /// @brief Method WriteEtwEvent, addr 0x65ed1d8, size 0xcc, virtual false, abstract: false, final false
  static inline bool WriteEtwEvent(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, int32_t eventIndex, ::System::Runtime::Diagnostics::EventTraceActivity* eventParam0,
                                   ::StringW eventParam1, ::StringW eventParam2, ::StringW eventParam3);

  /// @brief Method WriteEtwEvent, addr 0x65ecfc8, size 0xd4, virtual false, abstract: false, final false
  static inline bool WriteEtwEvent(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, int32_t eventIndex, ::System::Runtime::Diagnostics::EventTraceActivity* eventParam0,
                                   ::StringW eventParam1, ::StringW eventParam2, ::StringW eventParam3, ::StringW eventParam4);

  /// @brief Method WriteTraceSource, addr 0x65ed10c, size 0xcc, virtual false, abstract: false, final false
  static inline void WriteTraceSource(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, int32_t eventIndex, ::StringW description, ::System::Runtime::TracePayload payload);

  static inline ::ArrayW<::System::Runtime::Diagnostics::EventDescriptor> getStaticF_eventDescriptors();

  static inline bool getStaticF_eventDescriptorsCreated();

  static inline ::System::Globalization::CultureInfo* getStaticF_resourceCulture();

  static inline ::System::Resources::ResourceManager* getStaticF_resourceManager();

  static inline ::System::Object* getStaticF_syncLock();

  /// @brief Method get_Culture, addr 0x65ecbb4, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Globalization::CultureInfo* get_Culture();

  /// @brief Method get_ResourceManager, addr 0x65eca74, size 0x140, virtual false, abstract: false, final false
  static inline ::System::Resources::ResourceManager* get_ResourceManager();

  static inline void setStaticF_eventDescriptors(::ArrayW<::System::Runtime::Diagnostics::EventDescriptor> value);

  static inline void setStaticF_eventDescriptorsCreated(bool value);

  static inline void setStaticF_resourceCulture(::System::Globalization::CultureInfo* value);

  static inline void setStaticF_resourceManager(::System::Resources::ResourceManager* value);

  static inline void setStaticF_syncLock(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TraceCore();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TraceCore", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TraceCore(TraceCore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TraceCore", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TraceCore(TraceCore const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22093 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::TraceCore) == 0x10, "Size mismatch!");

} // namespace System::Runtime
