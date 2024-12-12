#pragma once
// IWYU pragma private; include "BeatmapSaveDataCommon/DistributionParamType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DistributionParamType)
// Forward declare root types
namespace BeatmapSaveDataCommon {
struct DistributionParamType;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataCommon::DistributionParamType);
// Dependencies
namespace BeatmapSaveDataCommon {
// Is value type: true
// CS Name: BeatmapSaveDataCommon.DistributionParamType
struct CORDL_TYPE DistributionParamType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DistributionParamType_Unwrapped
  enum struct __DistributionParamType_Unwrapped : int32_t {
    __E_Wave = static_cast<int32_t>(0x1),
    __E_Step = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DistributionParamType_Unwrapped() const noexcept {
    return static_cast<__DistributionParamType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DistributionParamType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DistributionParamType(int32_t value__) noexcept;

  /// @brief Field Step value: I32(2)
  static ::BeatmapSaveDataCommon::DistributionParamType const Step;

  /// @brief Field Wave value: I32(1)
  static ::BeatmapSaveDataCommon::DistributionParamType const Wave;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13443 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataCommon::DistributionParamType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataCommon::DistributionParamType, 0x4>, "Size mismatch!");

} // namespace BeatmapSaveDataCommon
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataCommon::DistributionParamType, "BeatmapSaveDataCommon", "DistributionParamType");
