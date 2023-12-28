#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseStateTransition_1_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
CORDL_MODULE_EXPORT(ScaleRectTransformViewStateTransition)
namespace Tweening {
class Vector3Tween;
}
namespace GlobalNamespace {
class Vector3TransitionSO;
}
namespace GlobalNamespace {
class BaseTransitionSO;
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
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5442), inst: 926 }), TypeDefinitionIndex(TypeDefinitionIndex(5442)),
// TypeDefinitionIndex(TypeDefinitionIndex(10282))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5454)) CS Name: ::ScaleRectTransformViewStateTransition*
class CORDL_TYPE ScaleRectTransformViewStateTransition : public ::GlobalNamespace::BaseStateTransition_1<::UnityEngine::RectTransform*> {
public:
  // Declarations
  /// @brief Field _transition, offset 0x28, size 0x8
  __declspec(property(get = __get__transition, put = __set__transition))::GlobalNamespace::Vector3TransitionSO* _transition;

  /// @brief Field _vectorTween, offset 0x30, size 0x8
  __declspec(property(get = __get__vectorTween, put = __set__vectorTween))::Tweening::Vector3Tween* _vectorTween;

  __declspec(property(get = get_transition))::GlobalNamespace::BaseTransitionSO* transition;

  constexpr ::GlobalNamespace::Vector3TransitionSO*& __get__transition();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3TransitionSO*> const& __get__transition() const;

  constexpr void __set__transition(::GlobalNamespace::Vector3TransitionSO* value);

  constexpr ::Tweening::Vector3Tween*& __get__vectorTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Vector3Tween*> const& __get__vectorTween() const;

  constexpr void __set__vectorTween(::Tweening::Vector3Tween* value);

  /// @brief Method get_transition addr 0x227f100 size 0x8 virtual true final false
  inline ::GlobalNamespace::BaseTransitionSO* get_transition();

  /// @brief Method TransitionToNormalState addr 0x227f108 size 0x20 virtual true final false
  inline void TransitionToNormalState();

  /// @brief Method TransitionToHighlightedState addr 0x227f334 size 0x20 virtual true final false
  inline void TransitionToHighlightedState();

  /// @brief Method TransitionToPressedState addr 0x227f354 size 0x20 virtual true final false
  inline void TransitionToPressedState();

  /// @brief Method TransitionToDisabledState addr 0x227f374 size 0x20 virtual true final false
  inline void TransitionToDisabledState();

  /// @brief Method TransitionToSelectedState addr 0x227f394 size 0x20 virtual true final false
  inline void TransitionToSelectedState();

  /// @brief Method TransitionToSelectedAndHighlightedState addr 0x227f3b4 size 0x20 virtual true final false
  inline void TransitionToSelectedAndHighlightedState();

  /// @brief Method SetNormalState addr 0x227f3d4 size 0x2c virtual true final false
  inline void SetNormalState();

  /// @brief Method SetHighlightedState addr 0x227f400 size 0x2c virtual true final false
  inline void SetHighlightedState();

  /// @brief Method SetPressedState addr 0x227f42c size 0x2c virtual true final false
  inline void SetPressedState();

  /// @brief Method SetDisabledState addr 0x227f458 size 0x2c virtual true final false
  inline void SetDisabledState();

  /// @brief Method SetSelectedState addr 0x227f484 size 0x2c virtual true final false
  inline void SetSelectedState();

  /// @brief Method SetSelectedAndHighlightedState addr 0x227f4b0 size 0x2c virtual true final false
  inline void SetSelectedAndHighlightedState();

  /// @brief Method StartTween addr 0x227f128 size 0x20c virtual false final false
  inline void StartTween(::UnityEngine::Vector3 endScale);

  static inline ::GlobalNamespace::ScaleRectTransformViewStateTransition* New_ctor();

  /// @brief Method .ctor addr 0x227f4dc size 0x48 virtual false final false
  inline void _ctor();

  /// @brief Method <StartTween>b__16_0 addr 0x227f524 size 0x1c virtual false final false
  inline void _StartTween_b__16_0(::UnityEngine::Vector3 pos);

  /// @brief Method <StartTween>b__16_1 addr 0x227f540 size 0x88 virtual false final false
  inline void _StartTween_b__16_1();

  // Ctor Parameters [CppParam { name: "", ty: "ScaleRectTransformViewStateTransition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScaleRectTransformViewStateTransition(ScaleRectTransformViewStateTransition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScaleRectTransformViewStateTransition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScaleRectTransformViewStateTransition(ScaleRectTransformViewStateTransition const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScaleRectTransformViewStateTransition();

public:
  /// @brief Field _transition, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::Vector3TransitionSO* ____transition;

  /// @brief Field _vectorTween, offset: 0x30, size: 0x8, def value: None
  ::Tweening::Vector3Tween* ____vectorTween;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScaleRectTransformViewStateTransition, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ScaleRectTransformViewStateTransition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScaleRectTransformViewStateTransition*, "", "ScaleRectTransformViewStateTransition");
