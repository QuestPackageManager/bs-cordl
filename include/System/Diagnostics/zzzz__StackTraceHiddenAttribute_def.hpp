#pragma once
// IWYU pragma private; include "System/Diagnostics/StackTraceHiddenAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(StackTraceHiddenAttribute)
// Forward declare root types
namespace System::Diagnostics {
class StackTraceHiddenAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::StackTraceHiddenAttribute);
// Dependencies System.Attribute
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.StackTraceHiddenAttribute
class CORDL_TYPE StackTraceHiddenAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Diagnostics::StackTraceHiddenAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x3dbadd0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StackTraceHiddenAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StackTraceHiddenAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StackTraceHiddenAttribute(StackTraceHiddenAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StackTraceHiddenAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StackTraceHiddenAttribute(StackTraceHiddenAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3734 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::StackTraceHiddenAttribute, 0x10>, "Size mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::StackTraceHiddenAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::StackTraceHiddenAttribute*, "System.Diagnostics", "StackTraceHiddenAttribute");
