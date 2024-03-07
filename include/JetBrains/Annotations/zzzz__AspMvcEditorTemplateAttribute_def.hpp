#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(AspMvcEditorTemplateAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcEditorTemplateAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::AspMvcEditorTemplateAttribute);
// Type: JetBrains.Annotations::AspMvcEditorTemplateAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: ::JetBrains.Annotations::AspMvcEditorTemplateAttribute*
class CORDL_TYPE AspMvcEditorTemplateAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::JetBrains::Annotations::AspMvcEditorTemplateAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x30226d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AspMvcEditorTemplateAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AspMvcEditorTemplateAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AspMvcEditorTemplateAttribute(AspMvcEditorTemplateAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AspMvcEditorTemplateAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AspMvcEditorTemplateAttribute(AspMvcEditorTemplateAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::AspMvcEditorTemplateAttribute, 0x10>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::AspMvcEditorTemplateAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspMvcEditorTemplateAttribute*, "JetBrains.Annotations", "AspMvcEditorTemplateAttribute");
