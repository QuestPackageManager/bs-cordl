#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TwoPaneSplitViewOrientation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TwoPaneSplitViewOrientation)
// Forward declare root types
namespace UnityEngine::UIElements {
struct TwoPaneSplitViewOrientation;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::TwoPaneSplitViewOrientation);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.TwoPaneSplitViewOrientation
struct CORDL_TYPE TwoPaneSplitViewOrientation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TwoPaneSplitViewOrientation_Unwrapped
  enum struct __TwoPaneSplitViewOrientation_Unwrapped : int32_t {
    __E_Horizontal = static_cast<int32_t>(0x0),
    __E_Vertical = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TwoPaneSplitViewOrientation_Unwrapped() const noexcept {
    return static_cast<__TwoPaneSplitViewOrientation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TwoPaneSplitViewOrientation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TwoPaneSplitViewOrientation(int32_t value__) noexcept;

  /// @brief Field Horizontal value: I32(0)
  static ::UnityEngine::UIElements::TwoPaneSplitViewOrientation const Horizontal;

  /// @brief Field Vertical value: I32(1)
  static ::UnityEngine::UIElements::TwoPaneSplitViewOrientation const Vertical;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5718 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitViewOrientation, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TwoPaneSplitViewOrientation, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TwoPaneSplitViewOrientation, "UnityEngine.UIElements", "TwoPaneSplitViewOrientation");
