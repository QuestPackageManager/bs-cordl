#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/FontAssetCreationEditorSettings.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAssetCreationEditorSettings_def.hpp"
// Ctor Parameters [CppParam { name: "sourceFontFileGUID", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "faceIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "pointSizeSamplingMode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pointSize", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "padding", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "paddingMode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "packingMode", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "atlasWidth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "atlasHeight", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "characterSetSelectionMode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "characterSequence", ty: "::StringW", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "referencedFontAssetGUID", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "referencedTextAssetGUID", ty: "::StringW",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "fontStyle", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontStyleModifier", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "renderMode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "includeFontFeatures", ty: "bool", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::FontAssetCreationEditorSettings(::StringW sourceFontFileGUID, int32_t faceIndex, int32_t pointSizeSamplingMode,
                                                                                                          float_t pointSize, int32_t padding, int32_t paddingMode, int32_t packingMode,
                                                                                                          int32_t atlasWidth, int32_t atlasHeight, int32_t characterSetSelectionMode,
                                                                                                          ::StringW characterSequence, ::StringW referencedFontAssetGUID,
                                                                                                          ::StringW referencedTextAssetGUID, int32_t fontStyle, float_t fontStyleModifier,
                                                                                                          int32_t renderMode, bool includeFontFeatures) noexcept {
  this->sourceFontFileGUID = sourceFontFileGUID;
  this->faceIndex = faceIndex;
  this->pointSizeSamplingMode = pointSizeSamplingMode;
  this->pointSize = pointSize;
  this->padding = padding;
  this->paddingMode = paddingMode;
  this->packingMode = packingMode;
  this->atlasWidth = atlasWidth;
  this->atlasHeight = atlasHeight;
  this->characterSetSelectionMode = characterSetSelectionMode;
  this->characterSequence = characterSequence;
  this->referencedFontAssetGUID = referencedFontAssetGUID;
  this->referencedTextAssetGUID = referencedTextAssetGUID;
  this->fontStyle = fontStyle;
  this->fontStyleModifier = fontStyleModifier;
  this->renderMode = renderMode;
  this->includeFontFeatures = includeFontFeatures;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::FontAssetCreationEditorSettings() {}
