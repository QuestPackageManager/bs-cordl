#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RenderPassEvent.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent::RenderPassEvent(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent::RenderPassEvent() {}
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent UnityEngine::Rendering::Universal::RenderPassEvent::BeforeRendering{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent UnityEngine::Rendering::Universal::RenderPassEvent::BeforeRenderingShadows{ static_cast<int32_t>(0x32) };
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent UnityEngine::Rendering::Universal::RenderPassEvent::AfterRenderingShadows{ static_cast<int32_t>(0x64) };
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent UnityEngine::Rendering::Universal::RenderPassEvent::BeforeRenderingPrePasses{ static_cast<int32_t>(0x96) };
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent UnityEngine::Rendering::Universal::RenderPassEvent::AfterRenderingPrePasses{ static_cast<int32_t>(0xc8) };
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent UnityEngine::Rendering::Universal::RenderPassEvent::BeforeRenderingGbuffer{ static_cast<int32_t>(0xd2) };
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent UnityEngine::Rendering::Universal::RenderPassEvent::AfterRenderingGbuffer{ static_cast<int32_t>(0xdc) };
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent UnityEngine::Rendering::Universal::RenderPassEvent::BeforeRenderingDeferredLights{ static_cast<int32_t>(0xe6) };
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent UnityEngine::Rendering::Universal::RenderPassEvent::AfterRenderingDeferredLights{ static_cast<int32_t>(0xf0) };
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent UnityEngine::Rendering::Universal::RenderPassEvent::BeforeRenderingOpaques{ static_cast<int32_t>(0xfa) };
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent UnityEngine::Rendering::Universal::RenderPassEvent::AfterRenderingOpaques{ static_cast<int32_t>(0x12c) };
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent UnityEngine::Rendering::Universal::RenderPassEvent::BeforeRenderingSkybox{ static_cast<int32_t>(0x15e) };
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent UnityEngine::Rendering::Universal::RenderPassEvent::AfterRenderingSkybox{ static_cast<int32_t>(0x190) };
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent UnityEngine::Rendering::Universal::RenderPassEvent::BeforeRenderingTransparents{ static_cast<int32_t>(0x1c2) };
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent UnityEngine::Rendering::Universal::RenderPassEvent::AfterRenderingTransparents{ static_cast<int32_t>(0x1f4) };
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent UnityEngine::Rendering::Universal::RenderPassEvent::BeforeRenderingPostProcessing{ static_cast<int32_t>(0x226) };
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent UnityEngine::Rendering::Universal::RenderPassEvent::AfterRenderingPostProcessing{ static_cast<int32_t>(0x258) };
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent UnityEngine::Rendering::Universal::RenderPassEvent::AfterRendering{ static_cast<int32_t>(0x3e8) };
