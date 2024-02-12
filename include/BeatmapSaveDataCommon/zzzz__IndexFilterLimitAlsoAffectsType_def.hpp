#pragma once
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
// Type: BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataCommon {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11213))
// CS Name: ::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr IndexFilterLimitAlsoAffectsType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IndexFilterLimitAlsoAffectsType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType const None;

  /// @brief Field Duration value: static_cast<int32_t>(0x1)
  static ::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType const Duration;

  /// @brief Field Distribution value: static_cast<int32_t>(0x2)
  static ::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType const Distribution;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType, value__) == 0x0, "Offset mismatch!");

} // namespace BeatmapSaveDataCommon
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType, "BeatmapSaveDataCommon", "IndexFilterLimitAlsoAffectsType");
