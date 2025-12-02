#pragma once
// IWYU pragma private; include "System/Runtime/Diagnostics/EtwDiagnosticTrace.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Diagnostics/zzzz__DiagnosticTraceBase_def.hpp"
#include "System/Runtime/Diagnostics/zzzz__EventDescriptor_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EtwDiagnosticTrace)
namespace System::Collections::Concurrent {
template <typename T> class ConcurrentQueue_1;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Diagnostics {
struct TraceEventType;
}
namespace System::Runtime::Diagnostics {
class EtwDiagnosticTrace_StringBuilderPool;
}
namespace System::Runtime::Diagnostics {
class EtwProvider;
}
namespace System::Runtime::Diagnostics {
struct EventDescriptor;
}
namespace System::Runtime::Diagnostics {
class TraceRecord;
}
namespace System::Runtime {
struct TraceChannel;
}
namespace System::Runtime {
struct TraceEventLevel;
}
namespace System::Runtime {
struct TracePayload;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Xml {
class XmlTextWriter;
}
namespace System {
class Action;
}
namespace System {
class Exception;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Diagnostics {
class EtwDiagnosticTrace;
}
namespace System::Runtime::Diagnostics {
class EtwDiagnosticTrace_StringBuilderPool;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Diagnostics::EtwDiagnosticTrace);
MARK_REF_PTR_T(::System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool);
// Dependencies System.Object
namespace System::Runtime::Diagnostics {
// Is value type: false
// CS Name: System.Runtime.Diagnostics.EtwDiagnosticTrace/StringBuilderPool
class CORDL_TYPE EtwDiagnosticTrace_StringBuilderPool : public ::System::Object {
public:
  // Declarations
  /// @brief Field freeStringBuilders, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_freeStringBuilders,
                      put = setStaticF_freeStringBuilders)) ::System::Collections::Concurrent::ConcurrentQueue_1<::System::Text::StringBuilder*>* freeStringBuilders;

  /// @brief Method Return, addr 0x5f749a8, size 0xec, virtual false, abstract: false, final false
  static inline void Return(::System::Text::StringBuilder* sb);

  /// @brief Method Take, addr 0x5f71c8c, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Text::StringBuilder* Take();

  static inline ::System::Collections::Concurrent::ConcurrentQueue_1<::System::Text::StringBuilder*>* getStaticF_freeStringBuilders();

