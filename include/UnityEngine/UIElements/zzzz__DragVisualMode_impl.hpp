#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DragVisualMode.hpp"
#include "UnityEngine/UIElements/zzzz__DragVisualMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::DragVisualMode::DragVisualMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DragVisualMode::DragVisualMode()   {
}
constexpr ::UnityEngine::UIElements::DragVisualMode  UnityEngine::UIElements::DragVisualMode::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::DragVisualMode  UnityEngine::UIElements::DragVisualMode::Copy{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::DragVisualMode  UnityEngine::UIElements::DragVisualMode::Move{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::DragVisualMode  UnityEngine::UIElements::DragVisualMode::Rejected{static_cast<int32_t>(0x3)};
