#pragma once
#include "UnityEngine/zzzz__FontStyle_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__CharacterInfo_def.hpp"
#include "UnityEngine/zzzz__FontStyle_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "vert", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "width", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "size", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "style", ty: "::UnityEngine::FontStyle", modifiers: "", def_value: Some("{}") }, CppParam { name: "flipped", ty: "bool",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::CharacterInfo::CharacterInfo(int32_t index, ::UnityEngine::Rect uv, ::UnityEngine::Rect vert, float_t width, int32_t size, ::UnityEngine::FontStyle style,
                                                      bool flipped) noexcept {
  this->index = index;
  this->uv = uv;
  this->vert = vert;
  this->width = width;
  this->size = size;
  this->style = style;
  this->flipped = flipped;
}
// Ctor Parameters []
constexpr ::UnityEngine::CharacterInfo::CharacterInfo() {}
