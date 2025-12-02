#pragma once
// IWYU pragma private; include "TMPro/TMP_CharacterInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TMPro/zzzz__FontStyles_def.hpp"
#include "TMPro/zzzz__HighlightState_def.hpp"
#include "TMPro/zzzz__TMP_TextElementType_def.hpp"
#include "TMPro/zzzz__TMP_Vertex_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_CharacterInfo)
namespace TMPro {
class TMP_FontAsset;
}
namespace TMPro {
class TMP_TextElement;
}
namespace UnityEngine::TextCore {
class Glyph;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace TMPro {
struct TMP_CharacterInfo;
}
// Write type traits
MARK_VAL_T(::TMPro::TMP_CharacterInfo);
// Dependencies TMPro.FontStyles, TMPro.HighlightState, TMPro.TMP_TextElementType, TMPro.TMP_Vertex, UnityEngine.Color32, UnityEngine.Vector3
namespace TMPro {
// Is value type: true
// CS Name: TMPro.TMP_CharacterInfo
struct CORDL_TYPE TMP_CharacterInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_CharacterInfo();

  // Ctor Parameters [CppParam { name: "elementType", ty: "::TMPro::TMP_TextElementType", modifiers: "", def_value: None }, CppParam { name: "character", ty: "char16_t", modifiers: "", def_value: None
  // }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "stringLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "textElement", ty:
  // "::TMPro::TMP_TextElement*", modifiers: "", def_value: None }, CppParam { name: "alternativeGlyph", ty: "::UnityEngine::TextCore::Glyph*", modifiers: "", def_value: None }, CppParam { name:
  // "fontAsset", ty: "::UnityW<::TMPro::TMP_FontAsset>", modifiers: "", def_value: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None },
  // CppParam { name: "materialReferenceIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isUsingAlternateTypeface", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "pointSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "lineNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "pageNumber", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "vertexIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertex_BL", ty: "::TMPro::TMP_Vertex", modifiers: "",
  // def_value: None }, CppParam { name: "vertex_TL", ty: "::TMPro::TMP_Vertex", modifiers: "", def_value: None }, CppParam { name: "vertex_TR", ty: "::TMPro::TMP_Vertex", modifiers: "", def_value:
  // None }, CppParam { name: "vertex_BR", ty: "::TMPro::TMP_Vertex", modifiers: "", def_value: None }, CppParam { name: "topLeft", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None },
  // CppParam { name: "bottomLeft", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "topRight", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None },
  // CppParam { name: "bottomRight", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "origin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "xAdvance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ascender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "baseLine", ty: "float_t", modifiers:
  // "", def_value: None }, CppParam { name: "descender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "adjustedAscender", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "adjustedDescender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "adjustedHorizontalAdvance", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "aspectRatio", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "color", ty:
  // "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "underlineColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name:
  // "underlineVertexIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "strikethroughColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name:
  // "strikethroughVertexIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "highlightColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name:
  // "highlightState", ty: "::TMPro::HighlightState", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::TMPro::FontStyles", modifiers: "", def_value: None }, CppParam { name:
  // "isVisible", ty: "bool", modifiers: "", def_value: None }]
  constexpr TMP_CharacterInfo(::TMPro::TMP_TextElementType elementType, char16_t character, int32_t index, int32_t stringLength, ::TMPro::TMP_TextElement* textElement,
                              ::UnityEngine::TextCore::Glyph* alternativeGlyph, ::UnityW<::TMPro::TMP_FontAsset> fontAsset, ::UnityW<::UnityEngine::Material> material, int32_t materialReferenceIndex,
                              bool isUsingAlternateTypeface, float_t pointSize, int32_t lineNumber, int32_t pageNumber, int32_t vertexIndex, ::TMPro::TMP_Vertex vertex_BL,
                              ::TMPro::TMP_Vertex vertex_TL, ::TMPro::TMP_Vertex vertex_TR, ::TMPro::TMP_Vertex vertex_BR, ::UnityEngine::Vector3 topLeft, ::UnityEngine::Vector3 bottomLeft,
                              ::UnityEngine::Vector3 topRight, ::UnityEngine::Vector3 bottomRight, float_t origin, float_t xAdvance, float_t ascender, float_t baseLine, float_t descender,
                              float_t adjustedAscender, float_t adjustedDescender, float_t adjustedHorizontalAdvance, float_t aspectRatio, float_t scale, ::UnityEngine::Color32 color,
                              ::UnityEngine::Color32 underlineColor, int32_t underlineVertexIndex, ::UnityEngine::Color32 strikethroughColor, int32_t strikethroughVertexIndex,
                              ::UnityEngine::Color32 highlightColor, ::TMPro::HighlightState highlightState, ::TMPro::FontStyles style, bool isVisible) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15843 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x178 };

  /// @brief Field elementType, offset: 0x0, size: 0x4, def value: None
  ::TMPro::TMP_TextElementType elementType;

  /// @brief Field character, offset: 0x4, size: 0x2, def value: None
  char16_t character;

  /// @brief Field index, offset: 0x8, size: 0x4, def value: None
  int32_t index;

  /// @brief Field stringLength, offset: 0xc, size: 0x4, def value: None
  int32_t stringLength;

  /// @brief Field textElement, offset: 0x10, size: 0x8, def value: None
  ::TMPro::TMP_TextElement* textElement;

  /// @brief Field alternativeGlyph, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::TextCore::Glyph* alternativeGlyph;

  /// @brief Field fontAsset, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_FontAsset> fontAsset;

