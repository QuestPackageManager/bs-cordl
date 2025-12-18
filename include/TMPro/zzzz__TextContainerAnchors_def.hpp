#pragma once
// IWYU pragma private; include "TMPro/TextContainerAnchors.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextContainerAnchors)
// Forward declare root types
namespace TMPro {
struct TextContainerAnchors;
}
// Write type traits
MARK_VAL_T(::TMPro::TextContainerAnchors);
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.TextContainerAnchors
struct CORDL_TYPE TextContainerAnchors {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TextContainerAnchors_Unwrapped
  enum struct __TextContainerAnchors_Unwrapped : int32_t {
    __E_TopLeft = static_cast<int32_t>(0x0),
    __E_Top = static_cast<int32_t>(0x1),
    __E_TopRight = static_cast<int32_t>(0x2),
    __E_Left = static_cast<int32_t>(0x3),
    __E_Middle = static_cast<int32_t>(0x4),
    __E_Right = static_cast<int32_t>(0x5),
    __E_BottomLeft = static_cast<int32_t>(0x6),
    __E_Bottom = static_cast<int32_t>(0x7),
    __E_BottomRight = static_cast<int32_t>(0x8),
    __E_Custom = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TextContainerAnchors_Unwrapped() const noexcept {
    return static_cast<__TextContainerAnchors_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextContainerAnchors();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextContainerAnchors(int32_t value__) noexcept;

  /// @brief Field Bottom value: I32(7)
  static ::TMPro::TextContainerAnchors const Bottom;

  /// @brief Field BottomLeft value: I32(6)
  static ::TMPro::TextContainerAnchors const BottomLeft;

  /// @brief Field BottomRight value: I32(8)
  static ::TMPro::TextContainerAnchors const BottomRight;

  /// @brief Field Custom value: I32(9)
  static ::TMPro::TextContainerAnchors const Custom;

  /// @brief Field Left value: I32(3)
  static ::TMPro::TextContainerAnchors const Left;

  /// @brief Field Middle value: I32(4)
  static ::TMPro::TextContainerAnchors const Middle;

  /// @brief Field Right value: I32(5)
  static ::TMPro::TextContainerAnchors const Right;

  /// @brief Field Top value: I32(1)
  static ::TMPro::TextContainerAnchors const Top;

  /// @brief Field TopLeft value: I32(0)
  static ::TMPro::TextContainerAnchors const TopLeft;

  /// @brief Field TopRight value: I32(2)
  static ::TMPro::TextContainerAnchors const TopRight;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15830 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TextContainerAnchors, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TextContainerAnchors, 0x4>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TextContainerAnchors, "TMPro", "TextContainerAnchors");
