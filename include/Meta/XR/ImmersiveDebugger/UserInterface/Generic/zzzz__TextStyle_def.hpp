#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/TextStyle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Style_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextStyle)
namespace UnityEngine {
class Font;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class TextStyle;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.Style, UnityEngine.Color, UnityEngine.TextAnchor
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.TextStyle
class CORDL_TYPE TextStyle : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style {
public:
  // Declarations
  /// @brief Field color, offset 0x2c, size 0x10
  __declspec(property(get = __cordl_internal_get_color, put = __cordl_internal_set_color)) ::UnityEngine::Color color;

  /// @brief Field font, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_font, put = __cordl_internal_set_font)) ::UnityW<::UnityEngine::Font> font;

  /// @brief Field fontSize, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_fontSize, put = __cordl_internal_set_fontSize)) int32_t fontSize;

  /// @brief Field textAlignement, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_textAlignement, put = __cordl_internal_set_textAlignement)) ::UnityEngine::TextAnchor textAlignement;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle* New_ctor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_color();

  constexpr ::UnityW<::UnityEngine::Font> const& __cordl_internal_get_font() const;

  constexpr ::UnityW<::UnityEngine::Font>& __cordl_internal_get_font();

  constexpr int32_t const& __cordl_internal_get_fontSize() const;

  constexpr int32_t& __cordl_internal_get_fontSize();

  constexpr ::UnityEngine::TextAnchor const& __cordl_internal_get_textAlignement() const;

  constexpr ::UnityEngine::TextAnchor& __cordl_internal_get_textAlignement();

  constexpr void __cordl_internal_set_color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_font(::UnityW<::UnityEngine::Font> value);

  constexpr void __cordl_internal_set_fontSize(int32_t value);

  constexpr void __cordl_internal_set_textAlignement(::UnityEngine::TextAnchor value);

  /// @brief Method .ctor, addr 0x584af18, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextStyle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextStyle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextStyle(TextStyle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextStyle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextStyle(TextStyle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18373 };

  /// @brief Field textAlignement, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::TextAnchor ___textAlignement;

  /// @brief Field font, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Font> ___font;

  /// @brief Field fontSize, offset: 0x28, size: 0x4, def value: None
  int32_t ___fontSize;

  /// @brief Field color, offset: 0x2c, size: 0x10, def value: None
  ::UnityEngine::Color ___color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle, ___textAlignement) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle, ___font) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle, ___fontSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle, ___color) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle, 0x40>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "TextStyle");
