#pragma once
// IWYU pragma private; include "BeatSaber/PerformancePresets/ObstaclesQuality.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ObstaclesQuality)
// Forward declare root types
namespace BeatSaber::PerformancePresets {
struct ObstaclesQuality;
}
// Write type traits
MARK_VAL_T(::BeatSaber::PerformancePresets::ObstaclesQuality);
// Type: BeatSaber.PerformancePresets::ObstaclesQuality
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::PerformancePresets {
// Is value type: true
// CS Name: ::BeatSaber.PerformancePresets::ObstaclesQuality
struct CORDL_TYPE ObstaclesQuality {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ObstaclesQuality_Unwrapped
  enum struct __ObstaclesQuality_Unwrapped : int32_t {
    __E_DefaultObstacleQualityBaseOnDisplacement = static_cast<int32_t>(0x0),
    __E_TexturedObstacle = static_cast<int32_t>(0x1),
    __E_ObstacleLW = static_cast<int32_t>(0x2),
    __E_ObstacleHW = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ObstaclesQuality_Unwrapped() const noexcept {
    return static_cast<__ObstaclesQuality_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ObstaclesQuality();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ObstaclesQuality(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field DefaultObstacleQualityBaseOnDisplacement value: static_cast<int32_t>(0x0)
  static ::BeatSaber::PerformancePresets::ObstaclesQuality const DefaultObstacleQualityBaseOnDisplacement;

  /// @brief Field ObstacleHW value: static_cast<int32_t>(0x3)
  static ::BeatSaber::PerformancePresets::ObstaclesQuality const ObstacleHW;

  /// @brief Field ObstacleLW value: static_cast<int32_t>(0x2)
  static ::BeatSaber::PerformancePresets::ObstaclesQuality const ObstacleLW;

  /// @brief Field TexturedObstacle value: static_cast<int32_t>(0x1)
  static ::BeatSaber::PerformancePresets::ObstaclesQuality const TexturedObstacle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::PerformancePresets::ObstaclesQuality, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::ObstaclesQuality, value__) == 0x0, "Offset mismatch!");

} // namespace BeatSaber::PerformancePresets
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::PerformancePresets::ObstaclesQuality, "BeatSaber.PerformancePresets", "ObstaclesQuality");
