#pragma once
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
// Type: ::GradientTransitionSO
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5443))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5452))
// CS Name: ::GradientTransitionSO*
class CORDL_TYPE GradientTransitionSO : public ::GlobalNamespace::BaseTransitionSO {
public:
  // Declarations
  /// @brief Field _normalColor1, offset 0x20, size 0x8
  __declspec(property(get = __get__normalColor1, put = __set__normalColor1))::GlobalNamespace::ColorSO* _normalColor1;

  /// @brief Field _normalColor2, offset 0x28, size 0x8
  __declspec(property(get = __get__normalColor2, put = __set__normalColor2))::GlobalNamespace::ColorSO* _normalColor2;

  /// @brief Field _highlightColor1, offset 0x30, size 0x8
  __declspec(property(get = __get__highlightColor1, put = __set__highlightColor1))::GlobalNamespace::ColorSO* _highlightColor1;

  /// @brief Field _highlightColor2, offset 0x38, size 0x8
  __declspec(property(get = __get__highlightColor2, put = __set__highlightColor2))::GlobalNamespace::ColorSO* _highlightColor2;

  /// @brief Field _pressedColor1, offset 0x40, size 0x8
  __declspec(property(get = __get__pressedColor1, put = __set__pressedColor1))::GlobalNamespace::ColorSO* _pressedColor1;

  /// @brief Field _pressedColor2, offset 0x48, size 0x8
  __declspec(property(get = __get__pressedColor2, put = __set__pressedColor2))::GlobalNamespace::ColorSO* _pressedColor2;

  /// @brief Field _disabledColor1, offset 0x50, size 0x8
  __declspec(property(get = __get__disabledColor1, put = __set__disabledColor1))::GlobalNamespace::ColorSO* _disabledColor1;

  /// @brief Field _disabledColor2, offset 0x58, size 0x8
  __declspec(property(get = __get__disabledColor2, put = __set__disabledColor2))::GlobalNamespace::ColorSO* _disabledColor2;

  /// @brief Field _selectedColor1, offset 0x60, size 0x8
  __declspec(property(get = __get__selectedColor1, put = __set__selectedColor1))::GlobalNamespace::ColorSO* _selectedColor1;

  /// @brief Field _selectedColor2, offset 0x68, size 0x8
  __declspec(property(get = __get__selectedColor2, put = __set__selectedColor2))::GlobalNamespace::ColorSO* _selectedColor2;

  /// @brief Field _selectedAndHighlightedColor1, offset 0x70, size 0x8
  __declspec(property(get = __get__selectedAndHighlightedColor1, put = __set__selectedAndHighlightedColor1))::GlobalNamespace::ColorSO* _selectedAndHighlightedColor1;

  /// @brief Field _selectedAndHighlightedColor2, offset 0x78, size 0x8
  __declspec(property(get = __get__selectedAndHighlightedColor2, put = __set__selectedAndHighlightedColor2))::GlobalNamespace::ColorSO* _selectedAndHighlightedColor2;

  __declspec(property(get = get_normalColor1))::UnityEngine::Color normalColor1;

  __declspec(property(get = get_normalColor2))::UnityEngine::Color normalColor2;

  __declspec(property(get = get_highlightColor1))::UnityEngine::Color highlightColor1;

  __declspec(property(get = get_highlightColor2))::UnityEngine::Color highlightColor2;

  __declspec(property(get = get_pressedColor1))::UnityEngine::Color pressedColor1;

  __declspec(property(get = get_pressedColor2))::UnityEngine::Color pressedColor2;

  __declspec(property(get = get_disabledColor1))::UnityEngine::Color disabledColor1;

  __declspec(property(get = get_disabledColor2))::UnityEngine::Color disabledColor2;

  __declspec(property(get = get_selectedColor1))::UnityEngine::Color selectedColor1;

  __declspec(property(get = get_selectedColor2))::UnityEngine::Color selectedColor2;

  __declspec(property(get = get_selectedAndHighlightedColor1))::UnityEngine::Color selectedAndHighlightedColor1;

  __declspec(property(get = get_selectedAndHighlightedColor2))::UnityEngine::Color selectedAndHighlightedColor2;

  constexpr ::GlobalNamespace::ColorSO*& __get__normalColor1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__normalColor1() const;

  constexpr void __set__normalColor1(::GlobalNamespace::ColorSO* value);

  constexpr ::GlobalNamespace::ColorSO*& __get__normalColor2();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__normalColor2() const;

  constexpr void __set__normalColor2(::GlobalNamespace::ColorSO* value);

  constexpr ::GlobalNamespace::ColorSO*& __get__highlightColor1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__highlightColor1() const;

  constexpr void __set__highlightColor1(::GlobalNamespace::ColorSO* value);

  constexpr ::GlobalNamespace::ColorSO*& __get__highlightColor2();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__highlightColor2() const;

  constexpr void __set__highlightColor2(::GlobalNamespace::ColorSO* value);

