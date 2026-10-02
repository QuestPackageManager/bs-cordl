#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/TextSpan.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextFontWeight_def.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphMetrics_def.hpp"
#include "UnityEngine/TextCore/zzzz__HorizontalAlignment_def.hpp"
#include "UnityEngine/TextCore/zzzz__MarginDirection_def.hpp"
#include "UnityEngine/TextCore/zzzz__RichTextTagParser_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextSpan)
// Forward declare root types
namespace UnityEngine::TextCore {
struct TextSpan;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::TextSpan);
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::TextSpan, "UnityEngine.TextCore", "TextSpan");
// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
// Dependencies System.IntPtr, UnityEngine.Color32, UnityEngine.EntityId, UnityEngine.TextCore.GlyphMetrics, UnityEngine.TextCore.HorizontalAlignment, UnityEngine.TextCore.MarginDirection,
// UnityEngine.TextCore.RichTextTagParser::TagUnitType, UnityEngine.TextCore.Text.FontStyles, UnityEngine.TextCore.Text.TextFontWeight, UnityEngine.Vector4
namespace UnityEngine::TextCore {
// Is value type: true
// CS Name: UnityEngine.TextCore.TextSpan
struct CORDL_TYPE TextSpan {
public:
  // Declarations
  /// @brief Method ToString, addr 0x7021b88, size 0x514, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextSpan();

  // Ctor Parameters [CppParam { name: "startIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "fontAsset", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "gradientAsset", ty: "::System::IntPtr", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "fontSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "fontStyle", ty: "::UnityEngine::TextCore::Text::FontStyles", modifiers: "", def_value: None, comment: None }, CppParam { name: "fontWeight",
  // ty: "::UnityEngine::TextCore::Text::TextFontWeight", modifiers: "", def_value: None, comment: None }, CppParam { name: "mspace", ty: "int32_t", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "mspaceUnitType", ty: "::UnityEngine::TextCore::RichTextTagParser_TagUnitType", modifiers: "", def_value: None, comment: None }, CppParam { name: "cspace", ty: "int32_t",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "cspaceUnitType", ty: "::UnityEngine::TextCore::RichTextTagParser_TagUnitType", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "linkID", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "alignment", ty: "::UnityEngine::TextCore::HorizontalAlignment", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "highlightColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None, comment: None }, CppParam { name: "highlightPadding", ty:
  // "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "spriteMetrics", ty: "::UnityEngine::TextCore::GlyphMetrics", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "spriteID", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None, comment: None }, CppParam { name: "spriteTint", ty: "bool", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "spriteScale", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "spriteColor", ty: "::UnityEngine::Color32", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "margin", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "marginDirection", ty:
  // "::UnityEngine::TextCore::MarginDirection", modifiers: "", def_value: None, comment: None }, CppParam { name: "marginUnitType", ty: "::UnityEngine::TextCore::RichTextTagParser_TagUnitType",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "lineHeight", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "lineHeightUnitType", ty:
  // "::UnityEngine::TextCore::RichTextTagParser_TagUnitType", modifiers: "", def_value: None, comment: None }, CppParam { name: "indent", ty: "int32_t", modifiers: "", def_value: None, comment: None
  // }, CppParam { name: "indentUnitType", ty: "::UnityEngine::TextCore::RichTextTagParser_TagUnitType", modifiers: "", def_value: None, comment: None }, CppParam { name: "vOffset", ty: "int32_t",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "vOffsetUnitType", ty: "::UnityEngine::TextCore::RichTextTagParser_TagUnitType", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "subscriptNestingLevel", ty: "int8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "superscriptNestingLevel", ty: "int8_t", modifiers: "", def_value: None,
  // comment: None }]
  constexpr TextSpan(int32_t startIndex, int32_t length, ::System::IntPtr fontAsset, ::System::IntPtr gradientAsset, int32_t fontSize, ::UnityEngine::Color32 color,
                     ::UnityEngine::TextCore::Text::FontStyles fontStyle, ::UnityEngine::TextCore::Text::TextFontWeight fontWeight, int32_t mspace,
                     ::UnityEngine::TextCore::RichTextTagParser_TagUnitType mspaceUnitType, int32_t cspace, ::UnityEngine::TextCore::RichTextTagParser_TagUnitType cspaceUnitType, int32_t linkID,
                     ::UnityEngine::TextCore::HorizontalAlignment alignment, ::UnityEngine::Color32 highlightColor, ::UnityEngine::Vector4 highlightPadding,
                     ::UnityEngine::TextCore::GlyphMetrics spriteMetrics, ::UnityEngine::EntityId spriteID, bool spriteTint, int32_t spriteScale, ::UnityEngine::Color32 spriteColor, int32_t margin,
                     ::UnityEngine::TextCore::MarginDirection marginDirection, ::UnityEngine::TextCore::RichTextTagParser_TagUnitType marginUnitType, int32_t lineHeight,
                     ::UnityEngine::TextCore::RichTextTagParser_TagUnitType lineHeightUnitType, int32_t indent, ::UnityEngine::TextCore::RichTextTagParser_TagUnitType indentUnitType, int32_t vOffset,
                     ::UnityEngine::TextCore::RichTextTagParser_TagUnitType vOffsetUnitType, int8_t subscriptNestingLevel, int8_t superscriptNestingLevel) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17778 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa0 };

