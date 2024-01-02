#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ObstaclesQuality)
// Forward declare root types
namespace GlobalNamespace {
struct ObstaclesQuality;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ObstaclesQuality);
// Type: ::ObstaclesQuality
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4442))
// CS Name: ::ObstaclesQuality
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ObstaclesQuality(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ObstaclesQuality();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field DefaultObstacleQualityBaseOnDisplacement value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::ObstaclesQuality const DefaultObstacleQualityBaseOnDisplacement;

  /// @brief Field TexturedObstacle value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::ObstaclesQuality const TexturedObstacle;

  /// @brief Field ObstacleLW value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::ObstaclesQuality const ObstacleLW;

  /// @brief Field ObstacleHW value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::ObstaclesQuality const ObstacleHW;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstaclesQuality, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstaclesQuality, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstaclesQuality, "", "ObstaclesQuality");
