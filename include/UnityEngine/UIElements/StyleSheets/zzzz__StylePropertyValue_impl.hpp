#pragma once
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyValue_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_def.hpp"
// Ctor Parameters [CppParam { name: "sheet", ty: "::UnityW<::UnityEngine::UIElements::StyleSheet>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "handle", ty:
// "::UnityEngine::UIElements::StyleValueHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyValue::StylePropertyValue(::UnityW<::UnityEngine::UIElements::StyleSheet> sheet,
                                                                                         ::UnityEngine::UIElements::StyleValueHandle handle) noexcept {
  this->sheet = sheet;
  this->handle = handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyValue::StylePropertyValue() {}
