#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextAlignment_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextFontWeight_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextOverflowMode_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextureMapping_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__VertexSortingOrder_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextGenerationSettings_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__SpriteAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextColorGradient_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextSettings_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextStyleSheet_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerationSettings.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextCore::Text::TextGenerationSettings::*)(
    ::UnityEngine::TextCore::Text::TextGenerationSettings*)>(&::UnityEngine::TextCore::Text::TextGenerationSettings::Equals)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x328c098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerationSettings.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextCore::Text::TextGenerationSettings::*)(::System::Object*)>(
    &::UnityEngine::TextCore::Text::TextGenerationSettings::Equals)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x328c44c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerationSettings.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextGenerationSettings::*)()>(
    &::UnityEngine::TextCore::Text::TextGenerationSettings::GetHashCode)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0x328c514;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerationSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerationSettings::*)()>(
    &::UnityEngine::TextCore::Text::TextGenerationSettings::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x328ca80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___text;
}
constexpr ::StringW const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___text;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_text(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rect& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_screenRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenRect;
}
constexpr ::UnityEngine::Rect const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_screenRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenRect;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_screenRect(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___screenRect = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_margins() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___margins;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_margins() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___margins;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_margins(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___margins = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_scale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scale;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_scale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scale;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_scale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scale = value;
}
constexpr ::UnityW<::UnityEngine::TextCore::Text::FontAsset>& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_fontAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fontAsset;
}
constexpr ::UnityW<::UnityEngine::TextCore::Text::FontAsset> const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_fontAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fontAsset;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_fontAsset(::UnityW<::UnityEngine::TextCore::Text::FontAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fontAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___material)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_spriteAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spriteAsset;
}
constexpr ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_spriteAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spriteAsset;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_spriteAsset(::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___spriteAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::TextCore::Text::TextStyleSheet>& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_styleSheet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___styleSheet;
}
constexpr ::UnityW<::UnityEngine::TextCore::Text::TextStyleSheet> const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_styleSheet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___styleSheet;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_styleSheet(::UnityW<::UnityEngine::TextCore::Text::TextStyleSheet> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___styleSheet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::TextCore::Text::FontStyles& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_fontStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fontStyle;
}
constexpr ::UnityEngine::TextCore::Text::FontStyles const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_fontStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fontStyle;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_fontStyle(::UnityEngine::TextCore::Text::FontStyles value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fontStyle = value;
}
constexpr ::UnityW<::UnityEngine::TextCore::Text::TextSettings>& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_textSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textSettings;
}
constexpr ::UnityW<::UnityEngine::TextCore::Text::TextSettings> const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_textSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textSettings;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_textSettings(::UnityW<::UnityEngine::TextCore::Text::TextSettings> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___textSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::TextCore::Text::TextAlignment& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_textAlignment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textAlignment;
}
constexpr ::UnityEngine::TextCore::Text::TextAlignment const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_textAlignment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textAlignment;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_textAlignment(::UnityEngine::TextCore::Text::TextAlignment value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textAlignment = value;
}
constexpr ::UnityEngine::TextCore::Text::TextOverflowMode& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_overflowMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overflowMode;
}
constexpr ::UnityEngine::TextCore::Text::TextOverflowMode const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_overflowMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overflowMode;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_overflowMode(::UnityEngine::TextCore::Text::TextOverflowMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overflowMode = value;
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_wordWrap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wordWrap;
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_wordWrap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wordWrap;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_wordWrap(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wordWrap = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_wordWrappingRatio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wordWrappingRatio;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_wordWrappingRatio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wordWrappingRatio;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_wordWrappingRatio(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wordWrappingRatio = value;
}
constexpr ::UnityEngine::Color& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr ::UnityEngine::Color const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___color = value;
}
constexpr ::UnityW<::UnityEngine::TextCore::Text::TextColorGradient>& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_fontColorGradient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fontColorGradient;
}
constexpr ::UnityW<::UnityEngine::TextCore::Text::TextColorGradient> const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_fontColorGradient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fontColorGradient;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_fontColorGradient(::UnityW<::UnityEngine::TextCore::Text::TextColorGradient> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fontColorGradient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_tintSprites() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tintSprites;
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_tintSprites() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tintSprites;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_tintSprites(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tintSprites = value;
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_overrideRichTextColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideRichTextColors;
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_overrideRichTextColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideRichTextColors;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_overrideRichTextColors(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideRichTextColors = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_fontSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fontSize;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_fontSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fontSize;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_fontSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fontSize = value;
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_autoSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoSize;
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_autoSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoSize;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_autoSize(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoSize = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_fontSizeMin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fontSizeMin;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_fontSizeMin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fontSizeMin;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_fontSizeMin(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fontSizeMin = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_fontSizeMax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fontSizeMax;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_fontSizeMax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fontSizeMax;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_fontSizeMax(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fontSizeMax = value;
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_enableKerning() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableKerning;
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_enableKerning() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableKerning;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_enableKerning(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableKerning = value;
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_richText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___richText;
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_richText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___richText;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_richText(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___richText = value;
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_isRightToLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRightToLeft;
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_isRightToLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRightToLeft;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_isRightToLeft(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isRightToLeft = value;
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_extraPadding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraPadding;
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_extraPadding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraPadding;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_extraPadding(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extraPadding = value;
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_parseControlCharacters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parseControlCharacters;
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_parseControlCharacters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parseControlCharacters;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_parseControlCharacters(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parseControlCharacters = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_characterSpacing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characterSpacing;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_characterSpacing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characterSpacing;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_characterSpacing(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___characterSpacing = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_wordSpacing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wordSpacing;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_wordSpacing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wordSpacing;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_wordSpacing(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wordSpacing = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_lineSpacing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineSpacing;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_lineSpacing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineSpacing;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_lineSpacing(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lineSpacing = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_paragraphSpacing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paragraphSpacing;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_paragraphSpacing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paragraphSpacing;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_paragraphSpacing(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___paragraphSpacing = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_lineSpacingMax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineSpacingMax;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_lineSpacingMax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineSpacingMax;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_lineSpacingMax(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lineSpacingMax = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_maxVisibleCharacters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxVisibleCharacters;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_maxVisibleCharacters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxVisibleCharacters;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_maxVisibleCharacters(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxVisibleCharacters = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_maxVisibleWords() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxVisibleWords;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_maxVisibleWords() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxVisibleWords;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_maxVisibleWords(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxVisibleWords = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_maxVisibleLines() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxVisibleLines;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_maxVisibleLines() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxVisibleLines;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_maxVisibleLines(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxVisibleLines = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_firstVisibleCharacter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstVisibleCharacter;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_firstVisibleCharacter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstVisibleCharacter;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_firstVisibleCharacter(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___firstVisibleCharacter = value;
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_useMaxVisibleDescender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useMaxVisibleDescender;
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_useMaxVisibleDescender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useMaxVisibleDescender;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_useMaxVisibleDescender(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useMaxVisibleDescender = value;
}
constexpr ::UnityEngine::TextCore::Text::TextFontWeight& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_fontWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fontWeight;
}
constexpr ::UnityEngine::TextCore::Text::TextFontWeight const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_fontWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fontWeight;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_fontWeight(::UnityEngine::TextCore::Text::TextFontWeight value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fontWeight = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_pageToDisplay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pageToDisplay;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_pageToDisplay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pageToDisplay;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_pageToDisplay(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pageToDisplay = value;
}
constexpr ::UnityEngine::TextCore::Text::TextureMapping& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_horizontalMapping() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___horizontalMapping;
}
constexpr ::UnityEngine::TextCore::Text::TextureMapping const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_horizontalMapping() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___horizontalMapping;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_horizontalMapping(::UnityEngine::TextCore::Text::TextureMapping value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___horizontalMapping = value;
}
constexpr ::UnityEngine::TextCore::Text::TextureMapping& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_verticalMapping() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___verticalMapping;
}
constexpr ::UnityEngine::TextCore::Text::TextureMapping const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_verticalMapping() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___verticalMapping;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_verticalMapping(::UnityEngine::TextCore::Text::TextureMapping value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___verticalMapping = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_uvLineOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uvLineOffset;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_uvLineOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uvLineOffset;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_uvLineOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___uvLineOffset = value;
}
constexpr ::UnityEngine::TextCore::Text::VertexSortingOrder& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_geometrySortingOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___geometrySortingOrder;
}
constexpr ::UnityEngine::TextCore::Text::VertexSortingOrder const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_geometrySortingOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___geometrySortingOrder;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_geometrySortingOrder(::UnityEngine::TextCore::Text::VertexSortingOrder value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___geometrySortingOrder = value;
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_inverseYAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inverseYAxis;
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_inverseYAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inverseYAxis;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_inverseYAxis(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inverseYAxis = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_charWidthMaxAdj() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charWidthMaxAdj;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_charWidthMaxAdj() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charWidthMaxAdj;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_charWidthMaxAdj(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___charWidthMaxAdj = value;
}
inline bool UnityEngine::TextCore::Text::TextGenerationSettings::Equals(::UnityEngine::TextCore::Text::TextGenerationSettings* other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool UnityEngine::TextCore::Text::TextGenerationSettings::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t UnityEngine::TextCore::Text::TextGenerationSettings::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::TextGenerationSettings* UnityEngine::TextCore::Text::TextGenerationSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::TextCore::Text::TextGenerationSettings*>());
}
inline void UnityEngine::TextCore::Text::TextGenerationSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextGenerationSettings::TextGenerationSettings() {}
