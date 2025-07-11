#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextColorGradient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/Text/zzzz__ColorGradientMode_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(TextColorGradient)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextColorGradient;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::TextColorGradient);
// Dependencies UnityEngine.Color, UnityEngine.ScriptableObject, UnityEngine.TextCore.Text.ColorGradientMode
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: UnityEngine.TextCore.Text.TextColorGradient
class CORDL_TYPE TextColorGradient : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field bottomLeft, offset 0x3c, size 0x10
  __declspec(property(get = __cordl_internal_get_bottomLeft, put = __cordl_internal_set_bottomLeft)) ::UnityEngine::Color bottomLeft;

  /// @brief Field bottomRight, offset 0x4c, size 0x10
  __declspec(property(get = __cordl_internal_get_bottomRight, put = __cordl_internal_set_bottomRight)) ::UnityEngine::Color bottomRight;

  /// @brief Field colorMode, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_colorMode, put = __cordl_internal_set_colorMode)) ::UnityEngine::TextCore::Text::ColorGradientMode colorMode;

  /// @brief Field k_DefaultColor, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_k_DefaultColor, put = setStaticF_k_DefaultColor)) ::UnityEngine::Color k_DefaultColor;

  /// @brief Field topLeft, offset 0x1c, size 0x10
  __declspec(property(get = __cordl_internal_get_topLeft, put = __cordl_internal_set_topLeft)) ::UnityEngine::Color topLeft;

  /// @brief Field topRight, offset 0x2c, size 0x10
  __declspec(property(get = __cordl_internal_get_topRight, put = __cordl_internal_set_topRight)) ::UnityEngine::Color topRight;

  static inline ::UnityEngine::TextCore::Text::TextColorGradient* New_ctor();

  static inline ::UnityEngine::TextCore::Text::TextColorGradient* New_ctor(::UnityEngine::Color color);

  static inline ::UnityEngine::TextCore::Text::TextColorGradient* New_ctor(::UnityEngine::Color color0, ::UnityEngine::Color color1, ::UnityEngine::Color color2, ::UnityEngine::Color color3);

  constexpr ::UnityEngine::Color const& __cordl_internal_get_bottomLeft() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_bottomLeft();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_bottomRight() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_bottomRight();

  constexpr ::UnityEngine::TextCore::Text::ColorGradientMode const& __cordl_internal_get_colorMode() const;

  constexpr ::UnityEngine::TextCore::Text::ColorGradientMode& __cordl_internal_get_colorMode();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_topLeft() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_topLeft();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_topRight() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_topRight();

  constexpr void __cordl_internal_set_bottomLeft(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_bottomRight(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_colorMode(::UnityEngine::TextCore::Text::ColorGradientMode value);

  constexpr void __cordl_internal_set_topLeft(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_topRight(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x4931418, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x49314b4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Color color);

  /// @brief Method .ctor, addr 0x4931520, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Color color0, ::UnityEngine::Color color1, ::UnityEngine::Color color2, ::UnityEngine::Color color3);

  static inline ::UnityEngine::Color getStaticF_k_DefaultColor();

  static inline void setStaticF_k_DefaultColor(::UnityEngine::Color value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextColorGradient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextColorGradient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextColorGradient(TextColorGradient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextColorGradient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextColorGradient(TextColorGradient const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15260 };

  /// @brief Field k_DefaultColorMode value: I32(3)
  static ::UnityEngine::TextCore::Text::ColorGradientMode const k_DefaultColorMode;

  /// @brief Field colorMode, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::ColorGradientMode ___colorMode;

  /// @brief Field topLeft, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Color ___topLeft;

  /// @brief Field topRight, offset: 0x2c, size: 0x10, def value: None
  ::UnityEngine::Color ___topRight;

  /// @brief Field bottomLeft, offset: 0x3c, size: 0x10, def value: None
  ::UnityEngine::Color ___bottomLeft;

  /// @brief Field bottomRight, offset: 0x4c, size: 0x10, def value: None
  ::UnityEngine::Color ___bottomRight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::TextColorGradient, ___colorMode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextColorGradient, ___topLeft) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextColorGradient, ___topRight) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextColorGradient, ___bottomLeft) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextColorGradient, ___bottomRight) == 0x4c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextColorGradient, 0x60>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextColorGradient);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextColorGradient*, "UnityEngine.TextCore.Text", "TextColorGradient");
