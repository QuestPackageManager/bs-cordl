#pragma once
// IWYU pragma private; include "HMUI/UISelectionState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UISelectionState)
// Forward declare root types
namespace HMUI {
struct UISelectionState;
}
// Write type traits
MARK_VAL_T(::HMUI::UISelectionState);
// Dependencies
namespace HMUI {
// Is value type: true
// CS Name: HMUI.UISelectionState
struct CORDL_TYPE UISelectionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UISelectionState_Unwrapped
  enum struct __UISelectionState_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Highlighted = static_cast<int32_t>(0x1),
    __E_Pressed = static_cast<int32_t>(0x2),
    __E_Selected = static_cast<int32_t>(0x3),
    __E_SelectedAndHighlighted = static_cast<int32_t>(0x4),
    __E_Disabled = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UISelectionState_Unwrapped() const noexcept {
    return static_cast<__UISelectionState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UISelectionState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UISelectionState(int32_t value__) noexcept;

  /// @brief Field Disabled value: I32(5)
  static ::HMUI::UISelectionState const Disabled;

  /// @brief Field Highlighted value: I32(1)
  static ::HMUI::UISelectionState const Highlighted;

  /// @brief Field Normal value: I32(0)
  static ::HMUI::UISelectionState const Normal;

  /// @brief Field Pressed value: I32(2)
  static ::HMUI::UISelectionState const Pressed;

  /// @brief Field Selected value: I32(3)
  static ::HMUI::UISelectionState const Selected;

  /// @brief Field SelectedAndHighlighted value: I32(4)
  static ::HMUI::UISelectionState const SelectedAndHighlighted;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16068 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HMUI::UISelectionState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::UISelectionState, 0x4>, "Size mismatch!");

} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::UISelectionState, "HMUI", "UISelectionState");
