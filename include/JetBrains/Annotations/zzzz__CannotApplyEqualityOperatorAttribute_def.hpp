#pragma once
// IWYU pragma private; include "JetBrains/Annotations/CannotApplyEqualityOperatorAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(CannotApplyEqualityOperatorAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class CannotApplyEqualityOperatorAttribute;
}
// Write type traits
MARK_REF_T(::JetBrains::Annotations::CannotApplyEqualityOperatorAttribute*);
DEFINE_IL2CPP_CLASS(::JetBrains::Annotations::CannotApplyEqualityOperatorAttribute*, "JetBrains.Annotations", "CannotApplyEqualityOperatorAttribute");
// Dependencies System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.CannotApplyEqualityOperatorAttribute
class CORDL_TYPE CannotApplyEqualityOperatorAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::JetBrains::Annotations::CannotApplyEqualityOperatorAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x6e3a98c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CannotApplyEqualityOperatorAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CannotApplyEqualityOperatorAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CannotApplyEqualityOperatorAttribute(CannotApplyEqualityOperatorAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CannotApplyEqualityOperatorAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CannotApplyEqualityOperatorAttribute(CannotApplyEqualityOperatorAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22498 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::JetBrains::Annotations::CannotApplyEqualityOperatorAttribute) == 0x10, "Size mismatch!");

} // namespace JetBrains::Annotations
