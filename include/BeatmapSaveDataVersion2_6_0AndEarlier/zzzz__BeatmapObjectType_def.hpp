#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion2_6_0AndEarlier/BeatmapObjectType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapObjectType)
// Forward declare root types
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct BeatmapObjectType;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapObjectType);
// Dependencies
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: true
// CS Name: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapObjectType
struct CORDL_TYPE BeatmapObjectType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BeatmapObjectType_Unwrapped
  enum struct __BeatmapObjectType_Unwrapped : int32_t {
    __E_Note = static_cast<int32_t>(0x0),
    __E_Obstacle = static_cast<int32_t>(0x2),
    __E_Slider = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BeatmapObjectType_Unwrapped() const noexcept {
    return static_cast<__BeatmapObjectType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BeatmapObjectType(int32_t value__) noexcept;

  /// @brief Field Note value: I32(0)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapObjectType const Note;

  /// @brief Field Obstacle value: I32(2)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapObjectType const Obstacle;

  /// @brief Field Slider value: I32(3)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapObjectType const Slider;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13426 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapObjectType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapObjectType, 0x4>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion2_6_0AndEarlier
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapObjectType, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapObjectType");
