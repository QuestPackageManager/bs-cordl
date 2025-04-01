#pragma once
// IWYU pragma private; include "JetBrains/Annotations/AspMvcSuppressViewErrorAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(AspMvcSuppressViewErrorAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcSuppressViewErrorAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::AspMvcSuppressViewErrorAttribute);
// Dependencies System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.AspMvcSuppressViewErrorAttribute
class CORDL_TYPE AspMvcSuppressViewErrorAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::JetBrains::Annotations::AspMvcSuppressViewErrorAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x4aed990, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AspMvcSuppressViewErrorAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AspMvcSuppressViewErrorAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AspMvcSuppressViewErrorAttribute(AspMvcSuppressViewErrorAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AspMvcSuppressViewErrorAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AspMvcSuppressViewErrorAttribute(AspMvcSuppressViewErrorAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18487 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::AspMvcSuppressViewErrorAttribute, 0x10>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::AspMvcSuppressViewErrorAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspMvcSuppressViewErrorAttribute*, "JetBrains.Annotations", "AspMvcSuppressViewErrorAttribute");
