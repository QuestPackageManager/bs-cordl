#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion2_6_0AndEarlier/ObstacleType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ObstacleType)
// Forward declare root types
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct ObstacleType;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType);
// Dependencies
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: true
// CS Name: BeatmapSaveDataVersion2_6_0AndEarlier.ObstacleType
struct CORDL_TYPE ObstacleType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ObstacleType_Unwrapped
  enum struct __ObstacleType_Unwrapped : int32_t {
    __E_FullHeight = static_cast<int32_t>(0x0),
    __E_Top = static_cast<int32_t>(0x1),
    __E_Free = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ObstacleType_Unwrapped() const noexcept {
    return static_cast<__ObstacleType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ObstacleType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ObstacleType(int32_t value__) noexcept;

  /// @brief Field Free value: I32(2)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType const Free;

  /// @brief Field FullHeight value: I32(0)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType const FullHeight;

  /// @brief Field Top value: I32(1)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType const Top;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15356 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType, 0x4>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion2_6_0AndEarlier
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType, "BeatmapSaveDataVersion2_6_0AndEarlier", "ObstacleType");
