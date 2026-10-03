#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/LibraryVisibility.hpp"
#include "UnityEngine/UIElements/zzzz__LibraryVisibility_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::LibraryVisibility::LibraryVisibility(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::LibraryVisibility::LibraryVisibility() {}
constexpr ::UnityEngine::UIElements::LibraryVisibility UnityEngine::UIElements::LibraryVisibility::Default{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::LibraryVisibility UnityEngine::UIElements::LibraryVisibility::Visible{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::LibraryVisibility UnityEngine::UIElements::LibraryVisibility::Hidden{ static_cast<int32_t>(0x2) };
