#pragma once
// IWYU pragma private; include "System/Diagnostics/DebuggerNonUserCodeAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DebuggerNonUserCodeAttribute)
// Forward declare root types
namespace System::Diagnostics {
class DebuggerNonUserCodeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::DebuggerNonUserCodeAttribute);
// Dependencies System.Attribute
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.DebuggerNonUserCodeAttribute
class CORDL_TYPE DebuggerNonUserCodeAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Diagnostics::DebuggerNonUserCodeAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x3dbade8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebuggerNonUserCodeAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebuggerNonUserCodeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebuggerNonUserCodeAttribute(DebuggerNonUserCodeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebuggerNonUserCodeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebuggerNonUserCodeAttribute(DebuggerNonUserCodeAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3737 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::DebuggerNonUserCodeAttribute, 0x10>, "Size mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::DebuggerNonUserCodeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::DebuggerNonUserCodeAttribute*, "System.Diagnostics", "DebuggerNonUserCodeAttribute");
