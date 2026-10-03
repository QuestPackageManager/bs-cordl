#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DropdownMenuSizeMode.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuSizeMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::DropdownMenuSizeMode::DropdownMenuSizeMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DropdownMenuSizeMode::DropdownMenuSizeMode() {}
constexpr ::UnityEngine::UIElements::DropdownMenuSizeMode UnityEngine::UIElements::DropdownMenuSizeMode::Auto{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::DropdownMenuSizeMode UnityEngine::UIElements::DropdownMenuSizeMode::Fixed{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::DropdownMenuSizeMode UnityEngine::UIElements::DropdownMenuSizeMode::Content{ static_cast<int32_t>(0x2) };
