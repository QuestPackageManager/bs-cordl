#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorStateTransition_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseStateTransition_1_def.hpp"
CORDL_MODULE_EXPORT(ColorStateTransition_1)
namespace GlobalNamespace {
class BaseTransitionSO;
}
namespace GlobalNamespace {
class ColorTransitionSO;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class ColorStateTransition_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::ColorStateTransition_1);
// Dependencies BaseStateTransition`1<T>
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ColorStateTransition`1<T>
class CORDL_TYPE ColorStateTransition_1 : public ::GlobalNamespace::BaseStateTransition_1<T> {
public:
  // Declarations
  /// @brief Field _transition, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__transition, put = __cordl_internal_set__transition)) ::UnityW<::GlobalNamespace::ColorTransitionSO> _transition;

  __declspec(property(get = get_disabledColor)) ::UnityEngine::Color disabledColor;

  __declspec(property(get = get_highlightedColor)) ::UnityEngine::Color highlightedColor;

  __declspec(property(get = get_normalColor)) ::UnityEngine::Color normalColor;

  __declspec(property(get = get_pressedColor)) ::UnityEngine::Color pressedColor;

  __declspec(property(get = get_selectedAndHighlightedColor)) ::UnityEngine::Color selectedAndHighlightedColor;

  __declspec(property(get = get_selectedColor)) ::UnityEngine::Color selectedColor;

  __declspec(property(get = get_transition)) ::UnityW<::GlobalNamespace::BaseTransitionSO> transition;

  static inline ::GlobalNamespace::ColorStateTransition_1<T>* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::ColorTransitionSO> const& __cordl_internal_get__transition() const;

  constexpr ::UnityW<::GlobalNamespace::ColorTransitionSO>& __cordl_internal_get__transition();

  constexpr void __cordl_internal_set__transition(::UnityW<::GlobalNamespace::ColorTransitionSO> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_disabledColor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Color get_disabledColor();

  /// @brief Method get_highlightedColor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Color get_highlightedColor();

  /// @brief Method get_normalColor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Color get_normalColor();

  /// @brief Method get_pressedColor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Color get_pressedColor();

  /// @brief Method get_selectedAndHighlightedColor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Color get_selectedAndHighlightedColor();

  /// @brief Method get_selectedColor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Color get_selectedColor();

  /// @brief Method get_transition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BaseTransitionSO> get_transition();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorStateTransition_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorStateTransition_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorStateTransition_1(ColorStateTransition_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorStateTransition_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorStateTransition_1(ColorStateTransition_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18206 };

  /// @brief Field _transition, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorTransitionSO> ____transition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ColorStateTransition_1, "", "ColorStateTransition`1");
