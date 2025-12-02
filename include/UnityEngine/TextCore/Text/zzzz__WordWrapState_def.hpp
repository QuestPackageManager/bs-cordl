#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/WordWrapState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/Text/zzzz__Extents_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyleStack_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__HighlightState_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__LineInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__MaterialReference_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextAlignment_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextFontWeight_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextProcessingStack_1_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WordWrapState)
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore::Text {
class SpriteAsset;
}
namespace UnityEngine::TextCore::Text {
class TextColorGradient;
}
namespace UnityEngine::TextCore::Text {
class TextInfo;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct WordWrapState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::WordWrapState);
// Dependencies UnityEngine.Color32, UnityEngine.Quaternion, UnityEngine.TextCore.Text.Extents, UnityEngine.TextCore.Text.FontStyleStack, UnityEngine.TextCore.Text.FontStyles,
// UnityEngine.TextCore.Text.HighlightState, UnityEngine.TextCore.Text.LineInfo, UnityEngine.TextCore.Text.MaterialReference, UnityEngine.TextCore.Text.TextAlignment,
// UnityEngine.TextCore.Text.TextFontWeight, UnityEngine.TextCore.Text.TextProcessingStack`1<T>, UnityEngine.Vector3
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: UnityEngine.TextCore.Text.WordWrapState
struct CORDL_TYPE WordWrapState {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr WordWrapState();

