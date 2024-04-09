#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BaseStateTransition)
namespace GlobalNamespace {
class BaseTransitionSO;
}
namespace GlobalNamespace {
class SelectableStateController;
}
namespace GlobalNamespace {
struct __SelectableStateController__ViewState;
}
namespace Tweening {
class TimeTweeningManager;
}
// Forward declare root types
namespace GlobalNamespace {
class BaseStateTransition;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BaseStateTransition);
// Type: ::BaseStateTransition
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BaseStateTransition*
class CORDL_TYPE BaseStateTransition : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _selectableStateController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__selectableStateController,
                      put = __cordl_internal_set__selectableStateController))::UnityW<::GlobalNamespace::SelectableStateController> _selectableStateController;

  __declspec(property(get = get_transition))::UnityW<::GlobalNamespace::BaseTransitionSO> transition;

  __declspec(property(get = get_tweeningManager))::UnityW<::Tweening::TimeTweeningManager> tweeningManager;

  /// @brief Method HandleSelectableStateControllerStateDidChange, addr 0x2633a08, size 0x6c, virtual false, abstract: false, final false
  inline void HandleSelectableStateControllerStateDidChange(::GlobalNamespace::__SelectableStateController__ViewState state, bool animated);

  static inline ::GlobalNamespace::BaseStateTransition* New_ctor();

  /// @brief Method OnDestroy, addr 0x2633970, size 0x98, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x2633838, size 0x88, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x26336e4, size 0x9c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method SetDisabledState, addr 0x2633a98, size 0x4, virtual true, abstract: false, final false
  inline void SetDisabledState();

  /// @brief Method SetHighlightedState, addr 0x2633a90, size 0x4, virtual true, abstract: false, final false
  inline void SetHighlightedState();

  /// @brief Method SetNormalState, addr 0x2633a8c, size 0x4, virtual true, abstract: false, final false
  inline void SetNormalState();

  /// @brief Method SetPressedState, addr 0x2633a94, size 0x4, virtual true, abstract: false, final false
  inline void SetPressedState();

  /// @brief Method SetSelectedAndHighlightedState, addr 0x2633aa0, size 0x4, virtual true, abstract: false, final false
  inline void SetSelectedAndHighlightedState();

  /// @brief Method SetSelectedState, addr 0x2633a9c, size 0x4, virtual true, abstract: false, final false
  inline void SetSelectedState();

  /// @brief Method SetState, addr 0x2633668, size 0x7c, virtual false, abstract: false, final false
  inline void SetState(::GlobalNamespace::__SelectableStateController__ViewState viewState);

  /// @brief Method TransitionToDisabledState, addr 0x2633a80, size 0x4, virtual true, abstract: false, final false
  inline void TransitionToDisabledState();

  /// @brief Method TransitionToHighlightedState, addr 0x2633a78, size 0x4, virtual true, abstract: false, final false
  inline void TransitionToHighlightedState();

  /// @brief Method TransitionToNormalState, addr 0x2633a74, size 0x4, virtual true, abstract: false, final false
  inline void TransitionToNormalState();

  /// @brief Method TransitionToPressedState, addr 0x2633a7c, size 0x4, virtual true, abstract: false, final false
  inline void TransitionToPressedState();

  /// @brief Method TransitionToSelectedAndHighlightedState, addr 0x2633a88, size 0x4, virtual true, abstract: false, final false
  inline void TransitionToSelectedAndHighlightedState();

  /// @brief Method TransitionToSelectedState, addr 0x2633a84, size 0x4, virtual true, abstract: false, final false
  inline void TransitionToSelectedState();

  constexpr ::UnityW<::GlobalNamespace::SelectableStateController> const& __cordl_internal_get__selectableStateController() const;

  constexpr ::UnityW<::GlobalNamespace::SelectableStateController>& __cordl_internal_get__selectableStateController();

  constexpr void __cordl_internal_set__selectableStateController(::UnityW<::GlobalNamespace::SelectableStateController> value);

  /// @brief Method .ctor, addr 0x2633aa4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_transition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityW<::GlobalNamespace::BaseTransitionSO> get_transition();

  /// @brief Method get_tweeningManager, addr 0x263364c, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityW<::Tweening::TimeTweeningManager> get_tweeningManager();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseStateTransition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseStateTransition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseStateTransition(BaseStateTransition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseStateTransition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseStateTransition(BaseStateTransition const&) = delete;

  /// @brief Field _selectableStateController, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SelectableStateController> ____selectableStateController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BaseStateTransition, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseStateTransition, ____selectableStateController) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BaseStateTransition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BaseStateTransition*, "", "BaseStateTransition");
