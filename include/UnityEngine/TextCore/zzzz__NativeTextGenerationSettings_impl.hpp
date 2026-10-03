#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/NativeTextGenerationSettings.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextFontWeight_impl.hpp"
#include "UnityEngine/TextCore/zzzz__HorizontalAlignment_impl.hpp"
#include "UnityEngine/TextCore/zzzz__LanguageDirection_impl.hpp"
#include "UnityEngine/TextCore/zzzz__PreProcessFlags_impl.hpp"
#include "UnityEngine/TextCore/zzzz__TextOverflow_impl.hpp"
#include "UnityEngine/TextCore/zzzz__TextSpan_impl.hpp"
#include "UnityEngine/TextCore/zzzz__VerticalAlignment_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/TextCore/zzzz__NativeTextGenerationSettings_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/TextCore/zzzz__NativeTextGenerationSettings_def.hpp"
#include "UnityEngine/TextCore/zzzz__TextSpan_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::NativeTextGenerationSettings___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::NativeTextGenerationSettings___c::*)()>(&::UnityEngine::TextCore::NativeTextGenerationSettings___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x70220f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::NativeTextGenerationSettings___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::NativeTextGenerationSettings___c._get_hasLink_b__24_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::NativeTextGenerationSettings___c::*)(::UnityEngine::TextCore::TextSpan)>(
    &::UnityEngine::TextCore::NativeTextGenerationSettings___c::_get_hasLink_b__24_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x70220f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::NativeTextGenerationSettings___c*>(),
                                                                                           { "<get_hasLink>b__24_0", {}, { ::i2c::type_of<::UnityEngine::TextCore::TextSpan>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::NativeTextGenerationSettings___c::setStaticF___9(::UnityEngine::TextCore::NativeTextGenerationSettings___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::TextCore::NativeTextGenerationSettings___c*, "<>9", ::UnityEngine::TextCore::NativeTextGenerationSettings___c*>(
      std::forward<::UnityEngine::TextCore::NativeTextGenerationSettings___c*>(value));
}
inline ::UnityEngine::TextCore::NativeTextGenerationSettings___c* UnityEngine::TextCore::NativeTextGenerationSettings___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::TextCore::NativeTextGenerationSettings___c*, "<>9", ::UnityEngine::TextCore::NativeTextGenerationSettings___c*>();
}
inline void UnityEngine::TextCore::NativeTextGenerationSettings___c::setStaticF___9__24_0(::System::Predicate_1<::UnityEngine::TextCore::TextSpan>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::UnityEngine::TextCore::TextSpan>*, "<>9__24_0", ::UnityEngine::TextCore::NativeTextGenerationSettings___c*>(
      std::forward<::System::Predicate_1<::UnityEngine::TextCore::TextSpan>*>(value));
}
inline ::System::Predicate_1<::UnityEngine::TextCore::TextSpan>* UnityEngine::TextCore::NativeTextGenerationSettings___c::getStaticF___9__24_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityEngine::TextCore::TextSpan>*, "<>9__24_0", ::UnityEngine::TextCore::NativeTextGenerationSettings___c*>();
}
inline void UnityEngine::TextCore::NativeTextGenerationSettings___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::NativeTextGenerationSettings___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::TextCore::NativeTextGenerationSettings___c::_get_hasLink_b__24_0(::UnityEngine::TextCore::TextSpan span) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::NativeTextGenerationSettings___c*>(),
                                                                                         { "<get_hasLink>b__24_0", {}, { ::i2c::type_of<::UnityEngine::TextCore::TextSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, span);
}
inline ::UnityEngine::TextCore::NativeTextGenerationSettings___c* UnityEngine::TextCore::NativeTextGenerationSettings___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::NativeTextGenerationSettings___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::NativeTextGenerationSettings___c::NativeTextGenerationSettings___c() {}
//  Writing Method size for method: ::UnityEngine::TextCore::NativeTextGenerationSettings.get_hasLink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::NativeTextGenerationSettings::*)()>(&::UnityEngine::TextCore::NativeTextGenerationSettings::get_hasLink)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x7020b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::NativeTextGenerationSettings>(), { "get_hasLink", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::NativeTextGenerationSettings.CreateTextSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::TextSpan (::UnityEngine::TextCore::NativeTextGenerationSettings::*)()>(
    &::UnityEngine::TextCore::NativeTextGenerationSettings::CreateTextSpan)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x7020c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::NativeTextGenerationSettings>(), { "CreateTextSpan", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::NativeTextGenerationSettings.get_Default
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::NativeTextGenerationSettings (*)()>(&::UnityEngine::TextCore::NativeTextGenerationSettings::get_Default)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x7020dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::NativeTextGenerationSettings>(), { "get_Default", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::NativeTextGenerationSettings.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextCore::NativeTextGenerationSettings::*)()>(&::UnityEngine::TextCore::NativeTextGenerationSettings::ToString)> {
  constexpr static std::size_t size = 0xd88;
  constexpr static std::size_t addrs = 0x7020e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::NativeTextGenerationSettings>(),
                                                                                          { ::i2c::class_of<::UnityEngine::TextCore::NativeTextGenerationSettings>(), 3 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::TextCore::NativeTextGenerationSettings::get_hasLink() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::NativeTextGenerationSettings>(), { "get_hasLink", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::TextCore::TextSpan UnityEngine::TextCore::NativeTextGenerationSettings::CreateTextSpan() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::NativeTextGenerationSettings>(), { "CreateTextSpan", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::TextSpan>(*this, ___internal_method);
}
inline ::UnityEngine::TextCore::NativeTextGenerationSettings UnityEngine::TextCore::NativeTextGenerationSettings::get_Default() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::NativeTextGenerationSettings>(), { "get_Default", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::NativeTextGenerationSettings>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::TextCore::NativeTextGenerationSettings::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::NativeTextGenerationSettings>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "fontAsset", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "textSettings", ty: "::System::IntPtr", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "screenWidth", ty: "int32_t", modifiers:
// "", def_value: Some("{}"), comment: None }, CppParam { name: "screenHeight", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "wordWrapEnabled", ty: "bool",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "overflow", ty: "::UnityEngine::TextCore::TextOverflow", modifiers: "", def_value: Some("{}"), comment: None }, CppParam {
// name: "languageDirection", ty: "::UnityEngine::TextCore::LanguageDirection", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "vertexPadding", ty: "int32_t", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "horizontalAlignment", ty: "::UnityEngine::TextCore::HorizontalAlignment", modifiers: "", def_value: Some("{}"), comment: None }, CppParam {
// name: "verticalAlignment", ty: "::UnityEngine::TextCore::VerticalAlignment", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fontSize", ty: "int32_t", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "bestFit", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxFontSize", ty: "int32_t", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "minFontSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fontStyle", ty:
// "::UnityEngine::TextCore::Text::FontStyles", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fontWeight", ty: "::UnityEngine::TextCore::Text::TextFontWeight", modifiers:
// "", def_value: Some("{}"), comment: None }, CppParam { name: "textSpans", ty: "::ArrayW<::UnityEngine::TextCore::TextSpan>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "characterSpacing", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None
// }, CppParam { name: "wordSpacing", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "paragraphSpacing", ty: "int32_t", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "preProcessFlags", ty: "::UnityEngine::TextCore::PreProcessFlags", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::TextCore::NativeTextGenerationSettings::NativeTextGenerationSettings(
    ::System::IntPtr fontAsset, ::System::IntPtr textSettings, ::StringW text, int32_t screenWidth, int32_t screenHeight, bool wordWrapEnabled, ::UnityEngine::TextCore::TextOverflow overflow,
    ::UnityEngine::TextCore::LanguageDirection languageDirection, int32_t vertexPadding, ::UnityEngine::TextCore::HorizontalAlignment horizontalAlignment,
    ::UnityEngine::TextCore::VerticalAlignment verticalAlignment, int32_t fontSize, bool bestFit, int32_t maxFontSize, int32_t minFontSize, ::UnityEngine::TextCore::Text::FontStyles fontStyle,
    ::UnityEngine::TextCore::Text::TextFontWeight fontWeight, ::ArrayW<::UnityEngine::TextCore::TextSpan> textSpans, ::UnityEngine::Color32 color, int32_t characterSpacing, int32_t wordSpacing,
    int32_t paragraphSpacing, ::UnityEngine::TextCore::PreProcessFlags preProcessFlags) noexcept {
  this->fontAsset = fontAsset;
  this->textSettings = textSettings;
  this->text = text;
  this->screenWidth = screenWidth;
  this->screenHeight = screenHeight;
  this->wordWrapEnabled = wordWrapEnabled;
  this->overflow = overflow;
  this->languageDirection = languageDirection;
  this->vertexPadding = vertexPadding;
  this->horizontalAlignment = horizontalAlignment;
  this->verticalAlignment = verticalAlignment;
  this->fontSize = fontSize;
  this->bestFit = bestFit;
  this->maxFontSize = maxFontSize;
  this->minFontSize = minFontSize;
  this->fontStyle = fontStyle;
  this->fontWeight = fontWeight;
  this->textSpans = textSpans;
  this->color = color;
  this->characterSpacing = characterSpacing;
  this->wordSpacing = wordSpacing;
  this->paragraphSpacing = paragraphSpacing;
  this->preProcessFlags = preProcessFlags;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::NativeTextGenerationSettings::NativeTextGenerationSettings() {}
