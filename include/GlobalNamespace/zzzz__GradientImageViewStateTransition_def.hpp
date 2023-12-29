#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseStateTransition_1_def.hpp"
#include "HMUI/zzzz__ImageView_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(GradientImageViewStateTransition)
namespace GlobalNamespace {
class BaseTransitionSO;
}
namespace GlobalNamespace {
class GradientTransitionSO;
}
namespace Tweening {
class ColorTween;
}
namespace UnityEngine {
struct Color;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13744)), TypeDefinitionIndex(TypeDefinitionIndex(5548)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5548), inst: 908
// })} Self: TypeDefinitionIndex(TypeDefinitionIndex(5557)) CS Name: ::GradientImageViewStateTransition*
class CORDL_TYPE GradientImageViewStateTransition : public ::GlobalNamespace::BaseStateTransition_1<::HMUI::ImageView*> {
public:
  // Declarations
  /// @brief Field _transition, offset 0x28, size 0x8
  __declspec(property(get = __get__transition, put = __set__transition))::GlobalNamespace::GradientTransitionSO* _transition;

  /// @brief Field _colorTweenA, offset 0x30, size 0x8
  __declspec(property(get = __get__colorTweenA, put = __set__colorTweenA))::Tweening::ColorTween* _colorTweenA;

  /// @brief Field _colorTweenB, offset 0x38, size 0x8
  __declspec(property(get = __get__colorTweenB, put = __set__colorTweenB))::Tweening::ColorTween* _colorTweenB;

  __declspec(property(get = get_transition))::GlobalNamespace::BaseTransitionSO* transition;

  constexpr ::GlobalNamespace::GradientTransitionSO*& __get__transition();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GradientTransitionSO*> const& __get__transition() const;

  constexpr void __set__transition(::GlobalNamespace::GradientTransitionSO* value);

  constexpr ::Tweening::ColorTween*& __get__colorTweenA();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::ColorTween*> const& __get__colorTweenA() const;

  constexpr void __set__colorTweenA(::Tweening::ColorTween* value);

  constexpr ::Tweening::ColorTween*& __get__colorTweenB();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::ColorTween*> const& __get__colorTweenB() const;

  constexpr void __set__colorTweenB(::Tweening::ColorTween* value);

  /// @brief Method get_transition addr 0x213b934 size 0x8 virtual true final false
  inline ::GlobalNamespace::BaseTransitionSO* get_transition();

  /// @brief Method TransitionToNormalState addr 0x213b93c size 0x80 virtual true final false
  inline void TransitionToNormalState();

  /// @brief Method TransitionToHighlightedState addr 0x213bbe0 size 0x80 virtual true final false
  inline void TransitionToHighlightedState();

  /// @brief Method TransitionToPressedState addr 0x213bc78 size 0x80 virtual true final false
  inline void TransitionToPressedState();

  /// @brief Method TransitionToDisabledState addr 0x213bd10 size 0x80 virtual true final false
  inline void TransitionToDisabledState();

  /// @brief Method TransitionToSelectedState addr 0x213bda8 size 0x80 virtual true final false
  inline void TransitionToSelectedState();

  /// @brief Method TransitionToSelectedAndHighlightedState addr 0x213be40 size 0x80 virtual true final false
  inline void TransitionToSelectedAndHighlightedState();

  /// @brief Method SetNormalState addr 0x213bed8 size 0x80 virtual true final false
  inline void SetNormalState();

  /// @brief Method SetHighlightedState addr 0x213bfb8 size 0x80 virtual true final false
  inline void SetHighlightedState();

  /// @brief Method SetPressedState addr 0x213c038 size 0x80 virtual true final false
  inline void SetPressedState();

  /// @brief Method SetDisabledState addr 0x213c0b8 size 0x80 virtual true final false
  inline void SetDisabledState();

  /// @brief Method SetSelectedState addr 0x213c138 size 0x80 virtual true final false
  inline void SetSelectedState();

  /// @brief Method SetSelectedAndHighlightedState addr 0x213c1b8 size 0x80 virtual true final false
  inline void SetSelectedAndHighlightedState();

  /// @brief Method StartTweens addr 0x213b9d4 size 0x20c virtual false final false
  inline void StartTweens(::UnityEngine::Color endColor1, ::UnityEngine::Color endColor2);

  /// @brief Method StartTween addr 0x213c238 size 0x194 virtual false final false
  inline void StartTween(::UnityEngine::Color startColor, ::UnityEngine::Color endColor, ::System::Action_1<::UnityEngine::Color>* tweenAction, ::System::Action* onCompleteAction,
                         ByRef<::Tweening::ColorTween*> colorTween);

  /// @brief Method SetColors addr 0x213bf58 size 0x60 virtual false final false
  inline void SetColors(::UnityEngine::Color startColor, ::UnityEngine::Color endColor);

  static inline ::GlobalNamespace::GradientImageViewStateTransition* New_ctor();

  /// @brief Method .ctor addr 0x213c3cc size 0x48 virtual false final false
  inline void _ctor();

  /// @brief Method <StartTweens>g__Color1CompleteAction|17_0 addr 0x213c414 size 0x88 virtual false final false
  inline void _StartTweens_g__Color1CompleteAction_17_0();

  /// @brief Method <StartTweens>g__Color2CompleteAction|17_1 addr 0x213c49c size 0x88 virtual false final false
  inline void _StartTweens_g__Color2CompleteAction_17_1();

  /// @brief Method <StartTweens>b__17_2 addr 0x213c524 size 0x1c virtual false final false
  inline void _StartTweens_b__17_2(::UnityEngine::Color color);

  /// @brief Method <StartTweens>b__17_3 addr 0x213c540 size 0x1c virtual false final false
  inline void _StartTweens_b__17_3(::UnityEngine::Color color);

  // Ctor Parameters [CppParam { name: "", ty: "GradientImageViewStateTransition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GradientImageViewStateTransition(GradientImageViewStateTransition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GradientImageViewStateTransition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GradientImageViewStateTransition(GradientImageViewStateTransition const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GradientImageViewStateTransition();

public:
  /// @brief Field _transition, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::GradientTransitionSO* ____transition;

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
