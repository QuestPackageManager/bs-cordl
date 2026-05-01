#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PanelRenderMode.hpp"
#include "UnityEngine/UIElements/zzzz__PanelRenderMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::PanelRenderMode::PanelRenderMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PanelRenderMode::PanelRenderMode() {}
constexpr ::UnityEngine::UIElements::PanelRenderMode UnityEngine::UIElements::PanelRenderMode::ScreenSpaceOverlay{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::PanelRenderMode UnityEngine::UIElements::PanelRenderMode::WorldSpace{ static_cast<int32_t>(0x1) };
