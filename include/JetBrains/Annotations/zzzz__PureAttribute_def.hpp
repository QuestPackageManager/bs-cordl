#pragma once
// IWYU pragma private; include "JetBrains/Annotations/PureAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(PureAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class PureAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::PureAttribute);
// Dependencies System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.PureAttribute
class CORDL_TYPE PureAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::JetBrains::Annotations::PureAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x6c722e8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PureAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PureAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PureAttribute(PureAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PureAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PureAttribute(PureAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22285 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::PureAttribute, 0x10>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::PureAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::PureAttribute*, "JetBrains.Annotations", "PureAttribute");
