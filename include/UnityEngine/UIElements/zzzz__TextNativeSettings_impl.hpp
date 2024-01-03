#pragma once
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__FontStyle_impl.hpp"
#include "UnityEngine/zzzz__TextAnchor_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextNativeSettings_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
#include "UnityEngine/zzzz__FontStyle_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
// Ctor Parameters [CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "font", ty: "::UnityEngine::Font*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "scaling", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "style", ty: "::UnityEngine::FontStyle", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "anchor", ty: "::UnityEngine::TextAnchor", modifiers: "", def_value: Some("{}") }, CppParam { name: "wordWrap", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "wordWrapWidth",
// ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "richText", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::TextNativeSettings::TextNativeSettings(::StringW text, ::UnityEngine::Font* font, int32_t size, float_t scaling, ::UnityEngine::FontStyle style,
                                                                            ::UnityEngine::Color color, ::UnityEngine::TextAnchor anchor, bool wordWrap, float_t wordWrapWidth,
                                                                            bool richText) noexcept {
  this->text = text;
  this->font = font;
  this->size = size;
  this->scaling = scaling;
  this->style = style;
  this->color = color;
  this->anchor = anchor;
  this->wordWrap = wordWrap;
  this->wordWrapWidth = wordWrapWidth;
  this->richText = richText;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TextNativeSettings::TextNativeSettings() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
