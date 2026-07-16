#pragma once
// IWYU pragma private; include "HMUI/NoTransitionCircleSlider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__CircleSlider_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NoTransitionCircleSlider)
namespace HMUI {
struct NoTransitionCircleSlider_SelectionState;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UI {
struct Selectable_SelectionState;
}
// Forward declare root types
namespace HMUI {
struct NoTransitionCircleSlider_SelectionState;
}
namespace HMUI {
class NoTransitionCircleSlider;
}
// Write type traits
MARK_VAL_T(::HMUI::NoTransitionCircleSlider_SelectionState);
MARK_REF_T(::HMUI::NoTransitionCircleSlider*);
DEFINE_IL2CPP_CLASS(::HMUI::NoTransitionCircleSlider_SelectionState, "HMUI", "NoTransitionCircleSlider/SelectionState");
DEFINE_IL2CPP_CLASS(::HMUI::NoTransitionCircleSlider*, "HMUI", "NoTransitionCircleSlider");
// Dependencies
namespace HMUI {
// Is value type: true
// CS Name: HMUI.NoTransitionCircleSlider/SelectionState
struct CORDL_TYPE NoTransitionCircleSlider_SelectionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NoTransitionCircleSlider_SelectionState_Unwrapped
  enum struct __NoTransitionCircleSlider_SelectionState_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Highlighted = static_cast<int32_t>(0x1),
    __E_Pressed = static_cast<int32_t>(0x2),
    __E_Disabled = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NoTransitionCircleSlider_SelectionState_Unwrapped() const noexcept {
    return static_cast<__NoTransitionCircleSlider_SelectionState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NoTransitionCircleSlider_SelectionState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NoTransitionCircleSlider_SelectionState(int32_t value__) noexcept;

  /// @brief Field Disabled value: I32(3)
  static ::HMUI::NoTransitionCircleSlider_SelectionState const Disabled;

  /// @brief Field Highlighted value: I32(1)
  static ::HMUI::NoTransitionCircleSlider_SelectionState const Highlighted;

  /// @brief Field Normal value: I32(0)
  static ::HMUI::NoTransitionCircleSlider_SelectionState const Normal;

  /// @brief Field Pressed value: I32(2)
  static ::HMUI::NoTransitionCircleSlider_SelectionState const Pressed;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19212 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HMUI::NoTransitionCircleSlider_SelectionState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::HMUI::NoTransitionCircleSlider_SelectionState) == 0x4, "Size mismatch!");

} // namespace HMUI
// Dependencies HMUI.CircleSlider, HMUI.NoTransitionCircleSlider::SelectionState
namespace HMUI {
// Is value type: false
// CS Name: HMUI.NoTransitionCircleSlider
class CORDL_TYPE NoTransitionCircleSlider : public ::HMUI::CircleSlider {
public:
  // Declarations
  using SelectionState = ::HMUI::NoTransitionCircleSlider_SelectionState;

  /// @brief Field _selectionState, offset 0x138, size 0x4
  __declspec(property(get = __cordl_internal_get__selectionState, put = __cordl_internal_set__selectionState)) ::HMUI::NoTransitionCircleSlider_SelectionState _selectionState;

  __declspec(property(get = get_selectionState)) ::HMUI::NoTransitionCircleSlider_SelectionState selectionState;

  /// @brief Field selectionStateDidChangeEvent, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_selectionStateDidChangeEvent,
                      put = __cordl_internal_set_selectionStateDidChangeEvent)) ::System::Action_1<::HMUI::NoTransitionCircleSlider_SelectionState>* selectionStateDidChangeEvent;

  /// @brief Method DoStateTransition, addr 0x588e320, size 0x40, virtual true, abstract: false, final false
  inline void DoStateTransition(::UnityEngine::UI::Selectable_SelectionState state, bool instant);

  static inline ::HMUI::NoTransitionCircleSlider* New_ctor();

  constexpr ::HMUI::NoTransitionCircleSlider_SelectionState const& __cordl_internal_get__selectionState() const;

  constexpr ::HMUI::NoTransitionCircleSlider_SelectionState& __cordl_internal_get__selectionState();

  constexpr ::System::Action_1<::HMUI::NoTransitionCircleSlider_SelectionState>* const& __cordl_internal_get_selectionStateDidChangeEvent() const;

  constexpr ::System::Action_1<::HMUI::NoTransitionCircleSlider_SelectionState>*& __cordl_internal_get_selectionStateDidChangeEvent();

  constexpr void __cordl_internal_set__selectionState(::HMUI::NoTransitionCircleSlider_SelectionState value);

  constexpr void __cordl_internal_set_selectionStateDidChangeEvent(::System::Action_1<::HMUI::NoTransitionCircleSlider_SelectionState>* value);

  /// @brief Method .ctor, addr 0x588e360, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_selectionStateDidChangeEvent, addr 0x588e1a0, size 0xc0, virtual false, abstract: false, final false
  inline void add_selectionStateDidChangeEvent(::System::Action_1<::HMUI::NoTransitionCircleSlider_SelectionState>* value);

  /// @brief Method get_selectionState, addr 0x588e198, size 0x8, virtual false, abstract: false, final false
  inline ::HMUI::NoTransitionCircleSlider_SelectionState get_selectionState();

  /// @brief Method remove_selectionStateDidChangeEvent, addr 0x588e260, size 0xc0, virtual false, abstract: false, final false
  inline void remove_selectionStateDidChangeEvent(::System::Action_1<::HMUI::NoTransitionCircleSlider_SelectionState>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoTransitionCircleSlider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionCircleSlider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoTransitionCircleSlider(NoTransitionCircleSlider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionCircleSlider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoTransitionCircleSlider(NoTransitionCircleSlider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19213 };

  /// @brief Field selectionStateDidChangeEvent, offset: 0x130, size: 0x8, def value: None
  ::System::Action_1<::HMUI::NoTransitionCircleSlider_SelectionState>* ___selectionStateDidChangeEvent;

  /// @brief Field _selectionState, offset: 0x138, size: 0x4, def value: None
  ::HMUI::NoTransitionCircleSlider_SelectionState ____selectionState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::NoTransitionCircleSlider, ___selectionStateDidChangeEvent) == 0x130, "Offset mismatch!");

static_assert(offsetof(::HMUI::NoTransitionCircleSlider, ____selectionState) == 0x138, "Offset mismatch!");

static_assert(sizeof(::HMUI::NoTransitionCircleSlider) == 0x140, "Size mismatch!");

} // namespace HMUI
