#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OpaqueSortMode.hpp"
#include "UnityEngine/Rendering/zzzz__OpaqueSortMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::OpaqueSortMode::OpaqueSortMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OpaqueSortMode::OpaqueSortMode() {}
constexpr ::UnityEngine::Rendering::OpaqueSortMode UnityEngine::Rendering::OpaqueSortMode::Default{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::OpaqueSortMode UnityEngine::Rendering::OpaqueSortMode::FrontToBack{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::OpaqueSortMode UnityEngine::Rendering::OpaqueSortMode::NoDistanceSort{ static_cast<int32_t>(0x2) };
