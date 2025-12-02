#pragma once
// IWYU pragma private; include "TMPro/TMP_LineInfo.hpp"
#include "TMPro/zzzz__Extents_impl.hpp"
#include "TMPro/zzzz__HorizontalAlignmentOptions_impl.hpp"
#include "TMPro/zzzz__TMP_LineInfo_def.hpp"
// Ctor Parameters [CppParam { name: "controlCharacterCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "characterCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "visibleCharacterCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "spaceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "visibleSpaceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "wordCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "firstCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "firstVisibleCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "lastCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastVisibleCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "length", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lineHeight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ascender", ty: "float_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "baseline", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "descender", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "maxAdvance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "width", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "marginLeft", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "marginRight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "alignment", ty:
// "::TMPro::HorizontalAlignmentOptions", modifiers: "", def_value: Some("{}") }, CppParam { name: "lineExtents", ty: "::TMPro::Extents", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TMP_LineInfo::TMP_LineInfo(int32_t controlCharacterCount, int32_t characterCount, int32_t visibleCharacterCount, int32_t spaceCount, int32_t visibleSpaceCount, int32_t wordCount,
                                              int32_t firstCharacterIndex, int32_t firstVisibleCharacterIndex, int32_t lastCharacterIndex, int32_t lastVisibleCharacterIndex, float_t length,
                                              float_t lineHeight, float_t ascender, float_t baseline, float_t descender, float_t maxAdvance, float_t width, float_t marginLeft, float_t marginRight,
                                              ::TMPro::HorizontalAlignmentOptions alignment, ::TMPro::Extents lineExtents) noexcept {
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
constexpr ::TMPro::TMP_LineInfo::TMP_LineInfo() {}
