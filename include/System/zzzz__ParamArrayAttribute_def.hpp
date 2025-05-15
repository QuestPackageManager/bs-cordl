#pragma once
// IWYU pragma private; include "System/ParamArrayAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ParamArrayAttribute)
// Forward declare root types
namespace System {
class ParamArrayAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ParamArrayAttribute);
// Dependencies System.Attribute
namespace System {
// Is value type: false
// CS Name: System.ParamArrayAttribute
class CORDL_TYPE ParamArrayAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::ParamArrayAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x3dfa8e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParamArrayAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParamArrayAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParamArrayAttribute(ParamArrayAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParamArrayAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParamArrayAttribute(ParamArrayAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2456 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ParamArrayAttribute, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::ParamArrayAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ParamArrayAttribute*, "System", "ParamArrayAttribute");
