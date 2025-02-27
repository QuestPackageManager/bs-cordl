#pragma once
// IWYU pragma private; include "GlobalNamespace/OverridableGradientDirection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GradientDirection_def.hpp"
#include "StyledUITemplates/zzzz__OverridableData_1_def.hpp"
CORDL_MODULE_EXPORT(OverridableGradientDirection)
// Forward declare root types
namespace GlobalNamespace {
class OverridableGradientDirection;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OverridableGradientDirection);
// Dependencies GradientDirection, StyledUITemplates.OverridableData`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: OverridableGradientDirection
class CORDL_TYPE OverridableGradientDirection : public ::StyledUITemplates::OverridableData_1<::GlobalNamespace::GradientDirection> {
public:
  // Declarations
  static inline ::GlobalNamespace::OverridableGradientDirection* New_ctor();

  /// @brief Method .ctor, addr 0x22869ac, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OverridableGradientDirection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OverridableGradientDirection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OverridableGradientDirection(OverridableGradientDirection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OverridableGradientDirection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OverridableGradientDirection(OverridableGradientDirection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19138 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OverridableGradientDirection, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OverridableGradientDirection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OverridableGradientDirection*, "", "OverridableGradientDirection");
