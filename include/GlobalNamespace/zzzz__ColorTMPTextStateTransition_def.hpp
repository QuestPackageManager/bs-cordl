#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorTMPTextStateTransition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorStateTransition_1_def.hpp"
CORDL_MODULE_EXPORT(ColorTMPTextStateTransition)
namespace GlobalNamespace {
class TransitionTimingSO;
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
// Dependencies ColorStateTransition`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColorTMPTextStateTransition
class CORDL_TYPE ColorTMPTextStateTransition : public ::GlobalNamespace::ColorStateTransition_1<::UnityW<::TMPro::TMP_Text>> {
public:
// Declarations
/// @brief Field _colorTween, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__colorTween, put=__cordl_internal_set__colorTween)) ::Tweening::ColorTween*  _colorTween;

static inline ::GlobalNamespace::ColorTMPTextStateTransition* New_ctor() ;

/// @brief Method SetDisabledState, addr 0x63021a8, size 0x38, virtual true, abstract: false, final false
inline void SetDisabledState() ;

/// @brief Method SetHighlightedState, addr 0x6302138, size 0x38, virtual true, abstract: false, final false
inline void SetHighlightedState() ;

/// @brief Method SetNormalState, addr 0x6302100, size 0x38, virtual true, abstract: false, final false
inline void SetNormalState() ;

/// @brief Method SetPressedState, addr 0x6302170, size 0x38, virtual true, abstract: false, final false
inline void SetPressedState() ;

/// @brief Method SetSelectedAndHighlightedState, addr 0x6302218, size 0x38, virtual true, abstract: false, final false
inline void SetSelectedAndHighlightedState() ;

/// @brief Method SetSelectedState, addr 0x63021e0, size 0x38, virtual true, abstract: false, final false
inline void SetSelectedState() ;

/// @brief Method StartTween, addr 0x6301cec, size 0x264, virtual false, abstract: false, final false
inline void StartTween(::UnityEngine::Color  endColor, ::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method StopCurrentTransitionAnimation, addr 0x6302068, size 0x98, virtual true, abstract: false, final false
inline void StopCurrentTransitionAnimation() ;

/// @brief Method TransitionToDisabledState, addr 0x6301fc0, size 0x38, virtual true, abstract: false, final false
inline void TransitionToDisabledState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method TransitionToHighlightedState, addr 0x6301f50, size 0x38, virtual true, abstract: false, final false
inline void TransitionToHighlightedState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method TransitionToNormalState, addr 0x6301cb4, size 0x38, virtual true, abstract: false, final false
inline void TransitionToNormalState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method TransitionToPressedState, addr 0x6301f88, size 0x38, virtual true, abstract: false, final false
inline void TransitionToPressedState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method TransitionToSelectedAndHighlightedState, addr 0x6302030, size 0x38, virtual true, abstract: false, final false
inline void TransitionToSelectedAndHighlightedState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method TransitionToSelectedState, addr 0x6301ff8, size 0x38, virtual true, abstract: false, final false
inline void TransitionToSelectedState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method <StartTween>b__14_0, addr 0x6302294, size 0x20, virtual false, abstract: false, final false
inline void _StartTween_b__14_0(::UnityEngine::Color  color) ;

/// @brief Method <StartTween>b__14_1, addr 0x63022b4, size 0x90, virtual false, abstract: false, final false
inline void _StartTween_b__14_1() ;

constexpr ::Tweening::ColorTween* const& __cordl_internal_get__colorTween() const;

constexpr ::Tweening::ColorTween*& __cordl_internal_get__colorTween() ;

constexpr void __cordl_internal_set__colorTween(::Tweening::ColorTween*  value) ;

/// @brief Method .ctor, addr 0x6302250, size 0x44, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColorTMPTextStateTransition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColorTMPTextStateTransition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorTMPTextStateTransition(ColorTMPTextStateTransition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorTMPTextStateTransition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorTMPTextStateTransition(ColorTMPTextStateTransition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22175};

/// @brief Field _colorTween, offset: 0x40, size: 0x8, def value: None
 ::Tweening::ColorTween*  ____colorTween;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColorTMPTextStateTransition, ____colorTween) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorTMPTextStateTransition, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorTMPTextStateTransition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorTMPTextStateTransition*, "", "ColorTMPTextStateTransition");
