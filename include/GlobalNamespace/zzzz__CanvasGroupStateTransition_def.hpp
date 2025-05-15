#pragma once
// IWYU pragma private; include "GlobalNamespace/CanvasGroupStateTransition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseStateTransition_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CanvasGroupStateTransition)
namespace GlobalNamespace {
class BaseTransitionSO;
}
namespace GlobalNamespace {
class CanvasGroupTransitionSO;
}
namespace GlobalNamespace {
class TransitionTimingSO;
}
namespace Tweening {
class FloatTween;
}
namespace UnityEngine {
class CanvasGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class CanvasGroupStateTransition;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CanvasGroupStateTransition);
// Dependencies BaseStateTransition`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: CanvasGroupStateTransition
class CORDL_TYPE CanvasGroupStateTransition : public ::GlobalNamespace::BaseStateTransition_1<::UnityW<::UnityEngine::CanvasGroup>> {
public:
  // Declarations
  /// @brief Field _floatTween, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__floatTween, put = __cordl_internal_set__floatTween)) ::Tweening::FloatTween* _floatTween;

  /// @brief Field _transition, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__transition, put = __cordl_internal_set__transition)) ::UnityW<::GlobalNamespace::CanvasGroupTransitionSO> _transition;

  __declspec(property(get = get_transition)) ::UnityW<::GlobalNamespace::BaseTransitionSO> transition;

  static inline ::GlobalNamespace::CanvasGroupStateTransition* New_ctor();

  /// @brief Method SetDisabledState, addr 0x44d677c, size 0x28, virtual true, abstract: false, final false
  inline void SetDisabledState();

  /// @brief Method SetHighlightedState, addr 0x44d672c, size 0x28, virtual true, abstract: false, final false
  inline void SetHighlightedState();

  /// @brief Method SetNormalState, addr 0x44d6704, size 0x28, virtual true, abstract: false, final false
  inline void SetNormalState();

  /// @brief Method SetPressedState, addr 0x44d6754, size 0x28, virtual true, abstract: false, final false
  inline void SetPressedState();

  /// @brief Method SetSelectedAndHighlightedState, addr 0x44d67cc, size 0x28, virtual true, abstract: false, final false
  inline void SetSelectedAndHighlightedState();

  /// @brief Method SetSelectedState, addr 0x44d67a4, size 0x28, virtual true, abstract: false, final false
  inline void SetSelectedState();

  /// @brief Method StartTween, addr 0x44d645c, size 0x18c, virtual false, abstract: false, final false
  inline void StartTween(float_t endAlpha, ::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method StopCurrentTransitionAnimation, addr 0x44d6674, size 0x90, virtual true, abstract: false, final false
  inline void StopCurrentTransitionAnimation();

  /// @brief Method TransitionToDisabledState, addr 0x44d6620, size 0x1c, virtual true, abstract: false, final false
  inline void TransitionToDisabledState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToHighlightedState, addr 0x44d65e8, size 0x1c, virtual true, abstract: false, final false
  inline void TransitionToHighlightedState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToNormalState, addr 0x44d6440, size 0x1c, virtual true, abstract: false, final false
  inline void TransitionToNormalState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToPressedState, addr 0x44d6604, size 0x1c, virtual true, abstract: false, final false
  inline void TransitionToPressedState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToSelectedAndHighlightedState, addr 0x44d6658, size 0x1c, virtual true, abstract: false, final false
  inline void TransitionToSelectedAndHighlightedState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToSelectedState, addr 0x44d663c, size 0x1c, virtual true, abstract: false, final false
  inline void TransitionToSelectedState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method <StartTween>b__17_0, addr 0x44d683c, size 0x1c, virtual false, abstract: false, final false
  inline void _StartTween_b__17_0(float_t alpha);

  /// @brief Method <StartTween>b__17_1, addr 0x44d6858, size 0x88, virtual false, abstract: false, final false
  inline void _StartTween_b__17_1();

  constexpr ::Tweening::FloatTween* const& __cordl_internal_get__floatTween() const;

  constexpr ::Tweening::FloatTween*& __cordl_internal_get__floatTween();

  constexpr ::UnityW<::GlobalNamespace::CanvasGroupTransitionSO> const& __cordl_internal_get__transition() const;

  constexpr ::UnityW<::GlobalNamespace::CanvasGroupTransitionSO>& __cordl_internal_get__transition();

  constexpr void __cordl_internal_set__floatTween(::Tweening::FloatTween* value);

  constexpr void __cordl_internal_set__transition(::UnityW<::GlobalNamespace::CanvasGroupTransitionSO> value);

  /// @brief Method .ctor, addr 0x44d67f4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_transition, addr 0x44d6438, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BaseTransitionSO> get_transition();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CanvasGroupStateTransition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CanvasGroupStateTransition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CanvasGroupStateTransition(CanvasGroupStateTransition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CanvasGroupStateTransition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CanvasGroupStateTransition(CanvasGroupStateTransition const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18207 };

  /// @brief Field _transition, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CanvasGroupTransitionSO> ____transition;

  /// @brief Field _floatTween, offset: 0x40, size: 0x8, def value: None
  ::Tweening::FloatTween* ____floatTween;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CanvasGroupStateTransition, ____transition) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CanvasGroupStateTransition, ____floatTween) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CanvasGroupStateTransition, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CanvasGroupStateTransition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CanvasGroupStateTransition*, "", "CanvasGroupStateTransition");
