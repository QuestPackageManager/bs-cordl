#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderStateMask.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateMask_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderStateMask::RenderStateMask(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderStateMask::RenderStateMask() {}
constexpr ::UnityEngine::Rendering::RenderStateMask UnityEngine::Rendering::RenderStateMask::Nothing{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::RenderStateMask UnityEngine::Rendering::RenderStateMask::Blend{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::RenderStateMask UnityEngine::Rendering::RenderStateMask::Raster{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::RenderStateMask UnityEngine::Rendering::RenderStateMask::Depth{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::RenderStateMask UnityEngine::Rendering::RenderStateMask::Stencil{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::Rendering::RenderStateMask UnityEngine::Rendering::RenderStateMask::Everything{ static_cast<int32_t>(0xf) };
