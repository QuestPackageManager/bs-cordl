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
// CS Name: ::SpriteSwapGraphicViewStateTransition*
class CORDL_TYPE SpriteSwapGraphicViewStateTransition : public ::GlobalNamespace::BaseStateTransition_1<::UnityW<::UnityEngine::UI::Image>> {
public:
  // Declarations
  /// @brief Field _transition, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__transition, put = __cordl_internal_set__transition))::UnityW<::GlobalNamespace::SpriteSwapTransitionSO> _transition;

  __declspec(property(get = get_transition))::UnityW<::GlobalNamespace::BaseTransitionSO> transition;

  static inline ::GlobalNamespace::SpriteSwapGraphicViewStateTransition* New_ctor();

  /// @brief Method SetDisabledState, addr 0x2512760, size 0x28, virtual true, abstract: false, final false
  inline void SetDisabledState();

  /// @brief Method SetHighlightedState, addr 0x2512710, size 0x28, virtual true, abstract: false, final false
  inline void SetHighlightedState();

  /// @brief Method SetNormalState, addr 0x25126e8, size 0x28, virtual true, abstract: false, final false
  inline void SetNormalState();

  /// @brief Method SetPressedState, addr 0x2512738, size 0x28, virtual true, abstract: false, final false
  inline void SetPressedState();

  /// @brief Method SetSelectedAndHighlightedState, addr 0x25127b0, size 0x28, virtual true, abstract: false, final false
  inline void SetSelectedAndHighlightedState();

  /// @brief Method SetSelectedState, addr 0x2512788, size 0x28, virtual true, abstract: false, final false
  inline void SetSelectedState();

  /// @brief Method TransitionToDisabledState, addr 0x25126b8, size 0x10, virtual true, abstract: false, final false
  inline void TransitionToDisabledState();

  /// @brief Method TransitionToHighlightedState, addr 0x251269c, size 0xc, virtual true, abstract: false, final false
  inline void TransitionToHighlightedState();

  /// @brief Method TransitionToNormalState, addr 0x2512690, size 0xc, virtual true, abstract: false, final false
  inline void TransitionToNormalState();

  /// @brief Method TransitionToPressedState, addr 0x25126a8, size 0x10, virtual true, abstract: false, final false
  inline void TransitionToPressedState();

  /// @brief Method TransitionToSelectedAndHighlightedState, addr 0x25126d8, size 0x10, virtual true, abstract: false, final false
  inline void TransitionToSelectedAndHighlightedState();

  /// @brief Method TransitionToSelectedState, addr 0x25126c8, size 0x10, virtual true, abstract: false, final false
  inline void TransitionToSelectedState();

  constexpr ::UnityW<::GlobalNamespace::SpriteSwapTransitionSO> const& __cordl_internal_get__transition() const;

  constexpr ::UnityW<::GlobalNamespace::SpriteSwapTransitionSO>& __cordl_internal_get__transition();

  constexpr void __cordl_internal_set__transition(::UnityW<::GlobalNamespace::SpriteSwapTransitionSO> value);

  /// @brief Method .ctor, addr 0x25127d8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_transition, addr 0x2512688, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BaseTransitionSO> get_transition();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpriteSwapGraphicViewStateTransition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpriteSwapGraphicViewStateTransition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpriteSwapGraphicViewStateTransition(SpriteSwapGraphicViewStateTransition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpriteSwapGraphicViewStateTransition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpriteSwapGraphicViewStateTransition(SpriteSwapGraphicViewStateTransition const&) = delete;

  /// @brief Field _transition, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SpriteSwapTransitionSO> ____transition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpriteSwapGraphicViewStateTransition, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteSwapGraphicViewStateTransition, ____transition) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SpriteSwapGraphicViewStateTransition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpriteSwapGraphicViewStateTransition*, "", "SpriteSwapGraphicViewStateTransition");
