#pragma once
// IWYU pragma private; include "JetBrains/Annotations/RazorWriteMethodAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(RazorWriteMethodAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class RazorWriteMethodAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::RazorWriteMethodAttribute);
// Dependencies System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.RazorWriteMethodAttribute
class CORDL_TYPE RazorWriteMethodAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::JetBrains::Annotations::RazorWriteMethodAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x4af39a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RazorWriteMethodAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RazorWriteMethodAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RazorWriteMethodAttribute(RazorWriteMethodAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RazorWriteMethodAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RazorWriteMethodAttribute(RazorWriteMethodAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18525 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::RazorWriteMethodAttribute, 0x10>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::RazorWriteMethodAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::RazorWriteMethodAttribute*, "JetBrains.Annotations", "RazorWriteMethodAttribute");
