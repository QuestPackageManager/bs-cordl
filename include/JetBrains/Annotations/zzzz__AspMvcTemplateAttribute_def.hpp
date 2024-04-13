#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(AspMvcTemplateAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcTemplateAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::AspMvcTemplateAttribute);
// Type: JetBrains.Annotations::AspMvcTemplateAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: ::JetBrains.Annotations::AspMvcTemplateAttribute*
class CORDL_TYPE AspMvcTemplateAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::JetBrains::Annotations::AspMvcTemplateAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x340a564, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AspMvcTemplateAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AspMvcTemplateAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AspMvcTemplateAttribute(AspMvcTemplateAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AspMvcTemplateAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AspMvcTemplateAttribute(AspMvcTemplateAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::AspMvcTemplateAttribute, 0x10>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::AspMvcTemplateAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspMvcTemplateAttribute*, "JetBrains.Annotations", "AspMvcTemplateAttribute");
