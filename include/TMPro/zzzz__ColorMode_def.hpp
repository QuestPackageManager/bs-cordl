#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorMode)
// Forward declare root types
namespace TMPro {
struct ColorMode;
}
// Write type traits
MARK_VAL_T(::TMPro::ColorMode);
// Type: TMPro::ColorMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// CS Name: ::TMPro::ColorMode
struct CORDL_TYPE ColorMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ColorMode_Unwrapped
  enum struct __ColorMode_Unwrapped : int32_t {
    __E_Single = static_cast<int32_t>(0x0),
    __E_HorizontalGradient = static_cast<int32_t>(0x1),
    __E_VerticalGradient = static_cast<int32_t>(0x2),
    __E_FourCornersGradient = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ColorMode_Unwrapped() const noexcept {
    return static_cast<__ColorMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ColorMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field FourCornersGradient value: static_cast<int32_t>(0x3)
  static ::TMPro::ColorMode const FourCornersGradient;

  /// @brief Field HorizontalGradient value: static_cast<int32_t>(0x1)
  static ::TMPro::ColorMode const HorizontalGradient;

  /// @brief Field Single value: static_cast<int32_t>(0x0)
  static ::TMPro::ColorMode const Single;

  /// @brief Field VerticalGradient value: static_cast<int32_t>(0x2)
  static ::TMPro::ColorMode const VerticalGradient;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::ColorMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::TMPro::ColorMode, value__) == 0x0, "Offset mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::ColorMode, "TMPro", "ColorMode");
