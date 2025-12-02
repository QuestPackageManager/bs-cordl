#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutDisplay.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutDisplay)
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
struct LayoutDisplay;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Layout::LayoutDisplay);
// Dependencies
namespace UnityEngine::UIElements::Layout {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutDisplay
struct CORDL_TYPE LayoutDisplay {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LayoutDisplay_Unwrapped
  enum struct __LayoutDisplay_Unwrapped : int32_t {
    __E_Flex = static_cast<int32_t>(0x0),
    __E_None = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LayoutDisplay_Unwrapped() const noexcept {
    return static_cast<__LayoutDisplay_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutDisplay();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LayoutDisplay(int32_t value__) noexcept;

  /// @brief Field Flex value: I32(0)
  static ::UnityEngine::UIElements::Layout::LayoutDisplay const Flex;

  /// @brief Field None value: I32(1)
  static ::UnityEngine::UIElements::Layout::LayoutDisplay const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5426 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutDisplay, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::LayoutDisplay, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::LayoutDisplay, "UnityEngine.UIElements.Layout", "LayoutDisplay");
