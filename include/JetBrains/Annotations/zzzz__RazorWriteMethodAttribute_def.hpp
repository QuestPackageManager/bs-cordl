#pragma once
// IWYU pragma private; include "JetBrains/Annotations/RazorWriteMethodAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(RazorWriteMethodAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class RazorWriteMethodAttribute;
}
// Write type traits
MARK_REF_T(::JetBrains::Annotations::RazorWriteMethodAttribute*);
DEFINE_IL2CPP_CLASS(::JetBrains::Annotations::RazorWriteMethodAttribute*, "JetBrains.Annotations", "RazorWriteMethodAttribute");
// Dependencies System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.RazorWriteMethodAttribute
class CORDL_TYPE RazorWriteMethodAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::JetBrains::Annotations::RazorWriteMethodAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x6e3ad70, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RazorWriteMethodAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RazorWriteMethodAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RazorWriteMethodAttribute(RazorWriteMethodAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RazorWriteMethodAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RazorWriteMethodAttribute(RazorWriteMethodAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22560 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::JetBrains::Annotations::RazorWriteMethodAttribute) == 0x10, "Size mismatch!");

} // namespace JetBrains::Annotations
