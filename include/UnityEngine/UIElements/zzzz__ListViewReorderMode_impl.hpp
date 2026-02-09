#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ListViewReorderMode.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewReorderMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::ListViewReorderMode::ListViewReorderMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ListViewReorderMode::ListViewReorderMode()   {
}
constexpr ::UnityEngine::UIElements::ListViewReorderMode  UnityEngine::UIElements::ListViewReorderMode::Simple{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::ListViewReorderMode  UnityEngine::UIElements::ListViewReorderMode::Animated{static_cast<int32_t>(0x1)};
