#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseStateTransition_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(GradientImageViewStateTransition)
namespace GlobalNamespace {
class BaseTransitionSO;
}
namespace GlobalNamespace {
class GradientTransitionSO;
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
// Type: ::GradientImageViewStateTransition
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GradientImageViewStateTransition*
class CORDL_TYPE GradientImageViewStateTransition : public ::GlobalNamespace::BaseStateTransition_1<::UnityW<::HMUI::ImageView>> {
public:
  // Declarations
  /// @brief Field _colorTweenA, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__colorTweenA, put = __cordl_internal_set__colorTweenA))::Tweening::ColorTween* _colorTweenA;

  /// @brief Field _colorTweenB, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__colorTweenB, put = __cordl_internal_set__colorTweenB))::Tweening::ColorTween* _colorTweenB;

  /// @brief Field _transition, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__transition, put = __cordl_internal_set__transition))::UnityW<::GlobalNamespace::GradientTransitionSO> _transition;

  __declspec(property(get = get_transition))::UnityW<::GlobalNamespace::BaseTransitionSO> transition;

  static inline ::GlobalNamespace::GradientImageViewStateTransition* New_ctor();

  /// @brief Method SetColors, addr 0x2635318, size 0x60, virtual false, abstract: false, final false
  inline void SetColors(::UnityEngine::Color startColor, ::UnityEngine::Color endColor);

  /// @brief Method SetDisabledState, addr 0x2635478, size 0x80, virtual true, abstract: false, final false
  inline void SetDisabledState();

  /// @brief Method SetHighlightedState, addr 0x2635378, size 0x80, virtual true, abstract: false, final false
  inline void SetHighlightedState();

  /// @brief Method SetNormalState, addr 0x2635298, size 0x80, virtual true, abstract: false, final false
  inline void SetNormalState();

  /// @brief Method SetPressedState, addr 0x26353f8, size 0x80, virtual true, abstract: false, final false
  inline void SetPressedState();

  /// @brief Method SetSelectedAndHighlightedState, addr 0x2635578, size 0x80, virtual true, abstract: false, final false
  inline void SetSelectedAndHighlightedState();

  /// @brief Method SetSelectedState, addr 0x26354f8, size 0x80, virtual true, abstract: false, final false
  inline void SetSelectedState();

  /// @brief Method StartTween, addr 0x26355f8, size 0x194, virtual false, abstract: false, final false
  inline void StartTween(::UnityEngine::Color startColor, ::UnityEngine::Color endColor, ::System::Action_1<::UnityEngine::Color>* tweenAction, ::System::Action* onCompleteAction,
                         ByRef<::Tweening::ColorTween*> colorTween);

  /// @brief Method StartTweens, addr 0x2634d94, size 0x20c, virtual false, abstract: false, final false
  inline void StartTweens(::UnityEngine::Color endColor1, ::UnityEngine::Color endColor2);

  /// @brief Method TransitionToDisabledState, addr 0x26350d0, size 0x80, virtual true, abstract: false, final false
  inline void TransitionToDisabledState();

  /// @brief Method TransitionToHighlightedState, addr 0x2634fa0, size 0x80, virtual true, abstract: false, final false
  inline void TransitionToHighlightedState();

  /// @brief Method TransitionToNormalState, addr 0x2634cfc, size 0x80, virtual true, abstract: false, final false
  inline void TransitionToNormalState();

  /// @brief Method TransitionToPressedState, addr 0x2635038, size 0x80, virtual true, abstract: false, final false
  inline void TransitionToPressedState();

  /// @brief Method TransitionToSelectedAndHighlightedState, addr 0x2635200, size 0x80, virtual true, abstract: false, final false
  inline void TransitionToSelectedAndHighlightedState();

  /// @brief Method TransitionToSelectedState, addr 0x2635168, size 0x80, virtual true, abstract: false, final false
  inline void TransitionToSelectedState();

  /// @brief Method <StartTweens>b__17_2, addr 0x26358e4, size 0x1c, virtual false, abstract: false, final false
  inline void _StartTweens_b__17_2(::UnityEngine::Color color);

  /// @brief Method <StartTweens>b__17_3, addr 0x2635900, size 0x1c, virtual false, abstract: false, final false
  inline void _StartTweens_b__17_3(::UnityEngine::Color color);

  /// @brief Method <StartTweens>g__Color1CompleteAction|17_0, addr 0x26357d4, size 0x88, virtual false, abstract: false, final false
  inline void _StartTweens_g__Color1CompleteAction_17_0();

  /// @brief Method <StartTweens>g__Color2CompleteAction|17_1, addr 0x263585c, size 0x88, virtual false, abstract: false, final false
  inline void _StartTweens_g__Color2CompleteAction_17_1();

  constexpr ::Tweening::ColorTween*& __cordl_internal_get__colorTweenA();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::ColorTween*> const& __cordl_internal_get__colorTweenA() const;

  constexpr ::Tweening::ColorTween*& __cordl_internal_get__colorTweenB();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::ColorTween*> const& __cordl_internal_get__colorTweenB() const;

  constexpr ::UnityW<::GlobalNamespace::GradientTransitionSO> const& __cordl_internal_get__transition() const;

  constexpr ::UnityW<::GlobalNamespace::GradientTransitionSO>& __cordl_internal_get__transition();

  constexpr void __cordl_internal_set__colorTweenA(::Tweening::ColorTween* value);

  constexpr void __cordl_internal_set__colorTweenB(::Tweening::ColorTween* value);

  constexpr void __cordl_internal_set__transition(::UnityW<::GlobalNamespace::GradientTransitionSO> value);

  /// @brief Method .ctor, addr 0x263578c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_transition, addr 0x2634cf4, size 0x8, virtual true, abstract: false, final false
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

  /// @brief Field _transition, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GradientTransitionSO> ____transition;

  /// @brief Field _colorTweenA, offset: 0x30, size: 0x8, def value: None
  ::Tweening::ColorTween* ____colorTweenA;

  /// @brief Field _colorTweenB, offset: 0x38, size: 0x8, def value: None
  ::Tweening::ColorTween* ____colorTweenB;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GradientImageViewStateTransition, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GradientImageViewStateTransition, ____transition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GradientImageViewStateTransition, ____colorTweenA) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GradientImageViewStateTransition, ____colorTweenB) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GradientImageViewStateTransition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GradientImageViewStateTransition*, "", "GradientImageViewStateTransition");
