#pragma once
// IWYU pragma private; include "HMUI/NoTransitionTextSlider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TextSlider_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NoTransitionTextSlider)
namespace HMUI {
struct NoTransitionTextSlider_SelectionState;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UI {
struct Selectable_SelectionState;
}
// Forward declare root types
namespace HMUI {
struct NoTransitionTextSlider_SelectionState;
}
namespace HMUI {
class NoTransitionTextSlider;
}
// Write type traits
MARK_VAL_T(::HMUI::NoTransitionTextSlider_SelectionState);
MARK_REF_T(::HMUI::NoTransitionTextSlider*);
DEFINE_IL2CPP_CLASS(::HMUI::NoTransitionTextSlider_SelectionState, "HMUI", "NoTransitionTextSlider/SelectionState");
DEFINE_IL2CPP_CLASS(::HMUI::NoTransitionTextSlider*, "HMUI", "NoTransitionTextSlider");
// Dependencies
namespace HMUI {
// Is value type: true
// CS Name: HMUI.NoTransitionTextSlider/SelectionState
struct CORDL_TYPE NoTransitionTextSlider_SelectionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NoTransitionTextSlider_SelectionState_Unwrapped
  enum struct __NoTransitionTextSlider_SelectionState_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Highlighted = static_cast<int32_t>(0x1),
    __E_Pressed = static_cast<int32_t>(0x2),
    __E_Disabled = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NoTransitionTextSlider_SelectionState_Unwrapped() const noexcept {
    return static_cast<__NoTransitionTextSlider_SelectionState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NoTransitionTextSlider_SelectionState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NoTransitionTextSlider_SelectionState(int32_t value__) noexcept;

  /// @brief Field Disabled value: I32(3)
  static ::HMUI::NoTransitionTextSlider_SelectionState const Disabled;

  /// @brief Field Highlighted value: I32(1)
  static ::HMUI::NoTransitionTextSlider_SelectionState const Highlighted;

  /// @brief Field Normal value: I32(0)
  static ::HMUI::NoTransitionTextSlider_SelectionState const Normal;

  /// @brief Field Pressed value: I32(2)
  static ::HMUI::NoTransitionTextSlider_SelectionState const Pressed;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19216 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HMUI::NoTransitionTextSlider_SelectionState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::HMUI::NoTransitionTextSlider_SelectionState) == 0x4, "Size mismatch!");

} // namespace HMUI
// Dependencies HMUI.NoTransitionTextSlider::SelectionState, HMUI.TextSlider
namespace HMUI {
// Is value type: false
// CS Name: HMUI.NoTransitionTextSlider
class CORDL_TYPE NoTransitionTextSlider : public ::HMUI::TextSlider {
public:
  // Declarations
  using SelectionState = ::HMUI::NoTransitionTextSlider_SelectionState;

  /// @brief Field _selectionState, offset 0x150, size 0x4
  __declspec(property(get = __cordl_internal_get__selectionState, put = __cordl_internal_set__selectionState)) ::HMUI::NoTransitionTextSlider_SelectionState _selectionState;

  __declspec(property(get = get_selectionState)) ::HMUI::NoTransitionTextSlider_SelectionState selectionState;

  /// @brief Field selectionStateDidChangeEvent, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_selectionStateDidChangeEvent,
                      put = __cordl_internal_set_selectionStateDidChangeEvent)) ::System::Action_1<::HMUI::NoTransitionTextSlider_SelectionState>* selectionStateDidChangeEvent;

  /// @brief Method DoStateTransition, addr 0x588e6c0, size 0x40, virtual true, abstract: false, final false
  inline void DoStateTransition(::UnityEngine::UI::Selectable_SelectionState state, bool instant);

  static inline ::HMUI::NoTransitionTextSlider* New_ctor();

  constexpr ::HMUI::NoTransitionTextSlider_SelectionState const& __cordl_internal_get__selectionState() const;

  constexpr ::HMUI::NoTransitionTextSlider_SelectionState& __cordl_internal_get__selectionState();

  constexpr ::System::Action_1<::HMUI::NoTransitionTextSlider_SelectionState>* const& __cordl_internal_get_selectionStateDidChangeEvent() const;

  constexpr ::System::Action_1<::HMUI::NoTransitionTextSlider_SelectionState>*& __cordl_internal_get_selectionStateDidChangeEvent();

  constexpr void __cordl_internal_set__selectionState(::HMUI::NoTransitionTextSlider_SelectionState value);

  constexpr void __cordl_internal_set_selectionStateDidChangeEvent(::System::Action_1<::HMUI::NoTransitionTextSlider_SelectionState>* value);

  /// @brief Method .ctor, addr 0x588e700, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_selectionStateDidChangeEvent, addr 0x588e540, size 0xc0, virtual false, abstract: false, final false
  inline void add_selectionStateDidChangeEvent(::System::Action_1<::HMUI::NoTransitionTextSlider_SelectionState>* value);

  /// @brief Method get_selectionState, addr 0x588e538, size 0x8, virtual false, abstract: false, final false
  inline ::HMUI::NoTransitionTextSlider_SelectionState get_selectionState();

  /// @brief Method remove_selectionStateDidChangeEvent, addr 0x588e600, size 0xc0, virtual false, abstract: false, final false
  inline void remove_selectionStateDidChangeEvent(::System::Action_1<::HMUI::NoTransitionTextSlider_SelectionState>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoTransitionTextSlider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionTextSlider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoTransitionTextSlider(NoTransitionTextSlider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionTextSlider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoTransitionTextSlider(NoTransitionTextSlider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19217 };

  /// @brief Field selectionStateDidChangeEvent, offset: 0x148, size: 0x8, def value: None
  ::System::Action_1<::HMUI::NoTransitionTextSlider_SelectionState>* ___selectionStateDidChangeEvent;

  /// @brief Field _selectionState, offset: 0x150, size: 0x4, def value: None
  ::HMUI::NoTransitionTextSlider_SelectionState ____selectionState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::NoTransitionTextSlider, ___selectionStateDidChangeEvent) == 0x148, "Offset mismatch!");

static_assert(offsetof(::HMUI::NoTransitionTextSlider, ____selectionState) == 0x150, "Offset mismatch!");

static_assert(sizeof(::HMUI::NoTransitionTextSlider) == 0x158, "Size mismatch!");

} // namespace HMUI
