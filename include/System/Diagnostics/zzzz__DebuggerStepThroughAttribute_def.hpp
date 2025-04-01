#pragma once
// IWYU pragma private; include "System/Diagnostics/DebuggerStepThroughAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DebuggerStepThroughAttribute)
// Forward declare root types
namespace System::Diagnostics {
class DebuggerStepThroughAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::DebuggerStepThroughAttribute);
// Dependencies System.Attribute
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.DebuggerStepThroughAttribute
class CORDL_TYPE DebuggerStepThroughAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Diagnostics::DebuggerStepThroughAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x3db17d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebuggerStepThroughAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebuggerStepThroughAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebuggerStepThroughAttribute(DebuggerStepThroughAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebuggerStepThroughAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebuggerStepThroughAttribute(DebuggerStepThroughAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3735 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::DebuggerStepThroughAttribute, 0x10>, "Size mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::DebuggerStepThroughAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::DebuggerStepThroughAttribute*, "System.Diagnostics", "DebuggerStepThroughAttribute");
