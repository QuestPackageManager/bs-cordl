#pragma once
// IWYU pragma private; include "GlobalNamespace/ScaleRectTransformViewStateTransition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseStateTransition_1_def.hpp"
CORDL_MODULE_EXPORT(ScaleRectTransformViewStateTransition)
namespace GlobalNamespace {
class BaseTransitionSO;
}
namespace GlobalNamespace {
class TransitionTimingSO;
}
namespace GlobalNamespace {
class Vector3TransitionSO;
}
namespace Tweening {
class Vector3Tween;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ScaleRectTransformViewStateTransition;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ScaleRectTransformViewStateTransition);
// Dependencies BaseStateTransition`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScaleRectTransformViewStateTransition
class CORDL_TYPE ScaleRectTransformViewStateTransition : public ::GlobalNamespace::BaseStateTransition_1<::UnityW<::UnityEngine::RectTransform>> {
public:
  // Declarations
  /// @brief Field _transition, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__transition, put = __cordl_internal_set__transition)) ::UnityW<::GlobalNamespace::Vector3TransitionSO> _transition;

  /// @brief Field _vectorTween, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__vectorTween, put = __cordl_internal_set__vectorTween)) ::Tweening::Vector3Tween* _vectorTween;

  __declspec(property(get = get_transition)) ::UnityW<::GlobalNamespace::BaseTransitionSO> transition;

  static inline ::GlobalNamespace::ScaleRectTransformViewStateTransition* New_ctor();

  /// @brief Method SetDisabledState, addr 0x628fbe4, size 0x2c, virtual true, abstract: false, final false
  inline void SetDisabledState();

  /// @brief Method SetHighlightedState, addr 0x628fb8c, size 0x2c, virtual true, abstract: false, final false
  inline void SetHighlightedState();

  /// @brief Method SetNormalState, addr 0x628fb60, size 0x2c, virtual true, abstract: false, final false
  inline void SetNormalState();

  /// @brief Method SetPressedState, addr 0x628fbb8, size 0x2c, virtual true, abstract: false, final false
  inline void SetPressedState();

  /// @brief Method SetSelectedAndHighlightedState, addr 0x628fc3c, size 0x2c, virtual true, abstract: false, final false
  inline void SetSelectedAndHighlightedState();

  /// @brief Method SetSelectedState, addr 0x628fc10, size 0x2c, virtual true, abstract: false, final false
  inline void SetSelectedState();

  /// @brief Method StartTween, addr 0x628f804, size 0x238, virtual false, abstract: false, final false
  inline void StartTween(::UnityEngine::Vector3 endScale, ::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method StopCurrentTransitionAnimation, addr 0x628fac8, size 0x98, virtual true, abstract: false, final false
  inline void StopCurrentTransitionAnimation();

  /// @brief Method TransitionToDisabledState, addr 0x628fa74, size 0x1c, virtual true, abstract: false, final false
  inline void TransitionToDisabledState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToHighlightedState, addr 0x628fa3c, size 0x1c, virtual true, abstract: false, final false
  inline void TransitionToHighlightedState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToNormalState, addr 0x628f7e8, size 0x1c, virtual true, abstract: false, final false
  inline void TransitionToNormalState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToPressedState, addr 0x628fa58, size 0x1c, virtual true, abstract: false, final false
  inline void TransitionToPressedState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToSelectedAndHighlightedState, addr 0x628faac, size 0x1c, virtual true, abstract: false, final false
  inline void TransitionToSelectedAndHighlightedState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToSelectedState, addr 0x628fa90, size 0x1c, virtual true, abstract: false, final false
  inline void TransitionToSelectedState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method <StartTween>b__17_0, addr 0x628fcac, size 0x18, virtual false, abstract: false, final false
  inline void _StartTween_b__17_0(::UnityEngine::Vector3 pos);

  /// @brief Method <StartTween>b__17_1, addr 0x628fcc4, size 0x90, virtual false, abstract: false, final false
  inline void _StartTween_b__17_1();

  constexpr ::UnityW<::GlobalNamespace::Vector3TransitionSO> const& __cordl_internal_get__transition() const;

  constexpr ::UnityW<::GlobalNamespace::Vector3TransitionSO>& __cordl_internal_get__transition();

  constexpr ::Tweening::Vector3Tween* const& __cordl_internal_get__vectorTween() const;

  constexpr ::Tweening::Vector3Tween*& __cordl_internal_get__vectorTween();

  constexpr void __cordl_internal_set__transition(::UnityW<::GlobalNamespace::Vector3TransitionSO> value);

  constexpr void __cordl_internal_set__vectorTween(::Tweening::Vector3Tween* value);

  /// @brief Method .ctor, addr 0x628fc68, size 0x44, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_transition, addr 0x628f7e0, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BaseTransitionSO> get_transition();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScaleRectTransformViewStateTransition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScaleRectTransformViewStateTransition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScaleRectTransformViewStateTransition(ScaleRectTransformViewStateTransition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScaleRectTransformViewStateTransition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScaleRectTransformViewStateTransition(ScaleRectTransformViewStateTransition const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22118 };

  /// @brief Field _transition, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Vector3TransitionSO> ____transition;

  /// @brief Field _vectorTween, offset: 0x40, size: 0x8, def value: None
  ::Tweening::Vector3Tween* ____vectorTween;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScaleRectTransformViewStateTransition, ____transition) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScaleRectTransformViewStateTransition, ____vectorTween) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScaleRectTransformViewStateTransition, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ScaleRectTransformViewStateTransition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScaleRectTransformViewStateTransition*, "", "ScaleRectTransformViewStateTransition");
