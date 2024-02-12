#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseStateTransition_1_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
CORDL_MODULE_EXPORT(EnabledViewStateTransition)
namespace GlobalNamespace {
class BaseTransitionSO;
}
namespace GlobalNamespace {
class EnabledTransitionSO;
}
// Forward declare root types
namespace GlobalNamespace {
class EnabledViewStateTransition;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnabledViewStateTransition);
// Type: ::EnabledViewStateTransition
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(4745)), TypeDefinitionIndex(TypeDefinitionIndex(8931)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4745), inst: 923
// })] Self: TypeDefinitionIndex(TypeDefinitionIndex(4753)) CS Name: ::EnabledViewStateTransition*
class CORDL_TYPE EnabledViewStateTransition : public ::GlobalNamespace::BaseStateTransition_1<::UnityW<::UnityEngine::Behaviour>> {
public:
  // Declarations
  /// @brief Field _transition, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__transition, put = __cordl_internal_set__transition))::UnityW<::GlobalNamespace::EnabledTransitionSO> _transition;

  __declspec(property(get = get_transition))::UnityW<::GlobalNamespace::BaseTransitionSO> transition;

  constexpr ::UnityW<::GlobalNamespace::EnabledTransitionSO>& __cordl_internal_get__transition();

  constexpr ::UnityW<::GlobalNamespace::EnabledTransitionSO> const& __cordl_internal_get__transition() const;

  constexpr void __cordl_internal_set__transition(::UnityW<::GlobalNamespace::EnabledTransitionSO> value);

  /// @brief Method get_transition, addr 0x23d9744, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BaseTransitionSO> get_transition();

  /// @brief Method TransitionToNormalState, addr 0x23d974c, size 0xc, virtual true, abstract: false, final false
  inline void TransitionToNormalState();

  /// @brief Method TransitionToHighlightedState, addr 0x23d9758, size 0xc, virtual true, abstract: false, final false
  inline void TransitionToHighlightedState();

  /// @brief Method TransitionToPressedState, addr 0x23d9764, size 0x10, virtual true, abstract: false, final false
  inline void TransitionToPressedState();

  /// @brief Method TransitionToDisabledState, addr 0x23d9774, size 0x10, virtual true, abstract: false, final false
  inline void TransitionToDisabledState();

  /// @brief Method TransitionToSelectedState, addr 0x23d9784, size 0x10, virtual true, abstract: false, final false
  inline void TransitionToSelectedState();

  /// @brief Method TransitionToSelectedAndHighlightedState, addr 0x23d9794, size 0x10, virtual true, abstract: false, final false
  inline void TransitionToSelectedAndHighlightedState();

  /// @brief Method SetNormalState, addr 0x23d97a4, size 0x28, virtual true, abstract: false, final false
  inline void SetNormalState();

  /// @brief Method SetHighlightedState, addr 0x23d97cc, size 0x28, virtual true, abstract: false, final false
  inline void SetHighlightedState();

  /// @brief Method SetPressedState, addr 0x23d97f4, size 0x28, virtual true, abstract: false, final false
  inline void SetPressedState();

  /// @brief Method SetDisabledState, addr 0x23d981c, size 0x28, virtual true, abstract: false, final false
  inline void SetDisabledState();

  /// @brief Method SetSelectedState, addr 0x23d9844, size 0x28, virtual true, abstract: false, final false
  inline void SetSelectedState();

  /// @brief Method SetSelectedAndHighlightedState, addr 0x23d986c, size 0x28, virtual true, abstract: false, final false
  inline void SetSelectedAndHighlightedState();

  static inline ::GlobalNamespace::EnabledViewStateTransition* New_ctor();

  /// @brief Method .ctor, addr 0x23d9894, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EnabledViewStateTransition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnabledViewStateTransition(EnabledViewStateTransition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnabledViewStateTransition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnabledViewStateTransition(EnabledViewStateTransition const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnabledViewStateTransition();

public:
  /// @brief Field _transition, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnabledTransitionSO> ____transition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnabledViewStateTransition, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EnabledViewStateTransition, ____transition) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnabledViewStateTransition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnabledViewStateTransition*, "", "EnabledViewStateTransition");
