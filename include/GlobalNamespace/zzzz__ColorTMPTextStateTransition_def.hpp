#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorTMPTextStateTransition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseStateTransition_1_def.hpp"
CORDL_MODULE_EXPORT(ColorTMPTextStateTransition)
namespace GlobalNamespace {
class BaseTransitionSO;
}
namespace GlobalNamespace {
class ColorTransitionSO;
}
namespace TMPro {
class TMP_Text;
}
namespace Tweening {
class ColorTween;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorTMPTextStateTransition;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorTMPTextStateTransition);
// Type: ::ColorTMPTextStateTransition
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ColorTMPTextStateTransition*
class CORDL_TYPE ColorTMPTextStateTransition : public ::GlobalNamespace::BaseStateTransition_1<::UnityW<::TMPro::TMP_Text>> {
public:
  // Declarations
  /// @brief Field _colorTween, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__colorTween, put = __cordl_internal_set__colorTween))::Tweening::ColorTween* _colorTween;

  /// @brief Field _transition, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__transition, put = __cordl_internal_set__transition))::UnityW<::GlobalNamespace::ColorTransitionSO> _transition;

  __declspec(property(get = get_transition))::UnityW<::GlobalNamespace::BaseTransitionSO> transition;

  static inline ::GlobalNamespace::ColorTMPTextStateTransition* New_ctor();

  /// @brief Method SetDisabledState, addr 0x273b75c, size 0x3c, virtual true, abstract: false, final false
  inline void SetDisabledState();

  /// @brief Method SetHighlightedState, addr 0x273b6e4, size 0x3c, virtual true, abstract: false, final false
  inline void SetHighlightedState();

  /// @brief Method SetNormalState, addr 0x273b6a8, size 0x3c, virtual true, abstract: false, final false
  inline void SetNormalState();

  /// @brief Method SetPressedState, addr 0x273b720, size 0x3c, virtual true, abstract: false, final false
  inline void SetPressedState();

  /// @brief Method SetSelectedAndHighlightedState, addr 0x273b7d4, size 0x3c, virtual true, abstract: false, final false
  inline void SetSelectedAndHighlightedState();

  /// @brief Method SetSelectedState, addr 0x273b798, size 0x3c, virtual true, abstract: false, final false
  inline void SetSelectedState();

  /// @brief Method StartTween, addr 0x273b394, size 0x238, virtual false, abstract: false, final false
  inline void StartTween(::UnityEngine::Color endColor);

  /// @brief Method TransitionToDisabledState, addr 0x273b624, size 0x2c, virtual true, abstract: false, final false
  inline void TransitionToDisabledState();

  /// @brief Method TransitionToHighlightedState, addr 0x273b5cc, size 0x2c, virtual true, abstract: false, final false
  inline void TransitionToHighlightedState();

  /// @brief Method TransitionToNormalState, addr 0x273b368, size 0x2c, virtual true, abstract: false, final false
  inline void TransitionToNormalState();

  /// @brief Method TransitionToPressedState, addr 0x273b5f8, size 0x2c, virtual true, abstract: false, final false
  inline void TransitionToPressedState();

  /// @brief Method TransitionToSelectedAndHighlightedState, addr 0x273b67c, size 0x2c, virtual true, abstract: false, final false
  inline void TransitionToSelectedAndHighlightedState();

  /// @brief Method TransitionToSelectedState, addr 0x273b650, size 0x2c, virtual true, abstract: false, final false
  inline void TransitionToSelectedState();

  /// @brief Method <StartTween>b__16_0, addr 0x273b858, size 0x24, virtual false, abstract: false, final false
  inline void _StartTween_b__16_0(::UnityEngine::Color color);

  /// @brief Method <StartTween>b__16_1, addr 0x273b87c, size 0x88, virtual false, abstract: false, final false
  inline void _StartTween_b__16_1();

  constexpr ::Tweening::ColorTween*& __cordl_internal_get__colorTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::ColorTween*> const& __cordl_internal_get__colorTween() const;

  constexpr ::UnityW<::GlobalNamespace::ColorTransitionSO> const& __cordl_internal_get__transition() const;

  constexpr ::UnityW<::GlobalNamespace::ColorTransitionSO>& __cordl_internal_get__transition();

  constexpr void __cordl_internal_set__colorTween(::Tweening::ColorTween* value);

  constexpr void __cordl_internal_set__transition(::UnityW<::GlobalNamespace::ColorTransitionSO> value);

  /// @brief Method .ctor, addr 0x273b810, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_transition, addr 0x273b360, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BaseTransitionSO> get_transition();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorTMPTextStateTransition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorTMPTextStateTransition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorTMPTextStateTransition(ColorTMPTextStateTransition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorTMPTextStateTransition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorTMPTextStateTransition(ColorTMPTextStateTransition const&) = delete;

  /// @brief Field _transition, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorTransitionSO> ____transition;

  /// @brief Field _colorTween, offset: 0x30, size: 0x8, def value: None
  ::Tweening::ColorTween* ____colorTween;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorTMPTextStateTransition, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorTMPTextStateTransition, ____transition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorTMPTextStateTransition, ____colorTween) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorTMPTextStateTransition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorTMPTextStateTransition*, "", "ColorTMPTextStateTransition");
