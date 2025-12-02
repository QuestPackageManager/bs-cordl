#pragma once
// IWYU pragma private; include "System/Runtime/Diagnostics/DiagnosticTraceSource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Diagnostics/zzzz__TraceSource_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DiagnosticTraceSource)
// Forward declare root types
namespace System::Runtime::Diagnostics {
class DiagnosticTraceSource;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Diagnostics::DiagnosticTraceSource);
// Dependencies System.Diagnostics.TraceSource
namespace System::Runtime::Diagnostics {
// Is value type: false
// CS Name: System.Runtime.Diagnostics.DiagnosticTraceSource
class CORDL_TYPE DiagnosticTraceSource : public ::System::Diagnostics::TraceSource {
public:
  // Declarations
  static inline ::System::Runtime::Diagnostics::DiagnosticTraceSource* New_ctor(::StringW name);

  /// @brief Method .ctor, addr 0x5f70638, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiagnosticTraceSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticTraceSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiagnosticTraceSource(DiagnosticTraceSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticTraceSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiagnosticTraceSource(DiagnosticTraceSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21101 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Diagnostics::DiagnosticTraceSource, 0x40>, "Size mismatch!");

} // namespace System::Runtime::Diagnostics
NEED_NO_BOX(::System::Runtime::Diagnostics::DiagnosticTraceSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Diagnostics::DiagnosticTraceSource*, "System.Runtime.Diagnostics", "DiagnosticTraceSource");
