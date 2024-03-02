#pragma once
#include "UnityEngine/Rendering/zzzz__RenderBufferLoadAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderBufferLoadAction::RenderBufferLoadAction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderBufferLoadAction::RenderBufferLoadAction() {}
constexpr ::UnityEngine::Rendering::RenderBufferLoadAction UnityEngine::Rendering::RenderBufferLoadAction::Load{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::RenderBufferLoadAction UnityEngine::Rendering::RenderBufferLoadAction::Clear{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::RenderBufferLoadAction UnityEngine::Rendering::RenderBufferLoadAction::DontCare{ static_cast<int32_t>(0x2) };
