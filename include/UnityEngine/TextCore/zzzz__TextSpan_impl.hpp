#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/TextSpan.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextFontWeight_impl.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphMetrics_impl.hpp"
#include "UnityEngine/TextCore/zzzz__HorizontalAlignment_impl.hpp"
#include "UnityEngine/TextCore/zzzz__MarginDirection_impl.hpp"
#include "UnityEngine/TextCore/zzzz__RichTextTagParser_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/TextCore/zzzz__TextSpan_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::TextSpan.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextCore::TextSpan::*)()>(&::UnityEngine::TextCore::TextSpan::ToString)> {
  constexpr static std::size_t size = 0x514;
  constexpr static std::size_t addrs = 0x7021b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::TextSpan>(), { ::i2c::class_of<::UnityEngine::TextCore::TextSpan>(), 3 }));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::TextCore::TextSpan::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::TextSpan>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "startIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "fontAsset", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gradientAsset", ty: "::System::IntPtr", modifiers:
// "", def_value: Some("{}"), comment: None }, CppParam { name: "fontSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "color", ty:
// "::UnityEngine::Color32", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fontStyle", ty: "::UnityEngine::TextCore::Text::FontStyles", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "fontWeight", ty: "::UnityEngine::TextCore::Text::TextFontWeight", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mspace", ty: "int32_t",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mspaceUnitType", ty: "::UnityEngine::TextCore::RichTextTagParser_TagUnitType", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "cspace", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cspaceUnitType", ty:
// "::UnityEngine::TextCore::RichTextTagParser_TagUnitType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "linkID", ty: "int32_t", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "alignment", ty: "::UnityEngine::TextCore::HorizontalAlignment", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "highlightColor", ty:
// "::UnityEngine::Color32", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "highlightPadding", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}"), comment:
// None }, CppParam { name: "spriteMetrics", ty: "::UnityEngine::TextCore::GlyphMetrics", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "spriteID", ty:
// "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "spriteTint", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "spriteScale", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "spriteColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}"), comment:
// None }, CppParam { name: "margin", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "marginDirection", ty: "::UnityEngine::TextCore::MarginDirection",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "marginUnitType", ty: "::UnityEngine::TextCore::RichTextTagParser_TagUnitType", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "lineHeight", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lineHeightUnitType", ty:
// "::UnityEngine::TextCore::RichTextTagParser_TagUnitType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "indent", ty: "int32_t", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "indentUnitType", ty: "::UnityEngine::TextCore::RichTextTagParser_TagUnitType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "vOffset",
// ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "vOffsetUnitType", ty: "::UnityEngine::TextCore::RichTextTagParser_TagUnitType", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "subscriptNestingLevel", ty: "int8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "superscriptNestingLevel", ty: "int8_t",
// modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::TextCore::TextSpan::TextSpan(int32_t startIndex, int32_t length, ::System::IntPtr fontAsset, ::System::IntPtr gradientAsset, int32_t fontSize, ::UnityEngine::Color32 color,
                                                      ::UnityEngine::TextCore::Text::FontStyles fontStyle, ::UnityEngine::TextCore::Text::TextFontWeight fontWeight, int32_t mspace,
                                                      ::UnityEngine::TextCore::RichTextTagParser_TagUnitType mspaceUnitType, int32_t cspace,
                                                      ::UnityEngine::TextCore::RichTextTagParser_TagUnitType cspaceUnitType, int32_t linkID, ::UnityEngine::TextCore::HorizontalAlignment alignment,
                                                      ::UnityEngine::Color32 highlightColor, ::UnityEngine::Vector4 highlightPadding, ::UnityEngine::TextCore::GlyphMetrics spriteMetrics,
                                                      ::UnityEngine::EntityId spriteID, bool spriteTint, int32_t spriteScale, ::UnityEngine::Color32 spriteColor, int32_t margin,
                                                      ::UnityEngine::TextCore::MarginDirection marginDirection, ::UnityEngine::TextCore::RichTextTagParser_TagUnitType marginUnitType,
                                                      int32_t lineHeight, ::UnityEngine::TextCore::RichTextTagParser_TagUnitType lineHeightUnitType, int32_t indent,
                                                      ::UnityEngine::TextCore::RichTextTagParser_TagUnitType indentUnitType, int32_t vOffset,
                                                      ::UnityEngine::TextCore::RichTextTagParser_TagUnitType vOffsetUnitType, int8_t subscriptNestingLevel, int8_t superscriptNestingLevel) noexcept {
  this->startIndex = startIndex;
  this->length = length;
  this->fontAsset = fontAsset;
  this->gradientAsset = gradientAsset;
  this->fontSize = fontSize;
  this->color = color;
  this->fontStyle = fontStyle;
  this->fontWeight = fontWeight;
  this->mspace = mspace;
  this->mspaceUnitType = mspaceUnitType;
  this->cspace = cspace;
  this->cspaceUnitType = cspaceUnitType;
  this->linkID = linkID;
  this->alignment = alignment;
  this->highlightColor = highlightColor;
  this->highlightPadding = highlightPadding;
  this->spriteMetrics = spriteMetrics;
  this->spriteID = spriteID;
  this->spriteTint = spriteTint;
  this->spriteScale = spriteScale;
  this->spriteColor = spriteColor;
  this->margin = margin;
  this->marginDirection = marginDirection;
  this->marginUnitType = marginUnitType;
  this->lineHeight = lineHeight;
  this->lineHeightUnitType = lineHeightUnitType;
  this->indent = indent;
  this->indentUnitType = indentUnitType;
  this->vOffset = vOffset;
  this->vOffsetUnitType = vOffsetUnitType;
  this->subscriptNestingLevel = subscriptNestingLevel;
  this->superscriptNestingLevel = superscriptNestingLevel;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::TextSpan::TextSpan() {}
