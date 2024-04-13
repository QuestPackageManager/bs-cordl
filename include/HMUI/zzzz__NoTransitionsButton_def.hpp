#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__NoTransitionsButton_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NoTransitionsButton)
namespace HMUI {
struct __NoTransitionsButton__SelectionState;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UI {
struct __Selectable__SelectionState;
}
// Forward declare root types
namespace HMUI {
struct __NoTransitionsButton__SelectionState;
}
namespace HMUI {
class NoTransitionsButton;
}
// Write type traits
MARK_VAL_T(::HMUI::__NoTransitionsButton__SelectionState);
MARK_REF_PTR_T(::HMUI::NoTransitionsButton);
// Type: ::SelectionState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: true
// CS Name: ::NoTransitionsButton::SelectionState
struct CORDL_TYPE __NoTransitionsButton__SelectionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____NoTransitionsButton__SelectionState_Unwrapped
  enum struct ____NoTransitionsButton__SelectionState_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Highlighted = static_cast<int32_t>(0x1),
    __E_Pressed = static_cast<int32_t>(0x2),
    __E_Disabled = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____NoTransitionsButton__SelectionState_Unwrapped() const noexcept {
    return static_cast<____NoTransitionsButton__SelectionState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NoTransitionsButton__SelectionState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __NoTransitionsButton__SelectionState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Disabled value: static_cast<int32_t>(0x3)
  static ::HMUI::__NoTransitionsButton__SelectionState const Disabled;

  /// @brief Field Highlighted value: static_cast<int32_t>(0x1)
  static ::HMUI::__NoTransitionsButton__SelectionState const Highlighted;

  /// @brief Field Normal value: static_cast<int32_t>(0x0)
  static ::HMUI::__NoTransitionsButton__SelectionState const Normal;

  /// @brief Field Pressed value: static_cast<int32_t>(0x2)
  static ::HMUI::__NoTransitionsButton__SelectionState const Pressed;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__NoTransitionsButton__SelectionState, 0x4>, "Size mismatch!");

static_assert(offsetof(::HMUI::__NoTransitionsButton__SelectionState, value__) == 0x0, "Offset mismatch!");

} // namespace HMUI
// Type: HMUI::NoTransitionsButton
// SizeInfo { instance_size: 272, native_size: -1, calculated_instance_size: 272, calculated_native_size: 268, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::NoTransitionsButton*
class CORDL_TYPE NoTransitionsButton : public ::UnityEngine::UI::Button {
public:
  // Declarations
  using SelectionState = ::HMUI::__NoTransitionsButton__SelectionState;

  /// @brief Field _selectionState, offset 0x108, size 0x4
  __declspec(property(get = __cordl_internal_get__selectionState, put = __cordl_internal_set__selectionState))::HMUI::__NoTransitionsButton__SelectionState _selectionState;

  __declspec(property(get = get_selectionState))::HMUI::__NoTransitionsButton__SelectionState selectionState;

  /// @brief Field selectionStateDidChangeEvent, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_selectionStateDidChangeEvent,
                      put = __cordl_internal_set_selectionStateDidChangeEvent))::System::Action_1<::HMUI::__NoTransitionsButton__SelectionState>* selectionStateDidChangeEvent;

  /// @brief Method DoStateTransition, addr 0x2419d08, size 0x40, virtual true, abstract: false, final false
  inline void DoStateTransition(::UnityEngine::UI::__Selectable__SelectionState state, bool instant);

  static inline ::HMUI::NoTransitionsButton* New_ctor();

  constexpr ::HMUI::__NoTransitionsButton__SelectionState const& __cordl_internal_get__selectionState() const;

  constexpr ::HMUI::__NoTransitionsButton__SelectionState& __cordl_internal_get__selectionState();

  constexpr ::System::Action_1<::HMUI::__NoTransitionsButton__SelectionState>*& __cordl_internal_get_selectionStateDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::HMUI::__NoTransitionsButton__SelectionState>*> const& __cordl_internal_get_selectionStateDidChangeEvent() const;

  constexpr void __cordl_internal_set__selectionState(::HMUI::__NoTransitionsButton__SelectionState value);

  constexpr void __cordl_internal_set_selectionStateDidChangeEvent(::System::Action_1<::HMUI::__NoTransitionsButton__SelectionState>* value);

  /// @brief Method .ctor, addr 0x2419d48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_selectionStateDidChangeEvent, addr 0x2419524, size 0xb4, virtual false, abstract: false, final false
  inline void add_selectionStateDidChangeEvent(::System::Action_1<::HMUI::__NoTransitionsButton__SelectionState>* value);

  /// @brief Method get_selectionState, addr 0x2419d00, size 0x8, virtual false, abstract: false, final false
  inline ::HMUI::__NoTransitionsButton__SelectionState get_selectionState();

  /// @brief Method remove_selectionStateDidChangeEvent, addr 0x241970c, size 0xb4, virtual false, abstract: false, final false
  inline void remove_selectionStateDidChangeEvent(::System::Action_1<::HMUI::__NoTransitionsButton__SelectionState>* value);

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

  /// @brief Field selectionStateDidChangeEvent, offset: 0x100, size: 0x8, def value: None
  ::System::Action_1<::HMUI::__NoTransitionsButton__SelectionState>* ___selectionStateDidChangeEvent;

  /// @brief Field _selectionState, offset: 0x108, size: 0x4, def value: None
  ::HMUI::__NoTransitionsButton__SelectionState ____selectionState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::NoTransitionsButton, 0x110>, "Size mismatch!");

static_assert(offsetof(::HMUI::NoTransitionsButton, ___selectionStateDidChangeEvent) == 0x100, "Offset mismatch!");

static_assert(offsetof(::HMUI::NoTransitionsButton, ____selectionState) == 0x108, "Offset mismatch!");

} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__NoTransitionsButton__SelectionState, "HMUI", "NoTransitionsButton/SelectionState");
NEED_NO_BOX(::HMUI::NoTransitionsButton);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::NoTransitionsButton*, "HMUI", "NoTransitionsButton");
