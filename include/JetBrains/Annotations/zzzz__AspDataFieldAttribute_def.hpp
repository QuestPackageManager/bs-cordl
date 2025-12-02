#pragma once
// IWYU pragma private; include "JetBrains/Annotations/AspDataFieldAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(AspDataFieldAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class AspDataFieldAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::AspDataFieldAttribute);
// Dependencies System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.AspDataFieldAttribute
class CORDL_TYPE AspDataFieldAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::JetBrains::Annotations::AspDataFieldAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x6c0969c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AspDataFieldAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AspDataFieldAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AspDataFieldAttribute(AspDataFieldAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AspDataFieldAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AspDataFieldAttribute(AspDataFieldAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22300 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::AspDataFieldAttribute, 0x10>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::AspDataFieldAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspDataFieldAttribute*, "JetBrains.Annotations", "AspDataFieldAttribute");
