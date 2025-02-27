#pragma once
// IWYU pragma private; include "GlobalNamespace/GradientTransitionSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseTransitionSO_def.hpp"
CORDL_MODULE_EXPORT(GradientTransitionSO)
namespace GlobalNamespace {
class ColorSO;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class GradientTransitionSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GradientTransitionSO);
// Dependencies BaseTransitionSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: GradientTransitionSO
class CORDL_TYPE GradientTransitionSO : public ::GlobalNamespace::BaseTransitionSO {
public:
  // Declarations
  /// @brief Field _disabledColor1, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__disabledColor1, put = __cordl_internal_set__disabledColor1)) ::UnityW<::GlobalNamespace::ColorSO> _disabledColor1;

  /// @brief Field _disabledColor2, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__disabledColor2, put = __cordl_internal_set__disabledColor2)) ::UnityW<::GlobalNamespace::ColorSO> _disabledColor2;

  /// @brief Field _highlightColor1, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__highlightColor1, put = __cordl_internal_set__highlightColor1)) ::UnityW<::GlobalNamespace::ColorSO> _highlightColor1;

  /// @brief Field _highlightColor2, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__highlightColor2, put = __cordl_internal_set__highlightColor2)) ::UnityW<::GlobalNamespace::ColorSO> _highlightColor2;

  /// @brief Field _normalColor1, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__normalColor1, put = __cordl_internal_set__normalColor1)) ::UnityW<::GlobalNamespace::ColorSO> _normalColor1;

  /// @brief Field _normalColor2, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__normalColor2, put = __cordl_internal_set__normalColor2)) ::UnityW<::GlobalNamespace::ColorSO> _normalColor2;

  /// @brief Field _pressedColor1, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__pressedColor1, put = __cordl_internal_set__pressedColor1)) ::UnityW<::GlobalNamespace::ColorSO> _pressedColor1;

  /// @brief Field _pressedColor2, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__pressedColor2, put = __cordl_internal_set__pressedColor2)) ::UnityW<::GlobalNamespace::ColorSO> _pressedColor2;

  /// @brief Field _selectedAndHighlightedColor1, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedAndHighlightedColor1, put = __cordl_internal_set__selectedAndHighlightedColor1)) ::UnityW<::GlobalNamespace::ColorSO>
      _selectedAndHighlightedColor1;

  /// @brief Field _selectedAndHighlightedColor2, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedAndHighlightedColor2, put = __cordl_internal_set__selectedAndHighlightedColor2)) ::UnityW<::GlobalNamespace::ColorSO>
      _selectedAndHighlightedColor2;

  /// @brief Field _selectedColor1, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedColor1, put = __cordl_internal_set__selectedColor1)) ::UnityW<::GlobalNamespace::ColorSO> _selectedColor1;

  /// @brief Field _selectedColor2, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedColor2, put = __cordl_internal_set__selectedColor2)) ::UnityW<::GlobalNamespace::ColorSO> _selectedColor2;

  __declspec(property(get = get_disabledColor1)) ::UnityEngine::Color disabledColor1;

  __declspec(property(get = get_disabledColor2)) ::UnityEngine::Color disabledColor2;

  __declspec(property(get = get_highlightColor1)) ::UnityEngine::Color highlightColor1;

  __declspec(property(get = get_highlightColor2)) ::UnityEngine::Color highlightColor2;

  __declspec(property(get = get_normalColor1)) ::UnityEngine::Color normalColor1;

  __declspec(property(get = get_normalColor2)) ::UnityEngine::Color normalColor2;

  __declspec(property(get = get_pressedColor1)) ::UnityEngine::Color pressedColor1;

  __declspec(property(get = get_pressedColor2)) ::UnityEngine::Color pressedColor2;

  __declspec(property(get = get_selectedAndHighlightedColor1)) ::UnityEngine::Color selectedAndHighlightedColor1;

  __declspec(property(get = get_selectedAndHighlightedColor2)) ::UnityEngine::Color selectedAndHighlightedColor2;

  __declspec(property(get = get_selectedColor1)) ::UnityEngine::Color selectedColor1;

