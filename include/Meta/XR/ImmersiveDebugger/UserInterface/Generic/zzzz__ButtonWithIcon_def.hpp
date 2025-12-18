#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/ButtonWithIcon.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Button_def.hpp"
CORDL_MODULE_EXPORT(ButtonWithIcon)
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Background;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Controller;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Icon;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class ImageStyle;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class ButtonWithIcon;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.Button
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon
class CORDL_TYPE ButtonWithIcon : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Button {
public:
  // Declarations
  __declspec(property(get = get_BackgroundStyle, put = set_BackgroundStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> BackgroundStyle;

  __declspec(property(put = set_Icon)) ::UnityW<::UnityEngine::Texture2D> Icon;

  __declspec(property(put = set_IconStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> IconStyle;

  /// @brief Field _background, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__background, put = __cordl_internal_set__background)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> _background;

  /// @brief Field _backgroundStyle, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__backgroundStyle, put = __cordl_internal_set__backgroundStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>
      _backgroundStyle;

  /// @brief Field _icon, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__icon, put = __cordl_internal_set__icon)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Icon> _icon;

  /// @brief Field _iconStyle, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__iconStyle, put = __cordl_internal_set__iconStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> _iconStyle;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon* New_ctor();

  /// @brief Method OnHoverChanged, addr 0x58aa474, size 0x30, virtual true, abstract: false, final false
  inline void OnHoverChanged();

  /// @brief Method OnTransparencyChanged, addr 0x58aa7cc, size 0xcc, virtual true, abstract: false, final false
  inline void OnTransparencyChanged();

  /// @brief Method RefreshStyle, addr 0x58aa23c, size 0x28, virtual false, abstract: false, final false
  inline void RefreshStyle();

  /// @brief Method Setup, addr 0x58aa2b0, size 0x144, virtual true, abstract: false, final false
  inline void Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner);

  /// @brief Method UpdateBackground, addr 0x58aa4a4, size 0x150, virtual true, abstract: false, final false
  inline void UpdateBackground();

  /// @brief Method UpdateIcon, addr 0x58aa5f4, size 0x194, virtual true, abstract: false, final false
  inline void UpdateIcon();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> const& __cordl_internal_get__background() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background>& __cordl_internal_get__background();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> const& __cordl_internal_get__backgroundStyle() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>& __cordl_internal_get__backgroundStyle();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Icon> const& __cordl_internal_get__icon() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Icon>& __cordl_internal_get__icon();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> const& __cordl_internal_get__iconStyle() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>& __cordl_internal_get__iconStyle();

  constexpr void __cordl_internal_set__background(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> value);

  constexpr void __cordl_internal_set__backgroundStyle(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> value);

  constexpr void __cordl_internal_set__icon(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Icon> value);

  constexpr void __cordl_internal_set__iconStyle(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> value);

  /// @brief Method .ctor, addr 0x58aa898, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BackgroundStyle, addr 0x58aa128, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> get_BackgroundStyle();

  /// @brief Method set_BackgroundStyle, addr 0x58aa130, size 0x10c, virtual false, abstract: false, final false
  inline void set_BackgroundStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* value);

  /// @brief Method set_Icon, addr 0x58aa294, size 0x1c, virtual false, abstract: false, final false
  inline void set_Icon(::UnityEngine::Texture2D* value);

  /// @brief Method set_IconStyle, addr 0x58aa264, size 0x30, virtual false, abstract: false, final false
  inline void set_IconStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ButtonWithIcon();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ButtonWithIcon", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ButtonWithIcon(ButtonWithIcon&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ButtonWithIcon", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ButtonWithIcon(ButtonWithIcon const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18359 };

  /// @brief Field _icon, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Icon> ____icon;

  /// @brief Field _background, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> ____background;

  /// @brief Field _backgroundStyle, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> ____backgroundStyle;

  /// @brief Field _iconStyle, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> ____iconStyle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon, ____icon) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon, ____background) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon, ____backgroundStyle) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon, ____iconStyle) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon, 0xa8>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "ButtonWithIcon");
