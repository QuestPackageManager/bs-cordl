#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5549))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5554))
// CS Name: ::ColorTransitionSO*
class CORDL_TYPE ColorTransitionSO : public ::GlobalNamespace::BaseTransitionSO {
public:
  // Declarations
  /// @brief Field _normalColor, offset 0x20, size 0x8
  __declspec(property(get = __get__normalColor, put = __set__normalColor))::GlobalNamespace::ColorSO* _normalColor;

  /// @brief Field _highlightedColor, offset 0x28, size 0x8
  __declspec(property(get = __get__highlightedColor, put = __set__highlightedColor))::GlobalNamespace::ColorSO* _highlightedColor;

  /// @brief Field _pressedColor, offset 0x30, size 0x8
  __declspec(property(get = __get__pressedColor, put = __set__pressedColor))::GlobalNamespace::ColorSO* _pressedColor;

  /// @brief Field _disabledColor, offset 0x38, size 0x8
  __declspec(property(get = __get__disabledColor, put = __set__disabledColor))::GlobalNamespace::ColorSO* _disabledColor;

  /// @brief Field _selectedColor, offset 0x40, size 0x8
  __declspec(property(get = __get__selectedColor, put = __set__selectedColor))::GlobalNamespace::ColorSO* _selectedColor;

  /// @brief Field _selectedAndHighlightedColor, offset 0x48, size 0x8
  __declspec(property(get = __get__selectedAndHighlightedColor, put = __set__selectedAndHighlightedColor))::GlobalNamespace::ColorSO* _selectedAndHighlightedColor;

  __declspec(property(get = get_normalColor))::UnityEngine::Color normalColor;

  __declspec(property(get = get_highlightedColor))::UnityEngine::Color highlightedColor;

  __declspec(property(get = get_pressedColor))::UnityEngine::Color pressedColor;

  __declspec(property(get = get_disabledColor))::UnityEngine::Color disabledColor;

  __declspec(property(get = get_selectedColor))::UnityEngine::Color selectedColor;

  __declspec(property(get = get_selectedAndHighlightedColor))::UnityEngine::Color selectedAndHighlightedColor;

  constexpr ::GlobalNamespace::ColorSO*& __get__normalColor();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__normalColor() const;

  constexpr void __set__normalColor(::GlobalNamespace::ColorSO* value);

  constexpr ::GlobalNamespace::ColorSO*& __get__highlightedColor();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__highlightedColor() const;

  constexpr void __set__highlightedColor(::GlobalNamespace::ColorSO* value);

  constexpr ::GlobalNamespace::ColorSO*& __get__pressedColor();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__pressedColor() const;

  constexpr void __set__pressedColor(::GlobalNamespace::ColorSO* value);

  constexpr ::GlobalNamespace::ColorSO*& __get__disabledColor();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__disabledColor() const;

  constexpr void __set__disabledColor(::GlobalNamespace::ColorSO* value);

  constexpr ::GlobalNamespace::ColorSO*& __get__selectedColor();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__selectedColor() const;

  constexpr void __set__selectedColor(::GlobalNamespace::ColorSO* value);

  constexpr ::GlobalNamespace::ColorSO*& __get__selectedAndHighlightedColor();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__selectedAndHighlightedColor() const;

  constexpr void __set__selectedAndHighlightedColor(::GlobalNamespace::ColorSO* value);

  /// @brief Method get_normalColor addr 0x213ac00 size 0xc virtual false final false
  inline ::UnityEngine::Color get_normalColor();

  /// @brief Method get_highlightedColor addr 0x213ae70 size 0xc virtual false final false
  inline ::UnityEngine::Color get_highlightedColor();

  /// @brief Method get_pressedColor addr 0x213aea8 size 0xc virtual false final false
  inline ::UnityEngine::Color get_pressedColor();

  /// @brief Method get_disabledColor addr 0x213aee0 size 0xc virtual false final false
  inline ::UnityEngine::Color get_disabledColor();

  /// @brief Method get_selectedColor addr 0x213af18 size 0xc virtual false final false
  inline ::UnityEngine::Color get_selectedColor();

  /// @brief Method get_selectedAndHighlightedColor addr 0x213af50 size 0xc virtual false final false
  inline ::UnityEngine::Color get_selectedAndHighlightedColor();

  static inline ::GlobalNamespace::ColorTransitionSO* New_ctor();

  /// @brief Method .ctor addr 0x213b75c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ColorTransitionSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorTransitionSO(ColorTransitionSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorTransitionSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorTransitionSO(ColorTransitionSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorTransitionSO();

public:
  /// @brief Field _normalColor, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____normalColor;

  /// @brief Field _highlightedColor, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____highlightedColor;

  /// @brief Field _pressedColor, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____pressedColor;

  /// @brief Field _disabledColor, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____disabledColor;

  /// @brief Field _selectedColor, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____selectedColor;

  /// @brief Field _selectedAndHighlightedColor, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____selectedAndHighlightedColor;

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
