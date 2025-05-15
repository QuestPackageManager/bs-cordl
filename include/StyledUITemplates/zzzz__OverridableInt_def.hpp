#pragma once
// IWYU pragma private; include "StyledUITemplates/OverridableInt.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "StyledUITemplates/zzzz__OverridableData_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OverridableInt)
// Forward declare root types
namespace StyledUITemplates {
class OverridableInt;
}
// Write type traits
MARK_REF_PTR_T(::StyledUITemplates::OverridableInt);
// Dependencies StyledUITemplates.OverridableData`1<T>
namespace StyledUITemplates {
// Is value type: false
// CS Name: StyledUITemplates.OverridableInt
class CORDL_TYPE OverridableInt : public ::StyledUITemplates::OverridableData_1<int32_t> {
public:
  // Declarations
  static inline ::StyledUITemplates::OverridableInt* New_ctor();

  /// @brief Method .ctor, addr 0x407ea28, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OverridableInt();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OverridableInt", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OverridableInt(OverridableInt&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OverridableInt", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OverridableInt(OverridableInt const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19191 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::StyledUITemplates::OverridableInt, 0x18>, "Size mismatch!");

} // namespace StyledUITemplates
NEED_NO_BOX(::StyledUITemplates::OverridableInt);
DEFINE_IL2CPP_ARG_TYPE(::StyledUITemplates::OverridableInt*, "StyledUITemplates", "OverridableInt");
