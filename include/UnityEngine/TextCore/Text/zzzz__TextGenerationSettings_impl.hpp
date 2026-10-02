#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextGenerationSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__RenderedText_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextAlignment_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextFontWeight_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextOverflowMode_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextWrappingMode_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextGenerationSettings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__OTL_FeatureTag_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__RenderedText_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerationSettings.get_renderedText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::RenderedText (::UnityEngine::TextCore::Text::TextGenerationSettings::*)()>(
    &::UnityEngine::TextCore::Text::TextGenerationSettings::get_renderedText)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x7058800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(), { "get_renderedText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerationSettings.set_renderedText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerationSettings::*)(::UnityEngine::TextCore::Text::RenderedText)>(
    &::UnityEngine::TextCore::Text::TextGenerationSettings::set_renderedText)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x705880c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(),
                                                                                           { "set_renderedText", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::RenderedText>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerationSettings.get_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextCore::Text::TextGenerationSettings::*)()>(&::UnityEngine::TextCore::Text::TextGenerationSettings::get_text)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x705881c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(), { "get_text", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerationSettings.set_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerationSettings::*)(::StringW)>(&::UnityEngine::TextCore::Text::TextGenerationSettings::set_text)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x705892c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(), { "set_text", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerationSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerationSettings::*)()>(&::UnityEngine::TextCore::Text::TextGenerationSettings::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x70589b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerationSettings.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::TextGenerationSettings::*)(::UnityEngine::TextCore::Text::TextGenerationSettings*)>(
    &::UnityEngine::TextCore::Text::TextGenerationSettings::Equals)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x7058a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerationSettings.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::TextGenerationSettings::*)(::System::Object*)>(
    &::UnityEngine::TextCore::Text::TextGenerationSettings::Equals)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x7058e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerationSettings.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextGenerationSettings::*)()>(&::UnityEngine::TextCore::Text::TextGenerationSettings::GetHashCode)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x7058f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerationSettings.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextGenerationSettings*)>(
    &::UnityEngine::TextCore::Text::TextGenerationSettings::op_Inequality)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x70591c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(),
            { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerationSettings.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextCore::Text::TextGenerationSettings::*)()>(&::UnityEngine::TextCore::Text::TextGenerationSettings::ToString)> {
  constexpr static std::size_t size = 0xd58;
  constexpr static std::size_t addrs = 0x7059200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::TextCore::Text::RenderedText& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_m_RenderedText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderedText;
}
constexpr ::UnityEngine::TextCore::Text::RenderedText const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_m_RenderedText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderedText;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_m_RenderedText(::UnityEngine::TextCore::Text::RenderedText value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderedText = value;
}
constexpr ::StringW& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_m_CachedRenderedText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedRenderedText;
}
constexpr ::StringW const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_m_CachedRenderedText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedRenderedText;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_m_CachedRenderedText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedRenderedText = value;
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
  this->___fontAsset = value;
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
  this->___textSettings = value;
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
constexpr bool& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_shouldConvertToLinearSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldConvertToLinearSpace;
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_shouldConvertToLinearSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldConvertToLinearSpace;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_shouldConvertToLinearSpace(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shouldConvertToLinearSpace = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_fontSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fontSize;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_fontSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fontSize;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_fontSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fontSize = value;
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_emojiFallbackSupport() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emojiFallbackSupport;
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_emojiFallbackSupport() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emojiFallbackSupport;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_emojiFallbackSupport(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___emojiFallbackSupport = value;
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
constexpr float_t& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_extraPadding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraPadding;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_extraPadding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraPadding;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_extraPadding(float_t value) {
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
constexpr bool& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_isPlaceholder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isPlaceholder;
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_isPlaceholder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isPlaceholder;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_isPlaceholder(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isPlaceholder = value;
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
constexpr ::UnityEngine::TextCore::Text::TextWrappingMode& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_textWrappingMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textWrappingMode;
}
constexpr ::UnityEngine::TextCore::Text::TextWrappingMode const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_textWrappingMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textWrappingMode;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_textWrappingMode(::UnityEngine::TextCore::Text::TextWrappingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textWrappingMode = value;
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
constexpr bool& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_isIMGUI() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isIMGUI;
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_isIMGUI() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isIMGUI;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_isIMGUI(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isIMGUI = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_pixelsPerPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pixelsPerPoint;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_get_pixelsPerPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pixelsPerPoint;
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__cordl_internal_set_pixelsPerPoint(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pixelsPerPoint = value;
}
inline void UnityEngine::TextCore::Text::TextGenerationSettings::setStaticF_IsEditorTextRenderingModeBitmap(::System::Func_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<bool>*, "IsEditorTextRenderingModeBitmap", ::UnityEngine::TextCore::Text::TextGenerationSettings*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* UnityEngine::TextCore::Text::TextGenerationSettings::getStaticF_IsEditorTextRenderingModeBitmap() {
  return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "IsEditorTextRenderingModeBitmap", ::UnityEngine::TextCore::Text::TextGenerationSettings*>();
}
inline void UnityEngine::TextCore::Text::TextGenerationSettings::setStaticF_IsEditorTextRenderingModeRaster(::System::Func_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<bool>*, "IsEditorTextRenderingModeRaster", ::UnityEngine::TextCore::Text::TextGenerationSettings*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* UnityEngine::TextCore::Text::TextGenerationSettings::getStaticF_IsEditorTextRenderingModeRaster() {
  return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "IsEditorTextRenderingModeRaster", ::UnityEngine::TextCore::Text::TextGenerationSettings*>();
}
inline void UnityEngine::TextCore::Text::TextGenerationSettings::setStaticF_fontFeatures(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::OTL_FeatureTag>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::OTL_FeatureTag>*, "fontFeatures", ::UnityEngine::TextCore::Text::TextGenerationSettings*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::OTL_FeatureTag>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::OTL_FeatureTag>* UnityEngine::TextCore::Text::TextGenerationSettings::getStaticF_fontFeatures() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::OTL_FeatureTag>*, "fontFeatures",
                                           ::UnityEngine::TextCore::Text::TextGenerationSettings*>();
}
inline ::UnityEngine::TextCore::Text::RenderedText UnityEngine::TextCore::Text::TextGenerationSettings::get_renderedText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(), { "get_renderedText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::RenderedText>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextGenerationSettings::set_renderedText(::UnityEngine::TextCore::Text::RenderedText value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(),
                                                                                         { "set_renderedText", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::RenderedText>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::TextCore::Text::TextGenerationSettings::get_text() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(), { "get_text", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextGenerationSettings::set_text(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(), { "set_text", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::TextCore::Text::TextGenerationSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::TextCore::Text::TextGenerationSettings::Equals(::UnityEngine::TextCore::Text::TextGenerationSettings* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool UnityEngine::TextCore::Text::TextGenerationSettings::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t UnityEngine::TextCore::Text::TextGenerationSettings::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::TextCore::Text::TextGenerationSettings::op_Inequality(::UnityEngine::TextCore::Text::TextGenerationSettings* left,
                                                                               ::UnityEngine::TextCore::Text::TextGenerationSettings* right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(),
          { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline ::StringW UnityEngine::TextCore::Text::TextGenerationSettings::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::TextGenerationSettings* UnityEngine::TextCore::Text::TextGenerationSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::Text::TextGenerationSettings*>());
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>"
constexpr UnityEngine::TextCore::Text::TextGenerationSettings::operator ::System::IEquatable_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>*() noexcept {
  return static_cast<::System::IEquatable_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>"
constexpr ::System::IEquatable_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>*
UnityEngine::TextCore::Text::TextGenerationSettings::i___System__IEquatable_1___UnityEngine__TextCore__Text__TextGenerationSettings__() noexcept {
  return static_cast<::System::IEquatable_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextGenerationSettings::TextGenerationSettings() {}
