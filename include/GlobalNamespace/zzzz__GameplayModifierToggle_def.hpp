#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GameplayModifierToggle)
namespace GlobalNamespace {
class GameplayModifierParamsSO;
}
namespace HMUI {
class HoverTextSetter;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayModifierToggle;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameplayModifierToggle);
// Type: ::GameplayModifierToggle
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5530))
// CS Name: ::GameplayModifierToggle*
class CORDL_TYPE GameplayModifierToggle : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _gameplayModifier, offset 0x18, size 0x8
  __declspec(property(get = __get__gameplayModifier, put = __set__gameplayModifier))::GlobalNamespace::GameplayModifierParamsSO* _gameplayModifier;

  /// @brief Field _nameText, offset 0x20, size 0x8
  __declspec(property(get = __get__nameText, put = __set__nameText))::TMPro::TextMeshProUGUI* _nameText;

  /// @brief Field _multiplierText, offset 0x28, size 0x8
  __declspec(property(get = __get__multiplierText, put = __set__multiplierText))::TMPro::TextMeshProUGUI* _multiplierText;

  /// @brief Field _hoverTextSetter, offset 0x30, size 0x8
  __declspec(property(get = __get__hoverTextSetter, put = __set__hoverTextSetter))::HMUI::HoverTextSetter* _hoverTextSetter;

  /// @brief Field _icon, offset 0x38, size 0x8
  __declspec(property(get = __get__icon, put = __set__icon))::UnityEngine::UI::Image* _icon;

  /// @brief Field _toggle, offset 0x40, size 0x8
  __declspec(property(get = __get__toggle, put = __set__toggle))::UnityEngine::UI::Toggle* _toggle;

  /// @brief Field _positiveColor, offset 0x48, size 0x10
  __declspec(property(get = __get__positiveColor, put = __set__positiveColor))::UnityEngine::Color _positiveColor;

  __declspec(property(get = get_toggle))::UnityEngine::UI::Toggle* toggle;

  __declspec(property(get = get_gameplayModifier))::GlobalNamespace::GameplayModifierParamsSO* gameplayModifier;

  constexpr ::GlobalNamespace::GameplayModifierParamsSO*& __get__gameplayModifier();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifierParamsSO*> const& __get__gameplayModifier() const;

  constexpr void __set__gameplayModifier(::GlobalNamespace::GameplayModifierParamsSO* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__nameText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__nameText() const;

  constexpr void __set__nameText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__multiplierText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__multiplierText() const;

  constexpr void __set__multiplierText(::TMPro::TextMeshProUGUI* value);

  constexpr ::HMUI::HoverTextSetter*& __get__hoverTextSetter();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::HoverTextSetter*> const& __get__hoverTextSetter() const;

  constexpr void __set__hoverTextSetter(::HMUI::HoverTextSetter* value);

  constexpr ::UnityEngine::UI::Image*& __get__icon();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get__icon() const;

  constexpr void __set__icon(::UnityEngine::UI::Image* value);

  constexpr ::UnityEngine::UI::Toggle*& __get__toggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__toggle() const;

  constexpr void __set__toggle(::UnityEngine::UI::Toggle* value);

  constexpr ::UnityEngine::Color& __get__positiveColor();

  constexpr ::UnityEngine::Color const& __get__positiveColor() const;

  constexpr void __set__positiveColor(::UnityEngine::Color value);

  /// @brief Method get_toggle, addr 0x229e1ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::Toggle* get_toggle();

  /// @brief Method get_gameplayModifier, addr 0x229e1b4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayModifierParamsSO* get_gameplayModifier();

  /// @brief Method Start, addr 0x229e1bc, size 0x37c, virtual false, abstract: false, final false
  inline void Start();

  static inline ::GlobalNamespace::GameplayModifierToggle* New_ctor();

  /// @brief Method .ctor, addr 0x229e538, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifierToggle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayModifierToggle(GameplayModifierToggle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifierToggle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayModifierToggle(GameplayModifierToggle const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayModifierToggle();

public:
  /// @brief Field _gameplayModifier, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifierParamsSO* ____gameplayModifier;

  /// @brief Field _nameText, offset: 0x20, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____nameText;

  /// @brief Field _multiplierText, offset: 0x28, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____multiplierText;

  /// @brief Field _hoverTextSetter, offset: 0x30, size: 0x8, def value: None
  ::HMUI::HoverTextSetter* ____hoverTextSetter;

  /// @brief Field _icon, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ____icon;

  /// @brief Field _toggle, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____toggle;

  /// @brief Field _positiveColor, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Color ____positiveColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifierToggle, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifierToggle, ____gameplayModifier) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifierToggle, ____nameText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifierToggle, ____multiplierText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifierToggle, ____hoverTextSetter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifierToggle, ____icon) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifierToggle, ____toggle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifierToggle, ____positiveColor) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplayModifierToggle);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifierToggle*, "", "GameplayModifierToggle");
