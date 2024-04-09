#pragma once
#include "UnityEngine/TextCore/Text/zzzz__Extents_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyleStack_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__LineInfo_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__MaterialReference_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextAlignment_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextFontWeight_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextProcessingStack_1_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__WordWrapState_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__Extents_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyleStack_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__LineInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__MaterialReference_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__SpriteAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextAlignment_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextColorGradient_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextFontWeight_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextProcessingStack_1_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
// Ctor Parameters [CppParam { name: "previousWordBreak", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "totalCharacterCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "visibleCharacterCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleSpriteCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "visibleLinkCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "firstCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "firstVisibleCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "lastVisibleCharIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lineNumber", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "maxCapHeight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxAscender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxDescender",
// ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxLineAscender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxLineDescender", ty: "float_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "previousLineAscender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "xAdvance", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "preferredWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "preferredHeight", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "previousLineScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "wordCount", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "fontStyle", ty: "::UnityEngine::TextCore::Text::FontStyles", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontScale", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "fontScaleMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "currentFontSize", ty: "float_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "baselineOffset", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lineOffset", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "textInfo", ty: "::UnityEngine::TextCore::Text::TextInfo*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "lineInfo", ty: "::UnityEngine::TextCore::Text::LineInfo", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "vertexColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "underlineColor", ty: "::UnityEngine::Color32",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "strikethroughColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "highlightColor", ty:
// "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "basicStyleStack", ty: "::UnityEngine::TextCore::Text::FontStyleStack", modifiers: "", def_value: Some("{}") },
// CppParam { name: "colorStack", ty: "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>", modifiers: "", def_value: Some("{}") }, CppParam { name: "underlineColorStack",
// ty: "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>", modifiers: "", def_value: Some("{}") }, CppParam { name: "strikethroughColorStack", ty:
// "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>", modifiers: "", def_value: Some("{}") }, CppParam { name: "highlightColorStack", ty:
// "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>", modifiers: "", def_value: Some("{}") }, CppParam { name: "colorGradientStack", ty:
// "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityW<::UnityEngine::TextCore::Text::TextColorGradient>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "sizeStack", ty:
// "::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "indentStack", ty:
// "::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontWeightStack", ty:
// "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight>", modifiers: "", def_value: Some("{}") }, CppParam { name: "styleStack", ty:
// "::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "baselineStack", ty:
// "::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "actionStack", ty:
// "::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "materialReferenceStack", ty:
// "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference>", modifiers: "", def_value: Some("{}") }, CppParam { name: "lineJustificationStack", ty:
// "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment>", modifiers: "", def_value: Some("{}") }, CppParam { name: "spriteAnimationId", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "currentFontAsset", ty: "::UnityW<::UnityEngine::TextCore::Text::FontAsset>", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "currentSpriteAsset", ty: "::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "currentMaterial", ty:
// "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "currentMaterialIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "meshExtents", ty: "::UnityEngine::TextCore::Text::Extents", modifiers: "", def_value: Some("{}") }, CppParam { name: "tagNoParsing", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "isNonBreakingSpace", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::WordWrapState::WordWrapState(
    int32_t previousWordBreak, int32_t totalCharacterCount, int32_t visibleCharacterCount, int32_t visibleSpriteCount, int32_t visibleLinkCount, int32_t firstCharacterIndex,
    int32_t firstVisibleCharacterIndex, int32_t lastCharacterIndex, int32_t lastVisibleCharIndex, int32_t lineNumber, float_t maxCapHeight, float_t maxAscender, float_t maxDescender,
    float_t maxLineAscender, float_t maxLineDescender, float_t previousLineAscender, float_t xAdvance, float_t preferredWidth, float_t preferredHeight, float_t previousLineScale, int32_t wordCount,
    ::UnityEngine::TextCore::Text::FontStyles fontStyle, float_t fontScale, float_t fontScaleMultiplier, float_t currentFontSize, float_t baselineOffset, float_t lineOffset,
    ::UnityEngine::TextCore::Text::TextInfo* textInfo, ::UnityEngine::TextCore::Text::LineInfo lineInfo, ::UnityEngine::Color32 vertexColor, ::UnityEngine::Color32 underlineColor,
    ::UnityEngine::Color32 strikethroughColor, ::UnityEngine::Color32 highlightColor, ::UnityEngine::TextCore::Text::FontStyleStack basicStyleStack,
    ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> colorStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> underlineColorStack,
    ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> strikethroughColorStack,
    ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> highlightColorStack,
    ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityW<::UnityEngine::TextCore::Text::TextColorGradient>> colorGradientStack,
    ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> sizeStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> indentStack,
    ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight> fontWeightStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> styleStack,
    ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> baselineStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> actionStack,
    ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference> materialReferenceStack,
    ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment> lineJustificationStack, int32_t spriteAnimationId,
    ::UnityW<::UnityEngine::TextCore::Text::FontAsset> currentFontAsset, ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> currentSpriteAsset, ::UnityW<::UnityEngine::Material> currentMaterial,
    int32_t currentMaterialIndex, ::UnityEngine::TextCore::Text::Extents meshExtents, bool tagNoParsing, bool isNonBreakingSpace) noexcept {
  this->previousWordBreak = previousWordBreak;
  this->totalCharacterCount = totalCharacterCount;
  this->visibleCharacterCount = visibleCharacterCount;
  this->visibleSpriteCount = visibleSpriteCount;
  this->visibleLinkCount = visibleLinkCount;
  this->firstCharacterIndex = firstCharacterIndex;
  this->firstVisibleCharacterIndex = firstVisibleCharacterIndex;
  this->lastCharacterIndex = lastCharacterIndex;
  this->lastVisibleCharIndex = lastVisibleCharIndex;
  this->lineNumber = lineNumber;
  this->maxCapHeight = maxCapHeight;
  this->maxAscender = maxAscender;
  this->maxDescender = maxDescender;
  this->maxLineAscender = maxLineAscender;
  this->maxLineDescender = maxLineDescender;
  this->previousLineAscender = previousLineAscender;
  this->xAdvance = xAdvance;
  this->preferredWidth = preferredWidth;
  this->preferredHeight = preferredHeight;
  this->previousLineScale = previousLineScale;
  this->wordCount = wordCount;
  this->fontStyle = fontStyle;
  this->fontScale = fontScale;
  this->fontScaleMultiplier = fontScaleMultiplier;
  this->currentFontSize = currentFontSize;
  this->baselineOffset = baselineOffset;
  this->lineOffset = lineOffset;
  this->textInfo = textInfo;
  this->lineInfo = lineInfo;
  this->vertexColor = vertexColor;
  this->underlineColor = underlineColor;
  this->strikethroughColor = strikethroughColor;
  this->highlightColor = highlightColor;
  this->basicStyleStack = basicStyleStack;
  this->colorStack = colorStack;
  this->underlineColorStack = underlineColorStack;
  this->strikethroughColorStack = strikethroughColorStack;
  this->highlightColorStack = highlightColorStack;
  this->colorGradientStack = colorGradientStack;
  this->sizeStack = sizeStack;
  this->indentStack = indentStack;
  this->fontWeightStack = fontWeightStack;
  this->styleStack = styleStack;
  this->baselineStack = baselineStack;
  this->actionStack = actionStack;
  this->materialReferenceStack = materialReferenceStack;
  this->lineJustificationStack = lineJustificationStack;
  this->spriteAnimationId = spriteAnimationId;
  this->currentFontAsset = currentFontAsset;
  this->currentSpriteAsset = currentSpriteAsset;
  this->currentMaterial = currentMaterial;
  this->currentMaterialIndex = currentMaterialIndex;
  this->meshExtents = meshExtents;
  this->tagNoParsing = tagNoParsing;
  this->isNonBreakingSpace = isNonBreakingSpace;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::WordWrapState::WordWrapState() {}
