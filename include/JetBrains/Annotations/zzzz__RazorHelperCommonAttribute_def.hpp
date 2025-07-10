#pragma once
// IWYU pragma private; include "JetBrains/Annotations/RazorHelperCommonAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(RazorHelperCommonAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class RazorHelperCommonAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::RazorHelperCommonAttribute);
// Dependencies System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.RazorHelperCommonAttribute
class CORDL_TYPE RazorHelperCommonAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::JetBrains::Annotations::RazorHelperCommonAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x4af398c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RazorHelperCommonAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RazorHelperCommonAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RazorHelperCommonAttribute(RazorHelperCommonAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RazorHelperCommonAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RazorHelperCommonAttribute(RazorHelperCommonAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18522 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::RazorHelperCommonAttribute, 0x10>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::RazorHelperCommonAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::RazorHelperCommonAttribute*, "JetBrains.Annotations", "RazorHelperCommonAttribute");
