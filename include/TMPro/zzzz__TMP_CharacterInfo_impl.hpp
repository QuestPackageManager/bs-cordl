#pragma once
#include "TMPro/zzzz__FontStyles_impl.hpp"
#include "TMPro/zzzz__HighlightState_impl.hpp"
#include "TMPro/zzzz__TMP_TextElementType_impl.hpp"
#include "TMPro/zzzz__TMP_Vertex_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "TMPro/zzzz__TMP_CharacterInfo_def.hpp"
#include "TMPro/zzzz__FontStyles_def.hpp"
#include "TMPro/zzzz__HighlightState_def.hpp"
#include "TMPro/zzzz__TMP_TextElementType_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "TMPro/zzzz__TMP_Vertex_def.hpp"
#include "TMPro/zzzz__TMP_TextElement_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "TMPro/zzzz__TMP_SpriteAsset_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "character", ty: "char16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "stringLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "elementType", ty: "::TMPro::TMP_TextElementType", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "textElement", ty: "::TMPro::TMP_TextElement*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "fontAsset", ty: "::TMPro::TMP_FontAsset*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "spriteAsset", ty: "::TMPro::TMP_SpriteAsset*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "spriteIndex", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "material", ty: "::UnityEngine::Material*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "materialReferenceIndex", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "isUsingAlternateTypeface", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "pointSize", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "lineNumber", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pageNumber", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "vertexIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertex_BL", ty: "::TMPro::TMP_Vertex", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "vertex_TL", ty: "::TMPro::TMP_Vertex", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertex_TR", ty: "::TMPro::TMP_Vertex", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "vertex_BR", ty: "::TMPro::TMP_Vertex", modifiers: "", def_value: Some("{}") }, CppParam { name: "topLeft", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "bottomLeft", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "topRight", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "bottomRight", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "origin", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "xAdvance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ascender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "baseLine", ty: "float_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "descender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "adjustedAscender", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "adjustedDescender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "aspectRatio", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") },
// CppParam { name: "underlineColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "underlineVertexIndex", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "strikethroughColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "strikethroughVertexIndex", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "highlightColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "highlightState", ty: "::TMPro::HighlightState", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "style", ty: "::TMPro::FontStyles", modifiers: "", def_value: Some("{}") }, CppParam { name: "isVisible", ty: "bool", modifiers: "", def_value:
// Some("{}") }]
constexpr ::TMPro::TMP_CharacterInfo::TMP_CharacterInfo(char16_t character, int32_t index, int32_t stringLength, ::TMPro::TMP_TextElementType elementType, ::TMPro::TMP_TextElement* textElement,
                                                        ::TMPro::TMP_FontAsset* fontAsset, ::TMPro::TMP_SpriteAsset* spriteAsset, int32_t spriteIndex, ::UnityEngine::Material* material,
                                                        int32_t materialReferenceIndex, bool isUsingAlternateTypeface, float_t pointSize, int32_t lineNumber, int32_t pageNumber, int32_t vertexIndex,
                                                        ::TMPro::TMP_Vertex vertex_BL, ::TMPro::TMP_Vertex vertex_TL, ::TMPro::TMP_Vertex vertex_TR, ::TMPro::TMP_Vertex vertex_BR,
                                                        ::UnityEngine::Vector3 topLeft, ::UnityEngine::Vector3 bottomLeft, ::UnityEngine::Vector3 topRight, ::UnityEngine::Vector3 bottomRight,
                                                        float_t origin, float_t xAdvance, float_t ascender, float_t baseLine, float_t descender, float_t adjustedAscender, float_t adjustedDescender,
                                                        float_t aspectRatio, float_t scale, ::UnityEngine::Color32 color, ::UnityEngine::Color32 underlineColor, int32_t underlineVertexIndex,
                                                        ::UnityEngine::Color32 strikethroughColor, int32_t strikethroughVertexIndex, ::UnityEngine::Color32 highlightColor,
                                                        ::TMPro::HighlightState highlightState, ::TMPro::FontStyles style, bool isVisible) noexcept {
  this->character = character;
  this->index = index;
  this->stringLength = stringLength;
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
  this->vertex_BL = vertex_BL;
  this->vertex_TL = vertex_TL;
  this->vertex_TR = vertex_TR;
  this->vertex_BR = vertex_BR;
  this->topLeft = topLeft;
  this->bottomLeft = bottomLeft;
  this->topRight = topRight;
  this->bottomRight = bottomRight;
  this->origin = origin;
  this->xAdvance = xAdvance;
  this->ascender = ascender;
  this->baseLine = baseLine;
  this->descender = descender;
  this->adjustedAscender = adjustedAscender;
  this->adjustedDescender = adjustedDescender;
  this->aspectRatio = aspectRatio;
  this->scale = scale;
  this->color = color;
  this->underlineColor = underlineColor;
  this->underlineVertexIndex = underlineVertexIndex;
  this->strikethroughColor = strikethroughColor;
  this->strikethroughVertexIndex = strikethroughVertexIndex;
  this->highlightColor = highlightColor;
  this->highlightState = highlightState;
  this->style = style;
  this->isVisible = isVisible;
}
// Ctor Parameters []
constexpr ::TMPro::TMP_CharacterInfo::TMP_CharacterInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
