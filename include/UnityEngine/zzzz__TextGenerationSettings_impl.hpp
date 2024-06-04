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
#include "UnityEngine/zzzz__FontStyle_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/zzzz__HorizontalWrapMode_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__VerticalWrapMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextGenerationSettings.CompareColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextGenerationSettings::*)(::UnityEngine::Color, ::UnityEngine::Color)>(
    &::UnityEngine::TextGenerationSettings::CompareColors)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x34cb510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextGenerationSettings>::get(), "CompareColors", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerationSettings.CompareVector2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextGenerationSettings::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(
    &::UnityEngine::TextGenerationSettings::CompareVector2)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x34cb648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextGenerationSettings>::get(), "CompareVector2", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerationSettings.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextGenerationSettings::*)(::UnityEngine::TextGenerationSettings)>(
    &::UnityEngine::TextGenerationSettings::Equals)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x34cb710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextGenerationSettings>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextGenerationSettings>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::TextGenerationSettings::CompareColors(::UnityEngine::Color left, ::UnityEngine::Color right) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextGenerationSettings>::get(), "CompareColors", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, left, right);
}
inline bool UnityEngine::TextGenerationSettings::CompareVector2(::UnityEngine::Vector2 left, ::UnityEngine::Vector2 right) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextGenerationSettings>::get(), "CompareVector2", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, left, right);
}
inline bool UnityEngine::TextGenerationSettings::Equals(::UnityEngine::TextGenerationSettings other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextGenerationSettings>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextGenerationSettings>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "font", ty: "::UnityW<::UnityEngine::Font>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "",
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
