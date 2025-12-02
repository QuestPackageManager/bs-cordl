#pragma once
// IWYU pragma private; include "BeatmapSaveDataCommon/IndexFilterLimitAlsoAffectsType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IndexFilterLimitAlsoAffectsType)
// Forward declare root types
namespace BeatmapSaveDataCommon {
struct IndexFilterLimitAlsoAffectsType;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType);
// Dependencies
namespace BeatmapSaveDataCommon {
// Is value type: true
// CS Name: BeatmapSaveDataCommon.IndexFilterLimitAlsoAffectsType
struct CORDL_TYPE IndexFilterLimitAlsoAffectsType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __IndexFilterLimitAlsoAffectsType_Unwrapped
  enum struct __IndexFilterLimitAlsoAffectsType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Duration = static_cast<int32_t>(0x1),
    __E_Distribution = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __IndexFilterLimitAlsoAffectsType_Unwrapped() const noexcept {
    return static_cast<__IndexFilterLimitAlsoAffectsType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr IndexFilterLimitAlsoAffectsType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr IndexFilterLimitAlsoAffectsType(int32_t value__) noexcept;

  /// @brief Field Distribution value: I32(2)
  static ::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType const Distribution;

  /// @brief Field Duration value: I32(1)
  static ::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType const Duration;

  /// @brief Field None value: I32(0)
  static ::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15362 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType, 0x4>, "Size mismatch!");

} // namespace BeatmapSaveDataCommon
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType, "BeatmapSaveDataCommon", "IndexFilterLimitAlsoAffectsType");
