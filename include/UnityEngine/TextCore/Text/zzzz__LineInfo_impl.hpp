#pragma once
#include "UnityEngine/TextCore/Text/zzzz__Extents_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextAlignment_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__LineInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextAlignment_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__Extents_def.hpp"
// Ctor Parameters [CppParam { name: "controlCharacterCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "characterCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "visibleCharacterCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "spaceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "visibleSpaceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "wordCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "firstCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "firstVisibleCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "lastCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastVisibleCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "length", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lineHeight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ascender", ty: "float_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "baseline", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "descender", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "maxAdvance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "width", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "marginLeft", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "marginRight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "alignment", ty:
// "::UnityEngine::TextCore::Text::TextAlignment", modifiers: "", def_value: Some("{}") }, CppParam { name: "lineExtents", ty: "::UnityEngine::TextCore::Text::Extents", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::LineInfo::LineInfo(int32_t controlCharacterCount, int32_t characterCount, int32_t visibleCharacterCount, int32_t spaceCount, int32_t visibleSpaceCount,
                                                            int32_t wordCount, int32_t firstCharacterIndex, int32_t firstVisibleCharacterIndex, int32_t lastCharacterIndex,
                                                            int32_t lastVisibleCharacterIndex, float_t length, float_t lineHeight, float_t ascender, float_t baseline, float_t descender,
                                                            float_t maxAdvance, float_t width, float_t marginLeft, float_t marginRight, ::UnityEngine::TextCore::Text::TextAlignment alignment,
                                                            ::UnityEngine::TextCore::Text::Extents lineExtents) noexcept {
  this->controlCharacterCount = controlCharacterCount;
  this->characterCount = characterCount;
  this->visibleCharacterCount = visibleCharacterCount;
  this->spaceCount = spaceCount;
  this->visibleSpaceCount = visibleSpaceCount;
  this->wordCount = wordCount;
  this->firstCharacterIndex = firstCharacterIndex;
  this->firstVisibleCharacterIndex = firstVisibleCharacterIndex;
  this->lastCharacterIndex = lastCharacterIndex;
  this->lastVisibleCharacterIndex = lastVisibleCharacterIndex;
  this->length = length;
  this->lineHeight = lineHeight;
  this->ascender = ascender;
  this->baseline = baseline;
  this->descender = descender;
  this->maxAdvance = maxAdvance;
  this->width = width;
  this->marginLeft = marginLeft;
  this->marginRight = marginRight;
  this->alignment = alignment;
  this->lineExtents = lineExtents;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::LineInfo::LineInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
