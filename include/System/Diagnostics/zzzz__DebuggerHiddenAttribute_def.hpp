#pragma once
// IWYU pragma private; include "System/Diagnostics/DebuggerHiddenAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DebuggerHiddenAttribute)
// Forward declare root types
namespace System::Diagnostics {
class DebuggerHiddenAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::DebuggerHiddenAttribute);
// Dependencies System.Attribute
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.DebuggerHiddenAttribute
class CORDL_TYPE DebuggerHiddenAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Diagnostics::DebuggerHiddenAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x3db8188, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebuggerHiddenAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebuggerHiddenAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebuggerHiddenAttribute(DebuggerHiddenAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebuggerHiddenAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebuggerHiddenAttribute(DebuggerHiddenAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3736 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::DebuggerHiddenAttribute, 0x10>, "Size mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::DebuggerHiddenAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::DebuggerHiddenAttribute*, "System.Diagnostics", "DebuggerHiddenAttribute");
