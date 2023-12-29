#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TMPro/zzzz__Extents_def.hpp"
#include "TMPro/zzzz__FontStyles_def.hpp"
#include "TMPro/zzzz__FontWeight_def.hpp"
#include "TMPro/zzzz__HighlightState_def.hpp"
#include "TMPro/zzzz__HorizontalAlignmentOptions_def.hpp"
#include "TMPro/zzzz__MaterialReference_def.hpp"
#include "TMPro/zzzz__TMP_ColorGradient_def.hpp"
#include "TMPro/zzzz__TMP_FontStyleStack_def.hpp"
#include "TMPro/zzzz__TMP_LineInfo_def.hpp"
#include "TMPro/zzzz__TMP_TextProcessingStack_1_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WordWrapState)
namespace TMPro {
struct MaterialReference;
}
namespace TMPro {
class TMP_ColorGradient;
}
namespace TMPro {
struct HorizontalAlignmentOptions;
}
namespace TMPro {
template <typename T> struct TMP_TextProcessingStack_1;
}
namespace UnityEngine {
class Material;
}
namespace TMPro {
struct FontWeight;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace TMPro {
class TMP_SpriteAsset;
}
namespace TMPro {
struct TMP_FontStyleStack;
}
namespace TMPro {
struct FontStyles;
}
namespace TMPro {
struct TMP_LineInfo;
}
namespace UnityEngine {
struct Color32;
}
namespace TMPro {
struct Extents;
}
namespace TMPro {
class TMP_TextInfo;
}
namespace TMPro {
struct HighlightState;
}
// Forward declare root types
namespace TMPro {
struct WordWrapState;
}
// Write type traits
MARK_VAL_T(::TMPro::WordWrapState);
// Type: TMPro::WordWrapState
// SizeInfo { instance_size: 888, native_size: -1, calculated_instance_size: 888, calculated_native_size: 902, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12381), inst: 4943 }), TypeDefinitionIndex(TypeDefinitionIndex(12367)), GenericInstantiation(GenericInstantiation
// { tdi: TypeDefinitionIndex(12381), inst: 101 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12381), inst: 4944 }), TypeDefinitionIndex(TypeDefinitionIndex(12232)),
// TypeDefinitionIndex(TypeDefinitionIndex(12381)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12381), inst: 4946 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(12381), inst: 4947 }), TypeDefinitionIndex(TypeDefinitionIndex(12358)), TypeDefinitionIndex(TypeDefinitionIndex(12250)), TypeDefinitionIndex(TypeDefinitionIndex(12322)),
// TypeDefinitionIndex(TypeDefinitionIndex(12366)), TypeDefinitionIndex(TypeDefinitionIndex(10177)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12381), inst: 731 }),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12381), inst: 387 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12381), inst: 4945 }),
// TypeDefinitionIndex(TypeDefinitionIndex(12380)), TypeDefinitionIndex(TypeDefinitionIndex(12259)), TypeDefinitionIndex(TypeDefinitionIndex(12262))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(12252)) CS Name: ::TMPro::WordWrapState
struct CORDL_TYPE WordWrapState {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "previous_WordBreak", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "total_CharacterCount", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "visible_CharacterCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "visible_SpriteCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "visible_LinkCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "firstVisibleCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "lastVisibleCharIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lineNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxCapHeight", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "maxAscender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxDescender", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "startOfLineAscender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxLineAscender", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "maxLineDescender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "pageAscender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "horizontalAlignment", ty: "::TMPro::HorizontalAlignmentOptions", modifiers: "", def_value: None }, CppParam { name: "marginLeft", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "marginRight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "xAdvance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "preferredWidth", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "preferredHeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "previousLineScale", ty: "float_t", modifiers:
  // "", def_value: None }, CppParam { name: "wordCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fontStyle", ty: "::TMPro::FontStyles", modifiers: "", def_value: None },
  // CppParam { name: "italicAngle", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fontScaleMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "currentFontSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "baselineOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "lineOffset", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "isDrivenLineSpacing", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "glyphHorizontalAdvanceAdjustment", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "cSpace", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "mSpace", ty: "float_t", modifiers: "", def_value: None
  // }, CppParam { name: "textInfo", ty: "::TMPro::TMP_TextInfo*", modifiers: "", def_value: None }, CppParam { name: "lineInfo", ty: "::TMPro::TMP_LineInfo", modifiers: "", def_value: None },
  // CppParam { name: "vertexColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "underlineColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None },
  // CppParam { name: "strikethroughColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "highlightColor", ty: "::UnityEngine::Color32", modifiers: "", def_value:
  // None }, CppParam { name: "basicStyleStack", ty: "::TMPro::TMP_FontStyleStack", modifiers: "", def_value: None }, CppParam { name: "italicAngleStack", ty:
  // "::TMPro::TMP_TextProcessingStack_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "colorStack", ty: "::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>", modifiers: "",
  // def_value: None }, CppParam { name: "underlineColorStack", ty: "::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>", modifiers: "", def_value: None }, CppParam { name:
  // "strikethroughColorStack", ty: "::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>", modifiers: "", def_value: None }, CppParam { name: "highlightColorStack", ty:
  // "::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>", modifiers: "", def_value: None }, CppParam { name: "highlightStateStack", ty:
  // "::TMPro::TMP_TextProcessingStack_1<::TMPro::HighlightState>", modifiers: "", def_value: None }, CppParam { name: "colorGradientStack", ty:
  // "::TMPro::TMP_TextProcessingStack_1<::TMPro::TMP_ColorGradient*>", modifiers: "", def_value: None }, CppParam { name: "sizeStack", ty: "::TMPro::TMP_TextProcessingStack_1<float_t>", modifiers:
  // "", def_value: None }, CppParam { name: "indentStack", ty: "::TMPro::TMP_TextProcessingStack_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "fontWeightStack", ty:
  // "::TMPro::TMP_TextProcessingStack_1<::TMPro::FontWeight>", modifiers: "", def_value: None }, CppParam { name: "styleStack", ty: "::TMPro::TMP_TextProcessingStack_1<int32_t>", modifiers: "",
  // def_value: None }, CppParam { name: "baselineStack", ty: "::TMPro::TMP_TextProcessingStack_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "actionStack", ty:
  // "::TMPro::TMP_TextProcessingStack_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "materialReferenceStack", ty: "::TMPro::TMP_TextProcessingStack_1<::TMPro::MaterialReference>",
  // modifiers: "", def_value: None }, CppParam { name: "lineJustificationStack", ty: "::TMPro::TMP_TextProcessingStack_1<::TMPro::HorizontalAlignmentOptions>", modifiers: "", def_value: None },
  // CppParam { name: "spriteAnimationID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "currentFontAsset", ty: "::TMPro::TMP_FontAsset*", modifiers: "", def_value: None },
  // CppParam { name: "currentSpriteAsset", ty: "::TMPro::TMP_SpriteAsset*", modifiers: "", def_value: None }, CppParam { name: "currentMaterial", ty: "::UnityEngine::Material*", modifiers: "",
  // def_value: None }, CppParam { name: "currentMaterialIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "meshExtents", ty: "::TMPro::Extents", modifiers: "", def_value: None
  // }, CppParam { name: "tagNoParsing", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isNonBreakingSpace", ty: "bool", modifiers: "", def_value: None }]
  constexpr WordWrapState(int32_t previous_WordBreak, int32_t total_CharacterCount, int32_t visible_CharacterCount, int32_t visible_SpriteCount, int32_t visible_LinkCount, int32_t firstCharacterIndex,
                          int32_t firstVisibleCharacterIndex, int32_t lastCharacterIndex, int32_t lastVisibleCharIndex, int32_t lineNumber, float_t maxCapHeight, float_t maxAscender,
                          float_t maxDescender, float_t startOfLineAscender, float_t maxLineAscender, float_t maxLineDescender, float_t pageAscender,
                          ::TMPro::HorizontalAlignmentOptions horizontalAlignment, float_t marginLeft, float_t marginRight, float_t xAdvance, float_t preferredWidth, float_t preferredHeight,
                          float_t previousLineScale, int32_t wordCount, ::TMPro::FontStyles fontStyle, int32_t italicAngle, float_t fontScaleMultiplier, float_t currentFontSize,
                          float_t baselineOffset, float_t lineOffset, bool isDrivenLineSpacing, float_t glyphHorizontalAdvanceAdjustment, float_t cSpace, float_t mSpace,
                          ::TMPro::TMP_TextInfo* textInfo, ::TMPro::TMP_LineInfo lineInfo, ::UnityEngine::Color32 vertexColor, ::UnityEngine::Color32 underlineColor,
                          ::UnityEngine::Color32 strikethroughColor, ::UnityEngine::Color32 highlightColor, ::TMPro::TMP_FontStyleStack basicStyleStack,
                          ::TMPro::TMP_TextProcessingStack_1<int32_t> italicAngleStack, ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> colorStack,
                          ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> underlineColorStack, ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> strikethroughColorStack,
                          ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> highlightColorStack, ::TMPro::TMP_TextProcessingStack_1<::TMPro::HighlightState> highlightStateStack,
                          ::TMPro::TMP_TextProcessingStack_1<::TMPro::TMP_ColorGradient*> colorGradientStack, ::TMPro::TMP_TextProcessingStack_1<float_t> sizeStack,
                          ::TMPro::TMP_TextProcessingStack_1<float_t> indentStack, ::TMPro::TMP_TextProcessingStack_1<::TMPro::FontWeight> fontWeightStack,
                          ::TMPro::TMP_TextProcessingStack_1<int32_t> styleStack, ::TMPro::TMP_TextProcessingStack_1<float_t> baselineStack, ::TMPro::TMP_TextProcessingStack_1<int32_t> actionStack,
                          ::TMPro::TMP_TextProcessingStack_1<::TMPro::MaterialReference> materialReferenceStack,
                          ::TMPro::TMP_TextProcessingStack_1<::TMPro::HorizontalAlignmentOptions> lineJustificationStack, int32_t spriteAnimationID, ::TMPro::TMP_FontAsset* currentFontAsset,
                          ::TMPro::TMP_SpriteAsset* currentSpriteAsset, ::UnityEngine::Material* currentMaterial, int32_t currentMaterialIndex, ::TMPro::Extents meshExtents, bool tagNoParsing,
                          bool isNonBreakingSpace) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr WordWrapState();

