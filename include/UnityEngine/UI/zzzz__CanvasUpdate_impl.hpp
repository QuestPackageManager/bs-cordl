#pragma once
// IWYU pragma private; include "UnityEngine/UI/CanvasUpdate.hpp"
#include "UnityEngine/UI/zzzz__CanvasUpdate_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::CanvasUpdate::CanvasUpdate(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::CanvasUpdate::CanvasUpdate()   {
}
constexpr ::UnityEngine::UI::CanvasUpdate  UnityEngine::UI::CanvasUpdate::Prelayout{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UI::CanvasUpdate  UnityEngine::UI::CanvasUpdate::Layout{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UI::CanvasUpdate  UnityEngine::UI::CanvasUpdate::PostLayout{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UI::CanvasUpdate  UnityEngine::UI::CanvasUpdate::PreRender{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::UI::CanvasUpdate  UnityEngine::UI::CanvasUpdate::LatePreRender{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::UI::CanvasUpdate  UnityEngine::UI::CanvasUpdate::MaxUpdateValue{static_cast<int32_t>(0x5)};
