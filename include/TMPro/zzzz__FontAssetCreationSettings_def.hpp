#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FontAssetCreationSettings)
// Forward declare root types
namespace TMPro {
struct FontAssetCreationSettings;
}
// Write type traits
MARK_VAL_T(::TMPro::FontAssetCreationSettings);
// Type: TMPro::FontAssetCreationSettings
// SizeInfo { instance_size: 88, native_size: 88, calculated_instance_size: 88, calculated_native_size: 101, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// CS Name: ::TMPro::FontAssetCreationSettings
struct CORDL_TYPE FontAssetCreationSettings {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2cf6e54, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::StringW sourceFontFileGUID, int32_t pointSize, int32_t pointSizeSamplingMode, int32_t padding, int32_t packingMode, int32_t atlasWidth, int32_t atlasHeight,
                    int32_t characterSelectionMode, ::StringW characterSet, int32_t renderMode);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FontAssetCreationSettings();

  // Ctor Parameters [CppParam { name: "sourceFontFileName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "sourceFontFileGUID", ty: "::StringW", modifiers: "", def_value: None
  // }, CppParam { name: "pointSizeSamplingMode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "pointSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "padding", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "packingMode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "atlasWidth", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "atlasHeight", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "characterSetSelectionMode", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "characterSequence", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "referencedFontAssetGUID", ty: "::StringW", modifiers: "", def_value:
  // None }, CppParam { name: "referencedTextAssetGUID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "fontStyle", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "fontStyleModifier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "renderMode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "includeFontFeatures",
  // ty: "bool", modifiers: "", def_value: None }]
  constexpr FontAssetCreationSettings(::StringW sourceFontFileName, ::StringW sourceFontFileGUID, int32_t pointSizeSamplingMode, int32_t pointSize, int32_t padding, int32_t packingMode,
                                      int32_t atlasWidth, int32_t atlasHeight, int32_t characterSetSelectionMode, ::StringW characterSequence, ::StringW referencedFontAssetGUID,
                                      ::StringW referencedTextAssetGUID, int32_t fontStyle, float_t fontStyleModifier, int32_t renderMode, bool includeFontFeatures) noexcept;

  /// @brief Field sourceFontFileName, offset: 0x0, size: 0x8, def value: None
  ::StringW sourceFontFileName;

  /// @brief Field sourceFontFileGUID, offset: 0x8, size: 0x8, def value: None
  ::StringW sourceFontFileGUID;

  /// @brief Field pointSizeSamplingMode, offset: 0x10, size: 0x4, def value: None
  int32_t pointSizeSamplingMode;

  /// @brief Field pointSize, offset: 0x14, size: 0x4, def value: None
  int32_t pointSize;

  /// @brief Field padding, offset: 0x18, size: 0x4, def value: None
  int32_t padding;

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::FontAssetCreationSettings, 0x58>, "Size mismatch!");

static_assert(offsetof(::TMPro::FontAssetCreationSettings, sourceFontFileName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::FontAssetCreationSettings, sourceFontFileGUID) == 0x8, "Offset mismatch!");

static_assert(offsetof(::TMPro::FontAssetCreationSettings, pointSizeSamplingMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::FontAssetCreationSettings, pointSize) == 0x14, "Offset mismatch!");

static_assert(offsetof(::TMPro::FontAssetCreationSettings, padding) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::FontAssetCreationSettings, packingMode) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::TMPro::FontAssetCreationSettings, atlasWidth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::FontAssetCreationSettings, atlasHeight) == 0x24, "Offset mismatch!");

static_assert(offsetof(::TMPro::FontAssetCreationSettings, characterSetSelectionMode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TMPro::FontAssetCreationSettings, characterSequence) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TMPro::FontAssetCreationSettings, referencedFontAssetGUID) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TMPro::FontAssetCreationSettings, referencedTextAssetGUID) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TMPro::FontAssetCreationSettings, fontStyle) == 0x48, "Offset mismatch!");

static_assert(offsetof(::TMPro::FontAssetCreationSettings, fontStyleModifier) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::TMPro::FontAssetCreationSettings, renderMode) == 0x50, "Offset mismatch!");

static_assert(offsetof(::TMPro::FontAssetCreationSettings, includeFontFeatures) == 0x54, "Offset mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::FontAssetCreationSettings, "TMPro", "FontAssetCreationSettings");
