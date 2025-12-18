#pragma once
// IWYU pragma private; include "OSCE/Analytics/GetIdParams.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(GetIdParams)
// Forward declare root types
namespace OSCE::Analytics {
struct GetIdParams;
}
// Write type traits
MARK_VAL_T(::OSCE::Analytics::GetIdParams);
// Dependencies
namespace OSCE::Analytics {
// Is value type: true
// CS Name: OSCE.Analytics.GetIdParams
struct CORDL_TYPE GetIdParams {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetIdParams();

  // Ctor Parameters [CppParam { name: "replace_rid", ty: "bool", modifiers: "", def_value: None }]
  constexpr GetIdParams(bool replace_rid) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21715 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field replace_rid, offset: 0x0, size: 0x1, def value: None
  bool replace_rid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OSCE::Analytics::GetIdParams, replace_rid) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OSCE::Analytics::GetIdParams, 0x1>, "Size mismatch!");

} // namespace OSCE::Analytics
DEFINE_IL2CPP_ARG_TYPE(::OSCE::Analytics::GetIdParams, "OSCE.Analytics", "GetIdParams");
