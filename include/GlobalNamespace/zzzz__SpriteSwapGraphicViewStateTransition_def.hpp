#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseStateTransition_1_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
CORDL_MODULE_EXPORT(SpriteSwapGraphicViewStateTransition)
namespace GlobalNamespace {
class BaseTransitionSO;
}
namespace GlobalNamespace {
class SpriteSwapTransitionSO;
}
// Forward declare root types
namespace GlobalNamespace {
class SpriteSwapGraphicViewStateTransition;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SpriteSwapGraphicViewStateTransition);
// Type: ::SpriteSwapGraphicViewStateTransition
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5442)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5442), inst: 924 }),
// TypeDefinitionIndex(TypeDefinitionIndex(13055))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5461)) CS Name: ::SpriteSwapGraphicViewStateTransition*
class CORDL_TYPE SpriteSwapGraphicViewStateTransition : public ::GlobalNamespace::BaseStateTransition_1<::UnityEngine::UI::Image*> {
public:
  // Declarations
  /// @brief Field _transition, offset 0x28, size 0x8
  __declspec(property(get = __get__transition, put = __set__transition))::GlobalNamespace::SpriteSwapTransitionSO* _transition;

  __declspec(property(get = get_transition))::GlobalNamespace::BaseTransitionSO* transition;

  constexpr ::GlobalNamespace::SpriteSwapTransitionSO*& __get__transition();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SpriteSwapTransitionSO*> const& __get__transition() const;

  constexpr void __set__transition(::GlobalNamespace::SpriteSwapTransitionSO* value);

  /// @brief Method get_transition, addr 0x227feac, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BaseTransitionSO* get_transition();

  /// @brief Method TransitionToNormalState, addr 0x227feb4, size 0xc, virtual true, abstract: false, final false
  inline void TransitionToNormalState();

  /// @brief Method TransitionToHighlightedState, addr 0x227fec0, size 0xc, virtual true, abstract: false, final false
  inline void TransitionToHighlightedState();

  /// @brief Method TransitionToPressedState, addr 0x227fecc, size 0x10, virtual true, abstract: false, final false
  inline void TransitionToPressedState();

  /// @brief Method TransitionToDisabledState, addr 0x227fedc, size 0x10, virtual true, abstract: false, final false
  inline void TransitionToDisabledState();

  /// @brief Method TransitionToSelectedState, addr 0x227feec, size 0x10, virtual true, abstract: false, final false
  inline void TransitionToSelectedState();

  /// @brief Method TransitionToSelectedAndHighlightedState, addr 0x227fefc, size 0x10, virtual true, abstract: false, final false
  inline void TransitionToSelectedAndHighlightedState();

  /// @brief Method SetNormalState, addr 0x227ff0c, size 0x28, virtual true, abstract: false, final false
  inline void SetNormalState();

  /// @brief Method SetHighlightedState, addr 0x227ff34, size 0x28, virtual true, abstract: false, final false
  inline void SetHighlightedState();

  /// @brief Method SetPressedState, addr 0x227ff5c, size 0x28, virtual true, abstract: false, final false
  inline void SetPressedState();

  /// @brief Method SetDisabledState, addr 0x227ff84, size 0x28, virtual true, abstract: false, final false
  inline void SetDisabledState();

  /// @brief Method SetSelectedState, addr 0x227ffac, size 0x28, virtual true, abstract: false, final false
  inline void SetSelectedState();

  /// @brief Method SetSelectedAndHighlightedState, addr 0x227ffd4, size 0x28, virtual true, abstract: false, final false
  inline void SetSelectedAndHighlightedState();

  static inline ::GlobalNamespace::SpriteSwapGraphicViewStateTransition* New_ctor();

  /// @brief Method .ctor, addr 0x227fffc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SpriteSwapGraphicViewStateTransition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpriteSwapGraphicViewStateTransition(SpriteSwapGraphicViewStateTransition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpriteSwapGraphicViewStateTransition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpriteSwapGraphicViewStateTransition(SpriteSwapGraphicViewStateTransition const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpriteSwapGraphicViewStateTransition();

public:
  /// @brief Field _transition, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::SpriteSwapTransitionSO* ____transition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpriteSwapGraphicViewStateTransition, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteSwapGraphicViewStateTransition, ____transition) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SpriteSwapGraphicViewStateTransition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpriteSwapGraphicViewStateTransition*, "", "SpriteSwapGraphicViewStateTransition");
