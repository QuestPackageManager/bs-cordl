#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__FontStyle_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CursorPositionStylePainterParameters)
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct TextNativeSettings;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct CursorPositionStylePainterParameters;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::CursorPositionStylePainterParameters);
// Type: UnityEngine.UIElements::CursorPositionStylePainterParameters
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15896)), TypeDefinitionIndex(TypeDefinitionIndex(10165)), TypeDefinitionIndex(TypeDefinitionIndex(15901))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6770))
// CS Name: ::UnityEngine.UIElements::CursorPositionStylePainterParameters
struct CORDL_TYPE CursorPositionStylePainterParameters {
public:
  // Declarations
  /// @brief Method GetDefault addr 0x2db6de0 size 0x148 virtual false final false
  static inline ::UnityEngine::UIElements::CursorPositionStylePainterParameters GetDefault(::UnityEngine::UIElements::VisualElement* ve, ::StringW text);

  /// @brief Method GetTextNativeSettings addr 0x2db6f28 size 0x50 virtual false final false
  inline ::UnityEngine::UIElements::TextNativeSettings GetTextNativeSettings(float_t scaling);

  // Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "font", ty: "::UnityEngine::Font*", modifiers: "", def_value: None }, CppParam { name: "fontSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fontStyle", ty:
  // "::UnityEngine::FontStyle", modifiers: "", def_value: None }, CppParam { name: "anchor", ty: "::UnityEngine::TextAnchor", modifiers: "", def_value: None }, CppParam { name: "wordWrapWidth", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "richText", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "cursorIndex", ty: "int32_t", modifiers: "", def_value:
  // None }]
  constexpr CursorPositionStylePainterParameters(::UnityEngine::Rect rect, ::StringW text, ::UnityEngine::Font* font, int32_t fontSize, ::UnityEngine::FontStyle fontStyle,
                                                 ::UnityEngine::TextAnchor anchor, float_t wordWrapWidth, bool richText, int32_t cursorIndex) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr CursorPositionStylePainterParameters();

  /// @brief Field rect, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Rect rect;

  /// @brief Field text, offset: 0x10, size: 0x8, def value: None
  ::StringW text;

  /// @brief Field font, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Font* font;

  /// @brief Field fontSize, offset: 0x20, size: 0x4, def value: None
  int32_t fontSize;

  /// @brief Field fontStyle, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::FontStyle fontStyle;

  /// @brief Field anchor, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::TextAnchor anchor;

  /// @brief Field wordWrapWidth, offset: 0x2c, size: 0x4, def value: None
  float_t wordWrapWidth;

  /// @brief Field richText, offset: 0x30, size: 0x1, def value: None
  bool richText;

  /// @brief Field cursorIndex, offset: 0x34, size: 0x4, def value: None
  int32_t cursorIndex;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::CursorPositionStylePainterParameters, 0x38>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::CursorPositionStylePainterParameters, "UnityEngine.UIElements", "CursorPositionStylePainterParameters");
