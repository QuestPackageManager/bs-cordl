#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorGraphicStateTransition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorStateTransition_1_def.hpp"
CORDL_MODULE_EXPORT(ColorGraphicStateTransition)
namespace GlobalNamespace {
class TransitionTimingSO;
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
// Dependencies ColorStateTransition`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColorGraphicStateTransition
class CORDL_TYPE ColorGraphicStateTransition : public ::GlobalNamespace::ColorStateTransition_1<::UnityW<::UnityEngine::UI::Graphic>> {
public:
  // Declarations
  /// @brief Field _colorTween, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__colorTween, put = __cordl_internal_set__colorTween)) ::Tweening::ColorTween* _colorTween;

  static inline ::GlobalNamespace::ColorGraphicStateTransition* New_ctor();

  /// @brief Method SetDisabledState, addr 0x44d5330, size 0x38, virtual true, abstract: false, final false
  inline void SetDisabledState();

  /// @brief Method SetHighlightedState, addr 0x44d52c0, size 0x38, virtual true, abstract: false, final false
  inline void SetHighlightedState();

  /// @brief Method SetNormalState, addr 0x44d5288, size 0x38, virtual true, abstract: false, final false
  inline void SetNormalState();

  /// @brief Method SetPressedState, addr 0x44d52f8, size 0x38, virtual true, abstract: false, final false
  inline void SetPressedState();

  /// @brief Method SetSelectedAndHighlightedState, addr 0x44d53a0, size 0x38, virtual true, abstract: false, final false
  inline void SetSelectedAndHighlightedState();

  /// @brief Method SetSelectedState, addr 0x44d5368, size 0x38, virtual true, abstract: false, final false
  inline void SetSelectedState();

  /// @brief Method StartTween, addr 0x44d4ef8, size 0x1e8, virtual false, abstract: false, final false
  inline void StartTween(::UnityEngine::Color endColor, ::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method StopCurrentTransitionAnimation, addr 0x44d51f8, size 0x90, virtual true, abstract: false, final false
  inline void StopCurrentTransitionAnimation();

  /// @brief Method TransitionToDisabledState, addr 0x44d5150, size 0x38, virtual true, abstract: false, final false
  inline void TransitionToDisabledState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToHighlightedState, addr 0x44d50e0, size 0x38, virtual true, abstract: false, final false
  inline void TransitionToHighlightedState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToNormalState, addr 0x44d4ec0, size 0x38, virtual true, abstract: false, final false
  inline void TransitionToNormalState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToPressedState, addr 0x44d5118, size 0x38, virtual true, abstract: false, final false
  inline void TransitionToPressedState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToSelectedAndHighlightedState, addr 0x44d51c0, size 0x38, virtual true, abstract: false, final false
  inline void TransitionToSelectedAndHighlightedState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToSelectedState, addr 0x44d5188, size 0x38, virtual true, abstract: false, final false
  inline void TransitionToSelectedState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method <StartTween>b__14_0, addr 0x44d5420, size 0x24, virtual false, abstract: false, final false
  inline void _StartTween_b__14_0(::UnityEngine::Color color);

  /// @brief Method <StartTween>b__14_1, addr 0x44d5444, size 0x88, virtual false, abstract: false, final false
  inline void _StartTween_b__14_1();

  constexpr ::Tweening::ColorTween* const& __cordl_internal_get__colorTween() const;

  constexpr ::Tweening::ColorTween*& __cordl_internal_get__colorTween();

  constexpr void __cordl_internal_set__colorTween(::Tweening::ColorTween* value);

  /// @brief Method .ctor, addr 0x44d53d8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18195 };

  /// @brief Field _colorTween, offset: 0x40, size: 0x8, def value: None
  ::Tweening::ColorTween* ____colorTween;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColorGraphicStateTransition, ____colorTween) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorGraphicStateTransition, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorGraphicStateTransition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorGraphicStateTransition*, "", "ColorGraphicStateTransition");
