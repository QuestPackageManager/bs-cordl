#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ToggleWithCallbacks)
namespace HMUI {
struct __ToggleWithCallbacks__SelectionState;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UI {
struct __Selectable__SelectionState;
}
// Forward declare root types
namespace HMUI {
struct __ToggleWithCallbacks__SelectionState;
}
namespace HMUI {
class ToggleWithCallbacks;
}
// Write type traits
MARK_VAL_T(::HMUI::__ToggleWithCallbacks__SelectionState);
MARK_REF_PTR_T(::HMUI::ToggleWithCallbacks);
// Type: ::SelectionState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: true
// CS Name: ::ToggleWithCallbacks::SelectionState
struct CORDL_TYPE __ToggleWithCallbacks__SelectionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ToggleWithCallbacks__SelectionState_Unwrapped
  enum struct ____ToggleWithCallbacks__SelectionState_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Highlighted = static_cast<int32_t>(0x1),
    __E_Pressed = static_cast<int32_t>(0x2),
    __E_Selected = static_cast<int32_t>(0x3),
    __E_Disabled = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ToggleWithCallbacks__SelectionState_Unwrapped() const noexcept {
    return static_cast<____ToggleWithCallbacks__SelectionState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ToggleWithCallbacks__SelectionState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ToggleWithCallbacks__SelectionState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Disabled value: static_cast<int32_t>(0x4)
  static ::HMUI::__ToggleWithCallbacks__SelectionState const Disabled;

  /// @brief Field Highlighted value: static_cast<int32_t>(0x1)
  static ::HMUI::__ToggleWithCallbacks__SelectionState const Highlighted;

  /// @brief Field Normal value: static_cast<int32_t>(0x0)
  static ::HMUI::__ToggleWithCallbacks__SelectionState const Normal;

  /// @brief Field Pressed value: static_cast<int32_t>(0x2)
  static ::HMUI::__ToggleWithCallbacks__SelectionState const Pressed;

  /// @brief Field Selected value: static_cast<int32_t>(0x3)
  static ::HMUI::__ToggleWithCallbacks__SelectionState const Selected;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ToggleWithCallbacks__SelectionState, 0x4>, "Size mismatch!");

static_assert(offsetof(::HMUI::__ToggleWithCallbacks__SelectionState, value__) == 0x0, "Offset mismatch!");

} // namespace HMUI
// Type: HMUI::ToggleWithCallbacks
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::ToggleWithCallbacks*
class CORDL_TYPE ToggleWithCallbacks : public ::UnityEngine::UI::Toggle {
public:
  // Declarations
  using SelectionState = ::HMUI::__ToggleWithCallbacks__SelectionState;

  __declspec(property(get = get_selectionState))::HMUI::__ToggleWithCallbacks__SelectionState selectionState;

  /// @brief Field stateDidChangeEvent, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_stateDidChangeEvent,
                      put = __cordl_internal_set_stateDidChangeEvent))::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>* stateDidChangeEvent;

  /// @brief Method DoStateTransition, addr 0x242bd34, size 0x4c, virtual true, abstract: false, final false
  inline void DoStateTransition(::UnityEngine::UI::__Selectable__SelectionState state, bool instant);

  static inline ::HMUI::ToggleWithCallbacks* New_ctor();

  constexpr ::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>*& __cordl_internal_get_stateDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>*> const& __cordl_internal_get_stateDidChangeEvent() const;

  constexpr void __cordl_internal_set_stateDidChangeEvent(::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>* value);

  /// @brief Method .ctor, addr 0x242bd80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_stateDidChangeEvent, addr 0x2427e50, size 0xb4, virtual false, abstract: false, final false
  inline void add_stateDidChangeEvent(::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>* value);

  /// @brief Method get_selectionState, addr 0x24281f0, size 0x54, virtual false, abstract: false, final false
  inline ::HMUI::__ToggleWithCallbacks__SelectionState get_selectionState();

  /// @brief Method remove_stateDidChangeEvent, addr 0x2428134, size 0xb4, virtual false, abstract: false, final false
  inline void remove_stateDidChangeEvent(::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>* value);

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

  /// @brief Field stateDidChangeEvent, offset: 0x120, size: 0x8, def value: None
  ::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>* ___stateDidChangeEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ToggleWithCallbacks, 0x128>, "Size mismatch!");

static_assert(offsetof(::HMUI::ToggleWithCallbacks, ___stateDidChangeEvent) == 0x120, "Offset mismatch!");

} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ToggleWithCallbacks__SelectionState, "HMUI", "ToggleWithCallbacks/SelectionState");
NEED_NO_BOX(::HMUI::ToggleWithCallbacks);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ToggleWithCallbacks*, "HMUI", "ToggleWithCallbacks");
