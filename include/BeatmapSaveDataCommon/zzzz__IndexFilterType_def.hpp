#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IndexFilterType)
// Forward declare root types
namespace BeatmapSaveDataCommon {
struct IndexFilterType;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataCommon::IndexFilterType);
// Type: BeatmapSaveDataCommon::IndexFilterType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataCommon {
// Is value type: true
// CS Name: ::BeatmapSaveDataCommon::IndexFilterType
struct CORDL_TYPE IndexFilterType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __IndexFilterType_Unwrapped
  enum struct __IndexFilterType_Unwrapped : int32_t {
    __E_Division = static_cast<int32_t>(0x1),
    __E_StepAndOffset = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __IndexFilterType_Unwrapped() const noexcept {
    return static_cast<__IndexFilterType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr IndexFilterType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr IndexFilterType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Division value: static_cast<int32_t>(0x1)
  static ::BeatmapSaveDataCommon::IndexFilterType const Division;

  /// @brief Field StepAndOffset value: static_cast<int32_t>(0x2)
  static ::BeatmapSaveDataCommon::IndexFilterType const StepAndOffset;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataCommon::IndexFilterType, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataCommon::IndexFilterType, value__) == 0x0, "Offset mismatch!");

} // namespace BeatmapSaveDataCommon
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataCommon::IndexFilterType, "BeatmapSaveDataCommon", "IndexFilterType");