  /// @brief Field startIndex, offset: 0x0, size: 0x4, def value: None
  int32_t startIndex;

  /// @brief Field length, offset: 0x4, size: 0x4, def value: None
  int32_t length;

  /// @brief Field fontAsset, offset: 0x8, size: 0x8, def value: None
  ::System::IntPtr fontAsset;

  /// @brief Field gradientAsset, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr gradientAsset;

  /// @brief Field fontSize, offset: 0x18, size: 0x4, def value: None
  int32_t fontSize;

  /// @brief Field color, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::Color32 color;

  /// @brief Field fontStyle, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::FontStyles fontStyle;

  /// @brief Field fontWeight, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::TextFontWeight fontWeight;

  /// @brief Field mspace, offset: 0x28, size: 0x4, def value: None
  int32_t mspace;

  /// @brief Field mspaceUnitType, offset: 0x2c, size: 0x4, def value: None
  ::UnityEngine::TextCore::RichTextTagParser_TagUnitType mspaceUnitType;

  /// @brief Field cspace, offset: 0x30, size: 0x4, def value: None
  int32_t cspace;

  /// @brief Field cspaceUnitType, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::TextCore::RichTextTagParser_TagUnitType cspaceUnitType;

  /// @brief Field linkID, offset: 0x38, size: 0x4, def value: None
  int32_t linkID;

  /// @brief Field alignment, offset: 0x3c, size: 0x4, def value: None
  ::UnityEngine::TextCore::HorizontalAlignment alignment;

  /// @brief Field highlightColor, offset: 0x40, size: 0x4, def value: None
  ::UnityEngine::Color32 highlightColor;

  /// @brief Field highlightPadding, offset: 0x44, size: 0x10, def value: None
  ::UnityEngine::Vector4 highlightPadding;

  /// @brief Field spriteMetrics, offset: 0x54, size: 0x14, def value: None
  ::UnityEngine::TextCore::GlyphMetrics spriteMetrics;

  /// @brief Field spriteID, offset: 0x68, size: 0x4, def value: None
  ::UnityEngine::EntityId spriteID;

  /// @brief Field spriteTint, offset: 0x6c, size: 0x1, def value: None
  bool spriteTint;

  /// @brief Field spriteScale, offset: 0x70, size: 0x4, def value: None
  int32_t spriteScale;

  /// @brief Field spriteColor, offset: 0x74, size: 0x4, def value: None
  ::UnityEngine::Color32 spriteColor;

  /// @brief Field margin, offset: 0x78, size: 0x4, def value: None
  int32_t margin;

  /// @brief Field marginDirection, offset: 0x7c, size: 0x4, def value: None
  ::UnityEngine::TextCore::MarginDirection marginDirection;

  /// @brief Field marginUnitType, offset: 0x80, size: 0x4, def value: None
  ::UnityEngine::TextCore::RichTextTagParser_TagUnitType marginUnitType;

  /// @brief Field lineHeight, offset: 0x84, size: 0x4, def value: None
  int32_t lineHeight;

  /// @brief Field lineHeightUnitType, offset: 0x88, size: 0x4, def value: None
  ::UnityEngine::TextCore::RichTextTagParser_TagUnitType lineHeightUnitType;

  /// @brief Field indent, offset: 0x8c, size: 0x4, def value: None
  int32_t indent;

  /// @brief Field indentUnitType, offset: 0x90, size: 0x4, def value: None
  ::UnityEngine::TextCore::RichTextTagParser_TagUnitType indentUnitType;

  /// @brief Field vOffset, offset: 0x94, size: 0x4, def value: None
  int32_t vOffset;

  /// @brief Field vOffsetUnitType, offset: 0x98, size: 0x4, def value: None
  ::UnityEngine::TextCore::RichTextTagParser_TagUnitType vOffsetUnitType;

  /// @brief Field subscriptNestingLevel, offset: 0x9c, size: 0x1, def value: None
  int8_t subscriptNestingLevel;

  /// @brief Field superscriptNestingLevel, offset: 0x9d, size: 0x1, def value: None
  int8_t superscriptNestingLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::TextSpan, startIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, length) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, fontAsset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, gradientAsset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, fontSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, color) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, fontStyle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, fontWeight) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, mspace) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, mspaceUnitType) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, cspace) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, cspaceUnitType) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, linkID) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, alignment) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, highlightColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, highlightPadding) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, spriteMetrics) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, spriteID) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, spriteTint) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, spriteScale) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, spriteColor) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, margin) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, marginDirection) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, marginUnitType) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, lineHeight) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, lineHeightUnitType) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, indent) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, indentUnitType) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, vOffset) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, vOffsetUnitType) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, subscriptNestingLevel) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::TextSpan, superscriptNestingLevel) == 0x9d, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TextCore::TextSpan) == 0xa0, "Size mismatch!");

} // namespace UnityEngine::TextCore
