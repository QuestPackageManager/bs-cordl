#pragma once
// IWYU pragma private; include "System/Diagnostics/CodeAnalysis/NotNullAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NotNullAttribute)
// Forward declare root types
namespace System::Diagnostics::CodeAnalysis {
class NotNullAttribute;
}
// Write type traits
MARK_REF_T(::System::Diagnostics::CodeAnalysis::NotNullAttribute*);
DEFINE_IL2CPP_CLASS(::System::Diagnostics::CodeAnalysis::NotNullAttribute*, "System.Diagnostics.CodeAnalysis", "NotNullAttribute");
// Dependencies System.Attribute
namespace System::Diagnostics::CodeAnalysis {
// Is value type: false
// CS Name: System.Diagnostics.CodeAnalysis.NotNullAttribute
class CORDL_TYPE NotNullAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Diagnostics::CodeAnalysis::NotNullAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x5be0cdc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NotNullAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NotNullAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NotNullAttribute(NotNullAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NotNullAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NotNullAttribute(NotNullAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3678 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Diagnostics::CodeAnalysis::NotNullAttribute) == 0x10, "Size mismatch!");

} // namespace System::Diagnostics::CodeAnalysis
