#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseStateTransition_1_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CanvasGroupStateTransition)
namespace GlobalNamespace {
class BaseTransitionSO;
}
namespace GlobalNamespace {
class CanvasGroupTransitionSO;
}
namespace Tweening {
class FloatTween;
}
// Forward declare root types
namespace GlobalNamespace {
class CanvasGroupStateTransition;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CanvasGroupStateTransition);
// Type: ::CanvasGroupStateTransition
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15666)), TypeDefinitionIndex(TypeDefinitionIndex(5442)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5442), inst: 922
// })} Self: TypeDefinitionIndex(TypeDefinitionIndex(5444)) CS Name: ::CanvasGroupStateTransition*
class CORDL_TYPE CanvasGroupStateTransition : public ::GlobalNamespace::BaseStateTransition_1<::UnityEngine::CanvasGroup*> {
public:
  // Declarations
  /// @brief Field _transition, offset 0x28, size 0x8
  __declspec(property(get = __get__transition, put = __set__transition))::GlobalNamespace::CanvasGroupTransitionSO* _transition;

  /// @brief Field _floatTween, offset 0x30, size 0x8
  __declspec(property(get = __get__floatTween, put = __set__floatTween))::Tweening::FloatTween* _floatTween;

  __declspec(property(get = get_transition))::GlobalNamespace::BaseTransitionSO* transition;

  constexpr ::GlobalNamespace::CanvasGroupTransitionSO*& __get__transition();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CanvasGroupTransitionSO*> const& __get__transition() const;

  constexpr void __set__transition(::GlobalNamespace::CanvasGroupTransitionSO* value);

  constexpr ::Tweening::FloatTween*& __get__floatTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& __get__floatTween() const;

  constexpr void __set__floatTween(::Tweening::FloatTween* value);

  /// @brief Method get_transition, addr 0x227ce1c, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BaseTransitionSO* get_transition();

  /// @brief Method TransitionToNormalState, addr 0x227ce24, size 0x1c, virtual true, abstract: false, final false
  inline void TransitionToNormalState();

  /// @brief Method TransitionToHighlightedState, addr 0x227d01c, size 0x1c, virtual true, abstract: false, final false
  inline void TransitionToHighlightedState();

  /// @brief Method TransitionToPressedState, addr 0x227d038, size 0x1c, virtual true, abstract: false, final false
  inline void TransitionToPressedState();

  /// @brief Method TransitionToDisabledState, addr 0x227d054, size 0x1c, virtual true, abstract: false, final false
  inline void TransitionToDisabledState();

  /// @brief Method TransitionToSelectedState, addr 0x227d070, size 0x1c, virtual true, abstract: false, final false
  inline void TransitionToSelectedState();

  /// @brief Method TransitionToSelectedAndHighlightedState, addr 0x227d08c, size 0x1c, virtual true, abstract: false, final false
  inline void TransitionToSelectedAndHighlightedState();

  /// @brief Method SetNormalState, addr 0x227d0a8, size 0x28, virtual true, abstract: false, final false
  inline void SetNormalState();

  /// @brief Method SetHighlightedState, addr 0x227d0d0, size 0x28, virtual true, abstract: false, final false
  inline void SetHighlightedState();

  /// @brief Method SetPressedState, addr 0x227d0f8, size 0x28, virtual true, abstract: false, final false
  inline void SetPressedState();

  /// @brief Method SetDisabledState, addr 0x227d120, size 0x28, virtual true, abstract: false, final false
  inline void SetDisabledState();

  /// @brief Method SetSelectedState, addr 0x227d148, size 0x28, virtual true, abstract: false, final false
  inline void SetSelectedState();

  /// @brief Method SetSelectedAndHighlightedState, addr 0x227d170, size 0x28, virtual true, abstract: false, final false
  inline void SetSelectedAndHighlightedState();

  /// @brief Method StartTween, addr 0x227ce40, size 0x1dc, virtual false, abstract: false, final false
  inline void StartTween(float_t endAlpha);

  static inline ::GlobalNamespace::CanvasGroupStateTransition* New_ctor();

  /// @brief Method .ctor, addr 0x227d198, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <StartTween>b__16_0, addr 0x227d1e0, size 0x1c, virtual false, abstract: false, final false
  inline void _StartTween_b__16_0(float_t alpha);

  /// @brief Method <StartTween>b__16_1, addr 0x227d1fc, size 0x88, virtual false, abstract: false, final false
  inline void _StartTween_b__16_1();

  // Ctor Parameters [CppParam { name: "", ty: "CanvasGroupStateTransition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CanvasGroupStateTransition(CanvasGroupStateTransition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CanvasGroupStateTransition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CanvasGroupStateTransition(CanvasGroupStateTransition const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CanvasGroupStateTransition();

public:
  /// @brief Field _transition, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::CanvasGroupTransitionSO* ____transition;

  /// @brief Field _floatTween, offset: 0x30, size: 0x8, def value: None
  ::Tweening::FloatTween* ____floatTween;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CanvasGroupStateTransition, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CanvasGroupStateTransition, ____transition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CanvasGroupStateTransition, ____floatTween) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CanvasGroupStateTransition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CanvasGroupStateTransition*, "", "CanvasGroupStateTransition");
