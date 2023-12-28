#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseStateTransition_1_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
CORDL_MODULE_EXPORT(ColorTMPTextStateTransition)
namespace GlobalNamespace {
class ColorTransitionSO;
}
namespace GlobalNamespace {
class BaseTransitionSO;
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
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5442), inst: 927 }), TypeDefinitionIndex(TypeDefinitionIndex(12446)),
// TypeDefinitionIndex(TypeDefinitionIndex(5442))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5447)) CS Name: ::ColorTMPTextStateTransition*
class CORDL_TYPE ColorTMPTextStateTransition : public ::GlobalNamespace::BaseStateTransition_1<::TMPro::TMP_Text*> {
public:
  // Declarations
  /// @brief Field _transition, offset 0x28, size 0x8
  __declspec(property(get = __get__transition, put = __set__transition))::GlobalNamespace::ColorTransitionSO* _transition;

  /// @brief Field _colorTween, offset 0x30, size 0x8
  __declspec(property(get = __get__colorTween, put = __set__colorTween))::Tweening::ColorTween* _colorTween;

  __declspec(property(get = get_transition))::GlobalNamespace::BaseTransitionSO* transition;

  constexpr ::GlobalNamespace::ColorTransitionSO*& __get__transition();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorTransitionSO*> const& __get__transition() const;

  constexpr void __set__transition(::GlobalNamespace::ColorTransitionSO* value);

  constexpr ::Tweening::ColorTween*& __get__colorTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::ColorTween*> const& __get__colorTween() const;

  constexpr void __set__colorTween(::Tweening::ColorTween* value);

  /// @brief Method get_transition addr 0x227d8a8 size 0x8 virtual true final false
  inline ::GlobalNamespace::BaseTransitionSO* get_transition();

  /// @brief Method TransitionToNormalState addr 0x227d8b0 size 0x2c virtual true final false
  inline void TransitionToNormalState();

  /// @brief Method TransitionToHighlightedState addr 0x227db14 size 0x2c virtual true final false
  inline void TransitionToHighlightedState();

  /// @brief Method TransitionToPressedState addr 0x227db40 size 0x2c virtual true final false
  inline void TransitionToPressedState();

  /// @brief Method TransitionToDisabledState addr 0x227db6c size 0x2c virtual true final false
  inline void TransitionToDisabledState();

  /// @brief Method TransitionToSelectedState addr 0x227db98 size 0x2c virtual true final false
  inline void TransitionToSelectedState();

  /// @brief Method TransitionToSelectedAndHighlightedState addr 0x227dbc4 size 0x2c virtual true final false
  inline void TransitionToSelectedAndHighlightedState();

  /// @brief Method SetNormalState addr 0x227dbf0 size 0x3c virtual true final false
  inline void SetNormalState();

  /// @brief Method SetHighlightedState addr 0x227dc2c size 0x3c virtual true final false
  inline void SetHighlightedState();

  /// @brief Method SetPressedState addr 0x227dc68 size 0x3c virtual true final false
  inline void SetPressedState();

  /// @brief Method SetDisabledState addr 0x227dca4 size 0x3c virtual true final false
  inline void SetDisabledState();

  /// @brief Method SetSelectedState addr 0x227dce0 size 0x3c virtual true final false
  inline void SetSelectedState();

  /// @brief Method SetSelectedAndHighlightedState addr 0x227dd1c size 0x3c virtual true final false
  inline void SetSelectedAndHighlightedState();

  /// @brief Method StartTween addr 0x227d8dc size 0x238 virtual false final false
  inline void StartTween(::UnityEngine::Color endColor);

  static inline ::GlobalNamespace::ColorTMPTextStateTransition* New_ctor();

  /// @brief Method .ctor addr 0x227dd58 size 0x48 virtual false final false
  inline void _ctor();

  /// @brief Method <StartTween>b__16_0 addr 0x227dda0 size 0x24 virtual false final false
  inline void _StartTween_b__16_0(::UnityEngine::Color color);

  /// @brief Method <StartTween>b__16_1 addr 0x227ddc4 size 0x88 virtual false final false
  inline void _StartTween_b__16_1();

  // Ctor Parameters [CppParam { name: "", ty: "ColorTMPTextStateTransition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorTMPTextStateTransition(ColorTMPTextStateTransition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorTMPTextStateTransition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorTMPTextStateTransition(ColorTMPTextStateTransition const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorTMPTextStateTransition();

public:
  /// @brief Field _transition, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ColorTransitionSO* ____transition;

  /// @brief Field _colorTween, offset: 0x30, size: 0x8, def value: None
  ::Tweening::ColorTween* ____colorTween;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorTMPTextStateTransition, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorTMPTextStateTransition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorTMPTextStateTransition*, "", "ColorTMPTextStateTransition");
