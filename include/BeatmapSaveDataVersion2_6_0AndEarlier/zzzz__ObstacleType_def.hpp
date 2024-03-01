#pragma once
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
// Type: BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: true
// CS Name: ::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType
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
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ObstacleType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ObstacleType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Free value: static_cast<int32_t>(0x2)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType const Free;

  /// @brief Field FullHeight value: static_cast<int32_t>(0x0)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType const FullHeight;

  /// @brief Field Top value: static_cast<int32_t>(0x1)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType const Top;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType, value__) == 0x0, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion2_6_0AndEarlier
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType, "BeatmapSaveDataVersion2_6_0AndEarlier", "ObstacleType");
