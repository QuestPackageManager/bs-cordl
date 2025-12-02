#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/FramebufferFetchEvent.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__FramebufferFetchEvent_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::FramebufferFetchEvent::FramebufferFetchEvent(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::FramebufferFetchEvent::FramebufferFetchEvent() {}
constexpr ::UnityEngine::Rendering::Universal::FramebufferFetchEvent UnityEngine::Rendering::Universal::FramebufferFetchEvent::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::FramebufferFetchEvent UnityEngine::Rendering::Universal::FramebufferFetchEvent::FetchGbufferInDeferred{ static_cast<int32_t>(0x1) };
