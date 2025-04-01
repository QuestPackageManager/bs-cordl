#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextElementInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__HighlightState_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElementType_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextVertex_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextElementInfo)
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore::Text {
class SpriteAsset;
}
namespace UnityEngine::TextCore::Text {
class TextElement;
}
namespace UnityEngine::TextCore {
class Glyph;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct TextElementInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::TextElementInfo);
// Dependencies UnityEngine.Color32, UnityEngine.TextCore.Text.FontStyles, UnityEngine.TextCore.Text.HighlightState, UnityEngine.TextCore.Text.TextElementType, UnityEngine.TextCore.Text.TextVertex,
// UnityEngine.Vector3
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: UnityEngine.TextCore.Text.TextElementInfo
struct CORDL_TYPE TextElementInfo {
public:
  // Declarations
  /// @brief Method ToString, addr 0x492b9a8, size 0x16f8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextElementInfo();

  // Ctor Parameters [CppParam { name: "character", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "elementType", ty: "::UnityEngine::TextCore::Text::TextElementType", modifiers: "", def_value: None }, CppParam { name: "stringLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "textElement", ty: "::UnityEngine::TextCore::Text::TextElement*", modifiers: "", def_value: None }, CppParam { name: "alternativeGlyph", ty: "::UnityEngine::TextCore::Glyph*", modifiers:
  // "", def_value: None }, CppParam { name: "fontAsset", ty: "::UnityW<::UnityEngine::TextCore::Text::FontAsset>", modifiers: "", def_value: None }, CppParam { name: "spriteAsset", ty:
  // "::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>", modifiers: "", def_value: None }, CppParam { name: "spriteIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }, CppParam { name: "materialReferenceIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "isUsingAlternateTypeface", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "pointSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "lineNumber", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "pageNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertexIndex", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "vertexTopLeft", ty: "::UnityEngine::TextCore::Text::TextVertex", modifiers: "", def_value: None }, CppParam { name: "vertexBottomLeft", ty:
  // "::UnityEngine::TextCore::Text::TextVertex", modifiers: "", def_value: None }, CppParam { name: "vertexTopRight", ty: "::UnityEngine::TextCore::Text::TextVertex", modifiers: "", def_value: None
  // }, CppParam { name: "vertexBottomRight", ty: "::UnityEngine::TextCore::Text::TextVertex", modifiers: "", def_value: None }, CppParam { name: "topLeft", ty: "::UnityEngine::Vector3", modifiers:
  // "", def_value: None }, CppParam { name: "bottomLeft", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "topRight", ty: "::UnityEngine::Vector3", modifiers: "",
  // def_value: None }, CppParam { name: "bottomRight", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "origin", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "ascender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "baseLine", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "descender", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "adjustedAscender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "adjustedDescender", ty: "float_t", modifiers:
  // "", def_value: None }, CppParam { name: "adjustedHorizontalAdvance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "xAdvance", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "aspectRatio", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "color", ty:
  // "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "underlineColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name:
  // "underlineVertexIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "strikethroughColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name:
  // "strikethroughVertexIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "highlightColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name:
  // "highlightState", ty: "::UnityEngine::TextCore::Text::HighlightState", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::UnityEngine::TextCore::Text::FontStyles", modifiers: "",
  // def_value: None }, CppParam { name: "isVisible", ty: "bool", modifiers: "", def_value: None }]
  constexpr TextElementInfo(char16_t character, int32_t index, ::UnityEngine::TextCore::Text::TextElementType elementType, int32_t stringLength,
                            ::UnityEngine::TextCore::Text::TextElement* textElement, ::UnityEngine::TextCore::Glyph* alternativeGlyph, ::UnityW<::UnityEngine::TextCore::Text::FontAsset> fontAsset,
                            ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> spriteAsset, int32_t spriteIndex, ::UnityW<::UnityEngine::Material> material, int32_t materialReferenceIndex,
                            bool isUsingAlternateTypeface, float_t pointSize, int32_t lineNumber, int32_t pageNumber, int32_t vertexIndex, ::UnityEngine::TextCore::Text::TextVertex vertexTopLeft,
                            ::UnityEngine::TextCore::Text::TextVertex vertexBottomLeft, ::UnityEngine::TextCore::Text::TextVertex vertexTopRight,
                            ::UnityEngine::TextCore::Text::TextVertex vertexBottomRight, ::UnityEngine::Vector3 topLeft, ::UnityEngine::Vector3 bottomLeft, ::UnityEngine::Vector3 topRight,
                            ::UnityEngine::Vector3 bottomRight, float_t origin, float_t ascender, float_t baseLine, float_t descender, float_t adjustedAscender, float_t adjustedDescender,
                            float_t adjustedHorizontalAdvance, float_t xAdvance, float_t aspectRatio, float_t scale, ::UnityEngine::Color32 color, ::UnityEngine::Color32 underlineColor,
                            int32_t underlineVertexIndex, ::UnityEngine::Color32 strikethroughColor, int32_t strikethroughVertexIndex, ::UnityEngine::Color32 highlightColor,
                            ::UnityEngine::TextCore::Text::HighlightState highlightState, ::UnityEngine::TextCore::Text::FontStyles style, bool isVisible) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15262 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x188 };

  /// @brief Field character, offset: 0x0, size: 0x2, def value: None
  char16_t character;

  /// @brief Field index, offset: 0x4, size: 0x4, def value: None
  int32_t index;

  /// @brief Field elementType, offset: 0x8, size: 0x1, def value: None
  ::UnityEngine::TextCore::Text::TextElementType elementType;

  /// @brief Field stringLength, offset: 0xc, size: 0x4, def value: None
  int32_t stringLength;

  /// @brief Field textElement, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::TextCore::Text::TextElement* textElement;

  /// @brief Field alternativeGlyph, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::TextCore::Glyph* alternativeGlyph;

  /// @brief Field fontAsset, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextCore::Text::FontAsset> fontAsset;

  /// @brief Field spriteAsset, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> spriteAsset;

  /// @brief Field spriteIndex, offset: 0x30, size: 0x4, def value: None
  int32_t spriteIndex;

  /// @brief Field material, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> material;

  /// @brief Field materialReferenceIndex, offset: 0x40, size: 0x4, def value: None
  int32_t materialReferenceIndex;

  /// @brief Field isUsingAlternateTypeface, offset: 0x44, size: 0x1, def value: None
  bool isUsingAlternateTypeface;

  /// @brief Field pointSize, offset: 0x48, size: 0x4, def value: None
  float_t pointSize;

  /// @brief Field lineNumber, offset: 0x4c, size: 0x4, def value: None
  int32_t lineNumber;

  /// @brief Field pageNumber, offset: 0x50, size: 0x4, def value: None
  int32_t pageNumber;

  /// @brief Field vertexIndex, offset: 0x54, size: 0x4, def value: None
  int32_t vertexIndex;

  /// @brief Field vertexTopLeft, offset: 0x58, size: 0x28, def value: None
  ::UnityEngine::TextCore::Text::TextVertex vertexTopLeft;

  /// @brief Field vertexBottomLeft, offset: 0x80, size: 0x28, def value: None
  ::UnityEngine::TextCore::Text::TextVertex vertexBottomLeft;

  /// @brief Field vertexTopRight, offset: 0xa8, size: 0x28, def value: None
  ::UnityEngine::TextCore::Text::TextVertex vertexTopRight;

  /// @brief Field vertexBottomRight, offset: 0xd0, size: 0x28, def value: None
  ::UnityEngine::TextCore::Text::TextVertex vertexBottomRight;

  /// @brief Field topLeft, offset: 0xf8, size: 0xc, def value: None
  ::UnityEngine::Vector3 topLeft;

  /// @brief Field bottomLeft, offset: 0x104, size: 0xc, def value: None
  ::UnityEngine::Vector3 bottomLeft;

  /// @brief Field topRight, offset: 0x110, size: 0xc, def value: None
  ::UnityEngine::Vector3 topRight;

  /// @brief Field bottomRight, offset: 0x11c, size: 0xc, def value: None
  ::UnityEngine::Vector3 bottomRight;

  /// @brief Field origin, offset: 0x128, size: 0x4, def value: None
  float_t origin;

  /// @brief Field ascender, offset: 0x12c, size: 0x4, def value: None
  float_t ascender;

  /// @brief Field baseLine, offset: 0x130, size: 0x4, def value: None
  float_t baseLine;

  /// @brief Field descender, offset: 0x134, size: 0x4, def value: None
  float_t descender;

  /// @brief Field adjustedAscender, offset: 0x138, size: 0x4, def value: None
  float_t adjustedAscender;

  /// @brief Field adjustedDescender, offset: 0x13c, size: 0x4, def value: None
  float_t adjustedDescender;

  /// @brief Field adjustedHorizontalAdvance, offset: 0x140, size: 0x4, def value: None
  float_t adjustedHorizontalAdvance;

  /// @brief Field xAdvance, offset: 0x144, size: 0x4, def value: None
  float_t xAdvance;

  /// @brief Field aspectRatio, offset: 0x148, size: 0x4, def value: None
  float_t aspectRatio;

  /// @brief Field scale, offset: 0x14c, size: 0x4, def value: None
  float_t scale;

  /// @brief Field color, offset: 0x150, size: 0x4, def value: None
  ::UnityEngine::Color32 color;

  /// @brief Field underlineColor, offset: 0x154, size: 0x4, def value: None
  ::UnityEngine::Color32 underlineColor;

  /// @brief Field underlineVertexIndex, offset: 0x158, size: 0x4, def value: None
  int32_t underlineVertexIndex;

  /// @brief Field strikethroughColor, offset: 0x15c, size: 0x4, def value: None
  ::UnityEngine::Color32 strikethroughColor;

  /// @brief Field strikethroughVertexIndex, offset: 0x160, size: 0x4, def value: None
  int32_t strikethroughVertexIndex;

  /// @brief Field highlightColor, offset: 0x164, size: 0x4, def value: None
  ::UnityEngine::Color32 highlightColor;

  /// @brief Field highlightState, offset: 0x168, size: 0x14, def value: None
  ::UnityEngine::TextCore::Text::HighlightState highlightState;

  /// @brief Field style, offset: 0x17c, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::FontStyles style;

  /// @brief Field isVisible, offset: 0x180, size: 0x1, def value: None
  bool isVisible;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, character) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, index) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, elementType) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, stringLength) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, textElement) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, alternativeGlyph) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, fontAsset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, spriteAsset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, spriteIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, material) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, materialReferenceIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, isUsingAlternateTypeface) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, pointSize) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, lineNumber) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, pageNumber) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, vertexIndex) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, vertexTopLeft) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, vertexBottomLeft) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, vertexTopRight) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, vertexBottomRight) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, topLeft) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, bottomLeft) == 0x104, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, topRight) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, bottomRight) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, origin) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, ascender) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, baseLine) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, descender) == 0x134, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, adjustedAscender) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, adjustedDescender) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, adjustedHorizontalAdvance) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, xAdvance) == 0x144, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, aspectRatio) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, scale) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, color) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, underlineColor) == 0x154, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, underlineVertexIndex) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, strikethroughColor) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, strikethroughVertexIndex) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, highlightColor) == 0x164, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, highlightState) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, style) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, isVisible) == 0x180, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextElementInfo, 0x188>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextElementInfo, "UnityEngine.TextCore.Text", "TextElementInfo");
