#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElementType_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextVertex_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextElementInfo)
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore::Text {
struct FontStyles;
}
namespace UnityEngine::TextCore::Text {
class SpriteAsset;
}
namespace UnityEngine::TextCore::Text {
struct TextElementType;
}
namespace UnityEngine::TextCore::Text {
class TextElement;
}
namespace UnityEngine::TextCore::Text {
struct TextVertex;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct TextElementInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::TextElementInfo);
// Type: UnityEngine.TextCore.Text::TextElementInfo
// SizeInfo { instance_size: 344, native_size: -1, calculated_instance_size: 344, calculated_native_size: 353, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(13705)), TypeDefinitionIndex(TypeDefinitionIndex(13719)),
// TypeDefinitionIndex(TypeDefinitionIndex(10250)), TypeDefinitionIndex(TypeDefinitionIndex(13698))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13699)) CS Name:
// ::UnityEngine.TextCore.Text::TextElementInfo
struct CORDL_TYPE TextElementInfo {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "character", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "elementType", ty: "::UnityEngine::TextCore::Text::TextElementType", modifiers: "", def_value: None }, CppParam { name: "textElement", ty: "::UnityEngine::TextCore::Text::TextElement*",
  // modifiers: "", def_value: None }, CppParam { name: "fontAsset", ty: "::UnityEngine::TextCore::Text::FontAsset*", modifiers: "", def_value: None }, CppParam { name: "spriteAsset", ty:
  // "::UnityEngine::TextCore::Text::SpriteAsset*", modifiers: "", def_value: None }, CppParam { name: "spriteIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "material", ty:
  // "::UnityEngine::Material*", modifiers: "", def_value: None }, CppParam { name: "materialReferenceIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "isUsingAlternateTypeface", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "pointSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "lineNumber", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "pageNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertexIndex", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "vertexTopLeft", ty: "::UnityEngine::TextCore::Text::TextVertex", modifiers: "", def_value: None }, CppParam { name: "vertexBottomLeft", ty:
  // "::UnityEngine::TextCore::Text::TextVertex", modifiers: "", def_value: None }, CppParam { name: "vertexTopRight", ty: "::UnityEngine::TextCore::Text::TextVertex", modifiers: "", def_value: None
  // }, CppParam { name: "vertexBottomRight", ty: "::UnityEngine::TextCore::Text::TextVertex", modifiers: "", def_value: None }, CppParam { name: "topLeft", ty: "::UnityEngine::Vector3", modifiers:
  // "", def_value: None }, CppParam { name: "bottomLeft", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "topRight", ty: "::UnityEngine::Vector3", modifiers: "",
  // def_value: None }, CppParam { name: "bottomRight", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "origin", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "ascender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "baseLine", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "descender", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "xAdvance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "aspectRatio", ty: "float_t", modifiers: "", def_value:
  // None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name:
  // "underlineColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "strikethroughColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam {
  // name: "highlightColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "style", ty: "::UnityEngine::TextCore::Text::FontStyles", modifiers: "", def_value: None
  // }, CppParam { name: "isVisible", ty: "bool", modifiers: "", def_value: None }]
  constexpr TextElementInfo(char16_t character, int32_t index, ::UnityEngine::TextCore::Text::TextElementType elementType, ::UnityEngine::TextCore::Text::TextElement* textElement,
                            ::UnityEngine::TextCore::Text::FontAsset* fontAsset, ::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset, int32_t spriteIndex, ::UnityEngine::Material* material,
                            int32_t materialReferenceIndex, bool isUsingAlternateTypeface, float_t pointSize, int32_t lineNumber, int32_t pageNumber, int32_t vertexIndex,
                            ::UnityEngine::TextCore::Text::TextVertex vertexTopLeft, ::UnityEngine::TextCore::Text::TextVertex vertexBottomLeft,
                            ::UnityEngine::TextCore::Text::TextVertex vertexTopRight, ::UnityEngine::TextCore::Text::TextVertex vertexBottomRight, ::UnityEngine::Vector3 topLeft,
                            ::UnityEngine::Vector3 bottomLeft, ::UnityEngine::Vector3 topRight, ::UnityEngine::Vector3 bottomRight, float_t origin, float_t ascender, float_t baseLine,
                            float_t descender, float_t xAdvance, float_t aspectRatio, float_t scale, ::UnityEngine::Color32 color, ::UnityEngine::Color32 underlineColor,
                            ::UnityEngine::Color32 strikethroughColor, ::UnityEngine::Color32 highlightColor, ::UnityEngine::TextCore::Text::FontStyles style, bool isVisible) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextElementInfo();

  /// @brief Field character, offset: 0x0, size: 0x2, def value: None
  char16_t character;

  /// @brief Field index, offset: 0x4, size: 0x4, def value: None
  int32_t index;

