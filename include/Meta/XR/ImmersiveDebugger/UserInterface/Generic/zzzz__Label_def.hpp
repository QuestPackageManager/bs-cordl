#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/Label.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Label)
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Controller;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class TextStyle;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Label;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Label
class CORDL_TYPE Label : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller {
public:
  // Declarations
  __declspec(property(get = get_Content, put = set_Content)) ::StringW Content;

  __declspec(property(get = get_Text, put = set_Text)) ::UnityW<::UnityEngine::UI::Text> Text;

  __declspec(property(get = get_TextStyle, put = set_TextStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle> TextStyle;

  /// @brief Field <Text>k__BackingField, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__Text_k__BackingField, put = __cordl_internal_set__Text_k__BackingField)) ::UnityW<::UnityEngine::UI::Text> _Text_k__BackingField;

  /// @brief Field _textStyle, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__textStyle, put = __cordl_internal_set__textStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle> _textStyle;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label* New_ctor();

  /// @brief Method Setup, addr 0x58469cc, size 0xe8, virtual true, abstract: false, final false
  inline void Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner);

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get__Text_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get__Text_k__BackingField();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle> const& __cordl_internal_get__textStyle() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle>& __cordl_internal_get__textStyle();

  constexpr void __cordl_internal_set__Text_k__BackingField(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set__textStyle(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle> value);

  /// @brief Method .ctor, addr 0x5846abc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Content, addr 0x58442b4, size 0x20, virtual false, abstract: false, final false
  inline ::StringW get_Content();

  /// @brief Method get_Text, addr 0x58469bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Text> get_Text();

  /// @brief Method get_TextStyle, addr 0x5846ab4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle> get_TextStyle();

  /// @brief Method set_Content, addr 0x5844300, size 0x20, virtual false, abstract: false, final false
  inline void set_Content(::StringW value);

  /// @brief Method set_Text, addr 0x58469c4, size 0x8, virtual false, abstract: false, final false
  inline void set_Text(::UnityEngine::UI::Text* value);

  /// @brief Method set_TextStyle, addr 0x58441f0, size 0x80, virtual false, abstract: false, final false
  inline void set_TextStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Label();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Label", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Label(Label&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Label", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Label(Label const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18352 };

  /// @brief Field <Text>k__BackingField, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ____Text_k__BackingField;

  /// @brief Field _textStyle, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle> ____textStyle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label, ____Text_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label, ____textStyle) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label, 0x80>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "Label");
