#pragma once
// IWYU pragma private; include "JetBrains/Annotations/RazorSectionAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(RazorSectionAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class RazorSectionAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::RazorSectionAttribute);
// Type: JetBrains.Annotations::RazorSectionAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: ::JetBrains.Annotations::RazorSectionAttribute*
class CORDL_TYPE RazorSectionAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::JetBrains::Annotations::RazorSectionAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x4a77f40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RazorSectionAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RazorSectionAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RazorSectionAttribute(RazorSectionAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RazorSectionAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RazorSectionAttribute(RazorSectionAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18371 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::RazorSectionAttribute, 0x10>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::RazorSectionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::RazorSectionAttribute*, "JetBrains.Annotations", "RazorSectionAttribute");
