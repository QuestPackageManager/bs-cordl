#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/ColorGradientMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorGradientMode)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct ColorGradientMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::ColorGradientMode);
// Type: UnityEngine.TextCore.Text::ColorGradientMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: ::UnityEngine.TextCore.Text::ColorGradientMode
struct CORDL_TYPE ColorGradientMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ColorGradientMode_Unwrapped
  enum struct __ColorGradientMode_Unwrapped : int32_t {
    __E_Single = static_cast<int32_t>(0x0),
    __E_HorizontalGradient = static_cast<int32_t>(0x1),
    __E_VerticalGradient = static_cast<int32_t>(0x2),
    __E_FourCornersGradient = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ColorGradientMode_Unwrapped() const noexcept {
    return static_cast<__ColorGradientMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorGradientMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ColorGradientMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field FourCornersGradient value: static_cast<int32_t>(0x3)
  static ::UnityEngine::TextCore::Text::ColorGradientMode const FourCornersGradient;

  /// @brief Field HorizontalGradient value: static_cast<int32_t>(0x1)
  static ::UnityEngine::TextCore::Text::ColorGradientMode const HorizontalGradient;

  /// @brief Field Single value: static_cast<int32_t>(0x0)
  static ::UnityEngine::TextCore::Text::ColorGradientMode const Single;

  /// @brief Field VerticalGradient value: static_cast<int32_t>(0x2)
  static ::UnityEngine::TextCore::Text::ColorGradientMode const VerticalGradient;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15219 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::ColorGradientMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::ColorGradientMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::ColorGradientMode, "UnityEngine.TextCore.Text", "ColorGradientMode");
