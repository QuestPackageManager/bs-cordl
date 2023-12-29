#pragma once
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Length_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StyleValue_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyId& UnityEngine::UIElements::StyleSheets::StyleValue::__get_id() {
  return this->___id;
}
constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyId const& UnityEngine::UIElements::StyleSheets::StyleValue::__get_id() const {
  return this->___id;
}
constexpr void UnityEngine::UIElements::StyleSheets::StyleValue::__set_id(::UnityEngine::UIElements::StyleSheets::StylePropertyId value) {
  this->___id = value;
}
constexpr ::UnityEngine::UIElements::StyleKeyword& UnityEngine::UIElements::StyleSheets::StyleValue::__get_keyword() {
  return this->___keyword;
}
constexpr ::UnityEngine::UIElements::StyleKeyword const& UnityEngine::UIElements::StyleSheets::StyleValue::__get_keyword() const {
  return this->___keyword;
}
constexpr void UnityEngine::UIElements::StyleSheets::StyleValue::__set_keyword(::UnityEngine::UIElements::StyleKeyword value) {
  this->___keyword = value;
}
constexpr float_t& UnityEngine::UIElements::StyleSheets::StyleValue::__get_number() {
  return this->___number;
}
constexpr float_t const& UnityEngine::UIElements::StyleSheets::StyleValue::__get_number() const {
  return this->___number;
}
constexpr void UnityEngine::UIElements::StyleSheets::StyleValue::__set_number(float_t value) {
  this->___number = value;
}
constexpr ::UnityEngine::UIElements::Length& UnityEngine::UIElements::StyleSheets::StyleValue::__get_length() {
  return this->___length;
}
constexpr ::UnityEngine::UIElements::Length const& UnityEngine::UIElements::StyleSheets::StyleValue::__get_length() const {
  return this->___length;
}
constexpr void UnityEngine::UIElements::StyleSheets::StyleValue::__set_length(::UnityEngine::UIElements::Length value) {
  this->___length = value;
}
constexpr ::UnityEngine::Color& UnityEngine::UIElements::StyleSheets::StyleValue::__get_color() {
  return this->___color;
}
constexpr ::UnityEngine::Color const& UnityEngine::UIElements::StyleSheets::StyleValue::__get_color() const {
  return this->___color;
}
constexpr void UnityEngine::UIElements::StyleSheets::StyleValue::__set_color(::UnityEngine::Color value) {
  this->___color = value;
}
constexpr ::System::Runtime::InteropServices::GCHandle& UnityEngine::UIElements::StyleSheets::StyleValue::__get_resource() {
  return this->___resource;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& UnityEngine::UIElements::StyleSheets::StyleValue::__get_resource() const {
  return this->___resource;
}
constexpr void UnityEngine::UIElements::StyleSheets::StyleValue::__set_resource(::System::Runtime::InteropServices::GCHandle value) {
  this->___resource = value;
}
// Ctor Parameters [CppParam { name: "id", ty: "::UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: Some("{}") }, CppParam { name: "keyword", ty:
// "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: Some("{}") }, CppParam { name: "number", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "length", ty:
// "::UnityEngine::UIElements::Length", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "resource", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleSheets::StyleValue::StyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleKeyword keyword, float_t number,
                                                                         ::UnityEngine::UIElements::Length length, ::UnityEngine::Color color,
                                                                         ::System::Runtime::InteropServices::GCHandle resource) noexcept {
  this->id = id;
  this->keyword = keyword;
  this->number = number;
  this->length = length;
  this->color = color;
  this->resource = resource;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::StyleValue::StyleValue() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
