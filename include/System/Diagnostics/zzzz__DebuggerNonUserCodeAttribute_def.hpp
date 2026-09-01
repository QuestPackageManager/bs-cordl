#pragma once
// IWYU pragma private; include "System\Diagnostics\DebuggerNonUserCodeAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DebuggerNonUserCodeAttribute)
// Forward declare root types
namespace System::Diagnostics {
class DebuggerNonUserCodeAttribute;
}
// Write type traits
MARK_REF_T(::System::Diagnostics::DebuggerNonUserCodeAttribute*);
DEFINE_IL2CPP_CLASS(::System::Diagnostics::DebuggerNonUserCodeAttribute*, "System.Diagnostics", "DebuggerNonUserCodeAttribute");
// Dependencies System.Attribute
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.DebuggerNonUserCodeAttribute
class CORDL_TYPE DebuggerNonUserCodeAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Diagnostics::DebuggerNonUserCodeAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x5be0ab8, size 0x4, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3658 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Diagnostics::DebuggerNonUserCodeAttribute) == 0x10, "Size mismatch!");

} // namespace System::Diagnostics