  static inline void setStaticF_freeStringBuilders(::System::Collections::Concurrent::ConcurrentQueue_1<::System::Text::StringBuilder*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EtwDiagnosticTrace_StringBuilderPool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EtwDiagnosticTrace_StringBuilderPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EtwDiagnosticTrace_StringBuilderPool(EtwDiagnosticTrace_StringBuilderPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EtwDiagnosticTrace_StringBuilderPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EtwDiagnosticTrace_StringBuilderPool(EtwDiagnosticTrace_StringBuilderPool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21103 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Diagnostics
// Dependencies System.Guid, System.Runtime.Diagnostics.DiagnosticTraceBase, System.Runtime.Diagnostics.EventDescriptor
namespace System::Runtime::Diagnostics {
// Is value type: false
// CS Name: System.Runtime.Diagnostics.EtwDiagnosticTrace
class CORDL_TYPE EtwDiagnosticTrace : public ::System::Runtime::Diagnostics::DiagnosticTraceBase {
public:
  // Declarations
  using StringBuilderPool = ::System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool;

  __declspec(property(get = get_EtwProvider)) ::System::Runtime::Diagnostics::EtwProvider* EtwProvider;

  __declspec(property(get = get_EtwTracingEnabled)) bool EtwTracingEnabled;

  /// @brief Field ImmutableDefaultEtwProviderId, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_ImmutableDefaultEtwProviderId, put = setStaticF_ImmutableDefaultEtwProviderId)) ::System::Guid ImmutableDefaultEtwProviderId;

  __declspec(property(get = get_IsEtwProviderEnabled)) bool IsEtwProviderEnabled;

  __declspec(property(get = get_RefreshState, put = set_RefreshState)) ::System::Action* RefreshState;

  /// @brief Field defaultEtwProviderId, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_defaultEtwProviderId, put = setStaticF_defaultEtwProviderId)) ::System::Guid defaultEtwProviderId;

  /// @brief Field etwProvider, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_etwProvider, put = __cordl_internal_set_etwProvider)) ::System::Runtime::Diagnostics::EtwProvider* etwProvider;

  /// @brief Field etwProviderCache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_etwProviderCache, put = setStaticF_etwProviderCache)) ::System::Collections::Hashtable* etwProviderCache;

  /// @brief Field etwProviderId, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get_etwProviderId, put = __cordl_internal_set_etwProviderId)) ::System::Guid etwProviderId;

  /// @brief Field isVistaOrGreater, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_isVistaOrGreater, put = setStaticF_isVistaOrGreater)) bool isVistaOrGreater;

  /// @brief Field traceAnnotation, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_traceAnnotation, put = setStaticF_traceAnnotation)) ::System::Func_1<::StringW>* traceAnnotation;

  /// @brief Field transferEventDescriptor, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_transferEventDescriptor, put = setStaticF_transferEventDescriptor)) ::System::Runtime::Diagnostics::EventDescriptor transferEventDescriptor;

  /// @brief Method BuildTrace, addr 0x5f7153c, size 0x750, virtual false, abstract: false, final false
  static inline ::StringW BuildTrace(::ByRef<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor, ::StringW description, ::System::Runtime::TracePayload payload, ::StringW msdnTraceCode);

  /// @brief Method CreateEtwProvider, addr 0x5f70ef8, size 0x310, virtual false, abstract: false, final false
  inline void CreateEtwProvider(::System::Guid etwProviderId);

  /// @brief Method CreateTraceSource, addr 0x5f70c04, size 0x7c, virtual false, abstract: false, final false
  inline void CreateTraceSource();

  /// @brief Method ExceptionToTraceString, addr 0x5f7251c, size 0x3ec, virtual false, abstract: false, final false
  static inline ::StringW ExceptionToTraceString(::System::Exception* exception, int32_t maxTraceStringLength);

  /// @brief Method GenerateLegacyTraceCode, addr 0x5f712fc, size 0x240, virtual false, abstract: false, final false
  static inline void GenerateLegacyTraceCode(::ByRef<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor, ::ByRef<::StringW> msdnTraceCode, ::ByRef<int32_t> legacyEventId);

  /// @brief Method GenerateMsdnTraceCode, addr 0x5f71eb4, size 0xe4, virtual false, abstract: false, final false
  static inline ::StringW GenerateMsdnTraceCode(::StringW traceSource, ::StringW traceCodeString);

  /// @brief Method GetExceptionData, addr 0x5f73b48, size 0x9dc, virtual false, abstract: false, final false
  static inline ::StringW GetExceptionData(::System::Exception* exception);

  /// @brief Method GetInnerException, addr 0x5f74524, size 0x484, virtual false, abstract: false, final false
  static inline ::StringW GetInnerException(::System::Exception* exception, int32_t remainingLength, int32_t remainingAllowedRecursionDepth);

  /// @brief Method GetSerializedPayload, addr 0x5f6bb3c, size 0x38, virtual false, abstract: false, final false
  inline ::System::Runtime::TracePayload GetSerializedPayload(::System::Object* source, ::System::Runtime::Diagnostics::TraceRecord* traceRecord, ::System::Exception* exception);

  /// @brief Method GetSerializedPayload, addr 0x5f71f98, size 0x584, virtual false, abstract: false, final false
  inline ::System::Runtime::TracePayload GetSerializedPayload(::System::Object* source, ::System::Runtime::Diagnostics::TraceRecord* traceRecord, ::System::Exception* exception,
                                                              bool getServiceReference);

  /// @brief Method IsEnabled, addr 0x5f72c04, size 0xd8, virtual true, abstract: false, final false
  inline bool IsEnabled();

  /// @brief Method IsEtwEventEnabled, addr 0x5f6d88c, size 0x60, virtual false, abstract: false, final false
  inline bool IsEtwEventEnabled(::ByRef<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor, bool fullCheck);

  /// @brief Method LookupChannel, addr 0x5f71d54, size 0x160, virtual false, abstract: false, final false
  static inline ::StringW LookupChannel(::System::Runtime::TraceChannel traceChannel);

  static inline ::System::Runtime::Diagnostics::EtwDiagnosticTrace* New_ctor(::StringW traceSourceName, ::System::Guid etwProviderId);

  /// @brief Method OnShutdownTracing, addr 0x5f7290c, size 0x18, virtual true, abstract: false, final false
  inline void OnShutdownTracing();

  /// @brief Method OnUnhandledException, addr 0x5f72ec4, size 0xc4, virtual true, abstract: false, final false
  inline void OnUnhandledException(::System::Exception* exception);

  /// @brief Method SetEnd2EndActivityTracingEnabled, addr 0x5f6acf8, size 0x1c, virtual false, abstract: false, final false
  inline void SetEnd2EndActivityTracingEnabled(bool isEnd2EndTracingEnabled);

  /// @brief Method ShouldTrace, addr 0x5f7127c, size 0x54, virtual true, abstract: false, final false
  inline bool ShouldTrace(::System::Runtime::TraceEventLevel level);

  /// @brief Method ShouldTraceToEtw, addr 0x5f712d0, size 0x2c, virtual false, abstract: false, final false
  inline bool ShouldTraceToEtw(::System::Runtime::TraceEventLevel level);

  /// @brief Method ShutdownEtwProvider, addr 0x5f72b40, size 0xc4, virtual false, abstract: false, final false
  inline void ShutdownEtwProvider();

  /// @brief Method ShutdownTraceSource, addr 0x5f72924, size 0x21c, virtual false, abstract: false, final false
  inline void ShutdownTraceSource();

  /// @brief Method TraceEventLogEvent, addr 0x5f72cdc, size 0x1e8, virtual true, abstract: false, final false
  inline void TraceEventLogEvent(::System::Diagnostics::TraceEventType type, ::System::Runtime::Diagnostics::TraceRecord* traceRecord);

  /// @brief Method WriteExceptionToTraceString, addr 0x5f72f88, size 0xa70, virtual false, abstract: false, final false
  static inline void WriteExceptionToTraceString(::System::Xml::XmlTextWriter* xml, ::System::Exception* exception, int32_t remainingLength, int32_t remainingAllowedRecursionDepth);

  /// @brief Method WriteStartElement, addr 0x5f739f8, size 0x68, virtual false, abstract: false, final false
  static inline bool WriteStartElement(::System::Xml::XmlTextWriter* xml, ::StringW localName, ::ByRef<int32_t> remainingLength);

  /// @brief Method WriteTraceSource, addr 0x5f6dca8, size 0x230, virtual false, abstract: false, final false
  inline void WriteTraceSource(::ByRef<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor, ::StringW description, ::System::Runtime::TracePayload payload);

  /// @brief Method WriteXmlElementString, addr 0x5f73a60, size 0xe8, virtual false, abstract: false, final false
  static inline bool WriteXmlElementString(::System::Xml::XmlTextWriter* xml, ::StringW localName, ::StringW value, ::ByRef<int32_t> remainingLength);

  constexpr ::System::Runtime::Diagnostics::EtwProvider* const& __cordl_internal_get_etwProvider() const;

  constexpr ::System::Runtime::Diagnostics::EtwProvider*& __cordl_internal_get_etwProvider();

  constexpr ::System::Guid const& __cordl_internal_get_etwProviderId() const;

  constexpr ::System::Guid& __cordl_internal_get_etwProviderId();

  constexpr void __cordl_internal_set_etwProvider(::System::Runtime::Diagnostics::EtwProvider* value);

  constexpr void __cordl_internal_set_etwProviderId(::System::Guid value);

  /// @brief Method .ctor, addr 0x5f6a374, size 0x398, virtual false, abstract: false, final false
  inline void _ctor(::StringW traceSourceName, ::System::Guid etwProviderId);

  static inline ::System::Guid getStaticF_ImmutableDefaultEtwProviderId();

  static inline ::System::Guid getStaticF_defaultEtwProviderId();

  static inline ::System::Collections::Hashtable* getStaticF_etwProviderCache();

  static inline bool getStaticF_isVistaOrGreater();

  static inline ::System::Func_1<::StringW>* getStaticF_traceAnnotation();

  static inline ::System::Runtime::Diagnostics::EventDescriptor getStaticF_transferEventDescriptor();

  /// @brief Method get_DefaultEtwProviderId, addr 0x5f71218, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Guid get_DefaultEtwProviderId();

  /// @brief Method get_EtwProvider, addr 0x5f71274, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::Diagnostics::EtwProvider* get_EtwProvider();

  /// @brief Method get_EtwTracingEnabled, addr 0x5f71208, size 0x10, virtual false, abstract: false, final false
  inline bool get_EtwTracingEnabled();

  /// @brief Method get_IsEtwProviderEnabled, addr 0x5f6d86c, size 0x20, virtual false, abstract: false, final false
  inline bool get_IsEtwProviderEnabled();

  /// @brief Method get_RefreshState, addr 0x5f6a70c, size 0x18, virtual false, abstract: false, final false
  inline ::System::Action* get_RefreshState();

  static inline void setStaticF_ImmutableDefaultEtwProviderId(::System::Guid value);

  static inline void setStaticF_defaultEtwProviderId(::System::Guid value);

  static inline void setStaticF_etwProviderCache(::System::Collections::Hashtable* value);

  static inline void setStaticF_isVistaOrGreater(bool value);

  static inline void setStaticF_traceAnnotation(::System::Func_1<::StringW>* value);

  static inline void setStaticF_transferEventDescriptor(::System::Runtime::Diagnostics::EventDescriptor value);

  /// @brief Method set_RefreshState, addr 0x5f6a724, size 0x18, virtual false, abstract: false, final false
  inline void set_RefreshState(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EtwDiagnosticTrace();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EtwDiagnosticTrace", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EtwDiagnosticTrace(EtwDiagnosticTrace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EtwDiagnosticTrace", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EtwDiagnosticTrace(EtwDiagnosticTrace const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21104 };

  /// @brief Field etwProvider, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::Diagnostics::EtwProvider* ___etwProvider;

  /// @brief Field etwProviderId, offset: 0x48, size: 0x10, def value: None
  ::System::Guid ___etwProviderId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Diagnostics::EtwDiagnosticTrace, ___etwProvider) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Diagnostics::EtwDiagnosticTrace, ___etwProviderId) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Diagnostics::EtwDiagnosticTrace, 0x58>, "Size mismatch!");

} // namespace System::Runtime::Diagnostics
NEED_NO_BOX(::System::Runtime::Diagnostics::EtwDiagnosticTrace);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, "System.Runtime.Diagnostics", "EtwDiagnosticTrace");
NEED_NO_BOX(::System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool*, "System.Runtime.Diagnostics", "EtwDiagnosticTrace/StringBuilderPool");
