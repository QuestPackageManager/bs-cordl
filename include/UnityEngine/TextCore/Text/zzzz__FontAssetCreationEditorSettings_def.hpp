#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/FontAssetCreationEditorSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FontAssetCreationEditorSettings)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct FontAssetCreationEditorSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings);
// Dependencies
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: UnityEngine.TextCore.Text.FontAssetCreationEditorSettings
struct CORDL_TYPE FontAssetCreationEditorSettings {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr FontAssetCreationEditorSettings();

  // Ctor Parameters [CppParam { name: "sourceFontFileGUID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "faceIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam
  // { name: "pointSizeSamplingMode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "pointSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "padding", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "paddingMode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "packingMode", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "atlasWidth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "atlasHeight", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "characterSetSelectionMode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "characterSequence", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "referencedFontAssetGUID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "referencedTextAssetGUID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "fontStyle", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fontStyleModifier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "renderMode", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "includeFontFeatures", ty: "bool", modifiers: "", def_value: None }]
  constexpr FontAssetCreationEditorSettings(::StringW sourceFontFileGUID, int32_t faceIndex, int32_t pointSizeSamplingMode, int32_t pointSize, int32_t padding, int32_t paddingMode,
                                            int32_t packingMode, int32_t atlasWidth, int32_t atlasHeight, int32_t characterSetSelectionMode, ::StringW characterSequence,
                                            ::StringW referencedFontAssetGUID, ::StringW referencedTextAssetGUID, int32_t fontStyle, float_t fontStyleModifier, int32_t renderMode,
                                            bool includeFontFeatures) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15239 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field sourceFontFileGUID, offset: 0x0, size: 0x8, def value: None
  ::StringW sourceFontFileGUID;

  /// @brief Field faceIndex, offset: 0x8, size: 0x4, def value: None
  int32_t faceIndex;

  /// @brief Field pointSizeSamplingMode, offset: 0xc, size: 0x4, def value: None
  int32_t pointSizeSamplingMode;

  /// @brief Field pointSize, offset: 0x10, size: 0x4, def value: None
  int32_t pointSize;

  /// @brief Field padding, offset: 0x14, size: 0x4, def value: None
  int32_t padding;

  /// @brief Field paddingMode, offset: 0x18, size: 0x4, def value: None
  int32_t paddingMode;

  /// @brief Field packingMode, offset: 0x1c, size: 0x4, def value: None
  int32_t packingMode;

  /// @brief Field atlasWidth, offset: 0x20, size: 0x4, def value: None
  int32_t atlasWidth;

  /// @brief Field atlasHeight, offset: 0x24, size: 0x4, def value: None
  int32_t atlasHeight;

  /// @brief Field characterSetSelectionMode, offset: 0x28, size: 0x4, def value: None
  int32_t characterSetSelectionMode;

  /// @brief Field characterSequence, offset: 0x30, size: 0x8, def value: None
  ::StringW characterSequence;

  /// @brief Field referencedFontAssetGUID, offset: 0x38, size: 0x8, def value: None
  ::StringW referencedFontAssetGUID;

  /// @brief Field referencedTextAssetGUID, offset: 0x40, size: 0x8, def value: None
  ::StringW referencedTextAssetGUID;

  /// @brief Field fontStyle, offset: 0x48, size: 0x4, def value: None
  int32_t fontStyle;

  /// @brief Field fontStyleModifier, offset: 0x4c, size: 0x4, def value: None
  float_t fontStyleModifier;

  /// @brief Field renderMode, offset: 0x50, size: 0x4, def value: None
  int32_t renderMode;

  /// @brief Field includeFontFeatures, offset: 0x54, size: 0x1, def value: None
  bool includeFontFeatures;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings, sourceFontFileGUID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings, faceIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings, pointSizeSamplingMode) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings, pointSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings, padding) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings, paddingMode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings, packingMode) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings, atlasWidth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings, atlasHeight) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings, characterSetSelectionMode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings, characterSequence) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings, referencedFontAssetGUID) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings, referencedTextAssetGUID) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings, fontStyle) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings, fontStyleModifier) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings, renderMode) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings, includeFontFeatures) == 0x54, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings, 0x58>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings, "UnityEngine.TextCore.Text", "FontAssetCreationEditorSettings");
