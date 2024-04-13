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
// CS Name: ::GameplayModifierToggle*
class CORDL_TYPE GameplayModifierToggle : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _gameplayModifier, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifier, put = __cordl_internal_set__gameplayModifier))::UnityW<::GlobalNamespace::GameplayModifierParamsSO> _gameplayModifier;

  /// @brief Field _hoverTextSetter, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__hoverTextSetter, put = __cordl_internal_set__hoverTextSetter))::UnityW<::HMUI::HoverTextSetter> _hoverTextSetter;

  /// @brief Field _icon, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__icon, put = __cordl_internal_set__icon))::UnityW<::UnityEngine::UI::Image> _icon;

  /// @brief Field _multiplierText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplierText, put = __cordl_internal_set__multiplierText))::UnityW<::TMPro::TextMeshProUGUI> _multiplierText;

  /// @brief Field _nameText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__nameText, put = __cordl_internal_set__nameText))::UnityW<::TMPro::TextMeshProUGUI> _nameText;

  /// @brief Field _positiveColor, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get__positiveColor, put = __cordl_internal_set__positiveColor))::UnityEngine::Color _positiveColor;

  /// @brief Field _toggle, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__toggle, put = __cordl_internal_set__toggle))::UnityW<::UnityEngine::UI::Toggle> _toggle;

  __declspec(property(get = get_gameplayModifier))::UnityW<::GlobalNamespace::GameplayModifierParamsSO> gameplayModifier;

  __declspec(property(get = get_toggle))::UnityW<::UnityEngine::UI::Toggle> toggle;

  static inline ::GlobalNamespace::GameplayModifierToggle* New_ctor();

  /// @brief Method Start, addr 0x265d2f8, size 0x370, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& __cordl_internal_get__gameplayModifier() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& __cordl_internal_get__gameplayModifier();

  constexpr ::UnityW<::HMUI::HoverTextSetter> const& __cordl_internal_get__hoverTextSetter() const;

  constexpr ::UnityW<::HMUI::HoverTextSetter>& __cordl_internal_get__hoverTextSetter();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__icon() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__icon();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__multiplierText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__multiplierText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__nameText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__nameText();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__positiveColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__positiveColor();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__toggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__toggle();

  constexpr void __cordl_internal_set__gameplayModifier(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value);

  constexpr void __cordl_internal_set__hoverTextSetter(::UnityW<::HMUI::HoverTextSetter> value);

  constexpr void __cordl_internal_set__icon(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__multiplierText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__nameText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__positiveColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__toggle(::UnityW<::UnityEngine::UI::Toggle> value);

  /// @brief Method .ctor, addr 0x265d668, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_gameplayModifier, addr 0x265d2f0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> get_gameplayModifier();

  /// @brief Method get_toggle, addr 0x265d2e8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Toggle> get_toggle();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayModifierToggle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifierToggle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayModifierToggle(GameplayModifierToggle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifierToggle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayModifierToggle(GameplayModifierToggle const&) = delete;

  /// @brief Field _gameplayModifier, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> ____gameplayModifier;

  /// @brief Field _nameText, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____nameText;

  /// @brief Field _multiplierText, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____multiplierText;

  /// @brief Field _hoverTextSetter, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::HMUI::HoverTextSetter> ____hoverTextSetter;

  /// @brief Field _icon, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____icon;

  /// @brief Field _toggle, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____toggle;

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
