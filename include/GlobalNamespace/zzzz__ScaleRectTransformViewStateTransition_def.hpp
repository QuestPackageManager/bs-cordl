#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseStateTransition_1_def.hpp"
CORDL_MODULE_EXPORT(ScaleRectTransformViewStateTransition)
namespace GlobalNamespace {
class BaseTransitionSO;
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
// Type: ::ScaleRectTransformViewStateTransition
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ScaleRectTransformViewStateTransition*
class CORDL_TYPE ScaleRectTransformViewStateTransition : public ::GlobalNamespace::BaseStateTransition_1<::UnityW<::UnityEngine::RectTransform>> {
public:
  // Declarations
  /// @brief Field _transition, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__transition, put = __cordl_internal_set__transition))::UnityW<::GlobalNamespace::Vector3TransitionSO> _transition;

  /// @brief Field _vectorTween, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__vectorTween, put = __cordl_internal_set__vectorTween))::Tweening::Vector3Tween* _vectorTween;

  __declspec(property(get = get_transition))::UnityW<::GlobalNamespace::BaseTransitionSO> transition;

  static inline ::GlobalNamespace::ScaleRectTransformViewStateTransition* New_ctor();

  /// @brief Method SetDisabledState, addr 0x273cf10, size 0x2c, virtual true, abstract: false, final false
  inline void SetDisabledState();

  /// @brief Method SetHighlightedState, addr 0x273ceb8, size 0x2c, virtual true, abstract: false, final false
  inline void SetHighlightedState();

  /// @brief Method SetNormalState, addr 0x273ce8c, size 0x2c, virtual true, abstract: false, final false
  inline void SetNormalState();

  /// @brief Method SetPressedState, addr 0x273cee4, size 0x2c, virtual true, abstract: false, final false
  inline void SetPressedState();

  /// @brief Method SetSelectedAndHighlightedState, addr 0x273cf68, size 0x2c, virtual true, abstract: false, final false
  inline void SetSelectedAndHighlightedState();

  /// @brief Method SetSelectedState, addr 0x273cf3c, size 0x2c, virtual true, abstract: false, final false
  inline void SetSelectedState();

  /// @brief Method StartTween, addr 0x273cbe0, size 0x20c, virtual false, abstract: false, final false
  inline void StartTween(::UnityEngine::Vector3 endScale);

  /// @brief Method TransitionToDisabledState, addr 0x273ce2c, size 0x20, virtual true, abstract: false, final false
  inline void TransitionToDisabledState();

  /// @brief Method TransitionToHighlightedState, addr 0x273cdec, size 0x20, virtual true, abstract: false, final false
  inline void TransitionToHighlightedState();

  /// @brief Method TransitionToNormalState, addr 0x273cbc0, size 0x20, virtual true, abstract: false, final false
  inline void TransitionToNormalState();

  /// @brief Method TransitionToPressedState, addr 0x273ce0c, size 0x20, virtual true, abstract: false, final false
  inline void TransitionToPressedState();

  /// @brief Method TransitionToSelectedAndHighlightedState, addr 0x273ce6c, size 0x20, virtual true, abstract: false, final false
  inline void TransitionToSelectedAndHighlightedState();

  /// @brief Method TransitionToSelectedState, addr 0x273ce4c, size 0x20, virtual true, abstract: false, final false
  inline void TransitionToSelectedState();

  /// @brief Method <StartTween>b__16_0, addr 0x273cfdc, size 0x1c, virtual false, abstract: false, final false
  inline void _StartTween_b__16_0(::UnityEngine::Vector3 pos);

  /// @brief Method <StartTween>b__16_1, addr 0x273cff8, size 0x88, virtual false, abstract: false, final false
  inline void _StartTween_b__16_1();

  constexpr ::UnityW<::GlobalNamespace::Vector3TransitionSO> const& __cordl_internal_get__transition() const;

  constexpr ::UnityW<::GlobalNamespace::Vector3TransitionSO>& __cordl_internal_get__transition();

  constexpr ::Tweening::Vector3Tween*& __cordl_internal_get__vectorTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Vector3Tween*> const& __cordl_internal_get__vectorTween() const;

  constexpr void __cordl_internal_set__transition(::UnityW<::GlobalNamespace::Vector3TransitionSO> value);

  constexpr void __cordl_internal_set__vectorTween(::Tweening::Vector3Tween* value);

  /// @brief Method .ctor, addr 0x273cf94, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_transition, addr 0x273cbb8, size 0x8, virtual true, abstract: false, final false
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

  /// @brief Field _transition, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Vector3TransitionSO> ____transition;

  /// @brief Field _vectorTween, offset: 0x30, size: 0x8, def value: None
  ::Tweening::Vector3Tween* ____vectorTween;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScaleRectTransformViewStateTransition, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ScaleRectTransformViewStateTransition, ____transition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScaleRectTransformViewStateTransition, ____vectorTween) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ScaleRectTransformViewStateTransition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScaleRectTransformViewStateTransition*, "", "ScaleRectTransformViewStateTransition");
