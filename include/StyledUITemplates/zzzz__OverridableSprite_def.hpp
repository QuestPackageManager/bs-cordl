#pragma once
// IWYU pragma private; include "StyledUITemplates/OverridableSprite.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "StyledUITemplates/zzzz__OverridableData_1_def.hpp"
CORDL_MODULE_EXPORT(OverridableSprite)
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace StyledUITemplates {
class OverridableSprite;
}
// Write type traits
MARK_REF_PTR_T(::StyledUITemplates::OverridableSprite);
// Dependencies StyledUITemplates.OverridableData`1<T>
namespace StyledUITemplates {
// Is value type: false
// CS Name: StyledUITemplates.OverridableSprite
class CORDL_TYPE OverridableSprite : public ::StyledUITemplates::OverridableData_1<::UnityW<::UnityEngine::Sprite>> {
public:
  // Declarations
  static inline ::StyledUITemplates::OverridableSprite* New_ctor();

  /// @brief Method .ctor, addr 0x5d90f74, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OverridableSprite();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OverridableSprite", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OverridableSprite(OverridableSprite&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OverridableSprite", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OverridableSprite(OverridableSprite const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23310 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::StyledUITemplates::OverridableSprite, 0x20>, "Size mismatch!");

} // namespace StyledUITemplates
NEED_NO_BOX(::StyledUITemplates::OverridableSprite);
DEFINE_IL2CPP_ARG_TYPE(::StyledUITemplates::OverridableSprite*, "StyledUITemplates", "OverridableSprite");
