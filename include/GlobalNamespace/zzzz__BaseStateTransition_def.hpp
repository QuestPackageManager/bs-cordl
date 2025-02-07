#pragma once
// IWYU pragma private; include "GlobalNamespace/BaseStateTransition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SelectableStateController_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BaseStateTransition)
namespace GlobalNamespace {
class BaseTransitionSO;
}
namespace GlobalNamespace {
struct SelectableStateController_ViewState;
}
namespace GlobalNamespace {
class SelectableStateController;
}
namespace GlobalNamespace {
class TransitionTimingSO;
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
// Dependencies SelectableStateController::ViewState, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BaseStateTransition
class CORDL_TYPE BaseStateTransition : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _selectableStateController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__selectableStateController, put = __cordl_internal_set__selectableStateController)) ::UnityW<::GlobalNamespace::SelectableStateController>
      _selectableStateController;

  /// @brief Field _viewState, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__viewState, put = __cordl_internal_set__viewState)) ::GlobalNamespace::SelectableStateController_ViewState _viewState;

  __declspec(property(get = get_transition)) ::UnityW<::GlobalNamespace::BaseTransitionSO> transition;

  __declspec(property(get = get_tweeningManager)) ::UnityW<::Tweening::TimeTweeningManager> tweeningManager;

  /// @brief Method HandleSelectableStateControllerStateDidChange, addr 0x44da7e4, size 0xb4, virtual false, abstract: false, final false
  inline void HandleSelectableStateControllerStateDidChange(::GlobalNamespace::SelectableStateController_ViewState state, bool animated);

  static inline ::GlobalNamespace::BaseStateTransition* New_ctor();

  /// @brief Method OnDestroy, addr 0x44da74c, size 0x98, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x44da610, size 0x8c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x44da4c0, size 0xa0, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method SetDisabledState, addr 0x44da8c0, size 0x4, virtual true, abstract: false, final false
  inline void SetDisabledState();

  /// @brief Method SetHighlightedState, addr 0x44da8b8, size 0x4, virtual true, abstract: false, final false
  inline void SetHighlightedState();

  /// @brief Method SetNormalState, addr 0x44da8b4, size 0x4, virtual true, abstract: false, final false
  inline void SetNormalState();

  /// @brief Method SetPressedState, addr 0x44da8bc, size 0x4, virtual true, abstract: false, final false
  inline void SetPressedState();

  /// @brief Method SetSelectedAndHighlightedState, addr 0x44da8c8, size 0x4, virtual true, abstract: false, final false
  inline void SetSelectedAndHighlightedState();

  /// @brief Method SetSelectedState, addr 0x44da8c4, size 0x4, virtual true, abstract: false, final false
  inline void SetSelectedState();

  /// @brief Method SetState, addr 0x44da43c, size 0x84, virtual false, abstract: false, final false
  inline void SetState(::GlobalNamespace::SelectableStateController_ViewState viewState);

  /// @brief Method StopCurrentTransitionAnimation, addr 0x44da8b0, size 0x4, virtual true, abstract: false, final false
  inline void StopCurrentTransitionAnimation();

  /// @brief Method TransitionToDisabledState, addr 0x44da8a4, size 0x4, virtual true, abstract: false, final false
  inline void TransitionToDisabledState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToHighlightedState, addr 0x44da89c, size 0x4, virtual true, abstract: false, final false
  inline void TransitionToHighlightedState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToNormalState, addr 0x44da898, size 0x4, virtual true, abstract: false, final false
  inline void TransitionToNormalState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToPressedState, addr 0x44da8a0, size 0x4, virtual true, abstract: false, final false
  inline void TransitionToPressedState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToSelectedAndHighlightedState, addr 0x44da8ac, size 0x4, virtual true, abstract: false, final false
  inline void TransitionToSelectedAndHighlightedState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToSelectedState, addr 0x44da8a8, size 0x4, virtual true, abstract: false, final false
  inline void TransitionToSelectedState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  constexpr ::UnityW<::GlobalNamespace::SelectableStateController> const& __cordl_internal_get__selectableStateController() const;

  constexpr ::UnityW<::GlobalNamespace::SelectableStateController>& __cordl_internal_get__selectableStateController();

  constexpr ::GlobalNamespace::SelectableStateController_ViewState const& __cordl_internal_get__viewState() const;

  constexpr ::GlobalNamespace::SelectableStateController_ViewState& __cordl_internal_get__viewState();

  constexpr void __cordl_internal_set__selectableStateController(::UnityW<::GlobalNamespace::SelectableStateController> value);

  constexpr void __cordl_internal_set__viewState(::GlobalNamespace::SelectableStateController_ViewState value);

  /// @brief Method .ctor, addr 0x44da8cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_transition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BaseTransitionSO> get_transition();

  /// @brief Method get_tweeningManager, addr 0x44da420, size 0x1c, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18197 };

  /// @brief Field _selectableStateController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SelectableStateController> ____selectableStateController;

  /// @brief Field _viewState, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::SelectableStateController_ViewState ____viewState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BaseStateTransition, ____selectableStateController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseStateTransition, ____viewState) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BaseStateTransition, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BaseStateTransition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BaseStateTransition*, "", "BaseStateTransition");
