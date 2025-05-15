#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelPromoIdFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLevelPromoIdFilter)
// Forward declare root types
namespace GlobalNamespace {
struct BeatmapLevelPromoIdFilter;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BeatmapLevelPromoIdFilter);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapLevelPromoIdFilter
struct CORDL_TYPE BeatmapLevelPromoIdFilter {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BeatmapLevelPromoIdFilter_Unwrapped
  enum struct __BeatmapLevelPromoIdFilter_Unwrapped : int32_t {
    __E_Packs = static_cast<int32_t>(0x1),
    __E_Levels = static_cast<int32_t>(0x2),
    __E_Empty = static_cast<int32_t>(0x4),
    __E_All = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BeatmapLevelPromoIdFilter_Unwrapped() const noexcept {
    return static_cast<__BeatmapLevelPromoIdFilter_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelPromoIdFilter();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BeatmapLevelPromoIdFilter(int32_t value__) noexcept;

  /// @brief Field All value: I32(7)
  static ::GlobalNamespace::BeatmapLevelPromoIdFilter const All;

  /// @brief Field Empty value: I32(4)
  static ::GlobalNamespace::BeatmapLevelPromoIdFilter const Empty;

  /// @brief Field Levels value: I32(2)
  static ::GlobalNamespace::BeatmapLevelPromoIdFilter const Levels;

  /// @brief Field Packs value: I32(1)
  static ::GlobalNamespace::BeatmapLevelPromoIdFilter const Packs;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13240 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelPromoIdFilter, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelPromoIdFilter, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelPromoIdFilter, "", "BeatmapLevelPromoIdFilter");
