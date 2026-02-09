#pragma once
// IWYU pragma private; include "GlobalNamespace/EnabledViewStateTransition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseStateTransition_1_def.hpp"
CORDL_MODULE_EXPORT(EnabledViewStateTransition)
namespace GlobalNamespace {
class BaseTransitionSO;
}
namespace GlobalNamespace {
class EnabledTransitionSO;
}
namespace GlobalNamespace {
class TransitionTimingSO;
}
namespace UnityEngine {
class Behaviour;
}
// Forward declare root types
namespace GlobalNamespace {
class EnabledViewStateTransition;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnabledViewStateTransition);
// Dependencies BaseStateTransition`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnabledViewStateTransition
class CORDL_TYPE EnabledViewStateTransition : public ::GlobalNamespace::BaseStateTransition_1<::UnityW<::UnityEngine::Behaviour>> {
public:
// Declarations
/// @brief Field _transition, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__transition, put=__cordl_internal_set__transition)) ::UnityW<::GlobalNamespace::EnabledTransitionSO>  _transition;

 __declspec(property(get=get_transition)) ::UnityW<::GlobalNamespace::BaseTransitionSO>  transition;

static inline ::GlobalNamespace::EnabledViewStateTransition* New_ctor() ;

/// @brief Method SetDisabledState, addr 0x628e89c, size 0x28, virtual true, abstract: false, final false
inline void SetDisabledState() ;

/// @brief Method SetHighlightedState, addr 0x628e84c, size 0x28, virtual true, abstract: false, final false
inline void SetHighlightedState() ;

/// @brief Method SetNormalState, addr 0x628e824, size 0x28, virtual true, abstract: false, final false
inline void SetNormalState() ;

/// @brief Method SetPressedState, addr 0x628e874, size 0x28, virtual true, abstract: false, final false
inline void SetPressedState() ;

/// @brief Method SetSelectedAndHighlightedState, addr 0x628e8ec, size 0x28, virtual true, abstract: false, final false
inline void SetSelectedAndHighlightedState() ;

/// @brief Method SetSelectedState, addr 0x628e8c4, size 0x28, virtual true, abstract: false, final false
inline void SetSelectedState() ;

/// @brief Method TransitionToDisabledState, addr 0x628e7f4, size 0x10, virtual true, abstract: false, final false
inline void TransitionToDisabledState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method TransitionToHighlightedState, addr 0x628e7d4, size 0x10, virtual true, abstract: false, final false
inline void TransitionToHighlightedState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method TransitionToNormalState, addr 0x628e7c8, size 0xc, virtual true, abstract: false, final false
inline void TransitionToNormalState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method TransitionToPressedState, addr 0x628e7e4, size 0x10, virtual true, abstract: false, final false
inline void TransitionToPressedState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method TransitionToSelectedAndHighlightedState, addr 0x628e814, size 0x10, virtual true, abstract: false, final false
inline void TransitionToSelectedAndHighlightedState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method TransitionToSelectedState, addr 0x628e804, size 0x10, virtual true, abstract: false, final false
inline void TransitionToSelectedState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

constexpr ::UnityW<::GlobalNamespace::EnabledTransitionSO> const& __cordl_internal_get__transition() const;

constexpr ::UnityW<::GlobalNamespace::EnabledTransitionSO>& __cordl_internal_get__transition() ;

constexpr void __cordl_internal_set__transition(::UnityW<::GlobalNamespace::EnabledTransitionSO>  value) ;

/// @brief Method .ctor, addr 0x628e914, size 0x44, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_transition, addr 0x628e7c0, size 0x8, virtual true, abstract: false, final false
inline ::UnityW<::GlobalNamespace::BaseTransitionSO> get_transition() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnabledViewStateTransition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnabledViewStateTransition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnabledViewStateTransition(EnabledViewStateTransition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnabledViewStateTransition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnabledViewStateTransition(EnabledViewStateTransition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22118};

/// @brief Field _transition, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EnabledTransitionSO>  ____transition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnabledViewStateTransition, ____transition) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnabledViewStateTransition, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnabledViewStateTransition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnabledViewStateTransition*, "", "EnabledViewStateTransition");