  /// @brief Field previous_WordBreak, offset: 0x0, size: 0x4, def value: None
  int32_t previous_WordBreak;

  /// @brief Field total_CharacterCount, offset: 0x4, size: 0x4, def value: None
  int32_t total_CharacterCount;

  /// @brief Field visible_CharacterCount, offset: 0x8, size: 0x4, def value: None
  int32_t visible_CharacterCount;

  /// @brief Field visible_SpriteCount, offset: 0xc, size: 0x4, def value: None
  int32_t visible_SpriteCount;

  /// @brief Field visible_LinkCount, offset: 0x10, size: 0x4, def value: None
  int32_t visible_LinkCount;

  /// @brief Field firstCharacterIndex, offset: 0x14, size: 0x4, def value: None
  int32_t firstCharacterIndex;

  /// @brief Field firstVisibleCharacterIndex, offset: 0x18, size: 0x4, def value: None
  int32_t firstVisibleCharacterIndex;

  /// @brief Field lastCharacterIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t lastCharacterIndex;

  /// @brief Field lastVisibleCharIndex, offset: 0x20, size: 0x4, def value: None
  int32_t lastVisibleCharIndex;

  /// @brief Field lineNumber, offset: 0x24, size: 0x4, def value: None
  int32_t lineNumber;

