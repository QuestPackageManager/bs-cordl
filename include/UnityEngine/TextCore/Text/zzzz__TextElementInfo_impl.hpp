#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextElementInfo.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElementType_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextVertex_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElementInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__SpriteAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElementType_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElement_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextVertex_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "character", ty: "char16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "elementType", ty: "::UnityEngine::TextCore::Text::TextElementType", modifiers: "", def_value: Some("{}") }, CppParam { name: "textElement", ty: "::UnityEngine::TextCore::Text::TextElement*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "fontAsset", ty: "::UnityW<::UnityEngine::TextCore::Text::FontAsset>", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "spriteAsset", ty: "::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "spriteIndex", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "materialReferenceIndex", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "isUsingAlternateTypeface", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "pointSize", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "lineNumber", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pageNumber", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "vertexIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertexTopLeft", ty: "::UnityEngine::TextCore::Text::TextVertex", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "vertexBottomLeft", ty: "::UnityEngine::TextCore::Text::TextVertex", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertexTopRight", ty:
// "::UnityEngine::TextCore::Text::TextVertex", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertexBottomRight", ty: "::UnityEngine::TextCore::Text::TextVertex", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "topLeft", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomLeft", ty: "::UnityEngine::Vector3", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "topRight", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomRight", ty: "::UnityEngine::Vector3", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "origin", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ascender", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "baseLine", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "descender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "xAdvance",
// ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "aspectRatio", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "underlineColor", ty: "::UnityEngine::Color32", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "strikethroughColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "highlightColor", ty:
// "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "style", ty: "::UnityEngine::TextCore::Text::FontStyles", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "isVisible", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::TextElementInfo::TextElementInfo(
    char16_t character, int32_t index, ::UnityEngine::TextCore::Text::TextElementType elementType, ::UnityEngine::TextCore::Text::TextElement* textElement,
    ::UnityW<::UnityEngine::TextCore::Text::FontAsset> fontAsset, ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> spriteAsset, int32_t spriteIndex, ::UnityW<::UnityEngine::Material> material,
    int32_t materialReferenceIndex, bool isUsingAlternateTypeface, float_t pointSize, int32_t lineNumber, int32_t pageNumber, int32_t vertexIndex,
    ::UnityEngine::TextCore::Text::TextVertex vertexTopLeft, ::UnityEngine::TextCore::Text::TextVertex vertexBottomLeft, ::UnityEngine::TextCore::Text::TextVertex vertexTopRight,
    ::UnityEngine::TextCore::Text::TextVertex vertexBottomRight, ::UnityEngine::Vector3 topLeft, ::UnityEngine::Vector3 bottomLeft, ::UnityEngine::Vector3 topRight, ::UnityEngine::Vector3 bottomRight,
    float_t origin, float_t ascender, float_t baseLine, float_t descender, float_t xAdvance, float_t aspectRatio, float_t scale, ::UnityEngine::Color32 color, ::UnityEngine::Color32 underlineColor,
    ::UnityEngine::Color32 strikethroughColor, ::UnityEngine::Color32 highlightColor, ::UnityEngine::TextCore::Text::FontStyles style, bool isVisible) noexcept {
  this->character = character;
  this->index = index;
  this->elementType = elementType;
  this->textElement = textElement;
  this->fontAsset = fontAsset;
  this->spriteAsset = spriteAsset;
  this->spriteIndex = spriteIndex;
  this->material = material;
  this->materialReferenceIndex = materialReferenceIndex;
  this->isUsingAlternateTypeface = isUsingAlternateTypeface;
  this->pointSize = pointSize;
  this->lineNumber = lineNumber;
  this->pageNumber = pageNumber;
  this->vertexIndex = vertexIndex;
  this->vertexTopLeft = vertexTopLeft;
  this->vertexBottomLeft = vertexBottomLeft;
  this->vertexTopRight = vertexTopRight;
  this->vertexBottomRight = vertexBottomRight;
  this->topLeft = topLeft;
  this->bottomLeft = bottomLeft;
  this->topRight = topRight;
  this->bottomRight = bottomRight;
  this->origin = origin;
  this->ascender = ascender;
  this->baseLine = baseLine;
  this->descender = descender;
  this->xAdvance = xAdvance;
  this->aspectRatio = aspectRatio;
  this->scale = scale;
  this->color = color;
  this->underlineColor = underlineColor;
  this->strikethroughColor = strikethroughColor;
  this->highlightColor = highlightColor;
  this->style = style;
  this->isVisible = isVisible;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextElementInfo::TextElementInfo() {}
