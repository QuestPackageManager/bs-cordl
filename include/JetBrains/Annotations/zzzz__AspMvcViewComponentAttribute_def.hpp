#pragma once
// IWYU pragma private; include "JetBrains/Annotations/AspMvcViewComponentAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(AspMvcViewComponentAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcViewComponentAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::AspMvcViewComponentAttribute);
// Type: JetBrains.Annotations::AspMvcViewComponentAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: ::JetBrains.Annotations::AspMvcViewComponentAttribute*
class CORDL_TYPE AspMvcViewComponentAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::JetBrains::Annotations::AspMvcViewComponentAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x4a8c5c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AspMvcViewComponentAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AspMvcViewComponentAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AspMvcViewComponentAttribute(AspMvcViewComponentAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AspMvcViewComponentAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AspMvcViewComponentAttribute(AspMvcViewComponentAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18401 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::AspMvcViewComponentAttribute, 0x10>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::AspMvcViewComponentAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspMvcViewComponentAttribute*, "JetBrains.Annotations", "AspMvcViewComponentAttribute");