  /// @brief Field maxCapHeight, offset: 0x28, size: 0x4, def value: None
  float_t maxCapHeight;

  /// @brief Field maxAscender, offset: 0x2c, size: 0x4, def value: None
  float_t maxAscender;

  /// @brief Field maxDescender, offset: 0x30, size: 0x4, def value: None
  float_t maxDescender;

  /// @brief Field startOfLineAscender, offset: 0x34, size: 0x4, def value: None
  float_t startOfLineAscender;

  /// @brief Field maxLineAscender, offset: 0x38, size: 0x4, def value: None
  float_t maxLineAscender;

  /// @brief Field maxLineDescender, offset: 0x3c, size: 0x4, def value: None
  float_t maxLineDescender;

  /// @brief Field pageAscender, offset: 0x40, size: 0x4, def value: None
  float_t pageAscender;

  /// @brief Field horizontalAlignment, offset: 0x44, size: 0x4, def value: None
  ::TMPro::HorizontalAlignmentOptions horizontalAlignment;

  /// @brief Field marginLeft, offset: 0x48, size: 0x4, def value: None
  float_t marginLeft;

  /// @brief Field marginRight, offset: 0x4c, size: 0x4, def value: None
  float_t marginRight;

  /// @brief Field xAdvance, offset: 0x50, size: 0x4, def value: None
  float_t xAdvance;

