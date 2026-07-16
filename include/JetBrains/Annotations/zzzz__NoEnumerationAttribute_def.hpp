#pragma once
// IWYU pragma private; include "JetBrains/Annotations/NoEnumerationAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NoEnumerationAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class NoEnumerationAttribute;
}
// Write type traits
MARK_REF_T(::JetBrains::Annotations::NoEnumerationAttribute*);
DEFINE_IL2CPP_CLASS(::JetBrains::Annotations::NoEnumerationAttribute*, "JetBrains.Annotations", "NoEnumerationAttribute");
// Dependencies System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.NoEnumerationAttribute
class CORDL_TYPE NoEnumerationAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::JetBrains::Annotations::NoEnumerationAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x6e3ac64, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoEnumerationAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoEnumerationAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoEnumerationAttribute(NoEnumerationAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoEnumerationAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoEnumerationAttribute(NoEnumerationAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22542 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::JetBrains::Annotations::NoEnumerationAttribute) == 0x10, "Size mismatch!");

} // namespace JetBrains::Annotations
