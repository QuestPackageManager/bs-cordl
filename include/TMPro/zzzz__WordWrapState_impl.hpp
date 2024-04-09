#pragma once
#include "TMPro/zzzz__Extents_impl.hpp"
#include "TMPro/zzzz__FontStyles_impl.hpp"
#include "TMPro/zzzz__FontWeight_impl.hpp"
#include "TMPro/zzzz__HighlightState_impl.hpp"
#include "TMPro/zzzz__HorizontalAlignmentOptions_impl.hpp"
#include "TMPro/zzzz__MaterialReference_impl.hpp"
#include "TMPro/zzzz__TMP_FontStyleStack_impl.hpp"
#include "TMPro/zzzz__TMP_LineInfo_impl.hpp"
#include "TMPro/zzzz__TMP_TextProcessingStack_1_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "TMPro/zzzz__WordWrapState_def.hpp"
#include "TMPro/zzzz__Extents_def.hpp"
#include "TMPro/zzzz__FontStyles_def.hpp"
#include "TMPro/zzzz__FontWeight_def.hpp"
#include "TMPro/zzzz__HighlightState_def.hpp"
#include "TMPro/zzzz__HorizontalAlignmentOptions_def.hpp"
#include "TMPro/zzzz__MaterialReference_def.hpp"
#include "TMPro/zzzz__TMP_ColorGradient_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "TMPro/zzzz__TMP_FontStyleStack_def.hpp"
#include "TMPro/zzzz__TMP_LineInfo_def.hpp"
#include "TMPro/zzzz__TMP_SpriteAsset_def.hpp"
#include "TMPro/zzzz__TMP_TextInfo_def.hpp"
#include "TMPro/zzzz__TMP_TextProcessingStack_1_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
// Ctor Parameters [CppParam { name: "previous_WordBreak", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "total_CharacterCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "visible_CharacterCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "visible_SpriteCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "visible_LinkCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "firstCharacterIndex", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "firstVisibleCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastCharacterIndex", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "lastVisibleCharIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lineNumber", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "maxCapHeight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxAscender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "maxDescender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "startOfLineAscender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "maxLineAscender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxLineDescender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "pageAscender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "horizontalAlignment", ty: "::TMPro::HorizontalAlignmentOptions", modifiers: "", def_value: Some("{}") },
// CppParam { name: "marginLeft", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "marginRight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "xAdvance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "preferredWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "preferredHeight", ty:
// "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "previousLineScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "wordCount", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "fontStyle", ty: "::TMPro::FontStyles", modifiers: "", def_value: Some("{}") }, CppParam { name: "italicAngle", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "fontScaleMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "currentFontSize", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "baselineOffset", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lineOffset", ty: "float_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "isDrivenLineSpacing", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "glyphHorizontalAdvanceAdjustment", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "cSpace", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "mSpace", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "textInfo", ty: "::TMPro::TMP_TextInfo*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "lineInfo", ty: "::TMPro::TMP_LineInfo", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "vertexColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "underlineColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") },
// CppParam { name: "strikethroughColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "highlightColor", ty: "::UnityEngine::Color32", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "basicStyleStack", ty: "::TMPro::TMP_FontStyleStack", modifiers: "", def_value: Some("{}") }, CppParam { name: "italicAngleStack", ty:
// "::TMPro::TMP_TextProcessingStack_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "colorStack", ty: "::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "underlineColorStack", ty: "::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "strikethroughColorStack", ty: "::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>", modifiers: "", def_value: Some("{}") }, CppParam { name: "highlightColorStack", ty:
// "::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>", modifiers: "", def_value: Some("{}") }, CppParam { name: "highlightStateStack", ty:
// "::TMPro::TMP_TextProcessingStack_1<::TMPro::HighlightState>", modifiers: "", def_value: Some("{}") }, CppParam { name: "colorGradientStack", ty:
// "::TMPro::TMP_TextProcessingStack_1<::UnityW<::TMPro::TMP_ColorGradient>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "sizeStack", ty: "::TMPro::TMP_TextProcessingStack_1<float_t>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "indentStack", ty: "::TMPro::TMP_TextProcessingStack_1<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "fontWeightStack", ty: "::TMPro::TMP_TextProcessingStack_1<::TMPro::FontWeight>", modifiers: "", def_value: Some("{}") }, CppParam { name: "styleStack", ty:
// "::TMPro::TMP_TextProcessingStack_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "baselineStack", ty: "::TMPro::TMP_TextProcessingStack_1<float_t>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "actionStack", ty: "::TMPro::TMP_TextProcessingStack_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "materialReferenceStack", ty:
// "::TMPro::TMP_TextProcessingStack_1<::TMPro::MaterialReference>", modifiers: "", def_value: Some("{}") }, CppParam { name: "lineJustificationStack", ty:
// "::TMPro::TMP_TextProcessingStack_1<::TMPro::HorizontalAlignmentOptions>", modifiers: "", def_value: Some("{}") }, CppParam { name: "spriteAnimationID", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "currentFontAsset", ty: "::UnityW<::TMPro::TMP_FontAsset>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "currentSpriteAsset", ty:
// "::UnityW<::TMPro::TMP_SpriteAsset>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "currentMaterial", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "currentMaterialIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "meshExtents", ty: "::TMPro::Extents", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "tagNoParsing", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isNonBreakingSpace", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::WordWrapState::WordWrapState(
    int32_t previous_WordBreak, int32_t total_CharacterCount, int32_t visible_CharacterCount, int32_t visible_SpriteCount, int32_t visible_LinkCount, int32_t firstCharacterIndex,
    int32_t firstVisibleCharacterIndex, int32_t lastCharacterIndex, int32_t lastVisibleCharIndex, int32_t lineNumber, float_t maxCapHeight, float_t maxAscender, float_t maxDescender,
    float_t startOfLineAscender, float_t maxLineAscender, float_t maxLineDescender, float_t pageAscender, ::TMPro::HorizontalAlignmentOptions horizontalAlignment, float_t marginLeft,
    float_t marginRight, float_t xAdvance, float_t preferredWidth, float_t preferredHeight, float_t previousLineScale, int32_t wordCount, ::TMPro::FontStyles fontStyle, int32_t italicAngle,
    float_t fontScaleMultiplier, float_t currentFontSize, float_t baselineOffset, float_t lineOffset, bool isDrivenLineSpacing, float_t glyphHorizontalAdvanceAdjustment, float_t cSpace,
    float_t mSpace, ::TMPro::TMP_TextInfo* textInfo, ::TMPro::TMP_LineInfo lineInfo, ::UnityEngine::Color32 vertexColor, ::UnityEngine::Color32 underlineColor,
    ::UnityEngine::Color32 strikethroughColor, ::UnityEngine::Color32 highlightColor, ::TMPro::TMP_FontStyleStack basicStyleStack, ::TMPro::TMP_TextProcessingStack_1<int32_t> italicAngleStack,
    ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> colorStack, ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> underlineColorStack,
    ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> strikethroughColorStack, ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> highlightColorStack,
    ::TMPro::TMP_TextProcessingStack_1<::TMPro::HighlightState> highlightStateStack, ::TMPro::TMP_TextProcessingStack_1<::UnityW<::TMPro::TMP_ColorGradient>> colorGradientStack,
    ::TMPro::TMP_TextProcessingStack_1<float_t> sizeStack, ::TMPro::TMP_TextProcessingStack_1<float_t> indentStack, ::TMPro::TMP_TextProcessingStack_1<::TMPro::FontWeight> fontWeightStack,
    ::TMPro::TMP_TextProcessingStack_1<int32_t> styleStack, ::TMPro::TMP_TextProcessingStack_1<float_t> baselineStack, ::TMPro::TMP_TextProcessingStack_1<int32_t> actionStack,
    ::TMPro::TMP_TextProcessingStack_1<::TMPro::MaterialReference> materialReferenceStack, ::TMPro::TMP_TextProcessingStack_1<::TMPro::HorizontalAlignmentOptions> lineJustificationStack,
    int32_t spriteAnimationID, ::UnityW<::TMPro::TMP_FontAsset> currentFontAsset, ::UnityW<::TMPro::TMP_SpriteAsset> currentSpriteAsset, ::UnityW<::UnityEngine::Material> currentMaterial,
    int32_t currentMaterialIndex, ::TMPro::Extents meshExtents, bool tagNoParsing, bool isNonBreakingSpace) noexcept {
  this->previous_WordBreak = previous_WordBreak;
  this->total_CharacterCount = total_CharacterCount;
  this->visible_CharacterCount = visible_CharacterCount;
  this->visible_SpriteCount = visible_SpriteCount;
  this->visible_LinkCount = visible_LinkCount;
  this->firstCharacterIndex = firstCharacterIndex;
  this->firstVisibleCharacterIndex = firstVisibleCharacterIndex;
  this->lastCharacterIndex = lastCharacterIndex;
  this->lastVisibleCharIndex = lastVisibleCharIndex;
  this->lineNumber = lineNumber;
  this->maxCapHeight = maxCapHeight;
  this->maxAscender = maxAscender;
  this->maxDescender = maxDescender;
  this->startOfLineAscender = startOfLineAscender;
  this->maxLineAscender = maxLineAscender;
  this->maxLineDescender = maxLineDescender;
  this->pageAscender = pageAscender;
  this->horizontalAlignment = horizontalAlignment;
  this->marginLeft = marginLeft;
  this->marginRight = marginRight;
  this->xAdvance = xAdvance;
  this->preferredWidth = preferredWidth;
  this->preferredHeight = preferredHeight;
  this->previousLineScale = previousLineScale;
  this->wordCount = wordCount;
  this->fontStyle = fontStyle;
  this->italicAngle = italicAngle;
  this->fontScaleMultiplier = fontScaleMultiplier;
  this->currentFontSize = currentFontSize;
  this->baselineOffset = baselineOffset;
  this->lineOffset = lineOffset;
  this->isDrivenLineSpacing = isDrivenLineSpacing;
  this->glyphHorizontalAdvanceAdjustment = glyphHorizontalAdvanceAdjustment;
  this->cSpace = cSpace;
  this->mSpace = mSpace;
  this->textInfo = textInfo;
  this->lineInfo = lineInfo;
  this->vertexColor = vertexColor;
  this->underlineColor = underlineColor;
  this->strikethroughColor = strikethroughColor;
  this->highlightColor = highlightColor;
  this->basicStyleStack = basicStyleStack;
  this->italicAngleStack = italicAngleStack;
  this->colorStack = colorStack;
  this->underlineColorStack = underlineColorStack;
  this->strikethroughColorStack = strikethroughColorStack;
  this->highlightColorStack = highlightColorStack;
  this->highlightStateStack = highlightStateStack;
  this->colorGradientStack = colorGradientStack;
  this->sizeStack = sizeStack;
  this->indentStack = indentStack;
  this->fontWeightStack = fontWeightStack;
  this->styleStack = styleStack;
  this->baselineStack = baselineStack;
  this->actionStack = actionStack;
  this->materialReferenceStack = materialReferenceStack;
  this->lineJustificationStack = lineJustificationStack;
  this->spriteAnimationID = spriteAnimationID;
  this->currentFontAsset = currentFontAsset;
  this->currentSpriteAsset = currentSpriteAsset;
  this->currentMaterial = currentMaterial;
  this->currentMaterialIndex = currentMaterialIndex;
  this->meshExtents = meshExtents;
  this->tagNoParsing = tagNoParsing;
  this->isNonBreakingSpace = isNonBreakingSpace;
}
// Ctor Parameters []
constexpr ::TMPro::WordWrapState::WordWrapState() {}
