#pragma once
// IWYU pragma private; include "System/Runtime/Diagnostics/ITraceSourceStringProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ITraceSourceStringProvider)
// Forward declare root types
namespace System::Runtime::Diagnostics {
class ITraceSourceStringProvider;
}
// Write type traits
MARK_REF_T(::System::Runtime::Diagnostics::ITraceSourceStringProvider*);
DEFINE_IL2CPP_CLASS(::System::Runtime::Diagnostics::ITraceSourceStringProvider*, "System.Runtime.Diagnostics", "ITraceSourceStringProvider");
// Dependencies
namespace System::Runtime::Diagnostics {
// Is value type: false
// CS Name: System.Runtime.Diagnostics.ITraceSourceStringProvider
class CORDL_TYPE ITraceSourceStringProvider {
public:
  // Declarations
  /// @brief Method GetSourceString, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetSourceString();

  // Ctor Parameters [CppParam { name: "", ty: "ITraceSourceStringProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITraceSourceStringProvider(ITraceSourceStringProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21281 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Diagnostics
