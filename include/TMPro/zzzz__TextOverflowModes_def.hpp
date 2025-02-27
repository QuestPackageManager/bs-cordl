#pragma once
// IWYU pragma private; include "TMPro/TextOverflowModes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextOverflowModes)
// Forward declare root types
namespace TMPro {
struct TextOverflowModes;
}
// Write type traits
MARK_VAL_T(::TMPro::TextOverflowModes);
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.TextOverflowModes
struct CORDL_TYPE TextOverflowModes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TextOverflowModes_Unwrapped
  enum struct __TextOverflowModes_Unwrapped : int32_t {
    __E_Overflow = static_cast<int32_t>(0x0),
    __E_Ellipsis = static_cast<int32_t>(0x1),
    __E_Masking = static_cast<int32_t>(0x2),
    __E_Truncate = static_cast<int32_t>(0x3),
    __E_ScrollRect = static_cast<int32_t>(0x4),
    __E_Page = static_cast<int32_t>(0x5),
    __E_Linked = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TextOverflowModes_Unwrapped() const noexcept {
    return static_cast<__TextOverflowModes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextOverflowModes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextOverflowModes(int32_t value__) noexcept;

  /// @brief Field Ellipsis value: I32(1)
  static ::TMPro::TextOverflowModes const Ellipsis;

  /// @brief Field Linked value: I32(6)
  static ::TMPro::TextOverflowModes const Linked;

  /// @brief Field Masking value: I32(2)
  static ::TMPro::TextOverflowModes const Masking;

  /// @brief Field Overflow value: I32(0)
  static ::TMPro::TextOverflowModes const Overflow;

  /// @brief Field Page value: I32(5)
  static ::TMPro::TextOverflowModes const Page;

  /// @brief Field ScrollRect value: I32(4)
  static ::TMPro::TextOverflowModes const ScrollRect;

  /// @brief Field Truncate value: I32(3)
  static ::TMPro::TextOverflowModes const Truncate;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14557 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TextOverflowModes, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TextOverflowModes, 0x4>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TextOverflowModes, "TMPro", "TextOverflowModes");
