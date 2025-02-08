#pragma once
// IWYU pragma private; include "GlobalNamespace/GradientImageViewStateTransition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseStateTransition_1_def.hpp"
CORDL_MODULE_EXPORT(GradientImageViewStateTransition)
namespace GlobalNamespace {
class BaseTransitionSO;
}
namespace GlobalNamespace {
class GradientTransitionSO;
}
namespace GlobalNamespace {
class TransitionTimingSO;
}
namespace HMUI {
class ImageView;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace Tweening {
class ColorTween;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class GradientImageViewStateTransition;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GradientImageViewStateTransition);
// Dependencies BaseStateTransition`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: GradientImageViewStateTransition
class CORDL_TYPE GradientImageViewStateTransition : public ::GlobalNamespace::BaseStateTransition_1<::UnityW<::HMUI::ImageView>> {
public:
  // Declarations
  /// @brief Field _colorTweenA, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__colorTweenA, put = __cordl_internal_set__colorTweenA)) ::Tweening::ColorTween* _colorTweenA;

  /// @brief Field _colorTweenB, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__colorTweenB, put = __cordl_internal_set__colorTweenB)) ::Tweening::ColorTween* _colorTweenB;

  /// @brief Field _transition, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__transition, put = __cordl_internal_set__transition)) ::UnityW<::GlobalNamespace::GradientTransitionSO> _transition;

  __declspec(property(get = get_transition)) ::UnityW<::GlobalNamespace::BaseTransitionSO> transition;

  static inline ::GlobalNamespace::GradientImageViewStateTransition* New_ctor();

  /// @brief Method SetColors, addr 0x44dc298, size 0x70, virtual false, abstract: false, final false
  inline void SetColors(::UnityEngine::Color startColor, ::UnityEngine::Color endColor);

  /// @brief Method SetDisabledState, addr 0x44dc408, size 0x80, virtual true, abstract: false, final false
  inline void SetDisabledState();

  /// @brief Method SetHighlightedState, addr 0x44dc308, size 0x80, virtual true, abstract: false, final false
  inline void SetHighlightedState();

  /// @brief Method SetNormalState, addr 0x44dc218, size 0x80, virtual true, abstract: false, final false
  inline void SetNormalState();

  /// @brief Method SetPressedState, addr 0x44dc388, size 0x80, virtual true, abstract: false, final false
  inline void SetPressedState();

  /// @brief Method SetSelectedAndHighlightedState, addr 0x44dc508, size 0x80, virtual true, abstract: false, final false
  inline void SetSelectedAndHighlightedState();

  /// @brief Method SetSelectedState, addr 0x44dc488, size 0x80, virtual true, abstract: false, final false
  inline void SetSelectedState();

  /// @brief Method StartTween, addr 0x44dc588, size 0x14c, virtual false, abstract: false, final false
  inline void StartTween(::UnityEngine::Color startColor, ::UnityEngine::Color endColor, ::System::Action_1<::UnityEngine::Color>* tweenAction, ::System::Action* onCompleteAction,
                         ::GlobalNamespace::TransitionTimingSO* transitionTiming, ::ByRef<::Tweening::ColorTween*> colorTween);

  /// @brief Method StartTweens, addr 0x44dbbe0, size 0x228, virtual false, abstract: false, final false
  inline void StartTweens(::UnityEngine::Color endColor1, ::UnityEngine::Color endColor2, ::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method StopCurrentTransitionAnimation, addr 0x44dc150, size 0xc8, virtual true, abstract: false, final false
  inline void StopCurrentTransitionAnimation();

  /// @brief Method TransitionToDisabledState, addr 0x44dbf58, size 0x90, virtual true, abstract: false, final false
  inline void TransitionToDisabledState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToHighlightedState, addr 0x44dbe08, size 0x90, virtual true, abstract: false, final false
  inline void TransitionToHighlightedState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToNormalState, addr 0x44dbb38, size 0x90, virtual true, abstract: false, final false
  inline void TransitionToNormalState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToPressedState, addr 0x44dbeb0, size 0x90, virtual true, abstract: false, final false
  inline void TransitionToPressedState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToSelectedAndHighlightedState, addr 0x44dc0a8, size 0x90, virtual true, abstract: false, final false
  inline void TransitionToSelectedAndHighlightedState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToSelectedState, addr 0x44dc000, size 0x90, virtual true, abstract: false, final false
  inline void TransitionToSelectedState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method <StartTweens>b__18_2, addr 0x44dc82c, size 0x24, virtual false, abstract: false, final false
  inline void _StartTweens_b__18_2(::UnityEngine::Color color);

  /// @brief Method <StartTweens>b__18_3, addr 0x44dc850, size 0x24, virtual false, abstract: false, final false
  inline void _StartTweens_b__18_3(::UnityEngine::Color color);

  /// @brief Method <StartTweens>g__Color1CompleteAction|18_0, addr 0x44dc71c, size 0x88, virtual false, abstract: false, final false
  inline void _StartTweens_g__Color1CompleteAction_18_0();

  /// @brief Method <StartTweens>g__Color2CompleteAction|18_1, addr 0x44dc7a4, size 0x88, virtual false, abstract: false, final false
  inline void _StartTweens_g__Color2CompleteAction_18_1();

  constexpr ::Tweening::ColorTween* const& __cordl_internal_get__colorTweenA() const;

  constexpr ::Tweening::ColorTween*& __cordl_internal_get__colorTweenA();

  constexpr ::Tweening::ColorTween* const& __cordl_internal_get__colorTweenB() const;

  constexpr ::Tweening::ColorTween*& __cordl_internal_get__colorTweenB();

  constexpr ::UnityW<::GlobalNamespace::GradientTransitionSO> const& __cordl_internal_get__transition() const;

  constexpr ::UnityW<::GlobalNamespace::GradientTransitionSO>& __cordl_internal_get__transition();

  constexpr void __cordl_internal_set__colorTweenA(::Tweening::ColorTween* value);

  constexpr void __cordl_internal_set__colorTweenB(::Tweening::ColorTween* value);

  constexpr void __cordl_internal_set__transition(::UnityW<::GlobalNamespace::GradientTransitionSO> value);

  /// @brief Method .ctor, addr 0x44dc6d4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_transition, addr 0x44dbb30, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BaseTransitionSO> get_transition();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GradientImageViewStateTransition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GradientImageViewStateTransition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GradientImageViewStateTransition(GradientImageViewStateTransition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GradientImageViewStateTransition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GradientImageViewStateTransition(GradientImageViewStateTransition const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18204 };

  /// @brief Field _transition, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GradientTransitionSO> ____transition;

  /// @brief Field _colorTweenA, offset: 0x40, size: 0x8, def value: None
  ::Tweening::ColorTween* ____colorTweenA;

  /// @brief Field _colorTweenB, offset: 0x48, size: 0x8, def value: None
  ::Tweening::ColorTween* ____colorTweenB;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GradientImageViewStateTransition, ____transition) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GradientImageViewStateTransition, ____colorTweenA) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GradientImageViewStateTransition, ____colorTweenB) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GradientImageViewStateTransition, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GradientImageViewStateTransition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GradientImageViewStateTransition*, "", "GradientImageViewStateTransition");
