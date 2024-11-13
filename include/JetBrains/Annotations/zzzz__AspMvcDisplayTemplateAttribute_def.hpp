#pragma once
// IWYU pragma private; include "JetBrains/Annotations/AspMvcDisplayTemplateAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(AspMvcDisplayTemplateAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcDisplayTemplateAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::AspMvcDisplayTemplateAttribute);
// Type: JetBrains.Annotations::AspMvcDisplayTemplateAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: ::JetBrains.Annotations::AspMvcDisplayTemplateAttribute*
class CORDL_TYPE AspMvcDisplayTemplateAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::JetBrains::Annotations::AspMvcDisplayTemplateAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x4a8c5a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AspMvcDisplayTemplateAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AspMvcDisplayTemplateAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AspMvcDisplayTemplateAttribute(AspMvcDisplayTemplateAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AspMvcDisplayTemplateAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AspMvcDisplayTemplateAttribute(AspMvcDisplayTemplateAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18397 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::AspMvcDisplayTemplateAttribute, 0x10>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::AspMvcDisplayTemplateAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspMvcDisplayTemplateAttribute*, "JetBrains.Annotations", "AspMvcDisplayTemplateAttribute");
