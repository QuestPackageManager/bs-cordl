#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__UISelectionState_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
CORDL_MODULE_EXPORT(NoTransitionsToggle)
namespace HMUI {
struct UISelectionState;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UI {
struct __Selectable__SelectionState;
}
// Forward declare root types
namespace HMUI {
class NoTransitionsToggle;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::NoTransitionsToggle);
// Type: HMUI::NoTransitionsToggle
// SizeInfo { instance_size: 304, native_size: -1, calculated_instance_size: 304, calculated_native_size: 300, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::NoTransitionsToggle*
class CORDL_TYPE NoTransitionsToggle : public ::UnityEngine::UI::Toggle {
public:
  // Declarations
  /// @brief Field _selectionState, offset 0x128, size 0x4
  __declspec(property(get = __cordl_internal_get__selectionState, put = __cordl_internal_set__selectionState))::HMUI::UISelectionState _selectionState;

  __declspec(property(get = get_selectionState))::HMUI::UISelectionState selectionState;

  /// @brief Field selectionStateDidChangeEvent, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_selectionStateDidChangeEvent,
                      put = __cordl_internal_set_selectionStateDidChangeEvent))::System::Action_1<::HMUI::UISelectionState>* selectionStateDidChangeEvent;

  /// @brief Method DoStateTransition, addr 0x2526c44, size 0x54, virtual true, abstract: false, final false
  inline void DoStateTransition(::UnityEngine::UI::__Selectable__SelectionState state, bool instant);

  static inline ::HMUI::NoTransitionsToggle* New_ctor();

  /// @brief Method Start, addr 0x2526b98, size 0xac, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method <Start>b__6_0, addr 0x2526ca0, size 0x30, virtual false, abstract: false, final false
  inline void _Start_b__6_0(bool isOn);

  constexpr ::HMUI::UISelectionState const& __cordl_internal_get__selectionState() const;

  constexpr ::HMUI::UISelectionState& __cordl_internal_get__selectionState();

  constexpr ::System::Action_1<::HMUI::UISelectionState>*& __cordl_internal_get_selectionStateDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::HMUI::UISelectionState>*> const& __cordl_internal_get_selectionStateDidChangeEvent() const;

  constexpr void __cordl_internal_set__selectionState(::HMUI::UISelectionState value);

  constexpr void __cordl_internal_set_selectionStateDidChangeEvent(::System::Action_1<::HMUI::UISelectionState>* value);

  /// @brief Method .ctor, addr 0x2526c98, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_selectionStateDidChangeEvent, addr 0x2526a30, size 0xb4, virtual false, abstract: false, final false
  inline void add_selectionStateDidChangeEvent(::System::Action_1<::HMUI::UISelectionState>* value);

  /// @brief Method get_selectionState, addr 0x2526a28, size 0x8, virtual false, abstract: false, final false
  inline ::HMUI::UISelectionState get_selectionState();

  /// @brief Method remove_selectionStateDidChangeEvent, addr 0x2526ae4, size 0xb4, virtual false, abstract: false, final false
  inline void remove_selectionStateDidChangeEvent(::System::Action_1<::HMUI::UISelectionState>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoTransitionsToggle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionsToggle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoTransitionsToggle(NoTransitionsToggle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionsToggle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoTransitionsToggle(NoTransitionsToggle const&) = delete;

  /// @brief Field selectionStateDidChangeEvent, offset: 0x120, size: 0x8, def value: None
  ::System::Action_1<::HMUI::UISelectionState>* ___selectionStateDidChangeEvent;

  /// @brief Field _selectionState, offset: 0x128, size: 0x4, def value: None
  ::HMUI::UISelectionState ____selectionState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::NoTransitionsToggle, 0x130>, "Size mismatch!");

static_assert(offsetof(::HMUI::NoTransitionsToggle, ___selectionStateDidChangeEvent) == 0x120, "Offset mismatch!");

static_assert(offsetof(::HMUI::NoTransitionsToggle, ____selectionState) == 0x128, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::NoTransitionsToggle);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::NoTransitionsToggle*, "HMUI", "NoTransitionsToggle");