  // Ctor Parameters [CppParam { name: "previousWordBreak", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "totalCharacterCount", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "visibleCharacterCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "visibleSpaceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "visibleSpriteCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "visibleLinkCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "firstCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstVisibleCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "lastCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastVisibleCharIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lineNumber", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxCapHeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxAscender", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "maxDescender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxLineAscender", ty: "float_t", modifiers: "", def_value: None }, CppParam
  // { name: "maxLineDescender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "startOfLineAscender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "xAdvance",
  // ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "preferredWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "preferredHeight", ty: "float_t", modifiers:
  // "", def_value: None }, CppParam { name: "previousLineScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "pageAscender", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "wordCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fontStyle", ty: "::UnityEngine::TextCore::Text::FontStyles", modifiers: "", def_value: None },
  // CppParam { name: "fontScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fontScaleMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "italicAngle", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "currentFontSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "baselineOffset", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "lineOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "textInfo", ty:
  // "::UnityEngine::TextCore::Text::TextInfo*", modifiers: "", def_value: None }, CppParam { name: "lineInfo", ty: "::UnityEngine::TextCore::Text::LineInfo", modifiers: "", def_value: None },
  // CppParam { name: "vertexColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "underlineColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None },
  // CppParam { name: "strikethroughColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "highlightColor", ty: "::UnityEngine::Color32", modifiers: "", def_value:
  // None }, CppParam { name: "highlightState", ty: "::UnityEngine::TextCore::Text::HighlightState", modifiers: "", def_value: None }, CppParam { name: "basicStyleStack", ty:
  // "::UnityEngine::TextCore::Text::FontStyleStack", modifiers: "", def_value: None }, CppParam { name: "italicAngleStack", ty: "::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>",
  // modifiers: "", def_value: None }, CppParam { name: "colorStack", ty: "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>", modifiers: "", def_value: None }, CppParam {
  // name: "underlineColorStack", ty: "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>", modifiers: "", def_value: None }, CppParam { name: "strikethroughColorStack", ty:
  // "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>", modifiers: "", def_value: None }, CppParam { name: "highlightColorStack", ty:
  // "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>", modifiers: "", def_value: None }, CppParam { name: "highlightStateStack", ty:
  // "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::HighlightState>", modifiers: "", def_value: None }, CppParam { name: "colorGradientStack", ty:
  // "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityW<::UnityEngine::TextCore::Text::TextColorGradient>>", modifiers: "", def_value: None }, CppParam { name: "sizeStack", ty:
  // "::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "indentStack", ty:
  // "::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "fontWeightStack", ty:
  // "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight>", modifiers: "", def_value: None }, CppParam { name: "styleStack", ty:
  // "::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "baselineStack", ty:
  // "::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "actionStack", ty:
  // "::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "materialReferenceStack", ty:
  // "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference>", modifiers: "", def_value: None }, CppParam { name: "lineJustificationStack", ty:
  // "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment>", modifiers: "", def_value: None }, CppParam { name: "lastBaseGlyphIndex", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "spriteAnimationId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "currentFontAsset", ty:
  // "::UnityW<::UnityEngine::TextCore::Text::FontAsset>", modifiers: "", def_value: None }, CppParam { name: "currentSpriteAsset", ty: "::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>",
  // modifiers: "", def_value: None }, CppParam { name: "currentMaterial", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }, CppParam { name: "currentMaterialIndex", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "meshExtents", ty: "::UnityEngine::TextCore::Text::Extents", modifiers: "", def_value: None }, CppParam { name: "tagNoParsing", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "isNonBreakingSpace", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isDrivenLineSpacing", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "fxScale", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "fxRotation", ty: "::UnityEngine::Quaternion", modifiers: "",
  // def_value: None }]
  constexpr WordWrapState(int32_t previousWordBreak, int32_t totalCharacterCount, int32_t visibleCharacterCount, int32_t visibleSpaceCount, int32_t visibleSpriteCount, int32_t visibleLinkCount,
                          int32_t firstCharacterIndex, int32_t firstVisibleCharacterIndex, int32_t lastCharacterIndex, int32_t lastVisibleCharIndex, int32_t lineNumber, float_t maxCapHeight,
                          float_t maxAscender, float_t maxDescender, float_t maxLineAscender, float_t maxLineDescender, float_t startOfLineAscender, float_t xAdvance, float_t preferredWidth,
                          float_t preferredHeight, float_t previousLineScale, float_t pageAscender, int32_t wordCount, ::UnityEngine::TextCore::Text::FontStyles fontStyle, float_t fontScale,
                          float_t fontScaleMultiplier, int32_t italicAngle, float_t currentFontSize, float_t baselineOffset, float_t lineOffset, ::UnityEngine::TextCore::Text::TextInfo* textInfo,
                          ::UnityEngine::TextCore::Text::LineInfo lineInfo, ::UnityEngine::Color32 vertexColor, ::UnityEngine::Color32 underlineColor, ::UnityEngine::Color32 strikethroughColor,
                          ::UnityEngine::Color32 highlightColor, ::UnityEngine::TextCore::Text::HighlightState highlightState, ::UnityEngine::TextCore::Text::FontStyleStack basicStyleStack,
                          ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> italicAngleStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> colorStack,
                          ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> underlineColorStack,
                          ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> strikethroughColorStack,
                          ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> highlightColorStack,
                          ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::HighlightState> highlightStateStack,
                          ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityW<::UnityEngine::TextCore::Text::TextColorGradient>> colorGradientStack,
                          ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> sizeStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> indentStack,
                          ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight> fontWeightStack,
                          ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> styleStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> baselineStack,
                          ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> actionStack,
                          ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference> materialReferenceStack,
                          ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment> lineJustificationStack, int32_t lastBaseGlyphIndex,
                          int32_t spriteAnimationId, ::UnityW<::UnityEngine::TextCore::Text::FontAsset> currentFontAsset, ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> currentSpriteAsset,
                          ::UnityW<::UnityEngine::Material> currentMaterial, int32_t currentMaterialIndex, ::UnityEngine::TextCore::Text::Extents meshExtents, bool tagNoParsing,
                          bool isNonBreakingSpace, bool isDrivenLineSpacing, ::UnityEngine::Vector3 fxScale, ::UnityEngine::Quaternion fxRotation) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17220 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x398 };

  /// @brief Field previousWordBreak, offset: 0x0, size: 0x4, def value: None
  int32_t previousWordBreak;

  /// @brief Field totalCharacterCount, offset: 0x4, size: 0x4, def value: None
  int32_t totalCharacterCount;

  /// @brief Field visibleCharacterCount, offset: 0x8, size: 0x4, def value: None
  int32_t visibleCharacterCount;

  /// @brief Field visibleSpaceCount, offset: 0xc, size: 0x4, def value: None
  int32_t visibleSpaceCount;

  /// @brief Field visibleSpriteCount, offset: 0x10, size: 0x4, def value: None
  int32_t visibleSpriteCount;

  /// @brief Field visibleLinkCount, offset: 0x14, size: 0x4, def value: None
  int32_t visibleLinkCount;

  /// @brief Field firstCharacterIndex, offset: 0x18, size: 0x4, def value: None
  int32_t firstCharacterIndex;

  /// @brief Field firstVisibleCharacterIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t firstVisibleCharacterIndex;

  /// @brief Field lastCharacterIndex, offset: 0x20, size: 0x4, def value: None
  int32_t lastCharacterIndex;

  /// @brief Field lastVisibleCharIndex, offset: 0x24, size: 0x4, def value: None
  int32_t lastVisibleCharIndex;

  /// @brief Field lineNumber, offset: 0x28, size: 0x4, def value: None
  int32_t lineNumber;

  /// @brief Field maxCapHeight, offset: 0x2c, size: 0x4, def value: None
  float_t maxCapHeight;

  /// @brief Field maxAscender, offset: 0x30, size: 0x4, def value: None
  float_t maxAscender;

  /// @brief Field maxDescender, offset: 0x34, size: 0x4, def value: None
  float_t maxDescender;

  /// @brief Field maxLineAscender, offset: 0x38, size: 0x4, def value: None
  float_t maxLineAscender;

  /// @brief Field maxLineDescender, offset: 0x3c, size: 0x4, def value: None
  float_t maxLineDescender;

  /// @brief Field startOfLineAscender, offset: 0x40, size: 0x4, def value: None
  float_t startOfLineAscender;

  /// @brief Field xAdvance, offset: 0x44, size: 0x4, def value: None
  float_t xAdvance;

  /// @brief Field preferredWidth, offset: 0x48, size: 0x4, def value: None
  float_t preferredWidth;

  /// @brief Field preferredHeight, offset: 0x4c, size: 0x4, def value: None
  float_t preferredHeight;

  /// @brief Field previousLineScale, offset: 0x50, size: 0x4, def value: None
  float_t previousLineScale;

  /// @brief Field pageAscender, offset: 0x54, size: 0x4, def value: None
  float_t pageAscender;

  /// @brief Field wordCount, offset: 0x58, size: 0x4, def value: None
  int32_t wordCount;

  /// @brief Field fontStyle, offset: 0x5c, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::FontStyles fontStyle;

  /// @brief Field fontScale, offset: 0x60, size: 0x4, def value: None
  float_t fontScale;

  /// @brief Field fontScaleMultiplier, offset: 0x64, size: 0x4, def value: None
  float_t fontScaleMultiplier;

  /// @brief Field italicAngle, offset: 0x68, size: 0x4, def value: None
  int32_t italicAngle;

  /// @brief Field currentFontSize, offset: 0x6c, size: 0x4, def value: None
  float_t currentFontSize;

  /// @brief Field baselineOffset, offset: 0x70, size: 0x4, def value: None
  float_t baselineOffset;

  /// @brief Field lineOffset, offset: 0x74, size: 0x4, def value: None
  float_t lineOffset;

  /// @brief Field textInfo, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::TextCore::Text::TextInfo* textInfo;

  /// @brief Field lineInfo, offset: 0x80, size: 0x60, def value: None
  ::UnityEngine::TextCore::Text::LineInfo lineInfo;

  /// @brief Field vertexColor, offset: 0xe0, size: 0x4, def value: None
  ::UnityEngine::Color32 vertexColor;

  /// @brief Field underlineColor, offset: 0xe4, size: 0x4, def value: None
  ::UnityEngine::Color32 underlineColor;

  /// @brief Field strikethroughColor, offset: 0xe8, size: 0x4, def value: None
  ::UnityEngine::Color32 strikethroughColor;

  /// @brief Field highlightColor, offset: 0xec, size: 0x4, def value: None
  ::UnityEngine::Color32 highlightColor;

  /// @brief Field highlightState, offset: 0xf0, size: 0x14, def value: None
  ::UnityEngine::TextCore::Text::HighlightState highlightState;

  /// @brief Field basicStyleStack, offset: 0x104, size: 0xa, def value: None
  ::UnityEngine::TextCore::Text::FontStyleStack basicStyleStack;

  /// @brief Field italicAngleStack, offset: 0x110, size: 0x20, def value: None
  ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> italicAngleStack;

  /// @brief Field colorStack, offset: 0x130, size: 0x20, def value: None
  ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> colorStack;

  /// @brief Field underlineColorStack, offset: 0x150, size: 0x20, def value: None
  ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> underlineColorStack;

  /// @brief Field strikethroughColorStack, offset: 0x170, size: 0x20, def value: None
  ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> strikethroughColorStack;

  /// @brief Field highlightColorStack, offset: 0x190, size: 0x20, def value: None
  ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> highlightColorStack;

  /// @brief Field highlightStateStack, offset: 0x1b0, size: 0x30, def value: None
  ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::HighlightState> highlightStateStack;

  /// @brief Field colorGradientStack, offset: 0x1e0, size: 0x28, def value: None
  ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityW<::UnityEngine::TextCore::Text::TextColorGradient>> colorGradientStack;

  /// @brief Field sizeStack, offset: 0x208, size: 0x20, def value: None
  ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> sizeStack;

  /// @brief Field indentStack, offset: 0x228, size: 0x20, def value: None
  ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> indentStack;

  /// @brief Field fontWeightStack, offset: 0x248, size: 0x20, def value: None
  ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight> fontWeightStack;

  /// @brief Field styleStack, offset: 0x268, size: 0x20, def value: None
  ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> styleStack;

  /// @brief Field baselineStack, offset: 0x288, size: 0x20, def value: None
  ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> baselineStack;

  /// @brief Field actionStack, offset: 0x2a8, size: 0x20, def value: None
  ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> actionStack;

  /// @brief Field materialReferenceStack, offset: 0x2c8, size: 0x58, def value: None
  ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference> materialReferenceStack;

  /// @brief Field lineJustificationStack, offset: 0x320, size: 0x20, def value: None
  ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment> lineJustificationStack;

  /// @brief Field lastBaseGlyphIndex, offset: 0x340, size: 0x4, def value: None
  int32_t lastBaseGlyphIndex;

  /// @brief Field spriteAnimationId, offset: 0x344, size: 0x4, def value: None
  int32_t spriteAnimationId;

  /// @brief Field currentFontAsset, offset: 0x348, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextCore::Text::FontAsset> currentFontAsset;

  /// @brief Field currentSpriteAsset, offset: 0x350, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> currentSpriteAsset;

  /// @brief Field currentMaterial, offset: 0x358, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> currentMaterial;

  /// @brief Field currentMaterialIndex, offset: 0x360, size: 0x4, def value: None
  int32_t currentMaterialIndex;

  /// @brief Field meshExtents, offset: 0x364, size: 0x10, def value: None
  ::UnityEngine::TextCore::Text::Extents meshExtents;

  /// @brief Field tagNoParsing, offset: 0x374, size: 0x1, def value: None
  bool tagNoParsing;

  /// @brief Field isNonBreakingSpace, offset: 0x375, size: 0x1, def value: None
  bool isNonBreakingSpace;

  /// @brief Field isDrivenLineSpacing, offset: 0x376, size: 0x1, def value: None
  bool isDrivenLineSpacing;

  /// @brief Field fxScale, offset: 0x378, size: 0xc, def value: None
  ::UnityEngine::Vector3 fxScale;

  /// @brief Field fxRotation, offset: 0x384, size: 0x10, def value: None
  ::UnityEngine::Quaternion fxRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, previousWordBreak) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, totalCharacterCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, visibleCharacterCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, visibleSpaceCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, visibleSpriteCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, visibleLinkCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, firstCharacterIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, firstVisibleCharacterIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, lastCharacterIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, lastVisibleCharIndex) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, lineNumber) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, maxCapHeight) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, maxAscender) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, maxDescender) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, maxLineAscender) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, maxLineDescender) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, startOfLineAscender) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, xAdvance) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, preferredWidth) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, preferredHeight) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, previousLineScale) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, pageAscender) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, wordCount) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, fontStyle) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, fontScale) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, fontScaleMultiplier) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, italicAngle) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, currentFontSize) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, baselineOffset) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, lineOffset) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, textInfo) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, lineInfo) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, vertexColor) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, underlineColor) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, strikethroughColor) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, highlightColor) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, highlightState) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, basicStyleStack) == 0x104, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, italicAngleStack) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, colorStack) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, underlineColorStack) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, strikethroughColorStack) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, highlightColorStack) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, highlightStateStack) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, colorGradientStack) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, sizeStack) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, indentStack) == 0x228, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, fontWeightStack) == 0x248, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, styleStack) == 0x268, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, baselineStack) == 0x288, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, actionStack) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, materialReferenceStack) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, lineJustificationStack) == 0x320, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, lastBaseGlyphIndex) == 0x340, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, spriteAnimationId) == 0x344, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, currentFontAsset) == 0x348, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, currentSpriteAsset) == 0x350, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, currentMaterial) == 0x358, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, currentMaterialIndex) == 0x360, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, meshExtents) == 0x364, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, tagNoParsing) == 0x374, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, isNonBreakingSpace) == 0x375, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, isDrivenLineSpacing) == 0x376, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, fxScale) == 0x378, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::WordWrapState, fxRotation) == 0x384, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::WordWrapState, 0x398>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::WordWrapState, "UnityEngine.TextCore.Text", "WordWrapState");
