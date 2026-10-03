#pragma once
// IWYU pragma private; include "GlobalNamespace/BaseStateTransition.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::GlobalNamespace::BaseStateTransition*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BaseStateTransition*, "", "BaseStateTransition");
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

  /// @brief Method HandleSelectableStateControllerStateDidChange, addr 0x686ac58, size 0xcc, virtual false, abstract: false, final false
  inline void HandleSelectableStateControllerStateDidChange(::GlobalNamespace::SelectableStateController_ViewState state, bool animated);

  static inline ::GlobalNamespace::BaseStateTransition* New_ctor();

  /// @brief Method OnDestroy, addr 0x686abbc, size 0x9c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x686aa70, size 0x8c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x686a910, size 0xa0, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method SetDisabledState, addr 0x686ad4c, size 0x4, virtual true, abstract: false, final false
  inline void SetDisabledState();

  /// @brief Method SetHighlightedState, addr 0x686ad44, size 0x4, virtual true, abstract: false, final false
  inline void SetHighlightedState();

  /// @brief Method SetNormalState, addr 0x686ad40, size 0x4, virtual true, abstract: false, final false
  inline void SetNormalState();

  /// @brief Method SetPressedState, addr 0x686ad48, size 0x4, virtual true, abstract: false, final false
  inline void SetPressedState();

  /// @brief Method SetSelectedAndHighlightedState, addr 0x686ad54, size 0x4, virtual true, abstract: false, final false
  inline void SetSelectedAndHighlightedState();

  /// @brief Method SetSelectedState, addr 0x686ad50, size 0x4, virtual true, abstract: false, final false
  inline void SetSelectedState();

  /// @brief Method SetState, addr 0x686a888, size 0x88, virtual false, abstract: false, final false
  inline void SetState(::GlobalNamespace::SelectableStateController_ViewState viewState);

  /// @brief Method StopCurrentTransitionAnimation, addr 0x686ad3c, size 0x4, virtual true, abstract: false, final false
  inline void StopCurrentTransitionAnimation();

  /// @brief Method TransitionToDisabledState, addr 0x686ad30, size 0x4, virtual true, abstract: false, final false
  inline void TransitionToDisabledState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToHighlightedState, addr 0x686ad28, size 0x4, virtual true, abstract: false, final false
  inline void TransitionToHighlightedState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToNormalState, addr 0x686ad24, size 0x4, virtual true, abstract: false, final false
  inline void TransitionToNormalState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToPressedState, addr 0x686ad2c, size 0x4, virtual true, abstract: false, final false
  inline void TransitionToPressedState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToSelectedAndHighlightedState, addr 0x686ad38, size 0x4, virtual true, abstract: false, final false
  inline void TransitionToSelectedAndHighlightedState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToSelectedState, addr 0x686ad34, size 0x4, virtual true, abstract: false, final false
  inline void TransitionToSelectedState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  constexpr ::UnityW<::GlobalNamespace::SelectableStateController> const& __cordl_internal_get__selectableStateController() const;

  constexpr ::UnityW<::GlobalNamespace::SelectableStateController>& __cordl_internal_get__selectableStateController();

  constexpr ::GlobalNamespace::SelectableStateController_ViewState const& __cordl_internal_get__viewState() const;

  constexpr ::GlobalNamespace::SelectableStateController_ViewState& __cordl_internal_get__viewState();

  constexpr void __cordl_internal_set__selectableStateController(::UnityW<::GlobalNamespace::SelectableStateController> value);

  constexpr void __cordl_internal_set__viewState(::GlobalNamespace::SelectableStateController_ViewState value);

  /// @brief Method .ctor, addr 0x686ad58, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_transition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityW<::GlobalNamespace::BaseTransitionSO> get_transition();

  /// @brief Method get_tweeningManager, addr 0x686a870, size 0x18, virtual false, abstract: false, final false
  inline ::UnityW<::Tweening::TimeTweeningManager> get_tweeningManager();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseStateTransition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseStateTransition", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseStateTransition(BaseStateTransition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseStateTransition", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseStateTransition(BaseStateTransition const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23085 };

  /// [SerializeField]
  /// @brief Field _selectableStateController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SelectableStateController> ____selectableStateController;

  /// @brief Field _viewState, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::SelectableStateController_ViewState ____viewState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BaseStateTransition, ____selectableStateController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseStateTransition, ____viewState) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BaseStateTransition) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
