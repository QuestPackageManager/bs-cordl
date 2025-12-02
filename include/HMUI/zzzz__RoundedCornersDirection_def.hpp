#pragma once
// IWYU pragma private; include "HMUI/RoundedCornersDirection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RoundedCornersDirection)
// Forward declare root types
namespace HMUI {
struct RoundedCornersDirection;
}
// Write type traits
MARK_VAL_T(::HMUI::RoundedCornersDirection);
// Dependencies
namespace HMUI {
// Is value type: true
// CS Name: HMUI.RoundedCornersDirection
struct CORDL_TYPE RoundedCornersDirection {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RoundedCornersDirection_Unwrapped
  enum struct __RoundedCornersDirection_Unwrapped : int32_t {
    __E_All = static_cast<int32_t>(0x0),
    __E_Up = static_cast<int32_t>(0x1),
    __E_UpRight = static_cast<int32_t>(0x2),
    __E_Right = static_cast<int32_t>(0x3),
    __E_DownRight = static_cast<int32_t>(0x4),
    __E_Down = static_cast<int32_t>(0x5),
    __E_DownLeft = static_cast<int32_t>(0x6),
    __E_Left = static_cast<int32_t>(0x7),
    __E_UpLeft = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RoundedCornersDirection_Unwrapped() const noexcept {
    return static_cast<__RoundedCornersDirection_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RoundedCornersDirection();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RoundedCornersDirection(int32_t value__) noexcept;

  /// @brief Field All value: I32(0)
  static ::HMUI::RoundedCornersDirection const All;

  /// @brief Field Down value: I32(5)
  static ::HMUI::RoundedCornersDirection const Down;

  /// @brief Field DownLeft value: I32(6)
  static ::HMUI::RoundedCornersDirection const DownLeft;

  /// @brief Field DownRight value: I32(4)
  static ::HMUI::RoundedCornersDirection const DownRight;

  /// @brief Field Left value: I32(7)
  static ::HMUI::RoundedCornersDirection const Left;

  /// @brief Field Right value: I32(3)
  static ::HMUI::RoundedCornersDirection const Right;

  /// @brief Field Up value: I32(1)
  static ::HMUI::RoundedCornersDirection const Up;

  /// @brief Field UpLeft value: I32(8)
  static ::HMUI::RoundedCornersDirection const UpLeft;

  /// @brief Field UpRight value: I32(2)
  static ::HMUI::RoundedCornersDirection const UpRight;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19160 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HMUI::RoundedCornersDirection, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::RoundedCornersDirection, 0x4>, "Size mismatch!");

} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::RoundedCornersDirection, "HMUI", "RoundedCornersDirection");
