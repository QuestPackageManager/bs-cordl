#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorGraphicStateTransition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseStateTransition_1_def.hpp"
CORDL_MODULE_EXPORT(ColorGraphicStateTransition)
namespace GlobalNamespace {
class BaseTransitionSO;
}
namespace GlobalNamespace {
class ColorTransitionSO;
}
namespace Tweening {
class ColorTween;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorGraphicStateTransition;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorGraphicStateTransition);
// Type: ::ColorGraphicStateTransition
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ColorGraphicStateTransition*
class CORDL_TYPE ColorGraphicStateTransition : public ::GlobalNamespace::BaseStateTransition_1<::UnityW<::UnityEngine::UI::Graphic>> {
public:
  // Declarations
  /// @brief Field _colorTween, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__colorTween, put = __cordl_internal_set__colorTween))::Tweening::ColorTween* _colorTween;

  /// @brief Field _transition, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__transition, put = __cordl_internal_set__transition))::UnityW<::GlobalNamespace::ColorTransitionSO> _transition;

  __declspec(property(get = get_transition))::UnityW<::GlobalNamespace::BaseTransitionSO> transition;

  static inline ::GlobalNamespace::ColorGraphicStateTransition* New_ctor();

  /// @brief Method SetDisabledState, addr 0x27682d0, size 0x3c, virtual true, abstract: false, final false
  inline void SetDisabledState();

  /// @brief Method SetHighlightedState, addr 0x2768258, size 0x3c, virtual true, abstract: false, final false
  inline void SetHighlightedState();

  /// @brief Method SetNormalState, addr 0x276821c, size 0x3c, virtual true, abstract: false, final false
  inline void SetNormalState();

  /// @brief Method SetPressedState, addr 0x2768294, size 0x3c, virtual true, abstract: false, final false
  inline void SetPressedState();

  /// @brief Method SetSelectedAndHighlightedState, addr 0x2768348, size 0x3c, virtual true, abstract: false, final false
  inline void SetSelectedAndHighlightedState();

  /// @brief Method SetSelectedState, addr 0x276830c, size 0x3c, virtual true, abstract: false, final false
  inline void SetSelectedState();

  /// @brief Method StartTween, addr 0x2767ec8, size 0x23c, virtual false, abstract: false, final false
  inline void StartTween(::UnityEngine::Color endColor);

  /// @brief Method TransitionToDisabledState, addr 0x2768174, size 0x2c, virtual true, abstract: false, final false
  inline void TransitionToDisabledState();

  /// @brief Method TransitionToHighlightedState, addr 0x2768104, size 0x2c, virtual true, abstract: false, final false
  inline void TransitionToHighlightedState();

  /// @brief Method TransitionToNormalState, addr 0x2767e90, size 0x2c, virtual true, abstract: false, final false
  inline void TransitionToNormalState();

  /// @brief Method TransitionToPressedState, addr 0x276813c, size 0x2c, virtual true, abstract: false, final false
  inline void TransitionToPressedState();

  /// @brief Method TransitionToSelectedAndHighlightedState, addr 0x27681e4, size 0x2c, virtual true, abstract: false, final false
  inline void TransitionToSelectedAndHighlightedState();

  /// @brief Method TransitionToSelectedState, addr 0x27681ac, size 0x2c, virtual true, abstract: false, final false
  inline void TransitionToSelectedState();

  /// @brief Method <StartTween>b__16_0, addr 0x27683cc, size 0x24, virtual false, abstract: false, final false
  inline void _StartTween_b__16_0(::UnityEngine::Color color);

  /// @brief Method <StartTween>b__16_1, addr 0x27683f0, size 0x88, virtual false, abstract: false, final false
  inline void _StartTween_b__16_1();

  constexpr ::Tweening::ColorTween*& __cordl_internal_get__colorTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::ColorTween*> const& __cordl_internal_get__colorTween() const;

  constexpr ::UnityW<::GlobalNamespace::ColorTransitionSO> const& __cordl_internal_get__transition() const;

  constexpr ::UnityW<::GlobalNamespace::ColorTransitionSO>& __cordl_internal_get__transition();

  constexpr void __cordl_internal_set__colorTween(::Tweening::ColorTween* value);

  constexpr void __cordl_internal_set__transition(::UnityW<::GlobalNamespace::ColorTransitionSO> value);

  /// @brief Method .ctor, addr 0x2768384, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_transition, addr 0x2767e88, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BaseTransitionSO> get_transition();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorGraphicStateTransition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorGraphicStateTransition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorGraphicStateTransition(ColorGraphicStateTransition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorGraphicStateTransition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorGraphicStateTransition(ColorGraphicStateTransition const&) = delete;

  /// @brief Field _transition, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorTransitionSO> ____transition;

  /// @brief Field _colorTween, offset: 0x30, size: 0x8, def value: None
  ::Tweening::ColorTween* ____colorTween;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorGraphicStateTransition, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorGraphicStateTransition, ____transition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorGraphicStateTransition, ____colorTween) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorGraphicStateTransition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorGraphicStateTransition*, "", "ColorGraphicStateTransition");
