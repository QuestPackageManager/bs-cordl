#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextElementInfo.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__HighlightState_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElementType_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextVertex_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElementInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__HighlightState_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__SpriteAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElementType_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElement_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextVertex_def.hpp"
#include "UnityEngine/TextCore/zzzz__Glyph_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextElementInfo.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::TextCore::Text::TextElementInfo::*)()>(
    &::UnityEngine::TextCore::Text::TextElementInfo::ToString)> {
  constexpr static std::size_t size = 0x16f8;
  constexpr static std::size_t addrs = 0x48ca84c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextElementInfo>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextElementInfo>::get(), 3));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::TextCore::Text::TextElementInfo::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextElementInfo>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "character", ty: "char16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "elementType", ty: "::UnityEngine::TextCore::Text::TextElementType", modifiers: "", def_value: Some("{}") }, CppParam { name: "stringLength", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "textElement", ty: "::UnityEngine::TextCore::Text::TextElement*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "alternativeGlyph", ty:
// "::UnityEngine::TextCore::Glyph*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "fontAsset", ty: "::UnityW<::UnityEngine::TextCore::Text::FontAsset>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "spriteAsset", ty: "::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "spriteIndex", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "materialReferenceIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "isUsingAlternateTypeface", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "pointSize", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lineNumber", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pageNumber", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertexIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertexTopLeft", ty:
// "::UnityEngine::TextCore::Text::TextVertex", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertexBottomLeft", ty: "::UnityEngine::TextCore::Text::TextVertex", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "vertexTopRight", ty: "::UnityEngine::TextCore::Text::TextVertex", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertexBottomRight", ty:
// "::UnityEngine::TextCore::Text::TextVertex", modifiers: "", def_value: Some("{}") }, CppParam { name: "topLeft", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "bottomLeft", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "topRight", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "bottomRight", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "origin", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "ascender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "baseLine", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "descender", ty: "float_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "adjustedAscender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "adjustedDescender", ty: "float_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "adjustedHorizontalAdvance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "xAdvance", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "aspectRatio", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "underlineColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "underlineVertexIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "strikethroughColor", ty: "::UnityEngine::Color32", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "strikethroughVertexIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "highlightColor", ty: "::UnityEngine::Color32", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "highlightState", ty: "::UnityEngine::TextCore::Text::HighlightState", modifiers: "", def_value: Some("{}") }, CppParam { name: "style", ty:
// "::UnityEngine::TextCore::Text::FontStyles", modifiers: "", def_value: Some("{}") }, CppParam { name: "isVisible", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::TextElementInfo::TextElementInfo(
    char16_t character, int32_t index, ::UnityEngine::TextCore::Text::TextElementType elementType, int32_t stringLength, ::UnityEngine::TextCore::Text::TextElement* textElement,
    ::UnityEngine::TextCore::Glyph* alternativeGlyph, ::UnityW<::UnityEngine::TextCore::Text::FontAsset> fontAsset, ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> spriteAsset,
    int32_t spriteIndex, ::UnityW<::UnityEngine::Material> material, int32_t materialReferenceIndex, bool isUsingAlternateTypeface, float_t pointSize, int32_t lineNumber, int32_t pageNumber,
    int32_t vertexIndex, ::UnityEngine::TextCore::Text::TextVertex vertexTopLeft, ::UnityEngine::TextCore::Text::TextVertex vertexBottomLeft, ::UnityEngine::TextCore::Text::TextVertex vertexTopRight,
    ::UnityEngine::TextCore::Text::TextVertex vertexBottomRight, ::UnityEngine::Vector3 topLeft, ::UnityEngine::Vector3 bottomLeft, ::UnityEngine::Vector3 topRight, ::UnityEngine::Vector3 bottomRight,
    float_t origin, float_t ascender, float_t baseLine, float_t descender, float_t adjustedAscender, float_t adjustedDescender, float_t adjustedHorizontalAdvance, float_t xAdvance,
    float_t aspectRatio, float_t scale, ::UnityEngine::Color32 color, ::UnityEngine::Color32 underlineColor, int32_t underlineVertexIndex, ::UnityEngine::Color32 strikethroughColor,
    int32_t strikethroughVertexIndex, ::UnityEngine::Color32 highlightColor, ::UnityEngine::TextCore::Text::HighlightState highlightState, ::UnityEngine::TextCore::Text::FontStyles style,
    bool isVisible) noexcept {
  this->character = character;
  this->index = index;
  this->elementType = elementType;
  this->stringLength = stringLength;
  this->textElement = textElement;
  this->alternativeGlyph = alternativeGlyph;
  this->fontAsset = fontAsset;
  this->spriteAsset = spriteAsset;
  this->spriteIndex = spriteIndex;
  this->material = material;
  this->materialReferenceIndex = materialReferenceIndex;
  this->isUsingAlternateTypeface = isUsingAlternateTypeface;
  this->pointSize = pointSize;
  this->lineNumber = lineNumber;
  this->pageNumber = pageNumber;
  this->vertexIndex = vertexIndex;
  this->vertexTopLeft = vertexTopLeft;
  this->vertexBottomLeft = vertexBottomLeft;
  this->vertexTopRight = vertexTopRight;
  this->vertexBottomRight = vertexBottomRight;
  this->topLeft = topLeft;
  this->bottomLeft = bottomLeft;
  this->topRight = topRight;
  this->bottomRight = bottomRight;
  this->origin = origin;
  this->ascender = ascender;
  this->baseLine = baseLine;
  this->descender = descender;
  this->adjustedAscender = adjustedAscender;
  this->adjustedDescender = adjustedDescender;
  this->adjustedHorizontalAdvance = adjustedHorizontalAdvance;
  this->xAdvance = xAdvance;
  this->aspectRatio = aspectRatio;
  this->scale = scale;
  this->color = color;
  this->underlineColor = underlineColor;
  this->underlineVertexIndex = underlineVertexIndex;
  this->strikethroughColor = strikethroughColor;
  this->strikethroughVertexIndex = strikethroughVertexIndex;
  this->highlightColor = highlightColor;
  this->highlightState = highlightState;
  this->style = style;
  this->isVisible = isVisible;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextElementInfo::TextElementInfo() {}
