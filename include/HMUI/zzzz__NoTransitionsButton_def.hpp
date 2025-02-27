#pragma once
// IWYU pragma private; include "HMUI/NoTransitionsButton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NoTransitionsButton)
namespace HMUI {
struct NoTransitionsButton_SelectionState;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UI {
struct Selectable_SelectionState;
}
// Forward declare root types
namespace HMUI {
struct NoTransitionsButton_SelectionState;
}
namespace HMUI {
class NoTransitionsButton;
}
// Write type traits
MARK_VAL_T(::HMUI::NoTransitionsButton_SelectionState);
MARK_REF_PTR_T(::HMUI::NoTransitionsButton);
// Dependencies
namespace HMUI {
// Is value type: true
// CS Name: HMUI.NoTransitionsButton/SelectionState
struct CORDL_TYPE NoTransitionsButton_SelectionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NoTransitionsButton_SelectionState_Unwrapped
  enum struct __NoTransitionsButton_SelectionState_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Highlighted = static_cast<int32_t>(0x1),
    __E_Pressed = static_cast<int32_t>(0x2),
    __E_Disabled = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NoTransitionsButton_SelectionState_Unwrapped() const noexcept {
    return static_cast<__NoTransitionsButton_SelectionState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NoTransitionsButton_SelectionState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NoTransitionsButton_SelectionState(int32_t value__) noexcept;

  /// @brief Field Disabled value: I32(3)
  static ::HMUI::NoTransitionsButton_SelectionState const Disabled;

  /// @brief Field Highlighted value: I32(1)
  static ::HMUI::NoTransitionsButton_SelectionState const Highlighted;

  /// @brief Field Normal value: I32(0)
  static ::HMUI::NoTransitionsButton_SelectionState const Normal;

  /// @brief Field Pressed value: I32(2)
  static ::HMUI::NoTransitionsButton_SelectionState const Pressed;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16077 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HMUI::NoTransitionsButton_SelectionState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::NoTransitionsButton_SelectionState, 0x4>, "Size mismatch!");

} // namespace HMUI
// Dependencies HMUI.NoTransitionsButton::SelectionState, UnityEngine.UI.Button
namespace HMUI {
// Is value type: false
// CS Name: HMUI.NoTransitionsButton
class CORDL_TYPE NoTransitionsButton : public ::UnityEngine::UI::Button {
public:
  // Declarations
  using SelectionState = ::HMUI::NoTransitionsButton_SelectionState;

  /// @brief Field _selectionState, offset 0x110, size 0x4
  __declspec(property(get = __cordl_internal_get__selectionState, put = __cordl_internal_set__selectionState)) ::HMUI::NoTransitionsButton_SelectionState _selectionState;

  __declspec(property(get = get_selectionState)) ::HMUI::NoTransitionsButton_SelectionState selectionState;

  /// @brief Field selectionStateDidChangeEvent, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_selectionStateDidChangeEvent,
                      put = __cordl_internal_set_selectionStateDidChangeEvent)) ::System::Action_1<::HMUI::NoTransitionsButton_SelectionState>* selectionStateDidChangeEvent;

  /// @brief Method DoStateTransition, addr 0x3a02e2c, size 0x40, virtual true, abstract: false, final false
  inline void DoStateTransition(::UnityEngine::UI::Selectable_SelectionState state, bool instant);

  static inline ::HMUI::NoTransitionsButton* New_ctor();

  constexpr ::HMUI::NoTransitionsButton_SelectionState const& __cordl_internal_get__selectionState() const;

  constexpr ::HMUI::NoTransitionsButton_SelectionState& __cordl_internal_get__selectionState();

  constexpr ::System::Action_1<::HMUI::NoTransitionsButton_SelectionState>* const& __cordl_internal_get_selectionStateDidChangeEvent() const;

  constexpr ::System::Action_1<::HMUI::NoTransitionsButton_SelectionState>*& __cordl_internal_get_selectionStateDidChangeEvent();

  constexpr void __cordl_internal_set__selectionState(::HMUI::NoTransitionsButton_SelectionState value);

  constexpr void __cordl_internal_set_selectionStateDidChangeEvent(::System::Action_1<::HMUI::NoTransitionsButton_SelectionState>* value);

  /// @brief Method .ctor, addr 0x3a02e6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_selectionStateDidChangeEvent, addr 0x3a024c8, size 0xb4, virtual false, abstract: false, final false
  inline void add_selectionStateDidChangeEvent(::System::Action_1<::HMUI::NoTransitionsButton_SelectionState>* value);

  /// @brief Method get_selectionState, addr 0x3a02e24, size 0x8, virtual false, abstract: false, final false
  inline ::HMUI::NoTransitionsButton_SelectionState get_selectionState();

  /// @brief Method remove_selectionStateDidChangeEvent, addr 0x3a026ac, size 0xb4, virtual false, abstract: false, final false
  inline void remove_selectionStateDidChangeEvent(::System::Action_1<::HMUI::NoTransitionsButton_SelectionState>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoTransitionsButton();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionsButton", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoTransitionsButton(NoTransitionsButton&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionsButton", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoTransitionsButton(NoTransitionsButton const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16078 };

  /// @brief Field selectionStateDidChangeEvent, offset: 0x108, size: 0x8, def value: None
  ::System::Action_1<::HMUI::NoTransitionsButton_SelectionState>* ___selectionStateDidChangeEvent;

  /// @brief Field _selectionState, offset: 0x110, size: 0x4, def value: None
  ::HMUI::NoTransitionsButton_SelectionState ____selectionState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::NoTransitionsButton, ___selectionStateDidChangeEvent) == 0x108, "Offset mismatch!");

static_assert(offsetof(::HMUI::NoTransitionsButton, ____selectionState) == 0x110, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::NoTransitionsButton, 0x118>, "Size mismatch!");

} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::NoTransitionsButton_SelectionState, "HMUI", "NoTransitionsButton/SelectionState");
NEED_NO_BOX(::HMUI::NoTransitionsButton);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::NoTransitionsButton*, "HMUI", "NoTransitionsButton");
