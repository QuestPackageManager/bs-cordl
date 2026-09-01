#pragma once
// IWYU pragma private; include "JetBrains\Annotations\AssertionMethodAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(AssertionMethodAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class AssertionMethodAttribute;
}
// Write type traits
MARK_REF_T(::JetBrains::Annotations::AssertionMethodAttribute*);
DEFINE_IL2CPP_CLASS(::JetBrains::Annotations::AssertionMethodAttribute*, "JetBrains.Annotations", "AssertionMethodAttribute");
// Dependencies System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.AssertionMethodAttribute
class CORDL_TYPE AssertionMethodAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::JetBrains::Annotations::AssertionMethodAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x6e3e1c8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssertionMethodAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssertionMethodAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssertionMethodAttribute(AssertionMethodAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssertionMethodAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssertionMethodAttribute(AssertionMethodAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22586 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::JetBrains::Annotations::AssertionMethodAttribute) == 0x10, "Size mismatch!");

} // namespace JetBrains::Annotations