  /// @brief Field preferredWidth, offset: 0x54, size: 0x4, def value: None
  float_t preferredWidth;

  /// @brief Field preferredHeight, offset: 0x58, size: 0x4, def value: None
  float_t preferredHeight;

  /// @brief Field previousLineScale, offset: 0x5c, size: 0x4, def value: None
  float_t previousLineScale;

  /// @brief Field wordCount, offset: 0x60, size: 0x4, def value: None
  int32_t wordCount;

  /// @brief Field fontStyle, offset: 0x64, size: 0x4, def value: None
  ::TMPro::FontStyles fontStyle;

  /// @brief Field italicAngle, offset: 0x68, size: 0x4, def value: None
  int32_t italicAngle;

  /// @brief Field fontScaleMultiplier, offset: 0x6c, size: 0x4, def value: None
  float_t fontScaleMultiplier;

  /// @brief Field currentFontSize, offset: 0x70, size: 0x4, def value: None
  float_t currentFontSize;

  /// @brief Field baselineOffset, offset: 0x74, size: 0x4, def value: None
  float_t baselineOffset;

  /// @brief Field lineOffset, offset: 0x78, size: 0x4, def value: None
  float_t lineOffset;

  /// @brief Field isDrivenLineSpacing, offset: 0x7c, size: 0x1, def value: None
  bool isDrivenLineSpacing;

  /// @brief Field glyphHorizontalAdvanceAdjustment, offset: 0x80, size: 0x4, def value: None
  float_t glyphHorizontalAdvanceAdjustment;

  /// @brief Field cSpace, offset: 0x84, size: 0x4, def value: None
  float_t cSpace;

  /// @brief Field mSpace, offset: 0x88, size: 0x4, def value: None
  float_t mSpace;

  /// @brief Field textInfo, offset: 0x90, size: 0x8, def value: None
  ::TMPro::TMP_TextInfo* textInfo;

  /// @brief Field lineInfo, offset: 0x98, size: 0x5c, def value: None
  ::TMPro::TMP_LineInfo lineInfo;

  /// @brief Field vertexColor, offset: 0xf4, size: 0x4, def value: None
  ::UnityEngine::Color32 vertexColor;

  /// @brief Field underlineColor, offset: 0xf8, size: 0x4, def value: None
  ::UnityEngine::Color32 underlineColor;

  /// @brief Field strikethroughColor, offset: 0xfc, size: 0x4, def value: None
  ::UnityEngine::Color32 strikethroughColor;

  /// @brief Field highlightColor, offset: 0x100, size: 0x4, def value: None
  ::UnityEngine::Color32 highlightColor;

  /// @brief Field basicStyleStack, offset: 0x104, size: 0xa, def value: None
  ::TMPro::TMP_FontStyleStack basicStyleStack;

  /// @brief Field italicAngleStack, offset: 0x110, size: 0x20, def value: None
  ::TMPro::TMP_TextProcessingStack_1<int32_t> italicAngleStack;

  /// @brief Field colorStack, offset: 0x130, size: 0x20, def value: None
  ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> colorStack;

  /// @brief Field underlineColorStack, offset: 0x150, size: 0x20, def value: None
  ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> underlineColorStack;

  /// @brief Field strikethroughColorStack, offset: 0x170, size: 0x20, def value: None
  ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> strikethroughColorStack;

  /// @brief Field highlightColorStack, offset: 0x190, size: 0x20, def value: None
  ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> highlightColorStack;

  /// @brief Field highlightStateStack, offset: 0x1b0, size: 0x30, def value: None
  ::TMPro::TMP_TextProcessingStack_1<::TMPro::HighlightState> highlightStateStack;

  /// @brief Field colorGradientStack, offset: 0x1e0, size: 0x28, def value: None
  ::TMPro::TMP_TextProcessingStack_1<::TMPro::TMP_ColorGradient*> colorGradientStack;

  /// @brief Field sizeStack, offset: 0x208, size: 0x20, def value: None
  ::TMPro::TMP_TextProcessingStack_1<float_t> sizeStack;

  /// @brief Field indentStack, offset: 0x228, size: 0x20, def value: None
  ::TMPro::TMP_TextProcessingStack_1<float_t> indentStack;

  /// @brief Field fontWeightStack, offset: 0x248, size: 0x20, def value: None
  ::TMPro::TMP_TextProcessingStack_1<::TMPro::FontWeight> fontWeightStack;

