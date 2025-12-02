#pragma once
// IWYU pragma private; include "System/Runtime/ExceptionTrace.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ExceptionTrace)
namespace System::Diagnostics {
struct TraceEventType;
}
namespace System::Runtime::Diagnostics {
class EtwDiagnosticTrace;
}
namespace System {
class ArgumentOutOfRangeException;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime {
class ExceptionTrace;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::ExceptionTrace);
// Dependencies System.Object
namespace System::Runtime {
// Is value type: false
// CS Name: System.Runtime.ExceptionTrace
class CORDL_TYPE ExceptionTrace : public ::System::Object {
public:
  // Declarations
  /// @brief Field diagnosticTrace, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_diagnosticTrace, put = __cordl_internal_set_diagnosticTrace)) ::System::Runtime::Diagnostics::EtwDiagnosticTrace* diagnosticTrace;

  /// @brief Field eventSourceName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_eventSourceName, put = __cordl_internal_set_eventSourceName)) ::StringW eventSourceName;

  /// @brief Method ArgumentOutOfRange, addr 0x5f692d4, size 0xac, virtual false, abstract: false, final false
  inline ::System::ArgumentOutOfRangeException* ArgumentOutOfRange(::StringW paramName, ::System::Object* actualValue, ::StringW message);

  /// @brief Method BreakOnException, addr 0x5f6a088, size 0x4, virtual false, abstract: false, final false
  inline void BreakOnException(::System::Exception* exception);

  static inline ::System::Runtime::ExceptionTrace* New_ctor(::StringW eventSourceName, ::System::Runtime::Diagnostics::EtwDiagnosticTrace* diagnosticTrace);

  /// @brief Method TraceException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TException> inline TException TraceException(TException exception);

  /// @brief Method TraceException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TException> inline TException TraceException(TException exception, ::StringW eventSource);

  /// @brief Method TraceHandledException, addr 0x5f69380, size 0x238, virtual false, abstract: false, final false
  inline void TraceHandledException(::System::Exception* exception, ::System::Diagnostics::TraceEventType traceEventType);

  constexpr ::System::Runtime::Diagnostics::EtwDiagnosticTrace* const& __cordl_internal_get_diagnosticTrace() const;

  constexpr ::System::Runtime::Diagnostics::EtwDiagnosticTrace*& __cordl_internal_get_diagnosticTrace();

  constexpr ::StringW const& __cordl_internal_get_eventSourceName() const;

  constexpr ::StringW& __cordl_internal_get_eventSourceName();

  constexpr void __cordl_internal_set_diagnosticTrace(::System::Runtime::Diagnostics::EtwDiagnosticTrace* value);

  constexpr void __cordl_internal_set_eventSourceName(::StringW value);

  /// @brief Method .ctor, addr 0x5f692cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW eventSourceName, ::System::Runtime::Diagnostics::EtwDiagnosticTrace* diagnosticTrace);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExceptionTrace();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExceptionTrace", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExceptionTrace(ExceptionTrace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExceptionTrace", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExceptionTrace(ExceptionTrace const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21079 };

  /// @brief Field eventSourceName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___eventSourceName;

  /// @brief Field diagnosticTrace, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::Diagnostics::EtwDiagnosticTrace* ___diagnosticTrace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::ExceptionTrace, ___eventSourceName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::ExceptionTrace, ___diagnosticTrace) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::ExceptionTrace, 0x20>, "Size mismatch!");

} // namespace System::Runtime
NEED_NO_BOX(::System::Runtime::ExceptionTrace);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::ExceptionTrace*, "System.Runtime", "ExceptionTrace");
