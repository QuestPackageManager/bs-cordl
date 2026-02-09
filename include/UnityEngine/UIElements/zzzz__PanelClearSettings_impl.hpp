#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PanelClearSettings.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PanelClearSettings_def.hpp"
// Ctor Parameters [CppParam { name: "clearDepthStencil", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "clearColor", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::PanelClearSettings::PanelClearSettings(bool  clearDepthStencil, bool  clearColor, ::UnityEngine::Color  color) noexcept  {
this->clearDepthStencil = clearDepthStencil;
this->clearColor = clearColor;
this->color = color;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PanelClearSettings::PanelClearSettings()   {
}