  /// @brief Field styleStack, offset: 0x268, size: 0x20, def value: None
  ::TMPro::TMP_TextProcessingStack_1<int32_t> styleStack;

  /// @brief Field baselineStack, offset: 0x288, size: 0x20, def value: None
  ::TMPro::TMP_TextProcessingStack_1<float_t> baselineStack;

  /// @brief Field actionStack, offset: 0x2a8, size: 0x20, def value: None
  ::TMPro::TMP_TextProcessingStack_1<int32_t> actionStack;

  /// @brief Field materialReferenceStack, offset: 0x2c8, size: 0x58, def value: None
  ::TMPro::TMP_TextProcessingStack_1<::TMPro::MaterialReference> materialReferenceStack;

  /// @brief Field lineJustificationStack, offset: 0x320, size: 0x20, def value: None
  ::TMPro::TMP_TextProcessingStack_1<::TMPro::HorizontalAlignmentOptions> lineJustificationStack;

  /// @brief Field spriteAnimationID, offset: 0x340, size: 0x4, def value: None
  int32_t spriteAnimationID;

  /// @brief Field currentFontAsset, offset: 0x348, size: 0x8, def value: None
  ::TMPro::TMP_FontAsset* currentFontAsset;

  /// @brief Field currentSpriteAsset, offset: 0x350, size: 0x8, def value: None
  ::TMPro::TMP_SpriteAsset* currentSpriteAsset;

  /// @brief Field currentMaterial, offset: 0x358, size: 0x8, def value: None
  ::UnityEngine::Material* currentMaterial;

  /// @brief Field currentMaterialIndex, offset: 0x360, size: 0x4, def value: None
  int32_t currentMaterialIndex;

  /// @brief Field meshExtents, offset: 0x364, size: 0x10, def value: None
  ::TMPro::Extents meshExtents;

  /// @brief Field tagNoParsing, offset: 0x374, size: 0x1, def value: None
  bool tagNoParsing;

  /// @brief Field isNonBreakingSpace, offset: 0x375, size: 0x1, def value: None
  bool isNonBreakingSpace;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x378 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::WordWrapState, 0x378>, "Size mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, previous_WordBreak) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, total_CharacterCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, visible_CharacterCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, visible_SpriteCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, visible_LinkCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, firstCharacterIndex) == 0x14, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, firstVisibleCharacterIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, lastCharacterIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, lastVisibleCharIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, lineNumber) == 0x24, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, maxCapHeight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, maxAscender) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, maxDescender) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, startOfLineAscender) == 0x34, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, maxLineAscender) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, maxLineDescender) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, pageAscender) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, horizontalAlignment) == 0x44, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, marginLeft) == 0x48, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, marginRight) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, xAdvance) == 0x50, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, preferredWidth) == 0x54, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, preferredHeight) == 0x58, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, previousLineScale) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, wordCount) == 0x60, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, fontStyle) == 0x64, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, italicAngle) == 0x68, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, fontScaleMultiplier) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, currentFontSize) == 0x70, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, baselineOffset) == 0x74, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, lineOffset) == 0x78, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, isDrivenLineSpacing) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, glyphHorizontalAdvanceAdjustment) == 0x80, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, cSpace) == 0x84, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, mSpace) == 0x88, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, textInfo) == 0x90, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, lineInfo) == 0x98, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, vertexColor) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, underlineColor) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, strikethroughColor) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, highlightColor) == 0x100, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, basicStyleStack) == 0x104, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, italicAngleStack) == 0x110, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, colorStack) == 0x130, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, underlineColorStack) == 0x150, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, strikethroughColorStack) == 0x170, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, highlightColorStack) == 0x190, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, highlightStateStack) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, colorGradientStack) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, sizeStack) == 0x208, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, indentStack) == 0x228, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, fontWeightStack) == 0x248, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, styleStack) == 0x268, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, baselineStack) == 0x288, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, actionStack) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, materialReferenceStack) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, lineJustificationStack) == 0x320, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, spriteAnimationID) == 0x340, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, currentFontAsset) == 0x348, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, currentSpriteAsset) == 0x350, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, currentMaterial) == 0x358, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, currentMaterialIndex) == 0x360, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, meshExtents) == 0x364, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, tagNoParsing) == 0x374, "Offset mismatch!");

static_assert(offsetof(::TMPro::WordWrapState, isNonBreakingSpace) == 0x375, "Offset mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::WordWrapState, "TMPro", "WordWrapState");
