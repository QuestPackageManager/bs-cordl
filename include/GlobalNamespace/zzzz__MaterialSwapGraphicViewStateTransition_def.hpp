#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialSwapGraphicViewStateTransition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseStateTransition_1_def.hpp"
CORDL_MODULE_EXPORT(MaterialSwapGraphicViewStateTransition)
namespace GlobalNamespace {
class BaseTransitionSO;
}
namespace GlobalNamespace {
class MaterialSwapTransitionSO;
}
namespace GlobalNamespace {
class TransitionTimingSO;
}
namespace UnityEngine::UI {
class Graphic;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialSwapGraphicViewStateTransition;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialSwapGraphicViewStateTransition);
// Dependencies BaseStateTransition`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MaterialSwapGraphicViewStateTransition
class CORDL_TYPE MaterialSwapGraphicViewStateTransition : public ::GlobalNamespace::BaseStateTransition_1<::UnityW<::UnityEngine::UI::Graphic>> {
public:
  // Declarations
  /// @brief Field _transition, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__transition, put = __cordl_internal_set__transition)) ::UnityW<::GlobalNamespace::MaterialSwapTransitionSO> _transition;

  __declspec(property(get = get_transition)) ::UnityW<::GlobalNamespace::BaseTransitionSO> transition;

  static inline ::GlobalNamespace::MaterialSwapGraphicViewStateTransition* New_ctor();

  /// @brief Method SetDisabledState, addr 0x44d80ec, size 0x30, virtual true, abstract: false, final false
  inline void SetDisabledState();

  /// @brief Method SetHighlightedState, addr 0x44d808c, size 0x30, virtual true, abstract: false, final false
  inline void SetHighlightedState();

  /// @brief Method SetNormalState, addr 0x44d805c, size 0x30, virtual true, abstract: false, final false
  inline void SetNormalState();

  /// @brief Method SetPressedState, addr 0x44d80bc, size 0x30, virtual true, abstract: false, final false
  inline void SetPressedState();

  /// @brief Method SetSelectedAndHighlightedState, addr 0x44d814c, size 0x30, virtual true, abstract: false, final false
  inline void SetSelectedAndHighlightedState();

  /// @brief Method SetSelectedState, addr 0x44d811c, size 0x30, virtual true, abstract: false, final false
  inline void SetSelectedState();

  /// @brief Method TransitionToDisabledState, addr 0x44d802c, size 0x10, virtual true, abstract: false, final false
  inline void TransitionToDisabledState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToHighlightedState, addr 0x44d800c, size 0x10, virtual true, abstract: false, final false
  inline void TransitionToHighlightedState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToNormalState, addr 0x44d8000, size 0xc, virtual true, abstract: false, final false
  inline void TransitionToNormalState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToPressedState, addr 0x44d801c, size 0x10, virtual true, abstract: false, final false
  inline void TransitionToPressedState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToSelectedAndHighlightedState, addr 0x44d804c, size 0x10, virtual true, abstract: false, final false
  inline void TransitionToSelectedAndHighlightedState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  /// @brief Method TransitionToSelectedState, addr 0x44d803c, size 0x10, virtual true, abstract: false, final false
  inline void TransitionToSelectedState(::GlobalNamespace::TransitionTimingSO* transitionTiming);

  constexpr ::UnityW<::GlobalNamespace::MaterialSwapTransitionSO> const& __cordl_internal_get__transition() const;

  constexpr ::UnityW<::GlobalNamespace::MaterialSwapTransitionSO>& __cordl_internal_get__transition();

  constexpr void __cordl_internal_set__transition(::UnityW<::GlobalNamespace::MaterialSwapTransitionSO> value);

  /// @brief Method .ctor, addr 0x44d817c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_transition, addr 0x44d7ff8, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BaseTransitionSO> get_transition();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialSwapGraphicViewStateTransition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialSwapGraphicViewStateTransition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialSwapGraphicViewStateTransition(MaterialSwapGraphicViewStateTransition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialSwapGraphicViewStateTransition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialSwapGraphicViewStateTransition(MaterialSwapGraphicViewStateTransition const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18213 };

  /// @brief Field _transition, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialSwapTransitionSO> ____transition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MaterialSwapGraphicViewStateTransition, ____transition) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialSwapGraphicViewStateTransition, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialSwapGraphicViewStateTransition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialSwapGraphicViewStateTransition*, "", "MaterialSwapGraphicViewStateTransition");
