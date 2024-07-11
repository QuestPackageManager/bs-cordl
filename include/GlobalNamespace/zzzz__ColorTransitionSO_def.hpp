#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorTransitionSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseTransitionSO_def.hpp"
CORDL_MODULE_EXPORT(ColorTransitionSO)
namespace GlobalNamespace {
class ColorSO;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorTransitionSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorTransitionSO);
// Type: ::ColorTransitionSO
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ColorTransitionSO*
class CORDL_TYPE ColorTransitionSO : public ::GlobalNamespace::BaseTransitionSO {
public:
  // Declarations
  /// @brief Field _disabledColor, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__disabledColor, put = __cordl_internal_set__disabledColor))::UnityW<::GlobalNamespace::ColorSO> _disabledColor;

  /// @brief Field _highlightedColor, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__highlightedColor, put = __cordl_internal_set__highlightedColor))::UnityW<::GlobalNamespace::ColorSO> _highlightedColor;

  /// @brief Field _normalColor, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__normalColor, put = __cordl_internal_set__normalColor))::UnityW<::GlobalNamespace::ColorSO> _normalColor;

  /// @brief Field _pressedColor, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__pressedColor, put = __cordl_internal_set__pressedColor))::UnityW<::GlobalNamespace::ColorSO> _pressedColor;

  /// @brief Field _selectedAndHighlightedColor, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedAndHighlightedColor,
                      put = __cordl_internal_set__selectedAndHighlightedColor))::UnityW<::GlobalNamespace::ColorSO> _selectedAndHighlightedColor;

  /// @brief Field _selectedColor, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedColor, put = __cordl_internal_set__selectedColor))::UnityW<::GlobalNamespace::ColorSO> _selectedColor;

  __declspec(property(get = get_disabledColor))::UnityEngine::Color disabledColor;

  __declspec(property(get = get_highlightedColor))::UnityEngine::Color highlightedColor;

  __declspec(property(get = get_normalColor))::UnityEngine::Color normalColor;

  __declspec(property(get = get_pressedColor))::UnityEngine::Color pressedColor;

  __declspec(property(get = get_selectedAndHighlightedColor))::UnityEngine::Color selectedAndHighlightedColor;

  __declspec(property(get = get_selectedColor))::UnityEngine::Color selectedColor;

  static inline ::GlobalNamespace::ColorTransitionSO* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__disabledColor() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__disabledColor();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__highlightedColor() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__highlightedColor();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__normalColor() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__normalColor();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__pressedColor() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__pressedColor();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__selectedAndHighlightedColor() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__selectedAndHighlightedColor();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__selectedColor() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__selectedColor();

  constexpr void __cordl_internal_set__disabledColor(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__highlightedColor(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__normalColor(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__pressedColor(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__selectedAndHighlightedColor(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__selectedColor(::UnityW<::GlobalNamespace::ColorSO> value);

  /// @brief Method .ctor, addr 0x2768a20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_disabledColor, addr 0x27681a0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_disabledColor();

  /// @brief Method get_highlightedColor, addr 0x2768130, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_highlightedColor();

  /// @brief Method get_normalColor, addr 0x2767ebc, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_normalColor();

  /// @brief Method get_pressedColor, addr 0x2768168, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_pressedColor();

  /// @brief Method get_selectedAndHighlightedColor, addr 0x2768210, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_selectedAndHighlightedColor();

  /// @brief Method get_selectedColor, addr 0x27681d8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_selectedColor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorTransitionSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorTransitionSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorTransitionSO(ColorTransitionSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorTransitionSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorTransitionSO(ColorTransitionSO const&) = delete;

  /// @brief Field _normalColor, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____normalColor;

  /// @brief Field _highlightedColor, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____highlightedColor;

  /// @brief Field _pressedColor, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____pressedColor;

  /// @brief Field _disabledColor, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____disabledColor;

  /// @brief Field _selectedColor, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____selectedColor;

  /// @brief Field _selectedAndHighlightedColor, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____selectedAndHighlightedColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorTransitionSO, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorTransitionSO, ____normalColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorTransitionSO, ____highlightedColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorTransitionSO, ____pressedColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorTransitionSO, ____disabledColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorTransitionSO, ____selectedColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorTransitionSO, ____selectedAndHighlightedColor) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorTransitionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorTransitionSO*, "", "ColorTransitionSO");
