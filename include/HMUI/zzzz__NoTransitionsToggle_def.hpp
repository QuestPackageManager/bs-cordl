#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__UISelectionState_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
CORDL_MODULE_EXPORT(NoTransitionsToggle)
namespace UnityEngine::UI {
struct __Selectable__SelectionState;
}
namespace HMUI {
struct UISelectionState;
}
namespace System {
template <typename T> class Action_1;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13686)), TypeDefinitionIndex(TypeDefinitionIndex(13136))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13754))
// CS Name: ::HMUI::NoTransitionsToggle*
class CORDL_TYPE NoTransitionsToggle : public ::UnityEngine::UI::Toggle {
public:
  // Declarations
  /// @brief Field selectionStateDidChangeEvent, offset 0x120, size 0x8
  __declspec(property(get = __get_selectionStateDidChangeEvent, put = __set_selectionStateDidChangeEvent))::System::Action_1<::HMUI::UISelectionState>* selectionStateDidChangeEvent;

  /// @brief Field _selectionState, offset 0x128, size 0x4
  __declspec(property(get = __get__selectionState, put = __set__selectionState))::HMUI::UISelectionState _selectionState;

  __declspec(property(get = get_selectionState))::HMUI::UISelectionState selectionState;

  constexpr ::System::Action_1<::HMUI::UISelectionState>*& __get_selectionStateDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::HMUI::UISelectionState>*> const& __get_selectionStateDidChangeEvent() const;

  constexpr void __set_selectionStateDidChangeEvent(::System::Action_1<::HMUI::UISelectionState>* value);

  constexpr ::HMUI::UISelectionState& __get__selectionState();

  constexpr ::HMUI::UISelectionState const& __get__selectionState() const;

  constexpr void __set__selectionState(::HMUI::UISelectionState value);

  /// @brief Method get_selectionState addr 0x1feb1a4 size 0x8 virtual false final false
  inline ::HMUI::UISelectionState get_selectionState();

  /// @brief Method add_selectionStateDidChangeEvent addr 0x1feb1ac size 0xb4 virtual false final false
  inline void add_selectionStateDidChangeEvent(::System::Action_1<::HMUI::UISelectionState>* value);

  /// @brief Method remove_selectionStateDidChangeEvent addr 0x1feb260 size 0xb4 virtual false final false
  inline void remove_selectionStateDidChangeEvent(::System::Action_1<::HMUI::UISelectionState>* value);

  /// @brief Method Start addr 0x1feb314 size 0xac virtual true final false
  inline void Start();

  /// @brief Method DoStateTransition addr 0x1feb3c0 size 0x54 virtual true final false
  inline void DoStateTransition(::UnityEngine::UI::__Selectable__SelectionState state, bool instant);

  static inline ::HMUI::NoTransitionsToggle* New_ctor();

  /// @brief Method .ctor addr 0x1feb414 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <Start>b__6_0 addr 0x1feb41c size 0x30 virtual false final false
  inline void _Start_b__6_0(bool isOn);

  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionsToggle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoTransitionsToggle(NoTransitionsToggle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionsToggle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoTransitionsToggle(NoTransitionsToggle const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoTransitionsToggle();

public:
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
