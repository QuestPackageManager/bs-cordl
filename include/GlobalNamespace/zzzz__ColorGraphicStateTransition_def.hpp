#pragma once
// IWYU pragma private; include "GlobalNamespace\ColorGraphicStateTransition.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::GlobalNamespace::ColorGraphicStateTransition*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ColorGraphicStateTransition*, "", "ColorGraphicStateTransition");
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

  /// @brief Method SetDisabledState, addr 0x64434f8, size 0x38, virtual true, abstract: false, final false
  inline void SetDisabledState();

  /// @brief Method SetHighlightedState, addr 0x6443488, size 0x38, virtual true, abstract: false, final false
  inline void SetHighlightedState();

  /// @brief Method SetNormalState, addr 0x6443450, size 0x38, virtual true, abstract: false, final false
  inline void SetNormalState();

  /// @brief Method SetPressedState, addr 0x64434c0, size 0x38, virtual true, abstract: false, final false
  inline void SetPressedState();

  /// @brief Method SetSelectedAndHighlightedState, addr 0x6443568, size 0x38, virtual true, abstract: false, final false
  inline void SetSelectedAndHighlightedState();

  /// @brief Method SetSelectedState, addr 0x6443530, size 0x38, virtual true, abstract: false, final false
  inline void SetSelectedState();

  /// @brief Method StartTween, addr 0x6443028, size 0x278, virtual false, abstract: false, final false
  inline void StartTween(::UnityEngine::Color endColor, ::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method StopCurrentTransitionAnimation, addr 0x64433b8, size 0x98, virtual true, abstract: false, final false
  inline void StopCurrentTransitionAnimation();

  /// @brief Method TransitionToDisabledState, addr 0x6443310, size 0x38, virtual true, abstract: false, final false
  inline void TransitionToDisabledState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToHighlightedState, addr 0x64432a0, size 0x38, virtual true, abstract: false, final false
  inline void TransitionToHighlightedState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToNormalState, addr 0x6442ff0, size 0x38, virtual true, abstract: false, final false
  inline void TransitionToNormalState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToPressedState, addr 0x64432d8, size 0x38, virtual true, abstract: false, final false
  inline void TransitionToPressedState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToSelectedAndHighlightedState, addr 0x6443380, size 0x38, virtual true, abstract: false, final false
  inline void TransitionToSelectedAndHighlightedState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToSelectedState, addr 0x6443348, size 0x38, virtual true, abstract: false, final false
  inline void TransitionToSelectedState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method <StartTween>b__14_0, addr 0x64435e4, size 0x20, virtual false, abstract: false, final false
  inline void _StartTween_b__14_0(::UnityEngine::Color color);

  /// @brief Method <StartTween>b__14_1, addr 0x6443604, size 0x90, virtual false, abstract: false, final false
  inline void _StartTween_b__14_1();

  constexpr ::Tweening::ColorTween* const& __cordl_internal_get__colorTween() const;

  constexpr ::Tweening::ColorTween*& __cordl_internal_get__colorTween();

  constexpr void __cordl_internal_set__colorTween(::Tweening::ColorTween* value);

  /// @brief Method .ctor, addr 0x64435a0, size 0x44, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22359 };

  /// @brief Field _colorTween, offset: 0x40, size: 0x8, def value: None
  ::Tweening::ColorTween* ____colorTween;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColorGraphicStateTransition, ____colorTween) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ColorGraphicStateTransition) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
