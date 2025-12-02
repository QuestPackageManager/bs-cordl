#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/ButtonWithLabel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Button_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ButtonWithLabel)
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Background;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Controller;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class ImageStyle;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Label;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class LayoutStyle;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class TextStyle;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class ButtonWithLabel;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.Button
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel
class CORDL_TYPE ButtonWithLabel : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Button {
public:
  // Declarations
  __declspec(property(get = get_Background)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> Background;

  __declspec(property(put = set_BackgroundStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> BackgroundStyle;

  __declspec(property(get = get_Label, put = set_Label)) ::StringW Label;

  __declspec(property(put = set_LabelLayoutStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle> LabelLayoutStyle;

  __declspec(property(put = set_TextStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle> TextStyle;

  /// @brief Field _background, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__background, put = __cordl_internal_set__background)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> _background;

  /// @brief Field _backgroundStyle, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__backgroundStyle, put = __cordl_internal_set__backgroundStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>
      _backgroundStyle;

  /// @brief Field _label, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__label, put = __cordl_internal_set__label)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> _label;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel* New_ctor();

  /// @brief Method OnHoverChanged, addr 0x5844464, size 0x20, virtual true, abstract: false, final false
  inline void OnHoverChanged();

  /// @brief Method OnTransparencyChanged, addr 0x5844484, size 0x8c, virtual true, abstract: false, final false
  inline void OnTransparencyChanged();

  /// @brief Method RefreshStyle, addr 0x58441d0, size 0xc, virtual false, abstract: false, final false
  inline void RefreshStyle();

  /// @brief Method Setup, addr 0x5844320, size 0x144, virtual true, abstract: false, final false
  inline void Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner);

  /// @brief Method UpdateBackground, addr 0x5844510, size 0x17c, virtual true, abstract: false, final false
  inline void UpdateBackground();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> const& __cordl_internal_get__background() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background>& __cordl_internal_get__background();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> const& __cordl_internal_get__backgroundStyle() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>& __cordl_internal_get__backgroundStyle();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> const& __cordl_internal_get__label() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label>& __cordl_internal_get__label();

  constexpr void __cordl_internal_set__background(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> value);

  constexpr void __cordl_internal_set__backgroundStyle(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> value);

  constexpr void __cordl_internal_set__label(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> value);

  /// @brief Method .ctor, addr 0x584468c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Background, addr 0x5844140, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> get_Background();

  /// @brief Method get_Label, addr 0x5844288, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW get_Label();

  /// @brief Method set_BackgroundStyle, addr 0x5844148, size 0x88, virtual false, abstract: false, final false
  inline void set_BackgroundStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* value);

  /// @brief Method set_Label, addr 0x58442d4, size 0x2c, virtual false, abstract: false, final false
  inline void set_Label(::StringW value);

  /// @brief Method set_LabelLayoutStyle, addr 0x5844270, size 0x18, virtual false, abstract: false, final false
  inline void set_LabelLayoutStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle* value);

  /// @brief Method set_TextStyle, addr 0x58441dc, size 0x14, virtual false, abstract: false, final false
  inline void set_TextStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ButtonWithLabel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ButtonWithLabel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ButtonWithLabel(ButtonWithLabel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ButtonWithLabel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ButtonWithLabel(ButtonWithLabel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18345 };

  /// @brief Field _label, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> ____label;

  /// @brief Field _background, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> ____background;

  /// @brief Field _backgroundStyle, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> ____backgroundStyle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel, ____label) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel, ____background) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel, ____backgroundStyle) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel, 0xa0>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "ButtonWithLabel");
