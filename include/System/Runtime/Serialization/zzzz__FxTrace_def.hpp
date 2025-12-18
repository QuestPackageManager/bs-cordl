#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/FxTrace.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FxTrace)
namespace System::Runtime::Diagnostics {
class EtwDiagnosticTrace;
}
namespace System::Runtime::Diagnostics {
struct EventDescriptor;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class FxTrace;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::FxTrace);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.FxTrace
class CORDL_TYPE FxTrace : public ::System::Object {
public:
  // Declarations
  /// @brief Field ShouldTraceError, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_ShouldTraceError, put = setStaticF_ShouldTraceError)) bool ShouldTraceError;

  /// @brief Field ShouldTraceVerbose, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_ShouldTraceVerbose, put = setStaticF_ShouldTraceVerbose)) bool ShouldTraceVerbose;

  /// @brief Method IsEventEnabled, addr 0x5fc783c, size 0x8, virtual false, abstract: false, final false
  static inline bool IsEventEnabled(int32_t index);

  /// @brief Method UpdateEventDefinitions, addr 0x5fc7844, size 0x4, virtual false, abstract: false, final false
  static inline void UpdateEventDefinitions(::ArrayW<::System::Runtime::Diagnostics::EventDescriptor, ::Array<::System::Runtime::Diagnostics::EventDescriptor>*> ed,
                                            ::ArrayW<uint16_t, ::Array<uint16_t>*> events);

  static inline bool getStaticF_ShouldTraceError();

  static inline bool getStaticF_ShouldTraceVerbose();

  /// @brief Method get_Trace, addr 0x5fc7834, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Runtime::Diagnostics::EtwDiagnosticTrace* get_Trace();

  static inline void setStaticF_ShouldTraceError(bool value);

  static inline void setStaticF_ShouldTraceVerbose(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FxTrace();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FxTrace", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FxTrace(FxTrace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FxTrace", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FxTrace(FxTrace const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17122 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::FxTrace, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::FxTrace);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::FxTrace*, "System.Runtime.Serialization", "FxTrace");
