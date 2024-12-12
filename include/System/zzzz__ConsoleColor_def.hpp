#pragma once
// IWYU pragma private; include "System/ConsoleColor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConsoleColor)
// Forward declare root types
namespace System {
struct ConsoleColor;
}
// Write type traits
MARK_VAL_T(::System::ConsoleColor);
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.ConsoleColor
struct CORDL_TYPE ConsoleColor {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ConsoleColor_Unwrapped
  enum struct __ConsoleColor_Unwrapped : int32_t {
    __E_Black = static_cast<int32_t>(0x0),
    __E_DarkBlue = static_cast<int32_t>(0x1),
    __E_DarkGreen = static_cast<int32_t>(0x2),
    __E_DarkCyan = static_cast<int32_t>(0x3),
    __E_DarkRed = static_cast<int32_t>(0x4),
    __E_DarkMagenta = static_cast<int32_t>(0x5),
    __E_DarkYellow = static_cast<int32_t>(0x6),
    __E_Gray = static_cast<int32_t>(0x7),
    __E_DarkGray = static_cast<int32_t>(0x8),
    __E_Blue = static_cast<int32_t>(0x9),
    __E_Green = static_cast<int32_t>(0xa),
    __E_Cyan = static_cast<int32_t>(0xb),
    __E_Red = static_cast<int32_t>(0xc),
    __E_Magenta = static_cast<int32_t>(0xd),
    __E_Yellow = static_cast<int32_t>(0xe),
    __E_White = static_cast<int32_t>(0xf),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ConsoleColor_Unwrapped() const noexcept {
    return static_cast<__ConsoleColor_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConsoleColor();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ConsoleColor(int32_t value__) noexcept;

  /// @brief Field Black value: I32(0)
  static ::System::ConsoleColor const Black;

  /// @brief Field Blue value: I32(9)
  static ::System::ConsoleColor const Blue;

  /// @brief Field Cyan value: I32(11)
  static ::System::ConsoleColor const Cyan;

  /// @brief Field DarkBlue value: I32(1)
  static ::System::ConsoleColor const DarkBlue;

  /// @brief Field DarkCyan value: I32(3)
  static ::System::ConsoleColor const DarkCyan;

  /// @brief Field DarkGray value: I32(8)
  static ::System::ConsoleColor const DarkGray;

  /// @brief Field DarkGreen value: I32(2)
  static ::System::ConsoleColor const DarkGreen;

  /// @brief Field DarkMagenta value: I32(5)
  static ::System::ConsoleColor const DarkMagenta;

  /// @brief Field DarkRed value: I32(4)
  static ::System::ConsoleColor const DarkRed;

  /// @brief Field DarkYellow value: I32(6)
  static ::System::ConsoleColor const DarkYellow;

  /// @brief Field Gray value: I32(7)
  static ::System::ConsoleColor const Gray;

  /// @brief Field Green value: I32(10)
  static ::System::ConsoleColor const Green;

  /// @brief Field Magenta value: I32(13)
  static ::System::ConsoleColor const Magenta;

  /// @brief Field Red value: I32(12)
  static ::System::ConsoleColor const Red;

  /// @brief Field White value: I32(15)
  static ::System::ConsoleColor const White;

  /// @brief Field Yellow value: I32(14)
  static ::System::ConsoleColor const Yellow;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2517 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::ConsoleColor, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ConsoleColor, 0x4>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::ConsoleColor, "System", "ConsoleColor");
