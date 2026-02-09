#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PanelScaleMode.hpp"
#include "UnityEngine/UIElements/zzzz__PanelScaleMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::PanelScaleMode::PanelScaleMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PanelScaleMode::PanelScaleMode()   {
}
constexpr ::UnityEngine::UIElements::PanelScaleMode  UnityEngine::UIElements::PanelScaleMode::ConstantPixelSize{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::PanelScaleMode  UnityEngine::UIElements::PanelScaleMode::ConstantPhysicalSize{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::PanelScaleMode  UnityEngine::UIElements::PanelScaleMode::ScaleWithScreenSize{static_cast<int32_t>(0x2)};
