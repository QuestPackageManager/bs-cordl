#pragma once
// IWYU pragma private; include "JetBrains/Annotations/AspMvcActionSelectorAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(AspMvcActionSelectorAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcActionSelectorAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::AspMvcActionSelectorAttribute);
// Type: JetBrains.Annotations::AspMvcActionSelectorAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: ::JetBrains.Annotations::AspMvcActionSelectorAttribute*
class CORDL_TYPE AspMvcActionSelectorAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::JetBrains::Annotations::AspMvcActionSelectorAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x3651640, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AspMvcActionSelectorAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AspMvcActionSelectorAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AspMvcActionSelectorAttribute(AspMvcActionSelectorAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AspMvcActionSelectorAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AspMvcActionSelectorAttribute(AspMvcActionSelectorAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::AspMvcActionSelectorAttribute, 0x10>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::AspMvcActionSelectorAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspMvcActionSelectorAttribute*, "JetBrains.Annotations", "AspMvcActionSelectorAttribute");
