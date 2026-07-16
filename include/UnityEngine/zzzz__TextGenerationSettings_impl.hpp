#pragma once
// IWYU pragma private; include "UnityEngine/TextGenerationSettings.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__FontStyle_impl.hpp"
#include "UnityEngine/zzzz__HorizontalWrapMode_impl.hpp"
#include "UnityEngine/zzzz__TextAnchor_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__VerticalWrapMode_impl.hpp"
#include "UnityEngine/zzzz__TextGenerationSettings_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextGenerationSettings.CompareColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextGenerationSettings::*)(::UnityEngine::Color, ::UnityEngine::Color)>(
    &::UnityEngine::TextGenerationSettings::CompareColors)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6c11c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerationSettings>(), { "CompareColors", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerationSettings.CompareVector2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextGenerationSettings::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(
    &::UnityEngine::TextGenerationSettings::CompareVector2)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6c11d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerationSettings>(),
                                                             { "CompareVector2", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerationSettings.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextGenerationSettings::*)(::UnityEngine::TextGenerationSettings)>(&::UnityEngine::TextGenerationSettings::Equals)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x6c11e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerationSettings>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::TextGenerationSettings>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::TextGenerationSettings::CompareColors(::UnityEngine::Color left, ::UnityEngine::Color right) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerationSettings>(),
                                                                                         { "CompareColors", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, left, right);
}
inline bool UnityEngine::TextGenerationSettings::CompareVector2(::UnityEngine::Vector2 left, ::UnityEngine::Vector2 right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerationSettings>(), { "CompareVector2", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, left, right);
}
inline bool UnityEngine::TextGenerationSettings::Equals(::UnityEngine::TextGenerationSettings other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerationSettings>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::TextGenerationSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "font", ty: "::UnityW<::UnityEngine::Font>", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "fontSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lineSpacing", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "richText", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "scaleFactor", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontStyle",
// ty: "::UnityEngine::FontStyle", modifiers: "", def_value: Some("{}") }, CppParam { name: "textAnchor", ty: "::UnityEngine::TextAnchor", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "alignByGeometry", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "resizeTextForBestFit", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "resizeTextMinSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "resizeTextMaxSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "updateBounds", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "verticalOverflow", ty: "::UnityEngine::VerticalWrapMode", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "horizontalOverflow", ty: "::UnityEngine::HorizontalWrapMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "generationExtents", ty: "::UnityEngine::Vector2", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "pivot", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "generateOutOfBounds", ty: "bool", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::TextGenerationSettings::TextGenerationSettings(::UnityW<::UnityEngine::Font> font, ::UnityEngine::Color color, int32_t fontSize, float_t lineSpacing, bool richText,
                                                                        float_t scaleFactor, ::UnityEngine::FontStyle fontStyle, ::UnityEngine::TextAnchor textAnchor, bool alignByGeometry,
                                                                        bool resizeTextForBestFit, int32_t resizeTextMinSize, int32_t resizeTextMaxSize, bool updateBounds,
                                                                        ::UnityEngine::VerticalWrapMode verticalOverflow, ::UnityEngine::HorizontalWrapMode horizontalOverflow,
                                                                        ::UnityEngine::Vector2 generationExtents, ::UnityEngine::Vector2 pivot, bool generateOutOfBounds) noexcept {
  this->font = font;
  this->color = color;
  this->fontSize = fontSize;
  this->lineSpacing = lineSpacing;
  this->richText = richText;
  this->scaleFactor = scaleFactor;
  this->fontStyle = fontStyle;
  this->textAnchor = textAnchor;
  this->alignByGeometry = alignByGeometry;
  this->resizeTextForBestFit = resizeTextForBestFit;
  this->resizeTextMinSize = resizeTextMinSize;
  this->resizeTextMaxSize = resizeTextMaxSize;
  this->updateBounds = updateBounds;
  this->verticalOverflow = verticalOverflow;
  this->horizontalOverflow = horizontalOverflow;
  this->generationExtents = generationExtents;
  this->pivot = pivot;
  this->generateOutOfBounds = generateOutOfBounds;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextGenerationSettings::TextGenerationSettings() {}