  __declspec(property(get = get_selectedColor2)) ::UnityEngine::Color selectedColor2;

  static inline ::GlobalNamespace::GradientTransitionSO* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__disabledColor1() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__disabledColor1();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__disabledColor2() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__disabledColor2();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__highlightColor1() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__highlightColor1();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__highlightColor2() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__highlightColor2();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__normalColor1() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__normalColor1();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__normalColor2() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__normalColor2();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__pressedColor1() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__pressedColor1();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__pressedColor2() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__pressedColor2();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__selectedAndHighlightedColor1() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__selectedAndHighlightedColor1();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__selectedAndHighlightedColor2() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__selectedAndHighlightedColor2();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__selectedColor1() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__selectedColor1();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__selectedColor2() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__selectedColor2();

  constexpr void __cordl_internal_set__disabledColor1(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__disabledColor2(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__highlightColor1(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__highlightColor2(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__normalColor1(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__normalColor2(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__pressedColor1(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__pressedColor2(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__selectedAndHighlightedColor1(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__selectedAndHighlightedColor2(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__selectedColor1(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__selectedColor2(::UnityW<::GlobalNamespace::ColorSO> value);

  /// @brief Method .ctor, addr 0x44e70e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_disabledColor1, addr 0x44e5018, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_disabledColor1();

  /// @brief Method get_disabledColor2, addr 0x44e5024, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_disabledColor2();

  /// @brief Method get_highlightColor1, addr 0x44e4ec8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_highlightColor1();

  /// @brief Method get_highlightColor2, addr 0x44e4ed4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_highlightColor2();

  /// @brief Method get_normalColor1, addr 0x44e4bf8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_normalColor1();

  /// @brief Method get_normalColor2, addr 0x44e4c04, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_normalColor2();

  /// @brief Method get_pressedColor1, addr 0x44e4f70, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_pressedColor1();

  /// @brief Method get_pressedColor2, addr 0x44e4f7c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_pressedColor2();

  /// @brief Method get_selectedAndHighlightedColor1, addr 0x44e5168, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_selectedAndHighlightedColor1();

  /// @brief Method get_selectedAndHighlightedColor2, addr 0x44e5174, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_selectedAndHighlightedColor2();

  /// @brief Method get_selectedColor1, addr 0x44e50c0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_selectedColor1();

  /// @brief Method get_selectedColor2, addr 0x44e50cc, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_selectedColor2();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GradientTransitionSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GradientTransitionSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GradientTransitionSO(GradientTransitionSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GradientTransitionSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GradientTransitionSO(GradientTransitionSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18225 };

  /// @brief Field _normalColor1, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____normalColor1;

  /// @brief Field _normalColor2, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____normalColor2;

  /// @brief Field _highlightColor1, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____highlightColor1;

  /// @brief Field _highlightColor2, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____highlightColor2;

  /// @brief Field _pressedColor1, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____pressedColor1;

  /// @brief Field _pressedColor2, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____pressedColor2;

  /// @brief Field _disabledColor1, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____disabledColor1;

  /// @brief Field _disabledColor2, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____disabledColor2;

  /// @brief Field _selectedColor1, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____selectedColor1;

  /// @brief Field _selectedColor2, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____selectedColor2;

  /// @brief Field _selectedAndHighlightedColor1, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____selectedAndHighlightedColor1;

  /// @brief Field _selectedAndHighlightedColor2, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____selectedAndHighlightedColor2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GradientTransitionSO, ____normalColor1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GradientTransitionSO, ____normalColor2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GradientTransitionSO, ____highlightColor1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GradientTransitionSO, ____highlightColor2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GradientTransitionSO, ____pressedColor1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GradientTransitionSO, ____pressedColor2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GradientTransitionSO, ____disabledColor1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GradientTransitionSO, ____disabledColor2) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GradientTransitionSO, ____selectedColor1) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GradientTransitionSO, ____selectedColor2) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GradientTransitionSO, ____selectedAndHighlightedColor1) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GradientTransitionSO, ____selectedAndHighlightedColor2) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GradientTransitionSO, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GradientTransitionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GradientTransitionSO*, "", "GradientTransitionSO");
