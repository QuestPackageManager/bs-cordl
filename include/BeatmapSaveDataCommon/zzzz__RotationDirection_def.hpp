#pragma once
// IWYU pragma private; include "BeatmapSaveDataCommon/RotationDirection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RotationDirection)
// Forward declare root types
namespace BeatmapSaveDataCommon {
struct RotationDirection;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataCommon::RotationDirection);
// Type: BeatmapSaveDataCommon::RotationDirection
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataCommon {
// Is value type: true
// CS Name: ::BeatmapSaveDataCommon::RotationDirection
struct CORDL_TYPE RotationDirection {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RotationDirection_Unwrapped
  enum struct __RotationDirection_Unwrapped : int32_t {
    __E_Automatic = static_cast<int32_t>(0x0),
    __E_Clockwise = static_cast<int32_t>(0x1),
    __E_Counterclockwise = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RotationDirection_Unwrapped() const noexcept {
    return static_cast<__RotationDirection_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RotationDirection();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RotationDirection(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Automatic value: static_cast<int32_t>(0x0)
  static ::BeatmapSaveDataCommon::RotationDirection const Automatic;

  /// @brief Field Clockwise value: static_cast<int32_t>(0x1)
  static ::BeatmapSaveDataCommon::RotationDirection const Clockwise;

  /// @brief Field Counterclockwise value: static_cast<int32_t>(0x2)
  static ::BeatmapSaveDataCommon::RotationDirection const Counterclockwise;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13424 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataCommon::RotationDirection, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataCommon::RotationDirection, value__) == 0x0, "Offset mismatch!");

} // namespace BeatmapSaveDataCommon
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataCommon::RotationDirection, "BeatmapSaveDataCommon", "RotationDirection");
