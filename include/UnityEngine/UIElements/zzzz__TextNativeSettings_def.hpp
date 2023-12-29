#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__FontStyle_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextNativeSettings)
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Font;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TextNativeSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::TextNativeSettings);
// Type: UnityEngine.UIElements::TextNativeSettings
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 73, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15788)), TypeDefinitionIndex(TypeDefinitionIndex(10178)), TypeDefinitionIndex(TypeDefinitionIndex(15793))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15406))
// CS Name: ::UnityEngine.UIElements::TextNativeSettings
struct CORDL_TYPE TextNativeSettings {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "font", ty: "::UnityEngine::Font*", modifiers: "", def_value: None }, CppParam {
  // name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "scaling", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "style", ty:
  // "::UnityEngine::FontStyle", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "anchor", ty:
  // "::UnityEngine::TextAnchor", modifiers: "", def_value: None }, CppParam { name: "wordWrap", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "wordWrapWidth", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "richText", ty: "bool", modifiers: "", def_value: None }]
  constexpr TextNativeSettings(::StringW text, ::UnityEngine::Font* font, int32_t size, float_t scaling, ::UnityEngine::FontStyle style, ::UnityEngine::Color color, ::UnityEngine::TextAnchor anchor,
                               bool wordWrap, float_t wordWrapWidth, bool richText) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextNativeSettings();

  /// @brief Field text, offset: 0x0, size: 0x8, def value: None
  ::StringW text;

  /// @brief Field font, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Font* font;

  /// @brief Field size, offset: 0x10, size: 0x4, def value: None
  int32_t size;

  /// @brief Field scaling, offset: 0x14, size: 0x4, def value: None
  float_t scaling;

  /// @brief Field style, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::FontStyle style;

  /// @brief Field color, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Color color;

  /// @brief Field anchor, offset: 0x2c, size: 0x4, def value: None
  ::UnityEngine::TextAnchor anchor;

  /// @brief Field wordWrap, offset: 0x30, size: 0x1, def value: None
  bool wordWrap;

  /// @brief Field wordWrapWidth, offset: 0x34, size: 0x4, def value: None
  float_t wordWrapWidth;

  /// @brief Field richText, offset: 0x38, size: 0x1, def value: None
  bool richText;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextNativeSettings, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextNativeSettings, text) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextNativeSettings, font) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextNativeSettings, size) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextNativeSettings, scaling) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextNativeSettings, style) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextNativeSettings, color) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextNativeSettings, anchor) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextNativeSettings, wordWrap) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextNativeSettings, wordWrapWidth) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextNativeSettings, richText) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextNativeSettings, "UnityEngine.UIElements", "TextNativeSettings");
