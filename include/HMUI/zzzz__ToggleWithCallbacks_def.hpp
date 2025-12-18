#pragma once
// IWYU pragma private; include "HMUI/ToggleWithCallbacks.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ToggleWithCallbacks)
namespace HMUI {
struct ToggleWithCallbacks_SelectionState;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UI {
struct Selectable_SelectionState;
}
// Forward declare root types
namespace HMUI {
struct ToggleWithCallbacks_SelectionState;
}
namespace HMUI {
class ToggleWithCallbacks;
}
// Write type traits
MARK_VAL_T(::HMUI::ToggleWithCallbacks_SelectionState);
MARK_REF_PTR_T(::HMUI::ToggleWithCallbacks);
// Dependencies
namespace HMUI {
// Is value type: true
// CS Name: HMUI.ToggleWithCallbacks/SelectionState
struct CORDL_TYPE ToggleWithCallbacks_SelectionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ToggleWithCallbacks_SelectionState_Unwrapped
  enum struct __ToggleWithCallbacks_SelectionState_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Highlighted = static_cast<int32_t>(0x1),
    __E_Pressed = static_cast<int32_t>(0x2),
    __E_Selected = static_cast<int32_t>(0x3),
    __E_Disabled = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ToggleWithCallbacks_SelectionState_Unwrapped() const noexcept {
    return static_cast<__ToggleWithCallbacks_SelectionState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ToggleWithCallbacks_SelectionState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ToggleWithCallbacks_SelectionState(int32_t value__) noexcept;

  /// @brief Field Disabled value: I32(4)
  static ::HMUI::ToggleWithCallbacks_SelectionState const Disabled;

  /// @brief Field Highlighted value: I32(1)
  static ::HMUI::ToggleWithCallbacks_SelectionState const Highlighted;

  /// @brief Field Normal value: I32(0)
  static ::HMUI::ToggleWithCallbacks_SelectionState const Normal;

  /// @brief Field Pressed value: I32(2)
  static ::HMUI::ToggleWithCallbacks_SelectionState const Pressed;

  /// @brief Field Selected value: I32(3)
  static ::HMUI::ToggleWithCallbacks_SelectionState const Selected;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19223 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HMUI::ToggleWithCallbacks_SelectionState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::ToggleWithCallbacks_SelectionState, 0x4>, "Size mismatch!");

} // namespace HMUI
// Dependencies UnityEngine.UI.Toggle
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ToggleWithCallbacks
class CORDL_TYPE ToggleWithCallbacks : public ::UnityEngine::UI::Toggle {
public:
  // Declarations
  using SelectionState = ::HMUI::ToggleWithCallbacks_SelectionState;

  __declspec(property(get = get_selectionState)) ::HMUI::ToggleWithCallbacks_SelectionState selectionState;

  /// @brief Field stateDidChangeEvent, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_stateDidChangeEvent,
                      put = __cordl_internal_set_stateDidChangeEvent)) ::System::Action_1<::HMUI::ToggleWithCallbacks_SelectionState>* stateDidChangeEvent;

  /// @brief Method DoStateTransition, addr 0x56dc53c, size 0x48, virtual true, abstract: false, final false
  inline void DoStateTransition(::UnityEngine::UI::Selectable_SelectionState state, bool instant);

  static inline ::HMUI::ToggleWithCallbacks* New_ctor();

  constexpr ::System::Action_1<::HMUI::ToggleWithCallbacks_SelectionState>* const& __cordl_internal_get_stateDidChangeEvent() const;

  constexpr ::System::Action_1<::HMUI::ToggleWithCallbacks_SelectionState>*& __cordl_internal_get_stateDidChangeEvent();

  constexpr void __cordl_internal_set_stateDidChangeEvent(::System::Action_1<::HMUI::ToggleWithCallbacks_SelectionState>* value);

  /// @brief Method .ctor, addr 0x56dc584, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_stateDidChangeEvent, addr 0x56d7b08, size 0xc0, virtual false, abstract: false, final false
  inline void add_stateDidChangeEvent(::System::Action_1<::HMUI::ToggleWithCallbacks_SelectionState>* value);

  /// @brief Method get_selectionState, addr 0x56d7f44, size 0x78, virtual false, abstract: false, final false
  inline ::HMUI::ToggleWithCallbacks_SelectionState get_selectionState();

  /// @brief Method remove_stateDidChangeEvent, addr 0x56d7e7c, size 0xc0, virtual false, abstract: false, final false
  inline void remove_stateDidChangeEvent(::System::Action_1<::HMUI::ToggleWithCallbacks_SelectionState>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ToggleWithCallbacks();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ToggleWithCallbacks", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ToggleWithCallbacks(ToggleWithCallbacks&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ToggleWithCallbacks", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ToggleWithCallbacks(ToggleWithCallbacks const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19224 };

  /// @brief Field stateDidChangeEvent, offset: 0x128, size: 0x8, def value: None
  ::System::Action_1<::HMUI::ToggleWithCallbacks_SelectionState>* ___stateDidChangeEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::ToggleWithCallbacks, ___stateDidChangeEvent) == 0x128, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::ToggleWithCallbacks, 0x130>, "Size mismatch!");

} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ToggleWithCallbacks_SelectionState, "HMUI", "ToggleWithCallbacks/SelectionState");
NEED_NO_BOX(::HMUI::ToggleWithCallbacks);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ToggleWithCallbacks*, "HMUI", "ToggleWithCallbacks");
