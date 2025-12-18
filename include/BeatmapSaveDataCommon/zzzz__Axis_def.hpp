#pragma once
// IWYU pragma private; include "BeatmapSaveDataCommon/Axis.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Axis)
// Forward declare root types
namespace BeatmapSaveDataCommon {
struct Axis;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataCommon::Axis);
// Dependencies
namespace BeatmapSaveDataCommon {
// Is value type: true
// CS Name: BeatmapSaveDataCommon.Axis
struct CORDL_TYPE Axis {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Axis_Unwrapped
  enum struct __Axis_Unwrapped : int32_t {
    __E_X = static_cast<int32_t>(0x0),
    __E_Y = static_cast<int32_t>(0x1),
    __E_Z = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Axis_Unwrapped() const noexcept {
    return static_cast<__Axis_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Axis();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Axis(int32_t value__) noexcept;

  /// @brief Field X value: I32(0)
  static ::BeatmapSaveDataCommon::Axis const X;

  /// @brief Field Y value: I32(1)
  static ::BeatmapSaveDataCommon::Axis const Y;

  /// @brief Field Z value: I32(2)
  static ::BeatmapSaveDataCommon::Axis const Z;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15364 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataCommon::Axis, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataCommon::Axis, 0x4>, "Size mismatch!");

} // namespace BeatmapSaveDataCommon
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataCommon::Axis, "BeatmapSaveDataCommon", "Axis");