  /// @brief Field material, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> material;

  /// @brief Field materialReferenceIndex, offset: 0x30, size: 0x4, def value: None
  int32_t materialReferenceIndex;

  /// @brief Field isUsingAlternateTypeface, offset: 0x34, size: 0x1, def value: None
  bool isUsingAlternateTypeface;

  /// @brief Field pointSize, offset: 0x38, size: 0x4, def value: None
  float_t pointSize;

  /// @brief Field lineNumber, offset: 0x3c, size: 0x4, def value: None
  int32_t lineNumber;

  /// @brief Field pageNumber, offset: 0x40, size: 0x4, def value: None
  int32_t pageNumber;

  /// @brief Field vertexIndex, offset: 0x44, size: 0x4, def value: None
  int32_t vertexIndex;

  /// @brief Field vertex_BL, offset: 0x48, size: 0x28, def value: None
  ::TMPro::TMP_Vertex vertex_BL;

  /// @brief Field vertex_TL, offset: 0x70, size: 0x28, def value: None
  ::TMPro::TMP_Vertex vertex_TL;

  /// @brief Field vertex_TR, offset: 0x98, size: 0x28, def value: None
  ::TMPro::TMP_Vertex vertex_TR;

  /// @brief Field vertex_BR, offset: 0xc0, size: 0x28, def value: None
  ::TMPro::TMP_Vertex vertex_BR;

  /// @brief Field topLeft, offset: 0xe8, size: 0xc, def value: None
  ::UnityEngine::Vector3 topLeft;

  /// @brief Field bottomLeft, offset: 0xf4, size: 0xc, def value: None
  ::UnityEngine::Vector3 bottomLeft;

  /// @brief Field topRight, offset: 0x100, size: 0xc, def value: None
  ::UnityEngine::Vector3 topRight;

  /// @brief Field bottomRight, offset: 0x10c, size: 0xc, def value: None
  ::UnityEngine::Vector3 bottomRight;

  /// @brief Field origin, offset: 0x118, size: 0x4, def value: None
  float_t origin;

  /// @brief Field xAdvance, offset: 0x11c, size: 0x4, def value: None
  float_t xAdvance;

  /// @brief Field ascender, offset: 0x120, size: 0x4, def value: None
  float_t ascender;

  /// @brief Field baseLine, offset: 0x124, size: 0x4, def value: None
  float_t baseLine;

  /// @brief Field descender, offset: 0x128, size: 0x4, def value: None
  float_t descender;

  /// @brief Field adjustedAscender, offset: 0x12c, size: 0x4, def value: None
  float_t adjustedAscender;

  /// @brief Field adjustedDescender, offset: 0x130, size: 0x4, def value: None
  float_t adjustedDescender;

  /// @brief Field adjustedHorizontalAdvance, offset: 0x134, size: 0x4, def value: None
  float_t adjustedHorizontalAdvance;

  /// @brief Field aspectRatio, offset: 0x138, size: 0x4, def value: None
  float_t aspectRatio;

  /// @brief Field scale, offset: 0x13c, size: 0x4, def value: None
  float_t scale;

  /// @brief Field color, offset: 0x140, size: 0x4, def value: None
  ::UnityEngine::Color32 color;

  /// @brief Field underlineColor, offset: 0x144, size: 0x4, def value: None
  ::UnityEngine::Color32 underlineColor;

  /// @brief Field underlineVertexIndex, offset: 0x148, size: 0x4, def value: None
  int32_t underlineVertexIndex;

  /// @brief Field strikethroughColor, offset: 0x14c, size: 0x4, def value: None
  ::UnityEngine::Color32 strikethroughColor;

  /// @brief Field strikethroughVertexIndex, offset: 0x150, size: 0x4, def value: None
  int32_t strikethroughVertexIndex;

  /// @brief Field highlightColor, offset: 0x154, size: 0x4, def value: None
  ::UnityEngine::Color32 highlightColor;

  /// @brief Field highlightState, offset: 0x158, size: 0x14, def value: None
  ::TMPro::HighlightState highlightState;

  /// @brief Field style, offset: 0x16c, size: 0x4, def value: None
  ::TMPro::FontStyles style;

  /// @brief Field isVisible, offset: 0x170, size: 0x1, def value: None
  bool isVisible;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_CharacterInfo, elementType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, character) == 0x4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, index) == 0x8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, stringLength) == 0xc, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, textElement) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, alternativeGlyph) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, fontAsset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, material) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, materialReferenceIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, isUsingAlternateTypeface) == 0x34, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, pointSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, lineNumber) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, pageNumber) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, vertexIndex) == 0x44, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, vertex_BL) == 0x48, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, vertex_TL) == 0x70, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, vertex_TR) == 0x98, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, vertex_BR) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, topLeft) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, bottomLeft) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, topRight) == 0x100, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, bottomRight) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, origin) == 0x118, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, xAdvance) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, ascender) == 0x120, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, baseLine) == 0x124, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, descender) == 0x128, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, adjustedAscender) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, adjustedDescender) == 0x130, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, adjustedHorizontalAdvance) == 0x134, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, aspectRatio) == 0x138, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, scale) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, color) == 0x140, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, underlineColor) == 0x144, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, underlineVertexIndex) == 0x148, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, strikethroughColor) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, strikethroughVertexIndex) == 0x150, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, highlightColor) == 0x154, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, highlightState) == 0x158, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, style) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_CharacterInfo, isVisible) == 0x170, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_CharacterInfo, 0x178>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_CharacterInfo, "TMPro", "TMP_CharacterInfo");
