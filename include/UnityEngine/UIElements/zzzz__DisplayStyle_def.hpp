#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DisplayStyle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DisplayStyle)
// Forward declare root types
namespace UnityEngine::UIElements {
struct DisplayStyle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::DisplayStyle);
// Type: UnityEngine.UIElements::DisplayStyle
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::UnityEngine.UIElements::DisplayStyle
struct CORDL_TYPE DisplayStyle {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DisplayStyle_Unwrapped
  enum struct __DisplayStyle_Unwrapped : int32_t {
    __E_Flex = static_cast<int32_t>(0x0),
    __E_None = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DisplayStyle_Unwrapped() const noexcept {
    return static_cast<__DisplayStyle_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DisplayStyle();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DisplayStyle(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Flex value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::DisplayStyle const Flex;

  /// @brief Field None value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::DisplayStyle const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DisplayStyle, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DisplayStyle, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DisplayStyle, "UnityEngine.UIElements", "DisplayStyle");
