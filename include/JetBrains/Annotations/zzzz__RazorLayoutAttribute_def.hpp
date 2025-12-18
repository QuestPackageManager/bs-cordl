#pragma once
// IWYU pragma private; include "JetBrains/Annotations/RazorLayoutAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(RazorLayoutAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class RazorLayoutAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::RazorLayoutAttribute);
// Dependencies System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.RazorLayoutAttribute
class CORDL_TYPE RazorLayoutAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::JetBrains::Annotations::RazorLayoutAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x6c725e8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RazorLayoutAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RazorLayoutAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RazorLayoutAttribute(RazorLayoutAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RazorLayoutAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RazorLayoutAttribute(RazorLayoutAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22337 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::RazorLayoutAttribute, 0x10>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::RazorLayoutAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::RazorLayoutAttribute*, "JetBrains.Annotations", "RazorLayoutAttribute");
