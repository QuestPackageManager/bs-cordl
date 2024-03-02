#pragma once
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderBufferStoreAction::RenderBufferStoreAction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderBufferStoreAction::RenderBufferStoreAction() {}
constexpr ::UnityEngine::Rendering::RenderBufferStoreAction UnityEngine::Rendering::RenderBufferStoreAction::Store{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::RenderBufferStoreAction UnityEngine::Rendering::RenderBufferStoreAction::Resolve{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::RenderBufferStoreAction UnityEngine::Rendering::RenderBufferStoreAction::StoreAndResolve{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::RenderBufferStoreAction UnityEngine::Rendering::RenderBufferStoreAction::DontCare{ static_cast<int32_t>(0x3) };
