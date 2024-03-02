#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteCutDirection)
// Forward declare root types
namespace BeatmapSaveDataCommon {
struct NoteCutDirection;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataCommon::NoteCutDirection);
// Type: BeatmapSaveDataCommon::NoteCutDirection
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataCommon {
// Is value type: true
// CS Name: ::BeatmapSaveDataCommon::NoteCutDirection
struct CORDL_TYPE NoteCutDirection {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NoteCutDirection_Unwrapped
  enum struct __NoteCutDirection_Unwrapped : int32_t {
    __E_Up = static_cast<int32_t>(0x0),
    __E_Down = static_cast<int32_t>(0x1),
    __E_Left = static_cast<int32_t>(0x2),
    __E_Right = static_cast<int32_t>(0x3),
    __E_UpLeft = static_cast<int32_t>(0x4),
    __E_UpRight = static_cast<int32_t>(0x5),
    __E_DownLeft = static_cast<int32_t>(0x6),
    __E_DownRight = static_cast<int32_t>(0x7),
    __E_Any = static_cast<int32_t>(0x8),
    __E_None = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NoteCutDirection_Unwrapped() const noexcept {
    return static_cast<__NoteCutDirection_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteCutDirection();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NoteCutDirection(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Any value: static_cast<int32_t>(0x8)
  static ::BeatmapSaveDataCommon::NoteCutDirection const Any;

  /// @brief Field Down value: static_cast<int32_t>(0x1)
  static ::BeatmapSaveDataCommon::NoteCutDirection const Down;

  /// @brief Field DownLeft value: static_cast<int32_t>(0x6)
  static ::BeatmapSaveDataCommon::NoteCutDirection const DownLeft;

  /// @brief Field DownRight value: static_cast<int32_t>(0x7)
  static ::BeatmapSaveDataCommon::NoteCutDirection const DownRight;

  /// @brief Field Left value: static_cast<int32_t>(0x2)
  static ::BeatmapSaveDataCommon::NoteCutDirection const Left;

  /// @brief Field None value: static_cast<int32_t>(0x9)
  static ::BeatmapSaveDataCommon::NoteCutDirection const None;

  /// @brief Field Right value: static_cast<int32_t>(0x3)
  static ::BeatmapSaveDataCommon::NoteCutDirection const Right;

  /// @brief Field Up value: static_cast<int32_t>(0x0)
  static ::BeatmapSaveDataCommon::NoteCutDirection const Up;

  /// @brief Field UpLeft value: static_cast<int32_t>(0x4)
  static ::BeatmapSaveDataCommon::NoteCutDirection const UpLeft;

  /// @brief Field UpRight value: static_cast<int32_t>(0x5)
  static ::BeatmapSaveDataCommon::NoteCutDirection const UpRight;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataCommon::NoteCutDirection, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataCommon::NoteCutDirection, value__) == 0x0, "Offset mismatch!");

} // namespace BeatmapSaveDataCommon
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataCommon::NoteCutDirection, "BeatmapSaveDataCommon", "NoteCutDirection");
