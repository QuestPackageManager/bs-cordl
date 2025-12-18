#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Value.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Value)
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
class TextStyle;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class Value;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Value);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller
namespace Meta::XR::ImmersiveDebugger::UserInterface {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Value
class CORDL_TYPE Value : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller {
public:
  // Declarations
  __declspec(property(get = get_Background)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> Background;

  __declspec(property(put = set_BackgroundStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> BackgroundStyle;

  __declspec(property(get = get_Content, put = set_Content)) ::StringW Content;

  __declspec(property(get = get_Label)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> Label;

  __declspec(property(get = get_TextStyle, put = set_TextStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle> TextStyle;

  /// @brief Field _background, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__background, put = __cordl_internal_set__background)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> _background;

  /// @brief Field _backgroundStyle, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__backgroundStyle, put = __cordl_internal_set__backgroundStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>
      _backgroundStyle;

  /// @brief Field _label, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__label, put = __cordl_internal_set__label)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> _label;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Value* New_ctor();

  /// @brief Method OnTransparencyChanged, addr 0x58a82c4, size 0xc, virtual true, abstract: false, final false
  inline void OnTransparencyChanged();

  /// @brief Method RefreshStyle, addr 0x58a8038, size 0xc, virtual false, abstract: false, final false
  inline void RefreshStyle();

  /// @brief Method Setup, addr 0x58a805c, size 0x13c, virtual true, abstract: false, final false
  inline void Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner);

  /// @brief Method UpdateBackground, addr 0x58a8198, size 0x12c, virtual true, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x58a8328, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Background, addr 0x58a8028, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> get_Background();

  /// @brief Method get_Content, addr 0x58a82d0, size 0x2c, virtual true, abstract: false, final false
  inline ::StringW get_Content();

  /// @brief Method get_Label, addr 0x58a8030, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> get_Label();

  /// @brief Method get_TextStyle, addr 0x58a8044, size 0x18, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle> get_TextStyle();

  /// @brief Method set_BackgroundStyle, addr 0x58a4f44, size 0x88, virtual false, abstract: false, final false
  inline void set_BackgroundStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* value);

  /// @brief Method set_Content, addr 0x58a82fc, size 0x2c, virtual true, abstract: false, final false
  inline void set_Content(::StringW value);

  /// @brief Method set_TextStyle, addr 0x58a4f2c, size 0x18, virtual false, abstract: false, final false
  inline void set_TextStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Value();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Value", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Value(Value&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Value", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Value(Value const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18352 };

  /// @brief Field _label, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> ____label;

  /// @brief Field _background, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> ____background;

  /// @brief Field _backgroundStyle, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> ____backgroundStyle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Value, ____label) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Value, ____background) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Value, ____backgroundStyle) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Value, 0x88>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Value);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Value*, "Meta.XR.ImmersiveDebugger.UserInterface", "Value");
