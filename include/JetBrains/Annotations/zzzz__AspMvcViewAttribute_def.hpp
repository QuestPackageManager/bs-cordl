#pragma once
// IWYU pragma private; include "JetBrains/Annotations/AspMvcViewAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(AspMvcViewAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcViewAttribute;
}
// Write type traits
MARK_REF_T(::JetBrains::Annotations::AspMvcViewAttribute*);
DEFINE_IL2CPP_CLASS(::JetBrains::Annotations::AspMvcViewAttribute*, "JetBrains.Annotations", "AspMvcViewAttribute");
// Dependencies System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.AspMvcViewAttribute
class CORDL_TYPE AspMvcViewAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::JetBrains::Annotations::AspMvcViewAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x6e3abe0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AspMvcViewAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AspMvcViewAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AspMvcViewAttribute(AspMvcViewAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AspMvcViewAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AspMvcViewAttribute(AspMvcViewAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22528 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::JetBrains::Annotations::AspMvcViewAttribute) == 0x10, "Size mismatch!");

} // namespace JetBrains::Annotations