  /// @brief Field elementType, offset: 0x8, size: 0x1, def value: None
  ::UnityEngine::TextCore::Text::TextElementType elementType;

  /// @brief Field textElement, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::TextCore::Text::TextElement* textElement;

  /// @brief Field fontAsset, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::TextCore::Text::FontAsset* fontAsset;

  /// @brief Field spriteAsset, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset;

  /// @brief Field spriteIndex, offset: 0x28, size: 0x4, def value: None
  int32_t spriteIndex;

  /// @brief Field material, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Material* material;

  /// @brief Field materialReferenceIndex, offset: 0x38, size: 0x4, def value: None
  int32_t materialReferenceIndex;

  /// @brief Field isUsingAlternateTypeface, offset: 0x3c, size: 0x1, def value: None
  bool isUsingAlternateTypeface;

  /// @brief Field pointSize, offset: 0x40, size: 0x4, def value: None
  float_t pointSize;

  /// @brief Field lineNumber, offset: 0x44, size: 0x4, def value: None
  int32_t lineNumber;

  /// @brief Field pageNumber, offset: 0x48, size: 0x4, def value: None
  int32_t pageNumber;

  /// @brief Field vertexIndex, offset: 0x4c, size: 0x4, def value: None
  int32_t vertexIndex;

  /// @brief Field vertexTopLeft, offset: 0x50, size: 0x28, def value: None
  ::UnityEngine::TextCore::Text::TextVertex vertexTopLeft;

  /// @brief Field vertexBottomLeft, offset: 0x78, size: 0x28, def value: None
  ::UnityEngine::TextCore::Text::TextVertex vertexBottomLeft;

  /// @brief Field vertexTopRight, offset: 0xa0, size: 0x28, def value: None
  ::UnityEngine::TextCore::Text::TextVertex vertexTopRight;

  /// @brief Field vertexBottomRight, offset: 0xc8, size: 0x28, def value: None
  ::UnityEngine::TextCore::Text::TextVertex vertexBottomRight;

  /// @brief Field topLeft, offset: 0xf0, size: 0xc, def value: None
  ::UnityEngine::Vector3 topLeft;

  /// @brief Field bottomLeft, offset: 0xfc, size: 0xc, def value: None
  ::UnityEngine::Vector3 bottomLeft;

  /// @brief Field topRight, offset: 0x108, size: 0xc, def value: None
  ::UnityEngine::Vector3 topRight;

  /// @brief Field bottomRight, offset: 0x114, size: 0xc, def value: None
  ::UnityEngine::Vector3 bottomRight;

  /// @brief Field origin, offset: 0x120, size: 0x4, def value: None
  float_t origin;

  /// @brief Field ascender, offset: 0x124, size: 0x4, def value: None
  float_t ascender;

  /// @brief Field baseLine, offset: 0x128, size: 0x4, def value: None
  float_t baseLine;

  /// @brief Field descender, offset: 0x12c, size: 0x4, def value: None
  float_t descender;

  /// @brief Field xAdvance, offset: 0x130, size: 0x4, def value: None
  float_t xAdvance;

  /// @brief Field aspectRatio, offset: 0x134, size: 0x4, def value: None
  float_t aspectRatio;

  /// @brief Field scale, offset: 0x138, size: 0x4, def value: None
  float_t scale;

  /// @brief Field color, offset: 0x13c, size: 0x4, def value: None
  ::UnityEngine::Color32 color;

  /// @brief Field underlineColor, offset: 0x140, size: 0x4, def value: None
  ::UnityEngine::Color32 underlineColor;

  /// @brief Field strikethroughColor, offset: 0x144, size: 0x4, def value: None
  ::UnityEngine::Color32 strikethroughColor;

  /// @brief Field highlightColor, offset: 0x148, size: 0x4, def value: None
  ::UnityEngine::Color32 highlightColor;

  /// @brief Field style, offset: 0x14c, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::FontStyles style;

  /// @brief Field isVisible, offset: 0x150, size: 0x1, def value: None
  bool isVisible;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x158 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextElementInfo, 0x158>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, character) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, index) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, elementType) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, textElement) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, fontAsset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, spriteAsset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, spriteIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, material) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, materialReferenceIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, isUsingAlternateTypeface) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, pointSize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, lineNumber) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, pageNumber) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, vertexIndex) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, vertexTopLeft) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, vertexBottomLeft) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, vertexTopRight) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, vertexBottomRight) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, topLeft) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, bottomLeft) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, topRight) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, bottomRight) == 0x114, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, origin) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, ascender) == 0x124, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, baseLine) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, descender) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, xAdvance) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, aspectRatio) == 0x134, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, scale) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, color) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, underlineColor) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, strikethroughColor) == 0x144, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, highlightColor) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, style) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextElementInfo, isVisible) == 0x150, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextElementInfo, "UnityEngine.TextCore.Text", "TextElementInfo");