  constexpr ::GlobalNamespace::ColorSO*& __get__pressedColor1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__pressedColor1() const;

  constexpr void __set__pressedColor1(::GlobalNamespace::ColorSO* value);

  constexpr ::GlobalNamespace::ColorSO*& __get__pressedColor2();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__pressedColor2() const;

  constexpr void __set__pressedColor2(::GlobalNamespace::ColorSO* value);

  constexpr ::GlobalNamespace::ColorSO*& __get__disabledColor1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__disabledColor1() const;

  constexpr void __set__disabledColor1(::GlobalNamespace::ColorSO* value);

  constexpr ::GlobalNamespace::ColorSO*& __get__disabledColor2();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__disabledColor2() const;

  constexpr void __set__disabledColor2(::GlobalNamespace::ColorSO* value);

  constexpr ::GlobalNamespace::ColorSO*& __get__selectedColor1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__selectedColor1() const;

  constexpr void __set__selectedColor1(::GlobalNamespace::ColorSO* value);

  constexpr ::GlobalNamespace::ColorSO*& __get__selectedColor2();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__selectedColor2() const;

  constexpr void __set__selectedColor2(::GlobalNamespace::ColorSO* value);

  constexpr ::GlobalNamespace::ColorSO*& __get__selectedAndHighlightedColor1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__selectedAndHighlightedColor1() const;

  constexpr void __set__selectedAndHighlightedColor1(::GlobalNamespace::ColorSO* value);

  constexpr ::GlobalNamespace::ColorSO*& __get__selectedAndHighlightedColor2();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__selectedAndHighlightedColor2() const;

  constexpr void __set__selectedAndHighlightedColor2(::GlobalNamespace::ColorSO* value);

  /// @brief Method get_normalColor1 addr 0x227e0ac size 0xc virtual false final false
  inline ::UnityEngine::Color get_normalColor1();

  /// @brief Method get_normalColor2 addr 0x227e0b8 size 0xc virtual false final false
  inline ::UnityEngine::Color get_normalColor2();

  /// @brief Method get_highlightColor1 addr 0x227e350 size 0xc virtual false final false
  inline ::UnityEngine::Color get_highlightColor1();

  /// @brief Method get_highlightColor2 addr 0x227e35c size 0xc virtual false final false
  inline ::UnityEngine::Color get_highlightColor2();

  /// @brief Method get_pressedColor1 addr 0x227e3e8 size 0xc virtual false final false
  inline ::UnityEngine::Color get_pressedColor1();

  /// @brief Method get_pressedColor2 addr 0x227e3f4 size 0xc virtual false final false
  inline ::UnityEngine::Color get_pressedColor2();

  /// @brief Method get_disabledColor1 addr 0x227e480 size 0xc virtual false final false
  inline ::UnityEngine::Color get_disabledColor1();

  /// @brief Method get_disabledColor2 addr 0x227e48c size 0xc virtual false final false
  inline ::UnityEngine::Color get_disabledColor2();

  /// @brief Method get_selectedColor1 addr 0x227e518 size 0xc virtual false final false
  inline ::UnityEngine::Color get_selectedColor1();

  /// @brief Method get_selectedColor2 addr 0x227e524 size 0xc virtual false final false
  inline ::UnityEngine::Color get_selectedColor2();

  /// @brief Method get_selectedAndHighlightedColor1 addr 0x227e5b0 size 0xc virtual false final false
  inline ::UnityEngine::Color get_selectedAndHighlightedColor1();

  /// @brief Method get_selectedAndHighlightedColor2 addr 0x227e5bc size 0xc virtual false final false
  inline ::UnityEngine::Color get_selectedAndHighlightedColor2();

  static inline ::GlobalNamespace::GradientTransitionSO* New_ctor();

  /// @brief Method .ctor addr 0x227ec4c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GradientTransitionSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GradientTransitionSO(GradientTransitionSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GradientTransitionSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GradientTransitionSO(GradientTransitionSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GradientTransitionSO();

public:
  /// @brief Field _normalColor1, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____normalColor1;

  /// @brief Field _normalColor2, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____normalColor2;

  /// @brief Field _highlightColor1, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____highlightColor1;

  /// @brief Field _highlightColor2, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____highlightColor2;

  /// @brief Field _pressedColor1, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____pressedColor1;

  /// @brief Field _pressedColor2, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____pressedColor2;

  /// @brief Field _disabledColor1, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____disabledColor1;

  /// @brief Field _disabledColor2, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____disabledColor2;

  /// @brief Field _selectedColor1, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____selectedColor1;

  /// @brief Field _selectedColor2, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____selectedColor2;

  /// @brief Field _selectedAndHighlightedColor1, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____selectedAndHighlightedColor1;

  /// @brief Field _selectedAndHighlightedColor2, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____selectedAndHighlightedColor2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GradientTransitionSO, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GradientTransitionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GradientTransitionSO*, "", "GradientTransitionSO");
