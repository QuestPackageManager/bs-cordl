#pragma once
// IWYU pragma private; include "JetBrains/Annotations/NoReorderAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NoReorderAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class NoReorderAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::NoReorderAttribute);
// Dependencies System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.NoReorderAttribute
class CORDL_TYPE NoReorderAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::JetBrains::Annotations::NoReorderAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x4af1008, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoReorderAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoReorderAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoReorderAttribute(NoReorderAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoReorderAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoReorderAttribute(NoReorderAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18497 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::NoReorderAttribute, 0x10>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::NoReorderAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::NoReorderAttribute*, "JetBrains.Annotations", "NoReorderAttribute");
